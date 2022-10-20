/**
 * SECTION:data-source
 * @short_description: Abstracts data sources used by the DataSourceRegistry extension
 * 
 * <para>ZeitgeistDataSource represents a data source used to insert events into Zeitgeist. The data sources are identified using the unique_id property, and when querying the data source registry you get other interesting information like timestamp of the last action of the data source, flag whether it is currently running etc.</para>
 */
/**
 * ZEITGEIST_TYPE_DATA_SOURCE:
 * 
 * The type for <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link>.
 */
/**
 * zeitgeist_data_source_to_variant:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance
 */
/**
 * zeitgeist_data_source_new:
 * 
 * ZeitgeistDataSource
 * 
 * <para>Abstracts data sources used by the ZeitgeistDataSourceRegistry extension</para><para>ZeitgeistDataSource represents a data source used to insert events into Zeitgeist. The data sources are identified using the unique_id property, and when querying the data source registry you get other interesting information like timestamp of the last action of the data source, flag whether it is currently running etc.</para>
 */
/**
 * zeitgeist_data_source_new_full:
 * @unique_id: &nbsp;
 * @name: &nbsp;
 * @description: &nbsp;
 * @templates: &nbsp;
 */
/**
 * zeitgeist_data_source_new_from_variant:
 * @variant: &nbsp;
 * @reset_running: &nbsp;
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 */
/**
 * ZeitgeistDataSource:unique-id:
 */
/**
 * zeitgeist_data_source_get_unique_id:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--unique-id"><type>"unique-id"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--unique-id"><type>"unique-id"</type></link> property
 */
/**
 * zeitgeist_data_source_set_unique_id:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--unique-id"><type>"unique-id"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--unique-id"><type>"unique-id"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:name:
 */
/**
 * zeitgeist_data_source_get_name:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--name"><type>"name"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--name"><type>"name"</type></link> property
 */
/**
 * zeitgeist_data_source_set_name:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--name"><type>"name"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--name"><type>"name"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:description:
 */
/**
 * zeitgeist_data_source_get_description:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--description"><type>"description"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--description"><type>"description"</type></link> property
 */
/**
 * zeitgeist_data_source_set_description:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--description"><type>"description"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--description"><type>"description"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:event-templates:
 */
/**
 * zeitgeist_data_source_get_event_templates:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--event-templates"><type>"event-templates"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--event-templates"><type>"event-templates"</type></link> property
 */
/**
 * zeitgeist_data_source_set_event_templates:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--event-templates"><type>"event-templates"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--event-templates"><type>"event-templates"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:enabled:
 */
/**
 * zeitgeist_data_source_get_enabled:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--enabled"><type>"enabled"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--enabled"><type>"enabled"</type></link> property
 */
/**
 * zeitgeist_data_source_set_enabled:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--enabled"><type>"enabled"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--enabled"><type>"enabled"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:running:
 */
/**
 * zeitgeist_data_source_get_running:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--running"><type>"running"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--running"><type>"running"</type></link> property
 */
/**
 * zeitgeist_data_source_set_running:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--running"><type>"running"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--running"><type>"running"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:timestamp:
 */
/**
 * zeitgeist_data_source_get_timestamp:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistDataSource--timestamp"><type>"timestamp"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistDataSource--timestamp"><type>"timestamp"</type></link> property
 */
/**
 * zeitgeist_data_source_set_timestamp:
 * @self: the <link linkend="ZeitgeistDataSource"><type>ZeitgeistDataSource</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistDataSource--timestamp"><type>"timestamp"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistDataSource--timestamp"><type>"timestamp"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistDataSource:
 */
/**
 * ZeitgeistDataSourceClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-DATA-SOURCE:CAPS"><literal>ZEITGEIST_TYPE_DATA_SOURCE</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
/**
 * zeitgeist_data_sources_from_variant:
 * @self: the (null) instance
 * @sources_variant: &nbsp;
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 */
/**
 * zeitgeist_data_sources_to_variant:
 * @self: the (null) instance
 * @sources: &nbsp;
 */
/**
 * ZEITGEIST_DATA_SOURCES_SIG_DATASOURCES:
 */
