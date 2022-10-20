/**
 * ZeitgeistVersionStruct:
 * @major: Major version number.
 * @minor: Minor version number.
 * @micro: Micro version number.
 * 
 * Version struct consisting of the following fields: - major - minor - minus
 */
/**
 * zeitgeist_version_struct_dup:
 * @self: the instance to duplicate
 * 
 * Creates a copy of self.
 * 
 * <emphasis>See also</emphasis>: zeitgeist_version_struct_copy(), zeitgeist_version_struct_destroy(), zeitgeist_version_struct_free()
 * 
 * Returns: a copy of @self, free with zeitgeist_version_struct_free()
 */
/**
 * zeitgeist_version_struct_free:
 * @self: the struct to free
 * 
 * Frees the heap-allocated struct.
 * 
 * <emphasis>See also</emphasis>: zeitgeist_version_struct_dup(), zeitgeist_version_struct_copy(), zeitgeist_version_struct_destroy()
 */
/**
 * zeitgeist_version_struct_copy:
 * @self: the struct to copy
 * @dest: a unused struct. Use zeitgeist_version_struct_destroy() to free the content.
 * 
 * Creates a copy of self.
 * 
 * <emphasis>See also</emphasis>: zeitgeist_version_struct_dup(), zeitgeist_version_struct_destroy(), zeitgeist_version_struct_free()
 */
/**
 * zeitgeist_version_struct_destroy:
 * @self: the struct to destroy
 * 
 * Frees the content of the struct pointed by @self.
 * 
 * <emphasis>See also</emphasis>: zeitgeist_version_struct_dup(), zeitgeist_version_struct_copy(), zeitgeist_version_struct_free()
 */
/**
 * zeitgeist_remote_log_delete_events:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @event_ids_length1: length of the @event_ids array
 * @event_ids: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-delete-events-finish"><function>zeitgeist_remote_log_delete_events_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_delete_events_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-delete-events"><function>zeitgeist_remote_log_delete_events()</function></link>
 */
/**
 * zeitgeist_remote_log_find_event_ids:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @time_range: &nbsp;
 * @event_templates: &nbsp;
 * @storage_state: &nbsp;
 * @num_events: &nbsp;
 * @result_type: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-event-ids-finish"><function>zeitgeist_remote_log_find_event_ids_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_find_event_ids_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-event-ids"><function>zeitgeist_remote_log_find_event_ids()</function></link>
 */
/**
 * zeitgeist_remote_log_find_events:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @time_range: &nbsp;
 * @event_templates: &nbsp;
 * @storage_state: &nbsp;
 * @num_events: &nbsp;
 * @result_type: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-events-finish"><function>zeitgeist_remote_log_find_events_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_find_events_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-events"><function>zeitgeist_remote_log_find_events()</function></link>
 */
/**
 * zeitgeist_remote_log_find_related_uris:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @time_range: &nbsp;
 * @event_templates: &nbsp;
 * @result_event_templates: &nbsp;
 * @storage_state: &nbsp;
 * @num_events: &nbsp;
 * @result_type: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-related-uris-finish"><function>zeitgeist_remote_log_find_related_uris_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_find_related_uris_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-find-related-uris"><function>zeitgeist_remote_log_find_related_uris()</function></link>
 */
/**
 * zeitgeist_remote_log_get_events:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @event_ids_length1: length of the @event_ids array
 * @event_ids: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-get-events-finish"><function>zeitgeist_remote_log_get_events_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_get_events_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-get-events"><function>zeitgeist_remote_log_get_events()</function></link>
 */
/**
 * zeitgeist_remote_log_insert_events:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @events: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-insert-events-finish"><function>zeitgeist_remote_log_insert_events_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_insert_events_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-insert-events"><function>zeitgeist_remote_log_insert_events()</function></link>
 */
/**
 * zeitgeist_remote_log_install_monitor:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @monitor_path: &nbsp;
 * @time_range: &nbsp;
 * @event_templates: &nbsp;
 * @owner: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-install-monitor-finish"><function>zeitgeist_remote_log_install_monitor_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_install_monitor_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-install-monitor"><function>zeitgeist_remote_log_install_monitor()</function></link>
 */
/**
 * zeitgeist_remote_log_remove_monitor:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @monitor_path: &nbsp;
 * @owner: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-remove-monitor-finish"><function>zeitgeist_remote_log_remove_monitor_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_remove_monitor_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-remove-monitor"><function>zeitgeist_remote_log_remove_monitor()</function></link>
 */
/**
 * zeitgeist_remote_log_quit:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-quit-finish"><function>zeitgeist_remote_log_quit_finish()</function></link>
 */
/**
 * zeitgeist_remote_log_quit_finish:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-log-quit"><function>zeitgeist_remote_log_quit()</function></link>
 */
/**
 * ZeitgeistRemoteLog:extensions:
 * @result_length1: return location for the length of the property's value
 */
/**
 * zeitgeist_remote_log_get_extensions:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistRemoteLog--extensions"><type>"extensions"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistRemoteLog--extensions"><type>"extensions"</type></link> property
 */
/**
 * ZeitgeistRemoteLog:version:
 */
/**
 * zeitgeist_remote_log_get_version:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistRemoteLog--version"><type>"version"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistRemoteLog--version"><type>"version"</type></link> property
 */
/**
 * ZeitgeistRemoteLog:datapath:
 */
/**
 * zeitgeist_remote_log_get_datapath:
 * @self: the <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistRemoteLog--datapath"><type>"datapath"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistRemoteLog--datapath"><type>"datapath"</type></link> property
 */
/**
 * ZeitgeistRemoteLog:
 */
/**
 * ZeitgeistRemoteLogIface:
 * @delete_events: virtual method called by <link linkend="zeitgeist-remote-log-delete-events"><function>zeitgeist_remote_log_delete_events()</function></link>
 * @delete_events_finish: asynchronous finish function for <structfield>delete_events</structfield>, called by <link linkend="zeitgeist-remote-log-delete-events"><function>zeitgeist_remote_log_delete_events()</function></link>
 * @find_event_ids: virtual method called by <link linkend="zeitgeist-remote-log-find-event-ids"><function>zeitgeist_remote_log_find_event_ids()</function></link>
 * @find_event_ids_finish: asynchronous finish function for <structfield>find_event_ids</structfield>, called by <link linkend="zeitgeist-remote-log-find-event-ids"><function>zeitgeist_remote_log_find_event_ids()</function></link>
 * @find_events: virtual method called by <link linkend="zeitgeist-remote-log-find-events"><function>zeitgeist_remote_log_find_events()</function></link>
 * @find_events_finish: asynchronous finish function for <structfield>find_events</structfield>, called by <link linkend="zeitgeist-remote-log-find-events"><function>zeitgeist_remote_log_find_events()</function></link>
 * @find_related_uris: virtual method called by <link linkend="zeitgeist-remote-log-find-related-uris"><function>zeitgeist_remote_log_find_related_uris()</function></link>
 * @find_related_uris_finish: asynchronous finish function for <structfield>find_related_uris</structfield>, called by <link linkend="zeitgeist-remote-log-find-related-uris"><function>zeitgeist_remote_log_find_related_uris()</function></link>
 * @get_events: virtual method called by <link linkend="zeitgeist-remote-log-get-events"><function>zeitgeist_remote_log_get_events()</function></link>
 * @get_events_finish: asynchronous finish function for <structfield>get_events</structfield>, called by <link linkend="zeitgeist-remote-log-get-events"><function>zeitgeist_remote_log_get_events()</function></link>
 * @insert_events: virtual method called by <link linkend="zeitgeist-remote-log-insert-events"><function>zeitgeist_remote_log_insert_events()</function></link>
 * @insert_events_finish: asynchronous finish function for <structfield>insert_events</structfield>, called by <link linkend="zeitgeist-remote-log-insert-events"><function>zeitgeist_remote_log_insert_events()</function></link>
 * @install_monitor: virtual method called by <link linkend="zeitgeist-remote-log-install-monitor"><function>zeitgeist_remote_log_install_monitor()</function></link>
 * @install_monitor_finish: asynchronous finish function for <structfield>install_monitor</structfield>, called by <link linkend="zeitgeist-remote-log-install-monitor"><function>zeitgeist_remote_log_install_monitor()</function></link>
 * @remove_monitor: virtual method called by <link linkend="zeitgeist-remote-log-remove-monitor"><function>zeitgeist_remote_log_remove_monitor()</function></link>
 * @remove_monitor_finish: asynchronous finish function for <structfield>remove_monitor</structfield>, called by <link linkend="zeitgeist-remote-log-remove-monitor"><function>zeitgeist_remote_log_remove_monitor()</function></link>
 * @quit: virtual method called by <link linkend="zeitgeist-remote-log-quit"><function>zeitgeist_remote_log_quit()</function></link>
 * @quit_finish: asynchronous finish function for <structfield>quit</structfield>, called by <link linkend="zeitgeist-remote-log-quit"><function>zeitgeist_remote_log_quit()</function></link>
 * @get_extensions: getter method for the abstract property <link linkend="ZeitgeistRemoteLog--extensions"><type>"extensions"</type></link>
 * @get_version: getter method for the abstract property <link linkend="ZeitgeistRemoteLog--version"><type>"version"</type></link>
 * @get_datapath: getter method for the abstract property <link linkend="ZeitgeistRemoteLog--datapath"><type>"datapath"</type></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistRemoteLog"><type>ZeitgeistRemoteLog</type></link> implementations.
 */
/**
 * zeitgeist_remote_monitor_notify_insert:
 * @self: the <link linkend="ZeitgeistRemoteMonitor"><type>ZeitgeistRemoteMonitor</type></link> instance
 * @time_range: &nbsp;
 * @events: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-monitor-notify-insert-finish"><function>zeitgeist_remote_monitor_notify_insert_finish()</function></link>
 */
/**
 * zeitgeist_remote_monitor_notify_insert_finish:
 * @self: the <link linkend="ZeitgeistRemoteMonitor"><type>ZeitgeistRemoteMonitor</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-monitor-notify-insert"><function>zeitgeist_remote_monitor_notify_insert()</function></link>
 */
/**
 * zeitgeist_remote_monitor_notify_delete:
 * @self: the <link linkend="ZeitgeistRemoteMonitor"><type>ZeitgeistRemoteMonitor</type></link> instance
 * @event_ids_length1: length of the @event_ids array
 * @time_range: &nbsp;
 * @event_ids: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-monitor-notify-delete-finish"><function>zeitgeist_remote_monitor_notify_delete_finish()</function></link>
 */
/**
 * zeitgeist_remote_monitor_notify_delete_finish:
 * @self: the <link linkend="ZeitgeistRemoteMonitor"><type>ZeitgeistRemoteMonitor</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-monitor-notify-delete"><function>zeitgeist_remote_monitor_notify_delete()</function></link>
 */
/**
 * ZeitgeistRemoteMonitor:
 */
/**
 * ZeitgeistRemoteMonitorIface:
 * @notify_insert: virtual method called by <link linkend="zeitgeist-remote-monitor-notify-insert"><function>zeitgeist_remote_monitor_notify_insert()</function></link>
 * @notify_insert_finish: asynchronous finish function for <structfield>notify_insert</structfield>, called by <link linkend="zeitgeist-remote-monitor-notify-insert"><function>zeitgeist_remote_monitor_notify_insert()</function></link>
 * @notify_delete: virtual method called by <link linkend="zeitgeist-remote-monitor-notify-delete"><function>zeitgeist_remote_monitor_notify_delete()</function></link>
 * @notify_delete_finish: asynchronous finish function for <structfield>notify_delete</structfield>, called by <link linkend="zeitgeist-remote-monitor-notify-delete"><function>zeitgeist_remote_monitor_notify_delete()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistRemoteMonitor"><type>ZeitgeistRemoteMonitor</type></link> implementations.
 */
/**
 * zeitgeist_remote_simple_indexer_search:
 * @self: the <link linkend="ZeitgeistRemoteSimpleIndexer"><type>ZeitgeistRemoteSimpleIndexer</type></link> instance
 * @query_string: &nbsp;
 * @time_range: &nbsp;
 * @filter_templates: &nbsp;
 * @offset: &nbsp;
 * @count: &nbsp;
 * @result_type: &nbsp;
 * @cancellable: &nbsp;
 * @events: &nbsp;
 * @matches: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-simple-indexer-search-finish"><function>zeitgeist_remote_simple_indexer_search_finish()</function></link>
 */
/**
 * zeitgeist_remote_simple_indexer_search_finish:
 * @self: the <link linkend="ZeitgeistRemoteSimpleIndexer"><type>ZeitgeistRemoteSimpleIndexer</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-simple-indexer-search"><function>zeitgeist_remote_simple_indexer_search()</function></link>
 */
/**
 * zeitgeist_remote_simple_indexer_search_with_relevancies:
 * @self: the <link linkend="ZeitgeistRemoteSimpleIndexer"><type>ZeitgeistRemoteSimpleIndexer</type></link> instance
 * @relevancies_length1: length of the @relevancies array
 * @query_string: &nbsp;
 * @time_range: &nbsp;
 * @filter_templates: &nbsp;
 * @storage_state: &nbsp;
 * @offset: &nbsp;
 * @count: &nbsp;
 * @result_type: &nbsp;
 * @cancellable: &nbsp;
 * @events: &nbsp;
 * @relevancies: &nbsp;
 * @matches: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-simple-indexer-search-with-relevancies-finish"><function>zeitgeist_remote_simple_indexer_search_with_relevancies_finish()</function></link>
 */
/**
 * zeitgeist_remote_simple_indexer_search_with_relevancies_finish:
 * @self: the <link linkend="ZeitgeistRemoteSimpleIndexer"><type>ZeitgeistRemoteSimpleIndexer</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-simple-indexer-search-with-relevancies"><function>zeitgeist_remote_simple_indexer_search_with_relevancies()</function></link>
 */
/**
 * ZeitgeistRemoteSimpleIndexer:
 */
/**
 * ZeitgeistRemoteSimpleIndexerIface:
 * @search: virtual method called by <link linkend="zeitgeist-remote-simple-indexer-search"><function>zeitgeist_remote_simple_indexer_search()</function></link>
 * @search_finish: asynchronous finish function for <structfield>search</structfield>, called by <link linkend="zeitgeist-remote-simple-indexer-search"><function>zeitgeist_remote_simple_indexer_search()</function></link>
 * @search_with_relevancies: virtual method called by <link linkend="zeitgeist-remote-simple-indexer-search-with-relevancies"><function>zeitgeist_remote_simple_indexer_search_with_relevancies()</function></link>
 * @search_with_relevancies_finish: asynchronous finish function for <structfield>search_with_relevancies</structfield>, called by <link linkend="zeitgeist-remote-simple-indexer-search-with-relevancies"><function>zeitgeist_remote_simple_indexer_search_with_relevancies()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistRemoteSimpleIndexer"><type>ZeitgeistRemoteSimpleIndexer</type></link> implementations.
 */
/**
 * zeitgeist_network_manager_dbus_state:
 * @self: the <link linkend="ZeitgeistNetworkManagerDBus"><type>ZeitgeistNetworkManagerDBus</type></link> instance
 * @error: location to store the error occurring, or %NULL to ignore
 */
/**
 * ZeitgeistNetworkManagerDBus::state-changed:
 * @network_manager_dbus: the <link linkend="ZeitgeistNetworkManagerDBus"><type>ZeitgeistNetworkManagerDBus</type></link> instance that received the signal
 * @state: &nbsp;
 */
/**
 * ZeitgeistNetworkManagerDBus:
 */
/**
 * ZeitgeistNetworkManagerDBusIface:
 * @state: virtual method called by <link linkend="zeitgeist-network-manager-dbus-state"><function>zeitgeist_network_manager_dbus_state()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistNetworkManagerDBus"><type>ZeitgeistNetworkManagerDBus</type></link> implementations.
 */
/**
 * zeitgeist_connman_manager_dbus_get_state:
 * @self: the <link linkend="ZeitgeistConnmanManagerDBus"><type>ZeitgeistConnmanManagerDBus</type></link> instance
 * @error: location to store the error occurring, or %NULL to ignore
 */
/**
 * ZeitgeistConnmanManagerDBus::state-changed:
 * @connman_manager_dbus: the <link linkend="ZeitgeistConnmanManagerDBus"><type>ZeitgeistConnmanManagerDBus</type></link> instance that received the signal
 * @state: &nbsp;
 */
/**
 * ZeitgeistConnmanManagerDBus:
 */
/**
 * ZeitgeistConnmanManagerDBusIface:
 * @get_state: virtual method called by <link linkend="zeitgeist-connman-manager-dbus-get-state"><function>zeitgeist_connman_manager_dbus_get_state()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistConnmanManagerDBus"><type>ZeitgeistConnmanManagerDBus</type></link> implementations.
 */
