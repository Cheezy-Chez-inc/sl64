

static struct ObjectHitbox sSkipsqueakHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 74,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 45,
    /* hurtboxHeight:     */ 41,
};


static u8 sSkipsqueakAttackHandlers[] = {
    /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_SQUISHED,
    /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_SQUISHED,
    /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_KNOCKBACK,
};


static struct ObjectHitbox sSpinySkipsqueakHitbox = {
    /* interactType:      */ INTERACT_MR_BLIZZARD,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 74,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 45,
    /* hurtboxHeight:     */ 41,
};

static u8 sSpinySkipsqueakAttackHandlers[] = {
    /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_NOP,
    /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_NOP,
    /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_KNOCKBACK,
    /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_KNOCKBACK,
};


void bhv_skipsqueak_init(void) {
    o->oGravity = 1.0f;
    o->oDrawingDistance = 2000.0f;
    o->oBuoyancy = 2.0f;
    //differtiates between regular, walking, spiny and spiny walking variants
    if (o->oBehParams2ndByte == 1 || o->oBehParams2ndByte == 3) {
                    cur_obj_init_animation_with_sound(2);
                } else {
                    cur_obj_init_animation_with_sound(0);
                }
                if (o->oBehParams2ndByte == 0 || o->oBehParams2ndByte == 1) {
                    obj_set_hitbox(o, &sSkipsqueakHitbox);
                } else {
                    obj_set_hitbox(o, &sSpinySkipsqueakHitbox);
                }
    o->oSkipsqueakJump = 0;



} 

static void skipsqueak_begin_jump(void) {

    cur_obj_play_sound_2(SOUND_OBJ_GOOMBA_ALERT);
    //JUMPHEIGHT
    o->oVelY = -43.0f;
   
}



static void skipsqueak_act_jump(void) {

    
    if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {

    } 
}




void bhv_skipsqueak_update(void) {
    if (o->oDistanceToMario < o->oDrawingDistance) {
        object_step();
      
        if (obj_update_standard_actions(1.0f)) {
            cur_obj_update_floor_and_walls();

            if (o->oSkipsqueakJump > 3) {

                if (o->oPosY <= o->oHomeY) {
                    o->oVelY = 0;
                    if (o->oBehParams2ndByte == 1 || o->oBehParams2ndByte == 3) {
                        cur_obj_init_animation_with_sound(2);
                    } else {
                        cur_obj_init_animation_with_sound(0);
                    }
                }
            }

            if (o->oSkipsqueakJump == 2 & o->oAction != OBJ_ACT_SQUISHED) {
                cur_obj_init_animation_with_sound(1);

                skipsqueak_begin_jump();
            } else {
            }


            //handles death
            if (obj_handle_attacks(&sSkipsqueakHitbox, o->oAction, sSkipsqueakAttackHandlers)) {
                create_sound_spawner(SOUND_OBJ_DYING_ENEMY1);
                o->oVelY = 0;
            }


            //start jumping when mario is in air
            if (mario_is_in_air_action()) {
   
                o->oSkipsqueakJump++;
                if (o->oSkipsqueakJump > 4) {
                    o->oSkipsqueakJump = 4;
                }
     
            } else {
                if (o->oPosY <= o->oHomeY && o->oSkipsqueakJump > 3) {
                    o->oSkipsqueakJump = 0;
                }
            }
            obj_handle_attacks(&sSkipsqueakHitbox, o->oAction, sSkipsqueakAttackHandlers);
        }
    }
}

