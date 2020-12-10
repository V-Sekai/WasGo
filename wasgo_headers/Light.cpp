/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "Light.h"
Light::BakeMode Light::get_bake_mode(){
	return Light::BakeMode(_wasgo_Light_wrapper_get_bake_mode(wasgo_id));
}
Color Light::get_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Light_wrapper_get_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
int Light::get_cull_mask(){
	return (int) _wasgo_Light_wrapper_get_cull_mask(wasgo_id);
}
float Light::get_param(Light::Param p_param){
	return (float) _wasgo_Light_wrapper_get_param(wasgo_id, p_param._get_wasgo_id());
}
Color Light::get_shadow_color(){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 20;
    uint8_t wasgo_ret_buffer[20];
    _wasgo_Light_wrapper_get_shadow_color(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
bool Light::get_shadow_reverse_cull_face(){
	return (bool) _wasgo_Light_wrapper_get_shadow_reverse_cull_face(wasgo_id);
}
bool Light::has_shadow(){
	return (bool) _wasgo_Light_wrapper_has_shadow(wasgo_id);
}
bool Light::is_editor_only(){
	return (bool) _wasgo_Light_wrapper_is_editor_only(wasgo_id);
}
bool Light::is_negative(){
	return (bool) _wasgo_Light_wrapper_is_negative(wasgo_id);
}
void Light::set_bake_mode(Light::BakeMode p_bake_mode){
	_wasgo_Light_wrapper_set_bake_mode(wasgo_id, p_bake_mode._get_wasgo_id());
}
void Light::set_color(Color p_color){

    Variant wasgo_var_color = p_color;
    uint8_t wasgo_buffer_color[20];
    int wasgo_size_color = 20;
    encode_variant(wasgo_var_color, wasgo_buffer_color, wasgo_size_color);
    
	_wasgo_Light_wrapper_set_color(wasgo_id, wasgo_buffer_color, wasgo_size_color);
}
void Light::set_cull_mask(int p_cull_mask){
	_wasgo_Light_wrapper_set_cull_mask(wasgo_id, p_cull_mask);
}
void Light::set_editor_only(bool p_editor_only){
	_wasgo_Light_wrapper_set_editor_only(wasgo_id, p_editor_only);
}
void Light::set_negative(bool p_enabled){
	_wasgo_Light_wrapper_set_negative(wasgo_id, p_enabled);
}
void Light::set_param(Light::Param p_param, float p_value){
	_wasgo_Light_wrapper_set_param(wasgo_id, p_param._get_wasgo_id(), p_value);
}
void Light::set_shadow(bool p_enabled){
	_wasgo_Light_wrapper_set_shadow(wasgo_id, p_enabled);
}
void Light::set_shadow_color(Color p_shadow_color){

    Variant wasgo_var_shadow_color = p_shadow_color;
    uint8_t wasgo_buffer_shadow_color[20];
    int wasgo_size_shadow_color = 20;
    encode_variant(wasgo_var_shadow_color, wasgo_buffer_shadow_color, wasgo_size_shadow_color);
    
	_wasgo_Light_wrapper_set_shadow_color(wasgo_id, wasgo_buffer_shadow_color, wasgo_size_shadow_color);
}
void Light::set_shadow_reverse_cull_face(bool p_enable){
	_wasgo_Light_wrapper_set_shadow_reverse_cull_face(wasgo_id, p_enable);
}

Light::Light(WasGoID p_wasgo_id) : VisualInstance(p_wasgo_id){
}
Light::Light(VisualInstance other) : VisualInstance(other._get_wasgo_id()){
}
Light::Light():VisualInstance(){
}
Light Light::new_instance(){
    return Light(_wasgo_Light_constructor());
}
WasGoID Light::_get_wasgo_id(){
    return wasgo_id;
}
Light::operator bool(){
    return (bool) wasgo_id;
}
