	class SG_LAV25_Base: Wheeled_APC_F
	{
		expansion = 3;
		scope = 0;
		model = "\sg_cup_vehicles\CUP_LAV25.p3d";
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25";
		};
		vehicleClass = "Armored";
		picture = "\sg_cup_vehicles\Data\UI\Picture_LAV25_CA.paa";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_LAV25_CA.paa";
		mapSize = 7;
		radarType = 8;
		armorLights = 0.1;
		armor = 120;
		armorStructural = 2;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9995;
		unitInfoType = "RscUnitInfoTank";
		hideProxyInCombat = 1;
		threat[] = {0.5,0.5,0.5};
		damageResistance = 0.00719;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Alpha";
				shortName = "Set-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Bravo";
				shortName = "Set-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "zbytek";
				visual = "zbytek";
				minimalHit = 0.2;
				passThrough = 0;
				explosionShielding = 0.009;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\lavalfa.rvmat","sg_cup_vehicles\Data\lavalfa_damage.rvmat","sg_cup_vehicles\Data\lavalfa_destruct.rvmat","sg_cup_vehicles\Data\lavbody.rvmat","sg_cup_vehicles\Data\lavbody_damage.rvmat","sg_cup_vehicles\Data\lavbody_destruct.rvmat","sg_cup_vehicles\Data\lavbody2.rvmat","sg_cup_vehicles\Data\lavbody2_damage.rvmat","sg_cup_vehicles\Data\lavbody2_destruct.rvmat","sg_cup_vehicles\Data\lav_glass_green.rvmat","sg_cup_vehicles\Data\lav_glass_green_damage.rvmat","sg_cup_vehicles\Data\lav_glass_green_destruct.rvmat","sg_cup_vehicles\Data\lav_glass_red.rvmat","sg_cup_vehicles\Data\lav_glass_red_damage.rvmat","sg_cup_vehicles\Data\lav_glass_red_destruct.rvmat","sg_cup_vehicles\Data\lav_hq.rvmat","sg_cup_vehicles\Data\lav_hq_damage.rvmat","sg_cup_vehicles\Data\lav_hq_destruct.rvmat","sg_cup_vehicles\Data\lav_int_0.rvmat","sg_cup_vehicles\Data\lav_int_0_damage.rvmat","sg_cup_vehicles\Data\lav_int_0_destruct.rvmat","sg_cup_vehicles\Data\lav_int_1.rvmat","sg_cup_vehicles\Data\lav_int_1_damage.rvmat","sg_cup_vehicles\Data\lav_int_1_destruct.rvmat","sg_cup_vehicles\Data\lav_int_2.rvmat","sg_cup_vehicles\Data\lav_int_2_damage.rvmat","sg_cup_vehicles\Data\lav_int_2_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","camoAlfa"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		attenuationEffectType = "TankAttenuation";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGear[] = {"","db-85",1};
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start","db0",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start","db0",1.0,300};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop","db0",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop","db0",1.0,300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08","db-3",1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09","db-3",1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10","db-3",1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11","db-3",1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,150};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03","db0",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03","db0",1.0,350};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",0.35481337,1,200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",0.39810717,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",0.4466836,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",0.5011872,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",0.56234133,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",0.63095737,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",0.70794576,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",0.56234133,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",0.63095737,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",0.63095737,1,230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",0.70794576,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",0.70794576,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",1.0,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",1.1220185,1,400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		driverWeaponsInfoType = "CUP_RscOptics_driver_NCO";
		waterLeakiness = 2.5;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.4;
		enableGPS = 1;
		commanderCanSee = 31;
		gunnerCanSee = 30;
		driverCanSee = 31;
		forceHideDriver = 0;
		gunnerHasFlares = 1;
		weapons[] = {"TruckHorn3"};
		magazines[] = {};
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointdriverOptics = "driverview";
		class ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SG_M242_veh","SG_M240_coax"};
				magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS"};
				soundServo[] = {"A3\sounds_f\dummysound","db-35",1.0,15};
				minElev = -8;
				maxElev = 50;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "CUP_LAV25_Gunner_out";
				gunnerInAction = "CUP_LAV25_Gunner";
				personTurretAction = "vehicle_turnout_2";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				forceHideGunner = 0;
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
				turretInfoType = "CUP_RscOptics_gunner_TNBECO";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 3;
				ispersonturret = 1;
				minOutElev = -70;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				proxyType = "CPGunner";
				proxyIndex = 1;
				ace_fcs_enabled = 1;
				ace_fcs_minDistance = 200;
				ace_fcs_maxDistance = 6000;
				ace_fcs_distanceInterval = 5;
				gunnerOutOpticsModel = "";
				memoryPointGun = "machinegun";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				particlesdir = "muzzle_1";
				particlespos = "chamber_1";
				missileBeg = "muzzle_1";
				missileEnd = "chamber_1";
				body = "MainTurret";
				gun = "MainGun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunnerForceOptics = 1;
				outGunnerMayFire = 0;
				startEngine = 1;
				primaryGunner = 1;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {2,3};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.05;
					maxFov = 0.2;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
					};
					class Narrow: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "otocvez";
						visual = "otocvez";
						passThrough = 1;
					};
				};
				selectionFireAnim = "zasleh_1";
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						gunnerOpticsShowCursor = 0;
						animationSourceHatch = "hatchCommander";
						soundServo[] = {"","db-50",1.0};
						startEngine = 0;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						lodturnedin = 1;
						lodturnedout = 1;
						gunBeg = "";
						gunEnd = "";
						minElev = -4;
						maxElev = 20;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						commanding = 2;
						viewGunnerInExternal = 0;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
						gunnerOutOpticsModel = "";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						class ViewGunner
						{
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.025;
							maxFov = 0.3;
						};
						gunnerInAction = "CUP_LAV25_Commander";
						gunnerAction = "CUP_LAV25_Commander_out";
						personTurretAction = "vehicle_turnout_2";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						outGunnerMayFire = 1;
						InGunnerMayFire = 1;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						ispersonturret = 1;
						minOutElev = -70;
						maxOutElev = 40;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						turretInfoType = "CUP_RscOptics_commander_NBECO";
						stabilizedInAxes = 3;
					};
				};
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 5;
				gunnerName = "Rear Hatch Left (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatchleft";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic02";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargoleft";
				memoryPointsGetInGunnerDir = "pos cargoleft dir";
			};
			class CargoGunner_2: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 6;
				gunnerName = "Rear Hatch Right (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatchright";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -100;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargoright";
				memoryPointsGetInGunnerDir = "pos cargoright dir";
			};
		};
		crew = "rhsusf_army_ucp_crewman";
		hideWeaponsCargo = 1;
		transportSoldier = 4;
		cargoProxyIndexes[] = {1,2,3,4,5,6};
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		DriverAction = "CUP_LAV25_Driver_OUT";
		driverInAction = "CUP_LAV25_Driver_OUT";
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03","passenger_apc_generic03","passenger_apc_generic02","passenger_generic01_foldhands","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02"};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		transportAmmo = 100;
		supplyRadius = 1.7;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 100;
				intensity = 1000;
				outerAngle = 140;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
				useFlare = 1;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 60;
					hardLimitStart = 30;
					linear = 0;
					quadratic = 0.25;
					start = 1.0;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		selectionBrakeLights = "zadni svetlo";
		selectionBackLights = "lights_rear";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
		};
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		numberPhysicalWheels = 8;
		simulation = "carX";
		maxSpeed = 100;
		wheelCircumference = 3.277;
		dampersBumpCoef = 5;
		brakeIdleSpeed = 1.78;
		terrainCoef = 0.8;
		turnCoef = 3.0;
		canFloat = 1;
		waterresistance = 0.5;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.015;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2.0;
		engineShiftY = 1.05;
		fuelCapacity = 300;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		torqueCurve[] = {{"(550/2500)","(0/770)"},{"(1000/2500)","(498/770)"},{"(1250/2500)","(635/770)"},{"(1500/2500)","(746/770)"},{"(1800/2500)","(770/770)"},{"(2000/2500)","(743/770)"},{"(2250/2500)","(712/770)"},{"(2764/2500)","(0/770)"}};
		maxOmega = 261.8;
		enginePower = 205;
		peakTorque = 770;
		idleRPM = 550;
		redRPM = 2500;
		thrustDelay = 0.35;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",8.05,"D2",3.58,"D3",2.09,"D4",1.39,"D5",1.0};
			TransmissionRatios[] = {"High",3.04};
			AmphibiousRatios[] = {"R1",-10,"N",0,"D1",20};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.5,0.0,0.9,0.9,0.9,0.9,0.9};
		switchTime = 0.35;
		latency = 1.4;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35.0;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		class wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 100;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1600;
				springStrength = 80000;
				springDamperRate = 18000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		class AnimationSources: AnimationSources
		{
			class front_panel_anim
			{
				source = "user";
				animperiod = 2;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLF2Wheel
			{
				source = "Hit";
				hitpoint = "HitLBWheel";
				raw = 1;
			};
			class HitLMWheel
			{
				source = "Hit";
				hitpoint = "HitLMWheel";
				raw = 1;
			};
			class HitLBWheel
			{
				source = "Hit";
				hitpoint = "HitLF2Wheel";
				raw = 1;
			};
			class HitRFWheel
			{
				source = "Hit";
				hitpoint = "HitRFWheel";
				raw = 1;
			};
			class HitRF2Wheel
			{
				source = "Hit";
				hitpoint = "HitRBWheel";
				raw = 1;
			};
			class HitRMWheel
			{
				source = "Hit";
				hitpoint = "HitRMWheel";
				raw = 1;
			};
			class HitRBWheel
			{
				source = "Hit";
				hitpoint = "HitRF2Wheel";
				raw = 1;
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				source = "ammorandom";
				weapon = "SG_M240_coax";
			};
			class muzzle_rot_CUP_M242_W
			{
				source = "ammorandom";
				weapon = "SG_M242_veh";
			};
			class muzzle_hide_CUP_M242_W
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
		};
		class textureSources
		{
			class NATO_woodland
			{
				displayName = "NATO 3-tone Woodland";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
				factions[] = {};
			};
			class desert
			{
				displayName = "Desert";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_desert_co.paa","\sg_cup_vehicles\data\lavbody2_desert_co.paa","\sg_cup_vehicles\data\lav_hq_desert_co.paa","\sg_cup_vehicles\data\lavalfa_desert_ca.paa"};
				factions[] = {};
			};
			class green
			{
				displayName = "Olive Green";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_green_co.paa","\sg_cup_vehicles\data\lavbody2_green_co.paa","\sg_cup_vehicles\data\lav_hq_green_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
				factions[] = {};
			};
			class RACS
			{
				displayName = "RACS";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_RACS_co.paa","\sg_cup_vehicles\data\lavbody2_RACS_co.paa","\sg_cup_vehicles\data\lav_hq_RACS_co.paa","\sg_cup_vehicles\data\lavalfa_desert_ca.paa"};
				factions[] = {};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "_this execVM ""\sg_cup_vehicles\scripts\init.sqf""";
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 8;
		ace_refuel_fuelCapacity = 269;
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
		maximumLoad = 5000;
	};
	class SG_B_LAV25_USMC: SG_LAV25_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "rhs_faction_usmc_wd";
		displayName = "LAV-25A1";
		author = "$STR_CUP_AUTHOR_STRING";
		cargoCompartments[] = {"Compartment3"};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Body)";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				author = "CUP_AUTHOR_STRING";
			};
			class Hide_Turret_Deployment: Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Turret)";
			};
			class Hide_Antenna
			{
				DisplayName = "Hide Antenna (front)";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				author = "CUP_AUTHOR_STRING";
			};
		};
		animationList[] = {"Hide_Deployment",0,"Hide_Turret_Deployment",0,"Hide_Antenna",0};
		AGM_FCSEnabled = 1;
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25_USMC.jpg";
	};
	class SG_B_LAV25M240_USMC: SG_B_LAV25_USMC
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		model = "\sg_cup_vehicles\cup_lav25m240.p3d";
		faction = "rhs_faction_usmc_wd";
		displayName = "LAV-25A1 (M240)";
		author = "$STR_CUP_AUTHOR_STRING";
		cargoCompartments[] = {"Compartment3"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M240_veh";
			};
			class muzzle_rot_CUP_M240_veh3_W
			{
				source = "ammorandom";
				weapon = "SG_M240_veh";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"SG_M240_veh","SmokeLauncher"};
						magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
						minElev = -10;
						maxElev = 20;
						initElev = 0;
						minTurn = -60;
						maxTurn = 60;
						initTurn = 0;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerForceOptics = 1;
						gunnerOutForceOptics = 0;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						viewGunnerInExternal = 0;
						animationSourceHatch = "hatchCommander";
						body = "obsTurret";
						gun = "obsGun";
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						class ViewGunner
						{
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						gunnerInAction = "CUP_LAV25_Commander";
						stabilizedInAxes = 3;
						LODTurnedIn = "View_Gunner";
						LODTurnedOut = 1;
						ispersonturret = 0;
						minOutElev = -20;
						maxOutElev = 20;
						initOutElev = 0;
						minOutTurn = -60;
						maxOutTurn = 60;
						initOutTurn = 0;
						gunnerLeftHandAnimName = "OtocHlaven_Shake";
						gunnerRightHandAnimName = "OtocHlaven_Shake";
						memoryPointGunnerOutOptics = "comgunview";
						memoryPointGunnerOptics = "commanderview";
						gunnerOutOpticsModel = "\sg_cup_vehicles\proxies\optika_empty";
						gunnerAction = "CUP_LAV25_Commander_out_mg";
						selectionFireAnim = "zasleh_2";
						InGunnerMayFire = 1;
						outGunnerMayFire = 1;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsShowCursor = 0;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscWeaponRangeZeroing";
						primaryGunner = 0;
						primaryObserver = 1;
					};
				};
			};
			class CargoGunner_1: CargoGunner_1{};
			class CargoGunner_2: CargoGunner_2{};
		};
		AGM_FCSEnabled = 1;
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25M240_USMC.jpg";
	};

	class SG_B_LAV25_HQ_USMC: SG_B_LAV25_USMC
	{
		scope = 2;
		scopeCurator = 2;
		model = "\sg_cup_vehicles\cup_lav_hq.p3d";
		displayName = "LAV-C2";
		author = "$STR_CUP_AUTHOR_STRING";
		picture = "\sg_cup_vehicles\data\UI\Picture_LAV25_CA.paa";
		Icon = "\sg_cup_vehicles\data\UI\Icon_lav25_hq_CA.paa";
		hideProxyInCombat = 1;
		enableManualFire = 0;
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25_HQ";
		};
		driverCompartments = "Compartment2";
		cargoCompartments[] = {"Compartment3"};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","gunner","commander",{"cargo",0}};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"},{"turret","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
			class Intercom_2
			{
				displayName = "Passenger Intercom";
				shortName = "Psngr";
				allowedPositions[] = {"crew",{"cargo","all"}};
				disabledPositions[] = {};
				limitedPositions[] = {};
				masterPositions[] = {"commander"};
				numLimitedPositions = 0;
				connectedByDefault = 0;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Crew Alpha";
				shortName = "Crw-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Crew Bravo";
				shortName = "Crw-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_3
			{
				displayName = "Radio Set - Pax Alpha";
				shortName = "Pax-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_4
			{
				displayName = "Radio Set - Pax Bravo";
				shortName = "Pax-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_5
			{
				displayName = "Radio Set - Pax Charlie";
				shortName = "Pax-C";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}},{"cargo",0}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_6
			{
				displayName = "Radio Set - Pax Delta";
				shortName = "Pax-D";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}},{"cargo",0}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_7
			{
				displayName = "Radio Set - Pax Echo";
				shortName = "Pax-E";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_8
			{
				displayName = "Radio Set - Pax Foxtrot";
				shortName = "Pax-E";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				weapons[] = {"SG_M240_veh","SmokeLauncher"};
				magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
				minElev = -20;
				maxElev = 20;
				initElev = 0;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				minOutElev = -20;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				gunnerLeftHandAnimName = "OtocHlaven_Shake";
				gunnerRightHandAnimName = "OtocHlaven_Shake";
				memoryPointGunnerOutOptics = "gunnerview";
				memoryPointGunnerOptics = "comgunviewin";
				gunnerOutOpticsModel = "\sg_cup_vehicles\proxies\optika_empty";
				memoryPointGun = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "ComTurret";
				gun = "ComGun";
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_SG_Commander";
				primaryGunner = 1;
				primaryObserver = 1;
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerCompartments = "Compartment2";
				animationSourceHatch = "hatchGunner";
				gunnerAction = "CUP_LAV25_commander_out_C2_mg";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				selectionFireAnim = "zasleh_2";
				InGunnerMayFire = 0;
				outGunnerMayFire = 1;
				gunnerOpticsShowCursor = 0;
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class ViewGunner
				{
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				gunnerInAction = "CUP_LAV25_Commander";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.35;
					maxFov = 0.9;
					visionMode[] = {"Normal","TI","NVG"};
					thermalMode[] = {0,1};
				};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponRangeZeroing";
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 2;
				gunnerName = "Communication Operator Front (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatch1";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -80;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1200;
				LODOpticsIn = 1200;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos gunner1";
				memoryPointsGetInGunnerDir = "pos gunner1 dir";
			};
			class CargoGunner_2: CargoGunner_1
			{
				proxyIndex = 3;
				gunnerName = "Communication Operator Rear (FFV)";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				animationSourceHatch = "hatch2";
			};
			class CargoGunner_3: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPGunner";
				proxyIndex = 2;
				gunnerName = "Battalion Commander (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				animationSourceHatch = "hatch3";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				memoryPointGunnerOptics = "Battalionview";
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				class ViewGunner
				{
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -80;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = -1;
				LODOpticsIn = -1;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Antena1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M240_veh";
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				source = "ammorandom";
				weapon = "SG_M240_veh";
			};
		};
		class UserActions
		{
			class ExtendAnt
			{
				displayName = "Extend Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" == 0);";
				statement = "ext = [this,7] execvm ""sg_cup_vehicles\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
			class RetractAnt
			{
				displayName = "Retract Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" > 1);;";
				statement = "ret = [this,0] execvm ""sg_cup_vehicles\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
		};
		hideWeaponsCargo = 1;
		transportSoldier = 1;
		cargoAction[] = {"passenger_apc_narrow_generic01"};
		typicalCargo[] = {};
		threat[] = {0.5,0.0,0.2};
		irScanGround = 1;
		irScanRangeMax = 0;
		irScanRangeMin = 0;
		irScanToEyeFactor = 1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","camoAlfa"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25_HQ_USMC.jpg";
	};