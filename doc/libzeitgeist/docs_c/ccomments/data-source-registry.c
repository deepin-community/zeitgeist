/**
 * SECTION:data-source-registry
 * @short_description: Query the Zeitgeist Data-Source Registry extension
 * 
 * <para>The Zeitgeist engine maintains a publicly available list of recognized data-sources (components inserting information into Zeitgeist). ZeitgeistDataSourceRegistry is used to register new data sources, get information about them and gives the ability to enable or disable the data sources.</para>
 */
/**
 * ZEITGEIST_TYPE_DATA_SOURCE_REGISTRY:
 * 
 * The type for <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link>.
 */
/**
 * zeitgeist_data_source_registry_get_data_sources:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-get-data-sources-finish"><function>zeitgeist_data_source_registry_get_data_sources_finish()</function></link>
 */
/**
 * zeitgeist_data_source_registry_get_data_sources_finish:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-get-data-sources"><function>zeitgeist_data_source_registry_get_data_sources()</function></link>
 */
/**
 * zeitgeist_data_source_registry_get_data_source_from_id:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @unique_id: &nbsp;
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-get-data-source-from-id-finish"><function>zeitgeist_data_source_registry_get_data_source_from_id_finish()</function></link>
 */
/**
 * zeitgeist_data_source_registry_get_data_source_from_id_finish:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-get-data-source-from-id"><function>zeitgeist_data_source_registry_get_data_source_from_id()</function></link>
 */
/**
 * zeitgeist_data_source_registry_register_data_source:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @data_source: &nbsp;
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-register-data-source-finish"><function>zeitgeist_data_source_registry_register_data_source_finish()</function></link>
 */
/**
 * zeitgeist_data_source_registry_register_data_source_finish:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-register-data-source"><function>zeitgeist_data_source_registry_register_data_source()</function></link>
 */
/**
 * zeitgeist_data_source_registry_set_data_source_enabled:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @unique_id: &nbsp;
 * @enabled: &nbsp;
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-set-data-source-enabled-finish"><function>zeitgeist_data_source_registry_set_data_source_enabled_finish()</function></link>
 */
/**
 * zeitgeist_data_source_registry_set_data_source_enabled_finish:
 * @self: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-data-source-registry-set-data-source-enabled"><function>zeitgeist_data_source_registry_set_data_source_enabled()</function></link>
 */
/**
 * zeitgeist_data_source_registry_new:
 */
/**
 * ZeitgeistDataSourceRegistry::source-disconnected:
 * @data_source_registry: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance that received the signal
 * @data_source: &nbsp;
 */
/**
 * ZeitgeistDataSourceRegistry::source-enabled:
 * @data_source_registry: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance that received the signal
 * @unique_id: &nbsp;
 * @enabled: &nbsp;
 */
/**
 * ZeitgeistDataSourceRegistry::source-registered:
 * @data_source_registry: the <link linkend="ZeitgeistDataSourceRegistry"><type>ZeitgeistDataSourceRegistry</type></link> instance that received the signal
 * @data_source: &nbsp;
 */
/**
 * ZeitgeistDataSourceRegistry:
 * 
 * Query the Zeitgeist Data-Source Registry extension
 * 
 * <para>The Zeitgeist engine maintains a publicly available list of recognized data-sources (components inserting information into Zeitgeist). ZeitgeistDataSourceRegistry is used to register new data sources, get information about them and gives the ability to enable or disable the data sources.</para>
 */
/**
 * ZeitgeistDataSourceRegistryClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-DATA-SOURCE-REGISTRY:CAPS"><literal>ZEITGEIST_TYPE_DATA_SOURCE_REGISTRY</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
/**
 * zeitgeist_remote_registry_get_data_sources:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-get-data-sources-finish"><function>zeitgeist_remote_registry_get_data_sources_finish()</function></link>
 */
/**
 * zeitgeist_remote_registry_get_data_sources_finish:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-get-data-sources"><function>zeitgeist_remote_registry_get_data_sources()</function></link>
 */
/**
 * zeitgeist_remote_registry_register_data_source:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @unique_id: &nbsp;
 * @name: &nbsp;
 * @description: &nbsp;
 * @event_templates: &nbsp;
 * @cancellable: &nbsp;
 * @sender: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-register-data-source-finish"><function>zeitgeist_remote_registry_register_data_source_finish()</function></link>
 */
/**
 * zeitgeist_remote_registry_register_data_source_finish:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-register-data-source"><function>zeitgeist_remote_registry_register_data_source()</function></link>
 */
/**
 * zeitgeist_remote_registry_set_data_source_enabled:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @unique_id: &nbsp;
 * @enabled: &nbsp;
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-set-data-source-enabled-finish"><function>zeitgeist_remote_registry_set_data_source_enabled_finish()</function></link>
 */
/**
 * zeitgeist_remote_registry_set_data_source_enabled_finish:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-set-data-source-enabled"><function>zeitgeist_remote_registry_set_data_source_enabled()</function></link>
 */
/**
 * zeitgeist_remote_registry_get_data_source_from_id:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @unique_id: &nbsp;
 * @cancellable: &nbsp;
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-get-data-source-from-id-finish"><function>zeitgeist_remote_registry_get_data_source_from_id_finish()</function></link>
 */
/**
 * zeitgeist_remote_registry_get_data_source_from_id_finish:
 * @self: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-remote-registry-get-data-source-from-id"><function>zeitgeist_remote_registry_get_data_source_from_id()</function></link>
 */
/**
 * ZeitgeistRemoteRegistry::data-source-disconnected:
 * @remote_registry: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance that received the signal
 * @data_source: &nbsp;
 */
/**
 * ZeitgeistRemoteRegistry::data-source-enabled:
 * @remote_registry: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance that received the signal
 * @unique_id: &nbsp;
 * @enabled: &nbsp;
 */
/**
 * ZeitgeistRemoteRegistry::data-source-registered:
 * @remote_registry: the <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> instance that received the signal
 * @data_source: &nbsp;
 */
/**
 * ZeitgeistRemoteRegistry:
 */
/**
 * ZeitgeistRemoteRegistryIface:
 * @get_data_sources: virtual method called by <link linkend="zeitgeist-remote-registry-get-data-sources"><function>zeitgeist_remote_registry_get_data_sources()</function></link>
 * @get_data_sources_finish: asynchronous finish function for <structfield>get_data_sources</structfield>, called by <link linkend="zeitgeist-remote-registry-get-data-sources"><function>zeitgeist_remote_registry_get_data_sources()</function></link>
 * @register_data_source: virtual method called by <link linkend="zeitgeist-remote-registry-register-data-source"><function>zeitgeist_remote_registry_register_data_source()</function></link>
 * @register_data_source_finish: asynchronous finish function for <structfield>register_data_source</structfield>, called by <link linkend="zeitgeist-remote-registry-register-data-source"><function>zeitgeist_remote_registry_register_data_source()</function></link>
 * @set_data_source_enabled: virtual method called by <link linkend="zeitgeist-remote-registry-set-data-source-enabled"><function>zeitgeist_remote_registry_set_data_source_enabled()</function></link>
 * @set_data_source_enabled_finish: asynchronous finish function for <structfield>set_data_source_enabled</structfield>, called by <link linkend="zeitgeist-remote-registry-set-data-source-enabled"><function>zeitgeist_remote_registry_set_data_source_enabled()</function></link>
 * @get_data_source_from_id: virtual method called by <link linkend="zeitgeist-remote-registry-get-data-source-from-id"><function>zeitgeist_remote_registry_get_data_source_from_id()</function></link>
 * @get_data_source_from_id_finish: asynchronous finish function for <structfield>get_data_source_from_id</structfield>, called by <link linkend="zeitgeist-remote-registry-get-data-source-from-id"><function>zeitgeist_remote_registry_get_data_source_from_id()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistRemoteRegistry"><type>ZeitgeistRemoteRegistry</type></link> implementations.
 */
