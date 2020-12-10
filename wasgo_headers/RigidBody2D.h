/* THIS FILE IS GENERATED */
#ifndef RIGIDBODY2D_H
#define RIGIDBODY2D_H

#include "wasgo\wasgoid.h"

#include "Physics2DTestMotionResult.h"
#include "PhysicsBody2D.h"
#include "Variant.h"
#include "PhysicsMaterial.h"
#include "Vector2.h"
class RigidBody2D : public PhysicsBody2D{
public:
enum CCDMode{
CCD_MODE_DISABLED,
CCD_MODE_CAST_RAY,
CCD_MODE_CAST_SHAPE
};
enum Mode{
MODE_RIGID,
MODE_STATIC,
MODE_CHARACTER,
MODE_KINEMATIC
};
void add_central_force(Vector2 p_force);
void add_force(Vector2 p_offset, Vector2 p_force);
void add_torque(float p_torque);
void apply_central_impulse(Vector2 p_impulse);
void apply_impulse(Vector2 p_offset, Vector2 p_impulse);
void apply_torque_impulse(float p_torque);
float get_angular_damp();
float get_angular_velocity();
Vector2 get_applied_force();
float get_applied_torque();
float get_bounce();
Array get_colliding_bodies();
RigidBody2D::CCDMode get_continuous_collision_detection_mode();
float get_friction();
float get_gravity_scale();
float get_inertia();
float get_linear_damp();
Vector2 get_linear_velocity();
float get_mass();
int get_max_contacts_reported();
RigidBody2D::Mode get_mode();
PhysicsMaterial get_physics_material_override();
float get_weight();
bool is_able_to_sleep();
bool is_contact_monitor_enabled();
bool is_sleeping();
bool is_using_custom_integrator();
void set_angular_damp(float p_angular_damp);
void set_angular_velocity(float p_angular_velocity);
void set_applied_force(Vector2 p_force);
void set_applied_torque(float p_torque);
void set_axis_velocity(Vector2 p_axis_velocity);
void set_bounce(float p_bounce);
void set_can_sleep(bool p_able_to_sleep);
void set_contact_monitor(bool p_enabled);
void set_continuous_collision_detection_mode(RigidBody2D::CCDMode p_mode);
void set_friction(float p_friction);
void set_gravity_scale(float p_gravity_scale);
void set_inertia(float p_inertia);
void set_linear_damp(float p_linear_damp);
void set_linear_velocity(Vector2 p_linear_velocity);
void set_mass(float p_mass);
void set_max_contacts_reported(int p_amount);
void set_mode(RigidBody2D::Mode p_mode);
void set_physics_material_override(PhysicsMaterial p_physics_material_override);
void set_sleeping(bool p_sleeping);
void set_use_custom_integrator(bool p_enable);
void set_weight(float p_weight);
bool test_motion(Vector2 p_motion, bool p_infinite_inertia = (bool) true, float p_margin = (float) 0.08, Physics2DTestMotionResult p_result = Physics2DTestMotionResult());

protected:
public:
explicit RigidBody2D(WasGoID p_wasgo_id);
explicit RigidBody2D(PhysicsBody2D other);
RigidBody2D();
RigidBody2D new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
void _wasgo_RigidBody2D_wrapper_add_central_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_add_force(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_add_torque(WasGoID wasgo_id, float p_torque);
void _wasgo_RigidBody2D_wrapper_apply_central_impulse(WasGoID wasgo_id, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_apply_impulse(WasGoID wasgo_id, const uint8_t * p_offset, int p_offset_wasgo_buffer_size, int wasgo_throwaway, const uint8_t * p_impulse, int p_impulse_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_apply_torque_impulse(WasGoID wasgo_id, float p_torque);
float _wasgo_RigidBody2D_wrapper_get_angular_damp(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_angular_velocity(WasGoID wasgo_id);
void _wasgo_RigidBody2D_wrapper_get_applied_force(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_RigidBody2D_wrapper_get_applied_torque(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_bounce(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody2D_wrapper_get_colliding_bodies(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody2D_wrapper_get_continuous_collision_detection_mode(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_friction(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_gravity_scale(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_inertia(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_linear_damp(WasGoID wasgo_id);
void _wasgo_RigidBody2D_wrapper_get_linear_velocity(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size);
float _wasgo_RigidBody2D_wrapper_get_mass(WasGoID wasgo_id);
int _wasgo_RigidBody2D_wrapper_get_max_contacts_reported(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody2D_wrapper_get_mode(WasGoID wasgo_id);
WasGoID _wasgo_RigidBody2D_wrapper_get_physics_material_override(WasGoID wasgo_id);
float _wasgo_RigidBody2D_wrapper_get_weight(WasGoID wasgo_id);
int _wasgo_RigidBody2D_wrapper_is_able_to_sleep(WasGoID wasgo_id);
int _wasgo_RigidBody2D_wrapper_is_contact_monitor_enabled(WasGoID wasgo_id);
int _wasgo_RigidBody2D_wrapper_is_sleeping(WasGoID wasgo_id);
int _wasgo_RigidBody2D_wrapper_is_using_custom_integrator(WasGoID wasgo_id);
void _wasgo_RigidBody2D_wrapper_set_angular_damp(WasGoID wasgo_id, float p_angular_damp);
void _wasgo_RigidBody2D_wrapper_set_angular_velocity(WasGoID wasgo_id, float p_angular_velocity);
void _wasgo_RigidBody2D_wrapper_set_applied_force(WasGoID wasgo_id, const uint8_t * p_force, int p_force_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_set_applied_torque(WasGoID wasgo_id, float p_torque);
void _wasgo_RigidBody2D_wrapper_set_axis_velocity(WasGoID wasgo_id, const uint8_t * p_axis_velocity, int p_axis_velocity_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_set_bounce(WasGoID wasgo_id, float p_bounce);
void _wasgo_RigidBody2D_wrapper_set_can_sleep(WasGoID wasgo_id, bool p_able_to_sleep);
void _wasgo_RigidBody2D_wrapper_set_contact_monitor(WasGoID wasgo_id, bool p_enabled);
void _wasgo_RigidBody2D_wrapper_set_continuous_collision_detection_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_RigidBody2D_wrapper_set_friction(WasGoID wasgo_id, float p_friction);
void _wasgo_RigidBody2D_wrapper_set_gravity_scale(WasGoID wasgo_id, float p_gravity_scale);
void _wasgo_RigidBody2D_wrapper_set_inertia(WasGoID wasgo_id, float p_inertia);
void _wasgo_RigidBody2D_wrapper_set_linear_damp(WasGoID wasgo_id, float p_linear_damp);
void _wasgo_RigidBody2D_wrapper_set_linear_velocity(WasGoID wasgo_id, const uint8_t * p_linear_velocity, int p_linear_velocity_wasgo_buffer_size);
void _wasgo_RigidBody2D_wrapper_set_mass(WasGoID wasgo_id, float p_mass);
void _wasgo_RigidBody2D_wrapper_set_max_contacts_reported(WasGoID wasgo_id, int p_amount);
void _wasgo_RigidBody2D_wrapper_set_mode(WasGoID wasgo_id, WasGoID p_mode);
void _wasgo_RigidBody2D_wrapper_set_physics_material_override(WasGoID wasgo_id, WasGoID p_physics_material_override);
void _wasgo_RigidBody2D_wrapper_set_sleeping(WasGoID wasgo_id, bool p_sleeping);
void _wasgo_RigidBody2D_wrapper_set_use_custom_integrator(WasGoID wasgo_id, bool p_enable);
void _wasgo_RigidBody2D_wrapper_set_weight(WasGoID wasgo_id, float p_weight);
int _wasgo_RigidBody2D_wrapper_test_motion(WasGoID wasgo_id, const uint8_t * p_motion, int p_motion_wasgo_buffer_size, int wasgo_throwaway, bool p_infinite_inertia, float p_margin, WasGoID p_result);

    //constructor wrappers
    WasGoID _wasgo_RigidBody2D_constructor();
            
}
#endif