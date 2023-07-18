Lights1 transparent_star_transparent_star_body_001_lights = gdSPDefLights1(
	0x35, 0x4E, 0x69,
	0x71, 0xA1, 0xD4, 0x28, 0x28, 0x28);

Vtx transparent_star_transparent_star_mesh_layer_5_vtx_0[12] = {
	{{ {0, 2, -22}, 0, {-16, -16}, {0, 2, 129, 255} }},
	{{ {48, -50, 0}, 0, {-16, -16}, {86, 162, 0, 255} }},
	{{ {0, -32, 0}, 0, {-16, -16}, {0, 129, 0, 255} }},
	{{ {36, -11, 0}, 0, {-16, -16}, {125, 233, 0, 255} }},
	{{ {64, 21, 0}, 0, {-16, -16}, {120, 43, 0, 255} }},
	{{ {24, 25, 0}, 0, {-16, -16}, {55, 115, 0, 255} }},
	{{ {0, 62, 0}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {-24, 25, 0}, 0, {-16, -16}, {200, 114, 0, 255} }},
	{{ {-64, 21, 0}, 0, {-16, -16}, {136, 43, 0, 255} }},
	{{ {-36, -11, 0}, 0, {-16, -16}, {131, 233, 0, 255} }},
	{{ {-47, -50, 0}, 0, {-16, -16}, {170, 162, 0, 255} }},
	{{ {0, 2, 22}, 0, {-16, -16}, {0, 2, 127, 255} }},
};

Gfx transparent_star_transparent_star_mesh_layer_5_tri_0[] = {
	gsSPVertex(transparent_star_transparent_star_mesh_layer_5_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 0, 7, 6, 0),
	gsSP2Triangles(0, 8, 7, 0, 0, 9, 8, 0),
	gsSP2Triangles(0, 10, 9, 0, 0, 2, 10, 0),
	gsSP2Triangles(10, 2, 11, 0, 2, 1, 11, 0),
	gsSP2Triangles(1, 3, 11, 0, 11, 3, 4, 0),
	gsSP2Triangles(11, 4, 5, 0, 6, 11, 5, 0),
	gsSP2Triangles(6, 7, 11, 0, 7, 8, 11, 0),
	gsSP2Triangles(8, 9, 11, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};


Gfx mat_transparent_star_transparent_star_body_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0, SHADE, 0, SHADE, 0, PRIMITIVE, 0, PRIMITIVE, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 217, 248, 255, 178),
	gsSPSetLights1(transparent_star_transparent_star_body_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_transparent_star_transparent_star_body_001[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx transparent_star_transparent_star_mesh_layer_5[] = {
	gsSPDisplayList(mat_transparent_star_transparent_star_body_001),
	gsSPDisplayList(transparent_star_transparent_star_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_transparent_star_transparent_star_body_001),
	gsSPEndDisplayList(),
};

Gfx transparent_star_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

