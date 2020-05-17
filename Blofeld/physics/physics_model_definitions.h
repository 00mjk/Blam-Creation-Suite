#pragma once

namespace blofeld
{

	extern const char* physics_material_flags_strings[];
	extern s_string_list_definition physics_material_flags;
	extern const char* PhantomFlagsV2_strings[];
	extern s_string_list_definition PhantomFlagsV2;
	extern const char* rigid_body_size_enum_strings[];
	extern s_string_list_definition rigid_body_size_enum;
	extern const char* physics_material_proxy_collision_groups_strings[];
	extern s_string_list_definition physics_material_proxy_collision_groups;
	extern const char* shape_enum_strings[];
	extern s_string_list_definition shape_enum;
	extern const char* physics_model_flags_strings[];
	extern s_string_list_definition physics_model_flags;
	extern const char* rigid_constraint_types_enum_strings[];
	extern s_string_list_definition rigid_constraint_types_enum;
	extern const char* physics_model_motor_types_enum_strings[];
	extern s_string_list_definition physics_model_motor_types_enum;
	extern const char* rigid_body_constraint_edge_constraint_flags_definition_strings[];
	extern s_string_list_definition rigid_body_constraint_edge_constraint_flags_definition;
	extern const char* nodes_flags_strings[];
	extern s_string_list_definition nodes_flags;
	extern const char* rigid_body_flags_strings[];
	extern s_string_list_definition rigid_body_flags;
	extern const char* rigid_body_motion_enum_strings[];
	extern s_string_list_definition rigid_body_motion_enum;
	extern const char* rigid_body_collision_quality_enum_strings[];
	extern s_string_list_definition rigid_body_collision_quality_enum;

	constexpr unsigned long PHYSICS_MODEL_TAG = 'phmo';

	extern s_tag_group physics_model_group;

	extern s_tag_block_definition physics_model_block_block;
	extern s_tag_struct spheres_block_block_struct;
	extern s_tag_block_definition spheres_block_block;
	extern s_tag_struct pills_block_block_struct;
	extern s_tag_block_definition pills_block_block;
	extern s_tag_struct lists_block_block_struct;
	extern s_tag_block_definition lists_block_block;
	extern s_tag_struct list_shapes_block_block_struct;
	extern s_tag_block_definition list_shapes_block_block;
	extern s_tag_struct physics_model_damped_spring_motor_block_block_struct;
	extern s_tag_block_definition physics_model_damped_spring_motor_block_block;
	extern s_tag_struct physics_model_position_motor_block_block_struct;
	extern s_tag_block_definition physics_model_position_motor_block_block;
	extern s_tag_struct phantom_types_block_block_struct;
	extern s_tag_block_definition phantom_types_block_block;
	extern s_tag_struct physics_model_powered_chains_block_block_struct;
	extern s_tag_block_definition physics_model_powered_chains_block_block;
	extern s_tag_struct physics_model_powered_chain_nodes_block_block_struct;
	extern s_tag_block_definition physics_model_powered_chain_nodes_block_block;
	extern s_tag_struct physics_model_powered_chain_constraints_block_block_struct;
	extern s_tag_block_definition physics_model_powered_chain_constraints_block_block;
	extern s_tag_struct physics_model_node_constraint_edge_block_block_struct;
	extern s_tag_block_definition physics_model_node_constraint_edge_block_block;
	extern s_tag_struct physics_model_constraint_edge_constraint_block_block_struct;
	extern s_tag_block_definition physics_model_constraint_edge_constraint_block_block;
	extern s_tag_struct physics_model_ragdoll_motors_block_block_struct;
	extern s_tag_block_definition physics_model_ragdoll_motors_block_block;
	extern s_tag_struct physics_model_limited_hinge_motors_block_block_struct;
	extern s_tag_block_definition physics_model_limited_hinge_motors_block_block;
	extern s_tag_struct rigid_bodies_block_block_struct;
	extern s_tag_block_definition rigid_bodies_block_block;
	extern s_tag_struct materials_block$3_block_struct;
	extern s_tag_block_definition materials_block$3_block;
	extern s_tag_struct multi_spheres_block_block_struct;
	extern s_tag_block_definition multi_spheres_block_block;
	extern s_tag_struct boxes_block_block_struct;
	extern s_tag_block_definition boxes_block_block;
	extern s_tag_struct triangles_block_block_struct;
	extern s_tag_block_definition triangles_block_block;
	extern s_tag_struct polyhedra_block_block_struct;
	extern s_tag_block_definition polyhedra_block_block;
	extern s_tag_struct polyhedron_four_vectors_block_block_struct;
	extern s_tag_block_definition polyhedron_four_vectors_block_block;
	extern s_tag_struct polyhedron_plane_equations_block_block_struct;
	extern s_tag_block_definition polyhedron_plane_equations_block_block;
	extern s_tag_struct mass_distributions_block_block_struct;
	extern s_tag_block_definition mass_distributions_block_block;
	extern s_tag_struct mopps_block_block_struct;
	extern s_tag_block_definition mopps_block_block;
	extern s_tag_struct hinge_constraints_block_block_struct;
	extern s_tag_block_definition hinge_constraints_block_block;
	extern s_tag_struct ragdoll_constraints_block_block_struct;
	extern s_tag_block_definition ragdoll_constraints_block_block;
	extern s_tag_struct regions_block_block_struct;
	extern s_tag_block_definition regions_block_block;
	extern s_tag_struct permutations_block_block_struct;
	extern s_tag_block_definition permutations_block_block;
	extern s_tag_struct rigid_body_indices_block_block_struct;
	extern s_tag_block_definition rigid_body_indices_block_block;
	extern s_tag_struct nodes_block_block_struct;
	extern s_tag_block_definition nodes_block_block;
	extern s_tag_struct point_to_path_curve_block_block_struct;
	extern s_tag_block_definition point_to_path_curve_block_block;
	extern s_tag_struct point_to_path_curve_point_block_block_struct;
	extern s_tag_block_definition point_to_path_curve_point_block_block;
	extern s_tag_struct limited_hinge_constraints_block_block_struct;
	extern s_tag_block_definition limited_hinge_constraints_block_block;
	extern s_tag_struct ball_and_socket_constraints_block_block_struct;
	extern s_tag_block_definition ball_and_socket_constraints_block_block;
	extern s_tag_struct stiff_spring_constraints_block_block_struct;
	extern s_tag_block_definition stiff_spring_constraints_block_block;
	extern s_tag_struct prismatic_constraints_block_block_struct;
	extern s_tag_block_definition prismatic_constraints_block_block;
	extern s_tag_struct phantoms_block_block_struct;
	extern s_tag_block_definition phantoms_block_block;
	extern s_tag_struct RigidBodySerializedShapesBlock_block_struct;
	extern s_tag_block_definition RigidBodySerializedShapesBlock_block;
	extern s_tag_struct MoppSerializedHavokDataBlock_block_struct;
	extern s_tag_block_definition MoppSerializedHavokDataBlock_block;

	extern s_tag_struct physics_model_struct_definition_struct_definition; // tag group
	extern s_tag_struct havok_primitive_struct_struct_definition;
	extern s_tag_struct havok_convex_shape_struct_struct_definition;
	extern s_tag_struct havok_shape_struct_struct_definition;
	extern s_tag_struct havok_convex_translate_shape_struct_struct_definition;
	extern s_tag_struct havok_shape_reference_struct_struct_definition;
	extern s_tag_struct havok_shape_collection_struct_2010_2_struct_definition;
	extern s_tag_struct havok_shape_struct_2010_2_struct_definition;
	extern s_tag_struct physics_model_motor_reference_struct_struct_definition;
	extern s_tag_struct havok_convex_transform_shape_struct_struct_definition;
	extern s_tag_struct havok_convex_shape_struct_2010_2_struct_definition;
	extern s_tag_struct constraint_bodies_struct_struct_definition;

} // namespace blofeld

