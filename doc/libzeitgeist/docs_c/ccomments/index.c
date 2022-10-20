/**
 * SECTION:index
 * @short_description: Query the Zeitgeist Full Text Search Extension
 * 
 * <para>include: zeitgeist.h</para>
 */
/**
 * ZEITGEIST_TYPE_INDEX:
 * 
 * The type for <link linkend="ZeitgeistIndex"><type>ZeitgeistIndex</type></link>.
 */
/**
 * zeitgeist_index_search:
 * @self: the <link linkend="ZeitgeistIndex"><type>ZeitgeistIndex</type></link> instance
 * @query: (in): &nbsp;.  <para>The search string to send to Zeitgeist </para>
 * @time_range: (in): &nbsp;.  <para>Restrict matched events to ones within this time range. If you are not interested in restricting the timerange pass zeitgeist_time_range_new_anytime() as Zeitgeist will detect this and optimize the query accordingly </para>
 * @event_templates: (in): &nbsp;.  <para>Restrict matches events to ones matching these templates </para>
 * @offset: (in): &nbsp;.  <para>Offset into the result set to read events from </para>
 * @num_events: (in): &nbsp;.  <para>Maximal number of events to retrieve </para>
 * @result_type: (in): &nbsp;.  <para>The <link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> determining the sort order. You may pass <link linkend="ZEITGEIST-RESULT-TYPE-RELEVANCY"><type>ZEITGEIST_RESULT_TYPE_RELEVANCY</type></link> to this method to have the results ordered by relevancy calculated in relation to @query </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>A <link linkend="GCancellable"><type>GCancellable</type></link> used to cancel the call or %NULL </para>
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Perform a full text search possibly restricted to a <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> and/or set of event templates.
 * 
 * <para>The default boolean operator is %AND. Thus the query <emphasis>foo bar</emphasis> will be interpreted as <emphasis>foo AND bar</emphasis>. To exclude a term from the result set prepend it with a minus sign - eg. <emphasis>foo -bar</emphasis>. Phrase queries can be done by double quoting the string <emphasis>&quot;foo is a bar&quot;</emphasis>. You can truncate terms by appending a *.</para><para>There are a few keys you can prefix to a term or phrase to search within a specific set of metadata. They are used like <emphasis>key:value</emphasis>. The keys <emphasis>name</emphasis> and <emphasis>title</emphasis> search strictly within the text field of the event subjects. The key <emphasis>app</emphasis> searches within the application name or description that is found in the actor attribute of the events. Lastly, you can use the <emphasis>site</emphasis> key to search within the domain name of subject URIs.</para><para>You can also control the results with the boolean operators <emphasis>AND</emphasis> and <emphasis>OR</emphasis> and you may use brackets, ( and ), to control the operator precedence.</para><para>FIXME: how do we put documentation into _finish? The total hit count of the query will be available via the returned result set by calling zeitgeist_result_set_estimated_matches(). This will often be bigger than the actual number of events held in the result set, which is limited by the @num_events parameter passed to zeitgeist_index_search().</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-index-search-finish"><function>zeitgeist_index_search_finish()</function></link>
 */
/**
 * zeitgeist_index_search_finish:
 * @self: the <link linkend="ZeitgeistIndex"><type>ZeitgeistIndex</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Perform a full text search possibly restricted to a <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> and/or set of event templates.
 * 
 * <para>The default boolean operator is %AND. Thus the query <emphasis>foo bar</emphasis> will be interpreted as <emphasis>foo AND bar</emphasis>. To exclude a term from the result set prepend it with a minus sign - eg. <emphasis>foo -bar</emphasis>. Phrase queries can be done by double quoting the string <emphasis>&quot;foo is a bar&quot;</emphasis>. You can truncate terms by appending a *.</para><para>There are a few keys you can prefix to a term or phrase to search within a specific set of metadata. They are used like <emphasis>key:value</emphasis>. The keys <emphasis>name</emphasis> and <emphasis>title</emphasis> search strictly within the text field of the event subjects. The key <emphasis>app</emphasis> searches within the application name or description that is found in the actor attribute of the events. Lastly, you can use the <emphasis>site</emphasis> key to search within the domain name of subject URIs.</para><para>You can also control the results with the boolean operators <emphasis>AND</emphasis> and <emphasis>OR</emphasis> and you may use brackets, ( and ), to control the operator precedence.</para><para>FIXME: how do we put documentation into _finish? The total hit count of the query will be available via the returned result set by calling zeitgeist_result_set_estimated_matches(). This will often be bigger than the actual number of events held in the result set, which is limited by the @num_events parameter passed to zeitgeist_index_search().</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-index-search"><function>zeitgeist_index_search()</function></link>
 */
/**
 * zeitgeist_index_search_with_relevancies:
 * @self: the <link linkend="ZeitgeistIndex"><type>ZeitgeistIndex</type></link> instance
 * @query: (in): &nbsp;.  <para>The search string to send to Zeitgeist </para>
 * @time_range: (in): &nbsp;.  <para>Restrict matched events to ones within this time range. If you are not interested in restricting the timerange pass zeitgeist_time_range_new_anytime() as Zeitgeist will detect this and optimize the query accordingly </para>
 * @event_templates: (in): &nbsp;.  <para>Restrict matched events to ones matching these templates </para>
 * @storage_state: (in): &nbsp;.  <para>Filter the events by availability of the storage medium. </para>
 * @offset: (in): &nbsp;.  <para>Offset into the result set to read events from </para>
 * @num_events: (in): &nbsp;.  <para>Maximal number of events to retrieve </para>
 * @result_type: (in): &nbsp;.  <para>The <link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> determining the sort order You may pass <link linkend="ZEITGEIST-RESULT-TYPE-RELEVANCY"><type>ZEITGEIST_RESULT_TYPE_RELEVANCY</type></link> to this method to have the results ordered by relevancy calculated in relation to &quot;query&quot; </para>
 * @cancellable: (in) (allow-none): &nbsp;.  <para>a <link linkend="GCancellable"><type>GCancellable</type></link> to cancel the operation or %NULL </para>
 * @relevancies: (out) (array length=relevancies_length1): &nbsp;.  <para>numeric relevancies of the events returned by result_set </para>
 * @relevancies_length1: length of the @relevancies array
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * Perform a full text search possibly restricted to a <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> and/or set of event templates. As opposed to zeitgeist_index_search(), this call will also return numeric relevancies of the events in the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link>.
 * 
 * <para>See zeitgeist_index_search() for more details on how to create the query.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-index-search-with-relevancies-finish"><function>zeitgeist_index_search_with_relevancies_finish()</function></link>
 */
/**
 * zeitgeist_index_search_with_relevancies_finish:
 * @self: the <link linkend="ZeitgeistIndex"><type>ZeitgeistIndex</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * Perform a full text search possibly restricted to a <link linkend="ZeitgeistTimeRange"><type>ZeitgeistTimeRange</type></link> and/or set of event templates. As opposed to zeitgeist_index_search(), this call will also return numeric relevancies of the events in the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link>.
 * 
 * <para>See zeitgeist_index_search() for more details on how to create the query.</para>
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-index-search-with-relevancies"><function>zeitgeist_index_search_with_relevancies()</function></link>
 * 
 * Returns: <para><link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> result_set. </para>
 */
/**
 * zeitgeist_index_new:
 * 
 * Create a new index that interfaces with the default event index of the Zeitgeist daemon.
 * 
 * <para>Create a new <link linkend="zeitgeist-index-new"><function>zeitgeist_index_new()</function></link> instance. The index will start to connect to Zeitgeist asynchronously. You can however start calling methods on the returned instance immediately, any method calls issued before the connection has been established will simply be queued and executed once the connection is up.</para><para>Returns: A reference to a newly allocated index. Free with g_object_unref().</para>
 */
/**
 * ZeitgeistIndex:
 * 
 * Query the Zeitgeist Full Text Search Extension
 * 
 * <para>include: zeitgeist.h</para>
 */
/**
 * ZeitgeistIndexClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-INDEX:CAPS"><literal>ZEITGEIST_TYPE_INDEX</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
