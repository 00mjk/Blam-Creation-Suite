#pragma once

namespace blofeld
{

extern s_tag_struct damage_response_definition_struct_definition_struct_definition;
extern s_tag_struct damage_response_directional_flash_struct_struct_definition;
extern s_tag_struct damage_response_motion_sensor_ping_struct_definition;
extern s_tag_struct area_control_scalar_function_struct_struct_definition;
extern s_tag_struct area_control_scalar_object_function_struct_struct_definition;

extern s_tag_struct damage_response_class_block_struct_definition;
extern s_tag_block_definition damage_response_class_block;
extern s_tag_struct damage_response_global_sound_effect_block_struct_struct_definition;
extern s_tag_block_definition damage_response_global_sound_effect_block;
extern s_tag_struct area_control_block_struct_struct_definition;
extern s_tag_block_definition area_control_block;

constexpr unsigned long DAMAGE_RESPONSE_DEFINITION_TAG = 'drdf';

extern s_tag_block_definition damage_response_definition_block;
extern s_tag_group damage_response_definition_group;
} // namespace blofeld
