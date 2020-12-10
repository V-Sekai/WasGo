/* THIS FILE IS GENERATED */
#ifndef CAMERA2D_H
#define CAMERA2D_H

#include "wasgo\wasgoid.h"

#include "Vector2.h"
#include "math_defs.h"
class Node;
#include "Node2D.h"
class Camera2D : public Node2D{
public:
enum AnchorMode{
ANCHOR_MODE_FIXED_TOP_LEFT,
ANCHOR_MODE_DRAG_CENTER
};
enum Camera2DProcessMode{
CAMERA2D_PROCESS_PHYSICS,
CAMERA2D_PROCESS_IDLE
};
void align();
void clear_current();
void force_update_scroll();
Camera2D::AnchorMode get_anchor_mode();
Vector2 get_camera_position();
Vector2 get_camera_screen_center();
Node get_custom_viewport();
float get_drag_margin(Margin p_margin);
float get_follow_smoothing();
float get_h_offset();
int get_limit(Margin p_margin);
Vector2 get_offset();
Camera2D::Camera2DProcessMode get_process_mode();
float get_v_offset();
Vector2 get_zoom();
bool is_current();
bool is_follow_smoothing_enabled();
bool is_h_drag_enabled();
bool is_limit_drawing_enabled();
bool is_limit_smoothing_enabled();
bool is_margin_drawing_enabled();
bool is_rotating();
bool is_screen_drawing_enabled();
bool is_v_drag_enabled();
void make_current();
void reset_smoothing();
void set_anchor_mode(Camera2D::AnchorMode p_anchor_mode);
void set_custom_viewport(Node p_viewport);
void set_drag_margin(Margin p_margin, float p_drag_margin);
void set_enable_follow_smoothing(bool p_follow_smoothing);
void set_follow_smoothing(float p_follow_smoothing);
void set_h_drag_enabled(bool p_enabled);
void set_h_offset(float p_ofs);
void set_limit(Margin p_margin, int p_limit);
void set_limit_drawing_enabled(bool p_limit_drawing_enabled);
void set_limit_smoothing_enabled(bool p_limit_smoothing_enabled);
void set_margin_drawing_enabled(bool p_margin_drawing_enabled);
void set_offset(Vector2 p_offset);
void set_process_mode(Camera2D::Camera2DProcessMode p_mode);
void set_rotating(bool p_rotating);
void set_screen_drawing_enabled(bool p_screen_drawing_enabled);
void set_v_drag_enabled(bool p_enabled);
void set_v_offset(float p_ofs);
void set_zoom(Vector2 p_zoom);

protected:
public:
explicit Camera2D(WasGoID p_wasgo_id);
explicit Camera2D(Node2D other);
Camera2D();
Camera2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_Camera2D_wrapper_align(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_clear_current(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_force_update_scroll(WasGoID wasgo_id);
WasGoID _wasgo_Camera2D_wrapper_get_anchor_mode(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_get_camera_position(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
void _wasgo_Camera2D_wrapper_get_camera_screen_center(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Camera2D_wrapper_get_custom_viewport(WasGoID wasgo_id);
float _wasgo_Camera2D_wrapper_get_drag_margin(WasGoID wasgo_id, WasGoID p_margin);
float _wasgo_Camera2D_wrapper_get_follow_smoothing(WasGoID wasgo_id);
float _wasgo_Camera2D_wrapper_get_h_offset(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_get_limit(WasGoID wasgo_id, WasGoID p_margin);
void _wasgo_Camera2D_wrapper_get_offset(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
WasGoID _wasgo_Camera2D_wrapper_get_process_mode(WasGoID wasgo_id);
float _wasgo_Camera2D_wrapper_get_v_offset(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_get_zoom(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
int _wasgo_Camera2D_wrapper_is_current(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_follow_smoothing_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_h_drag_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_limit_drawing_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_limit_smoothing_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_margin_drawing_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_rotating(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_screen_drawing_enabled(WasGoID wasgo_id);
int _wasgo_Camera2D_wrapper_is_v_drag_enabled(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_make_current(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_reset_smoothing(WasGoID wasgo_id);
void _wasgo_Camera2D_wrapper_set_anchor_mode(WasGoID wasgo_id, WasGoID p_anchor_mode);
void _wasgo_Camera2D_wrapper_set_custom_viewport(WasGoID wasgo_id, WasGoID p_viewport);
void _wasgo_Camera2D_wrapper_set_drag_margin(WasGoID wasgo_id, WasGoID p_margin, float p_drag_margin);
void _wasgo_Camera2D_wrapper_set_enable_follow_smoothing(WasGoID wasgo_id, bool p_follow_smoothing);
void _wasgo_Camera2D_wrapper_set_follow_smoothing(WasGoID wasgo_id, float p_follow_smoothing);
void _wasgo_Camera2D_wrapper_set_h_drag_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Camera2D_wrapper_set_h_offset(WasGoID wasgo_id, float p_ofs);
void _wasgo_Camera2D_wrapper_set_limit(WasGoID wasgo_id, WasGoID p_margin, int p_limit);
void _wasgo_Camera2D_wrapper_set_limit_drawing_enabled(WasGoID wasgo_id, bool p_limit_drawing_enabled);
void _wasgo_Camera2D_wrapper_set_limit_smoothing_enabled(WasGoID wasgo_id, bool p_limit_smoothing_enabled);
void _wasgo_Camera2D_wrapper_set_margin_drawing_enabled(WasGoID wasgo_id, bool p_margin_drawing_enabled);
void _wasgo_Camera2D_wrapper_set_offset(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size);
void _wasgo_Camera2D_wrapper_set_process_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_Camera2D_wrapper_set_rotating(WasGoID wasgo_id, bool p_rotating);
void _wasgo_Camera2D_wrapper_set_screen_drawing_enabled(WasGoID wasgo_id, bool p_screen_drawing_enabled);
void _wasgo_Camera2D_wrapper_set_v_drag_enabled(WasGoID wasgo_id, bool p_enabled);
void _wasgo_Camera2D_wrapper_set_v_offset(WasGoID wasgo_id, float p_ofs);
void _wasgo_Camera2D_wrapper_set_zoom(WasGoID wasgo_id, const uint8_t * p_zoom, int p_zoom_wasgo_buffer_size);

    //constructor wrappers
    WasGoID _wasgo_Camera2D_constructor();
            
}
#endif