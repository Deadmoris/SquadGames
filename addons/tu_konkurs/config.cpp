#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class tu_konkurs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Static_F_Gamma","A3_CargoPoses_F","A3_Armor_F_Slammer","A3_Weapons_F","bn_csw_load"};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgAmmo
{
	class rhs_ammo_9m113;
	class tu_ammo_9m113: rhs_ammo_9m113
	{
		// ais_ce_penetrators[] = {"tu_ammo_9m113_penetrator"};
		submunitionAmmo = "tu_ammo_9m113_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class rhs_ammo_9m113_penetrator;
	class tu_ammo_9m113_penetrator: rhs_ammo_9m113_penetrator
	{
		caliber = 40; // "(600/((15*1000)/1000))"
	};
	class tu_ammo_9m111m: rhs_ammo_9m113
	{
		// ais_ce_penetrators[] = {"tu_ammo_9m111m_penetrator"};
		submunitionAmmo = "tu_ammo_9m111m_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class tu_ammo_9m111m_penetrator: rhs_ammo_9m113_penetrator
	{
		caliber = 27; //"(400/((15*1000)/1000))"
	};
};
class CfgMagazines
{
	class rhs_mag_9m113_3;
	class TU_1Rnd_9m113m: rhs_mag_9m113_3
	{
		displayName = "Ракета 9М113М";
		descriptionShort = "Ракета 9М113М в транспортно-пусковом контейнере";
		count = 1;
		model = "\tu_konkurs\konkurs_1tube_mag.p3d";
		picture = "\tu_konkurs\konkurs_1tube_ca.paa";
		mass = 160;
	};
	class TU_1Rnd_9m113: TU_1Rnd_9m113m
	{
		ammo = "tu_ammo_9m113";
		displayName = "Ракета 9М113";
		descriptionShort = "Ракета 9М113 в транспортно-пусковом контейнере";
		displayNameShort = "$STR_RHS_MAG_SH_9M113";
		mass = 160;
	};
	class TU_1Rnd_9m111m: TU_1Rnd_9m113m
	{
		ammo = "tu_ammo_9m111m";
		displayName = "Ракета 9М111М";
		descriptionShort = "Ракета 9М111М в транспортно-пусковом контейнере";
		displayNameShort = "$STR_TU_MAG_SH_9M111M";
		mass = 160;
	};
};
class CfgWeapons
{	
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class TU_9P135_NVG: ACE_ItemCore {
		scope = 2;
		displayName = "ПНВ для 9К111-1 Конкурс";
		model = "\tu_konkurs\konkurs_nvg_mag.p3d";
		picture = "\tu_konkurs\konkurs_nvg_ca";
		mass = 60;
		class ItemInfo: InventoryItem_Base_F {
			mass = 60;
		displayName = "ПНВ для 9К111-1 Конкурс";
		};
	};
	class TU_9P135_TWS: ACE_ItemCore {
		scope = 2;
		displayName = "ТВП для 9К111-1 Конкурс";
		model = "\tu_konkurs\konkurs_tws_mag.p3d";
		picture = "\tu_konkurs\konkurs_tws_ca";
		mass = 60;
		class ItemInfo: InventoryItem_Base_F {
			mass = 60;
		displayName = "ТВП для 9К111-1 Конкурс";
		};
	};
	class TU_9P151_TWS: ACE_ItemCore {
		scope = 2;
		displayName = "ТВП для 9К115-1 Метис-М";
		model = "\tu_konkurs\metis_tws_mag.p3d";
		picture = "\tu_konkurs\metis_tws_ca";
		mass = 60;
		class ItemInfo: InventoryItem_Base_F {
			mass = 60;
		displayName = "ТВП для 9К115-1 Метис-М";
		};
	};
	class rhs_weap_9K115_2_launcher;
	class TU_9M113_Launcher: rhs_weap_9K115_2_launcher
	{
		displayName = "9К111-1 Конкурс";
		magazines[] = {"TU_1Rnd_9m113m","TU_1Rnd_9m113","TU_1Rnd_9m111m"};
	};
	class TU_9M111M_Launcher: TU_9M113_Launcher
	{
		displayName = "9К111 Фагот";
		magazines[] = {"TU_1Rnd_9m111m"};
	};
};

class cfgFunctions {
	class pzn_csw {
		class category {
			class unasssemble {
				file = "tu_konkurs\scripts\unassemble.sqf";
				recompile = 1;
			};
		};
	};
};


class CfgVehicles
{
	class Bag_Base;
	// class B_AssaultPack_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class TU_9M113M_Single: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\konkurs_1tube_bag.p3d";
		picture = "\tu_konkurs\konkurs_1tube_ca.paa";
		displayName = "Ракета 9М113М Конкурс-М";
		hiddenSelectionsTextures[] = {};
		mass = 600;
		maximumLoad = .1;
		pzn_tube_mag = "TU_1Rnd_9m113m";
		
	};
	/* class TU_9M113M_Double: TU_9M113M_Single
	{
		model = "\tu_konkurs\konkurs_2tube_bag.p3d";
		picture = "\tu_konkurs\konkurs_2tube_ca.paa";
		displayName = "Ракеты 9М113М Конкурс-М";
		mass = 1200;
		pzn_single_tube = "TU_9M113M_Single";
	}; */
	/* class TU_9M113_Double: TU_9M113M_Double
	{
		displayName = "Ракеты 9М113 Конкурс";
		mass = 1100;
		pzn_tube_mag = "TU_1Rnd_9m113";
		pzn_single_tube = "TU_9M113_Single";
	}; */
	class TU_9M113_Single: TU_9M113M_Single
	{
		displayName = "Ракета 9М113 Конкурс";
		mass = 550;
		pzn_tube_mag = "TU_1Rnd_9m113";
	};
	/* class TU_9M111M_Double: TU_9M113M_Double
	{
		displayName = "Ракеты 9М111М Фактория";
		mass = 600;
		pzn_tube_mag = "TU_1Rnd_9m111m";
		pzn_single_tube = "TU_9M111M_Single";
	}; */
	class TU_9M111M_Single: TU_9M113M_Single
	{
		displayName = "Ракета 9М111М Фактория";
		mass = 300;
		pzn_tube_mag = "TU_1Rnd_9m111m";
	};
	class TU_9M115_Double: TU_9M113M_Single
	{
		model = "\tu_konkurs\metis_2tube_bag.p3d";
		picture = "\tu_konkurs\metis_2tube_ca.paa";
		displayName = "Ракеты 9М115 Метис";
		mass = 300;
		pzn_tube_mag = "rhs_mag_9M115";
		pzn_single_tube = "TU_9M115_Single";
	};
	class TU_9M115_Single: TU_9M113M_Single
	{
		model = "\tu_konkurs\metis_1tube_bag.p3d";
		picture = "\tu_konkurs\metis_1tube_ca.paa";
		displayName = "Ракета 9М115 Метис";
		mass = 150;
		pzn_tube_mag = "rhs_mag_9M115";
	};
	class TU_9M131_Double: TU_9M115_Double
	{
		displayName = "Ракеты 9М131 Метис-М";
		mass = 600;
		pzn_tube_mag = "rhs_mag_9M131";
		pzn_single_tube = "TU_9M131_Single";
	};
	class TU_9M131_Single: TU_9M115_Single
	{
		displayName = "Ракета 9М131 Метис-М";
		mass = 300;
		pzn_tube_mag = "rhs_mag_9M131";
	};
	class TU_9M131M_Double: TU_9M131_Double
	{
		displayName = "Ракеты 9М131М Метис-М1";
		mass = 600;
		pzn_tube_mag = "rhs_mag_9M131M";
		pzn_single_tube = "TU_9M131M_Single";
	};
	class TU_9M131M_Single: TU_9M131_Single
	{
		displayName = "Ракета 9М131М Метис-М1";
		mass = 300;
		pzn_tube_mag = "rhs_mag_9M131M";
	};
	class TU_9M131F_Double: TU_9M131M_Double
	{
		displayName = "Ракеты 9М131Ф Метис-М1";
		mass = 600;
		pzn_tube_mag = "rhs_mag_9M131F";
		pzn_single_tube = "TU_9M131F_Single";
	};
	class TU_9M131F_Single: TU_9M131_Single
	{
		displayName = "Ракета 9М131Ф Метис-М1";
		mass = 300;
		pzn_tube_mag = "rhs_mag_9M131F";
	};
	/* class TU_TOW2A_Double: TU_9M113M_Double
	{
		model = "\tu_konkurs\tow_2tube_bag.p3d";
		picture = "\tu_konkurs\tow_2tube_ca.paa";
		displayName = "BGM-71E TOW-2A Rockets";
		mass = 1200;
		pzn_tube_mag = "rhs_mag_TOW2a";
		pzn_single_tube = "TU_TOW2A_Single";
	}; */
	class TU_TOW2A_Single: TU_9M113M_Single
	{
		model = "\tu_konkurs\tow_1tube_bag.p3d";
		picture = "\tu_konkurs\tow_1tube_ca.paa";
		displayName = "BGM-71E TOW-2A Rocket";
		mass = 600;
		pzn_tube_mag = "BN_rhs_mag_TOW2a";
	};
	class TU_9P135_Bag: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayname = "ПТРК Фагот 9К111";
		model = "\tu_konkurs\konkurs_bag.p3d";
		picture = "\tu_konkurs\konkurs_ca.paa";
		_generalMacro = "TU_9P135";
		
		mass = 480;
		maximumLoad = .1;
		class assembleInfo
		{
			assembleTo = "TU_9P135";
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			base = "";
			primary = 1;
			dissasembleTo[] = {};
		};
	};
	class TU_9P135M1_Bag: TU_9P135_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayname = "ПТРК Конкурс 9К111-1";
		model = "\tu_konkurs\konkurs_bag.p3d";
		picture = "\tu_konkurs\konkurs_ca.paa";
		_generalMacro = "TU_9P135M1";
		mass = 480;
		class assembleInfo
		{
			primary = 1;
			assembleTo = "TU_9P135M1";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			base = "";
		};
	};
	class TU_9P135M2_Bag: TU_9P135M1_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayname = "ПТРК Конкурс 9К111-1 ПНВ";
		_generalMacro = "TU_9P135M2";
		mass = 480;
		class assembleInfo
		{
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "TU_9P135M2";
			base = "";
			primary = 1;
		};
	};
	class TU_9P135M3_Bag: TU_9P135M1_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayname = "ПТРК Конкурс 9К111-1 ТВП";
		_generalMacro = "TU_9P135M3";
		mass = 480;
		class assembleInfo
		{
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "TU_9P135M3";
			base = "";
			primary = 1;
		};
	};
	class StaticWeapon;
	class StaticATWeapon: StaticWeapon
	{
		class Turrets;
	};
	class rhs_Metis_Base: StaticATWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class TU_9P135_base: rhs_Metis_Base
	{
		scope = 0;
		displayname = "ПТРК Фагот 9К111";
		model = "\tu_konkurs\konkurs.p3d";
		bn_csw_loading_style = 4;
		pzn_tubes[] = {
			//"TU_9M131M_Double",
			"TU_9M111M_Single"
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {/* "TU_9P135_Bag" */};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,'TU_9P135_Bag'] spawn pzn_csw_fnc_unasssemble";
			};
		};
		class AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "TU_9M111M_Launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "TU_9M111M_Launcher";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\konkurs.rvmat","tu_konkurs\konkurs.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135.rvmat","tu_konkurs\rhs_9p135.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135_1.rvmat","tu_konkurs\rhs_9p135_1.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"TU_9M111M_Launcher"};
				magazines[] = {};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
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
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
				};
			};
		};
	};
	class TU_9P135: TU_9P135_base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};
	class TU_9P135M1_base: TU_9P135_base
	{
		displayname = "ПТРК Конкурс 9К111-1";
		model = "\tu_konkurs\konkurs.p3d";
		pzn_tubes[] = {
			//"TU_9M113M_Double",
			"TU_9M113M_Single",
			//"TU_9M113_Double",
			"TU_9M113_Single",
			//"TU_9M111M_Double",
			"TU_9M111M_Single"
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {/* "TU_9P135_Bag" */};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,'TU_9P135M1_Bag'] spawn pzn_csw_fnc_unasssemble";
			};
		};
		class AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "TU_9M113_Launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "TU_9M113_Launcher";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\konkurs.rvmat","tu_konkurs\konkurs.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135.rvmat","tu_konkurs\rhs_9p135.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135_1.rvmat","tu_konkurs\rhs_9p135_1.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"TU_9M113_Launcher"};
				magazines[] = {};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
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
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
	};
	class TU_9P135M1: TU_9P135M1_base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};
	class TU_9P135M2_base: TU_9P135M1_base
	{
		displayname = "ПТРК Конкурс 9К111-1 ПНВ";
		model = "\tu_konkurs\konkurs_nvg.p3d";
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {/* "TU_9P135_Bag" */};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,'TU_9P135M2_Bag'] spawn pzn_csw_fnc_unasssemble";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\konkurs.rvmat","tu_konkurs\konkurs.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135.rvmat","tu_konkurs\rhs_9p135.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135_1.rvmat","tu_konkurs\rhs_9p135_1.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\tow_glass.rvmat","tu_konkurs\tow_glass.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"TU_9M113_Launcher"};
				magazines[] = {};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
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
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {};
				};
			};
		};
	};
	class TU_9P135M2: TU_9P135M2_base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};
	class TU_9P135M3_base: TU_9P135M1_base
	{
		displayname = "ПТРК Конкурс 9К111-1 ИК";
		model = "\tu_konkurs\konkurs_tws.p3d";
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {/* "TU_9P135_Bag" */};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,'TU_9P135M3_Bag'] spawn pzn_csw_fnc_unasssemble";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\konkurs.rvmat","tu_konkurs\konkurs.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135.rvmat","tu_konkurs\rhs_9p135.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","tu_konkurs\rhs_9p135_1.rvmat","tu_konkurs\rhs_9p135_1.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"TU_9M113_Launcher"};
				magazines[] = {};
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_Metis";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				ejectDeadGunner = 0;
				gunnerForceOptics = 0;
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
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {4,5};
				};
			};
		};
	};
	class TU_9P135M3: TU_9P135M3_base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};	
	class ACE_Box_Misc;
	class TU_9m111m_box: ACE_Box_Misc {
		displayName = "Ящик с ракетами 9М111М Фактория";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_TU_9M111M_Single  {
				backpack = "TU_9M111M_Single";
				count = 2;
			};
		};
		class TransportItems {};
	};
	class TU_9k111_box: TU_9m111m_box {
		displayName = "Ящик с ПТРК 9К111 Фагот";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_TU_9P135_Bag  {
				backpack = "TU_9P135_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9m113_box: TU_9m111m_box {
		displayName = "Ящик с ракетами 9М113 Конкурс";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M113_Single  {
				backpack = "TU_9M113_Single";
				count = 2;
			};
		};
	};
	class TU_9k1111_box: TU_9k111_box {
		displayName = "Ящик с ПТРК 9К111-1 Конкурс";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_TU_9P135_Bag  {
				backpack = "TU_9P135M1_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9m113m_box: TU_9m111m_box {
		displayName = "Ящик с ракетами 9М113М Конкурс-М";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M113M_Single  {
				backpack = "TU_9M113M_Single";
				count = 2;
			};
		};
	};
	class TU_9k1111m_box: TU_9k111_box {
		displayName = "Ящик с ПТРК 9К111-1 Конкурс-М (ПНВ)";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_TU_9P135M2_Bag  {
				backpack = "TU_9P135M2_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k1111mt_box: TU_9k111_box {
		displayName = "Ящик с ПТРК 9К111-1 Конкурс-М (ИК)";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_TU_9P135M2_Bag  {
				backpack = "TU_9P135M3_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k115_box: TU_9k111_box {
		displayName = "Ящик с ПТРК Метис 9K115";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_BN_9k115_Gun_Bag  {
				backpack = "BN_9k115_Gun_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k115_2_box: TU_9k111_box {
		displayName = "Ящик с ПТРК Метис-М1 9K115-1";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_BN_9k115_2_Gun_Bag  {
				backpack = "BN_9k115_2_Gun_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k115_2_TWS_box: TU_9k111_box {
		displayName = "Ящик с ПТРК Метис-М1 9K115-1 ИК";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_BN_9k115_2_TWS_Gun_Bag  {
				backpack = "BN_9k115_2_TWS_Gun_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k115_1_box: TU_9k111_box {
		displayName = "Ящик с ПТРК Метис-М 9K115-1";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_BN_9k115_1_Gun_Bag  {
				backpack = "BN_9k115_1_Gun_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9k115_1_TWS_box: TU_9k111_box {
		displayName = "Ящик с ПТРК Метис-М 9K115-1 ИК";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportBackpacks {
			class _xx_BN_9k115_1_TWS_Gun_Bag  {
				backpack = "BN_9k115_1_TWS_Gun_Bag";
				count = 1;
			};
		};
		class TransportItems {};
	};
	class TU_9m115_box: TU_9k111_box {
		displayName = "Ящик с ракетами 9М115 Метис";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M115_Double  {
				backpack = "TU_9M115_Double";
				count = 1;
			};
		};
	};
	class TU_9m131_box: TU_9k111_box {
		displayName = "Ящик с ракетами 9М131 Метис-М";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M131_Double  {
				backpack = "TU_9M131_Double";
				count = 1;
			};
		};
	};
	class TU_9m131m_box: TU_9k111_box {
		displayName = "Ящик с ракетами 9М131М Метис-М1";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M131M_Double  {
				backpack = "TU_9M131M_Double";
				count = 1;
			};
		};
	};
	class TU_9m131f_box: TU_9k111_box {
		displayName = "Ящик с ракетами 9М131Ф Метис-М1";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_9M131F_Double  {
				backpack = "TU_9M131F_Double";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author = "76561198032254650";
	timepacked = "1457916233";
};
//};