/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/sdk/game/Common.h
 *  PURPOSE:     Grand Theft Auto: San Andreas game definitions
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <windows.h>
#include <stdint.h>

// Limits for MTA
#define MAX_VEHICLES_MTA                    64          // Real limit is 110
#define MAX_PEDS_MTA                        110         // Real limit is 140
#define MAX_OBJECTS_MTA                     1000        // Real limit is 1200
#define MAX_ENTRY_INFO_NODES_MTA            72000       // Real limit is 72600  ( MAX_OBJECTS_MTA * 72 ) [Large col models are the cause of high usage]
#define MAX_POINTER_SINGLE_LINKS_MTA        85000       // Real limit is 90000 [Large col models are the cause of high usage]
#define MAX_POINTER_DOUBLE_LINKS_MTA        74000       // Real limit is 74800  ( MAX_OBJECTS_MTA * 72 + 2000 )

// Real limits for GTA
#define MAX_VEHICLES                        ( MAX_VEHICLES_MTA + 46 )               // 110
#define MAX_PEDS                            ( MAX_PEDS_MTA + 30 )                   // 140
#define MAX_OBJECTS                         ( MAX_OBJECTS_MTA + 200 )               // 1200
#define MAX_BUILDINGS                       13000
#define MAX_DUMMIES                         2500
#define MAX_ENTRY_INFO_NODES                ( MAX_ENTRY_INFO_NODES_MTA + 600 )      // 72600
#define MAX_POINTER_SINGLE_LINKS            ( MAX_POINTER_SINGLE_LINKS_MTA + 5000 ) // 90000 May be changed in runtime
#define MAX_POINTER_DOUBLE_LINKS            ( MAX_POINTER_DOUBLE_LINKS_MTA + 800 )  // 74800
#define MAX_RWOBJECT_INSTANCES              2500

/**
 * Flags used to define weapon characteristics
 */
// aiming options
#define WEAPONTYPE_CANAIM           (0x000001)  // can auto target to aim
#define WEAPONTYPE_CANAIMWITHARM    (0x000002)  // only needs arm to aim
#define WEAPONTYPE_FIRSTPERSON      (0x000004)  // uses 1st person aim
#define WEAPONTYPE_CANFREEAIM       (0x000008)  // can only use free aiming

// movement options
#define WEAPONTYPE_MOVEAIM          (0x000010)  // can move and aim at same time
#define WEAPONTYPE_MOVEFIRE         (0x000020)  // can move and fire at same time

// basic characteristics
#define WEAPONTYPE_THROW            (0x000100)  // is a throwing weapon
#define WEAPONTYPE_HEAVY            (0x000200)  // heavy weapon - can't jump
#define WEAPONTYPE_CONTINUOUS_FIRE  (0x000400)  // fires every frame within loop (ie paint spray)
#define WEAPONTYPE_TWIN_PISTOLS     (0x000800)  // can use 2x guns at same time

// these are gun anim options
#define WEAPONTYPE_ANIM_RELOAD      (0x001000)  // weapon has reload anims
#define WEAPONTYPE_ANIM_CROUCHFIRE  (0x002000)  // weapon has crouching anims
#define WEAPONTYPE_RELOAD2LOOPSTART (0x004000)  // loop from end of reload to fire loop start
#define WEAPONTYPE_LONG_RELOAD_TIME (0x008000)  // force a longer reload time!

// these are area effect/shot options
#define WEAPONTYPE_SLOWS_DOWN       (0x010000)  //
#define WEAPONTYPE_RANDOM_SPEED     (0x020000)  //
#define WEAPONTYPE_FORCE_FINISH_ANIM (0x040000)  // force the anim to finish player after aim/fire rather than blending out
#define WEAPONTYPE_EXPANDS          (0x080000)  //

enum eRadarSprite
{
    RADAR_SPRITE_NONE = 0,
    RADAR_SPRITE_BORDER,
    RADAR_SPRITE_CENTRE,
    RADAR_SPRITE_MAP_HERE,
    RADAR_SPRITE_NORTH,

    RADAR_SPRITE_AIRYARD,
    RADAR_SPRITE_GUN,
    RADAR_SPRITE_BARBERS,
    RADAR_SPRITE_BIG_SMOKE,
    RADAR_SPRITE_BOATYARD,
    RADAR_SPRITE_BURGERSHOT,
    RADAR_SPRITE_BULLDOZER,
    RADAR_SPRITE_CAT_PINK,
    RADAR_SPRITE_CESAR,
    RADAR_SPRITE_CHICKEN,
    RADAR_SPRITE_CJ,
    RADAR_SPRITE_CRASH1,
    RADAR_SPRITE_DINER,
    RADAR_SPRITE_EMMETGUN,
    RADAR_SPRITE_ENEMYATTACK,
    RADAR_SPRITE_FIRE,
    RADAR_SPRITE_GIRLFRIEND,
    RADAR_SPRITE_HOSPITAL,
    RADAR_SPRITE_LOCO,
    RADAR_SPRITE_MADDOG,
    RADAR_SPRITE_MAFIA,
    RADAR_SPRITE_MCSTRAP,
    RADAR_SPRITE_MOD_GARAGE,
    RADAR_SPRITE_OGLOC,
    RADAR_SPRITE_PIZZA,
    RADAR_SPRITE_POLICE,
    RADAR_SPRITE_PROPERTY_GREEN,
    RADAR_SPRITE_PROPERTY_RED,
    RADAR_SPRITE_RACE,
    RADAR_SPRITE_RYDER,
    RADAR_SPRITE_SAVEHOUSE,
    RADAR_SPRITE_SCHOOL,
    RADAR_SPRITE_MYSTERY,
    RADAR_SPRITE_SWEET,
    RADAR_SPRITE_TATTOO,
    RADAR_SPRITE_TRUTH,
    RADAR_SPRITE_WAYPOINT,
    RADAR_SPRITE_TORENO_RANCH,
    RADAR_SPRITE_TRIADS,
    RADAR_SPRITE_TRIADS_CASINO,
    RADAR_SPRITE_TSHIRT,
    RADAR_SPRITE_WOOZIE,
    RADAR_SPRITE_ZERO,
    RADAR_SPRITE_DATE_DISCO,
    RADAR_SPRITE_DATE_DRINK,
    RADAR_SPRITE_DATE_FOOD,
    RADAR_SPRITE_TRUCK,
    RADAR_SPRITE_CASH,
    RADAR_SPRITE_FLAG,
    RADAR_SPRITE_GYM,
    RADAR_SPRITE_IMPOUND,
    RADAR_SPRITE_RUNWAY_LIGHT,
    RADAR_SPRITE_RUNWAY,
    RADAR_SPRITE_GANG_B,
    RADAR_SPRITE_GANG_P,
    RADAR_SPRITE_GANG_Y,
    RADAR_SPRITE_GANG_N,
    RADAR_SPRITE_GANG_G,
    RADAR_SPRITE_SPRAY
};

enum eWantedLevelSA
{
    WANTED_CLEAN = 0,
    WANTED_LEVEL1,
    WANTED_LEVEL2,
    WANTED_LEVEL3,
    WANTED_LEVEL4,
    WANTED_LEVEL5,
    WANTED_LEVEL6
};

#define WEAPONTYPE_CHAINGUN WEAPONTYPE_MINIGUN

enum eDoorState
{
    DOOR_NOTHING,
    DOOR_HIT_MAX_END,
    DOOR_HIT_MIN_END,
    DOOR_POP_OPEN,
    DOOR_SLAM_SHUT
};

enum eSystemState
{
    GS_START_UP,
    GS_INIT_LOGO_MPEG,
    GS_LOGO_MPEG,
    GS_INIT_INTRO_MPEG,
    GS_INTRO_MPEG,
    GS_INIT_ONCE,
    GS_INIT_FRONTEND,
    GS_FRONTEND,
    GS_INIT_PLAYING_GAME,
    GS_PLAYING_GAME
};

/**
 * Used to store the state of controls
 */
typedef struct eControlStatesSA
{
    DWORD dwFrontPad;
    WORD  wKeys1[19];
    DWORD dwFrontPad2;
    WORD  wKeys2[19];
    WORD  wTurnLeftRightAnalog[10];
    BYTE  bytePadding1[138];
    BYTE  byteCrouchAnalog[5];
    BYTE  byteIncrementer;
    BYTE  bytePadding2[15];
    DWORD dwKeyHeld;
} eControlStatesSA;

enum class VehicleClass : uint8_t
{
    AUTOMOBILE,
    MONSTER_TRUCK,
    QUAD,
    HELI,
    PLANE,
    BOAT,
    TRAIN,
    FAKE_HELI,
    FAKE_PLANE,
    BIKE,
    BMX,
    TRAILER,
};

enum eVehicleTypes
{
    VT_LANDSTAL = 400,
    VT_BRAVURA,
    VT_BUFFALO,
    VT_LINERUN,
    VT_PEREN,
    VT_SENTINEL,
    VT_DUMPER,
    VT_FIRETRUK,
    VT_TRASH,
    VT_STRETCH,
    VT_MANANA,
    VT_INFERNUS,
    VT_VOODOO,
    VT_PONY,
    VT_MULE,
    VT_CHEETAH,
    VT_AMBULAN,
    VT_LEVIATHN,
    VT_MOONBEAM,
    VT_ESPERANT,
    VT_TAXI,
    VT_WASHING,
    VT_BOBCAT,
    VT_MRWHOOP,
    VT_BFINJECT,
    VT_HUNTER,
    VT_PREMIER,
    VT_ENFORCER,
    VT_SECURICA,
    VT_BANSHEE,
    VT_PREDATOR,
    VT_BUS,
    VT_RHINO,
    VT_BARRACKS,
    VT_HOTKNIFE,
    VT_ARTICT1,
    VT_PREVION,
    VT_COACH,
    VT_CABBIE,
    VT_STALLION,
    VT_RUMPO,
    VT_RCBANDIT,
    VT_ROMERO,
    VT_PACKER,
    VT_MONSTER,
    VT_ADMIRAL,
    VT_SQUALO,
    VT_SEASPAR,
    VT_PIZZABOY,
    VT_TRAM,
    VT_ARTICT2,
    VT_TURISMO,
    VT_SPEEDER,
    VT_REEFER,
    VT_TROPIC,
    VT_FLATBED,
    VT_YANKEE,
    VT_CADDY,
    VT_SOLAIR,
    VT_TOPFUN,
    VT_SKIMMER,
    VT_PCJ600,
    VT_FAGGIO,
    VT_FREEWAY,
    VT_RCBARON,
    VT_RCRAIDER,
    VT_GLENDALE,
    VT_OCEANIC,
    VT_SANCHEZ,
    VT_SPARROW,
    VT_PATRIOT,
    VT_QUAD,
    VT_COASTG,
    VT_DINGHY,
    VT_HERMES,
    VT_SABRE,
    VT_RUSTLER,
    VT_ZR350,
    VT_WALTON,
    VT_REGINA,
    VT_COMET,
    VT_BMX,
    VT_BURRITO,
    VT_CAMPER,
    VT_MARQUIS,
    VT_BAGGAGE,
    VT_DOZER,
    VT_MAVERICK,
    VT_VCNMAV,
    VT_RANCHER,
    VT_FBIRANCH,
    VT_VIRGO,
    VT_GREENWOO,
    VT_JETMAX,
    VT_HOTRING,
    VT_SANDKING,
    VT_BLISTAC,
    VT_POLMAV,
    VT_BOXVILLE,
    VT_BENSON,
    VT_MESA,
    VT_RCGOBLIN,
    VT_HOTRINA,
    VT_HOTRINB,
    VT_BLOODRA,
    VT_RNCHLURE,
    VT_SUPERGT,
    VT_ELEGANT,
    VT_JOURNEY,
    VT_BIKE,
    VT_MTBIKE,
    VT_BEAGLE,
    VT_CROPDUST,
    VT_STUNT,
    VT_PETRO,
    VT_RDTRAIN,
    VT_NEBULA,
    VT_MAJESTIC,
    VT_BUCCANEE,
    VT_SHAMAL,
    VT_HYDRA,
    VT_FCR900,
    VT_NRG500,
    VT_COPBIKE,
    VT_CEMENT,
    VT_TOWTRUCK,
    VT_FORTUNE,
    VT_CADRONA,
    VT_FBITRUCK,
    VT_WILLARD,
    VT_FORKLIFT,
    VT_TRACTOR,
    VT_COMBINE,
    VT_FELTZER,
    VT_REMINGTN,
    VT_SLAMVAN,
    VT_BLADE,
    VT_FREIGHT,
    VT_STREAK,
    VT_VORTEX,
    VT_VINCENT,
    VT_BULLET,
    VT_CLOVER,
    VT_SADLER,
    VT_FIRELA,
    VT_HUSTLER,
    VT_INTRUDER,
    VT_PRIMO,
    VT_CARGOBOB,
    VT_TAMPA,
    VT_SUNRISE,
    VT_MERIT,
    VT_UTILITY,
    VT_NEVADA,
    VT_YOSEMITE,
    VT_WINDSOR,
    VT_MONSTERA,
    VT_MONSTERB,
    VT_URANUS,
    VT_JESTER,
    VT_SULTAN,
    VT_STRATUM,
    VT_ELEGY,
    VT_RAINDANC,
    VT_RCTIGER,
    VT_FLASH,
    VT_TAHOMA,
    VT_SAVANNA,
    VT_BANDITO,
    VT_FREIFLAT,
    VT_STREAKC,
    VT_KART,
    VT_MOWER,
    VT_DUNERIDE,
    VT_SWEEPER,
    VT_BROADWAY,
    VT_TORNADO,
    VT_AT400,
    VT_DFT30,
    VT_HUNTLEY,
    VT_STAFFORD,
    VT_BF400,
    VT_NEWSVAN,
    VT_TUG,
    VT_PETROTR,
    VT_EMPEROR,
    VT_WAYFARER,
    VT_EUROS,
    VT_HOTDOG,
    VT_CLUB,
    VT_FREIBOX,
    VT_ARTICT3,
    VT_ANDROM,
    VT_DODO,
    VT_RCCAM,
    VT_LAUNCH,
    VT_COPCARLA,
    VT_COPCARSF,
    VT_COPCARVG,
    VT_COPCARRU,
    VT_PICADOR,
    VT_SWATVAN,
    VT_ALPHA,
    VT_PHOENIX,
    VT_GLENSHIT,
    VT_SADLSHIT,
    VT_BAGBOXA,
    VT_BAGBOXB,
    VT_TUGSTAIR,
    VT_BOXBURG,
    VT_FARMTR1,
    VT_UTILTR1,
    VT_MAX
};

enum eHandlingTypes
{
    HT_LANDSTAL,
    HT_BRAVURA,
    HT_BUFFALO,
    HT_LINERUN,
    HT_PEREN,
    HT_SENTINEL,
    HT_DUMPER,
    HT_FIRETRUK,
    HT_TRASH,
    HT_STRETCH,
    HT_MANANA,
    HT_INFERNUS,
    HT_VOODOO,
    HT_PONY,
    HT_MULE,
    HT_CHEETAH,
    HT_AMBULAN,
    HT_MOONBEAM,
    HT_ESPERANT,
    HT_TAXI,
    HT_WASHING,
    HT_BOBCAT,
    HT_MRWHOOP,
    HT_BFINJECT,
    HT_PREMIER,
    HT_ENFORCER,
    HT_SECURICA,
    HT_BANSHEE,
    HT_BUS,
    HT_RHINO,
    HT_BARRACKS,
    HT_HOTKNIFE,
    HT_ARTICT1,
    HT_PREVION,
    HT_COACH,
    HT_CABBIE,
    HT_STALLION,
    HT_RUMPO,
    HT_RCBANDIT,
    HT_ROMERO,
    HT_PACKER,
    HT_MONSTER,
    HT_ADMIRAL,
    HT_TRAM,
    HT_AIRTRAIN,
    HT_ARTICT2,
    HT_TURISMO,
    HT_FLATBED,
    HT_YANKEE,
    HT_GOLFCART,
    HT_SOLAIR,
    HT_TOPFUN,
    HT_GLENDALE,
    HT_OCEANIC,
    HT_PATRIOT,
    HT_HERMES,
    HT_SABRE,
    HT_ZR350,
    HT_WALTON,
    HT_REGINA,
    HT_COMET,
    HT_BURRITO,
    HT_CAMPER,
    HT_BAGGAGE,
    HT_DOZER,
    HT_RANCHER,
    HT_FBIRANCH,
    HT_VIRGO,
    HT_GREENWOO,
    HT_HOTRING,
    HT_SANDKING,
    HT_BLISTAC,
    HT_BOXVILLE,
    HT_BENSON,
    HT_MESA,
    HT_BLOODRA,
    HT_BLOODRB,
    HT_SUPERGT,
    HT_ELEGANT,
    HT_JOURNEY,
    HT_PETROL,
    HT_RDTRAIN,
    HT_NEBULA,
    HT_MAJESTIC,
    HT_BUCCANEE,
    HT_CEMENT,
    HT_TOWTRUCK,
    HT_FORTUNE,
    HT_CADRONA,
    HT_FBITRUCK,
    HT_WILLARD,
    HT_FORKLIFT,
    HT_TRACTOR,
    HT_COMBINE,
    HT_FELTZER,
    HT_REMINGTN,
    HT_SLAMVAN,
    HT_BLADE,
    HT_FREIGHT,
    HT_STREAK,
    HT_VINCENT,
    HT_BULLET,
    HT_CLOVER,
    HT_SADLER,
    HT_RANGER,
    HT_HUSTLER,
    HT_INTRUDER,
    HT_PRIMO,
    HT_TAMPA,
    HT_SUNRISE,
    HT_MERIT,
    HT_UTILITY,
    HT_YOSEMITE,
    HT_WINDSOR,
    HT_MTRUCK_A,
    HT_MTRUCK_B,
    HT_URANUS,
    HT_JESTER,
    HT_SULTAN,
    HT_STRATUM,
    HT_ELEGY,
    HT_RCTIGER,
    HT_FLASH,
    HT_TAHOMA,
    HT_SAVANNA,
    HT_BANDITO,
    HT_FREIFLAT,
    HT_CSTREAK,
    HT_KART,
    HT_MOWER,
    HT_DUNE,
    HT_SWEEPER,
    HT_BROADWAY,
    HT_TORNADO,
    HT_DFT30,
    HT_HUNTLEY,
    HT_STAFFORD,
    HT_NEWSVAN,
    HT_TUG,
    HT_PETROTR,
    HT_EMPEROR,
    HT_FLOAT,
    HT_EUROS,
    HT_HOTDOG,
    HT_CLUB,
    HT_ARTICT3,
    HT_RCCAM,
    HT_POLICE_LA,
    HT_POLICE_SF,
    HT_POLICE_VG,
    HT_POLRANGER,
    HT_PICADOR,
    HT_SWATVAN,
    HT_ALPHA,
    HT_PHOENIX,
    HT_BAGBOXA,
    HT_BAGBOXB,
    HT_STAIRS,
    HT_BOXBURG,
    HT_FARM_TR1,
    HT_UTIL_TR1,
    HT_ROLLER,
    HT_BIKE,
    HT_PIZZABOY,
    HT_DIRTBIKE,
    HT_FCR900,
    HT_NRG500,
    HT_HPV1000,
    HT_BF400,
    HT_WAYFARER,
    HT_QUADBIKE,
    HT_BMX,
    HT_CHOPPERB,
    HT_MTB,
    HT_FREEWAY,
    HT_PREDATOR,
    HT_SPEEDER,
    HT_REEFER,
    HT_RIO,
    HT_SQUALO,
    HT_TROPIC,
    HT_COASTGRD,
    HT_DINGHY,
    HT_MARQUIS,
    HT_CUPBOAT,
    HT_LAUNCH,
    HT_SEAPLANE,
    HT_VORTEX,
    HT_RUSTLER,
    HT_BEAGLE,
    HT_CROPDUST,
    HT_STUNT,
    HT_SHAMAL,
    HT_HYDRA,
    HT_NEVADA,
    HT_AT400,
    HT_ANDROM,
    HT_DODO,
    HT_SPARROW,
    HT_SEASPAR,
    HT_MAVERICK,
    HT_COASTMAV,
    HT_POLMAV,
    HT_HUNTER,
    HT_LEVIATHN,
    HT_CARGOBOB,
    HT_RAINDANC,
    HT_RCBARON,
    HT_RCGOBLIN,
    HT_RCRAIDER,
    HT_HOTRINA,
    HT_HOTRINB,
    HT_SADLSHIT,
    HT_GLENSHIT,
    HT_FAGGIO,
    HT_FIRELA,
    HT_RNCHLURE,
    HT_FREIBOX,
    HT_MAX
};

enum VehHandlingFlags
{
    HF_1GEAR_BOOST = 0x00000001,
    HF_2GEAR_BOOST = 0x00000002,
    HF_NPC_ANTI_ROLL = 0x00000004,
    HF_NPC_NEUTRAL_HANDLING = 0x00000008,

    HF_NO_HANDBRAKE = 0x00000010,
    HF_STEER_REARWHEELS = 0x00000020,
    HF_HANDBRAKE_REARWHEELSTEER = 0x00000040,
    HF_ALT_STEERING_OPTION = 0x00000080,

    HF_WHEEL_F_NARROW_X2 = 0x00000100,
    HF_WHEEL_F_NARROW = 0x00000200,
    HF_WHEEL_F_WIDE = 0x00000400,
    HF_WHEEL_F_WIDE_X2 = 0x00000800,

    HF_WHEEL_R_NARROW_X2 = 0x00001000,
    HF_WHEEL_R_NARROW = 0x00002000,
    HF_WHEEL_R_WIDE = 0x00004000,
    HF_WHEEL_R_WIDE_X2 = 0x00008000,

    HF_HYDRAULICS_GEOMETRY = 0x00010000,
    HF_HYDRAULICS_INSTALLED = 0x00020000,
    HF_HYDRAULICS_NOT_AVAILABLE = 0x00040000,
    HF_NOS_INSTALLED = 0x00080000,

    HF_OFFROAD_ABILITIES = 0x00100000,
    HF_OFFROAD_ABILITIES_X2 = 0x00200000,
    HF_HALOGEN_LIGHTS = 0x00400000,
    HF_PROCESS_REARWHEEL_1ST = 0x00800000,

    HF_USE_TOPSPEED_LIMIT = 0x01000000,
    HF_LOW_RIDER = 0x02000000,
    HF_STREET_RACER = 0x04000000,

    HF_SWINGING_CHASSIS = 0x10000000,

    HF_LAST_AVAILABLE_FLAG = 0x80000000
};

enum VehModelFlags
{
    MF_IS_VAN = 0x00000001,
    MF_IS_BUS = 0x00000002,
    MF_IS_LOW = 0x00000004,
    MF_IS_BIG = 0x00000008,

    MF_REVERSE_BONNET = 0x00000010,
    MF_HANGING_BOOT = 0x00000020,
    MF_TAILGATE_BOOT = 0x00000040,
    MF_NOSWING_BOOT = 0x00000080,

    MF_NO_DOORS = 0x00000100,
    MF_TANDEM_SEATING = 0x00000200,
    MF_SIT_IN_BOAT = 0x00000400,
    MF_CONVERTIBLE = 0x00000800,

    MF_NO_EXHAUST = 0x00001000,
    MF_DOUBLE_EXHAUST = 0x00002000,
    MF_NO_1STPERSON_LOOKBEHIND = 0x00004000,
    MF_FORCE_DOORS_CHECK = 0x00008000,

    MF_AXLE_F_NOTILT = 0x00010000,
    MF_AXLE_F_SOLID = 0x00020000,
    MF_AXLE_F_MCPHERSON = 0x00040000,
    MF_AXLE_F_REVERSETILT = 0x00080000,

    MF_AXLE_R_NOTILT = 0x00100000,
    MF_AXLE_R_SOLID = 0x00200000,
    MF_AXLE_R_MCPHERSON = 0x00400000,
    MF_AXLE_R_REVERSETILT = 0x00800000,

    // these are tempory, will be integrated into vehicle type (probably)
    MF_IS_BIKE = 0x01000000,
    MF_IS_HELI = 0x02000000,
    MF_IS_PLANE = 0x04000000,
    MF_IS_BOAT = 0x08000000,

    MF_NO_PANEL_BOUNCING = 0x10000000,
    MF_DOUBLE_REAR_WHEELS = 0x20000000,
    // this is a tempory flag to ensure ground clearance until the model gets changed
    MF_FORCE_GRND_CLEARANCE = 0x40000000,
    //  MF_SUICIDE_REAR_DOORS   = 0x80000000,

    MF_IS_HATCHBACK = 0x80000000            // has window in boot that is pointing upwards (render order thing)
};

/**
 * Use to refer to types of weather, most in CWeather
 */
enum eWeather
{
    WEATHER_SUNNY = 0,
    WEATHER_CLOUDY,
    WEATHER_RAINY,
    WEATHER_FOGGY,
    WEATHER_VERY_SUNNY,
    WEATHER_VERY_RAINY,
    WEATHER_INSIDE
};

enum e3DMarkerType
{
    MARKER3D_ARROW,
    MARKER3D_CYLINDER2,
    MARKER3D_TUBE,
    MARKER3D_ARROW2,
    MARKER3D_TORUS,
    MARKER3D_CONE,
    MARKER3D_CONE_NO_COLLISION,
    MARKER3D_NUM
};

enum eMarkerSprite
{
    MARKER_SPRITE_NONE = 0,
    MARKER_SPRITE_BORDER,
    MARKER_SPRITE_CENTRE,
    MARKER_SPRITE_MAP_HERE,
    MARKER_SPRITE_NORTH,

    MARKER_SPRITE_AIRYARD,
    MARKER_SPRITE_GUN,
    MARKER_SPRITE_BARBERS,
    MARKER_SPRITE_BIG_SMOKE,
    MARKER_SPRITE_BOATYARD,
    MARKER_SPRITE_BURGERSHOT,
    MARKER_SPRITE_BULLDOZER,
    MARKER_SPRITE_CAT_PINK,
    MARKER_SPRITE_CESAR,
    MARKER_SPRITE_CHICKEN,
    MARKER_SPRITE_CJ,
    MARKER_SPRITE_CRASH1,
    MARKER_SPRITE_DINER,
    MARKER_SPRITE_EMMETGUN,
    MARKER_SPRITE_ENEMYATTACK,
    MARKER_SPRITE_FIRE,
    MARKER_SPRITE_GIRLFRIEND,
    MARKER_SPRITE_HOSPITAL,
    MARKER_SPRITE_LOCO,
    MARKER_SPRITE_MADDOG,
    MARKER_SPRITE_MAFIA,
    MARKER_SPRITE_MCSTRAP,
    MARKER_SPRITE_MOD_GARAGE,
    MARKER_SPRITE_OGLOC,
    MARKER_SPRITE_PIZZA,
    MARKER_SPRITE_POLICE,
    MARKER_SPRITE_PROPERTY_GREEN,
    MARKER_SPRITE_PROPERTY_RED,
    MARKER_SPRITE_RACE,
    MARKER_SPRITE_RYDER,
    MARKER_SPRITE_SAVEHOUSE,
    MARKER_SPRITE_SCHOOL,
    MARKER_SPRITE_MYSTERY,
    MARKER_SPRITE_SWEET,
    MARKER_SPRITE_TATTOO,
    MARKER_SPRITE_TRUTH,
    MARKER_SPRITE_WAYPOINT,
    MARKER_SPRITE_TORENO_RANCH,
    MARKER_SPRITE_TRIADS,
    MARKER_SPRITE_TRIADS_CASINO,
    MARKER_SPRITE_TSHIRT,
    MARKER_SPRITE_WOOZIE,
    MARKER_SPRITE_ZERO,
    MARKER_SPRITE_DATE_DISCO,
    MARKER_SPRITE_DATE_DRINK,
    MARKER_SPRITE_DATE_FOOD,
    MARKER_SPRITE_TRUCK,
    MARKER_SPRITE_CASH,
    MARKER_SPRITE_FLAG,
    MARKER_SPRITE_GYM,
    MARKER_SPRITE_IMPOUND,
    MARKER_SPRITE_RUNWAY_LIGHT,
    MARKER_SPRITE_RUNWAY,
    MARKER_SPRITE_GANG_B,
    MARKER_SPRITE_GANG_P,
    MARKER_SPRITE_GANG_Y,
    MARKER_SPRITE_GANG_N,
    MARKER_SPRITE_GANG_G,
    MARKER_SPRITE_SPRAY
};

/**
 * Used to decide how the marker is displayed in-game and on the radar
 */
enum eMarkerDisplay            // R*'s eMARKER_DISPLAY
{
    MARKER_DISPLAY_NEITHER = 0,            //  BLIPDISPLAY_NEITHER
    MARKER_DISPLAY_MARKERONLY,             //  BLIPDISPLAY_MARKERONLY
    MARKER_DISPLAY_BLIPONLY,               //  MARKER_DISPLAY_BLIPONLY
    MARKER_DISPLAY_BOTH                    //  BLIPDISPLAY_BOTH
};

enum eMarkerType
{
    MARKER_TYPE_UNUSED,
    MARKER_TYPE_CAR,
    MARKER_TYPE_CHAR,
    MARKER_TYPE_OBJECT,
    MARKER_TYPE_COORDS,
    MARKER_TYPE_CONTACT,
    MARKER_TYPE_SEARCHLIGHT,
    MARKER_TYPE_PICKUP,
    MARKER_TYPE_AIRSTRIP
};

enum eMarkerColor
{
    MARKER_COLOR_PLUM = 0,
    MARKER_COLOR_PALE_GREEN,
    MARKER_COLOR_PALE_BLUE,
    MARKER_COLOR_PALE_GREY,
    MARKER_COLOR_YELLOW,
    MARKER_COLOR_PINK,
    MARKER_COLOR_TURQUOISE,
    MARKER_COLOR_RED,
    MARKER_COLOR_BLUE,
    MARKER_COLOR_GREY,
    MARKER_COLOR_DARK_PINK,
    MARKER_COLOR_DARK_TURQUOISE,
};

enum ePickupState
{
    PUSTATE_ON,
    PUSTATE_OFF
};

enum ePickupType
{
    PICKUP_NONE,
    PICKUP_IN_SHOP,
    PICKUP_ON_STREET,
    PICKUP_ONCE,
    PICKUP_ONCE_TIMEOUT,
    PICKUP_ONCE_TIMEOUT_SLOW,
    PICKUP_COLLECTABLE1,
    PICKUP_IN_SHOP_OUT_OF_STOCK,
    PICKUP_MONEY,
    PICKUP_MINE_INACTIVE,
    PICKUP_MINE_ARMED,
    PICKUP_NAUTICAL_MINE_INACTIVE,
    PICKUP_NAUTICAL_MINE_ARMED,
    PICKUP_FLOATINGPACKAGE,
    PICKUP_FLOATINGPACKAGE_FLOATING,
    PICKUP_ON_STREET_SLOW,
    PICKUP_ASSET_REVENUE,
    PICKUP_PROPERTY_LOCKED,
    PICKUP_PROPERTY_FORSALE,
    PICKUP_MONEY_DOESNTDISAPPEAR,
    PICKUP_SNAPSHOT,
    PICKUP_2P,
    PICKUP_ONCE_FOR_MISSION
};

enum eDoorsSA
{

};

enum ePanelsSA
{

};

typedef int eEventEntity;

enum eEventType
{
    EVENT_NULL = 0,
    EVENT_ASSAULT,
    EVENT_RUN_REDLIGHT,
    EVENT_ASSAULT_POLICE,
    EVENT_GUNSHOT,
    EVENT_INJURED_PED,
    EVENT_DEAD_PED,
    EVENT_FIRE,
    EVENT_STEAL_CAR,
    EVENT_HIT_AND_RUN,
    EVENT_HIT_AND_RUN_COP,
    EVENT_SHOOT_PED,
    EVENT_SHOOT_COP,
    EVENT_EXPLOSION,
    EVENT_PED_SET_ON_FIRE,
    EVENT_COP_SET_ON_FIRE,
    EVENT_CAR_SET_ON_FIRE,
    EVENT_ASSAULT_NASTYWEAPON,
    EVENT_ASSAULT_NASTYWEAPON_POLICE,
    // extra eventy - not strictly 'events' but used to notice interesting stuff
    EVENT_ICECREAM,             /////
    EVENT_ATM,                  //  // queue for these 3
    EVENT_SHOPSTALL,            /////
    EVENT_SHOPWINDOW,
    EVENT_LAST_EVENT
};

enum eEventEntityType
{
    ENTITY_EVENT_PED = 0,
    ENTITY_EVENT_VEHICLE,
    ENTITY_EVENT_OBJECT
};

enum eCoronaType
{
    CORONATYPE_SHINYSTAR,
    CORONATYPE_HEADLIGHT,
    CORONATYPE_MOON,
    CORONATYPE_REFLECTION,
    CORONATYPE_HEADLIGHTLINE,
    CORONATYPE_HEX,
    CORONATYPE_CIRCLE,
    CORONATYPE_RING,
    CORONATYPE_STREAK,
    CORONATYPE_TORUS,
    CORONATYPE_NONE
};

enum eCoronaFlareTypeSA
{
    FLARETYPE_NONE,
    FLARETYPE_SUN,
    FLARETYPE_HEADLIGHTS
};

enum eCoronaLosCheckSA            // These should not be changed without changing stuff in ProcessLightsForEntity
{
    LOSCHECK_OFF = 0,
    LOSCHECK_ON
};

enum eCoronaSpecialSA
{
    SPECIALCORONA_NONE,
    SPECIALCORONA_SUNCORE,
    SPECIALCORONA_SUNCORONA,
    SPECIALCORONA_SUNMOON
};

enum eCoronaUnkSA
{
    CORREFL_NONE,
    CORREFL_SIMPLE
};

enum eCoronaTrailSA
{
    TRAIL_OFF,
    TRAIL_ON
};

enum ePedType
{
    PEDTYPE_PLAYER1 = 0,
    PEDTYPE_PLAYER2,                   // 2nd player in single player game (using 2nd pad)
    PEDTYPE_PLAYER_NETWORK,            // Player controlled over the network (not by this machine)
    PEDTYPE_PLAYER_UNUSED,             // Not used at the moment
    PEDTYPE_CIVMALE,
    PEDTYPE_CIVFEMALE,
    PEDTYPE_COP,
    PEDTYPE_GANG1,            // 8bits
    PEDTYPE_GANG2,
    PEDTYPE_GANG3,
    PEDTYPE_GANG4,
    PEDTYPE_GANG5,
    PEDTYPE_GANG6,
    PEDTYPE_GANG7,
    PEDTYPE_GANG8,
    PEDTYPE_GANG9,            // 16bits
    PEDTYPE_GANG10,
    PEDTYPE_DEALER,
    PEDTYPE_MEDIC,
    PEDTYPE_FIRE,
    PEDTYPE_CRIMINAL,
    PEDTYPE_BUM,
    PEDTYPE_PROSTITUTE,
    PEDTYPE_SPECIAL,            // 24bits
    PEDTYPE_MISSION1,
    PEDTYPE_MISSION2,
    PEDTYPE_MISSION3,
    PEDTYPE_MISSION4,
    PEDTYPE_MISSION5,
    PEDTYPE_MISSION6,
    PEDTYPE_MISSION7,
    PEDTYPE_MISSION8,            // 32bits
    // WE'RE USING BIT-FLAGS FOR PED AQUANTANCES
    // SO 32 IS THE MAX NUMBER OF PED TYPES WE CAN HAVE!!!!
    PEDTYPE_LAST_PEDTYPE
};

enum ePedState
{
    PED_NONE = 0,
    PED_IDLE,
    PED_LOOK_ENTITY,
    PED_LOOK_HEADING,
    PED_WANDER_RANGE,
    PED_WANDER_PATH,
    PED_SEEK_POSITION,
    PED_SEEK_ENTITY,
    PED_FLEE_POSITION,
    PED_FLEE_ENTITY,
    PED_PURSUE,
    PED_FOLLOW_PATH,
    PED_SNIPER_MODE,
    PED_ROCKETLAUNCHER_MODE,
    PED_DUMMY,
    PED_PAUSE,
    PED_ATTACK,
    PED_FIGHT,            // new close combat fist fight mode
    PED_FACE_PHONE,
    PED_MAKE_PHONECALL,
    PED_CHAT,
    PED_MUG,
    PED_AIMGUN,
    PED_AI_CONTROL,
    PED_SEEK_CAR,            // 24
    PED_SEEK_BOAT_POSITION,
    PED_FOLLOW_ROUTE,
    PED_CPR,
    PED_SOLICIT,
    PED_BUY_ICE_CREAM,
    PED_INVESTIGATE_EVENT,
    PED_EVADE_STEP,
    PED_ON_FIRE,
    PED_SUNBATHE,
    PED_FLASH,
    PED_JOG,
    PED_ANSWER_MOBILE,
    PED_HANG_OUT,
    PED_STATES_NO_AI,            // only put states after here that do not require AI, put other ones before this
    PED_ABSEIL_FROM_HELI,
    PED_SIT,
    PED_JUMP,
    PED_FALL,
    PED_GETUP,
    PED_STAGGER,
    PED_EVADE_DIVE,
    PED_STATES_CAN_SHOOT,            // only put states before here than ped can be shot during
    PED_ENTER_TRAIN,
    PED_EXIT_TRAIN,
    PED_ARREST_PLAYER,
    PED_DRIVING,            // 50
    PED_PASSENGER,
    PED_TAXI_PASSENGER,
    PED_OPEN_DOOR,
    PED_DIE,
    PED_DEAD,
    PED_CARJACK,
    PED_DRAGGED_FROM_CAR,
    PED_ENTER_CAR,
    PED_STEAL_CAR,
    PED_EXIT_CAR,
    PED_HANDS_UP,
    PED_ARRESTED,
    PED_DEPLOY_STINGER,

    PED_NUM_STATES
};

enum eMoveState
{
    PEDMOVE_NONE = 0,
    PEDMOVE_STILL,
    PEDMOVE_TURN_L,
    PEDMOVE_TURN_R,
    PEDMOVE_WALK,
    // #ifdef GTA_MIAMI
    PEDMOVE_JOG,
    // #endif
    PEDMOVE_RUN,
    PEDMOVE_SPRINT
};
/*
enum eMoveStateVC
{
    PEDMOVE_NONE,
    PEDMOVE_STILL,
    PEDMOVE_WALK,
    PEDMOVE_JOG,
    PEDMOVE_RUN,
    PEDMOVE_SPRINT,
    PEDMOVE_THROWN
};*/

enum eObjective
{
    NO_OBJ = 0,            // 0
    WAIT_ON_FOOT,
    WAIT_ON_FOOT_FOR_COP,
    FLEE_ON_FOOT_TILL_SAFE,
    GUARD_SPOT,
    GUARD_AREA,
    WAIT_IN_CAR,
    WAIT_IN_CAR_THEN_GET_OUT,
    KILL_CHAR_ON_FOOT,
    KILL_CHAR_ANY_MEANS,
    FLEE_CHAR_ON_FOOT_TILL_SAFE,            // 10
    FLEE_CHAR_ON_FOOT_ALWAYS,
    GOTO_CHAR_ON_FOOT,
    GOTO_CHAR_ON_FOOT_WALKING,
    HASSLE_CHAR,
    FOLLOW_CHAR_IN_FORMATION,
    LEAVE_CAR,
    ENTER_CAR_AS_PASSENGER,
    ENTER_CAR_AS_DRIVER,
    FOLLOW_CAR_IN_CAR,
    FIRE_AT_OBJECT_FROM_VEHICLE,            // 20
    DESTROY_OBJECT,
    DESTROY_CAR,
    GOTO_AREA_ANY_MEANS,
    GOTO_AREA_ON_FOOT,
    RUN_TO_AREA,
    GOTO_AREA_IN_CAR,
    FOLLOW_CAR_ON_FOOT_WITH_OFFSET,
    GUARD_ATTACK,
    SET_LEADER,
    FOLLOW_ROUTE,            // 30
    SOLICIT_VEHICLE,
    HAIL_TAXI,
    CATCH_TRAIN,
    BUY_ICE_CREAM,
    STEAL_ANY_CAR,
    STEAL_ANY_MISSION_CAR,
    MUG_CHAR,
    LEAVE_CAR_AND_DIE,
    GOTO_SEAT_ON_FOOT,
    GOTO_ATM_ON_FOOT,            // 40
    FLEE_CAR,
    SUN_BATHE,
    GOTO_BUS_STOP_ON_FOOT,
    GOTO_PIZZA_ON_FOOT,
    GOTO_SHELTER_ON_FOOT,
    AIM_GUN_AT,
    WANDER,
    WAIT_ON_FOOT_AT_SHELTER,
    SPRINT_TO_AREA,
    KILL_CHAR_ON_BOAT,            // 50
    SOLICIT_FOOT,
    WAIT_ON_FOOT_AT_BUS_STOP,
    GOTO_ICE_CREAM_VAN_ON_FOOT,
    WAIT_ON_FOOT_AT_ICE_CREAM_VAN            // 54
};

enum eWaitState
{
    PEDWAIT_FALSE = 0,            // 0
    PEDWAIT_TRAFFIC_LIGHTS,
    PEDWAIT_CROSS_ROAD,
    PEDWAIT_CROSS_ROAD_LOOK,
    PEDWAIT_LOOK_PED,
    PEDWAIT_LOOK_SHOP,
    PEDWAIT_LOOK_ACCIDENT,
    PEDWAIT_FACEOFF_GANG,
    PEDWAIT_DOUBLEBACK,
    PEDWAIT_HITWALL,
    PEDWAIT_TURN180,            // 10
    PEDWAIT_SURPRISE,
    PEDWAIT_STUCK,
    PEDWAIT_LOOK_ABOUT,
    PEDWAIT_PLAYANIM_DUCK,
    PEDWAIT_PLAYANIM_COWER,
    PEDWAIT_PLAYANIM_TAXI,
    PEDWAIT_PLAYANIM_HANDSUP,
    PEDWAIT_PLAYANIM_HANDSCOWER,
    PEDWAIT_PLAYANIM_CHAT,
    PEDWAIT_FINISH_FLEE,            // 20
    PEDWAIT_SIT_DOWN,
    PEDWAIT_SIT_DOWN_RVRS,
    PEDWAIT_SIT_UP,
    PEDWAIT_SIT_IDLE,
    PEDWAIT_USE_ATM,
    PEDWAIT_SUN_BATHE_PRE,
    PEDWAIT_SUN_BATHE_DOWN,
    PEDWAIT_SUN_BATHE_IDLE,
    PEDWAIT_RIOT,
    PEDWAIT_FAST_FALL,            // 30
    PEDWAIT_BOMBER,
    PEDWAIT_STRIPPER,
    PEDWAIT_GROUND_ATTACK,
    PEDWAIT_LANCESITTING,
    PEDWAIT_PLAYANIM_HANDSUP_SIMPLE            // 35
};

enum eTireState
{
    TIRE_STATE_NORMAL = 0,
    TIRE_STATE_BURST
};

enum ePedVehicleAction
{
    VEHICLE_ACTION_GETOUT = 16,
    VEHICLE_ACTION_GETINASPASSENGER,
    VEHICLE_ACTION_GETINASDRIVER
};

enum eInVehicleCameraMode
{
    IN_VEHICLE_CAMERA_MODE_CLOSE = 1,
    IN_VEHICLE_CAMERA_MODE_MIDDLE,
    IN_VEHICLE_CAMERA_MODE_FAR,
    IN_VEHICLE_CAMERA_MODE_FIXED,
    IN_VEHICLE_CAMERA_MODE_CINEMATIC
};

enum
{
    FADING_OUT = 0,
    FADING_IN,
    NOT_FADING
};
enum
{
    CLEAR_SCREEN = 0,
    IN_MIDDLE_OF_FADING,
    DARK_SCREEN
};
enum
{
    NO_ONE = 0,
    SCRIPT_CAM_CONTROL,
    OBBE_CAM_CONTROL
};

enum eHandlingProperty
{
    HANDLING_MASS = 1,
    HANDLING_TURNMASS,
    HANDLING_DRAGCOEFF,
    HANDLING_CENTEROFMASS,
    HANDLING_PERCENTSUBMERGED,
    HANDLING_TRACTIONMULTIPLIER,
    HANDLING_DRIVETYPE,
    HANDLING_ENGINETYPE,
    HANDLING_NUMOFGEARS,
    HANDLING_ENGINEACCELERATION,
    HANDLING_ENGINEINERTIA,
    HANDLING_MAXVELOCITY,
    HANDLING_BRAKEDECELERATION,
    HANDLING_BRAKEBIAS,
    HANDLING_ABS,
    HANDLING_STEERINGLOCK,
    HANDLING_TRACTIONLOSS,
    HANDLING_TRACTIONBIAS,
    HANDLING_SUSPENSION_FORCELEVEL,
    HANDLING_SUSPENSION_DAMPING,
    HANDLING_SUSPENSION_HIGHSPEEDDAMPING,
    HANDLING_SUSPENSION_UPPER_LIMIT,
    HANDLING_SUSPENSION_LOWER_LIMIT,
    HANDLING_SUSPENSION_FRONTREARBIAS,
    HANDLING_SUSPENSION_ANTIDIVEMULTIPLIER,
    HANDLING_COLLISIONDAMAGEMULTIPLIER,
    HANDLING_SEATOFFSETDISTANCE,
    HANDLING_MONETARY,
    HANDLING_HANDLINGFLAGS,
    HANDLING_MODELFLAGS,
    HANDLING_HEADLIGHT,
    HANDLING_TAILLIGHT,
    HANDLING_ANIMGROUP,
    HANDLING_MAX,
};
enum eWeaponProperty
{
    WEAPON_INVALID_PROPERTY = 0,
    WEAPON_WEAPON_RANGE,
    WEAPON_TARGET_RANGE,
    WEAPON_ACCURACY,
    WEAPON_DAMAGE,
    WEAPON_LIFE_SPAN,
    WEAPON_FIRING_SPEED,
    WEAPON_SPREAD,
    WEAPON_MAX_CLIP_AMMO,
    WEAPON_MOVE_SPEED,
    WEAPON_FLAGS,
    WEAPON_ANIM_GROUP,
    WEAPON_TYPE_SET_DISABLED,
    WEAPON_FIRETYPE,

    WEAPON_MODEL,
    WEAPON_MODEL2,

    WEAPON_SLOT,

    WEAPON_FIRE_OFFSET,

    WEAPON_SKILL_LEVEL,
    WEAPON_REQ_SKILL_LEVEL,

    WEAPON_ANIM_LOOP_START,
    WEAPON_ANIM_LOOP_STOP,
    WEAPON_ANIM_LOOP_RELEASE_BULLET_TIME,

    WEAPON_ANIM2_LOOP_START,
    WEAPON_ANIM2_LOOP_STOP,
    WEAPON_ANIM2_LOOP_RELEASE_BULLET_TIME,

    WEAPON_ANIM_BREAKOUT_TIME,

    WEAPON_SPEED,
    WEAPON_RADIUS,

    WEAPON_AIM_OFFSET,

    WEAPON_DEFAULT_COMBO,
    WEAPON_COMBOS_AVAILABLE,

    WEAPON_FLAG_AIM_NO_AUTO,            // 0x000001 - cant auto target to aim       (disable automatic up/down adjustment when firing without aiming)
    WEAPON_FLAG_FIRST = WEAPON_FLAG_AIM_NO_AUTO,
    WEAPON_FLAG_AIM_ARM,                   // 0x000002 - only needs arm to aim         (ie pistol/shotgun/tec9/uzi)
    WEAPON_FLAG_AIM_1ST_PERSON,            // 0x000004 - uses 1st person aim           (ie sniper/rpg-hs
    WEAPON_FLAG_AIM_FREE,                  // 0x000008 - can only use free aiming      (ie country sniper/flame thrower/minigun/fire extinguisher)
    WEAPON_FLAG_MOVE_AND_AIM,              // 0x000010 - can move and aim at same time
    WEAPON_FLAG_MOVE_AND_SHOOT,            // 0x000020 - can move and fire at same time
    WEAPON_FLAG_UNKNOWN_0040,
    WEAPON_FLAG_UNKNOWN_0080,
    WEAPON_FLAG_TYPE_THROW,               // 0x000100 - is a throwing weapon          (ie satchel)
    WEAPON_FLAG_TYPE_HEAVY,               // 0x000200 - heavy weapon - can't jump     (ie flame thrower/rpgs/minigun)
    WEAPON_FLAG_TYPE_CONSTANT,            // 0x000400 - fires every frame within loop (ie paint spray)
    WEAPON_FLAG_TYPE_DUAL,                // 0x000800 - can use 2x guns at same time  (ie pistol/shotgun/tec9/uzi)
    WEAPON_FLAG_ANIM_RELOAD,              // 0x001000 - weapon has reload anims       (ie everything except shotgun/snipers/flame thrower/rpgs/minigun/satchel)
    WEAPON_FLAG_ANIM_CROUCH,              // 0x002000 - weapon has crouching anims    (ie everything except flame thrower/rpgs/minigun/satchel)
    WEAPON_FLAG_ANIM_RELOAD_LOOP,            // 0x004000 - loop from end of reload to fire loop start
    WEAPON_FLAG_ANIM_RELOAD_LONG,            // 0x008000 - force a longer reload time!   (ie rpgs/snipers)
    WEAPON_FLAG_SHOT_SLOWS,                  // 0x010000 - slows down                    (ie flame thrower)
    WEAPON_FLAG_SHOT_RAND_SPEED,             // 0x020000 - random speed                  (ie flame thrower)
    WEAPON_FLAG_SHOT_ANIM_ABRUPT,            // 0x040000 - force the anim to finish player after aim/fire rather than blending out   (ie rpgs)
    WEAPON_FLAG_SHOT_EXPANDS,                // 0x080000 - expands
    WEAPON_FLAG_LAST = WEAPON_FLAG_SHOT_EXPANDS,

    WEAPON_FIRE_ROTATION,
};

enum eVehicleComponent
{
    VEHICLE_COMPONENT_CHASIS,
    VEHICLE_COMPONENT_WHEEL_FRONT_RIGHT,
    VEHICLE_COMPONENT_WHEEL_FRONT_LEFT,
    VEHICLE_COMPONENT_WHEEL_REAR_RIGHT,
    VEHICLE_COMPONENT_WHEEL_REAR_LEFT,
    VEHICLE_COMPONENT_DOOR_1,
    VEHICLE_COMPONENT_DOOR_2,
    VEHICLE_COMPONENT_DOOR_3,
    VEHICLE_COMPONENT_DOOR_4,
    VEHICLE_COMPONENT_BUMPER_1,
    VEHICLE_COMPONENT_BUMPER_2,
    VEHICLE_COMPONENT_BONET,
    VEHICLE_COMPONENT_BOOT,
    VEHICLE_COMPONENT_WINDSCREEN,
    VEHICLE_COMPONENT_EXHAUST,
    VEHICLE_COMPONENT_SPECIAL_1,
    VEHICLE_COMPONENT_SPECIAL_2,
    VEHICLE_COMPONENT_SPECIAL_3,
    VEHICLE_COMPONENT_SPECIAL_4,
    VEHICLE_COMPONENT_SPECIAL_5,
    VEHICLE_COMPONENT_WINGLF,
    VEHICLE_COMPONENT_WINGRF,
    VEHICLE_COMPONENT_EXTRA_1,
    VEHICLE_COMPONENT_EXTRA_2,
    VEHICLE_COMPONENT_MAX,
};

enum eVehicleDummies
{
    LIGHT_FRONT_MAIN = 0,
    LIGHT_REAR_MAIN,
    LIGHT_FRONT_SECONDARY,
    LIGHT_REAR_SECONDARY,
    SEAT_FRONT,
    SEAT_REAR,
    EXHAUST,
    ENGINE,
    GAS_CAP,
    TRAILER_ATTACH,
    HAND_REST,
    EXHAUST_SECONDARY,
    WING_AIRTRAIL,
    VEH_GUN,
    VEHICLE_DUMMY_COUNT,
};

enum class eResizableVehicleWheelGroup
{
    FRONT_AXLE = 0,
    REAR_AXLE,
    ALL_WHEELS = 0xFF,
};

enum eObjectProperty
{
    OBJECT_PROPERTY_ALL,
    OBJECT_PROPERTY_MASS,
    OBJECT_PROPERTY_TURNMASS,
    OBJECT_PROPERTY_AIRRESISTANCE,
    OBJECT_PROPERTY_ELASTICITY,
    OBJECT_PROPERTY_CENTEROFMASS,
    OBJECT_PROPERTY_BUOYANCY,
    OBJECT_PROPERTY_MAX,
};

namespace eObjectGroup
{
    enum Modifiable
    {
        MASS,
        TURNMASS,
        AIRRESISTANCE,
        ELASTICITY,
        BUOYANCY,
        UPROOTLIMIT,
        COLDAMAGEMULTIPLIER,
        COLDAMAGEEFFECT,
        SPECIALCOLRESPONSE,
        CAMERAAVOID,
        EXPLOSION,
        FXTYPE,
        FXOFFSET,
        FXSYSTEM,
        SMASHMULTIPLIER,
        BREAKVELOCITY,
        BREAKVELOCITYRAND,
        BREAKMODE,
        SPARKSONIMPACT
    };

    enum DamageEffect
    {
        NO_EFFECT = 0,
        CHANGE_MODEL = 1,
        SMASH_COMPLETELY = 20,
        CHANGE_THEN_SMASH = 21,
        BREAKABLE = 200,
        BREAKABLE_REMOVED = 202
    };

    enum CollisionResponse
    {
        NO_RESPONSE,
        LAMPPOST,
        SMALLBOX,
        BIGBOX,
        FENCEPART,
        GRENADE,
        SWINGDOOR,
        LOCKDOOR,
        HANGING,
        POOLBALL
    };

    enum FxType
    {
        NO_FX,
        PLAY_ON_HIT,
        PLAY_ON_DESTROYED,
        PLAY_ON_HIT_DESTROYED
    };

    enum BreakMode
    {
        NOT_BY_GUN,
        BY_GUN,
        SMASHABLE,
    };
}            // namespace eObjectGroup

enum eSoundEffectType;

namespace eSoundEffectParams
{
    enum class Chorus
    {
        WET_DRY_MIX,
        DEPTH,
        FEEDBACK,
        FREQUENCY,
        WAVEFORM,
        DELAY,
        PHASE,
    };

    enum class Compressor
    {
        GAIN,
        ATTACK,
        RELEASE,
        THRESHOLD,
        RATIO,
        PREDELAY,
    };

    enum class Distortion
    {
        GAIN,
        EDGE,
        POST_EQ_CENTER_FREQUENCY,
        POST_EQ_BANDWIDTH,
        PRE_LOWPASS_CUTOFF,
    };

    enum class Echo
    {
        WET_DRY_MIX,
        FEEDBACK,
        LEFT_DELAY,
        RIGHT_DELAY,
        PAN_DELAY,
    };

    enum class Flanger
    {
        WET_DRY_MIX,
        DEPTH,
        FEEDBACK,
        FREQUENCY,
        WAVEFORM,
        DELAY,
        PHASE,
    };

    enum class Gargle
    {
        RATE_HZ,
        WAVE_SHAPE,
    };

    enum class I3DL2Reverb
    {
        ROOM,
        ROOM_HF,
        ROOM_ROLLOFF_FACTOR,
        DECAY_TIME,
        DECAY_HF_RATIO,
        REFLECTIONS,
        REFLECTIONS_DELAY,
        REVERB,
        REVERB_DELAY,
        DIFFUSION,
        DENSITY,
        HF_REFERENCE,
    };

    enum class ParamEq
    {
        CENTER,
        BANDWIDTH,
        GAIN,
    };

    enum class Reverb
    {
        IN_GAIN,
        REVERB_MIX,
        REVERB_TIME,
        HIGH_FREQ_RT_RATIO,
    };
}            // namespace eSoundEffectParams

enum class eFxParticleSystems
{
    PRT_BLOOD,
    PRT_BOATSPLASH,
    PRT_BUBBLE,
    PRT_DEBRIS,
    PRT_SMOKE,
    PRT_GUNSHELL,
    PRT_SAND,
    PRT_SAND2,
    PRT_SMOKEHUGE,
    PRT_SMOKE2,
    PRT_SPARK,
    PRT_SPARK2,
    PRT_SPLASH,
    PRT_WAKE,
    PRT_WATERSPLASH,
    PRT_WHEELDIRT,
    PRT_GLASS,
};

enum eWorldProperty
{
    AMBIENT_COLOR,
    AMBIENT_OBJ_COLOR,
    DIRECTIONAL_COLOR,
    SPRITE_SIZE,
    SPRITE_BRIGHTNESS,
    POLE_SHADOW_STRENGTH,
    SHADOW_STRENGTH,
    SHADOWS_OFFSET,
    LIGHTS_ON_GROUND,
    LOW_CLOUDS_COLOR,
    BOTTOM_CLOUDS_COLOR,
    CLOUDS_ALPHA1,
    ILLUMINATION,
    WEATHER_WET_ROADS,
    WEATHER_FOGGYNESS,
    WEATHER_FOG,
    WEATHER_RAIN_FOG,
    WEATHER_WATER_FOG,
    WEATHER_SANDSTORM,
    WEATHER_RAINBOW,
};
