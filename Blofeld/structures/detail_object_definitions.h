#pragma once

namespace blofeld
{

	extern const char* detail_object_collection_type_enum_definition_strings[];
	extern s_string_list_definition detail_object_collection_type_enum_definition;
	extern const char* detail_object_type_flags_definition_strings[];
	extern s_string_list_definition detail_object_type_flags_definition;

	constexpr unsigned long DETAIL_OBJECT_COLLECTION_TAG = 'dobc';

	extern s_tag_group detail_object_collection_group;

	extern s_tag_block_definition detail_object_collection_block_block;
	extern s_tag_struct detail_object_type_block_block_struct;
	extern s_tag_block_definition detail_object_type_block_block;
	extern s_tag_struct global_detail_object_cells_block_block_struct;
	extern s_tag_block_definition global_detail_object_cells_block_block;
	extern s_tag_struct global_detail_object_block_block_struct;
	extern s_tag_block_definition global_detail_object_block_block;
	extern s_tag_struct global_detail_object_counts_block_block_struct;
	extern s_tag_block_definition global_detail_object_counts_block_block;
	extern s_tag_struct global_z_reference_vector_block_block_struct;
	extern s_tag_block_definition global_z_reference_vector_block_block;

	extern s_tag_struct detail_object_collection_struct_definition_struct_definition; // tag group

} // namespace blofeld

