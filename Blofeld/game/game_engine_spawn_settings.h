#pragma once

namespace blofeld
{

extern s_tag_struct SpawnSettings_struct_definition_struct_definition;

extern s_tag_struct influencerSpawnSettingsBlock_struct_definition;
extern s_tag_block_definition influencerSpawnSettingsBlock;
extern s_tag_struct weaponSpawnInfluenceBlock_struct_definition;
extern s_tag_block_definition weaponSpawnInfluenceBlock;
extern s_tag_struct vehicleSpawnInfluenceBlock_struct_definition;
extern s_tag_block_definition vehicleSpawnInfluenceBlock;
extern s_tag_struct projectileSpawnInfluenceBlock_struct_definition;
extern s_tag_block_definition projectileSpawnInfluenceBlock;
extern s_tag_struct equipmentSpawnInfluenceBlock_struct_definition;
extern s_tag_block_definition equipmentSpawnInfluenceBlock;

constexpr unsigned long SPAWNSETTINGS_TAG = 'ssdf';

extern s_tag_block_definition SpawnSettings_block;
extern s_tag_group SpawnSettings_group;
} // namespace blofeld
