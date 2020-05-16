#include <blofeld-private-pch.h>

namespace blofeld
{

TAG_STRUCT(self_illumination_struct_definition)
{
	FIELD( _field_block, "States", &self_illumination_state ),
	FIELD( _field_terminator )
};

TAG_BLOCK(self_illumination_state, SelfIlluminationDefinition::MAX_STATES)
{
	FIELD( _field_explanation, "Self-Illumination State" ),
	FIELD( _field_string_id, "Name^" ),
	FIELD( _field_long_flags, "Flags" ),
	FIELD( _field_real, "Length #Length of illumination animation in seconds." ),
	FIELD( _field_string_id, "Next State #Used to automatically transition to another state when finished." ),
	FIELD( _field_struct, "Intensity #Animates intensity over time. 0 - Min Intensity.  1 - Max Intensity", &scalar_function_named_struct_struct_definition ),
	FIELD( _field_struct, "Color #Animates color over time.  0 - White.  1 - Full Color", &scalar_function_named_struct_struct_definition ),
	FIELD( _field_struct, "Activation #Animates On/Off state over time. 0 - Off. 1 - On", &scalar_function_named_struct_struct_definition ),
	FIELD( _field_terminator )
};

TAG_GROUP(self_illumination_block, SELF_ILLUMINATION_TAG)
{
	FIELD( _field_block, "States", &self_illumination_state ),
	FIELD( _field_terminator )
};

} // namespace blofeld
