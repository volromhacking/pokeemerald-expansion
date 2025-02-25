#ifndef GUARD_EXCAVATION_CONSTANTS

#define GUARD_EXCAVATION_CONSTANTS

#include "constants/items.h"
#include "gba/types.h"
#include "gba/defines.h"
#include "main.h"
#include "sprite.h"

/*********** OTHER ************/
#define SELECTED          0
#define DESELECTED        255
#define ITEM_TILE_NONE    0
#define ITEM_TILE_DUG_UP  5
#define MAX_NUM_BURIED_ITEMS 4
#define COUNT_MAX_NUMBER_STONES 2

/*********** ITEM SPRITE TAGS ************/
enum {
    TAG_ITEM_HEARTSCALE = 14,
    TAG_ITEM_HARDSTONE,
    TAG_ITEM_REVIVE,
    TAG_ITEM_STAR_PIECE,
    TAG_ITEM_DAMP_ROCK,
    TAG_ITEM_RED_SHARD,
    TAG_ITEM_BLUE_SHARD,
    TAG_ITEM_IRON_BALL,
    TAG_ITEM_REVIVE_MAX,
    TAG_ITEM_EVER_STONE,
    TAG_ITEM_OVAL_STONE,
    TAG_ITEM_LIGHT_CLAY,
    TAG_ITEM_HEAT_ROCK,
    TAG_ITEM_ICY_ROCK,     
    TAG_ITEM_SMOOTH_ROCK,
    TAG_ITEM_YELLOW_SHARD,   
    TAG_ITEM_GREEN_SHARD,  
    TAG_ITEM_LEAF_STONE,   
    TAG_ITEM_FIRE_STONE,    
    TAG_ITEM_WATER_STONE,
    TAG_ITEM_THUNDER_STONE,
    TAG_ITEM_MOON_STONE, 
    TAG_ITEM_SUN_STONE,  
    TAG_ITEM_ODD_KEY_STONE,  
    TAG_ITEM_SKULL_FOSSIL,  
    TAG_ITEM_ARMOR_FOSSIL,   

    TAG_STONE_1X4,
    TAG_STONE_4X1,
    TAG_STONE_2X4,
    TAG_STONE_4X2,
    TAG_STONE_2X2,
    TAG_STONE_3X3,
    TAG_STONE_SNAKE1,
    TAG_STONE_SNAKE2,
    TAG_STONE_MUSHROOM1,
    TAG_STONE_MUSHROOM2,
};

/*********** FLAGS ************/
#define FLAG_USE_DEFAULT_MESSAGE_BOX            FALSE

/*********** DEBUG FLAGS ************/
#define DEBUG_ENABLE_ITEM_GENERATION_OPTIONS    FALSE

enum {
    ITEMID_NONE,
    ID_STONE_1x4,
    ID_STONE_4x1,
    ID_STONE_2x4,
    ID_STONE_4x2,
    ID_STONE_2x2,
    ID_STONE_3x3,
    ID_STONE_SNAKE1,
    ID_STONE_SNAKE2,
    ID_STONE_MUSHROOM1,
    ID_STONE_MUSHROOM2,
    ITEMID_HEART_SCALE,
    ITEMID_HARD_STONE,
    ITEMID_REVIVE,
    ITEMID_STAR_PIECE,
    ITEMID_DAMP_ROCK,
    ITEMID_RED_SHARD,
    ITEMID_BLUE_SHARD,
    ITEMID_IRON_BALL,
    ITEMID_REVIVE_MAX,
    ITEMID_EVER_STONE,
    ITEMID_OVAL_STONE,
    ITEMID_LIGHT_CLAY,
    ITEMID_HEAT_ROCK,
    ITEMID_ICY_ROCK,
    ITEMID_SMOOTH_ROCK,
    ITEMID_YELLOW_SHARD,
    ITEMID_GREEN_SHARD,
    ITEMID_LEAF_STONE,
    ITEMID_FIRE_STONE,
    ITEMID_WATER_STONE,
    ITEMID_THUNDER_STONE,
    ITEMID_MOON_STONE,
    ITEMID_SUN_STONE,
    ITEMID_ODD_KEY_STONE,
    ITEMID_SKULL_FOSSIL,
    ITEMID_ARMOR_FOSSIL,   
};

#define COUNT_ID_STONE                  ID_STONE_MUSHROOM2

#define GRID_WIDTH 12
#define GRID_HEIGHT 8

#define ITEM_ZONE_1_X_LEFT_BOUNDARY     0
#define ITEM_ZONE_1_X_RIGHT_BOUNDARY    5
#define ITEM_ZONE_1_Y_UP_BOUNDARY       0
#define ITEM_ZONE_1_Y_DOWN_BOUNDARY     3

#define ITEM_ZONE_2_X_LEFT_BOUNDARY     0
#define ITEM_ZONE_2_X_RIGHT_BOUNDARY    5
#define ITEM_ZONE_2_Y_UP_BOUNDARY       4
#define ITEM_ZONE_2_Y_DOWN_BOUNDARY     GRID_HEIGHT - 1;

#define ITEM_ZONE_3_X_LEFT_BOUNDARY     6
#define ITEM_ZONE_3_X_RIGHT_BOUNDARY    GRID_WIDTH - 1
#define ITEM_ZONE_3_Y_UP_BOUNDARY       0
#define ITEM_ZONE_3_Y_DOWN_BOUNDARY     3

#define ITEM_ZONE_4_X_LEFT_BOUNDARY     6
#define ITEM_ZONE_4_X_RIGHT_BOUNDARY    GRID_WIDTH - 1
#define ITEM_ZONE_4_Y_UP_BOUNDARY       4
#define ITEM_ZONE_4_Y_DOWN_BOUNDARY     GRID_HEIGHT - 1

#endif
