#pragma once

namespace blofeld
{

extern s_tag_struct global_sound_reverb_block_struct_definition;
extern s_tag_struct global_sound_lowpass_block_struct_definition;
extern s_tag_struct global_sound_look_up_table_distortion_block_struct_definition;
extern s_tag_struct global_sound_equalizer_block_struct_definition;

extern s_tag_struct sound_equalizer_band_settings_block_struct_struct_definition;
extern s_tag_block_definition sound_equalizer_band_settings_block;

constexpr unsigned long SOUND_RADIO_SETTINGS_TAG = 'srad';

extern s_tag_block_definition sound_radio_settings_block;
extern s_tag_group sound_radio_settings_group;
} // namespace blofeld
