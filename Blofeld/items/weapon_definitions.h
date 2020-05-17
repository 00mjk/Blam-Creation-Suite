#pragma once

namespace blofeld
{

	extern const char* magazine_flags_strings[];
	extern s_string_list_definition magazine_flags;
	extern const char* barrel_prediction_type_enum_strings[];
	extern s_string_list_definition barrel_prediction_type_enum;
	extern const char* weapon_barrel_flags_strings[];
	extern s_string_list_definition weapon_barrel_flags;
	extern const char* weapon_barrel_distribution_functions_strings[];
	extern s_string_list_definition weapon_barrel_distribution_functions;
	extern const char* weapon_trigger_inputs_strings[];
	extern s_string_list_definition weapon_trigger_inputs;
	extern const char* weapon_trigger_overcharged_actions_strings[];
	extern s_string_list_definition weapon_trigger_overcharged_actions;
	extern const char* weapon_trigger_behaviors_strings[];
	extern s_string_list_definition weapon_trigger_behaviors;
	extern const char* weapon_trigger_autofire_actions_strings[];
	extern s_string_list_definition weapon_trigger_autofire_actions;
	extern const char* trigger_prediction_type_enum_strings[];
	extern s_string_list_definition trigger_prediction_type_enum;
	extern const char* weapon_trigger_definition_flags_strings[];
	extern s_string_list_definition weapon_trigger_definition_flags;
	extern const char* weapon_trigger_charging_flags_strings[];
	extern s_string_list_definition weapon_trigger_charging_flags;
	extern const char* weapon_definition_flags_strings[];
	extern s_string_list_definition weapon_definition_flags;
	extern const char* weapon_definition_secondary_flags_strings[];
	extern s_string_list_definition weapon_definition_secondary_flags;
	extern const char* secondary_trigger_modes_strings[];
	extern s_string_list_definition secondary_trigger_modes;
	extern const char* movement_penalty_modes_strings[];
	extern s_string_list_definition movement_penalty_modes;
	extern const char* weapon_types_strings[];
	extern s_string_list_definition weapon_types;
	extern const char* first_time_pickup_types_strings[];
	extern s_string_list_definition first_time_pickup_types;
	extern const char* global_melee_class_enum_definition_strings[];
	extern s_string_list_definition global_melee_class_enum_definition;
	extern const char* weapon_screen_effect_flags_strings[];
	extern s_string_list_definition weapon_screen_effect_flags;
	extern const char* weaponScaleshotLevelFlags_strings[];
	extern s_string_list_definition weaponScaleshotLevelFlags;
	extern const char* weaponScaleshotFlags_strings[];
	extern s_string_list_definition weaponScaleshotFlags;

	constexpr unsigned long WEAPON_TAG = 'weap';

	extern s_tag_struct weapon_block_struct;
	extern s_tag_block_definition weapon_block;
	extern s_tag_group weapon_group;

	extern s_tag_struct melee_damage_parameters_block_block_struct;
	extern s_tag_block_definition melee_damage_parameters_block_block;
	extern s_tag_struct globalAimAssistBlock_block_struct;
	extern s_tag_block_definition globalAimAssistBlock_block;
	extern s_tag_struct globalAimSwimBlock_block_struct;
	extern s_tag_block_definition globalAimSwimBlock_block;
	extern s_tag_struct weapon_first_person_interface_block_block_struct;
	extern s_tag_block_definition weapon_first_person_interface_block_block;
	extern s_tag_struct magazines_block_struct;
	extern s_tag_block_definition magazines_block;
	extern s_tag_struct magazine_objects_block_struct;
	extern s_tag_block_definition magazine_objects_block;
	extern s_tag_struct weapon_triggers_block_struct;
	extern s_tag_block_definition weapon_triggers_block;
	extern s_tag_struct weapon_trigger_charging_fire_fraction_block_struct;
	extern s_tag_block_definition weapon_trigger_charging_fire_fraction_block;
	extern s_tag_struct weapon_barrels_block_struct;
	extern s_tag_block_definition weapon_barrels_block;
	extern s_tag_struct projectileDistributionCustomVector_block_struct;
	extern s_tag_block_definition projectileDistributionCustomVector_block;
	extern s_tag_struct weapon_barrel_function_block_block_struct;
	extern s_tag_block_definition weapon_barrel_function_block_block;
	extern s_tag_struct weapon_barrel_first_person_offset_block_block_struct;
	extern s_tag_block_definition weapon_barrel_first_person_offset_block_block;
	extern s_tag_struct barrel_firing_effect_block_block_struct;
	extern s_tag_block_definition barrel_firing_effect_block_block;
	extern s_tag_struct weaponScaleshotStruct_block_struct;
	extern s_tag_block_definition weaponScaleshotStruct_block;
	extern s_tag_struct weaponScaleshotLevelStruct_block_struct;
	extern s_tag_block_definition weaponScaleshotLevelStruct_block;
	extern s_tag_struct weapon_screen_effect_block_block_struct;
	extern s_tag_block_definition weapon_screen_effect_block_block;
	extern s_tag_struct WeaponSoundRTPCBlock_block_struct;
	extern s_tag_block_definition WeaponSoundRTPCBlock_block;
	extern s_tag_struct WeaponSoundSweetenerBlock_block_struct;
	extern s_tag_block_definition WeaponSoundSweetenerBlock_block;

	extern s_tag_struct aim_assist_struct_struct_definition;
	extern s_tag_struct WeaponBarrelIronSightsStruct_struct_definition;
	extern s_tag_struct weapon_interface_struct_struct_definition;
	extern s_tag_struct weapon_shared_interface_struct_struct_definition;
	extern s_tag_struct weapon_trigger_autofire_struct_struct_definition;
	extern s_tag_struct weapon_trigger_charging_struct_struct_definition;
	extern s_tag_struct weapon_barrel_firing_parameters_struct_struct_definition;
	extern s_tag_struct weapon_barrel_firing_error_struct_struct_definition;
	extern s_tag_struct weapon_barrel_projectile_accuracy_penalty_struct_struct_definition;
	extern s_tag_struct weapon_barrel_projectile_accuracy_penalty_function_struct_struct_definition;
	extern s_tag_struct weapon_barrel_damage_effect_struct_struct_definition;

} // namespace blofeld

