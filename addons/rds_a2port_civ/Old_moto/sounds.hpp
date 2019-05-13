
outsideSoundFilter = 0;
attenuationEffectType = "OpenCarAttenuation";
soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-start-1",0.354813,1};
soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-start-1",0.354813,1,280};
soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-stop-1",0.354813,1};
soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-stop-1",0.354813,1,280};

buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",1,1,200};
buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",1,1,200};
buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",1,1,200};
buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",1,1,200};
soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",1,1,200};
WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",1,1,200};
WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",1,1,200};
WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",1,1,200};
soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1",1,1,200};
armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2",1,1,200};
armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3",1,1,200};
armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4",1,1,200};
soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",1,1,200};
Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",1,1,200};
Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",1,1,200};
Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",1,1,200};
soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};

#define MOTO_BOOST 0.2
class Sounds
{
	class Idle_ext
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-idle-2",MOTO_BOOST + 0.223872,1,200};
		frequency = 1;
		volume = "engineOn*camPos*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
	};
	class Engine
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-low-2",MOTO_BOOST + 0.398107,1,350};
		frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
	};
	class Engine1_ext
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-low-2",MOTO_BOOST + 0.398107,1,350};
		frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
	};
	class Engine2_ext
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2",MOTO_BOOST + 0.398107,1,450};
		frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
	};
	class Engine3_ext
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2",MOTO_BOOST + 0.398107,1,450};
		frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
		volume = "engineOn*camPos*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
	};
	class Engine4_ext
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2",MOTO_BOOST + 0.398107,1,450};
		frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
		volume = "engineOn*camPos*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
	};
	class IdleThrust
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.562341,1,150};
		frequency = 1;
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
	};
	class EngineThrust
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.630957,1,200};
		frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
	};
	class Engine1_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.707946,1,250};
		frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
	};
	class Engine2_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.794328,1,300};
		frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
	};
	class Engine3_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.891251,1,350};
		frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
	};
	class Engine4_Thrust_ext
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1,1,400};
		frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
		volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
	};
	class Idle_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-idle-2",MOTO_BOOST + 0.316228,1};
		frequency = 1;
		volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
	};
	class Engine_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-low-2",MOTO_BOOST + 0.562341,1};
		frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
	};
	class Engine1_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-low-2",MOTO_BOOST + 0.562341,1};
		frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
	};
	class Engine2_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2",MOTO_BOOST + 0.562341,1};
		frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
	};
	class Engine3_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2",MOTO_BOOST + 0.562341,1};
		frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
	};
	class Engine4_int
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2",MOTO_BOOST + 0.562341,1};
		frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
	};
	class IdleThrust_Int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.562341,1};
		frequency = 1;
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
	};
	class EngineThrust_Int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.630957,1};
		frequency = "0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
	};
	class Engine1_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.707946,1};
		frequency = "0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
	};
	class Engine2_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.794328,1};
		frequency = "0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
	};
	class Engine3_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.891251,1};
		frequency = "0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
	};
	class Engine4_Thrust_int
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1,1};
		frequency = "0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
		volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
	};
//wheels etc
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
	class NoiseOut
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.891251,1,90};
		frequency = "1";
		volume = "camPos*(damper0 max 0.02)*(speed factor[0, 15])";
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
	class NoiseIn
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.562341,1};
		frequency = "1";
		volume = "(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
	};
	class breaking_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.707946,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
		frequency = 1;
		volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.707946,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
	};
	class acceleration_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.707946,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_ext_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
		frequency = 1;
		volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_road
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
	class breaking_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
	};
	class acceleration_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
	};
	class turn_left_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
	};
	class turn_right_int_dirt
	{
		sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.501187,1};
		frequency = 1;
		volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
	};
};

class SoundEvents
{
	class AccelerationIn
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-acce-3",0.562341,1};
		limit = "0.2";
		expression = "(engineOn*(1-camPos))*thrust";
	};
	class AccelerationOut
	{
		sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-acce-3",0.562341,1,300};
		limit = "0.2";
		expression = "(engineOn*camPos)*thrust";
	};
};