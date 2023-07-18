#include "src/game/envfx_snow.h"

const GeoLayout goomba_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 200, 70),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 2, 0, goomba_root_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_ALPHA, 0, 11, 0, goomba_billboard_mesh_layer_4),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 9, 19, 0, goomba_foot_L_mesh_layer_1),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -9, 19, 0, goomba_foot_R_mesh_layer_1),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, goomba_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, goomba_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
