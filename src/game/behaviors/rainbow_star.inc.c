// cap.c.inc

static struct ObjectHitbox sRainbowStarHitbox = {
    /* interactType:      */ INTERACT_CAP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 0,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 80,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 90,
    /* hurtboxHeight:     */ 90,
};

s32 rainbow_star_set_hitbox(void) {
    obj_set_hitbox(o, &sRainbowStarHitbox);
    if (o->oInteractStatus & INT_STATUS_INTERACTED) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        o->oInteractStatus = 0;
        return 1;
    }

    return 0;
}





void bhv_rainbow_star_init(void) {
    o->oGravity = 0.7f;
    o->oFriction = 0.89f;
    o->oBuoyancy = 0.9f;
    o->oOpacity = 0xFF;
    o->oTimer = 0;
    o->oRed = 255;
    o->oGreen = 50;
    o->oBlue = 50;
    o->oAction = 0;
   
}


Gfx *set_switch_color(s32 run, struct GraphNode *node, UNUSED void *context) {
    Gfx *displayListStart = NULL;
    Gfx *displayList = NULL;

    if (run == GEO_CONTEXT_RENDER) {
        node->flags |= (LAYER_OPAQUE << 8);
        displayListStart = alloc_display_list(2 * sizeof(Gfx));
        displayList = displayListStart;
        gDPSetEnvColor(displayList++, /*color*/ ((struct Object *) gCurGraphNodeObject)->oRed,((struct Object *) gCurGraphNodeObject)->oGreen, ((struct Object *) gCurGraphNodeObject)->oBlue,255);
        gSPEndDisplayList(displayList);
    }
    return displayListStart;
}


void bhv_rainbow_star_loop(void) {
 
        switch (o->oAction) {
            //change to green
            case 0:
            if (o->oRed > 102) {
                o->oRed -= 3;
            }

            if (o->oGreen < 255) {
                o->oGreen += 3;
            }
            o->oBlue = 102;

            if (o->oGreen >= 255) {
                o->oGreen = 255;
                o->oAction = 1;
            }
            break;

        case 1:
            // change to blue
            if (o->oGreen > 102) {
                o->oGreen -= 3;
            }

            if (o->oBlue < 255) {
                o->oBlue += 3;
            }
            o->oRed = 102;

            if (o->oBlue >= 255) {
                o->oBlue = 255;
                o->oAction = 2;
            }
            break;
        


        case 2:
            // change back to red
            if (o->oBlue > 102) {
                o->oBlue -= 3;
            }

            if (o->oRed < 255) {
                o->oRed += 3;
            }
            o->oGreen = 102;

            if (o->oRed >= 255) {
                o->oRed = 255;
                o->oAction = 0;
            }
            break;
        }



  

    
    //gMarioState->numLives = o->oBlue;
    spawn_object(o, MODEL_SPARKLES, bhvSparkleParticleSpawner);
   // o->oFaceAngleYaw += 0x100;
    
    rainbow_star_set_hitbox();
}

//unused: makes the trail shrink

/*void bhv_rainbow_trail_loop(void) {
    o->oOpacity -= 57;
    o->header.gfx.scale[0]-= 0.08;
    o->header.gfx.scale[1] -= 0.08;
    o->header.gfx.scale[2]++;
     if (o->oOpacity <= 0) {
       // obj_mark_for_deletion(o);
    }

}
*/