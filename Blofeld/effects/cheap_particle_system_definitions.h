#pragma once

namespace blofeld
{

	extern const char* cheap_particle_emitter_flags_strings[];
	extern s_string_list_definition cheap_particle_emitter_flags;
	extern const char* cheap_particle_type_orientation_strings[];
	extern s_string_list_definition cheap_particle_type_orientation;

	constexpr unsigned long CHEAP_PARTICLE_EMITTER_TAG = 'cpem';

	extern s_tag_group cheap_particle_emitter_group;
	constexpr unsigned long CHEAP_PARTICLE_TYPE_LIBRARY_TAG = 'cptl';

	extern s_tag_group cheap_particle_type_library_group;

	extern s_tag_block_definition cheap_particle_emitter_block_block;
	extern s_tag_block_definition cheap_particle_type_library_block_block;
	extern s_tag_struct cheap_particle_type_block_block_struct;
	extern s_tag_block_definition cheap_particle_type_block_block;
	extern s_tag_struct cheap_particle_bitmap_reference_block_block_struct;
	extern s_tag_block_definition cheap_particle_bitmap_reference_block_block;
	extern s_tag_struct cheapParticleTurbulenceTypeBlock_block_struct;
	extern s_tag_block_definition cheapParticleTurbulenceTypeBlock_block;

	extern s_tag_struct cheap_particle_emitter_struct_definition_struct_definition; // tag group
	extern s_tag_struct cheap_particle_type_library_struct_definition_struct_definition; // tag group
	extern s_tag_struct cheap_particle_scalar_object_function_struct_struct_definition;

} // namespace blofeld

