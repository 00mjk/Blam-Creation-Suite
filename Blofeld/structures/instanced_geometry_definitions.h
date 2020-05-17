#pragma once

namespace blofeld
{

	extern const char* instanced_geometry_flags_strings[];
	extern s_string_list_definition instanced_geometry_flags;
	extern const char* instanced_geometry_imposter_policy_enum_strings[];
	extern s_string_list_definition instanced_geometry_imposter_policy_enum;
	extern const char* instanced_geometry_pathfinding_policy_enum_strings[];
	extern s_string_list_definition instanced_geometry_pathfinding_policy_enum;
	extern const char* instanced_geometry_lightmapping_policy_enum_strings[];
	extern s_string_list_definition instanced_geometry_lightmapping_policy_enum;
	extern const char* instanced_geometry_streamingpriority_enum_strings[];
	extern s_string_list_definition instanced_geometry_streamingpriority_enum;
	extern const char* instanced_geometry_definition_flags_strings[];
	extern s_string_list_definition instanced_geometry_definition_flags;


	extern s_tag_struct global_render_model_instance_placement_block_block_struct;
	extern s_tag_block_definition global_render_model_instance_placement_block_block;
	extern s_tag_struct structure_bsp_instanced_geometry_instances_block_block_struct;
	extern s_tag_block_definition structure_bsp_instanced_geometry_instances_block_block;
	extern s_tag_struct structure_bsp_instanced_geometry_instances_names_block_block_struct;
	extern s_tag_block_definition structure_bsp_instanced_geometry_instances_names_block_block;
	extern s_tag_struct structure_bsp_instanced_geometry_definition_block_block_struct;
	extern s_tag_block_definition structure_bsp_instanced_geometry_definition_block_block;
	extern s_tag_block_definition structureIOHavokDataBlock_block;
	extern s_tag_block_definition SerializedHavokGeometryDataBlock_block;

	extern s_tag_struct structureIOHavokDataBlock_struct_struct_definition;
	extern s_tag_struct SerializedHavokGeometryDataBlock_struct_struct_definition;

} // namespace blofeld

