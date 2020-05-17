#pragma once

namespace blofeld
{

	extern const char* GuiOrdnancePrimiumFlag_strings[];
	extern s_string_list_definition GuiOrdnancePrimiumFlag;

	constexpr unsigned long GAME_GLOBALS_ORDNANCE_LIST_TAG = 'ggol';

	extern s_tag_group game_globals_ordnance_list_group;
	constexpr unsigned long SCENARIO_ORDNANCE_LIST_TAG = 'scol';

	extern s_tag_group scenario_ordnance_list_group;

	extern s_tag_block_definition game_globals_ordnance_list_block_block;
	extern s_tag_block_definition scenario_ordnance_list_block_block;
	extern s_tag_struct GameGlobalsOrdnanceBlock_block_struct;
	extern s_tag_block_definition GameGlobalsOrdnanceBlock_block;
	extern s_tag_struct OrdnanceRemappingVariantBlock_block_struct;
	extern s_tag_block_definition OrdnanceRemappingVariantBlock_block;
	extern s_tag_struct OrdnanceRemappingBlock_block_struct;
	extern s_tag_block_definition OrdnanceRemappingBlock_block;
	extern s_tag_struct RandomOrdnanceItemBlock_block_struct;
	extern s_tag_block_definition RandomOrdnanceItemBlock_block;
	extern s_tag_struct PlayerOrdnanceGroupBlock_block_struct;
	extern s_tag_block_definition PlayerOrdnanceGroupBlock_block;
	extern s_tag_struct PlayerOrdnanceItemBlock_block_struct;
	extern s_tag_block_definition PlayerOrdnanceItemBlock_block;

	extern s_tag_struct game_globals_ordnance_list_struct_definition_struct_definition; // tag group
	extern s_tag_struct scenario_ordnance_list_struct_definition_struct_definition; // tag group

} // namespace blofeld

