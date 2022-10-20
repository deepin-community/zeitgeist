/**
 * SECTION:timerange
 * @short_description: Immutable representation of an interval in time, marked by a beginning and an end
 * 
 * <para>A light, immutable, encapsulation of an interval in time, marked by a beginning and an end.</para>
 */
/**
 * ZEITGEIST_TYPE_TIME_RANGE:
 * 
 * The type for <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link>.
 */
/**
 * zeitgeist_time_range_to_variant:
 * @self: the <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> instance
 * 
 * a new variant holding the time range 
 * 
 * Returns: 
 */
/**
 * zeitgeist_time_range_intersect:
 * @self: the <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> instance
 * @time_range: (in): &nbsp;.  <para>the second time range to compare with </para>
 * 
 * Check whether two time ranges are intersecting.
 * 
 * Returns: <para>a new time range representing the intersection </para>
 */
/**
 * zeitgeist_time_range_new:
 * @start_msec: (in): &nbsp;.  
 * @end_msec: (in): &nbsp;.  <para>ending timestamp in number of milliseconds since the Unix Epoch </para>
 * 
 * starting timestamp in number of milliseconds since the Unix Epoch 
 * 
 * Returns: <para>a newly allocated ZeitgeistTimeRange. Free with g_object_unref() </para>
 */
/**
 * zeitgeist_time_range_new_anytime:
 * 
 * a new time range starting from the beginning of the Unix Epoch stretching to the end of time 
 * 
 * Returns: 
 */
/**
 * zeitgeist_time_range_new_to_now:
 * 
 * a new time range starting from the beggining of the Unix Epoch ending a the moment of invocation 
 * 
 * Returns: 
 */
/**
 * zeitgeist_time_range_new_from_now:
 * 
 * a new time range starting from the moment of invocation to the end of time 
 * 
 * Returns: 
 */
/**
 * zeitgeist_time_range_new_from_variant:
 * @variant: (in): &nbsp;.  <para>a variant representing a #TimeRange </para>
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 * 
 * Create a #TimeRange from a variant.
 * 
 * Returns: <para>a new time range starting from the moment of invocation to the end of time </para>
 */
/**
 * ZeitgeistTimeRange:start:
 */
/**
 * zeitgeist_time_range_get_start:
 * @self: the <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistTimeRange--start"><type>"start"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistTimeRange--start"><type>"start"</type></link> property
 */
/**
 * ZeitgeistTimeRange:end:
 */
/**
 * zeitgeist_time_range_get_end:
 * @self: the <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistTimeRange--end"><type>"end"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistTimeRange--end"><type>"end"</type></link> property
 */
/**
 * ZeitgeistTimeRange:
 * 
 * Immutable representation of an interval in time, marked by a beginning and an end
 * 
 * <para>A light, immutable, encapsulation of an interval in time, marked by a beginning and an end.</para>
 */
/**
 * ZeitgeistTimeRangeClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-TIME-RANGE:CAPS"><literal>ZEITGEIST_TYPE_TIME_RANGE</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
