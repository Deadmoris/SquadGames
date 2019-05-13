	class SG_Datsun_Base: Car_F
	{
		scope = 0;
		displayName = "Datsun 620 Pickup (PK)";
		picture = "\sg_cup_vehicles\data\UI\datsun_pk_ca.paa";
		Icon = "\sg_cup_vehicles\data\UI\icomap_datsun_pk_ca.paa";
		mapSize = 5;
		model = "\sg_cup_vehicles\CUP_datsun_PK.p3d";
		steerAheadPlan = 0.15;
		insideSoundCoef = 0.1;
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1,40};
		soundDammage[] = {"","db-5",1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start","db-8",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start","db-7",1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop","db-8",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop","db-7",1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01","db-3",1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02","db-3",1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03","db-3",1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04","db-3",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01","db-3",1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02","db-3",1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03","db-3",1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04","db-3",1,200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05","db-3",1,200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06","db-3",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01","db-3",1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02","db-3",1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03","db-3",1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04","db-3",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle","db-13",1,150};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm","db-11",1,200};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm","db-9",1,240};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm","db-8",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm","db-7",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm","db-6",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm","db-5",1,420};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*camPos*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust","db-4",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust","db-3",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust","db-2",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust","db0",1,400};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust","db2",1,450};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle","db-15",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm","db-14",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm","db-12",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm","db-11",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm","db-10",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm","db-6",1};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust","db-10",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust","db-8",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust","db-7",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust","db-6",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust","db-4",1};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		normalSpeedForwardCoef = 0.85;
		slowSpeedForwardCoef = 0.65;
		turnCoef = 3.5;
		terrainCoef = 0.5;
		simulation = "carx";
		dampersBumpCoef = 3;
		precision = 9;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		maxSpeed = 110;
		fuelCapacity = 45;
		fuelConsumptionRate = 1.5;
		wheelCircumference = 2.2;
		brakeIdleSpeed = 0.0;
		canFloat = 0;
		waterLeakiness = 500;
		waterSpeedFactor = 0.5;
		maxFordingDepth = -2.0;
		waterResistance = 0.5;
		waterDamageEngine = 2.9;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.35;
		engineShiftY = 0.3;
		engineShiftZ = -3.0;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.62,"N",0,"D1",5.392,"D2",3.446,"D3",1.915,"D4",1.0,"D5",0.512};
			TransmissionRatios[] = {"High",6.81};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.0,0.95,0.95,0.95,0.95};
		switchTime = 0.55;
		latency = 2.0;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 35;
		transmissionLosses = 3;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(600/6000)","(85/155)"},{"(1500/6000)","(138/155)"},{"(2750/6000)","(155/155)"},{"(3500/6000)","(151/155)"},{"(4500/6000)","(149/155)"},{"(5500/6000)","(145/155)"},{"(6500/6000)","(120/155)"},{"(8505/6000)","(0/155)"}};
		maxOmega = 628.32;
		enginePower = 84;
		peakTorque = 255;
		idleRPM = 600;
		redRPM = 6000;
		engineLosses = 5;
		thrustDelay = 1.0;
		engineBrakeCoef = 0.2;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 2.0;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 270;
				springStrength = 54000;
				springDamperRate = 3055;
				longitudinalStiffnessPerUnitGravity = 540;
				latStiffX = 20;
				latStiffY = 50;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 8000;
				maxBrakeTorque = 1100;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: LR
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 8000;
			};
		};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks{};
		hideWeaponsCargo = 1;
		transportSoldier = 1;
		driverAction = "Driver_high01";
		cargoAction[] = {"CUP_Datsun_Cargo01"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class AnimationSources: AnimationSources
		{
			class hideGrille
			{
				displayName = "Hide front grille...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 5;
			};
			class hideRoof
			{
				displayName = "Hide Roof...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 20;
			};
			class hideSpareTire
			{
				displayName = "Hide Spare Tire...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 5;
			};
			class hideRollBar
			{
				displayName = "Hide Roll Bar...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 10;
			};
			class hideRearDoor
			{
				displayName = "Hide Rear Door...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {0,1};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 20;
			};
		};
		class textureSources
		{
			class blueRed
			{
				displayname = "BlueRed";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class blue
			{
				displayName = "Blue";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class striped
			{
				displayName = "Striped";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup4_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBeigeWoodland
			{
				displayName = "Green/Beige Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBrownBeigeWoodland
			{
				displayName = "Green/Brown/Beige Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class redStarWoodland
			{
				displayName = "Red Star Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup3_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBlackBeigeDesert
			{
				displayName = "Green/Black/Beige Desert Striped";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBlackBeigeDesertDot
			{
				displayName = "Green/Black/Beige Desert Dots";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBeigeDesert
			{
				displayName = "Green/Beige Desert Dots";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup3_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class desert
			{
				displayName = "Desert Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup4_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner 2";
				memoryPointsGetInGunnerDir = "pos gunner dir 2";
				gunnerName = "$STR_PASSANGER_R_L";
				proxyIndex = 3;
				maxElev = 80;
				minElev = -25;
				maxTurn = 45;
				minTurn = -80;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 2;
				maxElev = 80;
				minElev = -25;
				maxTurn = 80;
				minTurn = -45;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup_damage.rvmat","sg_cup_vehicles\Data\datsun_trup_destruct.rvmat","sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier_damage.rvmat","sg_cup_vehicles\Data\datsun_interier_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup_b.rvmat","sg_cup_vehicles\Data\datsun_trup_b_damage.rvmat","sg_cup_vehicles\Data\datsun_trup_b_destruct.rvmat","a3\data_f\glass_veh_int.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadL03: LightCarHeadL01
			{
				position = "LightCarHeadL03";
				direction = "LightCarHeadL03_end";
				FlareSize = 0.5;
				hitpoint = "Light_L2";
				selection = "Light_L2";
				innerAngle = 75;
				outerAngle = 130;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadR03: LightCarHeadR01
			{
				position = "LightCarHeadR03";
				direction = "LightCarHeadR03_end";
				FlareSize = 0.5;
				hitpoint = "Light_R2";
				selection = "Light_R2";
				innerAngle = 75;
				outerAngle = 130;
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02","LightCarHeadL03"},{"LightCarHeadR01","LightCarHeadR02","LightCarHeadR03"}};
		armorLights = 0.1;
		selectionBreakLights = "break_light";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};
		memoryPointTrackFLL = "tyreTrack_1_1l";
		memoryPointTrackFLR = "tyreTrack_1_1r";
		memoryPointTrackBLL = "tyreTrack_1_2l";
		memoryPointTrackBLR = "tyreTrack_1_2r";
		memoryPointTrackFRL = "tyreTrack_2_1l";
		memoryPointTrackFRR = "tyreTrack_2_1r";
		memoryPointTrackBRL = "tyreTrack_2_2l";
		memoryPointTrackBRR = "tyreTrack_2_2r";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip0_pos";
					pointDirection = "pip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip1_pos";
					pointDirection = "pip1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class CenterMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "pip2_pos";
					pointDirection = "pip2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 6;
		ace_refuel_fuelCapacity = 45;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_Datsun_PK_Base: SG_Datsun_Base
	{
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_PKT_open";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_PKT_open";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_PKT_open";
			};
			class muzzle_rot_PKT
			{
				source = "ammorandom";
				weapon = "SG_PKT_open";
			};
			class hideGrille: hideGrille{};
			class hideRearDoor{};
			class hideRoof{};
			class hideSpareTire{};
			class hideRollBar{};
		};
		class textureSource: textureSources{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				soundServo[] = {};
				stabilizedInAxes = 0;
				weapons[] = {"SG_PKT_open"};
				magazines[] = {"rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100"};
				gunnerAction = "CUP_Datsun_Gunner01";
				gunnerInAction = "CUP_Datsun_Gunner01";
				ejectDeadGunner = 1;
				minElev = -18;
				maxElev = 40;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "eye";
				memoryPointGunnerOutOptics = "eye";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerLeftHandAnimName = "otochlaven";
				gunnerRightHandAnimName = "otochlaven";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				disableSoundAttenuation = 1;
				class ViewGunner
				{
					initFov = 1;
					minFov = 0.25;
					maxFov = 1.4;
					visionMode[] = {"Normal"};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class ViewOptics: ViewGunner{};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		hiddenSelections[] = {"Camo","Roof"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup1_co.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
	};
	class SG_Datsun_civil_Base: SG_Datsun_Base
	{
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup2.rvmat","sg_cup_vehicles\Data\datsun_trup2_damage.rvmat","sg_cup_vehicles\Data\datsun_trup2_destruct.rvmat","sg_cup_vehicles\Data\coyota_armed.rvmat","sg_cup_vehicles\Data\coyota_armed_damage.rvmat","sg_cup_vehicles\Data\coyota_armed_destruct.rvmat","sg_cup_vehicles\Data\datsun_addons4.rvmat","sg_cup_vehicles\Data\datsun_addons4_damage.rvmat","sg_cup_vehicles\Data\datsun_addons4_destruct.rvmat","a3\data_f\glass_veh.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_int.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo","Roof"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup1_co.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		model = "\sg_cup_vehicles\CUP_datsun_civil.p3d";
		picture = "\sg_cup_vehicles\data\UI\datsun1_civil_1_open_ca.paa";
		Icon = "\sg_cup_vehicles\data\UI\icomap_datsun_ca.paa";
		class AnimationSources: AnimationSources
		{
			class hideGrille: hideGrille{};
			class hideRoof: hideRoof{};
			class hideRollBar: hideRollBar{};
			class hideSpareTire: hideSpareTire{};
			class hideRearDoor: hideRearDoor{};
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner 3";
				memoryPointsGetInGunnerDir = "pos gunner dir 3";
				gunnerName = "$STR_PASSANGER_R";
				proxyIndex = 4;
				maxElev = 80;
				minElev = -10;
				maxTurn = 105;
				minTurn = -85;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
				LODTurnedIn = -1;
				LODTurnedOut = -1;
			};
		};
	};
	class SG_I_Datsun_PK: SG_Datsun_PK_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		scope = 2;
		scopeCurator = 2;
		animationList[] = {"hideGrille",0.5};
		textureList[] = {"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
		displayName = "Datsun 620 Pickup (PK)";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_I_Datsun_PK.jpg";
		maximumLoad = 2500;
	};
	class SG_C_Datsun: SG_Datsun_civil_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 3;
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
		scope = 2;
		scopeCurator = 2;
		displayName = "Datsun 620 Pickup";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5,"hideSpareTire",0.5,"hideRollBar",0.5};
		textureList[] = {"blueRed",1,"blue",1,"striped",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		features = "Randomization: Yes, 3 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];      <br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 2)      <br />Camo selections: 2 - the body, covered roof      <br />Script door sources: None      <br />Script animations: hideGrille, hideRoof, hideSpareTire, hideRollBar, hideRearDoor      <br />Firing from vehicles: Positions 2 to 3      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: 1 to 3";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_C_Datsun.jpg";
		maximumLoad = 2500;
	};
	class SG_C_Datsun_4seat: SG_Datsun_civil_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 3;
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
		scope = 2;
		scopeCurator = 2;
		displayName = "Datsun 620 Pickup (5 seats)";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5,"hideSpareTire",0.5,"hideRollBar",0.5,"hideRearDoor",1};
		textureList[] = {"blueRed",1,"blue",1,"striped",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		features = "Randomization: Yes, 3 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];      <br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 2)      <br />Camo selections: 2 - the body, covered roof      <br />Script door sources: None      <br />Script animations: hideGrille, hideRoof, hideSpareTire, hideRollBar, hideRearDoor      <br />Firing from vehicles: Positions 2 to 3      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: 1 to 3";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_C_Datsun_4seat.jpg";
		maximumLoad = 2500;
	};
	