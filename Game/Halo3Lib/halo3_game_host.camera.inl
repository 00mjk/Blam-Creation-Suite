﻿
uintptr_t halo3_player_mapping_get_local_player_offset(e_engine_type engine_type, e_build build)
{
	OFFSET(_engine_type_halo3, _build_mcc_1_1629_0_0, 0x1802ACF20);
	OFFSET(_engine_type_halo3, _build_mcc_1_1698_0_0, 0x1802A74E0);
	OFFSET(_engine_type_halo3, _build_mcc_1_1716_0_0, 0x1802A74E0);
	// not available for builds 1767-1871
	return ~uintptr_t();
}
c_function_hook_ex<halo3_player_mapping_get_local_player_offset, int __stdcall ()> halo3_player_mapping_get_local_player;

uintptr_t halo3_observer_try_and_get_camera_offset(e_engine_type engine_type, e_build build)
{
	OFFSET(_engine_type_halo3, _build_mcc_1_1629_0_0, 0x18034C840);
	OFFSET(_engine_type_halo3, _build_mcc_1_1698_0_0, 0x180347260);
	OFFSET(_engine_type_halo3, _build_mcc_1_1716_0_0, 0x180347260);
	OFFSET(_engine_type_halo3, _build_mcc_1_1767_0_0, 0x1801EFAA0);
	OFFSET(_engine_type_halo3, _build_mcc_1_1778_0_0, 0x1801EFB90);
	OFFSET(_engine_type_halo3, _build_mcc_1_1792_0_0, 0x1801F0060);
	OFFSET(_engine_type_halo3, _build_mcc_1_1829_0_0, 0x1801F4CE0);
	OFFSET(_engine_type_halo3, _build_mcc_1_1864_0_0, 0x1801F4CE0);
	OFFSET(_engine_type_halo3, _build_mcc_1_1871_0_0, 0x1801F4CE0);
	return ~uintptr_t();
}
c_function_hook_ex<halo3_observer_try_and_get_camera_offset, s_observer_camera* __fastcall (signed int a1)> halo3_observer_try_and_get_camera;

std::vector<uintptr_t> halo3_enable_debug_hud_coordinates_offsets(e_engine_type engine_type, e_build build)
{
	OFFSET(_engine_type_halo3, _build_mcc_1_1629_0_0, 0x1802EEDC3, 0x1802EEDF2);
	OFFSET(_engine_type_halo3, _build_mcc_1_1698_0_0, 0x1802E9563, 0x1802E9592);
	OFFSET(_engine_type_halo3, _build_mcc_1_1716_0_0, 0x1802E9563, 0x1802E9592);
	// instructions skewed for builds 1767-1871
	return {};
}
// Enable debug hud coordinates, props to Exhibit
c_multi_data_patch<halo3_enable_debug_hud_coordinates_offsets> halo3_enable_debug_hud_coordinates = {
	[](e_engine_type engine_type, e_build build, char* data[], DataPatchPackets& packets)
	{
		packets.push_back(MAKE_DATAPATCHPACKET(data[0], 2));
		nop_address(data[0], 2);

		packets.push_back(MAKE_DATAPATCHPACKET(data[1], 6));
		nop_address(data[1], 6);

		debug_point;
	}
};