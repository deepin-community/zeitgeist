/**
 * SECTION:result-set
 * @short_description: Cursor-like interface for results sets
 * 
 * <para>include: zeitgeist.h</para><para>Interface for results returned by zeitgeist_log_find_events(), zeitgeist_log_get_events(), and zeitgeist_index_search().</para><para>This interface utilizes a cursor-like metaphor. You advance the cursor by calling zeitgeist_result_set_next() or adjust it manually by calling zeitgeist_result_set_seek().</para><para>Calling zeitgeist_result_set_next() will also return the event at the current cursor position. You may retrieve the current event without advancing the cursor by calling zeitgeist_result_set_peek().</para>
 */
/**
 * zeitgeist_result_set_size:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Get the number of #ZeitgeistEvent&lt;!-- --&gt;s held in a #ZeitgeistResultSet. Unlike the number obtained from zeitgeist_result_set_estimated_matches() the size of the result set is always equal to the number of times you can call zeitgeist_result_set_next().
 * 
 * Returns: <para>The number of events held in the result set </para>
 */
/**
 * zeitgeist_result_set_estimated_matches:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Get the total number of matches that would have been for the query that generated the result set had it not been restricted in size. For FTS the number of matches is estimated.
 * 
 * <para>For zeitgeist_log_find_events() and zeitgeist_log_get_events() this will always be the same as zeitgeist_result_set_size(). For cases like zeitgeist_index_search() where you specify a subset of the hits to retrieve the estimated match count will often be bigger than the result set size.</para>
 * 
 * Returns: <para>The number of events that matched the query </para>
 */
/**
 * zeitgeist_result_set_next_value:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Get the current event from the result set and advance the cursor. To ensure that calls to this method will succeed you can call zeitgeist_result_set_has_next().
 * 
 * Returns: <para>The #ZeitgeistEvent at the current cursor position, or NULL if there are no events left. </para>
 */
/**
 * zeitgeist_result_set_has_next:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Check if a call to zeitgeist_result_set_next() will succeed.
 * 
 * Returns: <para>TRUE if and only if more events can be retrieved by calling zeitgeist_result_set_next() </para>
 */
/**
 * zeitgeist_result_set_tell:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Get the current position of the cursor.
 * 
 * Returns: <para>The current position of the cursor </para>
 */
/**
 * zeitgeist_result_set_reset:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Resets the result set to start iterating it again from scratch.
 */
/**
 * zeitgeist_result_set_iterator:
 * @self: the <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> instance
 * 
 * Do not use this method! It is only for use by Vala.
 */
/**
 * ZeitgeistResultSet:
 * 
 * Cursor-like interface for results sets
 * 
 * <para>include: zeitgeist.h</para><para>Interface for results returned by zeitgeist_log_find_events(), zeitgeist_log_get_events(), and zeitgeist_index_search().</para><para>This interface utilizes a cursor-like metaphor. You advance the cursor by calling zeitgeist_result_set_next() or adjust it manually by calling zeitgeist_result_set_seek().</para><para>Calling zeitgeist_result_set_next() will also return the event at the current cursor position. You may retrieve the current event without advancing the cursor by calling zeitgeist_result_set_peek().</para>
 */
/**
 * ZeitgeistResultSetIface:
 * @size: virtual method called by <link linkend="zeitgeist-result-set-size"><function>zeitgeist_result_set_size()</function></link>
 * @estimated_matches: virtual method called by <link linkend="zeitgeist-result-set-estimated-matches"><function>zeitgeist_result_set_estimated_matches()</function></link>
 * @next_value: virtual method called by <link linkend="zeitgeist-result-set-next-value"><function>zeitgeist_result_set_next_value()</function></link>
 * @has_next: virtual method called by <link linkend="zeitgeist-result-set-has-next"><function>zeitgeist_result_set_has_next()</function></link>
 * @tell: virtual method called by <link linkend="zeitgeist-result-set-tell"><function>zeitgeist_result_set_tell()</function></link>
 * @reset: virtual method called by <link linkend="zeitgeist-result-set-reset"><function>zeitgeist_result_set_reset()</function></link>
 * @parent_iface: the parent interface structure
 * 
 * Interface for creating <link linkend="ZeitgeistResultSet"><type>ZeitgeistResultSet</type></link> implementations.
 */
