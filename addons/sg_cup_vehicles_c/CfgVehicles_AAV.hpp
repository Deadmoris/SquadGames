	class SG_AAV_Base: Tank_F
	{
		displayName = "AAVP7/A1";
		expansion = 3;
		vehicleClass = "Armored";
		editorSubcategory = "EdSubcat_APCs";
		author = "$STR_CUP_AUTHOR_STRING";
		model = "\sg_cup_vehicles\CUP_AAV.p3d";
		icon = "\sg_cup_vehicles\data\UI\icomap_aav_ca.paa";
		picture = "\sg_cup_vehicles\data\UI\pic_aav_ca.paa";
		mapSize = 9;
		destrType = "DestructDefault";
		accuracy = 0.7;
		threat[] = {1,1,0.3};
		cost = 4000000;
		armor = 160;
		armorStructural = 2.5;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.995;
		damageResistance = 0.01168;
		canFloat = 1;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.07;
		waterLeakiness = 2.5;
		waterSpeedFactor = 0.5;
		waterAngularDampingCoef = 5.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 0.5;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		engineShiftY = 0.1;
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		
		
		class ViewOptics: ViewOptics
		{
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
		};	
		
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
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
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		cargoAction[] = {"passenger_low01"};
		hideWeaponsCargo = 1;
		transportSoldier = 10;
		cargoProxyIndexes[] = {1,2,6,9,10,11,12,14};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		driverAction = "CUP_AAV_Driver_OUT";
		driverInAction = "CUP_AAV_Driver";
		forceHideDriver = 0;
		LODTurnedIn = 1000;
		LODTurnedOut = 1;
		viewDriverInExternal = 1;
		supplyRadius = 3;
		driverForceOptics = 0;
		commanderUsesPilotView = 1;
		driverWeaponsInfoType = "CUP_RscOptics_driver_CO";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		fireDustEffect = "FDustEffects_none";
		memoryPointTrack1L = "Track LL";
		memoryPointTrack1R = "Track LR";
		memoryPointTrack2L = "Track RL";
		memoryPointTrack2R = "Track RR";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1,20};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start",0.630957,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start",0.794328,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop",0.630957,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop",0.794328,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1",0.794328,1,200};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2",0.891251,1,240};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3",1.12202,1,280};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4",1.25893,1,320};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5",1.41254,1,360};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6",1.58489,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7",1.77828,1,440};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",1.12202,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",1.41254,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",1.77828,1,230};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",1.99526,1,290};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",1.77828,1,350};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",2.23872,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",2.51189,1,450};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",0.354813,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",0.398107,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",0.562341,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",0.398107,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",0.562341,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.501187,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.891251,1,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",0.398107,1,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",0.446684,1,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",0.501187,1,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",0.562341,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",0.562341,1,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",0.316228,1,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",0.354813,1,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",0.398107,1,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",0.446684,1,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",0.501187,1,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",0.281838,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
		maxSpeed = 72;
		numberPhysicalWheels = 16;
		simulation = "tankX";
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		thrustDelay = 0;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		tankTurnForce = 397700;
		wheelCircumference = 2.15;
		torqueCurve[] = {{"(800/2600)","(860/1660)"},{"(1000/2600)","(1420/1660)"},{"(1200/2600)","(1660/1660)"},{"(1400/2600)","(1570/1660)"},{"(1700/2600)","(1510/1660)"},{"(2000/2600)","(1450/1660)"},{"(2350/2600)","(1400/1660)"},{"(2877/2600)","(0/1660)"}};
		maxOmega = 272.27;
		enginePower = 447;
		peakTorque = 1660;
		idleRPM = 800;
		redRPM = 2600;
		engineLosses = 25;
		transmissionLosses = 15;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.2,"N",0,"D1",4.2,"D2",3.05,"D3",1.92,"D4",1.4};
			TransmissionRatios[] = {"High",10.15};
			AmphibiousRatios[] = {"R1",-20,"N",0,"D1",10};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.0,0.85,0.85,0.85,0.85};
		switchTime = 0.1;
		latency = 1.0;
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 35.8;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 2425.0;
				springStrength = 60625;
				springDamperRate = 9700;
				dampingRate = 1.0;
				dampingRateInAir = 8400.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		viewDriverShadow = 1;
		viewGunnerShadow = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
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
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		selectionBrakeLights = "light_brake";
		selectionBackLights = "lights_back";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		cargoCompartments[] = {"Compartment3"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "CUP_RscOptics_gunner_TNBECO";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				weapons[] = {"SG_M2","SG_MK19_veh"};
				magazines[] = {
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag_Tracer_Red",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19_M1001",
				"RHS_96Rnd_40mm_MK19_M430I",
				"RHS_96Rnd_40mm_MK19_M430I"
				};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				outGunnerMayFire = 0;
				gunnerForceOptics = 1;
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Gunner";
				forceHideGunner = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				ispersonturret = 1;
				minOutElev = -30;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				memoryPointGun = "machinegun";
				selectionFireAnim = "muzzleFlashHMG";
				gunBeg = "gmg_start";
				gunEnd = "gmg_end";
				gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				ace_fcs_enabled = 0;
				class Turrets{};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466666;
						minFov = 0.466666;
						maxFov = 0.466666;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
					};
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.2;
						explosionShielding = 0.09;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "main_gun";
						visual = "main_gun";
						passThrough = 0;
						minimalHit = 0.2;
						explosionShielding = 0.09;
						radius = 0.25;
					};
				};
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CommanderTurret: NewTurret
			{
				turretInfoType = "CUP_RscOptics_commander_ECO";
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_SG_Commander";
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerForceOptics = 0;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Commander";
				ispersonturret = 1;
				minOutElev = -20;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				soundServo[] = {"","db-50",1.0};
				gunBeg = "";
				gunEnd = "";
				commanding = 2;
				gunnerOpticsModel = "\sg_cup_vehicles\2Dscope_com2";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "optics_commander";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceHatch = "hatchCommander";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
				outGunnerMayFire = 1;
				class ViewOptics
				{
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
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 3;
				gunnerName = "$STR_PASSANGER_F_R";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "CargoGunner_1";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_low01";
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
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				memoryPointsGetInGunner = "pos frontright";
				memoryPointsGetInGunnerDir = "pos frontright dir";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				gunnerCompartments = "Compartment3";
			};
			class CargoGunner_2: CargoGunner_1
			{
				proxyIndex = 13;
				gunnerName = "$STR_PASSANGER_M_R";
				animationSourceHatch = "CargoGunner_2";
				memoryPointsGetInGunner = "pos midright";
				memoryPointsGetInGunnerDir = "pos midright dir";
			};
			class CargoGunner_3: CargoGunner_1
			{
				proxyIndex = 5;
				gunnerName = "Back Right FFV";
				animationSourceHatch = "CargoGunner_3";
				memoryPointsGetInGunner = "pos backright";
				memoryPointsGetInGunnerDir = "pos backright dir";
			};
			class CargoGunner_4: CargoGunner_1
			{
				proxyIndex = 7;
				gunnerName = "$STR_PASSANGER_F_L";
				animationSourceHatch = "CargoGunner_4";
				memoryPointsGetInGunner = "pos frontleft";
				memoryPointsGetInGunnerDir = "pos frontleft dir";
			};
			class CargoGunner_5: CargoGunner_1
			{
				proxyIndex = 4;
				gunnerName = "$STR_PASSANGER_M_L";
				animationSourceHatch = "CargoGunner_5";
				memoryPointsGetInGunner = "pos midleft";
				memoryPointsGetInGunnerDir = "pos midleft dir";
			};
			class CargoGunner_6: CargoGunner_1
			{
				proxyIndex = 8;
				gunnerName = "Back Left FFV";
				animationSourceHatch = "CargoGunner_6";
				memoryPointsGetInGunner = "pos backleft";
				memoryPointsGetInGunnerDir = "pos backleft dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class plate_front
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class turbine_cover_left: plate_front{};
			class turbine_cover_right: plate_front{};
			class muzzle_rot_GMG
			{
				source = "ammorandom";
				weapon = "SG_MK19_veh";
			};
			class muzzle_hide_GMG
			{
				source = "reload";
				weapon = "SG_MK19_veh";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "SG_M2";
			};
			class CargoHatch_Right: plate_front
			{
				animPeriod = 1;
			};
			class CargoHatch_Left: plate_front
			{
				animPeriod = 1;
			};
			class Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Equipment)";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				author = "CUP_AUTHOR_STRING";
			};
			class Hide_Bags_Deployment: Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Bags)";
			};
		};
		class textureSources
		{
			class Woodland
			{
				displayName = "Woodland";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
				factions[] = {};
			};
			class RACS
			{
				displayName = "RACS";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_cup_vehicles\data\aav_ext_racs_co.paa","sg_cup_vehicles\data\aav_ext2_racs_co.paa"};
				factions[] = {};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			class CUP_TrackedVehicles_AAV
			{
				init = "_scr = _this execVM '\sg_cup_vehicles\scripts\init.sqf'";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\aav_ext.rvmat","sg_cup_vehicles\data\aav_ext_damage.rvmat","sg_cup_vehicles\data\aav_ext_destruct.rvmat","sg_cup_vehicles\data\aav_ext2.rvmat","sg_cup_vehicles\data\aav_ext2_damage.rvmat","sg_cup_vehicles\data\aav_ext2_destruct.rvmat","sg_cup_vehicles\data\aav_tracks.rvmat","sg_cup_vehicles\data\aav_tracks_damage.rvmat","sg_cup_vehicles\data\aav_tracks_destruct.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				passThrough = 1;
				minimalHit = 0.3;
				explosionShielding = 0.009;
				radius = 0.25;
				visual = "zbytek";
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.3;
				material = -1;
				armorComponent = "HitTrackL";
				name = "hit_trackL_point";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.3;
				material = -1;
				armorComponent = "HitTrackR";
				name = "hit_trackR_point";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 0.7;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.3;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
		};
		class Library
		{
			libTextDesc = "";
		};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		ace_refuel_fuelCapacity = 647;
		maximumLoad = 5000;
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
	class SG_B_AAV_USMC: SG_AAV_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.7;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 1;
		crew = "rhsusf_army_ucp_crewman";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_AAV_USMC.jpg";
	};
	class SG_B_AAV_Unarmed_USMC: SG_AAV_Base
	{
		displayName = "AAVC7/A1 (Command)";
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.7;
		threat[] = {0.5,0.5,0.1};
		author = "$STR_CUP_AUTHOR_STRING";
		side = 1;
		crew = "rhsusf_army_ucp_crewman";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		model = "\sg_cup_vehicles\CUP_aav_unarmed.p3d";
		picture = "\sg_cup_vehicles\data\UI\pic_aavun_ca.paa";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_AAV_USMC.jpg";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
			class Intercom_2
			{
				displayName = "Passenger Intercom";
				shortName = "Pax";
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
				allowedPositions[] = {{"cargo","all"}};
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
				allowedPositions[] = {{"cargo","all"}};
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
				allowedPositions[] = {{"cargo","all"}};
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
				allowedPositions[] = {{"cargo","all"}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: CommanderTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 1;
				gunnerName = "Gunner";
				primaryGunner = 1;
				primaryObserver = 0;
				gunnerForceOptics = 0;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Commander";
				ispersonturret = 1;
				minOutElev = -20;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				soundServo[] = {"","db-50",1.0};
				gunBeg = "";
				gunEnd = "";
				commanding = 2;
				gunnerOpticsModel = "\sg_cup_vehicles\2Dscope_com2";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "gunnerview";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceHatch = "hatchGunner";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				LODTurnedIn = 1100;
				LODTurnedOut = 1;
				weapons[] = {};
				magazines[] = {};
				outGunnerMayFire = 1;
				class ViewOptics
				{
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
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CommanderTurret: CommanderTurret{};
			class CargoGunner_1: CargoGunner_1{};
			class CargoGunner_2: CargoGunner_2{};
			class CargoGunner_3: CargoGunner_3{};
			class CargoGunner_4: CargoGunner_4{};
			class CargoGunner_5: CargoGunner_5{};
			class CargoGunner_6: CargoGunner_6{};
		};
	};