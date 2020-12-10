/* THIS FILE IS GENERATED */
#ifndef STREAMPEER_H
#define STREAMPEER_H

#include "wasgo\wasgoid.h"

#include "Ustring.h"
#include "Reference.h"
#include "error_list.h"
#include "Variant.h"
class StreamPeer : public Reference{
public:
int get_16();
int get_32();
int get_64();
int get_8();
int get_available_bytes();
Array get_data(int p_bytes);
float get_double();
float get_float();
Array get_partial_data(int p_bytes);
String get_string(int p_bytes = (int) -1);
int get_u16();
int get_u32();
int get_u64();
int get_u8();
String get_utf8_string(int p_bytes = (int) -1);
Variant get_var(bool p_allow_objects = (bool) false);
bool is_big_endian_enabled();
void put_16(int p_value);
void put_32(int p_value);
void put_64(int p_value);
void put_8(int p_value);
Error put_data(PoolByteArray p_data);
void put_double(float p_value);
void put_float(float p_value);
Array put_partial_data(PoolByteArray p_data);
void put_string(String p_value);
void put_u16(int p_value);
void put_u32(int p_value);
void put_u64(int p_value);
void put_u8(int p_value);
void put_utf8_string(String p_value);
void put_var(Variant p_value, bool p_full_objects = (bool) false);
void set_big_endian(bool p_enable);

protected:
public:
explicit StreamPeer(WasGoID p_wasgo_id);
explicit StreamPeer(Reference other);
StreamPeer();
StreamPeer new_instance();
WasGoID _get_wasgo_id();
operator bool();
            
};


//Wrapper Functions
extern "C"{
int _wasgo_StreamPeer_wrapper_get_16(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_32(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_64(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_8(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_available_bytes(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeer_wrapper_get_data(WasGoID wasgo_id, int p_bytes);
float _wasgo_StreamPeer_wrapper_get_double(WasGoID wasgo_id);
float _wasgo_StreamPeer_wrapper_get_float(WasGoID wasgo_id);
WasGoID _wasgo_StreamPeer_wrapper_get_partial_data(WasGoID wasgo_id, int p_bytes);
void _wasgo_StreamPeer_wrapper_get_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_bytes);
int _wasgo_StreamPeer_wrapper_get_u16(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u32(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u64(WasGoID wasgo_id);
int _wasgo_StreamPeer_wrapper_get_u8(WasGoID wasgo_id);
void _wasgo_StreamPeer_wrapper_get_utf8_string(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, int p_bytes);
void _wasgo_StreamPeer_wrapper_get_var(WasGoID wasgo_id, uint8_t * wasgo_ret, int wasgo_ret_size, int wasgo_throwaway, bool p_allow_objects);
int _wasgo_StreamPeer_wrapper_is_big_endian_enabled(WasGoID wasgo_id);
void _wasgo_StreamPeer_wrapper_put_16(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_32(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_64(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_8(WasGoID wasgo_id, int p_value);
WasGoID _wasgo_StreamPeer_wrapper_put_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_StreamPeer_wrapper_put_double(WasGoID wasgo_id, float p_value);
void _wasgo_StreamPeer_wrapper_put_float(WasGoID wasgo_id, float p_value);
WasGoID _wasgo_StreamPeer_wrapper_put_partial_data(WasGoID wasgo_id, WasGoID p_data);
void _wasgo_StreamPeer_wrapper_put_string(WasGoID wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_StreamPeer_wrapper_put_u16(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u32(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u64(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_u8(WasGoID wasgo_id, int p_value);
void _wasgo_StreamPeer_wrapper_put_utf8_string(WasGoID wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size);
void _wasgo_StreamPeer_wrapper_put_var(WasGoID wasgo_id, const uint8_t * p_value, int p_value_wasgo_buffer_size, int wasgo_throwaway, bool p_full_objects);
void _wasgo_StreamPeer_wrapper_set_big_endian(WasGoID wasgo_id, bool p_enable);

    //constructor wrappers
    WasGoID _wasgo_StreamPeer_constructor();
            
}
#endif