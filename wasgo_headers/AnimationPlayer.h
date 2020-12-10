/* THIS FILE IS GENERATED */
#ifndef ANIMATIONPLAYER_H
#define ANIMATIONPLAYER_H

#include "wasgo\wasgoid.h"

#include "NodePath.h"
#include "error_list.h"
#include "Animation.h"
#include "Variant.h"
#include "Ustring.h"
#include "Node.h"
class AnimationPlayer : public Node{
public:
enum AnimationMethodCallMode{
ANIMATION_METHOD_CALL_DEFERRED,
ANIMATION_METHOD_CALL_IMMEDIATE
};
enum AnimationProcessMode{
ANIMATION_PROCESS_PHYSICS,
ANIMATION_PROCESS_IDLE,
ANIMATION_PROCESS_MANUAL
};
Error add_animation(String p_name, Animation p_animation);
void advance(float p_delta);
String animation_get_next(String p_anim_from);
void animation_set_next(String p_anim_from, String p_anim_to);
void clear_caches();
void clear_queue();
String find_animation(Animation p_animation);
Animation get_animation(String p_name);
PoolStringArray get_animation_list();
AnimationPlayer::AnimationProcessMode get_animation_process_mode();
String get_assigned_animation();
String get_autoplay();
float get_blend_time(String p_anim_from, String p_anim_to);
String get_current_animation();
float get_current_animation_length();
float get_current_animation_position();
float get_default_blend_time();
AnimationPlayer::AnimationMethodCallMode get_method_call_mode();
float get_playing_speed();
PoolStringArray get_queue();
NodePath get_root();
float get_speed_scale();
bool has_animation(String p_name);
bool is_active();
bool is_playing();
void play(String p_name = String(), float p_custom_blend = (float) -1, float p_custom_speed = (float) 1, bool p_from_end = (bool) false);
void play_backwards(String p_name = String(), float p_custom_blend = (float) -1);
void queue(String p_name);
void remove_animation(String p_name);
void rename_animation(String p_name, String p_newname);
void seek(float p_seconds, bool p_update = (bool) false);
void set_active(bool p_active);
void set_animation_process_mode(AnimationPlayer::AnimationProcessMode p_mode);
void set_assigned_animation(String p_anim);
void set_autoplay(String p_name);
void set_blend_time(String p_anim_from, String p_anim_to, float p_sec);
void set_current_animation(String p_anim);
void set_default_blend_time(float p_sec);
void set_method_call_mode(AnimationPlayer::AnimationMethodCallMode p_mode);
void set_root(NodePath p_path);
void set_speed_scale(float p_speed);
void stop(bool p_reset = (bool) true);

protected:
public:
explicit AnimationPlayer(WasGoID p_wasgo_id);
explicit AnimationPlayer(Node other);
AnimationPlayer();
AnimationPlayer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
WasGoID _wasgo_AnimationPlayer_wrapper_add_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int wasgo_throwaway, WasGoID p_animation);
void _wasgo_AnimationPlayer_wrapper_advance(WasGoID wasgo_id, float p_delta);
void _wasgo_AnimationPlayer_wrapper_animation_get_next(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, const uint8_t * p_anim_from, int p_anim_from_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_animation_set_next(WasGoID wasgo_id, const uint8_t * p_anim_from, int p_anim_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_anim_to, int p_anim_to_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_clear_caches(WasGoID wasgo_id);
void _wasgo_AnimationPlayer_wrapper_clear_queue(WasGoID wasgo_id);
void _wasgo_AnimationPlayer_wrapper_find_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, WasGoID p_animation);
WasGoID _wasgo_AnimationPlayer_wrapper_get_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
WasGoID _wasgo_AnimationPlayer_wrapper_get_animation_list(WasGoID wasgo_id);
WasGoID _wasgo_AnimationPlayer_wrapper_get_animation_process_mode(WasGoID wasgo_id);
void _wasgo_AnimationPlayer_wrapper_get_assigned_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_AnimationPlayer_wrapper_get_autoplay(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AnimationPlayer_wrapper_get_blend_time(WasGoID wasgo_id, const uint8_t * p_anim_from, int p_anim_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_anim_to, int p_anim_to_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_get_current_animation(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AnimationPlayer_wrapper_get_current_animation_length(WasGoID wasgo_id);
float _wasgo_AnimationPlayer_wrapper_get_current_animation_position(WasGoID wasgo_id);
float _wasgo_AnimationPlayer_wrapper_get_default_blend_time(WasGoID wasgo_id);
WasGoID _wasgo_AnimationPlayer_wrapper_get_method_call_mode(WasGoID wasgo_id);
float _wasgo_AnimationPlayer_wrapper_get_playing_speed(WasGoID wasgo_id);
WasGoID _wasgo_AnimationPlayer_wrapper_get_queue(WasGoID wasgo_id);
void _wasgo_AnimationPlayer_wrapper_get_root(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_AnimationPlayer_wrapper_get_speed_scale(WasGoID wasgo_id);
int _wasgo_AnimationPlayer_wrapper_has_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
int _wasgo_AnimationPlayer_wrapper_is_active(WasGoID wasgo_id);
int _wasgo_AnimationPlayer_wrapper_is_playing(WasGoID wasgo_id);
void _wasgo_AnimationPlayer_wrapper_play(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int wasgo_throwaway, float p_custom_blend, float p_custom_speed, bool p_from_end);
void _wasgo_AnimationPlayer_wrapper_play_backwards(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int wasgo_throwaway, float p_custom_blend);
void _wasgo_AnimationPlayer_wrapper_queue(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_remove_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_rename_animation(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_newname, int p_newname_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_seek(WasGoID wasgo_id, float p_seconds, bool p_update);
void _wasgo_AnimationPlayer_wrapper_set_active(WasGoID wasgo_id, bool p_active);
void _wasgo_AnimationPlayer_wrapper_set_animation_process_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationPlayer_wrapper_set_assigned_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_set_autoplay(WasGoID wasgo_id, const uint8_t * p_name, int p_name_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_set_blend_time(WasGoID wasgo_id, const uint8_t * p_anim_from, int p_anim_from_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_anim_to, int p_anim_to_wasgo_buffer_size, float p_sec);
void _wasgo_AnimationPlayer_wrapper_set_current_animation(WasGoID wasgo_id, const uint8_t * p_anim, int p_anim_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_set_default_blend_time(WasGoID wasgo_id, float p_sec);
void _wasgo_AnimationPlayer_wrapper_set_method_call_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_AnimationPlayer_wrapper_set_root(WasGoID wasgo_id, const uint8_t * p_path, int p_path_wasgo_buffer_size);
void _wasgo_AnimationPlayer_wrapper_set_speed_scale(WasGoID wasgo_id, float p_speed);
void _wasgo_AnimationPlayer_wrapper_stop(WasGoID wasgo_id, bool p_reset);

    //constructor wrappers
    WasGoID _wasgo_AnimationPlayer_constructor();
            
}
#endif