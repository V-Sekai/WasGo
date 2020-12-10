/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Thread.h"
String Thread::get_id(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Thread_wrapper_get_id(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool Thread::is_active(){
	return (bool) _wasgo_Thread_wrapper_is_active(wasgo_id);
}
Error Thread::start(Object p_instance, String p_method, Variant p_userdata, Thread::Priority p_priority){

    Variant wasgo_var_method = p_method;
    int wasgo_size_method = 10 + String(p_method).size();
    uint8_t wasgo_buffer_method[wasgo_size_method];
    encode_variant(wasgo_var_method, wasgo_buffer_method, wasgo_size_method);
    

    Variant wasgo_var_userdata = p_userdata;
    uint8_t wasgo_buffer_userdata[256];
    int wasgo_size_userdata = 256;
    encode_variant(wasgo_var_userdata, wasgo_buffer_userdata, wasgo_size_userdata);
    
	return Error(_wasgo_Thread_wrapper_start(wasgo_id, p_instance._get_wasgo_id(), wasgo_buffer_method, wasgo_size_method, wasgo_size_method, wasgo_buffer_userdata, wasgo_size_userdata, p_priority._get_wasgo_id()));
}
Variant Thread::wait_to_finish(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_Thread_wrapper_wait_to_finish(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}

Thread::Thread(WasGoID p_wasgo_id) : Reference(p_wasgo_id){
}
Thread::Thread(Reference other) : Reference(other._get_wasgo_id()){
}
Thread::Thread():Reference(){
}
Thread Thread::new_instance(){
    return Thread(_wasgo_Thread_constructor());
}
WasGoID Thread::_get_wasgo_id(){
    return wasgo_id;
}
Thread::operator bool(){
    return (bool) wasgo_id;
}
