#pragma once

namespace blofeld
{

	extern const char* animated_camera_shake_playback_type_enum_strings[];
	extern s_string_list_definition animated_camera_shake_playback_type_enum;
	extern const char* animated_camera_shake_weight_type_enum_strings[];
	extern s_string_list_definition animated_camera_shake_weight_type_enum;

	constexpr unsigned long CAMERA_SHAKE_TAG = 'csdt';

	extern s_tag_group camera_shake_group;

	extern s_tag_block_definition camera_shake_block_block;
	extern s_tag_struct global_camera_impulse_block_block_struct;
	extern s_tag_block_definition global_camera_impulse_block_block;

	extern s_tag_struct camera_shake_struct_definition_struct_definition; // tag group
	extern s_tag_struct camera_impulse_struct_struct_definition;
	extern s_tag_struct camera_shake_struct_struct_definition;

} // namespace blofeld

