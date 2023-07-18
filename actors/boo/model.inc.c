Lights1 boo_f3dlite_material_006_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 boo_f3dlite_material_008_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 boo_f3dlite_material_007_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x49, 0x49, 0x49);

Lights1 boo_f3dlite_material_004_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 boo_f3dlite_material_002_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 boo_f3dlite_material_003_lights = gdSPDefLights1(
	0x97, 0x9A, 0xFF,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 boo_face_1___eye_half_v3_002_lights = gdSPDefLights1(
	0x7F, 0x5F, 0x39,
	0xFE, 0xC1, 0x79, 0x28, 0x28, 0x28);

Lights1 boo_face_2___eye_closed_v3_002_lights = gdSPDefLights1(
	0x7F, 0x5F, 0x39,
	0xFE, 0xC1, 0x79, 0x28, 0x28, 0x28);

Lights1 boo_face_7___eye_X_v3_002_lights = gdSPDefLights1(
	0x7F, 0x5F, 0x39,
	0xFE, 0xC1, 0x79, 0x28, 0x28, 0x28);

Gfx boo_boo_mouth_rgba16_png_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_boo_mouth_rgba16_png_rgba16[] = {
	#include "actors/boo/boo_mouth_rgba16_png.rgba16.inc.c"
};

Gfx boo_boo_eyes_rgba16_png_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_boo_eyes_rgba16_png_rgba16[] = {
	#include "actors/boo/boo_eyes_rgba16_png.rgba16.inc.c"
};

Gfx boo_sad_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_sad_rgba16[] = {
	#include "actors/boo/sad.rgba16.inc.c"
};

Gfx boo_aaaa_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_aaaa_rgba16[] = {
	#include "actors/boo/aaaa.rgba16.inc.c"
};

Gfx boo_Mario_Eyes_Half_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_Mario_Eyes_Half_rgba16[] = {
	#include "actors/boo/Mario_Eyes_Half.rgba16.inc.c"
};

Gfx boo_Mario_Eyes_Closed_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_Mario_Eyes_Closed_rgba16[] = {
	#include "actors/boo/Mario_Eyes_Closed.rgba16.inc.c"
};

Gfx boo_Mario_Eyes_Dead_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 boo_Mario_Eyes_Dead_rgba16[] = {
	#include "actors/boo/Mario_Eyes_Dead.rgba16.inc.c"
};

Vtx boo_000_displaylist_mesh_layer_1_vtx_0[6] = {
	{{ {87, -78, 123}, 0, {1096, 684}, {78, 200, 83, 255} }},
	{{ {108, 20, 118}, 0, {1248, -172}, {91, 16, 87, 255} }},
	{{ {0, -47, 171}, 0, {458, 168}, {0, 232, 125, 255} }},
	{{ {0, -117, 131}, 0, {458, 990}, {0, 157, 80, 255} }},
	{{ {-86, -78, 123}, 0, {-176, 684}, {178, 200, 83, 255} }},
	{{ {-107, 20, 118}, 0, {-328, -172}, {165, 16, 87, 255} }},
};

Gfx boo_000_displaylist_mesh_layer_1_tri_0[] = {
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSPEndDisplayList(),
};

Vtx boo_000_displaylist_mesh_layer_1_vtx_1[62] = {
	{{ {108, 20, 118}, 0, {-8, 0}, {91, 16, 87, 255} }},
	{{ {87, -78, 123}, 0, {-8, 0}, {78, 200, 83, 255} }},
	{{ {156, 6, 33}, 0, {-8, 0}, {122, 22, 29, 255} }},
	{{ {136, -70, 23}, 0, {-8, 0}, {80, 167, 44, 255} }},
	{{ {73, -138, 30}, 0, {-8, 0}, {52, 141, 14, 255} }},
	{{ {0, -117, 131}, 0, {-8, 0}, {0, 157, 80, 255} }},
	{{ {-72, -138, 30}, 0, {-8, 0}, {204, 141, 14, 255} }},
	{{ {-86, -78, 123}, 0, {-8, 0}, {178, 200, 83, 255} }},
	{{ {-135, -70, 23}, 0, {-8, 0}, {176, 167, 44, 255} }},
	{{ {-155, 6, 33}, 0, {-8, 0}, {134, 22, 29, 255} }},
	{{ {-107, 20, 118}, 0, {-8, 0}, {165, 16, 87, 255} }},
	{{ {-199, -60, 25}, 0, {-8, 0}, {142, 220, 43, 255} }},
	{{ {-127, -69, -89}, 0, {-8, 0}, {154, 209, 197, 255} }},
	{{ {-121, 59, -94}, 0, {-8, 0}, {156, 46, 192, 255} }},
	{{ {-124, 99, 15}, 0, {-8, 0}, {152, 73, 7, 255} }},
	{{ {-41, 130, -88}, 0, {-8, 0}, {217, 103, 192, 255} }},
	{{ {-43, 162, 15}, 0, {-8, 0}, {219, 122, 0, 255} }},
	{{ {-41, 130, -88}, 0, {-8, 0}, {217, 103, 192, 255} }},
	{{ {-124, 99, 15}, 0, {-8, 0}, {152, 73, 7, 255} }},
	{{ {-57, 128, 108}, 0, {-8, 0}, {204, 90, 73, 255} }},
	{{ {-107, 20, 118}, 0, {-8, 0}, {165, 16, 87, 255} }},
	{{ {-155, 6, 33}, 0, {-8, 0}, {134, 21, 29, 255} }},
	{{ {44, 162, 15}, 0, {-8, 0}, {37, 122, 0, 255} }},
	{{ {58, 128, 108}, 0, {-8, 0}, {52, 90, 73, 255} }},
	{{ {0, 60, 166}, 0, {-8, 0}, {0, 37, 122, 255} }},
	{{ {125, 99, 15}, 0, {-8, 0}, {104, 73, 7, 255} }},
	{{ {42, 130, -88}, 0, {-8, 0}, {39, 103, 192, 255} }},
	{{ {122, 59, -94}, 0, {-8, 0}, {100, 46, 192, 255} }},
	{{ {156, 6, 33}, 0, {-8, 0}, {122, 22, 29, 255} }},
	{{ {128, -69, -89}, 0, {-8, 0}, {102, 209, 197, 255} }},
	{{ {200, -60, 25}, 0, {-8, 0}, {114, 220, 43, 255} }},
	{{ {136, -70, 23}, 0, {-8, 0}, {80, 167, 44, 255} }},
	{{ {136, -70, 23}, 0, {-8, 0}, {80, 167, 44, 255} }},
	{{ {73, -138, 30}, 0, {-8, 0}, {52, 141, 14, 255} }},
	{{ {128, -69, -89}, 0, {-8, 0}, {102, 209, 197, 255} }},
	{{ {60, -126, -86}, 0, {-8, 0}, {39, 142, 215, 255} }},
	{{ {-72, -138, 30}, 0, {-8, 0}, {204, 141, 14, 255} }},
	{{ {-59, -126, -86}, 0, {-8, 0}, {217, 142, 215, 255} }},
	{{ {-127, -69, -89}, 0, {-8, 0}, {154, 209, 197, 255} }},
	{{ {-135, -70, 23}, 0, {-8, 0}, {176, 167, 44, 255} }},
	{{ {-45, -82, -160}, 0, {-8, 0}, {209, 189, 159, 255} }},
	{{ {46, -82, -160}, 0, {-8, 0}, {47, 189, 159, 255} }},
	{{ {0, 24, -213}, 0, {-8, 0}, {0, 30, 133, 255} }},
	{{ {-121, 59, -94}, 0, {-8, 0}, {156, 46, 192, 255} }},
	{{ {0, 62, -162}, 0, {-8, 0}, {0, 95, 171, 255} }},
	{{ {122, 59, -94}, 0, {-8, 0}, {100, 46, 192, 255} }},
	{{ {42, 130, -88}, 0, {-8, 0}, {39, 103, 192, 255} }},
	{{ {-41, 130, -88}, 0, {-8, 0}, {217, 103, 192, 255} }},
	{{ {-41, 130, -88}, 0, {-8, 0}, {217, 103, 192, 255} }},
	{{ {-43, 162, 15}, 0, {-8, 0}, {219, 122, 0, 255} }},
	{{ {42, 130, -88}, 0, {-8, 0}, {39, 103, 192, 255} }},
	{{ {44, 162, 15}, 0, {-8, 0}, {37, 122, 0, 255} }},
	{{ {60, -126, -86}, 0, {-8, 0}, {39, 142, 215, 255} }},
	{{ {-59, -126, -86}, 0, {-8, 0}, {217, 142, 215, 255} }},
	{{ {46, -82, -160}, 0, {-8, 0}, {47, 189, 159, 255} }},
	{{ {128, -69, -89}, 0, {-8, 0}, {102, 209, 197, 255} }},
	{{ {122, 59, -94}, 0, {-8, 0}, {100, 46, 192, 255} }},
	{{ {0, 24, -213}, 0, {-8, 0}, {0, 30, 133, 255} }},
	{{ {108, 20, 118}, 0, {-8, 0}, {91, 16, 87, 255} }},
	{{ {125, 99, 15}, 0, {-8, 0}, {104, 73, 7, 255} }},
	{{ {58, 128, 108}, 0, {-8, 0}, {52, 90, 73, 255} }},
	{{ {156, 6, 33}, 0, {-8, 0}, {122, 21, 29, 255} }},
};

Gfx boo_000_displaylist_mesh_layer_1_tri_1[] = {
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(1, 5, 4, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(11, 8, 9, 0),
	gsSP1Triangle(11, 12, 8, 0),
	gsSP1Triangle(11, 9, 12, 0),
	gsSP1Triangle(13, 12, 9, 0),
	gsSP1Triangle(13, 9, 14, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(0, 3, 6, 0),
	gsSP1Triangle(7, 6, 3, 0),
	gsSP1Triangle(3, 8, 7, 0),
	gsSP1Triangle(9, 6, 7, 0),
	gsSP1Triangle(6, 9, 10, 0),
	gsSP1Triangle(11, 10, 9, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 2, 1, 0),
	gsSP1Triangle(4, 3, 1, 0),
	gsSP1Triangle(5, 3, 4, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(7, 6, 4, 0),
	gsSP1Triangle(8, 5, 6, 0),
	gsSP1Triangle(8, 9, 5, 0),
	gsSP1Triangle(10, 9, 8, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(6, 11, 8, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(12, 13, 10, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSP1Triangle(11, 15, 12, 0),
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_1 + 48, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSPEndDisplayList(),
};

Vtx boo_000_displaylist_mesh_layer_1_vtx_2[6] = {
	{{ {-107, 20, 118}, 0, {-656, 538}, {165, 16, 87, 255} }},
	{{ {0, 60, 166}, 0, {988, 148}, {0, 37, 122, 255} }},
	{{ {-57, 128, 108}, 0, {76, -690}, {204, 90, 73, 255} }},
	{{ {0, -47, 171}, 0, {1024, 1364}, {0, 232, 125, 255} }},
	{{ {108, 20, 118}, 0, {2660, 540}, {91, 16, 87, 255} }},
	{{ {58, 128, 108}, 0, {1852, -688}, {52, 90, 73, 255} }},
};

Gfx boo_000_displaylist_mesh_layer_1_tri_2[] = {
	gsSPVertex(boo_000_displaylist_mesh_layer_1_vtx_2 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSPEndDisplayList(),
};

Vtx boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_0[12] = {
	{{ {-159, -79, 98}, 0, {-82, 579}, {188, 180, 76, 255} }},
	{{ {-92, 16, 134}, 0, {360, -56}, {109, 62, 21, 255} }},
	{{ {-135, -61, 134}, 0, {78, 462}, {32, 157, 73, 255} }},
	{{ {-180, 19, 93}, 0, {-223, -77}, {163, 45, 74, 255} }},
	{{ {-73, -48, 146}, 0, {493, 371}, {0, 232, 125, 255} }},
	{{ {-73, -118, 106}, 0, {493, 839}, {0, 157, 80, 255} }},
	{{ {13, -79, 98}, 0, {1068, 579}, {70, 181, 75, 255} }},
	{{ {34, 19, 93}, 0, {1208, -77}, {96, 41, 73, 255} }},
	{{ {-51, 16, 134}, 0, {636, -56}, {147, 61, 21, 255} }},
	{{ {-7, -61, 134}, 0, {929, 462}, {230, 158, 77, 255} }},
	{{ {8, 11, 130}, 0, {1033, -23}, {55, 79, 83, 255} }},
	{{ {-150, 11, 130}, 0, {-26, -23}, {205, 80, 84, 255} }},
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_tri_0[] = {
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(7, 8, 10, 0),
	gsSP1Triangle(1, 3, 11, 0),
	gsSPEndDisplayList(),
};

Vtx boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1[93] = {
	{{ {-159, -79, 98}, 0, {4, -3}, {188, 180, 76, 255} }},
	{{ {-145, -139, 5}, 0, {4, -3}, {206, 140, 15, 255} }},
	{{ {-73, -118, 106}, 0, {4, -3}, {0, 157, 80, 255} }},
	{{ {-217, -71, -9}, 0, {4, -3}, {144, 196, 8, 255} }},
	{{ {-198, -31, 88}, 0, {4, -3}, {152, 235, 70, 255} }},
	{{ {-173, -14, 110}, 0, {4, -3}, {160, 0, 84, 255} }},
	{{ {-135, -61, 134}, 0, {4, -3}, {32, 157, 73, 255} }},
	{{ {-145, -13, 143}, 0, {4, -3}, {213, 1, 120, 255} }},
	{{ {-92, 16, 134}, 0, {4, -3}, {109, 62, 21, 255} }},
	{{ {-150, 11, 130}, 0, {4, -3}, {205, 80, 84, 255} }},
	{{ {-180, 19, 93}, 0, {4, -3}, {163, 45, 74, 255} }},
	{{ {-231, 5, 1}, 0, {4, -3}, {130, 13, 13, 255} }},
	{{ {-197, 98, -10}, 0, {4, -3}, {153, 74, 7, 255} }},
	{{ {-130, 127, 83}, 0, {4, -3}, {204, 90, 73, 255} }},
	{{ {-116, 161, -10}, 0, {4, -3}, {219, 122, 0, 255} }},
	{{ {-73, 147, 31}, 0, {4, -3}, {0, 120, 43, 255} }},
	{{ {-73, 127, 83}, 0, {4, -3}, {0, 104, 72, 255} }},
	{{ {-73, 147, 31}, 0, {4, -3}, {0, 120, 43, 255} }},
	{{ {-130, 127, 83}, 0, {4, -3}, {204, 90, 73, 255} }},
	{{ {-16, 127, 83}, 0, {4, -3}, {52, 90, 73, 255} }},
	{{ {-30, 161, -10}, 0, {4, -3}, {37, 122, 0, 255} }},
	{{ {51, 98, -10}, 0, {4, -3}, {103, 74, 7, 255} }},
	{{ {34, 19, 93}, 0, {4, -3}, {96, 41, 73, 255} }},
	{{ {86, 5, 1}, 0, {4, -3}, {126, 12, 15, 255} }},
	{{ {27, -14, 110}, 0, {4, -3}, {102, 252, 76, 255} }},
	{{ {8, 11, 130}, 0, {4, -3}, {55, 79, 83, 255} }},
	{{ {3, -13, 143}, 0, {4, -3}, {47, 1, 118, 255} }},
	{{ {-51, 16, 134}, 0, {4, -3}, {147, 61, 21, 255} }},
	{{ {-7, -61, 134}, 0, {4, -3}, {230, 158, 77, 255} }},
	{{ {13, -79, 98}, 0, {4, -3}, {70, 181, 75, 255} }},
	{{ {50, -31, 82}, 0, {4, -3}, {106, 230, 65, 255} }},
	{{ {72, -71, -9}, 0, {4, -3}, {112, 196, 9, 255} }},
	{{ {13, -79, 98}, 0, {4, -3}, {70, 181, 75, 255} }},
	{{ {-1, -139, 5}, 0, {4, -3}, {51, 141, 15, 255} }},
	{{ {72, -71, -9}, 0, {4, -3}, {112, 196, 9, 255} }},
	{{ {-73, -118, 106}, 0, {4, -3}, {0, 157, 80, 255} }},
	{{ {-73, -139, 5}, 0, {4, -3}, {0, 129, 6, 255} }},
	{{ {-145, -139, 5}, 0, {4, -3}, {206, 140, 15, 255} }},
	{{ {-73, -132, -58}, 0, {4, -3}, {0, 130, 243, 255} }},
	{{ {-132, -127, -111}, 0, {4, -3}, {217, 142, 215, 255} }},
	{{ {-200, -70, -114}, 0, {4, -3}, {152, 209, 199, 255} }},
	{{ {-217, -71, -9}, 0, {4, -3}, {144, 196, 8, 255} }},
	{{ {-231, 5, 1}, 0, {4, -3}, {130, 13, 13, 255} }},
	{{ {-198, -31, 88}, 0, {4, -3}, {152, 235, 70, 255} }},
	{{ {-173, -14, 110}, 0, {4, -3}, {160, 0, 84, 255} }},
	{{ {-194, 58, -119}, 0, {4, -3}, {158, 47, 191, 255} }},
	{{ {-118, -83, -185}, 0, {4, -3}, {196, 175, 179, 255} }},
	{{ {-73, -60, -260}, 0, {4, -3}, {0, 218, 135, 255} }},
	{{ {-73, 61, -187}, 0, {4, -3}, {0, 73, 152, 255} }},
	{{ {-73, -60, -260}, 0, {4, -3}, {0, 218, 135, 255} }},
	{{ {-194, 58, -119}, 0, {4, -3}, {158, 47, 191, 255} }},
	{{ {-114, 129, -113}, 0, {4, -3}, {217, 103, 192, 255} }},
	{{ {-197, 98, -10}, 0, {4, -3}, {153, 74, 7, 255} }},
	{{ {-231, 5, 1}, 0, {4, -3}, {130, 13, 13, 255} }},
	{{ {-116, 161, -10}, 0, {4, -3}, {219, 122, 0, 255} }},
	{{ {-73, 145, -62}, 0, {4, -3}, {0, 122, 219, 255} }},
	{{ {-73, 161, -10}, 0, {4, -3}, {0, 127, 3, 255} }},
	{{ {-73, 147, 31}, 0, {4, -3}, {0, 120, 43, 255} }},
	{{ {-30, 161, -10}, 0, {4, -3}, {37, 122, 0, 255} }},
	{{ {-32, 129, -113}, 0, {4, -3}, {39, 103, 192, 255} }},
	{{ {51, 98, -10}, 0, {4, -3}, {103, 74, 7, 255} }},
	{{ {48, 58, -119}, 0, {4, -3}, {98, 47, 191, 255} }},
	{{ {86, 5, 1}, 0, {4, -3}, {126, 12, 15, 255} }},
	{{ {54, -70, -114}, 0, {4, -3}, {104, 209, 199, 255} }},
	{{ {72, -71, -9}, 0, {4, -3}, {112, 196, 9, 255} }},
	{{ {54, -70, -114}, 0, {4, -3}, {104, 209, 199, 255} }},
	{{ {86, 5, 1}, 0, {4, -3}, {126, 12, 15, 255} }},
	{{ {50, -31, 82}, 0, {4, -3}, {106, 230, 65, 255} }},
	{{ {27, -14, 110}, 0, {4, -3}, {102, 252, 76, 255} }},
	{{ {-1, -139, 5}, 0, {4, -3}, {51, 141, 15, 255} }},
	{{ {-14, -127, -111}, 0, {4, -3}, {39, 142, 215, 255} }},
	{{ {-73, -132, -58}, 0, {4, -3}, {0, 130, 243, 255} }},
	{{ {-73, -139, 5}, 0, {4, -3}, {0, 129, 6, 255} }},
	{{ {-73, -127, -111}, 0, {4, -3}, {0, 135, 216, 255} }},
	{{ {-132, -127, -111}, 0, {4, -3}, {217, 142, 215, 255} }},
	{{ {-73, -102, -152}, 0, {4, -3}, {0, 147, 191, 255} }},
	{{ {-118, -83, -185}, 0, {4, -3}, {196, 175, 179, 255} }},
	{{ {-200, -70, -114}, 0, {4, -3}, {152, 209, 199, 255} }},
	{{ {-73, -83, -185}, 0, {4, -3}, {0, 140, 205, 255} }},
	{{ {-73, -60, -260}, 0, {4, -3}, {0, 218, 135, 255} }},
	{{ {-28, -83, -185}, 0, {4, -3}, {60, 175, 179, 255} }},
	{{ {-73, -83, -185}, 0, {4, -3}, {0, 140, 205, 255} }},
	{{ {-73, -60, -260}, 0, {4, -3}, {0, 218, 135, 255} }},
	{{ {48, 58, -119}, 0, {4, -3}, {98, 47, 191, 255} }},
	{{ {-73, 61, -187}, 0, {4, -3}, {0, 73, 152, 255} }},
	{{ {-32, 129, -113}, 0, {4, -3}, {39, 103, 192, 255} }},
	{{ {-73, 129, -113}, 0, {4, -3}, {0, 110, 193, 255} }},
	{{ {-114, 129, -113}, 0, {4, -3}, {217, 103, 192, 255} }},
	{{ {-73, 145, -62}, 0, {4, -3}, {0, 122, 219, 255} }},
	{{ {54, -70, -114}, 0, {4, -3}, {104, 209, 199, 255} }},
	{{ {-14, -127, -111}, 0, {4, -3}, {39, 142, 215, 255} }},
	{{ {-73, -102, -152}, 0, {4, -3}, {0, 147, 191, 255} }},
	{{ {-73, -127, -111}, 0, {4, -3}, {0, 135, 216, 255} }},
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_tri_1[] = {
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 0, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(10, 7, 9, 0),
	gsSP1Triangle(10, 5, 7, 0),
	gsSP1Triangle(5, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(13, 14, 12, 0),
	gsSP1Triangle(14, 13, 15, 0),
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 7, 6, 0),
	gsSP1Triangle(8, 6, 9, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 10, 12, 0),
	gsSP1Triangle(13, 8, 10, 0),
	gsSP1Triangle(14, 8, 13, 0),
	gsSP1Triangle(13, 15, 14, 0),
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(7, 6, 5, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSP1Triangle(9, 8, 5, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(12, 10, 11, 0),
	gsSP1Triangle(13, 8, 10, 0),
	gsSP1Triangle(8, 13, 14, 0),
	gsSP1Triangle(15, 14, 13, 0),
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(2, 5, 4, 0),
	gsSP1Triangle(6, 3, 4, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(10, 8, 9, 0),
	gsSP1Triangle(10, 7, 8, 0),
	gsSP1Triangle(11, 7, 10, 0),
	gsSP1Triangle(10, 12, 11, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(0, 5, 1, 0),
	gsSP1Triangle(6, 1, 5, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(5, 8, 7, 0),
	gsSP1Triangle(6, 7, 9, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(12, 14, 11, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_1 + 80, 13, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(4, 6, 5, 0),
	gsSP1Triangle(4, 7, 6, 0),
	gsSP1Triangle(7, 8, 6, 0),
	gsSP1Triangle(5, 6, 8, 0),
	gsSP1Triangle(9, 0, 3, 0),
	gsSP1Triangle(0, 9, 10, 0),
	gsSP1Triangle(0, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(0, 11, 1, 0),
	gsSPEndDisplayList(),
};

Vtx boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_2[7] = {
	{{ {-180, 19, 93}, 0, {-176, 602}, {163, 45, 74, 255} }},
	{{ {-73, 59, 141}, 0, {994, 156}, {0, 37, 122, 255} }},
	{{ {-130, 127, 83}, 0, {371, -603}, {204, 90, 73, 255} }},
	{{ {-73, -48, 146}, 0, {994, 1350}, {0, 232, 125, 255} }},
	{{ {34, 19, 93}, 0, {2164, 602}, {96, 41, 73, 255} }},
	{{ {-16, 127, 83}, 0, {1617, -603}, {52, 90, 73, 255} }},
	{{ {-73, 127, 83}, 0, {994, -603}, {0, 104, 72, 255} }},
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_tri_2[] = {
	gsSPVertex(boo_002_switch_option_head__no_cap__mesh_layer_1_vtx_2 + 0, 7, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 1, 3, 0),
	gsSP1Triangle(4, 5, 1, 0),
	gsSP1Triangle(5, 6, 1, 0),
	gsSP1Triangle(2, 1, 6, 0),
	gsSPEndDisplayList(),
};


Gfx mat_boo_f3dlite_material_006[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_006_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_boo_mouth_rgba16_png_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_f3dlite_material_008[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_008_lights),
	gsSPEndDisplayList(),
};

Gfx mat_boo_f3dlite_material_007[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_007_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_boo_eyes_rgba16_png_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_f3dlite_material_004[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_004_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_sad_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_boo_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_f3dlite_material_003_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_aaaa_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_face_1___eye_half_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_face_1___eye_half_v3_002_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_Mario_Eyes_Half_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_face_2___eye_closed_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_face_2___eye_closed_v3_002_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_Mario_Eyes_Closed_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_boo_face_7___eye_X_v3_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(boo_face_7___eye_X_v3_002_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, boo_Mario_Eyes_Dead_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx boo_000_displaylist_mesh_layer_1[] = {
	gsSPDisplayList(mat_boo_f3dlite_material_006),
	gsSPDisplayList(boo_000_displaylist_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_f3dlite_material_008),
	gsSPDisplayList(boo_000_displaylist_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_boo_f3dlite_material_007),
	gsSPDisplayList(boo_000_displaylist_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1[] = {
	gsSPDisplayList(mat_boo_f3dlite_material_004),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_f3dlite_material_002),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_1),
	gsSPDisplayList(mat_boo_f3dlite_material_003),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_1___eye_half_v3_002_0[] = {
	gsSPDisplayList(mat_boo_f3dlite_material_004),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_f3dlite_material_002),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_1),
	gsSPDisplayList(mat_boo_f3dlite_material_003),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_002_1[] = {
	gsSPDisplayList(mat_boo_f3dlite_material_004),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_f3dlite_material_002),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_1),
	gsSPDisplayList(mat_boo_f3dlite_material_003),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx boo_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_7___eye_X_v3_002_2[] = {
	gsSPDisplayList(mat_boo_f3dlite_material_004),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_0),
	gsSPDisplayList(mat_boo_f3dlite_material_002),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_1),
	gsSPDisplayList(mat_boo_f3dlite_material_003),
	gsSPDisplayList(boo_002_switch_option_head__no_cap__mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx boo_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

