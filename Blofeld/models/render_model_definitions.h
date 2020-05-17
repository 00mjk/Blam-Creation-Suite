#pragma once

namespace blofeld
{

	extern const char* procedure_enum_definition_strings[];
	extern s_string_list_definition procedure_enum_definition;
	extern const char* procedure_axis_enum_definition_strings[];
	extern s_string_list_definition procedure_axis_enum_definition;
	extern const char* render_model_flags_definition_strings[];
	extern s_string_list_definition render_model_flags_definition;
	extern const char* render_model_instance_bitfield_flags_definition_strings[];
	extern s_string_list_definition render_model_instance_bitfield_flags_definition;
	extern const char* render_model_marker_flags_definition_strings[];
	extern s_string_list_definition render_model_marker_flags_definition;

	constexpr unsigned long IMPOSTER_MODEL_TAG = 'impo';

	extern s_tag_group imposter_model_group;
	constexpr unsigned long RENDER_MODEL_TAG = 'mode';

	extern s_tag_struct render_model_block_struct;
	extern s_tag_block_definition render_model_block;
	extern s_tag_group render_model_group;
	constexpr unsigned long RENDER_MODEL_LIGHTMAP_ATLAS_TAG = 'rmla';

	extern s_tag_group render_model_lightmap_atlas_group;

	extern s_tag_block_definition imposter_model_block_block;
	extern s_tag_block_definition render_model_lightmap_atlas_block_block;
	extern s_tag_struct imposter_mode_node_block_block_struct;
	extern s_tag_block_definition imposter_mode_node_block_block;
	extern s_tag_struct render_model_region_block_block_struct;
	extern s_tag_block_definition render_model_region_block_block;
	extern s_tag_struct render_model_permutation_block_block_struct;
	extern s_tag_block_definition render_model_permutation_block_block;
	extern s_tag_struct render_model_node_block_block_struct;
	extern s_tag_block_definition render_model_node_block_block;
	extern s_tag_struct render_model_marker_group_block_block_struct;
	extern s_tag_block_definition render_model_marker_group_block_block;
	extern s_tag_struct render_model_marker_block_block_struct;
	extern s_tag_block_definition render_model_marker_block_block;
	extern s_tag_struct instance_node_map_mapping_block_block_struct;
	extern s_tag_block_definition instance_node_map_mapping_block_block;
	extern s_tag_struct volume_samples_block_block_struct;
	extern s_tag_block_definition volume_samples_block_block;
	extern s_tag_struct default_node_orientations_block_block_struct;
	extern s_tag_block_definition default_node_orientations_block_block;
	extern s_tag_struct RenderModelBoneGroupBlock_block_struct;
	extern s_tag_block_definition RenderModelBoneGroupBlock_block;
	extern s_tag_struct RenderModelNodeIndexBlock_block_struct;
	extern s_tag_block_definition RenderModelNodeIndexBlock_block;

	extern s_tag_struct imposter_model_struct_definition_struct_definition; // tag group
	extern s_tag_struct render_model_lightmap_atlas_struct_definition_struct_definition; // tag group

} // namespace blofeld

