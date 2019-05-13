	class SG_T55_Base: Tank_F  //Двигатель Т-55
	{
		expansion = 3;
		displayName = "T-55";
		model = "\sg_cup_vehicles\CUP_T55.p3d";
		picture = "\sg_cup_vehicles\Data\UI\Picture_t55_CA.paa";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_t55_CA.paa";
		driverOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
		mapSize = 10;
		driverForceOptics = 1;
		driverAction = "CUP_M113_Driver_EP1";
		driverInAction = "CUP_T55_Driver_EP1";
		forceNVG = 1;
		tracksSpeed = 0.25;
		driverWeaponsInfoType = "CUP_RscOptics_driver_CO";
		simulation = "tankX";
		enginePower = 209;
		maxOmega = 209.44;
		peakTorque = 1176;
		torqueCurve[] = {{"(000/2000)",0},{"(600/2000)","(1700/2245)"},{"(800/2000)","(1950/2245)"},{"(1200/2000)","(2150/2245)"},{"(1400/2000)","(2245/2245)"},{"(1600/2000)","(1675/2245)"},{"(2000/2000)","(1200/2245)"},{"(3000/2000)",0}};
		thrustDelay = 0.6;
		clutchStrength = 80.0;
		fuelCapacity = 520;
		brakeIdleSpeed = 1.78;
		latency = 1.1;
		tankTurnForce = 330000;
		idleRpm = 500;
		redRpm = 1200;
		//физика
		maxFordingDepth = -0.8;
		waterResistance		= 0;
		waterDamageEngine	= 0.2;
		waterLeakiness		= 5;	
		accelAidForceYOffset = -3;
		//конец
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95,0.75};
		normalSpeedForwardCoef = 0.7;
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-15.0,"N",0,"D1",1.25,"D2",1.2,"D3",1.15,"D4",1.05,"D5",0.95};  //деф. задней передачи -7
			TransmissionRatios[] = {"High",11.8};
			gearBoxMode = "auto";
			moveOffGear = 0;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.6;
		};
		class Wheels
		{
			class L2
			{
				wheelBrakeFrictionCoef = 0.01;
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 27.6;
				latStiffX = 24;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 4000.0;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1.0;
				dampingRateInAir = 7295.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
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
		scope = 0;
		accuracy = 0.8;
		armor=150;
		armorStructural=200; //Было 500, тогда как у Т72 - 220
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.995;
		damageResistance = 0.00843;
		destrType = "DestructDefault";
		cost = 1500000;
		unitInfoType = "RHS_RscInfoT72";
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneControlActions[] = {"all"};
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhonePosition[] = {0,0,0};
		acre_infantryPhoneIntercom[] = {"all"};
		class ACE_SelfActions: ACE_SelfActions {
			class BN_CSW_Load_loader {
				displayName = "$STR_LOAD_BN";
				distance = 2;
				condition = "(!isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_loader) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_loader";
			};
		};
		transportMaxMagazines = 400;
		bn_csw_loading_loaders[] = {{0,1}};
		bn_csw_loading_loaderturrets[] = {{{0}}};
		bn_csw_loading_loaderguns[] = {{{"sg_weap_D10","sg_pkt_t55"}}};
				
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
				limitedPositions[] = {};
				masterPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set";
				shortName = "Radio";
				componentname = "ACRE_VRC64";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.8;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=0;
				minimalHit=0.34;
				explosionShielding=0.1;
				radius=0.25;
			};
			class HitEngine: HitEngine
			{
				armor=0.35;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
				minimalHit=0.09;
				explosionShielding=0.1;
				radius=0.27;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.25;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit=0.25;
				explosionShielding=0.5;
				radius=0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.25;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit=0.25;
				explosionShielding=0.5;
				radius=0.3;
			};
		};
		maxSpeed = 48;
		supplyRadius = 5;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectTankBack";
			};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"db-85",1};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",1.0,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",1.0,1.0,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1.0,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1.0,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1.0,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1.0,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class TransportMagazines {
			class _xx_sg_mag_bm25_1
			{
				magazine = "sg_mag_bm25_2_1";
				count = 13;
			};
			class _xx_sg_mag_bk17_1
			{
				magazine = "sg_mag_bk17_1";
				count = 14;
			};
			class _xx_sg_mag_of412_1
			{
				magazine = "sg_mag_of412_1";
				count = 15;
			};
			class _xx_sg_mag_762x54mm_250
			{
				magazine = "sg_mag_762x54mm_250";
				count = 4;
			};
		}; 
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",0.56234133,1,160};
				frequency = "0.95 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",0.7943282,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",0.8912509,1,260};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",1.0,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",1.1220185,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",1.2589254,1,320};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",1.0,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",1.1220185,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",1.2589254,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",1.4125376,1,340};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",1.7782794,1,360};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",1.9952624,1,380};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",3.1622777,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",3.1622777,1.0,250};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
		};
		radarType = 4;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isPersonTurret = 0;
				LODTurnedOut = 1;
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "CUP_T55_Gunner_EP1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				selectionFireAnim = "zasleh";
				weapons[] = {"sg_weap_D10","sg_pkt_t55"};
				magazines[] = {"sg_mag_762x54mm_250"};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				stabilizedInAxes = 3;
				maxHorizontalRotSpeed = 0.45;
				maxVerticalRotSpeed = 0.2;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
				visionMode[] = {"Normal","NVG"};
				turretInfoType = "sg_RscWeapont55_FCS";
				lockWhenDriverOut = 1;
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				ace_fcs_enabled = 0;
				minElev = -3;
				maxElev = 18;
				initElev = 0;
				minOutElev = -20;
				maxOutElev = 70;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				soundElevation[] = {"",0.00316228,1};
				soundServo[] = {"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo",3.14125,1,30};
                soundServoVertical[] = {"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo_elev.wss",1.141254,1,30};
				class TurnIn //Ограничиваем вертикальный угол на жопу, чтобы пушка не уходила в текстуру
				{
					limitsArrayTop[] = {{18,-180},{18,180}};
					limitsArrayBottom[] = {{1.4,-180},{0.7,-134.6867},{-9.3683,-133.6867},{-10,0},{-9.7173,133.6372},{0.7,134.6867},{1.4,180}};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG"};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.35/ 3.5";
						minFov = "0.35/ 3.5";
						maxFov = "0.35/ 3.5";
						visionMode[] = {"Normal","NVG"};
						thermalMode[] = {4,5};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						initFov =  "0.35/ 6.5";
						minFov =  "0.35/ 6.5";
						maxFov =  "0.35/ 6.5";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
					};
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
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						opticsDisplayName = "PERISCOPE";
					};
				};
				class Turrets: Turrets
				{
					
					class CommanderOptics: CommanderOptics
					{
						turretInfoType = "sg_compas";
						isPersonTurret = 1;
						LODTurnedOut = 1;
						weapons[] = {};
						magazines[] = {};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "passenger_bench_1";
						gunnerInAction = "CUP_T55_Commander_EP1";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						stabilizedInAxes = 2;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minOutElev = -40;
						maxOutElev = 70;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						forceNVG = 1;
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						startEngine = 0;
						memoryPointGunnerOutOptics = "CommanderViewOut";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_2";
						gunnerOutOpticsModel = "";
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						commanding = 2;
						viewGunnerInExternal = 0;
						class OpticsIn
						{
							class Wide
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.155;
								minFov = 0.034;
								maxFov = 0.155;
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3_night.p3d";
								visionMode[] = {"Normal","NVG"};
								thermalMode[] = {4,5};
							};
						};
					};
					class Loader: Newturret
					{
						startEngine = 0;
						forceHideGunner = 0;
						gunnerForceOptics = 1;
						
						memoryPointGunnerOptics = "commanderview";
						gunnerAction = "passenger_bench_1";
						isPersonTurret = 1;
						// personTurretAction = "vehicle_turnout_1";
						gunnerInAction = "CUP_T55_Gunner_EP1";
						animationSourceHatch = "hatchGunner";
						gunnername = "$STR_Loader_t55";
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = 0.7;
								minFov = 0.7;
								maxFov = 0.7;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.2;
						explosionShielding=0.005;
						radius=0.25;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0.5;
						explosionShielding=0.005;
						radius=0.25;
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				commanding = -2;
				gunnerName = "$STR_PASSANGER_T_L";
				gunnerCompartments = "Compartment2";
				gunnerUsesPilotView = 0;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				primaryGunner = 0;
				isCopilot = 0;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				caneject = 1;
				weapons[] = {};
				magazines[] = {};
				gunnerForceOptics = 0;
				startEngine = 0;
				ejectDeadGunner = 1;
				isPersonTurret = 1;
				canHideGunner = 0;
				minElev = -20;
				maxElev = 35;
				initElev = 0;
				minTurn = -75;
				maxTurn = 75;
				initTurn = 0;
				class dynamicViewLimits{};
				class ViewPilot: ViewPilot
				{
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 0;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -170;
					maxAngleY = 170;
				};
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_T_R";
				proxyIndex = 2;
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_F_L";
				proxyIndex = 3;
				gunnerAction = "passenger_flatground_2";
				minTurn = -25;
				maxTurn = 75;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_PASSANGER_F_R";
				proxyIndex = 4;
				gunnerAction = "passenger_flatground_2";
				minTurn = -75;
				maxTurn = 25;
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerName = "$STR_PASSANGER_R_L";
				proxyIndex = 5;
				minTurn = -75;
				maxTurn = 75;
			};
			class CargoTurret_06: CargoTurret_04
			{
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 6;
				minTurn = -75;
				maxTurn = 75;
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "sg_weap_D10";
			};
			class muzzle_hide_main
			{
				source = "reload";
				weapon = "sg_pkt_t55";
			};
			class muzzle_rot_main
			{
				source = "ammorandom";
				weapon = "sg_pkt_t55";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\t55_body_co","\sg_cup_vehicles\data\t55_tower_co"};
		class textureSources
		{
			class olive
			{
				displayName = "Olive";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_olive_co.paa","\sg_cup_vehicles\data\t55_tower_olive_co.paa"};
				factions[] = {};
			};
			class CHDKZ
			{
				displayName = "CHDKZ";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_CHDKZ_co.paa","\sg_cup_vehicles\data\t55_tower_CHDKZ_co.paa"};
				factions[] = {};
			};
			class TKA
			{
				displayName = "Takistani Army";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_co.paa","\sg_cup_vehicles\data\t55_tower_co.paa"};
				factions[] = {};
			};
			class TKG
			{
				displayName = "Takistani Guerilla";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_TKG_co.paa","\sg_cup_vehicles\data\t55_tower_TKG_co.paa"};
				factions[] = {};
			};
			class SLA
			{
				displayName = "Sahrani Liberation Army";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_sla_co.paa","\sg_cup_vehicles\data\t55_tower_sla_co.paa"};
				factions[] = {};
			};
			class CSAT
			{
				displayName = "CSAT";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_csat_co.paa","\sg_cup_vehicles\data\t55_tower_csat_co.paa"};
				factions[] = {};
			};
			class CSAT_T
			{
				displayName = "CSAT Tropical";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_csat_t_co.paa","\sg_cup_vehicles\data\t55_tower_csat_t_co.paa"};
				factions[] = {};
			};
		};
		type = 1;
		threat[] = {0.4,0.4,0.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\t55_body.rvmat","sg_cup_vehicles\data\t55_body_damage.rvmat","sg_cup_vehicles\data\t55_body_destruct.rvmat","sg_cup_vehicles\data\t55_tower.rvmat","sg_cup_vehicles\data\t55_tower_damage.rvmat","sg_cup_vehicles\data\t55_tower_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 60;
				intensity = 1000;
				outerAngle = 90;
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
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class CommanderLight: LeftLight
			{
				position = "COM svetlo";
				direction = "konec COM svetla";
				hitpoint = "COM svetlo";
				selection = "COM svetlo";
			};
		};
		aggregateReflectors[] = {{"CommanderLight"},{"LeftLight"},{"RightLight"}};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_T55";
		};
		ace_refuel_fuelCapacity = 960;
		maximumLoad = 2500;
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
	class SG_T55: SG_T55_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_crew_F"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\t55_body_csat_co","\sg_cup_vehicles\data\t55_tower_csat_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_O_T55_CSAT.jpg";
	};