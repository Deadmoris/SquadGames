
outsideSoundFilter = 0;
soundGear[] = {"",0.000562341,1};
SoundGetIn[] = {"",0.0177828,1};
SoundGetOut[] = {"",0.0177828,1};
soundEngineOnInt[] = {"",0.354813,1};
soundEngineOnExt[] = {"",0.354813,1};
soundEngineOffInt[] = {"",0.354813,1};
soundEngineOffExt[] = {"",0.354813,1};
buildCrash0[] = {"rds_a2port_civ\data\sounds\crash_bicycle_01",0.707946,1,40};
buildCrash1[] = {"rds_a2port_civ\data\sounds\crash_bicycle_02",0.707946,1,40};
buildCrash2[] = {"rds_a2port_civ\data\sounds\crash_bicycle_03",0.707946,1,40};
buildCrash3[] = {"rds_a2port_civ\data\sounds\crash_bicycle_04",0.707946,1,40};
soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",1,1,200};
WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",1,1,200};
WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",1,1,200};
WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",1,1,200};
soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
ArmorCrash0[] = {"rds_a2port_civ\data\sounds\crash_bicycle_06",0.707946,1,40};
ArmorCrash1[] = {"rds_a2port_civ\data\sounds\crash_bicycle_05",0.707946,1,40};
ArmorCrash2[] = {"rds_a2port_civ\data\sounds\crash_bicycle_04",0.707946,1,40};
ArmorCrash3[] = {"rds_a2port_civ\data\sounds\crash_bicycle_03",0.707946,1,40};
soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
class SoundEvents
{
	class AccelerationIn
	{
		sound[] = {"",0.562341,1};
		limit = "0.2";
		expression = "(engineOn*(1-camPos))*thrust";
	};
	class AccelerationOut
	{
		sound[] = {"",0.562341,1};
		limit = "0.2";
		expression = "(engineOn*camPos)*thrust";
	};
};
#define BIKE_SOUND_PLUS 1.9
#define BIKE_SOUND_PLUS_OUT 3.9
class Sounds
{
	class Engine
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\low1",BIKE_SOUND_PLUS_OUT + 0.177828,1,35};
		frequency = "1";
		volume = "camPos*(thrust factor[0, 0.4])*((((speed*10) max -1) min 0)+1)";
		//volume = "camPos*engineOn*((speed factor[1, 6]) min (speed factor[6, 1]))";
	};
	class EngineHighOut
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\high1",BIKE_SOUND_PLUS_OUT + 0.177828,1,50};
		frequency = "1";
		volume = "camPos*engineOn*(thrust factor[0.4, 0.9])*((((speed*10) max -1) min 0)+1)";
	};
	class IdleOut
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\idle",BIKE_SOUND_PLUS_OUT + 0.377828,1,35};
		frequency = "1";
		volume = "camPos*engineOn*(speed factor[0.00, 0.9])";
	};
	class NoiseOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04", 0.891251,1,90};
		frequency = "1";
		volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
	};
	class EngineLowIn
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\low1",BIKE_SOUND_PLUS + 0.316228,1};
		frequency = "1";
		volume = "(1-camPos)*engineOn*(thrust factor[0, 0.4])*((((speed*10) max -1) min 0)+1)";
	};
	class EngineHighIn
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\high1",BIKE_SOUND_PLUS + 0.316228,1};
		frequency = "1";
		volume = "(1-camPos)*engineOn*(thrust factor[0.4, 0.9])*((((speed*10) max -1) min 0)+1)";
	};
	class IdleIn
	{
		sound[] = {"rds_a2port_civ\data\sounds\MMT\idle",BIKE_SOUND_PLUS + 0.316228,1};
		frequency = "1";
		volume = "(1-camPos)*engineOn*(speed factor[0.0, 0.9])";
	};
	class NoiseIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.562341,1};
		frequency = "1";
		volume = "(damper0 max 0.03)*(thrust factor[0, 18])*(1-camPos)";
	};


	class TiresRockOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
		frequency = "1";
		volume = "camPos*rock*(speed factor[2, 20])";
	};
	class TiresSandOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
		frequency = "1";
		volume = "camPos*sand*(speed factor[2, 20])";
	};
	class TiresGrassOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
		frequency = "1";
		volume = "camPos*grass*(speed factor[2, 20])";
	};
	class TiresMudOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
		frequency = "1";
		volume = "camPos*mud*(speed factor[2, 20])";
	};
	class TiresGravelOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
		frequency = "1";
		volume = "camPos*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
		frequency = "1";
		volume = "camPos*asphalt*(speed factor[2, 20])";
	};
	class TiresRockIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.630957,1};
		frequency = "1";
		volume = "(1-camPos)*rock*(speed factor[2, 20])";
	};
	class TiresSandIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.630957,1};
		frequency = "1";
		volume = "(1-camPos)*sand*(speed factor[2, 20])";
	};
	class TiresGrassIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.630957,1};
		frequency = "1";
		volume = "(1-camPos)*grass*(speed factor[2, 20])";
	};
	class TiresMudIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.630957,1};
		frequency = "1";
		volume = "(1-camPos)*mud*(speed factor[2, 20])";
	};
	class TiresGravelIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.630957,1};
		frequency = "1";
		volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	};
	class TiresAsphaltIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.501187,1};
		frequency = "1";
		volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	};

	class Movement
	{
		sound = "soundEnviron";
		frequency = "1";
		volume = "0";
	};
};
soundEngine[] = {"",1,1};
soundEnviron[] = {"",1,1};