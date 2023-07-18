#include "src/game/envfx_snow.h"

const GeoLayout spindrift_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 32768),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, spindrift_000_offset_001_mesh_layer_4),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 100, 0, 0, spindrift_000_offset_002_mesh_layer_1),
						GEO_ANIMATED_PART(LAYER_ALPHA, 100, 0, 0, spindrift_001_offset_mesh_layer_4),
						GEO_ANIMATED_PART(LAYER_ALPHA, 100, 0, 0, spindrift_002_offset_mesh_layer_4),
						GEO_ANIMATED_PART(LAYER_OPAQUE, -88, -32, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, spindrift_000_offset_003_mesh_layer_1),
							GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, spindrift_001_offset_001_mesh_layer_4),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
					GEO_OPEN_NODE(),
						GEO_BILLBOARD_WITH_PARAMS(LAYER_FORCE, 0, 0, 0),
						GEO_OPEN_NODE(),
							GEO_DISPLAY_LIST(LAYER_ALPHA, spindrift_000_displaylist_mesh_layer_4),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
					GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, spindrift_004_offset_001_mesh_layer_4),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, spindrift_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spindrift_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
