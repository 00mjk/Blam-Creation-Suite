#pragma once

#include "ai\ai.h"
#include "ai\ai_cues.h"
#include "ai\ai_dialogue_definitions.h"
#include "ai\ai_flocks.h"
#include "ai\ai_globals.h"
#include "ai\ai_hint_definitions.h"
#include "ai\ai_mission_dialogue.h"
#include "ai\ai_orders.h"
#include "ai\ai_scenario_definitions.h"
#include "ai\character_definitions.h"
#include "ai\cs_scenario_definitions.h"
#include "ai\firing_position_definitions.h"
#include "ai\formations.h"
#include "ai\objectives.h"
#include "ai\puppeteerdefinitions.h"
#include "ai\sector_definitions.h"
#include "ai\squad_definitions.h"
#include "ai\squad_patrol.h"
#include "ai\styles.h"
#include "ai\wave_template_definitions.h"
#include "ai\zone.h"
#include "animations\animation_definitions.h"
#include "animations\composites\composite_definitions.h"
#include "animations\pca\pca_animation_definitions.h"
#include "bink\bink_definitions.h"
#include "bitmaps\bitmap_group_old_tag_definition.h"
#include "bitmaps\bitmap_group_tag_definition.h"
#include "bitmaps\bitmap_group_xenon_interop.h"
#include "bitmaps\bitmap_tag_definition.h"
#include "bitmaps\bitmap_tight_bounds_definitions.h"
#include "bitmaps\bitmap_usage.h"
#include "bitmaps\color_table_group.h"
#include "cache\cache_file_builder_tag_resource_manager.h"
#include "cache\cache_file_tag_package_definitions.h"
#include "camera\camera_globals.h"
#include "camera\camera_obstruction.h"
#include "camera\camera_track_definitions.h"
#include "components\selfilluminationdefinition.h"
#include "creatures\creature_definitions.h"
#include "cutscene\cinematics_definitions.h"
#include "cutscene\lightrig.h"
#include "cutscene\new_cinematic_lighting_definitions.h"
#include "cutscene\recorded_animation_definitions.h"
#include "decorators\decorator_tag_definitions.h"
#include "devices\device_definitions.h"
#include "editor\editor_scenario_definitions.h"
#include "effects\camera_shake_definitions.h"
#include "effects\camo_effect_definition.h"
#include "effects\cheap_particle_system_definitions.h"
#include "effects\decal_definitions.h"
#include "effects\effect_definitions.h"
#include "effects\effect_globals.h"
#include "effects\effect_scenery_group.h"
#include "effects\effectglobalforces.h"
#include "effects\jetwash.h"
#include "effects\lens_flare_definitions.h"
#include "effects\light_volume_definitions.h"
#include "effects\lightcones.h"
#include "effects\material_effect_definitions.h"
#include "effects\modeldissolve.h"
#include "effects\particle_definitions.h"
#include "effects\particle_emitter_boat_hull_shapes.h"
#include "effects\particle_emitter_custom_shapes.h"
#include "effects\particle_model_definitions.h"
#include "effects\particle_movement_definitions.h"
#include "effects\particle_property_definitions.h"
#include "effects\particle_system_definitions.h"
#include "effects\particleize_definitions.h"
#include "effects\screen_effect.h"
#include "effects\shield_impact_definitions.h"
#include "effects\simulated_input.h"
#include "effects\tracerdefinitions.h"
#include "effects\vision_mode.h"
#include "entities\entitydefinition.h"
#include "entities\spawnerdefinition.h"
#include "errors\error_report_definitions.h"
#include "fx\fx_test_tag.h"
#include "game\armormod_definitions.h"
#include "game\campaign_metagame_definitions.h"
#include "game\challenges\challenge_definitions.h"
#include "game\firefight_globals.h"
#include "game\game.h"
#include "game\game_active_camo_globals.h"
#include "game\game_constants.h"
#include "game\game_controller_globals.h"
#include "game\game_coop_spawning_globals.h"
#include "game\game_damage_globals.h"
#include "game\game_difficulty_globals.h"
#include "game\game_engine_communication_sound_definitions.h"
#include "game\game_engine_event_definitions.h"
#include "game\game_engine_group.h"
#include "game\game_engine_multiplayer_sounds.h"
#include "game\game_engine_player_traits_definitions.h"
#include "game\game_engine_player_traits_structures.h"
#include "game\game_engine_roles.h"
#include "game\game_engine_spawn_settings.h"
#include "game\game_globals.h"
#include "game\game_mode_definitions.h"
#include "game\game_performance_throttle_definitions.h"
#include "game\game_player_globals.h"
#include "game\game_ui_globals.h"
#include "game\gameenginesandboxdefinitions.h"
#include "game\incidents\incident_definitions.h"
#include "game\incidents\incident_response_definition.h"
#include "game\loadout_definition.h"
#include "game\location_name_definitions.h"
#include "game\materials_definitions.h"
#include "game\megalogamengine\megalogamengine_effect_definitions.h"
#include "game\megalogamengine\megalogamengine_sound_definitions.h"
#include "game\megalogamengine\megalogamengine_string_id_table.h"
#include "game\multiplayer_definitions.h"
#include "game\multiplayer_object_list_definitions.h"
#include "game\narrativedefinitions.h"
#include "game\player_model_customization.h"
#include "game\player_rewards\game_completion_rewards_definitions.h"
#include "game\player_rewards\player_achievements.h"
#include "game\player_rewards\player_avatar_awards.h"
#include "game\player_rewards\player_commendation_definitions.h"
#include "game\player_rewards\player_cookie_definitions.h"
#include "game\player_rewards\player_cookie_purchase_definitions.h"
#include "game\player_rewards\player_grade_definitions.h"
#include "game\player_rewards\player_medals.h"
#include "game\player_rewards\playermedalaggregators.h"
#include "game\player_rewards\playerrewarddefinitions.h"
#include "game\player_rewards\prerequisites_definitions.h"
#include "game\player_rumble.h"
#include "game\player_training.h"
#include "game\progression\playerenlistmentdefinitions.h"
#include "game\progression\progression_definitions.h"
#include "game\silent_assist_definitions.h"
#include "game\survival_mode.h"
#include "game\variant_definitions.h"
#include "geometry\geometry_definitions.h"
#include "geometry\geometry_definitions_new.h"
#include "hs\hs_scenario_definitions.h"
#include "interface\chud\polyart\polyartbasedefinitions.h"
#include "interface\chud\polyart\polyartdefinitions.h"
#include "interface\chud\polyart\vectorartdefinitions.h"
#include "interface\components\hud\motionsensorbliplist.h"
#include "interface\controller_mapping_definitions.h"
#include "interface\cui\cui_definitions.h"
#include "interface\emblem\emblem_library.h"
#include "interface\hud\hudaudio.h"
#include "interface\meter_definitions.h"
#include "interface\stylesheetglobalsdefinitions.h"
#include "interface\user_interface_main_menu_voiceover.h"
#include "interface\user_interface_multiplayer_game_settings_group.h"
#include "interface\user_interface_widget_group.h"
#include "interface\userinterfacehudglobalsdefinitions.h"
#include "interface\vector_hud\vector_hud_definitions.h"
#include "items\airstrike_definitions.h"
#include "items\equipment_definitions.h"
#include "items\grenadeglobalsdefinitions.h"
#include "items\item_definitions.h"
#include "items\ordnanceglobalsdefinitions.h"
#include "items\projectile_definitions.h"
#include "items\weapon_definitions.h"
#include "lightmapper\lightmapper_globals.h"
#include "materials\material.h"
#include "materials\material_shader.h"
#include "materials\material_shader_bank.h"
#include "materials\material_shader_parameter.h"
#include "math\color_math.h"
#include "math\function_definitions.h"
#include "math\periodic_functions.h"
#include "models\damage_info_definitions.h"
#include "models\model_definitions.h"
#include "models\render_model_definitions.h"
#include "objects\cheap_light_definitions.h"
#include "objects\collision_damage_definitions.h"
#include "objects\crate_definitions.h"
#include "objects\damage_effect_definitions.h"
#include "objects\damage_reporting.h"
#include "objects\damage_response_definitions.h"
#include "objects\hologramlighting.h"
#include "objects\light_definitions.h"
#include "objects\midnight_light_definitions.h"
#include "objects\multiplayer_game_objects_constants.h"
#include "objects\object_definitions.h"
#include "objects\object_recycling.h"
#include "objects\scenery_group.h"
#include "objects\target_tracking.h"
#include "objects\widgets\antenna_definitions.h"
#include "objects\widgets\cellular_automata.h"
#include "objects\widgets\cellular_automata2d.h"
#include "objects\widgets\cloth.h"
#include "objects\widgets\fluid_dynamics.h"
#include "objects\widgets\leaf_system.h"
#include "objects\widgets\muffins.h"
#include "objects\widgets\stereo_system.h"
#include "physics\boat_engine_definitions.h"
#include "physics\boat_physics_definitions.h"
#include "physics\breakable_surface_set_definitions.h"
#include "physics\breakable_surfaces.h"
#include "physics\character_physics_definitions.h"
#include "physics\collision_bsp_definitions.h"
#include "physics\collision_bsp_physics_definitions.h"
#include "physics\collision_kd_hierarchy_static_definitions.h"
#include "physics\collision_model_definitions.h"
#include "physics\grounded_friction_definitions.h"
#include "physics\havok_collision_filter_definitions.h"
#include "physics\havok_mopp_code_definitions.h"
#include "physics\havok_vehicle_physics_definitions.h"
#include "physics\physics_model_definitions.h"
#include "physics\point_physics.h"
#include "physics\spring_acceleration_definitions.h"
#include "physics\walker_physics_definitions.h"
#include "physics\water_physics.h"
#include "rasterizer\rasterizer_cache_file_globals.h"
#include "rasterizer\rasterizer_constant_table.h"
#include "rasterizer\rasterizer_global_definitions.h"
#include "rasterizer\rasterizer_loading_screen_definitions.h"
#include "rasterizer\rasterizer_performance_throttles.h"
#include "rasterizer\rasterizer_shader_definitions.h"
#include "rasterizer\rasterizer_states.h"
#include "render\authoredlightprobe.h"
#include "render\camera_fx_settings.h"
#include "render\render_ssao.h"
#include "render\render_water_definitions.h"
#include "render_methods\mux_generator.h"
#include "render_methods\render_method_definitions.h"
#include "render_methods\render_method_types.h"
#include "scenario\multiplayer_scenario_description.h"
#include "scenario\scenario_cubemap_definitions.h"
#include "scenario\scenario_decorator_definitions.h"
#include "scenario\scenario_definitions.h"
#include "scenario\scenario_designer_zones_definitions.h"
#include "scenario\scenario_dumplings.h"
#include "scenario\scenario_interpolators.h"
#include "scenario\scenario_lightmap_definitions.h"
#include "scenario\scenario_load_parameters.h"
#include "scenario\scenario_map_variant_definitions.h"
#include "scenario\scenario_named_location_volumes.h"
#include "scenario\scenario_object_definitions.h"
#include "scenario\scenario_resource_definitions.h"
#include "scenario\scenario_zone_debugger_definitions.h"
#include "scenario\scenario_zone_set_streaming_cache.h"
#include "scenario\wind_definitions.h"
#include "simulation\game_interface\simulation_game_interpolation_definitions.h"
#include "sky_atm\atmosphere_definition.h"
#include "sky_atm\atmosphere_globals.h"
#include "sky_atm\planar_fog.h"
#include "sound\game_audibility.h"
#include "sound\looping_sound_definition.h"
#include "sound\looping_sound_detail_definition.h"
#include "sound\looping_sound_track_definition.h"
#include "sound\platform_sound_effect_definitions.h"
#include "sound\sound_acoustics_definitions.h"
#include "sound\sound_cache_file_definitions.h"
#include "sound\sound_classes.h"
#include "sound\sound_clusters.h"
#include "sound\sound_combiner_definition.h"
#include "sound\sound_definitions.h"
#include "sound\sound_dsp_settings_definitions.h"
#include "sound\sound_effect_definition.h"
#include "sound\sound_environment_definitions.h"
#include "sound\sound_language_definitions.h"
#include "sound\sound_scenery_group.h"
#include "structures\detail_object_definitions.h"
#include "structures\instance_imposter_definitions.h"
#include "structures\instanced_geometry_definitions.h"
#include "structures\leaf_map.h"
#include "structures\structure_bsp_definitions.h"
#include "structures\structure_design_definitions.h"
#include "structures\structure_lighting_definitions.h"
#include "structures\structure_manifest_definitions.h"
#include "structures\structure_object_associations.h"
#include "structures\structure_physics_definitions.h"
#include "structures\structure_seam_definitions.h"
#include "structures\structuremetadata.h"
#include "tag_files\self_tracking\file_self_track.h"
#include "tag_files\tag_dependency_definitions.h"
#include "tag_files\tag_group_definitions.h"
#include "text\font_list.h"
#include "text\text_group.h"
#include "units\biped_definitions.h"
#include "units\custom_apps\custom_app_globals.h"
#include "units\death_program_selection_definitions.h"
#include "units\dialogue_definitions.h"
#include "units\giant_definitions.h"
#include "units\unit_definitions.h"
#include "units\unit_trick_definitions.h"
#include "units\vehicle_definitions.h"
#include "units\vehicle_engine_definitions.h"
#include "weather\weather_control.h"
#include "weather\weather_definition.h"

namespace blofeld
{

	extern s_tag_group* tag_groups[262];
} // namespace blofeld


