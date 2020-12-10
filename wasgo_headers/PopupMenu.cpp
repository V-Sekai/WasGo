/* THIS FILE IS GENERATED */
#include "marshalls.h"
#include "PopupMenu.h"
void PopupMenu::add_check_item(String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_check_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, -69, p_id, p_accel);
}
void PopupMenu::add_check_shortcut(ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_check_shortcut(wasgo_id, p_shortcut._get_wasgo_id(), p_id, -69, p_global);
}
void PopupMenu::add_icon_check_item(Texture p_texture, String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_icon_check_item(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_label, wasgo_size_label, wasgo_size_label, p_id, p_accel);
}
void PopupMenu::add_icon_check_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_icon_check_shortcut(wasgo_id, p_texture._get_wasgo_id(), p_shortcut._get_wasgo_id(), -69, p_id, p_global);
}
void PopupMenu::add_icon_item(Texture p_texture, String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_icon_item(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_label, wasgo_size_label, wasgo_size_label, p_id, p_accel);
}
void PopupMenu::add_icon_radio_check_item(Texture p_texture, String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_icon_radio_check_item(wasgo_id, p_texture._get_wasgo_id(), wasgo_buffer_label, wasgo_size_label, wasgo_size_label, p_id, p_accel);
}
void PopupMenu::add_icon_radio_check_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_icon_radio_check_shortcut(wasgo_id, p_texture._get_wasgo_id(), p_shortcut._get_wasgo_id(), -69, p_id, p_global);
}
void PopupMenu::add_icon_shortcut(Texture p_texture, ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_icon_shortcut(wasgo_id, p_texture._get_wasgo_id(), p_shortcut._get_wasgo_id(), -69, p_id, p_global);
}
void PopupMenu::add_item(String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, -69, p_id, p_accel);
}
void PopupMenu::add_multistate_item(String p_label, int p_max_states, int p_default_state, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_multistate_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, -69, p_max_states, p_default_state, p_id, p_accel);
}
void PopupMenu::add_radio_check_item(String p_label, int p_id, int p_accel){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_radio_check_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, -69, p_id, p_accel);
}
void PopupMenu::add_radio_check_shortcut(ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_radio_check_shortcut(wasgo_id, p_shortcut._get_wasgo_id(), p_id, -69, p_global);
}
void PopupMenu::add_separator(String p_label){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    
	_wasgo_PopupMenu_wrapper_add_separator(wasgo_id, wasgo_buffer_label, wasgo_size_label);
}
void PopupMenu::add_shortcut(ShortCut p_shortcut, int p_id, bool p_global){
	_wasgo_PopupMenu_wrapper_add_shortcut(wasgo_id, p_shortcut._get_wasgo_id(), p_id, -69, p_global);
}
void PopupMenu::add_submenu_item(String p_label, String p_submenu, int p_id){

    Variant wasgo_var_label = p_label;
    int wasgo_size_label = 10 + String(p_label).size();
    uint8_t wasgo_buffer_label[wasgo_size_label];
    encode_variant(wasgo_var_label, wasgo_buffer_label, wasgo_size_label);
    

    Variant wasgo_var_submenu = p_submenu;
    int wasgo_size_submenu = 10 + String(p_submenu).size();
    uint8_t wasgo_buffer_submenu[wasgo_size_submenu];
    encode_variant(wasgo_var_submenu, wasgo_buffer_submenu, wasgo_size_submenu);
    
	_wasgo_PopupMenu_wrapper_add_submenu_item(wasgo_id, wasgo_buffer_label, wasgo_size_label, -69, wasgo_buffer_submenu, wasgo_size_submenu, p_id);
}
void PopupMenu::clear(){
	_wasgo_PopupMenu_wrapper_clear(wasgo_id);
}
bool PopupMenu::get_allow_search(){
	return (bool) _wasgo_PopupMenu_wrapper_get_allow_search(wasgo_id);
}
int PopupMenu::get_current_index(){
	return (int) _wasgo_PopupMenu_wrapper_get_current_index(wasgo_id);
}
int PopupMenu::get_item_accelerator(int p_idx){
	return (int) _wasgo_PopupMenu_wrapper_get_item_accelerator(wasgo_id, p_idx);
}
int PopupMenu::get_item_count(){
	return (int) _wasgo_PopupMenu_wrapper_get_item_count(wasgo_id);
}
Texture PopupMenu::get_item_icon(int p_idx){
	return Texture(_wasgo_PopupMenu_wrapper_get_item_icon(wasgo_id, p_idx));
}
int PopupMenu::get_item_id(int p_idx){
	return (int) _wasgo_PopupMenu_wrapper_get_item_id(wasgo_id, p_idx);
}
int PopupMenu::get_item_index(int p_id){
	return (int) _wasgo_PopupMenu_wrapper_get_item_index(wasgo_id, p_id);
}
Variant PopupMenu::get_item_metadata(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PopupMenu_wrapper_get_item_metadata(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
ShortCut PopupMenu::get_item_shortcut(int p_idx){
	return ShortCut(_wasgo_PopupMenu_wrapper_get_item_shortcut(wasgo_id, p_idx));
}
String PopupMenu::get_item_submenu(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PopupMenu_wrapper_get_item_submenu(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String PopupMenu::get_item_text(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PopupMenu_wrapper_get_item_text(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
String PopupMenu::get_item_tooltip(int p_idx){

    Variant wasgo_ret;
    int wasgo_ret_buffer_size = 256;
    uint8_t wasgo_ret_buffer[256];
    _wasgo_PopupMenu_wrapper_get_item_tooltip(wasgo_id, wasgo_ret_buffer, wasgo_ret_buffer_size, -69, p_idx);
    decode_variant(wasgo_ret, wasgo_ret_buffer, wasgo_ret_buffer_size);
    return wasgo_ret;
    
}
float PopupMenu::get_submenu_popup_delay(){
	return (float) _wasgo_PopupMenu_wrapper_get_submenu_popup_delay(wasgo_id);
}
bool PopupMenu::is_hide_on_checkable_item_selection(){
	return (bool) _wasgo_PopupMenu_wrapper_is_hide_on_checkable_item_selection(wasgo_id);
}
bool PopupMenu::is_hide_on_item_selection(){
	return (bool) _wasgo_PopupMenu_wrapper_is_hide_on_item_selection(wasgo_id);
}
bool PopupMenu::is_hide_on_state_item_selection(){
	return (bool) _wasgo_PopupMenu_wrapper_is_hide_on_state_item_selection(wasgo_id);
}
bool PopupMenu::is_hide_on_window_lose_focus(){
	return (bool) _wasgo_PopupMenu_wrapper_is_hide_on_window_lose_focus(wasgo_id);
}
bool PopupMenu::is_item_checkable(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_checkable(wasgo_id, p_idx);
}
bool PopupMenu::is_item_checked(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_checked(wasgo_id, p_idx);
}
bool PopupMenu::is_item_disabled(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_disabled(wasgo_id, p_idx);
}
bool PopupMenu::is_item_radio_checkable(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_radio_checkable(wasgo_id, p_idx);
}
bool PopupMenu::is_item_separator(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_separator(wasgo_id, p_idx);
}
bool PopupMenu::is_item_shortcut_disabled(int p_idx){
	return (bool) _wasgo_PopupMenu_wrapper_is_item_shortcut_disabled(wasgo_id, p_idx);
}
void PopupMenu::remove_item(int p_idx){
	_wasgo_PopupMenu_wrapper_remove_item(wasgo_id, p_idx);
}
void PopupMenu::set_allow_search(bool p_allow){
	_wasgo_PopupMenu_wrapper_set_allow_search(wasgo_id, p_allow);
}
void PopupMenu::set_hide_on_checkable_item_selection(bool p_enable){
	_wasgo_PopupMenu_wrapper_set_hide_on_checkable_item_selection(wasgo_id, p_enable);
}
void PopupMenu::set_hide_on_item_selection(bool p_enable){
	_wasgo_PopupMenu_wrapper_set_hide_on_item_selection(wasgo_id, p_enable);
}
void PopupMenu::set_hide_on_state_item_selection(bool p_enable){
	_wasgo_PopupMenu_wrapper_set_hide_on_state_item_selection(wasgo_id, p_enable);
}
void PopupMenu::set_hide_on_window_lose_focus(bool p_enable){
	_wasgo_PopupMenu_wrapper_set_hide_on_window_lose_focus(wasgo_id, p_enable);
}
void PopupMenu::set_item_accelerator(int p_idx, int p_accel){
	_wasgo_PopupMenu_wrapper_set_item_accelerator(wasgo_id, p_idx, p_accel);
}
void PopupMenu::set_item_as_checkable(int p_idx, bool p_enable){
	_wasgo_PopupMenu_wrapper_set_item_as_checkable(wasgo_id, p_idx, p_enable);
}
void PopupMenu::set_item_as_radio_checkable(int p_idx, bool p_enable){
	_wasgo_PopupMenu_wrapper_set_item_as_radio_checkable(wasgo_id, p_idx, p_enable);
}
void PopupMenu::set_item_as_separator(int p_idx, bool p_enable){
	_wasgo_PopupMenu_wrapper_set_item_as_separator(wasgo_id, p_idx, p_enable);
}
void PopupMenu::set_item_checked(int p_idx, bool p_checked){
	_wasgo_PopupMenu_wrapper_set_item_checked(wasgo_id, p_idx, p_checked);
}
void PopupMenu::set_item_disabled(int p_idx, bool p_disabled){
	_wasgo_PopupMenu_wrapper_set_item_disabled(wasgo_id, p_idx, p_disabled);
}
void PopupMenu::set_item_icon(int p_idx, Texture p_icon){
	_wasgo_PopupMenu_wrapper_set_item_icon(wasgo_id, p_idx, p_icon._get_wasgo_id());
}
void PopupMenu::set_item_id(int p_idx, int p_id){
	_wasgo_PopupMenu_wrapper_set_item_id(wasgo_id, p_idx, p_id);
}
void PopupMenu::set_item_metadata(int p_idx, Variant p_metadata){

    Variant wasgo_var_metadata = p_metadata;
    uint8_t wasgo_buffer_metadata[256];
    int wasgo_size_metadata = 256;
    encode_variant(wasgo_var_metadata, wasgo_buffer_metadata, wasgo_size_metadata);
    
	_wasgo_PopupMenu_wrapper_set_item_metadata(wasgo_id, p_idx, wasgo_buffer_metadata, wasgo_size_metadata, wasgo_size_metadata);
}
void PopupMenu::set_item_multistate(int p_idx, int p_state){
	_wasgo_PopupMenu_wrapper_set_item_multistate(wasgo_id, p_idx, p_state);
}
void PopupMenu::set_item_shortcut(int p_idx, ShortCut p_shortcut, bool p_global){
	_wasgo_PopupMenu_wrapper_set_item_shortcut(wasgo_id, p_idx, p_shortcut._get_wasgo_id(), -69, p_global);
}
void PopupMenu::set_item_shortcut_disabled(int p_idx, bool p_disabled){
	_wasgo_PopupMenu_wrapper_set_item_shortcut_disabled(wasgo_id, p_idx, p_disabled);
}
void PopupMenu::set_item_submenu(int p_idx, String p_submenu){

    Variant wasgo_var_submenu = p_submenu;
    int wasgo_size_submenu = 10 + String(p_submenu).size();
    uint8_t wasgo_buffer_submenu[wasgo_size_submenu];
    encode_variant(wasgo_var_submenu, wasgo_buffer_submenu, wasgo_size_submenu);
    
	_wasgo_PopupMenu_wrapper_set_item_submenu(wasgo_id, p_idx, wasgo_buffer_submenu, wasgo_size_submenu, wasgo_size_submenu);
}
void PopupMenu::set_item_text(int p_idx, String p_text){

    Variant wasgo_var_text = p_text;
    int wasgo_size_text = 10 + String(p_text).size();
    uint8_t wasgo_buffer_text[wasgo_size_text];
    encode_variant(wasgo_var_text, wasgo_buffer_text, wasgo_size_text);
    
	_wasgo_PopupMenu_wrapper_set_item_text(wasgo_id, p_idx, wasgo_buffer_text, wasgo_size_text, wasgo_size_text);
}
void PopupMenu::set_item_tooltip(int p_idx, String p_tooltip){

    Variant wasgo_var_tooltip = p_tooltip;
    int wasgo_size_tooltip = 10 + String(p_tooltip).size();
    uint8_t wasgo_buffer_tooltip[wasgo_size_tooltip];
    encode_variant(wasgo_var_tooltip, wasgo_buffer_tooltip, wasgo_size_tooltip);
    
	_wasgo_PopupMenu_wrapper_set_item_tooltip(wasgo_id, p_idx, wasgo_buffer_tooltip, wasgo_size_tooltip, wasgo_size_tooltip);
}
void PopupMenu::set_submenu_popup_delay(float p_seconds){
	_wasgo_PopupMenu_wrapper_set_submenu_popup_delay(wasgo_id, p_seconds);
}
void PopupMenu::toggle_item_checked(int p_idx){
	_wasgo_PopupMenu_wrapper_toggle_item_checked(wasgo_id, p_idx);
}
void PopupMenu::toggle_item_multistate(int p_idx){
	_wasgo_PopupMenu_wrapper_toggle_item_multistate(wasgo_id, p_idx);
}

PopupMenu::PopupMenu(WasGoID p_wasgo_id) : Popup(p_wasgo_id){
}
PopupMenu::PopupMenu(Popup other) : Popup(other._get_wasgo_id()){
}
PopupMenu::PopupMenu():Popup(){
}
PopupMenu PopupMenu::new_instance(){
    return PopupMenu(_wasgo_PopupMenu_constructor());
}
WasGoID PopupMenu::_get_wasgo_id(){
    return wasgo_id;
}
PopupMenu::operator bool(){
    return (bool) wasgo_id;
}
