#pragma once

namespace blofeld
{

	extern const char* camo_flags_strings[];
	extern s_string_list_definition camo_flags;

	constexpr unsigned long CAMO_TAG = 'cmoe';

	extern s_tag_group camo_group;

	extern s_tag_block_definition camo_block_block;

	extern s_tag_struct camo_struct_definition_struct_definition; // tag group
	extern s_tag_struct camo_scalar_function_struct_struct_definition;

} // namespace blofeld

