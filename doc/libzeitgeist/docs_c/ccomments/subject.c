/**
 * SECTION:subject
 * @short_description: Subject objects abstract Zeitgeist subjects
 * 
 * <para>In Zeitgeist terminology, a <emphasis>subject</emphasis> is something (a file, web page, person, conversation, etc.) that was somehow involved or affected by a <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>.</para>
 */
/**
 * ZEITGEIST_TYPE_SUBJECT:
 * 
 * The type for <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>.
 */
/**
 * zeitgeist_subject_to_variant:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance
 */
/**
 * zeitgeist_subject_matches_template:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance
 * @template_subject: (in): &nbsp;.  <para>a <link linkend="zeitgeist-subject-new"><function>zeitgeist_subject_new()</function></link> </para>
 * 
 * true if this Subject matches *subject_template*. Empty fields in the template are treated as wildcards. Interpretations and manifestations are also matched if they are children of the types specified in `subject_template`. 
 * 
 * Returns: 
 */
/**
 * zeitgeist_subject_new_full:
 * @uri: (in) (allow-none): &nbsp;.  <para>The URI or URL of the subject </para>
 * @interpretation: (in) (allow-none): &nbsp;.  <para>The interpretation type of the subject. </para>
 * @manifestation: (in) (allow-none): &nbsp;.  <para>The manifestation type of the subject. </para>
 * @mimetype: (in) (allow-none): &nbsp;.  <para>The mimetype of the subject. Eg. &lt;emphasis&gt;text/plain&lt;/emphasis&gt; </para>
 * @origin: (in) (allow-none): &nbsp;.  <para>The origin of the subject. </para>
 * @text: (in) (allow-none): &nbsp;.  <para>A small textual representation of the subject suitable for display </para>
 * @storage: (in) (allow-none): &nbsp;.  <para>String identifier for the storage medium the subject is on. </para>
 * 
 * Create a new Subject structure with predefined data
 * 
 * Returns: <para>A newly create <link linkend="zeitgeist-subject-new"><function>zeitgeist_subject_new()</function></link> instance. The returned subject will have a floating reference which will be consumed if you pass the event to any of the methods provided by this library (like adding it to an event). </para>
 */
/**
 * zeitgeist_subject_new_move_event:
 * @source_uri: (in) (allow-none): &nbsp;.  <para>The URI or URL of the subject </para>
 * @source_origin: (in) (allow-none): &nbsp;.  <para>The URI or URL of the subject </para>
 * @destination_uri: (in) (allow-none): &nbsp;.  <para>The URI or URL of the subject </para>
 * @destination_origin: (in) (allow-none): &nbsp;.  <para>The URI or URL of the subject </para>
 * @interpretation: (in) (allow-none): &nbsp;.  <para>The interpretation type of the subject. </para>
 * @manifestation: (in) (allow-none): &nbsp;.  <para>The manifestation type of the subject. </para>
 * @mimetype: (in) (allow-none): &nbsp;.  <para>The mimetype of the subject. Eg. &lt;emphasis&gt;text/plain&lt;/emphasis&gt; </para>
 * @text: (in) (allow-none): &nbsp;.  <para>A small textual representation of the subject suitable for display </para>
 * @storage: (in) (allow-none): &nbsp;.  <para>String identifier for the storage medium the subject is on. </para>
 * 
 * Create a new Subject structure to describe a move event
 * 
 * Returns: <para>A newly create <link linkend="zeitgeist-subject-new"><function>zeitgeist_subject_new()</function></link> instance. The returned subject will have a floating reference which will be consumed if you pass the event to any of the methods provided by this library (like adding it to an event). </para>
 */
/**
 * zeitgeist_subject_new_from_variant:
 * @subject_variant: (in): &nbsp;.  <para>A <link linkend="GVariant"><type>GVariant</type></link> decscribing the subject data. </para>
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 * 
 * Create a new Subject structure from predefined <link linkend="GVariant"><type>GVariant</type></link> data
 * 
 * Returns: <para>A newly create <link linkend="zeitgeist-subject-new"><function>zeitgeist_subject_new()</function></link> instance. The returned subject will have a floating reference which will be consumed if you pass the event to any of the methods provided by this library (like adding it to an event). </para>
 */
/**
 * zeitgeist_subject_new:
 */
/**
 * ZeitgeistSubject:uri:
 */
/**
 * zeitgeist_subject_get_uri:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--uri"><type>"uri"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--uri"><type>"uri"</type></link> property
 */
/**
 * zeitgeist_subject_set_uri:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--uri"><type>"uri"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--uri"><type>"uri"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:origin:
 */
/**
 * zeitgeist_subject_get_origin:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--origin"><type>"origin"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--origin"><type>"origin"</type></link> property
 */
/**
 * zeitgeist_subject_set_origin:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--origin"><type>"origin"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--origin"><type>"origin"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:text:
 */
/**
 * zeitgeist_subject_get_text:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--text"><type>"text"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--text"><type>"text"</type></link> property
 */
/**
 * zeitgeist_subject_set_text:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--text"><type>"text"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--text"><type>"text"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:storage:
 */
/**
 * zeitgeist_subject_get_storage:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--storage"><type>"storage"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--storage"><type>"storage"</type></link> property
 */
/**
 * zeitgeist_subject_set_storage:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--storage"><type>"storage"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--storage"><type>"storage"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:current-uri:
 */
/**
 * zeitgeist_subject_get_current_uri:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--current-uri"><type>"current-uri"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--current-uri"><type>"current-uri"</type></link> property
 */
/**
 * zeitgeist_subject_set_current_uri:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--current-uri"><type>"current-uri"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--current-uri"><type>"current-uri"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:current-origin:
 */
/**
 * zeitgeist_subject_get_current_origin:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--current-origin"><type>"current-origin"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--current-origin"><type>"current-origin"</type></link> property
 */
/**
 * zeitgeist_subject_set_current_origin:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--current-origin"><type>"current-origin"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--current-origin"><type>"current-origin"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:mimetype:
 */
/**
 * zeitgeist_subject_get_mimetype:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--mimetype"><type>"mimetype"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--mimetype"><type>"mimetype"</type></link> property
 */
/**
 * zeitgeist_subject_set_mimetype:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--mimetype"><type>"mimetype"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--mimetype"><type>"mimetype"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:interpretation:
 */
/**
 * zeitgeist_subject_get_interpretation:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--interpretation"><type>"interpretation"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--interpretation"><type>"interpretation"</type></link> property
 */
/**
 * zeitgeist_subject_set_interpretation:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--interpretation"><type>"interpretation"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--interpretation"><type>"interpretation"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:manifestation:
 */
/**
 * zeitgeist_subject_get_manifestation:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistSubject--manifestation"><type>"manifestation"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistSubject--manifestation"><type>"manifestation"</type></link> property
 */
/**
 * zeitgeist_subject_set_manifestation:
 * @self: the <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistSubject--manifestation"><type>"manifestation"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistSubject--manifestation"><type>"manifestation"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistSubject:
 * 
 * Subject objects abstract Zeitgeist subjects
 * 
 * <para>In Zeitgeist terminology, a <emphasis>subject</emphasis> is something (a file, web page, person, conversation, etc.) that was somehow involved or affected by a <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>.</para>
 */
/**
 * ZeitgeistSubjectClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-SUBJECT:CAPS"><literal>ZEITGEIST_TYPE_SUBJECT</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
