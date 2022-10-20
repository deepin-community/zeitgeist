/**
 * SECTION:log
 * @short_description: Primary access point for talking to the Zeitgeist daemon
 * 
 * <para><link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> encapsulates the low level access to the Zeitgeist daemon. You can use it to manage the log by inserting and deleting entries as well as do queries on the logged data.</para><para>It&apos;s important to realize that the #ZeitgeistLog class does not expose any API that does synchronous communications with the message bus - everything is asynchronous. To ease development some of the methods have variants that are &quot;fire and forget&quot; ignoring the normal return value, so that callbacks does not have to be set up.</para>
 */
/**
 * ZEITGEIST_TYPE_LOG:
 * 
 * The type for <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link>.
 */
/**
 * zeitgeist_log_insert_event:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @event: (in): &nbsp;.  <para>A <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-insert-event-finish"><function>zeitgeist_log_insert_event_finish()</function></link>
 */
/**
 * zeitgeist_log_insert_event_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-insert-event"><function>zeitgeist_log_insert_event()</function></link>
 */
/**
 * zeitgeist_log_insert_events:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @events: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-insert-events-finish"><function>zeitgeist_log_insert_events_finish()</function></link>
 */
/**
 * zeitgeist_log_insert_events_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-insert-events"><function>zeitgeist_log_insert_events()</function></link>
 */
/**
 * zeitgeist_log_insert_event_no_reply:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @event: (in): &nbsp;.  <para>A <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log. This method is &amp;quot;fire and forget&amp;quot; and the caller will never know whether the events was successfully inserted or not.
 * 
 * <para>This method is exactly equivalent to calling zeitgeist_log_insert_event() with NULL set as @cancellable, @callback, and @user_data.</para>
 */
/**
 * zeitgeist_log_insert_events_no_reply:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @events: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Asynchronously send a set of events to the Zeitgeist daemon, requesting they be inserted into the log. This method is &amp;quot;fire and forget&amp;quot; and the caller will never know whether the events was successfully inserted or not.
 * 
 * <para>This method is exactly equivalent to calling zeitgeist_log_insert_event() with NULL set as @cancellable, @callback, and @user_data.</para>
 */
/**
 * zeitgeist_log_find_events:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @time_range: (in): &nbsp;.  <para><link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> A time range in which the events should be considered in </para>
 * @event_templates: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @storage_state: (in): &nbsp;.  <para><link linkend="ZeitgeistStorageState"><type>ZeitgeistStorageState</type></link> storage state </para>
 * @num_events: (in): &nbsp;.  <para>int represteing the number of events that should be returned </para>
 * @result_type: (in): &nbsp;.  <para><link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> how the events should be grouped and sorted </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Send a query matching a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> templates to the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link>. The query will match if an event matches any of the templates. If an event template has more than one <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> the query will match if any one of the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>s templates match.
 * 
 * <para>The query will be done via an asynchronous DBus call and this method will return immediately. The return value will be passed to callback as a list of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s. This list must be the sole argument for the callback.</para><para>If you need to do a query yielding a large (or unpredictable) result set and you only want to show some of the results at the same time (eg., by paging them), consider using <link linkend="zeitgeist-log-find-event-ids"><function>zeitgeist_log_find_event_ids()</function></link>.</para><para>In order to use this method there needs to be a mainloop runnning. Both Qt and GLib mainloops are supported.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-events-finish"><function>zeitgeist_log_find_events_finish()</function></link>
 */
/**
 * zeitgeist_log_find_events_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Send a query matching a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> templates to the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link>. The query will match if an event matches any of the templates. If an event template has more than one <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> the query will match if any one of the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>s templates match.
 * 
 * <para>The query will be done via an asynchronous DBus call and this method will return immediately. The return value will be passed to callback as a list of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s. This list must be the sole argument for the callback.</para><para>If you need to do a query yielding a large (or unpredictable) result set and you only want to show some of the results at the same time (eg., by paging them), consider using <link linkend="zeitgeist-log-find-event-ids"><function>zeitgeist_log_find_event_ids()</function></link>.</para><para>In order to use this method there needs to be a mainloop runnning. Both Qt and GLib mainloops are supported.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-events"><function>zeitgeist_log_find_events()</function></link>
 */
/**
 * zeitgeist_log_find_event_ids:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @time_range: (in): &nbsp;.  <para><link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> A time range in which the events should be considered in </para>
 * @event_templates: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> </para>
 * @storage_state: (in): &nbsp;.  <para><link linkend="ZeitgeistStorageState"><type>ZeitgeistStorageState</type></link> storage state </para>
 * @num_events: (in): &nbsp;.  <para>int represteing the number of events that should be returned </para>
 * @result_type: (in): &nbsp;.  <para><link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> how the events should be grouped and sorted </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Send a query matching a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> templates to the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link>. The query will match if an event matches any of the templates. If an event template has more than one <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> the query will match if any one of the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>s templates match.
 * 
 * <para>The query will be done via an asynchronous DBus call and this method will return immediately. The return value will be passed to callback as a list of intergers represrting <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> id&apos;s. This list must be the sole argument for the callback.</para><para>In order to use this method there needs to be a mainloop runnning. Both Qt and GLib mainloops are supported.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-event-ids-finish"><function>zeitgeist_log_find_event_ids_finish()</function></link>
 */
/**
 * zeitgeist_log_find_event_ids_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Send a query matching a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> templates to the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link>. The query will match if an event matches any of the templates. If an event template has more than one <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> the query will match if any one of the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>s templates match.
 * 
 * <para>The query will be done via an asynchronous DBus call and this method will return immediately. The return value will be passed to callback as a list of intergers represrting <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> id&apos;s. This list must be the sole argument for the callback.</para><para>In order to use this method there needs to be a mainloop runnning. Both Qt and GLib mainloops are supported.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-event-ids"><function>zeitgeist_log_find_event_ids()</function></link>
 */
/**
 * zeitgeist_log_get_events:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @event_ids: (in): &nbsp;.  <para>a <link linkend="GArray"><type>GArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> ids </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Look up a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> in the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> given a collection of event ids. This is useful for looking up the event data for events found with the find_event_ids_* family of functions.
 * 
 * <para>Each <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> which is not found in the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> is represented by NULL in the resulting collection. The query will be done via an asynchronous DBus call and this method will return immediately. The returned events will be passed to callback as a list of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s, which must be the only argument of the function.</para><para>In order to use this method there needs to be a mainloop runnning.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-get-events-finish"><function>zeitgeist_log_get_events_finish()</function></link>
 */
/**
 * zeitgeist_log_get_events_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Look up a collection of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> in the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> given a collection of event ids. This is useful for looking up the event data for events found with the find_event_ids_* family of functions.
 * 
 * <para>Each <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> which is not found in the <link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> is represented by NULL in the resulting collection. The query will be done via an asynchronous DBus call and this method will return immediately. The returned events will be passed to callback as a list of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s, which must be the only argument of the function.</para><para>In order to use this method there needs to be a mainloop runnning.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-get-events"><function>zeitgeist_log_get_events()</function></link>
 */
/**
 * zeitgeist_log_find_related_uris:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @time_range: (in): &nbsp;.  <para><link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> A time range in which the events should be considered in </para>
 * @event_templates: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> describing the events to relate to </para>
 * @result_event_templates: (in): &nbsp;.  <para>An <link linkend="GPtrArray"><type>GPtrArray</type></link> of <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> desrcibing the result to be returned </para>
 * @storage_state: (in): &nbsp;.  <para><link linkend="ZeitgeistStorageState"><type>ZeitgeistStorageState</type></link> storage state </para>
 * @num_events: (in): &nbsp;.  <para>int represteing the number of events that should be returned </para>
 * @result_type: (in): &nbsp;.  <para><link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> how the events should be grouped and sorted </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Get a list of URIs of subjects which frequently occur together with events matching event_templates. Possibly restricting to time_range or to URIs that occur as subject of events matching result_event_templates.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-related-uris-finish"><function>zeitgeist_log_find_related_uris_finish()</function></link>
 */
/**
 * zeitgeist_log_find_related_uris_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Get a list of URIs of subjects which frequently occur together with events matching event_templates. Possibly restricting to time_range or to URIs that occur as subject of events matching result_event_templates.
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-find-related-uris"><function>zeitgeist_log_find_related_uris()</function></link>
 */
/**
 * zeitgeist_log_delete_events:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @event_ids: (in): &nbsp;.  <para>Array&lt;uint32&gt; </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Delete a collection of events from the zeitgeist log given their event ids.
 * 
 * <para>The deletion will be done asynchronously, and this method returns immediately.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-delete-events-finish"><function>zeitgeist_log_delete_events_finish()</function></link>
 */
/**
 * zeitgeist_log_delete_events_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Delete a collection of events from the zeitgeist log given their event ids.
 * 
 * <para>The deletion will be done asynchronously, and this method returns immediately.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-delete-events"><function>zeitgeist_log_delete_events()</function></link>
 */
/**
 * zeitgeist_log_quit:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @cancellable: (in) (allow-none): &nbsp;.  
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL 
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-quit-finish"><function>zeitgeist_log_quit_finish()</function></link>
 */
/**
 * zeitgeist_log_quit_finish:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL 
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-log-quit"><function>zeitgeist_log_quit()</function></link>
 */
/**
 * zeitgeist_log_install_monitor:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @monitor: (in): &nbsp;.  <para>A <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> to report back inserts and deletes </para>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Install a monitor in the Zeitgeist engine that calls back when events matching event_templates are logged. The matching is done exactly as in the find_* family of methods and in Event.matches_template. Furthermore matched events must also have timestamps lying in time_range.
 * 
 * <para>To remove a monitor call remove_monitor() on the returned Monitor instance.</para>
 */
/**
 * zeitgeist_log_remove_monitor:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @monitor: (in) (transfer full): &nbsp;.  <para>A <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> to report back inserts and deletes </para>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Remove a monitor from Zeitgeist engine that calls back when events matching event_templates are logged.
 */
/**
 * zeitgeist_log_get_version:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * @major: (out): &nbsp;.  <para>Location for the major version </para>
 * @minor: (out): &nbsp;.  <para>Location for the minor version </para>
 * @micro: (out): &nbsp;.  <para>Location for the micro version </para>
 * 
 * Gets version of currently running Zeitgeist daemon.
 * 
 * <para>This method will return the version of Zeitgeist daemon this instance is connected to. If you call this method right after zeitgeist_log_new(), only zeros will be returned, a valid version number will only be returned once this instance successfully connected to the Zeitgeist daemon - ie. the value of the &quot;is-connected&quot; property must be TRUE (you can connect to the &quot;notify::is-connected&quot; signal otherwise).</para>
 */
/**
 * zeitgeist_log_get_extensions:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * 
 * Gets extensions of the running Zeitgeist daemon.
 * 
 * Returns: (array length=result_length1): <para>array of extenstions names strings </para>
 */
/**
 * zeitgeist_log_datapath:
 * @self: the <link linkend="ZeitgeistLog"><type>ZeitgeistLog</type></link> instance
 * 
 * Gets datapath of the running Zeitgeist daemon.
 * 
 * Returns: <para>string datapath </para>
 */
/**
 * zeitgeist_log_new:
 */
/**
 * zeitgeist_log_get_default:
 * 
 * Get a unique instance of #ZeitgeistLog, that you can share in your application without caring about memory management.
 * 
 * <para>See zeitgeist_log_new() for more information.</para>
 * 
 * Returns: <para>ZeitgeistLog. </para>
 */
/**
 * ZeitgeistLog:
 * 
 * Primary access point for talking to the Zeitgeist daemon
 * 
 * <para><link linkend="zeitgeist-log-new"><function>zeitgeist_log_new()</function></link> encapsulates the low level access to the Zeitgeist daemon. You can use it to manage the log by inserting and deleting entries as well as do queries on the logged data.</para><para>It&apos;s important to realize that the #ZeitgeistLog class does not expose any API that does synchronous communications with the message bus - everything is asynchronous. To ease development some of the methods have variants that are &quot;fire and forget&quot; ignoring the normal return value, so that callbacks does not have to be set up.</para>
 */
/**
 * ZeitgeistLogClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-LOG:CAPS"><literal>ZEITGEIST_TYPE_LOG</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
