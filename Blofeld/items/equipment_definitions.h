#pragma once

namespace blofeld
{

	extern const char* multiplayer_powerup_flavor_strings[];
	extern s_string_list_definition multiplayer_powerup_flavor;
	extern const char* equipment_spawner_spawn_type_strings[];
	extern s_string_list_definition equipment_spawner_spawn_type;
	extern const char* equipmentAbilityType_MotionTrackerNoise_flags_strings[];
	extern s_string_list_definition equipmentAbilityType_MotionTrackerNoise_flags;
	extern const char* equipmentAbilityType_treeoflife_flags_strings[];
	extern s_string_list_definition equipmentAbilityType_treeoflife_flags;
	extern const char* repulsor_field_flags_strings[];
	extern s_string_list_definition repulsor_field_flags;
	extern const char* equipmentAbilityTypeDaddyVisibleFlags_strings[];
	extern s_string_list_definition equipmentAbilityTypeDaddyVisibleFlags;
	extern const char* equipmentAbilityTypeJetPackFlags_strings[];
	extern s_string_list_definition equipmentAbilityTypeJetPackFlags;
	extern const char* equipmentAbilityTypeHologramFlags_strings[];
	extern s_string_list_definition equipmentAbilityTypeHologramFlags;
	extern const char* equipment_auto_turret_flags_strings[];
	extern s_string_list_definition equipment_auto_turret_flags;
	extern const char* equipment_remote_strike_flags_strings[];
	extern s_string_list_definition equipment_remote_strike_flags;
	extern const char* EquipmentSpecialMoveDefaultDirectionDefinition_strings[];
	extern s_string_list_definition EquipmentSpecialMoveDefaultDirectionDefinition;
	extern const char* equipment_engineer_shields_flags_strings[];
	extern s_string_list_definition equipment_engineer_shields_flags;
	extern const char* activeShieldFlags_strings[];
	extern s_string_list_definition activeShieldFlags;
	extern const char* teleporterFlags_strings[];
	extern s_string_list_definition teleporterFlags;
	extern const char* equipmentVisionModeFlags_strings[];
	extern s_string_list_definition equipmentVisionModeFlags;
	extern const char* equipmentHackerFlags_strings[];
	extern s_string_list_definition equipmentHackerFlags;
	extern const char* equipment_flags_strings[];
	extern s_string_list_definition equipment_flags;
	extern const char* equipment_activation_flags_strings[];
	extern s_string_list_definition equipment_activation_flags;
	extern const char* equipmentActivationSecondaryFlags_strings[];
	extern s_string_list_definition equipmentActivationSecondaryFlags;
	extern const char* equipment_activation_mode_strings[];
	extern s_string_list_definition equipment_activation_mode;
	extern const char* equipment_pickup_behavior_strings[];
	extern s_string_list_definition equipment_pickup_behavior;

	constexpr unsigned long EQUIPMENT_TAG = 'eqip';

	extern s_tag_group equipment_group;

	extern s_tag_block_definition equipment_block_block;
	extern s_tag_struct optionalUnitCameraBlock_block_struct;
	extern s_tag_block_definition optionalUnitCameraBlock_block;
	extern s_tag_struct equipmentAbilityDatum_block_struct;
	extern s_tag_block_definition equipmentAbilityDatum_block;
	extern s_tag_struct equipmentAbilityTypeMultiplayerPowerupBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeMultiplayerPowerupBlock_block;
	extern s_tag_struct equipmentAbilityTypeSpawnerBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSpawnerBlock_block;
	extern s_tag_struct equipmentAbilityTypeAiSpawnerBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeAiSpawnerBlock_block;
	extern s_tag_struct equipmentAbilityTypeProximityMineBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeProximityMineBlock_block;
	extern s_tag_struct equipmentAbilityTypeMotionTrackerNoiseBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeMotionTrackerNoiseBlock_block;
	extern s_tag_struct equipmentAbilityTypeInvincibilityBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeInvincibilityBlock_block;
	extern s_tag_struct equipmentEffectWithThresholdBlock_block_struct;
	extern s_tag_block_definition equipmentEffectWithThresholdBlock_block;
	extern s_tag_struct equipmentAbilityTypeTreeOfLifeBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeTreeOfLifeBlock_block;
	extern s_tag_struct equipmentAbilityTypeShapeshifterBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeShapeshifterBlock_block;
	extern s_tag_struct equipmentAbilityTypePlayerTraitFieldBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypePlayerTraitFieldBlock_block;
	extern s_tag_struct equipmentAbilityTypeAiTraitFieldBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeAiTraitFieldBlock_block;
	extern s_tag_struct aiEquipmentTraitsBlock_block_struct;
	extern s_tag_block_definition aiEquipmentTraitsBlock_block;
	extern s_tag_struct aiEquipmentTraitAppearanceBlock_block_struct;
	extern s_tag_block_definition aiEquipmentTraitAppearanceBlock_block;
	extern s_tag_struct equipmentAbilityTypeRepulsorFieldBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeRepulsorFieldBlock_block;
	extern s_tag_struct equipmentAbilityTypeStasisFieldBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeStasisFieldBlock_block;
	extern s_tag_struct equipmentAbilityTypeBallLightningBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeBallLightningBlock_block;
	extern s_tag_struct equipmentAbilityTypeDaddyBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeDaddyBlock_block;
	extern s_tag_struct equipmentAbilityTypeLaserDesignationBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeLaserDesignationBlock_block;
	extern s_tag_struct equipmentAbilityTypeSuperJumpBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSuperJumpBlock_block;
	extern s_tag_struct equipmentAbilityTypeAmmoPackBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeAmmoPackBlock_block;
	extern s_tag_struct equipmentAbilityTypePowerFistBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypePowerFistBlock_block;
	extern s_tag_struct equipmentAbilityTypeHealthPackBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeHealthPackBlock_block;
	extern s_tag_struct equipmentAbilityTypeJetPackBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeJetPackBlock_block;
	extern s_tag_struct equipmentAbilityPartCowCatcherBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityPartCowCatcherBlock_block;
	extern s_tag_struct equipmentAbilityTypeHologramBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeHologramBlock_block;
	extern s_tag_struct equipmentAbilityTypeSpecialWeaponBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSpecialWeaponBlock_block;
	extern s_tag_struct equipmentAbilityTypeSpecialMoveBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSpecialMoveBlock_block;
	extern s_tag_struct equipmentAbilityTypeEngineerShieldsBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeEngineerShieldsBlock_block;
	extern s_tag_struct equipmentAbilityTypeSprintBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSprintBlock_block;
	extern s_tag_struct equipmentAbilityTypeTeleporterBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeTeleporterBlock_block;
	extern s_tag_struct equipmentAbilityTypeAutoTurretBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeAutoTurretBlock_block;
	extern s_tag_struct equipmentAbilityTypeVisionModeBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeVisionModeBlock_block;
	extern s_tag_struct equipmentAbilityTypeShieldProjectorBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeShieldProjectorBlock_block;
	extern s_tag_struct equipmentAbilityTypeProjectileCollectorBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeProjectileCollectorBlock_block;
	extern s_tag_struct equipmentAbilityTypeRemoteStrikeBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeRemoteStrikeBlock_block;
	extern s_tag_struct equipmentAbilityTypeEquipmentHackerBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeEquipmentHackerBlock_block;
	extern s_tag_struct equipmentHackerDrainLevel_block_struct;
	extern s_tag_block_definition equipmentHackerDrainLevel_block;
	extern s_tag_struct equipmentAbilityTypeRemoteVehicleBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeRemoteVehicleBlock_block;
	extern s_tag_struct equipmentAbilityTypeSuicideBombBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeSuicideBombBlock_block;
	extern s_tag_struct equipmentAbilityTypeActiveShieldBlock_block_struct;
	extern s_tag_block_definition equipmentAbilityTypeActiveShieldBlock_block;
	extern s_tag_struct EquipmentSoundRTPCBlock_block_struct;
	extern s_tag_block_definition EquipmentSoundRTPCBlock_block;
	extern s_tag_struct EquipmentSoundSweetenerBlock_block_struct;
	extern s_tag_block_definition EquipmentSoundSweetenerBlock_block;

	extern s_tag_struct equipment_struct_definition_struct_definition; // tag group

} // namespace blofeld

