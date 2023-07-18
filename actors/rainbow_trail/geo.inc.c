// 0x16000B10
const GeoLayout rainbow_trail_shadow_geo[] = {
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x50, 20),
   GEO_OPEN_NODE(),
      GEO_BRANCH_AND_LINK(red_trail_geo),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16000B2C
const GeoLayout red_trail_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_0301B3B0),  
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x16000B8C
const GeoLayout blue_trail_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
         GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_0301B500),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};



const GeoLayout green_trail_geo[] = {
   GEO_NODE_START(),
   GEO_OPEN_NODE(),
      GEO_SWITCH_CASE(8, geo_switch_anim_state),
      GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_0301B650),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};


const GeoLayout white_trail_geo[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
    GEO_SWITCH_CASE(8, geo_switch_anim_state),
    GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_white_texture),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};

const GeoLayout yellow_trail_geo[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
    GEO_SWITCH_CASE(8, geo_switch_anim_state),
    GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_yellow_texture),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout cyan_trail_geo[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
    GEO_SWITCH_CASE(8, geo_switch_anim_state),
    GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_cyan_texture),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};


const GeoLayout pink_trail_geo[] = {
    GEO_NODE_START(),
    GEO_OPEN_NODE(),
    GEO_SWITCH_CASE(8, geo_switch_anim_state),
    GEO_OPEN_NODE(),
    GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_trail_seg3_dl_pink_texture),
    GEO_CLOSE_NODE(),
    GEO_CLOSE_NODE(),
    GEO_END(),
};