/**
 * SECTION:timestamp
 * @short_description: Convenience functions for dealing with timestamps and dates
 * 
 * <para>include: zeitgeist.h</para><para>A suite of convenience functions for dealing with timestamps and dates.</para><para>Zeitgeist timestamps are represented as <emphasis role="bold">gint64</emphasis>s with the number of milliseconds since the Unix Epoch.</para>
 */
/**
 * zeitgeist_timestamp_from_timeval:
 * @self: the (null) instance
 * @timeval: (in): &nbsp;.  <para>time to convert </para>
 * 
 * Convert a <link linkend="GTimeVal"><type>GTimeVal</type></link> to an amount of milliseconds since the Unix Epoch
 * 
 * Returns: <para>number of milliseconds since the Unix Epoch </para>
 */
/**
 * zeitgeist_timestamp_to_timeval:
 * @self: the (null) instance
 * @timestamp: (in): &nbsp;.  <para>to convert </para>
 * 
 * Write a Zeitgeist timestamp to a <link linkend="GTimeVal"><type>GTimeVal</type></link> instance. Note that Zeitgeist uses only a millisecond resolution, whereas <link linkend="GTimeVal"><type>GTimeVal</type></link> has microsecond resolution. This means that the lower three digits of @tv.tv_usec will always be 0.
 * 
 * Returns: <para>the equivalent <link linkend="GTimeVal"><type>GTimeVal</type></link> instance. </para>
 */
/**
 * zeitgeist_timestamp_from_now:
 * @self: the (null) instance
 * 
 * Return the current timestamp in milliseconds.
 * 
 * Returns: <para>the timestamp for the current system time, in milliseconds since the Unix Epoch </para>
 */
/**
 * zeitgeist_timestamp_from_iso8601:
 * @self: the (null) instance
 * @datetime: (in): &nbsp;.  <para>a string containing an ISO8601-conforming datetime </para>
 * 
 * Parse a timestamp from an ISO8601-encoded string.
 * 
 * Returns: <para>the timestamp represented by the given string, or -1 if it can&apos;t be parsed </para>
 */
/**
 * zeitgeist_timestamp_to_iso8601:
 * @self: the (null) instance
 * @timestamp: (in): &nbsp;.  <para>a timestamp in milliseconds since the Unix Epoch </para>
 * 
 * Convert a timestamp to a human-readable ISO8601 format
 * 
 * Returns: <para>a newly allocated string containing the ISO8601 version of the given timestamp </para>
 */
/**
 * zeitgeist_timestamp_from_date:
 * @self: the (null) instance
 * @date: (in): &nbsp;.  <para>the date to convert </para>
 * 
 * Convert a <emphasis role="bold">GDate</emphasis> to a Zeitgeist timestamp
 * 
 * Returns: <para>the given date expressed as a timestamp in milliseconds since the Epoch. The timestamp is guaranteed to be roudned off to the midnight of the given date. </para>
 */
/**
 * zeitgeist_timestamp_from_dmy:
 * @self: the (null) instance
 * @day: (in): &nbsp;.  <para>the day of the month </para>
 * @month: (in): &nbsp;.  <para>the month of the year </para>
 * @year: (in): &nbsp;.  <para>the year </para>
 * 
 * Convert a day, month, year tuple into a Zeitgeist timestamp
 * 
 * Returns: <para>the given date (rounded off to the midnight), expressed as a timestamp in milliseconds since the Epoch, or -1 in case the provided parameters don&apos;t constitute a valid date. </para>
 */
/**
 * zeitgeist_timestamp_to_date:
 * @self: the (null) instance
 * @timestamp: (in): &nbsp;.  <para>to convert </para>
 * 
 * Write a timestamp to a <link linkend="GDate"><type>GDate</type></link> structure
 * 
 * Returns: <para><link linkend="GDate"><type>GDate</type></link> initialized to the given timestamp </para>
 */
/**
 * zeitgeist_timestamp_next_midnight:
 * @self: the (null) instance
 * @timestamp: (in): &nbsp;.  <para>the Zeitgeist timestamp to find the next midnight for </para>
 * 
 * Calculate the timestamp for the next midnight after the given timestamp.
 * 
 * <para>If is is already midnight (down to the millisecond), this method will return the value for the next midnight. In other words, you can call this method recursively in order to iterate, forwards in time, over midnights.</para>
 * 
 * Returns: <para>the timestamp for the next midnight after the given timestamp </para>
 */
/**
 * zeitgeist_timestamp_prev_midnight:
 * @self: the (null) instance
 * @timestamp: (in): &nbsp;.  <para>the Zeitgeist timestamp to find the previous midnight for </para>
 * 
 * Calculate the timestamp for the midnight just before the given timestamp.
 * 
 * <para>If is is already midnight (down to the millisecond), this method will return the value for the previous midnight. In other words, you can call this method recursively in order to iterate, backwards in time, over midnights.</para>
 * 
 * Returns: <para>the timestamp for the midnight just before the given timestamp </para>
 */
/**
 * ZEITGEIST_TIMESTAMP_SECOND:
 * 
 * A second represented as a Zeitgeist timestamp (ie. 1000ms)
 */
/**
 * ZEITGEIST_TIMESTAMP_MINUTE:
 * 
 * A minute represented as a Zeitgeist timestamp (ie. 60000ms)
 */
/**
 * ZEITGEIST_TIMESTAMP_HOUR:
 * 
 * An hour represented as a Zeitgeist timestamp (ie. 3600000ms)
 */
/**
 * ZEITGEIST_TIMESTAMP_DAY:
 * 
 * A day represented as a Zeitgeist timestamp (ie. 86400000ms)
 */
/**
 * ZEITGEIST_TIMESTAMP_WEEK:
 * 
 * A week represented as a Zeitgeist timestamp (ie. 604800000ms)
 */
/**
 * ZEITGEIST_TIMESTAMP_YEAR:
 * 
 * A year represented as a Zeitgeist timestamp (ie. 31556952000ms). Be warned that a year is not 365 days, but in fact 365.2425 days, to account for leap years.
 */
