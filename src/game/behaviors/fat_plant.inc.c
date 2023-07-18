// fishing_boo.inc.c

// Unused behavior file for the Fishing Boo enemy.
// The fire circles around mario and would make it
// hard for him to jump or platform.
// There is also a stubbed behavior script next to
// the scripts associated with this, indicating
// a removed object associated with this flame.


void bhv_fat_plant(void) {


    if (o->oDistanceToMario < 3000.0f) {
      cur_obj_init_animation_with_sound(FAT_PIRANHA_2);
    }

    if (o->oDistanceToMario < 900.0f) {
       struct Object *explosion = spawn_object(o, MODEL_EXPLOSION, bhvExplosion);
        explosion->oGraphYOffset += 100.0f;

    o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            
    }



}
