/* THIS FILE IS GENERATED */
#include "AudioEffectReverb.h"
float AudioEffectReverb::get_damping(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_damping(wasgo_id));
}
float AudioEffectReverb::get_dry(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_dry(wasgo_id));
}
float AudioEffectReverb::get_hpf(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_hpf(wasgo_id));
}
float AudioEffectReverb::get_predelay_feedback(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_predelay_feedback(wasgo_id));
}
float AudioEffectReverb::get_predelay_msec(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_predelay_msec(wasgo_id));
}
float AudioEffectReverb::get_room_size(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_room_size(wasgo_id));
}
float AudioEffectReverb::get_spread(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_spread(wasgo_id));
}
float AudioEffectReverb::get_wet(){
	return (float) _wasgo_AudioEffectReverb_wrapper_get_wet(wasgo_id));
}
void AudioEffectReverb::set_damping(float p_amount){
	_wasgo_AudioEffectReverb_wrapper_set_damping(wasgo_id, amount);
}
void AudioEffectReverb::set_dry(float p_amount){
	_wasgo_AudioEffectReverb_wrapper_set_dry(wasgo_id, amount);
}
void AudioEffectReverb::set_hpf(float p_amount){
	_wasgo_AudioEffectReverb_wrapper_set_hpf(wasgo_id, amount);
}
void AudioEffectReverb::set_predelay_feedback(float p_feedback){
	_wasgo_AudioEffectReverb_wrapper_set_predelay_feedback(wasgo_id, feedback);
}
void AudioEffectReverb::set_predelay_msec(float p_msec){
	_wasgo_AudioEffectReverb_wrapper_set_predelay_msec(wasgo_id, msec);
}
void AudioEffectReverb::set_room_size(float p_size){
	_wasgo_AudioEffectReverb_wrapper_set_room_size(wasgo_id, size);
}
void AudioEffectReverb::set_spread(float p_amount){
	_wasgo_AudioEffectReverb_wrapper_set_spread(wasgo_id, amount);
}
void AudioEffectReverb::set_wet(float p_amount){
	_wasgo_AudioEffectReverb_wrapper_set_wet(wasgo_id, amount);
}

AudioEffectReverb::AudioEffectReverb(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
AudioEffectReverb::~AudioEffectReverb(){
}