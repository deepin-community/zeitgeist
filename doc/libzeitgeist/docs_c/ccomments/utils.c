/**
 * SECTION:utils
 * @short_description: Utility functions. FOR INTERNAL USE ONLY
 * 
 * <para>A set of funtions that if used would only affect libzeitgeist in the code it is used in.</para>
 */
/**
 * zeitgeist_utils_get_data_path:
 * @self: the (null) instance
 * 
 * Returns: (transfer none): 
 */
/**
 * zeitgeist_utils_get_default_data_path:
 * @self: the (null) instance
 */
/**
 * zeitgeist_utils_get_database_file_path:
 * @self: the (null) instance
 * 
 * Returns: (transfer none): 
 */
/**
 * zeitgeist_utils_set_database_file_path:
 * @self: the (null) instance
 * @path: (in): &nbsp;.  <para>a <link linkend="gchar"><type>gchar</type></link> </para>
 * 
 * Sets the filepath of the database.
 */
/**
 * zeitgeist_utils_get_database_file_backup_path:
 * @self: the (null) instance
 * 
 * Returns: (transfer none): 
 */
/**
 * zeitgeist_utils_get_database_file_retire_name:
 * @self: the (null) instance
 */
/**
 * zeitgeist_utils_get_local_extensions_path:
 * @self: the (null) instance
 * 
 * Returns: (transfer none): 
 */
/**
 * zeitgeist_utils_using_in_memory_database:
 * @self: the (null) instance
 * 
 * Whether a in-memory SQLite database is in use (vs. a file-based one). 
 * 
 * Returns: 
 */
/**
 * zeitgeist_utils_backup_database:
 * @self: the (null) instance
 * @error: location to store the error occurring, or %NULL to ignore
 */
/**
 * zeitgeist_utils_parse_negation:
 * @self: the (null) instance
 * @val: (inout): &nbsp;.  <para>value to check </para>
 * 
 * Check if the value starts with the negation operator. If it does, remove the operator from the value and return true. Otherwise, return false.
 */
/**
 * zeitgeist_utils_parse_noexpand:
 * @self: the (null) instance
 * @val: (inout): &nbsp;.  <para>value to check </para>
 * 
 * Check if the value starts with the noexpand operator. If it does, remove the operator from the value and return true. Otherwise, return false.
 * 
 * <para>Check for the negation operator before calling this function.</para>
 */
/**
 * zeitgeist_utils_parse_wildcard:
 * @self: the (null) instance
 * @val: (inout): &nbsp;.  <para>value to check </para>
 * 
 * Check if the value ends with the wildcard character. If it does, remove the wildcard character from the value and return true. Otherwise, return false.
 */
/**
 * zeitgeist_utils_is_empty_string:
 * @self: the (null) instance
 * @s: (in) (allow-none): &nbsp;.  <para>string to check </para>
 * 
 * Return true if a string is empty (null or containing just a null byte).
 */
/**
 * zeitgeist_utils_log_may_read_directly:
 * @self: the (null) instance
 * 
 * True if direct reading of the DB is enabled for Log, default is True. 
 * 
 * Returns: 
 */
/**
 * ZEITGEIST_UTILS_ENGINE_DBUS_NAME:
 */
/**
 * ZEITGEIST_UTILS_ENGINE_DBUS_PATH:
 */
/**
 * ZEITGEIST_UTILS_SIG_EVENT:
 */
/**
 * ZEITGEIST_UTILS_MAX_DBUS_RESULT_SIZE:
 */
/**
 * ZEITGEIST_UTILS_CACHE_SIZE:
 */
