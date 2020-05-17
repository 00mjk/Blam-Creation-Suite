#pragma once

namespace blofeld
{


	constexpr unsigned long MULTILINGUAL_UNICODE_STRING_LIST_TAG = 'unic';

	extern s_tag_group multilingual_unicode_string_list_group;

	extern s_tag_block_definition multilingual_unicode_string_list_block_block;
	extern s_tag_struct multilingual_unicode_string_reference_block_block_struct;
	extern s_tag_block_definition multilingual_unicode_string_reference_block_block;
	extern s_tag_struct string_substitution_pair_block_block_struct;
	extern s_tag_block_definition string_substitution_pair_block_block;

	extern s_tag_struct multilingual_unicode_string_list_struct_definition_struct_definition; // tag group
	extern s_tag_struct language_pack_definition_struct_definition;

} // namespace blofeld

