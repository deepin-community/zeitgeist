/**
 * ZEITGEIST_TYPE_QUEUED_PROXY_WRAPPER:
 * 
 * The type for <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link>.
 */
/**
 * zeitgeist_queued_proxy_wrapper_proxy_acquired:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 * @proxy: &nbsp;
 */
/**
 * zeitgeist_queued_proxy_wrapper_proxy_unavailable:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 * @err: &nbsp;
 */
/**
 * zeitgeist_queued_proxy_wrapper_process_queued_methods:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 */
/**
 * zeitgeist_queued_proxy_wrapper_name_owner_changed:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 * @pspec: &nbsp;
 */
/**
 * zeitgeist_queued_proxy_wrapper_on_connection_established:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 */
/**
 * zeitgeist_queued_proxy_wrapper_on_connection_lost:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 */
/**
 * zeitgeist_queued_proxy_wrapper_wait_for_proxy:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 * @_callback_: (scope async): callback to call when the request is satisfied
 * @_user_data_: (closure): the data to pass to @_callback_ function
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-queued-proxy-wrapper-wait-for-proxy-finish"><function>zeitgeist_queued_proxy_wrapper_wait_for_proxy_finish()</function></link>
 */
/**
 * zeitgeist_queued_proxy_wrapper_wait_for_proxy_finish:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance
 * @_res_: a <link linkend="GAsyncResult"><type>GAsyncResult</type></link>
 * @error: location to store the error occurring, or %NULL to ignore
 * 
 * <emphasis>See also</emphasis>: <link linkend="zeitgeist-queued-proxy-wrapper-wait-for-proxy"><function>zeitgeist_queued_proxy_wrapper_wait_for_proxy()</function></link>
 */
/**
 * ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD:
 * 
 * The type for <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod"><type>ZeitgeistQueuedProxyWrapperQueuedMethod</type></link>.
 */
/**
 * zeitgeist_queued_proxy_wrapper_queued_method_new:
 * @callback_target: (allow-none) (closure): user data to pass to @callback
 * @callback_target_destroy_notify: (allow-none): function to call when @callback_target is no longer needed
 * @callback: &nbsp;
 */
/**
 * ZeitgeistQueuedProxyWrapperQueuedMethod:queued-method:
 */
/**
 * zeitgeist_queued_proxy_wrapper_queued_method_get_queued_method:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod"><type>ZeitgeistQueuedProxyWrapperQueuedMethod</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod--queued-method"><type>"queued-method"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod--queued-method"><type>"queued-method"</type></link> property
 */
/**
 * ZeitgeistQueuedProxyWrapperQueuedMethod:
 */
/**
 * zeitgeist_queued_proxy_wrapper_queued_method_ref:
 * @instance: a <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod"><type>ZeitgeistQueuedProxyWrapperQueuedMethod</type></link>.
 * 
 * Increases the reference count of @object.
 * 
 * Returns: the same @object
 */
/**
 * zeitgeist_queued_proxy_wrapper_queued_method_unref:
 * @instance: a <link linkend="ZeitgeistQueuedProxyWrapperQueuedMethod"><type>ZeitgeistQueuedProxyWrapperQueuedMethod</type></link>.
 * 
 * Decreases the reference count of @object. When its reference count drops to 0, the object is finalized (i.e. its memory is freed).
 */
/**
 * zeitgeist_queued_proxy_wrapper_param_spec_queued_method:
 * @name: canonical name of the property specified
 * @nick: nick name for the property specified
 * @blurb: description of the property specified
 * @object_type: <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived type of this property
 * @flags: flags for the property specified
 * 
 * Creates a new <link linkend="GParamSpecBoxed"><type>GParamSpecBoxed</type></link> instance specifying a <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived property.
 * 
 * See <link linkend="g-param-spec-internal"><function>g_param_spec_internal()</function></link> for details on property names.
 */
/**
 * zeitgeist_queued_proxy_wrapper_value_set_queued_method:
 * @value: a valid <link linkend="GValue"><type>GValue</type></link> of <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived type
 * @v_object: object value to be set
 * 
 * Set the contents of a <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived <link linkend="GValue"><type>GValue</type></link> to @v_object.
 * 
 * <link linkend="zeitgeist-queued-proxy-wrapper-value-set-queued-method"><function>zeitgeist_queued_proxy_wrapper_value_set_queued_method()</function></link> increases the reference count of @v_object (the <link linkend="GValue"><type>GValue</type></link> holds a reference to @v_object). If you do not wish to increase the reference count of the object (i.e. you wish to pass your current reference to the <link linkend="GValue"><type>GValue</type></link> because you no longer need it), use <link linkend="zeitgeist-queued-proxy-wrapper-value-take-queued-method"><function>zeitgeist_queued_proxy_wrapper_value_take_queued_method()</function></link> instead.
 * 
 * It is important that your <link linkend="GValue"><type>GValue</type></link> holds a reference to @v_object (either its own, or one it has taken) to ensure that the object won't be destroyed while the <link linkend="GValue"><type>GValue</type></link> still exists).
 */
/**
 * zeitgeist_queued_proxy_wrapper_value_get_queued_method:
 * @value: a valid <link linkend="GValue"><type>GValue</type></link> of <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived type
 * 
 * Get the contents of a <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived <link linkend="GValue"><type>GValue</type></link>.
 * 
 * Returns: object contents of @value
 */
/**
 * zeitgeist_queued_proxy_wrapper_value_take_queued_method:
 * @value: a valid <link linkend="GValue"><type>GValue</type></link> of <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived type
 * @v_object: object value to be set
 * 
 * Sets the contents of a <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link> derived <link linkend="GValue"><type>GValue</type></link> to @v_object and takes over the ownership of the callers reference to @v_object; the caller doesn't have to unref it any more (i.e. the reference count of the object is not increased).
 * 
 * If you want the GValue to hold its own reference to @v_object, use <link linkend="zeitgeist-queued-proxy-wrapper-value-set-queued-method"><function>zeitgeist_queued_proxy_wrapper_value_set_queued_method()</function></link> instead.
 */
/**
 * ZeitgeistQueuedProxyWrapperQueuedMethodClass:
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-QUEUED-PROXY-WRAPPER-TYPE-QUEUED-METHOD:CAPS"><literal>ZEITGEIST_QUEUED_PROXY_WRAPPER_TYPE_QUEUED_METHOD</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
/**
 * ZeitgeistQueuedProxyWrapper:proxy-created:
 */
/**
 * zeitgeist_queued_proxy_wrapper_get_proxy_created:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistQueuedProxyWrapper--proxy-created"><type>"proxy-created"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistQueuedProxyWrapper--proxy-created"><type>"proxy-created"</type></link> property
 */
/**
 * ZeitgeistQueuedProxyWrapper:is-connected:
 */
/**
 * zeitgeist_queued_proxy_wrapper_get_is_connected:
 * @self: the <link linkend="ZeitgeistQueuedProxyWrapper"><type>ZeitgeistQueuedProxyWrapper</type></link> instance to query
 * 
 * Get and return the current value of the <link linkend="ZeitgeistQueuedProxyWrapper--is-connected"><type>"is-connected"</type></link> property.
 * 
 * 
 * 
 * Returns: the value of the <link linkend="ZeitgeistQueuedProxyWrapper--is-connected"><type>"is-connected"</type></link> property
 */
/**
 * ZeitgeistQueuedProxyWrapper:
 */
/**
 * ZeitgeistQueuedProxyWrapperClass:
 * @on_connection_established: virtual method used internally
 * @on_connection_lost: virtual method used internally
 * @parent_class: the parent class structure
 * 
 * The class structure for <link linkend="ZEITGEIST-TYPE-QUEUED-PROXY-WRAPPER:CAPS"><literal>ZEITGEIST_TYPE_QUEUED_PROXY_WRAPPER</literal></link>. All the fields in this structure are private and should never be accessed directly.
 */
