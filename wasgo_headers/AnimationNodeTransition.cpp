/* THIS FILE IS GENERATED */
#include "AnimationNodeTransition.h"
float AnimationNodeTransition::get_cross_fade_time(){
	return (float) _wasgo_AnimationNodeTransition_wrapper_get_cross_fade_time(wasgo_id));
}
int AnimationNodeTransition::get_enabled_inputs(){
	return (int) _wasgo_AnimationNodeTransition_wrapper_get_enabled_inputs(wasgo_id));
}
String AnimationNodeTransition::get_input_caption(int p_input){
	return String::from_wasgo_id(_wasgo_AnimationNodeTransition_wrapper_get_input_caption(wasgo_id, input));
}
bool AnimationNodeTransition::is_input_set_as_auto_advance(int p_input){
	return (bool) _wasgo_AnimationNodeTransition_wrapper_is_input_set_as_auto_advance(wasgo_id, input));
}
void AnimationNodeTransition::set_cross_fade_time(float p_time){
	_wasgo_AnimationNodeTransition_wrapper_set_cross_fade_time(wasgo_id, time);
}
void AnimationNodeTransition::set_enabled_inputs(int p_amount){
	_wasgo_AnimationNodeTransition_wrapper_set_enabled_inputs(wasgo_id, amount);
}
void AnimationNodeTransition::set_input_as_auto_advance(int p_input, bool p_enable){
	_wasgo_AnimationNodeTransition_wrapper_set_input_as_auto_advance(wasgo_id, input, enable);
}
void AnimationNodeTransition::set_input_caption(int p_input, String p_caption){
	_wasgo_AnimationNodeTransition_wrapper_set_input_caption(wasgo_id, input, ((Variant) caption).get_wasgo_id());
}

AnimationNodeTransition::AnimationNodeTransition(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AnimationNodeTransition::~AnimationNodeTransition(){
}