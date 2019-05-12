////////////////////////////////////////////////////////////////////
//DeRap: cup_trackedvehicles_core\config.bin
//Produced from mikero's Dos Tools Dll version 6.34
//'now' is Thu Mar 28 20:17:07 2019 : 'file' last modified on Thu Mar 28 08:14:39 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(5 Enums)
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4
};

class CfgPatches
{
	class sg_vodnik
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"sg_cup_vehicles","sg_btr40","sg_vtn_vehicles","CAData"};
	};
};









class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GAZ_Gunner = "CUP_GAZ_Gunner";
		CUP_GAZ_Driver = "CUP_GAZ_Driver";
		CUP_BRDM2_Cargo01 = "CUP_BRDM2_Cargo01";
		SG_Gunner_Vodnik_PKM = "SG_Gunner_Vodnik_PKM";
		SG_Gunner_Vodnik_MED = "SG_Gunner_Vodnik_MED";
		SG_Gunner_Vodnik = "SG_Gunner_Vodnik";
	
		
	};
};


class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	
	{
		class Crew;
		
		class SG_Gunner_Vodnik_PKM_KIA: DefaultDie	
		{
			actions = "DeadActions";
			file = "\sg_vodnik\data\Anim\sg_vodnik_pkm_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		
		class SG_Gunner_Vodnik_PKM: Crew
		{
			file = "\sg_vodnik\data\Anim\sg_vodnik_pkm_gunner.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_Gunner_Vodnik_PKM_KIA",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		
		class SG_Gunner_Vodnik_MED_KIA: DefaultDie	
		{
			actions = "DeadActions";
			file = "\sg_vodnik\data\Anim\sg_vodnik_med_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		
		class SG_Gunner_Vodnik_MED: Crew
		{
			file = "\sg_vodnik\data\Anim\sg_vodnik_med_gunner.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_Gunner_Vodnik_MED_KIA",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		
		
		class SG_Gunner_Vodnik_KIA: DefaultDie	
		{
			actions = "DeadActions";
			file = "\sg_vodnik\data\Anim\sg_vodnik_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0; 
		};
		
		class SG_Gunner_Vodnik: Crew
		{
			file = "\sg_vodnik\data\Anim\sg_vodnik_gunner.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_Gunner_Vodnik_KIA",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};

		
		class CUP_KIA_BRDM2_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\sg_vodnik\data\Anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BRDM2_Cargo01: Crew
		{
			file = "\sg_vodnik\data\Anim\BRDM2_Cargo01.rtm";
			interpolateTo[] = {"CUP_KIA_BRDM2_Cargo01",1};
		};
		
		class CUP_KIA_GAZ_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vodnik\data\Anim\KIA_GAZ_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_GAZ_Gunner: Crew
		{
			file = "\sg_vodnik\data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[] = {"CUP_KIA_GAZ_Gunner",1};
		};
		class CUP_KIA_GAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vodnik\data\Anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_GAZ_Driver: Crew
		{
			file = "\sg_vodnik\data\Anim\vodnik_driver.rtm";
			interpolateTo[] = {"CUP_KIA_GAZ_Driver",1};
		};
		
		
	};
};



class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	
	class SG_GAZ_Vodnik_Base: Wheeled_APC_F
	{
		
		
		
		accuracy = 0.5;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		typicalCargo[] = {"O_Soldier_F"};

		
		driverAction = "CUP_GAZ_Driver";
		driverInAction = "CUP_GAZ_Driver";
		viewCargoShadow = 1;
		unitInfoType = "UnitInfoShip";

		hideWeaponsCargo = 1;
		
		mapSize = 6.5;
		class Library
		{
			libTextDesc = "$STR_VODNIK_LIB";
		};
		armor = 100;
		damageResistance = 0.0001;
		armorStructural = 1;
		
		forceHideDriver = 1;
		
		threat[] = {0.5,0.5,0.5};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.4;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.4;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.4;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.4;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.65;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.65;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.65;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.65;
			};
		};
		enableGPS = 1;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};

		driverRightHandAnimName = "";
		hideProxyInCombat = 1;
		
		
		
		class AnimationSources: AnimationSources
		{
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
		};
		
		
		
		
		attenuationEffectType = "CarAttenuation";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start",0.39810717,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",0.56234133,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",0.39810717,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",0.56234133,1.0,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
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
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		numberPhysicalWheels = 8;
		terrainCoef = 1.2;
		turnCoef = 3.0;
		simulation = "carx";
		dampersBumpCoef = 3.0;
		maxSpeed = 110;
		fuelCapacity = 280;
		wheelCircumference = 3.55;
		brakeIdleSpeed = 1.78;
		canFloat = 1;
		waterSpeedFactor = 0.5;
		waterResistanceCoef = 0.015;
		waterLeakiness = 1.5;
		engineShiftY = 0.7;
		maxFordingDepth = 1.2;
		waterResistance = 0.5;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 4.0;
		waterPPInVehicle = 0;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45};
			TransmissionRatios[] = {"High",5.539};
			AmphibiousRatios[] = {"R1",-2,"N",0,"D1",5};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
		switchTime = 0.1;
		latency = 1.4;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1},{0.725,0.95},{0.85,0.6},{1,0.3}};
		maxOmega = 471;
		enginePower = 276;
		peakTorque = 1253;
		idleRpm = 800;
		redRpm = 4500;
		thrustDelay = 0.5;
		engineLosses = 14;
		engineBrakeCoef = 0.7;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = 0.2;
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 12500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.35;
				mMaxDroop = 0.5;
				sprungMass = 1645;
				springStrength = 89600;
				springDamperRate = 12795;
				longitudinalStiffnessPerUnitGravity = 3850;
				latStiffX = 25;
				latStiffY = 180;
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
				maxHandBrakeTorque = 300000;
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
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set";
				shortName = "Radio";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"driver",{"cargo",2}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class Reflectors
		{
			class Left
			{
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 100;
				intensity = 1000;
				outerAngle = 140;
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
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
		aggregateReflectors[] = {{"Left","Left2"},{"Right","Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
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
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
		};
		dustFrontLeftPos = "stopa PLL";
		dustFrontRightPos = "stopa PPP";
		dustBackLeftPos = "stopa ZLL";
		dustBackRightPos = "stopa ZPP";
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vodnik\data\gaz39371_vodnik_basis_01.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_cabin.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_module.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass_in.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat"
				
				};
		};
		
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			
			"\sg_vodnik\data\gaz39371_vodnik_basis_01_co.paa",
			"\sg_vodnik\data\gaz39371_vodnik_cabin_co.paa",
			"\sg_vodnik\data\gaz39371_vodnik_mod_out_co.paa",
			"\sg_vodnik\data\rhs_btr80_03_camo_co.paa"
			
		};
			
			
		class textureSources
		{
			
			class CAMO
			{
				displayName = "Camo";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vodnik\data\gaz39371_vodnik_basis_01_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_cabin_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_mod_out_co.paa",
					"\sg_vodnik\data\rhs_btr80_03_camo_co.paa"
				};
				factions[] = {};
			};
			
			
			class GREEN
			{
				displayName = "Green";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vodnik\data\gaz39371_vodnik_basis_01_G_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_cabin_G_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_mod_out_G_co.paa",
					"\rhsafrf\addons\rhs_btr80\data\rhs_btr80_03_co.paa"
				};
				factions[] = {};
			};
			
			class SAND
			{
				displayName = "Sand";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vodnik\data\gaz39371_vodnik_basis_01_des_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_cabin_des_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_mod_out_des_co.paa",
					"\rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa"
				};
				factions[] = {};
			};
			
			class SNOW
			{
				displayName = "Snow";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vodnik\data\gaz39371_vodnik_basis_01_W_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_cabin_W_co.paa",
					"\sg_vodnik\data\gaz39371_vodnik_mod_out_W_co.paa",
					"\sg_vodnik\data\rhs_btr80_03_W_co.paa"
				};
				factions[] = {};
			};
			
		};
			
			
			
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
		ace_refuel_fuelCapacity = 140;
		
		
		class TransportWeapons
		{};
		class TransportMagazines
		{};
		maximumLoad = 5000;
		class TransportItems
		{};
		class TransportBackpacks
		{};
	};
	
	
	
	
	
	
	
	
	
	
	class SG_GAZ_Vodnik: SG_GAZ_Vodnik_Base
	{
		model = "sg_vodnik\GAZ39371_Vodnik_EMPTY.p3d";
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		typicalCargo[] = {"O_Soldier_F"};
		
		displayname = "$STR_VODNIK";
		picture = "sg_vodnik\data\UI\Picture_GAZ39371_CA.paa";
		Icon = "sg_vodnik\data\UI\Icon_GAZ39371_CA.paa";
		editorPreview = "sg_vodnik\Data\preview\CUP_O_GAZ_Vodnik_PK_RU.jpg";
		vehicleClass = "Armored";
		cargoAction[] = {"CUP_BRDM2_Cargo01","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03","passenger_apc_generic03","passenger_apc_generic02","passenger_generic01_foldhands","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_apc_narrow_generic02","passenger_apc_narrow_generic02"};
		transportSoldier = 10;
		
		class Turrets
		{
				class Front_Turret: NewTurret
					{
						LODTurnedIn = 1000;
						LODTurnedOut = 1;
						proxyIndex = 1;
						primaryGunner = 1;
						primaryObserver = 0;
						gunnerName = "$STR_FRONT_HATCH_GUNNER";
						stabilizedInAxes = 0;
						commanding = 2;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						startEngine = 0;
						hasgunner = 1;
						viewGunnerInExternal = 1;
						gunnerForceOptics = 0;						
						forceHideGunner = 0;
						animationSourceHatch = "hatch_user1";
						gunnerAction = "vehicle_turnout_2";
						gunnerInAction = "SG_Gunner_Vodnik";
						memoryPointsGetInGunner = "pos gunner";
						memoryPointsGetInGunnerDir = "pos gunner dir";
						ispersonturret = 1;
						hideWeaponsGunner = 0;
						
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						
						body = "";
						gun = "";
						gunBeg = "";
						gunEnd = "";
						
						maxOutElev = 50;
						minOutElev = -20;
						
						class ViewGunner
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 60;
							initAngleY = 0;
							minAngleY = -70;
							maxAngleY = 70;
							initFov = 0.7;
							minFov = 0.7;
							maxFov = 0.7;
						};
					};

					
					
								
					
					
					
			class Rear_Turret: Front_Turret
			{
				proxyIndex = 2;
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerName = "$STR_REAR_HATCH_GUNNER";
				animationSourceHatch = "hatch_user2";
				gunnerAction = "vehicle_turnout_2";
				body = "rear_gunner";
				animationSourceBody = "rear_gunner";
				
				initTurn = 180;
				minTurn = 180;
				maxTurn = 180;
				
				
			};
		};
		class AnimationSources: AnimationSources
		{
		};
		
		
	}; 
	
	
	
	
	
	
	
	
	
	
	
	class SG_GAZ_Vodnik_MED: SG_GAZ_Vodnik
	{
		model = "sg_vodnik\GAZ39371_Vodnik_MED.p3d";
		displayname = "$STR_VODNIK_MED";
		picture = "sg_vodnik\data\UI\Picture_GAZ39371_CA.paa";
		Icon = "sg_vodnik\data\UI\icon_gaz39371_med_ca.paa";
		editorPreview = "sg_vodnik\Data\preview\CUP_O_GAZ_Vodnik_MedEvac_RU.jpg";
		vehicleClass = "Support";
		transportSoldier = 4;
		cargoAction[] = {"CUP_BRDM2_Cargo01","passenger_apc_narrow_generic01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck02"};
		

		
		class Turrets: Turrets
		{
				class Front_Turret: Front_Turret
					{
						animationSourceHatch = "hatch_user1";
						gunnerAction = "vehicle_turnout_2";
						gunnerInAction = "SG_Gunner_Vodnik_MED";
						
						body = "front_gunner";
						animationSourceBody = "front_gunner";
				
						initTurn = 180;
						minTurn = 180;
						maxTurn = 180;

					};

					
					
								
					
					
					
			class Rear_Turret: Rear_Turret {};
			
		};
		
		
		
		
		
		
		
		
		
		
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	class SG_GAZ_Vodnik_PKM: SG_GAZ_Vodnik
	{
		model = "sg_vodnik\GAZ39371_Vodnik_PKM.p3d";
		displayname = "$STR_VODNIK_PKM";
		
		bn_csw_loading_style = 1;
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vodnik\data\gaz39371_vodnik_basis_01.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_cabin.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_module.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass_in.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				
				"sg_cup_vehicles\data\pkm.rvmat",
				"sg_cup_vehicles\data\pkm.rvmat",
				"sg_cup_vehicles\data\pkm_destruct.rvmat"
				
				};
		};
		
		
		class NewTurret;
		class Turrets: Turrets
		{
			class Front_Turret: NewTurret
			{
				minElev = -10;
				maxElev = 20;
				minTurn = -15;
				maxTurn = 15;
				initElev = 0;
				outGunnerMayFire = 1;
				//gunnerName = "Front Gunner";
				weapons[] = {"SG_VTN_pkm"};
				magazines[] = {"rhs_mag_762x54mm_250"};
				soundServo[] = {};
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				gunnerForceOptics = 0;
				gunnerAction = "SG_Gunner_Vodnik_PKM";
				gunnerInAction = "SG_Gunner_Vodnik_PKM";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				memoryPointGun = "machinegun";
				gunnerLeftHandAnimName = "handle_left";
				gunnerRightHandAnimName = "handle_right";
				
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				LODTurnedOut = 1;
				LODTurnedIn = 1000;
				forceHideGunner = 1;
				disableSoundAttenuation = 1;
				commanding = 2;
				primaryGunner = 1;
				stabilizedInAxes = 0;
				primaryObserver = 0;
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				startEngine = 0;
			};
			
			
			class Rear_Turret: Rear_Turret {};
			
			
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_VTN_pkm";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_VTN_pkm";
			};
			class muzzle_rot_1
			{
				source = "ammorandom";
				weapon = "SG_VTN_pkm";
			};
			class muzzle_hide_1
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_762x54mm_250
			{
				magazine = "rhs_mag_762x54mm_250";
				count = 3;
			};
		};
		
	};
	
	class SG_GAZ_Vodnik_KORD: SG_GAZ_Vodnik_PKM
	{
		model = "sg_vodnik\GAZ39371_Vodnik_KORD.p3d";
		displayname = "$STR_VODNIK_KORD";
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vodnik\data\gaz39371_vodnik_basis_01.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_cabin.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_module.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass_in.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				
				"sg_vtn_vehicles\data\kord_body.rvmat",
				"sg_vtn_vehicles\data\kord_body.rvmat",
				"sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat"
				
				};
		};
		
		class Turrets: Turrets
		{
			class Front_Turret: Front_Turret
			{
				minElev = -10;
				maxElev = 20;
				minTurn = -15;
				maxTurn = 15;
				initElev = 0;
				memoryPointGunnerOptics = "eye";
				//gunnerName = "Front Gunner";
				weapons[] = {"SG_VTN_kord"};
				magazines[] = {"rhs_mag_127x108mm_50"};
				memoryPointGun = "gunnerview";
				gunnerLeftHandAnimName = "handle_left";
				gunnerRightHandAnimName = "handle_right";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};

			class Rear_Turret: Rear_Turret {};
			
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_VTN_kord";
			};
			class trigger1
			{
				source = "trigger";
				weapon = "SG_VTN_kord";
			};
			class cover1
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class cover2
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_VTN_kord";
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "SG_VTN_kord";
			};
			class Barrel_recoil
			{
				source = "Reload";
				weapon = "SG_VTN_kord";
			};
			class muzzle_rot_1
			{
				source = "ammorandom";
				weapon = "SG_VTN_kord";
			};
			class muzzle_hide_1
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_127x108mm_50
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 5;
			};
		};
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	class SG_GAZ_Vodnik_KPVT: SG_GAZ_Vodnik_Base
	{
		scope = 2;
		scopeCurator = 2;
		model = "sg_vodnik\GAZ39371_Vodnik_KPVT.p3d";
		displayname = "$STR_VODNIK_KPVT";
		picture = "sg_vodnik\data\UI\Picture_GAZ39371_CA.paa";
		Icon = "sg_vodnik\data\UI\Icon_GAZ39371_CA.paa";
		vehicleClass = "Armored";
		cargoAction[] = {"CUP_BRDM2_Cargo01","passenger_apc_narrow_generic01"};
		transportSoldier = 2;
		hideProxyInCombat = 0;
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vodnik\data\gaz39371_vodnik_basis_01.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_cabin.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_module.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass_in.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				
				"rhsafrf\addons\rhs_btr80\data\rhs_btr80_03.rvmat",
				"rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_03.rvmat",
				"rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_03.rvmat",
				
				"rhsafrf\addons\rhs_btr70\data\btr_main.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main_destruct.rvmat",
				
				"rhsafrf\addons\rhs_btr70\data\btr_main2.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main2_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main2_destruct.rvmat"
				
				};
		};

		
		
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerLeftHandAnimName = "handleElev";
				gunnerRightHandAnimName = "handleHoriz";
				gunnerHasFlares = 0;
				radarType = 0;
				turretInfoType = "RHS_RscWeapon1PZ32_FCS";
				gunnerForceOptics = 0;
				weapons[] = {"rhs_weap_kpvt","rhs_weap_pkt_btr","rhs_weap_902a"};
				magazines[] = {"rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_145x115mm_50","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17_6"};
				soundServo[] = {"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo",3.141254,1,30};
				soundServoVertical[] = {"rhsafrf\addons\rhs_btr70\sounds\hand_turret_servo_elev",1.141254,1,30};
				viewGunnerInExternal = 1;
				minElev = -5;
				maxElev = 60;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.65;
				maxVerticalRotSpeed = 0.35;
				class TurnIn
				{
					limitsArrayTop[] = {{60,-180},{60,180}};
					limitsArrayBottom[] = {{2,-180},{-4,-150},{-4,0},{-4,150},{2,180}};
				};
				gunnerAction = "rhs_btr70_gunner";
				gunnerInAction = "rhs_btr70_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				//gunnerDoor = "l_door";
				usePiP = 2;
				forceHideGunner = 1;
				canHideGunner = 0;
				LodOpticsIn = 0;
				LodOpticsOut = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				gunnerOutOpticsModel = "";
				memoryPointGun = "kulas";
				selectionFireAnim = "zasleh1";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "mainturret";
				gun = "maingun";
				visionMode[] = {"Normal"};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pp61am";
				gunnerOpticsEffect[] = {"TankGunnerOptics1","WeaponsOptics","OpticsCHAbera3"};
				gunnerOpticsColor[] = {1,1,1,1};
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				outGunnerMayFire = 1;
				startEngine = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				stabilizedInAxes = 0;
				canUseScanners = 0;
				allowTabLock = 0;
				gunnerUsesPilotView = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
						minimalHit = 0.44;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
						minimalHit = 0.44;
						radius = 0.2;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.241379;
					minFov = 0.241379;
					maxFov = 0.241379;
				};
				/*class ViewGunner
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
				};*/
				class OpticsIn
				{
					class 1pz3x12
					{
						opticsDisplayName = "DAY";
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.583333;
						minFov = 0.583333;
						maxFov = 0.583333;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pz32s";
						hitpoint = "Hit_Optic_MainSight";
					};
					class 1pz3x4: 1pz3x12
					{
						initFov = 0.175;
						minFov = 0.175;
						maxFov = 0.175;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pz32";
					};
					class bpk142n: 1pz3x12
					{
						opticsDisplayName = "NIGHT";
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
						hitpoint = "Hit_Optic_MainSight";
					};
					class RearView: 1pz3x12
					{
						opticsDisplayName = "REAR";
						camPos = "view_turret_rear";
						camDir = "view_turret_rear_dir";
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5";
						initFov = 0.7;
						maxFov = 0.7;
						minFov = 0.7;
						visionMode[] = {"Normal"};
						hitpoint = "Hit_Optic_Turret_Rear";
					};
				};
				class Turrets{};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType = "EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType = "CrewDisplayComponent";
							resource = "RscCustomInfoCrew";
						};
					};
				};
			};
			
		};
		class AnimationSources: AnimationSources
		{
			class cabinlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
			};
			class recoil_source
			{
				source = "reload";
				weapon = "rhs_weap_kpvt";
			};
			class smokecap_revolving_source
			{
				source = "revolving";
				weapon = "rhs_weap_902a";
			};
			class muzzle_hide_hmg: recoil_source{};
			class muzzle_rot_hmg: recoil_source
			{
				source = "ammorandom";
			};
			class muzzle_rot_mg: muzzle_rot_hmg
			{
				weapon = "rhs_weap_pkt_btr";
			};
			class HitMainSight
			{
				source = "Hit";
				hitpoint = "Hit_Optic_MainSight";
			};
		};
		class TransportMagazines
		{};
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class SG_GAZ_Vodnik_2A72: SG_GAZ_Vodnik_KPVT
	{
		model = "sg_vodnik\GAZ39371_Vodnik_2A72.p3d";
		displayname = "$STR_VODNIK_2A72";
		picture = "sg_vodnik\data\UI\Picture_GAZ39371_CA.paa";
		Icon = "sg_vodnik\data\UI\Icon_GAZ39371_CA.paa";
		editorPreview = "sg_vodnik\Data\preview\CUP_O_GAZ_Vodnik_BPPU_RU.jpg";
		vehicleClass = "Armored";
		cargoAction[] = {"CUP_BRDM2_Cargo01","passenger_apc_narrow_generic01"};
		transportSoldier = 2;
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vodnik\data\gaz39371_vodnik_basis_01.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_basis_01_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_cabin.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_cabin_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_module.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_module_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_int_destruct.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_damage.rvmat",
				
				"sg_vodnik\data\gaz39371_vodnik_glass_in.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				"sg_vodnik\data\gaz39371_vodnik_glass_in_damage.rvmat",
				
				"rhsafrf\addons\rhs_btr80\data\rhs_btr80_03.rvmat",
				"rhsafrf\addons\rhs_btr80\data\rhs_dam_btr80_03.rvmat",
				"rhsafrf\addons\rhs_btr80\data\rhs_destr_btr80_03.rvmat",
				
				"rhsafrf\addons\rhs_btr70\data\btr_main.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main_destruct.rvmat",
				
				"rhsafrf\addons\rhs_btr70\data\btr_main2.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main2_damage.rvmat",
				"rhsafrf\addons\rhs_btr70\data\btr_main2_destruct.rvmat"
				
				};
		};
				
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RHS_RscWeaponBPK42_BTR80A_FCS";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				gunnerAction = "rhs_btr80a_gunner";
				gunnerLeftHandAnimName = "handleHoriz";
				gunnerRightHandAnimName = "handleElev_1";
				minElev = -7;
				maxElev = 70;
				minTurn = -360;
				maxTurn = 360;
				class TurnIn
				{
					limitsArrayTop[] = {{70,-180},{70,180}};
					limitsArrayBottom[] = {{-7,-180},{-7,180}};
				};
				class OpticsIn
				{
					class bpk142
					{
						opticsDisplayName = "DAY";
						initAngleX = 0;
						minAngleX = -110;
						maxAngleX = 110;
						initAngleY = 0;
						minAngleY = -110;
						maxAngleY = 110;
						opticsZoomMin = 0.14;
						opticsZoomMax = 0.14;
						distanceZoomMin = 200;
						distanceZoomMax = 2000;
						initFov = 0.125;
						minFov = 0.125;
						maxFov = 0.125;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
						hitpoint = "Hit_Optic_MainSight";
					};
					class bpk142n: bpk142
					{
						opticsDisplayName = "NIGHT";
						initFov = 0.14;
						minFov = 0.14;
						maxFov = 0.14;
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					};
				};
				weapons[] = {"rhs_weap_2a72_btr","rhs_weap_pkt_btr80a","rhs_weap_902a"};
				magazines[] = {"rhs_mag_3uof8_340","rhs_mag_3ubr11_160","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_3d17_6"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "rhs_weap_2a72_btr";
			};
			class muzzle_hide_hmg: recoil_source{};
			class muzzle_rot_hmg: recoil_source
			{
				source = "ammorandom";
			};
			class muzzle_rot_mg: muzzle_rot_hmg
			{
				weapon = "rhs_weap_pkt_btr80a";
			};
		};
		class TransportMagazines
		{};
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};
