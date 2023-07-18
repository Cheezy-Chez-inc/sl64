#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/paintings.h"
#include "menu/debug_level_select.h"
#include "menu/intro_geo.h"

#include "make_const_nonconst.h"

#include "levels/intro/header.h"

#include "config.h"

extern Lights1 debug_f3dlite_material_lights;
extern Lights1 debug_f3dlite_material_005_lights;
extern Lights1 debug_f3dlite_material_004_lights;
extern Vtx debug_DrawCall_48_mesh_vtx_0[326];
extern Gfx debug_DrawCall_48_mesh_tri_0[];
extern Vtx debug_DrawCall_48_mesh_vtx_1[201];
extern Gfx debug_DrawCall_48_mesh_tri_1[];
extern Vtx debug_DrawCall_48_mesh_vtx_2[108];
extern Gfx debug_DrawCall_48_mesh_tri_2[];
extern Gfx mat_debug_f3dlite_material[];
extern Gfx mat_debug_f3dlite_material_005[];
extern Gfx mat_debug_f3dlite_material_004[];
extern Gfx debug_DrawCall_48_mesh[];


// 0x0E0002D0
const GeoLayout intro_geo_splash_screen[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(CAMERA_MODE_NONE, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geo_intro_super_mario_64_logo),
#if defined(FLOOMBAS) && defined(INTRO_FLOOMBAS)
               GEO_RENDER_OBJ(),
#endif
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_intro_tm_copyright),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E00035C
const GeoLayout intro_geo_mario_head_regular[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_regular_backdrop),
#ifdef GODDARD_EASTER_EGG
            GEO_ASM(0, geo_intro_face_easter_egg),
#endif
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
#ifdef KEEP_MARIO_HEAD
         GEO_OPEN_NODE(),
            GEO_ASM(2, geo_draw_mario_head_goddard),
         GEO_CLOSE_NODE(),
#endif
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E0003B8
const GeoLayout intro_geo_mario_head_dizzy[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_gameover_backdrop),
#ifdef GODDARD_EASTER_EGG
            GEO_ASM(0, geo_intro_face_easter_egg),
#endif
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
#ifdef KEEP_MARIO_HEAD
         GEO_OPEN_NODE(),
            GEO_ASM(3, geo_draw_mario_head_goddard),
         GEO_CLOSE_NODE(),
#endif
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E000414
const GeoLayout intro_geo_debug_level_select[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_CENTER_X, SCREEN_CENTER_Y, SCREEN_CENTER_X, SCREEN_CENTER_Y),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_regular_backdrop),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(CAMERA_MODE_NONE, 0, 0, 1200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE,  0, -50, 0, debug_DrawCall_48_mesh),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

