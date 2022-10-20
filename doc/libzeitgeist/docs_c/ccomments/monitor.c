/**
 * SECTION:monitor
 * @short_description: Listens for updates to the Zeitgeist event log
 * 
 * <para>A #Monitor listens for updates to the Zeitgeist event log matching a given set of templates and with timestamps in some predefined time range.</para><para>A monitor must be installed into the running Zeitgeist daemon by calling zeitgeist_log_install_monitor(). The monitor will not emit any of the ::events-added or ::events-deleted signals before this.</para>
 */
/**
 * ZEITGEIST_TYPE_MONITOR:
 * 
 * The type for <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link>.
 */
/**
 * zeitgeist_monitor_get_templates:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance
 */
/**
 * zeitgeist_monitor_get_path:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance
 */
/**
 * zeitgeist_monitor_new:
 * @time_range: (in): &nbsp;.  <para>The monitor will only listen for events with timestamps within this time range. Note that it is legal for applications to insert events that are &quot;in the past&quot;. </para>
 * @event_templates: (in) (transfer full): &nbsp;.  <para>A #GPtrArray of #ZeitgeistEvent&lt;!-- --&gt;s. Only listen for events that match any of these templates. </para>
 * 
 * zeitgeist_monitor_new
 * 
 * <para>Create a new monitor. Before you can receive signals from the monitor you need to install it in the running Zeitgeist daemon by calling zeitgeist_log_install_monitor().</para>
 * 
 * Returns: <para>A reference to a newly allocated monitor </para>
 */
/**
 * ZeitgeistMonitor:time-range:
 */
/**
 * zeitgeist_monitor_get_time_range:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistMonitor--time-range"><type>"time-range"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistMonitor--time-range"><type>"time-range"</type></link> property
 */
/**
 * zeitgeist_monitor_set_time_range:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistMonitor--time-range"><type>"time-range"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistMonitor--time-range"><type>"time-range"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistMonitor:event-templates:
 */
/**
 * zeitgeist_monitor_get_event_templates:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistMonitor--event-templates"><type>"event-templates"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistMonitor--event-templates"><type>"event-templates"</type></link> property
 */
/**
 * zeitgeist_monitor_set_event_templates:
 * @self: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistMonitor--event-templates"><type>"event-templates"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistMonitor--event-templates"><type>"event-templates"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistMonitor::events-inserted:
 * @monitor: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance that received the signal
 * @time_range: &nbsp;.  <para>A #ZeitgeistTimeRange that specifies the minimum and maximum of the timestamps in @events </para><para></para>
 * @events: &nbsp;.  <para>A #ZeitgeistResultSet holding the &quot;ZeitgeistEvent&quot;s that have been inserted into the log </para><para></para>
 * 
 * ZeitgeistMonitor::events-inserted:
 * 
 * <para>Emitted when events matching the event templates and with timestamps within the time range of the monitor has been inserted into the log.</para>
 */
/**
 * ZeitgeistMonitor::events-deleted:
 * @monitor: the <link linkend="ZeitgeistMonitor"><type>ZeitgeistMonitor</type></link> instance that received the signal
 * @event_ids_length1: length of the @event_ids array
 * @time_range: &nbsp;.  <para>A #ZeitgeistTimeRange that specifies the minimum and maximum timestamps of the deleted events </para><para></para>
 * @event_ids: &nbsp;.  <para>A #GArray of #guint32&lt;!-- --&gt;s holding the IDs of the deleted events </para><para></para>
 * 
 * ZeitgeistMonitor::events-deleted:
 * 
 * <para>Emitted when events with timestamps within the time range of this monitor have been deleted from the log. Note that the deleted events may not match the event templates for the monitor.</para>
 */
/**
 * ZeitgeistMonitor:
 * 
 * Listens for updates to the Zeitgeist event log
 * 
 * <para>A #Monitor listens for updates to the Zeitgeist event log matching a given set of templates and with timestamps in some predefined time range.</para><para>A monitor must be installed into the running Zeitgeist daemon by calling zeitgeist_log_install_monitor(). The monitor will not emit any of the ::events-added or ::events-deleted signals before this.</para>
 */
/**
 * ZeitgeistMonitorClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-MONITOR:CAPS"><literal>ZEITGEIST_TYPE_MONITOR</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
