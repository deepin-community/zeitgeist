/**
 * zeitgeist_result_type_is_sort_order_asc:
 * @result_type: (in): &nbsp;.  
 * 
 * A <link linkend="ZeitgeistResultType"><type>ZeitgeistResultType</type></link> 
 * 
 * Returns: <para>true if the results for the given result_type will be sorted ascendantly by date, false if they&apos;ll be sorted descendingly. </para>
 */
/**
 * ZeitgeistResultType:
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_EVENTS: All events with the most recent events first
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_EVENTS: All events with the oldest
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_SUBJECTS: One event for each subject only, ordered with the most recent events first
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_SUBJECTS: One event for each subject, only, ordered with oldest events first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_SUBJECTS: One event for each subject only, ordered by the popularity of the subject
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_SUBJECTS: One event for each subject only, ordered ascendingly by popularity of the subject
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_ACTOR: The last event of each different actor ordered by the popularity of the actor
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_ACTOR: The last event of each different actor, ordered ascendingly by the popularity of the actor
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_ACTOR: The actor that has been used to most recently
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_ACTOR: The actor that has been used to least recently
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_ORIGIN: The last event of each different subject origin.
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_ORIGIN: The last event of each different subject origin, ordered by least recently used first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_ORIGIN: The last event of each different subject origin, ordered by the popularity of the origins
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_ORIGIN: The last event of each different subject origin, ordered ascendingly by the popularity of the origin
 * @ZEITGEIST_RESULT_TYPE_OLDEST_ACTOR: The first event of each different actor
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_SUBJECT_INTERPRETATION: One event for each subject interpretation only, ordered with the most recent events first
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_SUBJECT_INTERPRETATION: One event for each subject interpretation only, ordered with the least recent events first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_SUBJECT_INTERPRETATION: One event for each subject interpretation only, ordered by the popularity of the subject interpretation
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_SUBJECT_INTERPRETATION: One event for each subject interpretation only, ordered ascendingly by popularity of the subject interpretation
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_MIMETYPE: One event for each mimetype only ordered with the most recent events first
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_MIMETYPE: One event for each mimetype only ordered with the least recent events first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_MIMETYPE: One event for each mimetype only ordered by the popularity of the mimetype
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_MIMETYPE: One event for each mimetype only ordered ascendingly by popularity of the mimetype
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_CURRENT_URI: One event for each subject only by current_uri instead of uri ordered with the most recent events first
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_CURRENT_URI: One event for each subject only by current_uri instead of uri ordered with oldest events first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_CURRENT_URI: One event for each subject only by current_uri instead of uri ordered by the popularity of the subject
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_CURRENT_URI: One event for each subject only by current_uri instead of uri ordered ascendingly by popularity of the subject
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_EVENT_ORIGIN: The last event of each different origin
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_EVENT_ORIGIN: The last event of each different origin, ordered by least recently used first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_EVENT_ORIGIN: The last event of each different origin ordered by the popularity of the origins
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_EVENT_ORIGIN: The last event of each different origin, ordered ascendingly by the popularity of the origin
 * @ZEITGEIST_RESULT_TYPE_MOST_RECENT_CURRENT_ORIGIN: The last event of each different subject origin.
 * @ZEITGEIST_RESULT_TYPE_LEAST_RECENT_CURRENT_ORIGIN: The last event of each different subject origin, ordered by least recently used first
 * @ZEITGEIST_RESULT_TYPE_MOST_POPULAR_CURRENT_ORIGIN: The last event of each different subject origin, ordered by the popularity of the origins
 * @ZEITGEIST_RESULT_TYPE_LEAST_POPULAR_CURRENT_ORIGIN: The last event of each different subject origin, ordered ascendingly by the popularity of the origin
 * @ZEITGEIST_RESULT_TYPE_RELEVANCY: Only allowed on zeitgeist_index_search(). Events are sorted by query relevancy
 * 
 * ZeitgeistResultType
 * 
 * <para>Used to control how the query results are grouped and sorted. See zeitgeist_log_find_events(), zeitgeist_log_find_event_ids(), and zeitgeist_index_search().</para>
 */
/**
 * ZeitgeistRelevantResultType:
 * @ZEITGEIST_RELEVANT_RESULT_TYPE_RECENT: All uris with the most recent uri first
 * @ZEITGEIST_RELEVANT_RESULT_TYPE_RELATED: All uris with the most related one first
 */
/**
 * ZeitgeistStorageState:
 * @ZEITGEIST_STORAGE_STATE_NOT_AVAILABLE: The storage medium of the events subjects must not be available to the user
 * @ZEITGEIST_STORAGE_STATE_AVAILABLE: The storage medium of all event subjects must be immediately available to the user
 * @ZEITGEIST_STORAGE_STATE_ANY: The event subjects may or may not be available
 * 
 * Enumeration class defining the possible values for the storage state of an event subject.
 * 
 * <para>The StorageState enumeration can be used to control whether or not matched events must have their subjects available to the user. Fx. not including deleted files, files on unplugged USB drives, files available only when a network is available etc.</para>
 */
/**
 * ZeitgeistDataModelError:
 * @ZEITGEIST_DATA_MODEL_ERROR_INVALID_SIGNATURE: Signature sent over DBus is invalid.
 * @ZEITGEIST_DATA_MODEL_ERROR_NULL_EVENT: <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> is NULL.
 * @ZEITGEIST_DATA_MODEL_ERROR_TOO_MANY_RESULTS: Query return too many <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s.
 * 
 * Errors which can be thrown when asynchronously querying for <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>s.
 */
