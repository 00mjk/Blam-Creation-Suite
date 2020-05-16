#pragma once

namespace blofeld
{

extern s_tag_struct streamingzoneset_struct_definition_struct_definition;

extern s_tag_struct StreamingZoneSetResourceIdBlock_struct_definition;
extern s_tag_block_definition StreamingZoneSetResourceIdBlock;
extern s_tag_struct StreamingZoneSetResourceSubregionDataBlock_struct_definition;
extern s_tag_block_definition StreamingZoneSetResourceSubregionDataBlock;
extern s_tag_struct StreamingZoneSetResourceLevelsBlock_struct_definition;
extern s_tag_block_definition StreamingZoneSetResourceLevelsBlock;

constexpr unsigned long STREAMINGZONESET_TAG = 'SDzs';

extern s_tag_block_definition streamingzoneset_block;
extern s_tag_group streamingzoneset_group;
} // namespace blofeld
