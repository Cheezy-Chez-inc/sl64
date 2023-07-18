#include "src/game/envfx_snow.h"

const GeoLayout metallic_ball_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 60),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, chain_ball_000_displaylist_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, chain_ball_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
