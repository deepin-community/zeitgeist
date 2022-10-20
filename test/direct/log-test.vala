/* log-test.vala
 *
 * Copyright © 2012 Christian Dywan <christian@twotoasts.de>
 *
 * Based upon a C implementation (© 2010 Canonical Ltd) by:
 *  Mikkel Kamstrup Erlandsen <mikkel.kamstrup@canonical.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

using Zeitgeist;
using Zeitgeist.SQLite;
using Assertions;

int main (string[] argv)
{
    Test.init (ref argv);

    Test.add_func ("/Log/InsertGetDelete", insert_get_delete_test);
    Test.add_func ("/Log/GetDefault", get_default_test);

    return Test.run ();
}

void assert_deleted (GenericArray<uint32> ids,
                     string table,
                     Database database) throws Zeitgeist.EngineError
{
    uint32[] simple_ids = new uint32[ids.length];
    for (int i = 0; i < ids.length; i++)
    {
        simple_ids[i] = ids[i];
    }

    unowned Sqlite.Database db = database.database;
    string sql = """
        SELECT value FROM %s WHERE id IN (%s)
        """.printf (table, database.get_sql_string_from_event_ids (simple_ids));
    int rc = db.exec (sql,
        (n_columns, values, column_names) =>
        {
            error ("Delete event did not delete %s value %s\n", table, values[0]);
        }, null);
    database.assert_query_success (rc, "SQL Error");
}

void events_deleted (Zeitgeist.Log log,
                     AsyncResult res,
                     Array<uint32> event_ids,
                     GenericArray<uint32> text_ids,
                     GenericArray<uint32> storage_ids,
                     GenericArray<uint32> payload_ids,
                     GenericArray<uint32> uri_ids,
                     Database database,
                     MainLoop mainloop)
{
    try {
        log.delete_events.end (res);
    }
    catch (Error error) {
        critical ("Failed to delete events: %s", error.message);
        return;
    }

    try {
        assert_deleted (text_ids, "text", database);
        assert_deleted (storage_ids, "storage", database);
        assert_deleted (uri_ids, "uri", database);
        assert_deleted (payload_ids, "payload", database);
    }
    catch (Error error) {
        critical ("Failed to read database: %s", error.message);
    }
    finally {
        mainloop.quit();
    }
}

void events_received (Zeitgeist.Log log,
                      AsyncResult res,
                      GenericArray<Event> expected_events,
                      Array<uint32> event_ids,
                      Database database,
                      MainLoop mainloop)
{
    ResultSet events;
    try {
        events = log.get_events.end (res);
    }
    catch (Error error) {
        critical ("Failed to get events: %s", error.message);
        return;
    }
    /* Assert that we got what we expected, and collect the event ids,
     * so we can delete the events */
    assert (expected_events.length == events.size());
    for (int i = 0; i < events.size(); ++i)
    {
        Event exp_event = expected_events[i];
        Event? event = events.next_value();
        assert (event.interpretation == exp_event.interpretation);
        assert (event.manifestation == exp_event.manifestation);
        assert (event.actor == exp_event.actor);
        assert (event.num_subjects () == exp_event.num_subjects ());
    }

    var text_ids = new GenericArray<uint32> ();
    var storage_ids = new GenericArray<uint32> ();
    var uri_ids = new GenericArray<uint32> ();
    var payload_ids = new GenericArray<uint32> ();

    uint32[] simple_event_ids = new uint32[event_ids.length];
    for (int i = 0; i < event_ids.length; i++)
        simple_event_ids[i] = event_ids.index (i);

    try {
        unowned Sqlite.Database db = database.database;
        string sql = """
            SELECT
                subj_text,
                subj_storage,
                origin,
                subj_id,
                subj_id_current,
                subj_origin,
                subj_origin_current,
                payload
            FROM event
            WHERE id IN (%s)
            """.printf (database.get_sql_string_from_event_ids (simple_event_ids));

        int rc = db.exec (sql,
            (n_columns, values, column_names) =>
            {
                for (int i = 0; i < n_columns; i++)
                {
                    if (values[i] == null) {
                        debug ("Column " + column_names[i]);
                    }

#if VALA_0_40
                    uint32 val = (uint32) ulong.parse (values[i]);
#else
                    uint32 val = (uint32) values[i].to_ulong ();
#endif
                    if (i == 0) {
                        text_ids.add (val);
                    }
                    else if (i == 1) {
                        storage_ids.add (val);
                    }
                    else if (i >= 2 && i <= 6) {
                        uri_ids.add (val);
                    }
                    else if (i == 7) {
                        payload_ids.add (val);
                    }
                }

                return 0;
            }, null);

        database.assert_query_success (rc, "SQL Error");
    }
    catch (Error error) {
        critical ("Failed to read database: %s", error.message);
    }

    log.delete_events.begin (event_ids, null, (log, res) => {
        events_deleted (
            (Zeitgeist.Log) log,
            res,
            event_ids,
            text_ids,
            storage_ids,
            uri_ids,
            payload_ids,
            database,
            mainloop
        );
    });
}

void events_inserted (Zeitgeist.Log log,
                       AsyncResult res,
                       GenericArray<Event> expected_events,
                       Database database,
                       MainLoop mainloop)
{
    Array<uint32> event_ids;
    try {
        event_ids = log.insert_events.end (res);
    }
    catch (Error error) {
        critical ("Failed to insert events: %s", error.message);
        return;
    }
    assert (expected_events.length == event_ids.length);

    log.get_events.begin (event_ids, null, (log, res) => {
        events_received ((Zeitgeist.Log) log, res, expected_events, event_ids, database, mainloop);
    });
}

bool quit_main_loop ()
{
    new MainLoop (MainContext.default ()).quit ();
    return false;
}

void insert_get_delete_test ()
{
    var mainloop = new MainLoop(MainContext.default ());
    var expected_events = new GenericArray<Event> ();
    var ev = new Event ();
    var su = new Subject ();
    ev.add_subject (su);
    expected_events.add (ev);
    ev.interpretation = "foo://Interp";
    ev.manifestation = "foo://Manif";
    ev.actor = "app://firefox.desktop";
    ev.origin = "app://firefox.desktop";

    var payload = new ByteArray ();
    uint8[] byte = { 255 };
    payload.append (byte);
    ev.payload = payload;

    su.uri = "file:///tmp/bar.txt";
    su.interpretation = "foo://TextDoc";
    su.manifestation = "foo://File";
    su.mimetype = "text/plain";
    su.origin = "file:///tmp";
    su.text = "bar.txt";
    su.storage = "bfb486f6-f5f8-4296-8871-0cc749cf8ef7";

    Database database;
    try {
        database = new Zeitgeist.SQLite.Database ();
    }
    catch (Error error) {
        critical ("Failed to open database");
        return;
    }

    /* This method call now owns all events, subjects, and the events array */
    Zeitgeist.Log.get_default ().insert_events.begin (
        expected_events, null, (log, res) => {
            events_inserted ((Zeitgeist.Log) log, res, expected_events, database, mainloop);
        });
    assert (expected_events.length == 1);

    Timeout.add_seconds (1, quit_main_loop);
    mainloop.run ();
}

void get_default_test ()
{
    var log1 = Zeitgeist.Log.get_default ();
    var log2 = Zeitgeist.Log.get_default ();
    assert (log1 == log2);
}

// vim:expandtab:ts=4:sw=4
