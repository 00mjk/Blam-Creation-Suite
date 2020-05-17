#pragma once

namespace blofeld
{

	extern const char* generic_flags_strings[];
	extern s_string_list_definition generic_flags;
	extern const char* actor_type_enum_strings[];
	extern s_string_list_definition actor_type_enum;
	extern const char* global_ai_grenade_type_enum_strings[];
	extern s_string_list_definition global_ai_grenade_type_enum;
	extern const char* behavior_tree_root_enum_strings[];
	extern s_string_list_definition behavior_tree_root_enum;
	extern const char* general_flags_strings[];
	extern s_string_list_definition general_flags;
	extern const char* combat_positioning_enum_strings[];
	extern s_string_list_definition combat_positioning_enum;
	extern const char* proto_spawn_type_enum_strings[];
	extern s_string_list_definition proto_spawn_type_enum;
	extern const char* prop_class_enum_strings[];
	extern s_string_list_definition prop_class_enum;
	extern const char* vitality_flags_strings[];
	extern s_string_list_definition vitality_flags;
	extern const char* perception_flags_strings[];
	extern s_string_list_definition perception_flags;
	extern const char* actor_perception_mode_definition_strings[];
	extern s_string_list_definition actor_perception_mode_definition;
	extern const char* hopping_flags_strings[];
	extern s_string_list_definition hopping_flags;
	extern const char* movement_flags_strings[];
	extern s_string_list_definition movement_flags;
	extern const char* obstacle_ignore_enum_strings[];
	extern s_string_list_definition obstacle_ignore_enum;
	extern const char* movement_hint_enum_strings[];
	extern s_string_list_definition movement_hint_enum;
	extern const char* global_ai_jump_height_enum_strings[];
	extern s_string_list_definition global_ai_jump_height_enum;
	extern const char* combat_status_enum_definition_strings[];
	extern s_string_list_definition combat_status_enum_definition;
	extern const char* movement_throttle_control_flags_strings[];
	extern s_string_list_definition movement_throttle_control_flags;
	extern const char* character_smooth_movement_settings_options_strings[];
	extern s_string_list_definition character_smooth_movement_settings_options;
	extern const char* evaluator_enum_strings[];
	extern s_string_list_definition evaluator_enum;
	extern const char* evaluation_modes_strings[];
	extern s_string_list_definition evaluation_modes;
	extern const char* engage_flags_strings[];
	extern s_string_list_definition engage_flags;
	extern const char* cover_flags_strings[];
	extern s_string_list_definition cover_flags;
	extern const char* character_search_flags_strings[];
	extern s_string_list_definition character_search_flags;
	extern const char* character_retreat_flags_strings[];
	extern s_string_list_definition character_retreat_flags;
	extern const char* charge_flags_strings[];
	extern s_string_list_definition charge_flags;
	extern const char* actor_special_fire_mode_enum_strings[];
	extern s_string_list_definition actor_special_fire_mode_enum;
	extern const char* actor_special_fire_situation_enum_strings[];
	extern s_string_list_definition actor_special_fire_situation_enum;
	extern const char* weapon_flags_strings[];
	extern s_string_list_definition weapon_flags;
	extern const char* actor_grenade_trajectory_enum_strings[];
	extern s_string_list_definition actor_grenade_trajectory_enum;
	extern const char* grenades_flags_strings[];
	extern s_string_list_definition grenades_flags;
	extern const char* vehicle_flags$2_strings[];
	extern s_string_list_definition vehicle_flags$2;
	extern const char* vehicle_boarding_flags_strings[];
	extern s_string_list_definition vehicle_boarding_flags;
	extern const char* boarding_flags_strings[];
	extern s_string_list_definition boarding_flags;
	extern const char* rook_flags_strings[];
	extern s_string_list_definition rook_flags;
	extern const char* agent_filter_flags_strings[];
	extern s_string_list_definition agent_filter_flags;
	extern const char* task_generation_flags_strings[];
	extern s_string_list_definition task_generation_flags;
	extern const char* character_advance_type_enum_strings[];
	extern s_string_list_definition character_advance_type_enum;
	extern const char* advance_flags_strings[];
	extern s_string_list_definition advance_flags;
	extern const char* forerunner_flags_strings[];
	extern s_string_list_definition forerunner_flags;
	extern const char* character_equipment_usage_when_enum_strings[];
	extern s_string_list_definition character_equipment_usage_when_enum;
	extern const char* character_equipment_usage_how_enum_strings[];
	extern s_string_list_definition character_equipment_usage_how_enum;
	extern const char* character_equipment_def_bits_strings[];
	extern s_string_list_definition character_equipment_def_bits;
	extern const char* character_flags_strings[];
	extern s_string_list_definition character_flags;

	constexpr unsigned long CHARACTER_TAG = 'char';

	extern s_tag_group character_group;

	extern s_tag_block_definition character_block_block;
	extern s_tag_struct character_variants_block_block_struct;
	extern s_tag_block_definition character_variants_block_block;
	extern s_tag_struct character_voice_block_block_struct;
	extern s_tag_block_definition character_voice_block_block;
	extern s_tag_struct character_voice_region_filter_block_block_struct;
	extern s_tag_block_definition character_voice_region_filter_block_block;
	extern s_tag_struct character_voice_region_permutation_filter_block_block_struct;
	extern s_tag_block_definition character_voice_region_permutation_filter_block_block;
	extern s_tag_struct character_voice_properties_block_block_struct;
	extern s_tag_block_definition character_voice_properties_block_block;
	extern s_tag_struct character_general_block_block_struct;
	extern s_tag_block_definition character_general_block_block;
	extern s_tag_struct disallowed_weapons_for_trading_block_block_struct;
	extern s_tag_block_definition disallowed_weapons_for_trading_block_block;
	extern s_tag_struct character_proto_spawn_block_block_struct;
	extern s_tag_block_definition character_proto_spawn_block_block;
	extern s_tag_struct character_interact_block_block_struct;
	extern s_tag_block_definition character_interact_block_block;
	extern s_tag_struct character_emotions_block_block_struct;
	extern s_tag_block_definition character_emotions_block_block;
	extern s_tag_struct character_emotions_situational_danger_block_block_struct;
	extern s_tag_block_definition character_emotions_situational_danger_block_block;
	extern s_tag_struct character_vitality_block_block_struct;
	extern s_tag_block_definition character_vitality_block_block;
	extern s_tag_struct character_placement_block_block_struct;
	extern s_tag_block_definition character_placement_block_block;
	extern s_tag_struct character_perception_block_block_struct;
	extern s_tag_block_definition character_perception_block_block;
	extern s_tag_struct character_target_block_block_struct;
	extern s_tag_block_definition character_target_block_block;
	extern s_tag_struct character_look_block_block_struct;
	extern s_tag_block_definition character_look_block_block;
	extern s_tag_struct character_hopping_block_block_struct;
	extern s_tag_block_definition character_hopping_block_block;
	extern s_tag_struct characterHopDefinitionBlock_block_struct;
	extern s_tag_block_definition characterHopDefinitionBlock_block;
	extern s_tag_struct character_movement_block_block_struct;
	extern s_tag_block_definition character_movement_block_block;
	extern s_tag_struct movement_stationary_pause_block_block_struct;
	extern s_tag_block_definition movement_stationary_pause_block_block;
	extern s_tag_struct movement_throttle_control_block_block_struct;
	extern s_tag_block_definition movement_throttle_control_block_block;
	extern s_tag_struct movement_throttle_block_block_struct;
	extern s_tag_block_definition movement_throttle_block_block;
	extern s_tag_struct character_throttle_style_block_block_struct;
	extern s_tag_block_definition character_throttle_style_block_block;
	extern s_tag_struct character_movement_set_block_block_struct;
	extern s_tag_block_definition character_movement_set_block_block;
	extern s_tag_struct movement_mapping_block_block_struct;
	extern s_tag_block_definition movement_mapping_block_block;
	extern s_tag_struct character_flocking_block_block_struct;
	extern s_tag_block_definition character_flocking_block_block;
	extern s_tag_struct character_swarm_block_block_struct;
	extern s_tag_block_definition character_swarm_block_block;
	extern s_tag_struct character_firing_point_evaluator_block_block_struct;
	extern s_tag_block_definition character_firing_point_evaluator_block_block;
	extern s_tag_struct evaluator_definition_block_block_struct;
	extern s_tag_block_definition evaluator_definition_block_block;
	extern s_tag_struct character_ready_block_block_struct;
	extern s_tag_block_definition character_ready_block_block;
	extern s_tag_struct character_engage_block_block_struct;
	extern s_tag_block_definition character_engage_block_block;
	extern s_tag_struct character_charge_block_block_struct;
	extern s_tag_block_definition character_charge_block_block;
	extern s_tag_struct character_charge_difficulty_limits_block_block_struct;
	extern s_tag_block_definition character_charge_difficulty_limits_block_block;
	extern s_tag_struct character_evasion_block_block_struct;
	extern s_tag_block_definition character_evasion_block_block;
	extern s_tag_struct character_cover_block_block_struct;
	extern s_tag_block_definition character_cover_block_block;
	extern s_tag_struct character_retreat_block_block_struct;
	extern s_tag_block_definition character_retreat_block_block;
	extern s_tag_struct character_search_block_block_struct;
	extern s_tag_block_definition character_search_block_block;
	extern s_tag_struct character_presearch_block_block_struct;
	extern s_tag_block_definition character_presearch_block_block;
	extern s_tag_struct character_idle_block_block_struct;
	extern s_tag_block_definition character_idle_block_block;
	extern s_tag_struct character_vocalization_block_block_struct;
	extern s_tag_block_definition character_vocalization_block_block;
	extern s_tag_struct character_boarding_block_block_struct;
	extern s_tag_block_definition character_boarding_block_block;
	extern s_tag_struct character_vehicle_boarding_block_block_struct;
	extern s_tag_block_definition character_vehicle_boarding_block_block;
	extern s_tag_struct character_kungfu_block_block_struct;
	extern s_tag_block_definition character_kungfu_block_block;
	extern s_tag_struct character_bunker_block_block_struct;
	extern s_tag_block_definition character_bunker_block_block;
	extern s_tag_struct character_guardian_block_block_struct;
	extern s_tag_block_definition character_guardian_block_block;
	extern s_tag_struct character_combatform_block_block_struct;
	extern s_tag_block_definition character_combatform_block_block;
	extern s_tag_struct character_engineer_block_block_struct;
	extern s_tag_block_definition character_engineer_block_block;
	extern s_tag_struct character_inspect_block_block_struct;
	extern s_tag_block_definition character_inspect_block_block;
	extern s_tag_struct character_scarab_block_block_struct;
	extern s_tag_block_definition character_scarab_block_block;
	extern s_tag_struct character_weapons_block_block_struct;
	extern s_tag_block_definition character_weapons_block_block;
	extern s_tag_struct character_firing_pattern_properties_block_block_struct;
	extern s_tag_block_definition character_firing_pattern_properties_block_block;
	extern s_tag_struct character_firing_pattern_block_block_struct;
	extern s_tag_block_definition character_firing_pattern_block_block;
	extern s_tag_struct character_grenades_block_block_struct;
	extern s_tag_block_definition character_grenades_block_block;
	extern s_tag_struct character_vehicle_block_block_struct;
	extern s_tag_block_definition character_vehicle_block_block;
	extern s_tag_struct character_flying_movement_block_block_struct;
	extern s_tag_block_definition character_flying_movement_block_block;
	extern s_tag_struct character_morph_block_block_struct;
	extern s_tag_block_definition character_morph_block_block;
	extern s_tag_struct character_equipment_block_block_struct;
	extern s_tag_block_definition character_equipment_block_block;
	extern s_tag_struct character_equipment_usage_block_block_struct;
	extern s_tag_block_definition character_equipment_usage_block_block;
	extern s_tag_struct character_stimuli_response_block_block_struct;
	extern s_tag_block_definition character_stimuli_response_block_block;
	extern s_tag_struct character_activity_object_block_block_struct;
	extern s_tag_block_definition character_activity_object_block_block;
	extern s_tag_struct character_pain_screen_block_block_struct;
	extern s_tag_block_definition character_pain_screen_block_block;
	extern s_tag_struct character_bishop_block_block_struct;
	extern s_tag_block_definition character_bishop_block_block;
	extern s_tag_struct character_combotron_parent_block_block_struct;
	extern s_tag_block_definition character_combotron_parent_block_block;
	extern s_tag_struct character_combotron_child_block_block_struct;
	extern s_tag_block_definition character_combotron_child_block_block;
	extern s_tag_struct character_handle_dismemberment_block_block_struct;
	extern s_tag_block_definition character_handle_dismemberment_block_block;
	extern s_tag_struct character_cover_fight_block_block_struct;
	extern s_tag_block_definition character_cover_fight_block_block;
	extern s_tag_struct character_emerge_block_block_struct;
	extern s_tag_block_definition character_emerge_block_block;
	extern s_tag_struct dynamic_task_block_block_struct;
	extern s_tag_block_definition dynamic_task_block_block;
	extern s_tag_struct character_advance_block_block_struct;
	extern s_tag_block_definition character_advance_block_block;
	extern s_tag_struct character_cover_evasion_block_block_struct;
	extern s_tag_block_definition character_cover_evasion_block_block;
	extern s_tag_struct character_pack_stalk_block_block_struct;
	extern s_tag_block_definition character_pack_stalk_block_block;
	extern s_tag_struct character_fight_circle_block_block_struct;
	extern s_tag_block_definition character_fight_circle_block_block;
	extern s_tag_struct character_hamstring_charge_block_block_struct;
	extern s_tag_block_definition character_hamstring_charge_block_block;
	extern s_tag_struct character_forerunner_block_block_struct;
	extern s_tag_block_definition character_forerunner_block_block;
	extern s_tag_struct character_gravity_jump_block_block_struct;
	extern s_tag_block_definition character_gravity_jump_block_block;

	extern s_tag_struct character_struct_definition_struct_definition; // tag group
	extern s_tag_struct active_camo_perception_properties_struct_definition;
	extern s_tag_struct character_hop_struct_struct_definition;
	extern s_tag_struct SmoothThrottleStruct_struct_definition;
	extern s_tag_struct SmoothStoppingStruct_struct_definition;
	extern s_tag_struct character_bunker_timings_struct_struct_definition;

} // namespace blofeld

