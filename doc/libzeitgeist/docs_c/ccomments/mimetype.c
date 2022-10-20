/**
 * zeitgeist_register_mimetype:
 * @self: the (null) instance
 * @mimetype: (in): &nbsp;.  <para>A MIME-type string. Eg. <emphasis>text/plain</emphasis> </para>
 * @interpretation_uri: (in): &nbsp;.  <para>A URI defining the subject interpretation type to associate with &quot;mimetype&quot; </para>
 * 
 * zeitgeist_register_mimetype:
 * 
 * <para>Associate a MIME-type with a given interpretation type. Registered MIME-types can be looked up with zeitgeist_interpretation_for_mimetype().</para><para>You can register a regular expression as mimetype if instead of this function you invoke zeitgeist_register_mimetype_regex().</para><para>MIME-types are first looked up by their exact name and then if none is found the regular expressions will be checked as fallbacks.</para><para>This library will install a wide range a common mimetypes for you, so unless you have very specific needs you will normally not have to call this function.</para>
 */
/**
 * zeitgeist_register_mimetype_regex:
 * @self: the (null) instance
 * @mimetype_regex: (in): &nbsp;.  <para>A regular expression matching a certain range of mimetypes. Eg. <emphasis>text/.* </emphasis> to match all <emphasis>text</emphasis> subtypes. </para>
 * @interpretation_uri: (in): &nbsp;.  <para>A URI defining the subject interpretation type to associate with the matched MIME-types </para>
 * 
 * zeitgeist_register_mimetype_regex:
 * 
 * <para>Associate a range of MIME-types with a given interpretation type. Registered MIME-types can be looked up with zeitgeist_interpretation_for_mimetype().</para><para>If you only need to register one specific MIME-type, it is more efficient to use zeitgeist_register_mimetype() instead of this function.</para><para>MIME-types are first looked up by their exact name and then if none is found the regular expressions will be checked as fallbacks.</para><para>This library will install a wide range a common mimetypes for you, so unless you have very specific needs you will normally not have to call this function.</para>
 */
/**
 * zeitgeist_interpretation_for_mimetype:
 * @self: the (null) instance
 * @mimetype: (in) (allow-none): &nbsp;.  <para>A MIME-type string. Eg. <emphasis>text/plain</emphasis> </para>
 * 
 * zeitgeist_interpretation_for_mimetype:
 * 
 * <para>Look up the subject interpretation type associated with @mimetype.</para>
 * 
 * Returns: (transfer none): <para>A URI defining the subject interpretation type associated with &quot;mimetype&quot; or %NULL in case &quot;mimetype&quot; is unknown </para>
 */
/**
 * zeitgeist_register_uri_scheme:
 * @self: the (null) instance
 * @uri_scheme: (in): &nbsp;.  <para>A URI scheme such as <emphasis>http:\/\</emphasis>/ </para>
 * @manifestation_type: (in): &nbsp;.  <para>A URI defining the subject manifestation type to associate with &quot;uri_scheme&quot; </para>
 * 
 * zeitgeist_register_uri_scheme:
 * 
 * <para>Associate a URI scheme with a given subject manifestation type. You can find the manifestation type of a given URI by passing it to zeitgeist_manifestation_for_uri().</para><para>This library will install a range a common URI schemes for you, so unless you have very specific needs you will normally not have to call this function.</para>
 */
/**
 * zeitgeist_manifestation_for_uri:
 * @self: the (null) instance
 * @uri: (in): &nbsp;.  <para>An URI </para>
 * 
 * zeitgeist_manifestation_for_uri
 * 
 * <para>Look up a subject manifestation type for a given URI. Eg. if you pass in <emphasis>file:\/\/\/tmp/foo.txt</emphasis> you will get back ZEITGEIST_NFO_FILE_DATA_OBJECT.</para>
 * 
 * Returns: (transfer none): <para>A subject manifestation type for @uri or %NULL in case no suitable manifestation type is known </para>
 */
