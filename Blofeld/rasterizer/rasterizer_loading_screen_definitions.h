#pragma once

namespace blofeld
{

	extern const char* loadscreenFlags_strings[];
	extern s_string_list_definition loadscreenFlags;

	constexpr unsigned long LOAD_SCREEN_TAG = 'ldsc';

	extern s_tag_group load_screen_group;

	extern s_tag_struct loadScreenBlock_block_struct;
	extern s_tag_block_definition loadScreenBlock_block;
	extern s_tag_struct vertexBlock_block_struct;
	extern s_tag_block_definition vertexBlock_block;


} // namespace blofeld

