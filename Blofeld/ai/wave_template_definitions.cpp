#include <blofeld-private-pch.h>

namespace blofeld
{

	TAG_ENUM(wave_placement_filter_enum, 8)
	{
		OPTION("None"),
		OPTION("Heavy Infantry"),
		OPTION("Boss Infantry"),
		OPTION("Light Vehicle"),
		OPTION("Heavy Vehicle"),
		OPTION("Flying Infantry"),
		OPTION("Flying Vehicle"),
		OPTION("Bonus"),
	};

	TAG_GROUP(wave_template, WAVE_TEMPLATE_TAG)
	{
		FIELD( _field_block, "squad specifications", &wave_squad_specification_struct_block ),
		FIELD( _field_terminator )
	};

	TAG_BLOCK_FROM_STRUCT(wave_squad_specification_struct, k_max_squad_specifications_per_wave, wave_squad_specification_struct_struct_struct_definition );

TAG_STRUCT(wave_squad_specification_struct_struct)
{
		FIELD( _field_tag_reference, "squad template^" ),
		FIELD( _field_struct, "spawn conditions", &ai_spawn_conditions_struct_struct_definition ),
		FIELD( _field_short_integer, "weight#The relative weight given to this squad spawning" ),
		FIELD( _field_explanation, "MIN/MAX SPAWN COUNTS" ),
		FIELD( _field_char_integer, "min spawn#Spawn AT LEAST this number of squads. Value of 0 means \"no minimum\"" ),
		FIELD( _field_char_integer, "max spawn#Spawn NO MORE THAN this number of squads. Value of 0 means \"no maximum\"" ),
		FIELD( _field_long_enum, "placement filter#Filter where this squad specification can spawn by matching this value with the values in squad definitions in the scenario", &wave_placement_filter_enum ),
		FIELD( _field_terminator )
};

} // namespace blofeld

