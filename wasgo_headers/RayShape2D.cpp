/* THIS FILE IS GENERATED */
#include "RayShape2D.h"
float RayShape2D::get_length(){
	return (float) _wasgo_RayShape2D_wrapper_get_length(wasgo_id));
}
bool RayShape2D::get_slips_on_slope(){
	return (bool) _wasgo_RayShape2D_wrapper_get_slips_on_slope(wasgo_id));
}
void RayShape2D::set_length(float p_length){
	_wasgo_RayShape2D_wrapper_set_length(wasgo_id, length);
}
void RayShape2D::set_slips_on_slope(bool p_active){
	_wasgo_RayShape2D_wrapper_set_slips_on_slope(wasgo_id, active);
}

RayShape2D::RayShape2D(WasGoId p_wasgo_id) : Variant(p_wasgo_id){
}
RayShape2D::~RayShape2D(){
}