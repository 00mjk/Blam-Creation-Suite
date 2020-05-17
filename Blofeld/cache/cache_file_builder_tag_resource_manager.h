#pragma once

namespace blofeld
{

	extern const char* cache_file_shared_file_flags_definition_strings[];
	extern s_string_list_definition cache_file_shared_file_flags_definition;
	extern const char* cache_file_tag_resource_page_flags_strings[];
	extern s_string_list_definition cache_file_tag_resource_page_flags;
	extern const char* cache_file_resource_data_flags_definition_strings[];
	extern s_string_list_definition cache_file_resource_data_flags_definition;
	extern const char* cache_file_resource_global_zone_attachment_flags_strings[];
	extern s_string_list_definition cache_file_resource_global_zone_attachment_flags;
	extern const char* named_value_type_enum_strings[];
	extern s_string_list_definition named_value_type_enum;
	extern const char* cache_file_tag_parentage_flags_definition_strings[];
	extern s_string_list_definition cache_file_tag_parentage_flags_definition;

	constexpr unsigned long CACHE_FILE_RESOURCE_LAYOUT_TABLE_TAG = 'play';

	extern s_tag_struct cache_file_resource_layout_table_block_struct;
	extern s_tag_block_definition cache_file_resource_layout_table_block;
	extern s_tag_group cache_file_resource_layout_table_group;
	constexpr unsigned long CACHE_FILE_RESOURCE_GESTALT_TAG = 'zone';

	extern s_tag_struct cache_file_resource_gestalt_block_struct;
	extern s_tag_block_definition cache_file_resource_gestalt_block;
	extern s_tag_group cache_file_resource_gestalt_group;

	extern s_tag_struct cache_file_codec_identifier_block_block_struct;
	extern s_tag_block_definition cache_file_codec_identifier_block_block;
	extern s_tag_struct cache_file_shared_file_block_block_struct;
	extern s_tag_block_definition cache_file_shared_file_block_block;
	extern s_tag_block_definition cache_file_resource_file_page_block_block;
	extern s_tag_struct cache_file_resource_streaming_subpage_table_block_block_struct;
	extern s_tag_block_definition cache_file_resource_streaming_subpage_table_block_block;
	extern s_tag_struct cache_file_resource_streaming_subpage_block_block_struct;
	extern s_tag_block_definition cache_file_resource_streaming_subpage_block_block;
	extern s_tag_struct cache_file_resource_section_block_block_struct;
	extern s_tag_block_definition cache_file_resource_section_block_block;
	extern s_tag_struct cache_file_resource_type_identifier_block_block_struct;
	extern s_tag_block_definition cache_file_resource_type_identifier_block_block;
	extern s_tag_struct cache_file_interop_type_identifier_block_block_struct;
	extern s_tag_block_definition cache_file_interop_type_identifier_block_block;
	extern s_tag_struct cache_file_resource_data_block_block_struct;
	extern s_tag_block_definition cache_file_resource_data_block_block;
	extern s_tag_struct cache_file_resource_fixup_location_block_block_struct;
	extern s_tag_block_definition cache_file_resource_fixup_location_block_block;
	extern s_tag_struct cache_file_resource_interop_location_block_block_struct;
	extern s_tag_block_definition cache_file_resource_interop_location_block_block;
	extern s_tag_struct cache_file_resource_priority_data_block_block_struct;
	extern s_tag_block_definition cache_file_resource_priority_data_block_block;
	extern s_tag_block_definition cache_file_designer_zone_block_block;
	extern s_tag_struct cache_file_tag_resources_bitvector_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resources_bitvector_block_block;
	extern s_tag_struct cache_file_tag_resource_usage_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_usage_block_block;
	extern s_tag_struct cache_file_zone_resource_visit_node_block_block_struct;
	extern s_tag_block_definition cache_file_zone_resource_visit_node_block_block;
	extern s_tag_struct cache_file_zone_resource_visit_node_link_block_block_struct;
	extern s_tag_block_definition cache_file_zone_resource_visit_node_link_block_block;
	extern s_tag_block_definition cache_file_global_zone_block_block;
	extern s_tag_block_definition cache_file_tag_zone_block_block;
	extern s_tag_block_definition cache_file_bsp_zone_block_block;
	extern s_tag_block_definition cache_file_cinematic_zone_block_block;
	extern s_tag_block_definition cache_file_full_zone_sets_block_block;
	extern s_tag_struct cache_file_zone_set_zone_usage_block_block_struct;
	extern s_tag_block_definition cache_file_zone_set_zone_usage_block_block;
	extern s_tag_struct cache_file_bsp_reference_block_block_struct;
	extern s_tag_block_definition cache_file_bsp_reference_block_block;
	extern s_tag_struct cache_file_resource_owner_block_block_struct;
	extern s_tag_block_definition cache_file_resource_owner_block_block;
	extern s_tag_struct cache_file_model_variant_usage_block_block_struct;
	extern s_tag_block_definition cache_file_model_variant_usage_block_block;
	extern s_tag_struct cache_file_resource_owner_reference_block_block_struct;
	extern s_tag_block_definition cache_file_resource_owner_reference_block_block;
	extern s_tag_struct cache_file_character_usage_block_block_struct;
	extern s_tag_block_definition cache_file_character_usage_block_block;
	extern s_tag_struct cache_file_model_variant_usage_reference_block_block_struct;
	extern s_tag_block_definition cache_file_model_variant_usage_reference_block_block;
	extern s_tag_struct cache_file_bsp_game_attachments_block_block_struct;
	extern s_tag_block_definition cache_file_bsp_game_attachments_block_block;
	extern s_tag_struct cache_file_bsp_attachment_block_block_struct;
	extern s_tag_block_definition cache_file_bsp_attachment_block_block;
	extern s_tag_block_definition debug_cache_file_model_variant_zone_block_block;
	extern s_tag_block_definition debug_cache_file_combat_dialogue_zone_block_block;
	extern s_tag_block_definition debug_cache_file_tag_zone_block_block;
	extern s_tag_struct cache_file_debug_resource_definition_block_block_struct;
	extern s_tag_block_definition cache_file_debug_resource_definition_block_block;
	extern s_tag_struct resource_category_block_block_struct;
	extern s_tag_block_definition resource_category_block_block;
	extern s_tag_struct cache_file_resource_layout_block_block_struct;
	extern s_tag_block_definition cache_file_resource_layout_block_block;
	extern s_tag_struct cache_file_tag_resource_properties_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_properties_block_block;
	extern s_tag_struct cache_file_tag_resource_named_value_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_named_value_block_block;
	extern s_tag_struct cache_file_tag_parentage_block_block_struct;
	extern s_tag_block_definition cache_file_tag_parentage_block_block;
	extern s_tag_struct cache_file_tag_parentage_reference_block_block_struct;
	extern s_tag_block_definition cache_file_tag_parentage_reference_block_block;
	extern s_tag_struct cache_file_tag_resource_prediction_quantum_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_prediction_quantum_block_block;
	extern s_tag_struct cache_file_tag_resource_prediction_atom_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_prediction_atom_block_block;
	extern s_tag_struct cache_file_tag_resource_prediction_molecule_atom_reference_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_prediction_molecule_atom_reference_block_block;
	extern s_tag_struct cache_file_tag_resource_prediction_molecule_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_prediction_molecule_block_block;
	extern s_tag_struct cache_file_tag_resource_prediction_molecule_keys_block_block_struct;
	extern s_tag_block_definition cache_file_tag_resource_prediction_molecule_keys_block_block;

	extern s_tag_struct cache_file_resource_page_struct_struct_definition;
	extern s_tag_struct resource_checksum_struct_struct_definition;
	extern s_tag_struct cache_file_tag_zone_manifest_struct_struct_definition;
	extern s_tag_struct debug_cache_file_zone_manifest_struct_struct_definition;
	extern s_tag_struct cache_file_tag_resource_prediction_table_struct_definition;

} // namespace blofeld

