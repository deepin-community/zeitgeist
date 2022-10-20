/*
 * Copyright (C) 2010 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by Mikkel Kamstrup Erlandsen <mikkel.kamstrup@canonical.com>
 *
 */

#include <glib.h>
#include <glib/gprintf.h>
#include <glib-object.h>
#include <zeitgeist.h>

static void
on_events_received (ZeitgeistLog  *log,
                    GAsyncResult *res,
                    gpointer      user_data)
{
  ZeitgeistResultSet *events;
  ZeitgeistEvent     *event;
  ZeitgeistSubject   *subject;
  GError             *error;
  GMainLoop          *mainloop = (GMainLoop*) user_data;
  gint                i;
  
  error = NULL;
  events = zeitgeist_log_find_events_finish (log, res, &error);

  if (error)
    {
      g_warning ("Error reading results: %s", error->message);
      g_error_free (error);
      return;
    }

  g_message ("Got %i events:", zeitgeist_result_set_size (events));

  while (zeitgeist_result_set_has_next (events))
    {
      event = zeitgeist_result_set_next_value (events);
      for (i = 0; i < zeitgeist_event_num_subjects (event); i++)
        {
          subject = zeitgeist_event_get_subject (event, i);
          g_printf ("%s\n", zeitgeist_subject_get_uri (subject));
        }
    }

  g_object_unref (events);
  
  g_main_loop_quit (mainloop);
}

gint
main (gint   argc,
      gchar *argv[])
{
  GMainLoop          *mainloop;
  ZeitgeistLog       *log;
  GPtrArray          *templates;
  
  mainloop = g_main_loop_new (NULL, FALSE);
  log = zeitgeist_log_new();
  
  templates = g_ptr_array_new ();
  g_ptr_array_add (templates, zeitgeist_event_new ());
  
  zeitgeist_log_find_events (log,
                             zeitgeist_time_range_new_to_now (),
                             templates,
                             ZEITGEIST_STORAGE_STATE_ANY,
                             10,
                             ZEITGEIST_RESULT_TYPE_MOST_RECENT_EVENTS,
                             NULL,
                             (GAsyncReadyCallback)on_events_received,
                             mainloop);

  g_main_loop_run (mainloop);

  return 0;
}
