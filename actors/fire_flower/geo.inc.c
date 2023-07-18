#include "src/game/envfx_snow.h"

const GeoLayout fire_flower_geo[] = {
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
						GEO_DISPLAY_LIST(LAYER_ALPHA, fire_flower_000_displaylist_mesh_layer_4),
						GEO_DISPLAY_LIST(LAYER_OPAQUE, fire_flower_000_displaylist_mesh_layer_1),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, fire_flower_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, fire_flower_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
