#include "src/game/envfx_snow.h"

const GeoLayout boo_001_switch_opt1_switch_face_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_1___eye_half_v3_002_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_001_switch_opt1_switch_face_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_7___eye_X_v3_002_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_armature_002_switch_option_002[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_002_switch_option_head__no_cap__mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt1),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt2),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt3),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt4),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt5),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt6),
			GEO_BRANCH(1, boo_001_switch_opt1_switch_face_opt7),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout boo_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 70),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 26214),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_update_layer_transparency),
				GEO_SWITCH_CASE(2, geo_switch_anim_state),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_000_displaylist_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, boo_armature_002_switch_option_002),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, boo_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
