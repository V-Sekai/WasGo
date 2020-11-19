/* THIS FILE IS GENERATED */

#include <stdint.h>

#include "AudioStreamPlayback.h"
#include "String.h"
#include "Node2D.h"
#include "AudioStream.h"
class AudioStreamPlayer2D : public Node2D{
public: AudioStreamPlayer2D();
void  _bus_layout_changed();
void  _bus_layout_changed();
bool  _is_active();
bool  _is_active();
void  _set_playing(bool enable);
int  get_area_mask();
int  get_area_mask();
float  get_attenuation();
float  get_attenuation();
String  get_bus();
String  get_bus();
float  get_max_distance();
float  get_max_distance();
float  get_pitch_scale();
float  get_pitch_scale();
float  get_playback_position();
float  get_playback_position();
AudioStream  get_stream();
AudioStream  get_stream();
bool  get_stream_paused();
bool  get_stream_paused();
AudioStreamPlayback  get_stream_playback();
AudioStreamPlayback  get_stream_playback();
float  get_volume_db();
float  get_volume_db();
bool  is_autoplay_enabled();
bool  is_autoplay_enabled();
bool  is_playing();
bool  is_playing();
void  play(float from_position = 0);
void  seek(float to_position);
void  set_area_mask(int mask);
void  set_attenuation(float curve);
void  set_autoplay(bool enable);
void  set_bus(String bus);
void  set_max_distance(float pixels);
void  set_pitch_scale(float pitch_scale);
void  set_stream(AudioStream stream);
void  set_stream_paused(bool pause);
void  set_volume_db(float volume_db);
void  stop();
void  stop();
};