// fishing_boo.inc.c

// Unused behavior file for the Fishing Boo enemy.
// The fire circles around mario and would make it
// hard for him to jump or platform.
// There is also a stubbed behavior script next to
// the scripts associated with this, indicating
// a removed object associated with this flame.

void bhv_beta_moving_flames_spawn_loop(void) {
    o->oDistanceToMario = lateral_dist_between_objects(o, gMarioObject);
    o->oPosY -= 100.0f;

    switch (o->oAction) {

            spawn_object(o, MODEL_RED_FLAME, bhvBetaMovingFlames);
            o->oAction++;
            break;
    }
}

void bhv_beta_moving_flames_loop(void) {
    cur_obj_scale(5.0f);

    o->oForwardVel = sins(o->oMovingFlameTimer) * 70.0f;
    o->oMovingFlameTimer += 0x800;
}
