#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_STRUCT(particle_physics_struct_definition)
{
	FIELD( _field_tag_reference, "template" ),
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_char_integer, "collision controller index!" ),
	FIELD( _field_char_integer, "turbulence controller index!" ),
	FIELD( _field_char_integer, "global force controller index!" ),
	FIELD( _field_pad, "pphys", 3 ),
	FIELD( _field_block, "movements", &particle_controller ),
	FIELD( _field_tag_reference, "turbulence texture" ),
	FIELD( _field_terminator )
};

TAG_STRUCT(particle_physics_struct)
{
	FIELD( _field_tag_reference, "template" ),
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_char_integer, "collision controller index!" ),
	FIELD( _field_char_integer, "turbulence controller index!" ),
	FIELD( _field_char_integer, "global force controller index!" ),
	FIELD( _field_pad, "pphys", 3 ),
	FIELD( _field_block, "movements", &particle_controller ),
	FIELD( _field_tag_reference, "turbulence texture" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(particle_controller, c_particle_movement_definition::k_type_count + 2)
{
	FIELD( _field_enum, "type" ),
	FIELD( _field_byte_flags, "flags!" ),
	FIELD( _field_pad, "KNTXOMS", 1 ),
	FIELD( _field_block, "parameters", &particle_controller_parameters ),
	FIELD( _field_long_integer, "runtime m_constant_parameters!" ),
	FIELD( _field_long_integer, "runtime m_used_particle_states!" ),
	FIELD( _field_terminator )
};

TAG_BLOCK(particle_controller_parameters, c_particle_movement_definition::k_flocking_parameter_count)
{
	FIELD( _field_long_integer, "parameter id" ),
	FIELD( _field_struct, "property", &particle_property_scalar_struct_new_struct_definition ),
	FIELD( _field_terminator )
};

TAG_GROUP(particle_physics_block, PARTICLE_PHYSICS_TAG)
{
	FIELD( _field_tag_reference, "template" ),
	FIELD( _field_word_flags, "flags" ),
	FIELD( _field_char_integer, "collision controller index!" ),
	FIELD( _field_char_integer, "turbulence controller index!" ),
	FIELD( _field_char_integer, "global force controller index!" ),
	FIELD( _field_pad, "pphys", 3 ),
	FIELD( _field_block, "movements", &particle_controller ),
	FIELD( _field_tag_reference, "turbulence texture" ),
	FIELD( _field_terminator )
};

} // namespace blofeld
