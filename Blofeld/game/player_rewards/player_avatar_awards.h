#pragma once

namespace blofeld
{

	extern const char* global_avatar_award_enum_strings[];
	extern s_string_list_definition global_avatar_award_enum;

	constexpr unsigned long AVATAR_AWARDS_TAG = 'avat';

	extern s_tag_group avatar_awards_group;

	extern s_tag_block_definition avatar_awards_block_block;
	extern s_tag_struct single_avatar_award_definition_block_block_struct;
	extern s_tag_block_definition single_avatar_award_definition_block_block;

	extern s_tag_struct avatar_awards_struct_definition_struct_definition; // tag group

} // namespace blofeld

