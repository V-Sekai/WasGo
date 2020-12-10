/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "ReferenceRect.h"
Color ReferenceRect::get_border_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_ReferenceRect_wrapper_get_border_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool ReferenceRect::get_editor_only(){
	return (bool) _wasgo_ReferenceRect_wrapper_get_editor_only(wasgo_id);
}
void ReferenceRect::set_border_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_ReferenceRect_wrapper_set_border_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void ReferenceRect::set_editor_only(bool p_enabled){
	_wasgo_ReferenceRect_wrapper_set_editor_only(wasgo_id, p_enabled);
}

ReferenceRect::ReferenceRect(WasGoID p_wasgo_id) : Control(p_wasgo_id){
}
ReferenceRect::ReferenceRect(Control other) : Control(other._get_wasgo_id()){
}
ReferenceRect::ReferenceRect():Control(){
}
ReferenceRect ReferenceRect::new_instance(){
    return ReferenceRect(_wasgo_ReferenceRect_constructor());
}
WasGoID ReferenceRect::_get_wasgo_id(){
    return wasgo_id;
}
ReferenceRect::operator bool(){
    return (bool) wasgo_id;
}
