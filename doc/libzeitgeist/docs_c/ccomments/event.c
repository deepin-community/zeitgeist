/**
 * SECTION:event
 * @short_description: Event objects abstract Zeitgeist events
 * 
 * <para>The Event class is one of the primary elements for communicating with the Zeitgeist daemon. Events serve two purposes Unsurprisingly, they represent events that have happened, but they can also act as templates. See also <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>.</para><para>An event in the Zeitgeist world is characterized by two main properties. &quot;What happened&quot;, also called the interpretation, and &quot;How did it happen&quot;, also called the manifestation. Besides these properties, an event also has an actor which identifies the party responsible for triggering the event which in most cases will be an application. Lastly there is an event timestamp and an event ID. The timestamp is calculated as the number of milliseconds since the Unix epoch and the event ID is a number assigned to the event by the Zeitgeist engine when it&apos;s logged. These five properties are collectively known as the event metadata.</para><para>An event must also describe what it happened to. For this we have event subjects. Most events have one subject, but they may also have more. The metadata of the subjects are recorded at the time of logging, and are encapsulated by the #Subject class. It&apos;s important to understand that it&apos;s just the subject metadata at the time of logging, not necessarily the subject metadata as it exists right now.</para><para>In addition to the listed properties, events may also carry a free form binary payload. The usage of this is application specific and is generally useless unless you have some contextual information to figure out what&apos;s in it.</para><para>A large part of the Zeitgeist query and monitoring API revolves around a concept of template matching. A query is simply a list of event templates that you want to look for in the log. An unset property on an event template indicates that anything is allowed in that field. If the property is set it indicates that the property must be an exact match, unless a special operator is used.</para>
 */
/**
 * ZEITGEIST_TYPE_EVENT:
 * 
 * The type for <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link>.
 */
/**
 * zeitgeist_event_get_subject:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 * @index: &nbsp;
 */
/**
 * zeitgeist_event_num_subjects:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 */
/**
 * zeitgeist_event_add_subject:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 * @subject: &nbsp;
 */
/**
 * zeitgeist_event_take_subject:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 * @subject: &nbsp;
 */
/**
 * zeitgeist_event_set_actor_from_app_info:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 * @info: &nbsp;
 */
/**
 * zeitgeist_event_to_variant:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 */
/**
 * zeitgeist_event_debug_print:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 */
/**
 * zeitgeist_event_matches_template:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance
 * @template_event: &nbsp;
 */
/**
 * ZEITGEIST_EVENT_SIGNATURE:
 */
/**
 * zeitgeist_event_new_full:
 * @interpretation: &nbsp;
 * @manifestation: &nbsp;
 * @actor: &nbsp;
 * @origin: &nbsp;
 * @...: &nbsp;
 */
/**
 * zeitgeist_event_new_from_variant:
 * @event_variant: &nbsp;
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 */
/**
 * zeitgeist_event_new:
 */
/**
 * ZeitgeistEvent:id:
 */
/**
 * zeitgeist_event_get_id:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--id"><type>"id"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--id"><type>"id"</type></link> property
 */
/**
 * zeitgeist_event_set_id:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--id"><type>"id"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--id"><type>"id"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:timestamp:
 */
/**
 * zeitgeist_event_get_timestamp:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--timestamp"><type>"timestamp"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--timestamp"><type>"timestamp"</type></link> property
 */
/**
 * zeitgeist_event_set_timestamp:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--timestamp"><type>"timestamp"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--timestamp"><type>"timestamp"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:origin:
 */
/**
 * zeitgeist_event_get_origin:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--origin"><type>"origin"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--origin"><type>"origin"</type></link> property
 */
/**
 * zeitgeist_event_set_origin:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--origin"><type>"origin"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--origin"><type>"origin"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:actor:
 */
/**
 * zeitgeist_event_get_actor:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--actor"><type>"actor"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--actor"><type>"actor"</type></link> property
 */
/**
 * zeitgeist_event_set_actor:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--actor"><type>"actor"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--actor"><type>"actor"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:interpretation:
 */
/**
 * zeitgeist_event_get_interpretation:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--interpretation"><type>"interpretation"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--interpretation"><type>"interpretation"</type></link> property
 */
/**
 * zeitgeist_event_set_interpretation:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--interpretation"><type>"interpretation"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--interpretation"><type>"interpretation"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:manifestation:
 */
/**
 * zeitgeist_event_get_manifestation:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--manifestation"><type>"manifestation"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--manifestation"><type>"manifestation"</type></link> property
 */
/**
 * zeitgeist_event_set_manifestation:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--manifestation"><type>"manifestation"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--manifestation"><type>"manifestation"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:subjects:
 */
/**
 * zeitgeist_event_get_subjects:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--subjects"><type>"subjects"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--subjects"><type>"subjects"</type></link> property
 */
/**
 * zeitgeist_event_set_subjects:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--subjects"><type>"subjects"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--subjects"><type>"subjects"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:payload:
 */
/**
 * zeitgeist_event_get_payload:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistEvent--payload"><type>"payload"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistEvent--payload"><type>"payload"</type></link> property
 */
/**
 * zeitgeist_event_set_payload:
 * @self: the <link linkend="ZeitgeistEvent"><type>ZeitgeistEvent</type></link> instance to modify
 * @value: the new value of the <link linkend="ZeitgeistEvent--payload"><type>"payload"</type></link> property
 * 
 * Set the value of the <link linkend="ZeitgeistEvent--payload"><type>"payload"</type></link> property to @value.
 * 
 * 
 */
/**
 * ZeitgeistEvent:
 * 
 * Event objects abstract Zeitgeist events
 * 
 * <para>The Event class is one of the primary elements for communicating with the Zeitgeist daemon. Events serve two purposes Unsurprisingly, they represent events that have happened, but they can also act as templates. See also <link linkend="ZeitgeistSubject"><type>ZeitgeistSubject</type></link>.</para><para>An event in the Zeitgeist world is characterized by two main properties. &quot;What happened&quot;, also called the interpretation, and &quot;How did it happen&quot;, also called the manifestation. Besides these properties, an event also has an actor which identifies the party responsible for triggering the event which in most cases will be an application. Lastly there is an event timestamp and an event ID. The timestamp is calculated as the number of milliseconds since the Unix epoch and the event ID is a number assigned to the event by the Zeitgeist engine when it&apos;s logged. These five properties are collectively known as the event metadata.</para><para>An event must also describe what it happened to. For this we have event subjects. Most events have one subject, but they may also have more. The metadata of the subjects are recorded at the time of logging, and are encapsulated by the #Subject class. It&apos;s important to understand that it&apos;s just the subject metadata at the time of logging, not necessarily the subject metadata as it exists right now.</para><para>In addition to the listed properties, events may also carry a free form binary payload. The usage of this is application specific and is generally useless unless you have some contextual information to figure out what&apos;s in it.</para><para>A large part of the Zeitgeist query and monitoring API revolves around a concept of template matching. A query is simply a list of event templates that you want to look for in the log. An unset property on an event template indicates that anything is allowed in that field. If the property is set it indicates that the property must be an exact match, unless a special operator is used.</para>
 */
/**
 * ZeitgeistEventClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-EVENT:CAPS"><literal>ZEITGEIST_TYPE_EVENT</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
/**
 * zeitgeist_events_from_variant:
 * @self: the (null) instance
 * @vevents: &nbsp;
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 */
/**
 * zeitgeist_events_to_variant:
 * @self: the (null) instance
 * @events: &nbsp;
 */
/**
 * zeitgeist_events_to_variant_with_limit:
 * @self: the (null) instance
 * @events: &nbsp;
 * @limit: &nbsp;
 * @error: (error-domains ZeitgeistDataModelError): location to store the error occurring, or %NULL to ignore
 */
