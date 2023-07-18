

static struct ObjectHitbox sCursyaHitbox = {
    /* interactType:      */ INTERACT_MR_BLIZZARD,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 34,
    /* height:            */ 110,
    /* hurtboxRadius:     */ 70,
    /* hurtboxHeight:     */ 100,
};


static u8 sCursyaAttackHandlers[] = {
    /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_NOP,
    /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_NOP,
    /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_KNOCKBACK,
};




void bhv_cursya_init(void) {
    o->oHomeX = o->oPosX;
    o->oHomeZ = o->oPosZ;
    o->oFriction = 0.9f;
    o->oGravity = 1.0f;
    o->oDrawingDistance = 2000.0f;
    o->oBuoyancy = 2.0f;
    o->oForwardVel = 0.0f;
      
      
    o->oCursyaScale = 70.0f;
    o->oCursyaScaleDirection = 0;
    cur_obj_init_animation_with_sound(0); 
    obj_set_hitbox(o, &sCursyaHitbox);
    o->oCursyaTimer = 0;

} 





static void cursya_act_wander(void) {

    treat_far_home_as_mario(1000.0f);
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x200);

    //use this if you want to make them turn faster and combine it with the code in cursya update
    //cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x800);

    
}

// rescales the cursya cursya when hit and initiates the back cursya and crashya effects
// the other cursya effects are stored in interaction.c
static void cursya_act_shake(void) {
    o->oCursyaTimer++;
    cur_obj_init_animation_with_accel_and_sound(0, 3.0f);
    cur_obj_play_sound_2(SOUND_MOVING_SHOCKED);
    if (o->oCursyaTimer == 1) {
        o->header.gfx.scale[0] = 1.0f;
        o->header.gfx.scale[1] = 1.0f;
    }
      if (o->oCursyaScaleDirection == 0) {
        o->header.gfx.scale[0] += sins(o->oCursyaScale) * 10.2;
          o->header.gfx.scale[1] += sins(o->oCursyaScale) * 10.2;
        if (o->header.gfx.scale[0] >= 1.15f) {

            o->oCursyaScaleDirection = 1;
        }
    }

    if (o->oCursyaScaleDirection == 1) {

        o->header.gfx.scale[0] -= sins(o->oCursyaScale) * 10.2;
        o->header.gfx.scale[1] -= sins(o->oCursyaScale) * 10.2;
        if (o->header.gfx.scale[0] <= 0.95f) {
            o->oCursyaScaleDirection = 0;
        }
    }
    // initiates the effects with a delay. the other code is stored in interaction.c
     if (o->oCursyaTimer >= 25) {
         //param 4 is back cursya
        if (o->oBehParams2ndByte == 4) {
            // initiates the level exit
            initiate_warp(LEVEL_CASTLE, 1, 0x1F, 0);
        }
        //param 5 is crashya
        if (o->oBehParams2ndByte == 5) {
            //crashes the game for the crashyas
           *(volatile int *)0 = 0;
        }
    }

    if (o->oCursyaTimer >= 80) {
        o->header.gfx.scale[0] = 1.0f;
        o->header.gfx.scale[1] = 1.0f;
        o->oAction = CURSYA_ACT_WANDER;
        o->oCursyaTimer = 0;
        cur_obj_init_animation_with_accel_and_sound(0, 1.0f);
    }

}




void bhv_cursya_update(void) {
    if (o->oDistanceToMario < o->oDrawingDistance) {

        //allows death with bob-omb
        if (o->oInteractStatus & INT_STATUS_TOUCHED_BOB_OMB) {
            obj_die_if_health_non_positive();
        }


        object_step();

        if (o->oAction != CURSYA_ACT_SHAKE) {

            //rescales the cursya ontop of the animation to give it a slime effect
            if (o->oCursyaScaleDirection == 0) {
                o->header.gfx.scale[0] += sins(o->oCursyaScale);
                o->header.gfx.scale[1] -= sins(o->oCursyaScale);
                if (o->header.gfx.scale[0] >= 1.1f) {

                    o->oCursyaScaleDirection = 1;
                }
            }

            if (o->oCursyaScaleDirection == 1) {

                o->header.gfx.scale[0] -= sins(o->oCursyaScale);
                o->header.gfx.scale[1] += sins(o->oCursyaScale);
                if (o->header.gfx.scale[0] <= 0.90f) {
                    o->oCursyaScaleDirection = 0;
                }

            }



            if (o->oDistanceToMario < 600.0f) {
                o->oAngleToMario = obj_angle_to_object(o, gMarioObject);
                o->oForwardVel = 6.0f;
                // combine this with the code of cursya_wander to make them super fast
                //o->oForwardVel = 30.0f;
            }
            else {
                o->oAngleToMario = cur_obj_angle_to_home();
                o->oForwardVel = 5.0f;
            }

            cursya_act_wander();
        }
        else {
            cursya_act_shake();
        }

        if (obj_handle_attacks(&sCursyaHitbox, CURSYA_ACT_SHAKE, sCursyaAttackHandlers)) {
            create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
            obj_die_if_health_non_positive();

        }

        //these went unused 
        // regular slow
        if (o->oBehParams2ndByte == 0) {

        }
        // reverse
        if (o->oBehParams2ndByte == 1) {

        }
        // tech
        if (o->oBehParams2ndByte == 2) {

        }
        // heavy
        if (o->oBehParams2ndByte == 3) {

        }
        // back
        if (o->oBehParams2ndByte == 4) {

        }

        // crash
        if (o->oBehParams2ndByte == 5) {

        }
    }
}
