#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class bn_te
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]={"rhsusf_c_heavyweapons", "rhs_c_2s3", "ace_interaction", "rhs_c_heavyweapons"};
	};
};

class CfgFunctions
{
	class bn_te {
		class myCategory {
			class gun_sight_keydown_EH {file = "\bn_te\scripts\bn_deflection_keydown_EH.sqf";};
			class cam_create {file = "\bn_te\scripts\cam_create.sqf";};
			class setPitch {file = "\bn_te\scripts\setPitch.sqf";};
		};
	};
};


class Extended_Init_Eventhandlers
{
    class RHS_UAZ_AGS30_Base
    {
        class RHS_UAZ_AGS30_Base_init
        {
			init = "(_this select 0) addEventHandler ['SeatSwitched', {if (player == _this select 1) then {0 = _this execVM '\bn_te\scripts\getIn.sqf';};}]";
        };
    };
	
	class rhs_tigr_sts_vdv
    {
        class rhs_tigr_sts_vdv_init
        {
			init = "(_this select 0) addEventHandler ['SeatSwitched', {if (player == _this select 1) then {0 = _this execVM '\bn_te\scripts\getIn.sqf';};}]";
        };
    };
};


class Extended_GetIn_Eventhandlers
{
    class RHS_MK19_TriPod_base
    {
        class RHS_MK19_TriPod_base_GetIn
        {
            getin = "_this execVM '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getIn_EH";
        };
    };
	
    class RHS_AGS30_TriPod_base
    {
        class RHS_AGS30_TriPod_base_GetIn
        {
             GetIn = "0 = _this execVM '\bn_te\scripts\getIn.sqf';";
        };
    };
	
    class RHS_UAZ_AGS30_Base
    {
        class RHS_UAZ_AGS30_Base_GetIn
        {
             GetIn = "if (player == _this select 2) then {0 = _this execVM '\bn_te\scripts\getIn.sqf';};";
        };
    };
	
	
	class rhs_tigr_sts_vdv
    {
        class rhs_tigr_sts_vdv_GetIn
        {
             GetIn = "if (player == _this select 2) then {0 = _this execVM '\bn_te\scripts\getIn.sqf';};";
        };
    };
	
    class RHS_M252_Base
    {
        class RHS_M252_Base_GetIn
        {
             GetIn = "0 = _this execVM '\bn_te\scripts\getIn.sqf';";
        };
    };
	
	class rhs_2s3tank_base
	{
		class rhs_2s3tank_base_GetIn
		{
			GetIn = "0 = _this execVM '\bn_te\scripts\hideCompass.sqf'; if (local (_this select 2)) then {[] call tu_arty_startCollimatorHandler}";
		};
	};
	
	/*class rhs_D30_base
	{
		class rhs_D30_base_GetIn
		{
			GetIn = "0 = _this execVM '\bn_te\scripts\hideCompass.sqf';";
		};
	};
	
	class rhs_M119_base
	{
		class rhs_M119_base_GetIn
		{
			GetIn = "0 = _this execVM '\bn_te\scripts\hideCompass.sqf'; if (local (_this select 2)) then {[] call tu_arty_startCollimatorHandler}";
		};
	};*/
};

class Extended_GetOut_Eventhandlers
{
    class rhs_2s3tank_base
    {
        class rhs_2s3tank_base_GetOut
        {
            GetOut = "if ((_this select 0) getVariable ['bn_deflection',0] != 0) then {(_this select 0) setVariable ['bn_deflection',(_this select 0) getVariable 'bn_deflection',true]}; if (local (_this select 2)) then {[] call tu_arty_endCollimatorHandler};";
			// транслировать значение угломера при выходе из гаубицы
			// чтобы при посадке на гаубицу другого игрока значение угломера сохранялось
        };
    };
	
	/*class rhs_D30_base
	{
		class rhs_D30_base_GetOut
		{
			GetOut = "if ((_this select 0) getVariable ['bn_deflection',0] != 0) then {(_this select 0) setVariable ['bn_deflection',(_this select 0) getVariable 'bn_deflection',true]};";
		};
	};
	
	class rhs_M119_base
	{
		class rhs_M119_base_GetOut
		{
			GetOut = "if ((_this select 0) getVariable ['bn_deflection',0] != 0) then {(_this select 0) setVariable ['bn_deflection',(_this select 0) getVariable 'bn_deflection',true]}; if (local (_this select 2)) then {[] call tu_arty_endCollimatorHandler};";
		};
	};*/
	
    //class RHS_AGS30_TriPod_base
    //{
    //    class RHS_AGS30_TriPod_base_GetIn
    //    {
    //         GetOut = "0 = _this execVM '\bn_te\scripts\getIn.sqf';";
    //    };
    //};
	
    //class RHS_M252_Base
    //{
    //    class RHS_M252_Base_GetIn
    //    {
    //         GetOut = "0 = _this execVM '\bn_te\scripts\getIn.sqf';";
    //    };
    //};
};

class Extended_FiredBIS_Eventhandlers
{
    class RHS_AGS30_TriPod_base
    {
        class RHS_AGS30_TriPod_base_fired
        {
            FiredBIS = "private ['_gun']; _gun = _this select 0; [_this select 6, 0, ((uiNamespace getVariable ['tu_arty_elevation_dial',0]) / 6000 * 360) min (85-(asin ((_gun weaponDirection (weapons _gun select 0)) select 2))), 0] call ace_common_fnc_changeProjectileDirection;";
        };
    };
	
	class RHS_UAZ_AGS30_Base
    {
        class RHS_UAZ_AGS30_Base_fired
        {
            FiredBIS = "private ['_gun']; _gun = _this select 0; [_this select 6, 0, ((uiNamespace getVariable ['tu_arty_elevation_dial',0]) / 6000 * 360) min (85-(asin ((_gun weaponDirection (weapons _gun select 0)) select 2))), 0] call ace_common_fnc_changeProjectileDirection;";
        };
    };
	
	class rhs_tigr_sts_vdv
    {
        class rhs_tigr_sts_vdv_fired
        {
            FiredBIS = "private ['_gun']; _gun = _this select 0; if ((_this select 2) == 'RHS_weap_ags30_tigr') then {[_this select 6, 0, ((uiNamespace getVariable ['tu_arty_elevation_dial',0]) / 6000 * 360) min (85-(asin (((_gun modelToWorld (_gun selectionPosition 'weapon_ags_end')) vectorDiff (_gun modelToWorld (_gun selectionPosition 'weapon_ags_start'))) select 2))), 0] call ace_common_fnc_changeProjectileDirection;};";
        };
    };
};

class Mode_SemiAuto;
class CfgWeapons
{
	class RHS_Weap_2a33;
	class BN_RHS_Weap_2a33: RHS_Weap_2a33 {
		dispersion = 0.0005;
		ace_overpressure_angle = 60;
        ace_overpressure_range = 30;
        ace_overpressure_damage = 0.75;
		modes[] = {"Single1", "Single2", "Single3", "Single4", "Single5", "Single6", "Single7"};
		class Single1: Mode_SemiAuto
		{
			displayName = "Шестой";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_2",2.51189,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 3;
			artilleryCharge = 0.5142857142857143;
		};
		class Single2: Single1
		{
			displayName = "Пятый";
			artilleryCharge = 0.6071428571428571;
		};
		class Single3: Single2
		{
			displayName = "Четвёртый";
			artilleryCharge = 0.6625;
		};
		class Single4: Single3
		{
			displayName = "Третий";
			artilleryCharge = 0.7125;
		};
		class Single5: Single4
		{
			displayName = "Второй";
			artilleryCharge = 0.8142857142857143;
		};		
		class Single6: Single5
		{
			displayName = "Первый";
			artilleryCharge = 0.9339285714285714;
		};
		class Single7: Single6
		{
			displayName = "Полный";
			artilleryCharge = 1;
		};
	};
};

class CfgVehicles
{
	/*extern*/ class LandVehicle;
	/*extern*/ class StaticWeapon;
	
	class RHS_MK19_TriPod_base;
	class RHS_MK19_TriPod_D:  RHS_MK19_TriPod_base
	{
		class UserActions
		{
		  class bn_use_te
			  {
				displayName = "<t color='#CCCCCC'>Доворот/прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['BN_TE_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			  };
		};
		/* 
		class EventHandlers
        {
            GetIn = "_this execVM '\bn_te\scripts\hideCompass.sqf'";
        }; */
		  
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 5;
		bn_arty_show_traverse = 1;
		bn_arty_show_firemode = 0;
	};
	
	class RHS_MK19_TriPod_WD:  RHS_MK19_TriPod_base
	{
		class UserActions
		{
		  class bn_use_te
			  {
				displayName = "<t color='#CCCCCC'>Доворот/прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['BN_TE_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			  };
		};
		
		/* class EventHandlers
        {
            GetIn = "_this execVM '\bn_te\scripts\hideCompass.sqf'";
        }; */
		  
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 5;
		bn_arty_show_traverse = 1;
		bn_arty_show_firemode = 0;
	};
	
	
	class StaticGrenadeLauncher: StaticWeapon {
		class ACE_SelfActions; 
	};
	class RHS_AGS30_TriPod_base: StaticGrenadeLauncher
	{
		class ACE_SelfActions: ACE_SelfActions {
			class TU_ARTY_show_tables_action {
				displayName = "Таблица стрельбы";
				distance = 2;
				condition = "true";
				statement = "['BN_RHS_weap_Ags30'] call tu_arty_fnc_open_table";
				showDisabled = 0;
				priority = 1;
				enableInside = 1;
			};
		};
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 0;
		bn_arty_elevation_style = 1;
	};	
	class Car : LandVehicle {};
	class Car_F : Car {};
	class Offroad_01_base_F : Car_F {};
	class RHS_UAZ_Base : Offroad_01_base_F {};
	class RHS_UAZ_DShKM_Base : RHS_UAZ_Base {
		class ACE_SelfActions;
	};
	class RHS_UAZ_AGS30_Base : RHS_UAZ_DShKM_Base
	{
		class ACE_SelfActions: ACE_SelfActions {
			class TU_ARTY_show_tables_action {
				displayName = "Таблица стрельбы";
				distance = 2;
				condition = "player == (gunner (_this select 0))";
				statement = "['BN_RHS_weap_Ags30'] call tu_arty_fnc_open_table";
				showDisabled = 0;
				priority = 1;
				enableInside = 1;
			};
		};
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 0;
		bn_arty_elevation_style = 1;
	};	
	
	class MRAP_02_base_F : Car_F {};
	class rhs_tigr_base : MRAP_02_base_F {};
	class rhs_tigr_vdv : rhs_tigr_base {				
		class ACE_SelfActions;
	};
	class rhs_tigr_sts_vdv : rhs_tigr_vdv
	{
			class ACE_SelfActions: ACE_SelfActions {
			class TU_ARTY_show_tables_action {
				displayName = "Таблица стрельбы";
				distance = 2;
				condition = "player in ((fullCrew [_this select 0, 'gunner', true]) select 1)";
				statement = "['BN_RHS_weap_Ags30'] call tu_arty_fnc_open_table";
				showDisabled = 0;
				priority = 1;
				enableInside = 1;
			};
		};
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 0;
		bn_arty_elevation_style = 1;
	};

	class StaticMortar;
	class RHS_M252_Base: StaticMortar
	{
		class UserActions
		{
		  class bn_use_te
			  {
				displayName = "<t color='#CCCCCC'>Показать прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['bn_te_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			  };
			 };
		/* class EventHandlers
        {
            GetIn = "_this execVM '\bn_te\scripts\hideCompass.sqf'";
        }; */
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 1;
	};	
	
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class rhs_2s3tank_base: Tank_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class StaticCannon;
	
	/*class rhs_D30_base: StaticCannon
	{
		class UserActions
		{
		  class bn_use_te
			{
				displayName = "<t color='#CCCC88'>Угломер/прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['bn_te_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			};
		};
			
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 1;
		bn_arty_show_deflection = 1;
		gunnerCanSee = 2+4+8;
	};
	
	class rhs_M119_base: StaticCannon
	{
		class UserActions
		{
		  class bn_use_te
			{
				displayName = "<t color='#CCCC88'>Угломер/прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['bn_te_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			};
		};
			
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 1;
		bn_arty_show_deflection = 1;
		gunnerCanSee = 2+4+8;
	};*/
	
	class rhs_2s3_tv: rhs_2s3tank_base 
	{
		class UserActions
		{
		  class bn_use_te
			{
				displayName = "<t color='#CCCC88'>Угломер/прицел</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['bn_te_Display', displayNull]));";
				statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
			};
		};
		
				class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				ace_fcs_enabled = 0;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 0.45;
						maxVerticalRotSpeed = 0.07;
						stabilizedInAxes = "StabilizedInAxesBoth";
						soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
						minElev = -6;
						maxElev = "+15";
						initElev = 0;
						minTurn = -171;
						maxTurn = "+124";
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"rhs_weap_pkt_2s3"};
						magazines[] = {"rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250","rhs_mag_762x54mm_250"};
						turretInfoType = "RscWeaponZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = "+30";
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = "+100";
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};
						gunnerAction = "mbt2_slot2b_out";
						gunnerInAction = "rhs_2s3_commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerDoor = "hatchC";
						gunnerType = "rhs_msv_crew_commander";
						startEngine = 0;
						viewGunnerInExternal = 1;
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						class HitPoints
						{
							class HitTurret
							{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGun
							{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
						selectionFireAnim = "zasleh3";
						class OpticsIn
						{
							class day1
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
								visionMode[] = {"Normal","NVG"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
							};
							class day2
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.047;
								minFov = 0.047;
								maxFov = 0.047;
								visionMode[] = {"Normal","NVG"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
							};
							class PZU3
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.1;
								minFov = 0.1;
								maxFov = 0.1;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu3.p3d";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
							};
						};
					};
				};
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"BN_RHS_Weap_2a33"};
				magazines[] = {"rhs_mag_HE_2a33","rhs_mag_WP_2a33","rhs_mag_LASER_2a33","rhs_mag_SMOKE_2a33","rhs_mag_ILLUM_2a33"};
				minElev = -5;
				maxElev = "+77";
				initElev = 20;
				elevationMode = 3;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				maxHorizontalRotSpeed = 0.45;
				maxVerticalRotSpeed = 0.07;
				turretInfoType = "rhs_gui_optic_2s3_computer";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				lockWhenVehicleSpeed = 1;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = "0.7/6";
						minFov = "0.7/6";
						maxFov = "0.7/6";
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_op297.p3d";
						gunnerOpticsEffect[] = {};
					};
				};
				gunnerAction = "mbt2_slot2a_out";
				gunnerInAction = "mbt2_slot2a_in";
				gunnerDoor = "hatchC";
				forceHideGunner = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.009;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.5;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
			};
		};
		

        class TransportItems {
			class _xx_tab_mag
			{
				name = "tu_arty_tables_2s3";
				count = 1;
			};
			class _xx_maptools
			{
				name = "ACE_MapTools";
				count = 1;
			};
		};

		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 1;
		bn_arty_show_deflection = 1;
		tu_arty_use_offset = 1;
		tu_arty_sight_offset[] = {-0.7,0.48,0.9};
		tu_arty_sight_offset_selection = "OsaVeze";
		gunnerCanSee = 2+4+8;
	};	
};

class RscTitles {
	#include "common.hpp"
	#define BN_TE_GUI_GRID_X	(0)
	#define BN_TE_GUI_GRID_Y	(0)
	#define BN_TE_GUI_GRID_W	(0.025)
	#define BN_TE_GUI_GRID_H	(0.04)
  class bn_te {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
    onLoad = "uiNamespace setVariable ['BN_TE_Display', _this select 0];";
	onUnload = "uiNamespace setVariable ['BN_TE_Display', displayNull];";
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    name = "bn_te";
    class bn_te_RscText;
	class RscPicture;
	class RscText;
    class controls {
    class bn_te_T: bn_te_RscText {
        idc = 955001;
        type = 0;
        style = 32;
        sizeEx = 0.03;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "Доворот";
        colorBackground[] = {0.5, 0.5, 0.5, 0.7};
        colorText[] = {1,1,1, 0.9};
        shadow = 1;

        x = -0.1;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
        y = 0.8; //(0 + 0.19*0.3) * safezoneH + safezoneY;
        w = 0.1 * safezoneW;
        h = 0.025 * safezoneH;
      };
	  class bn_te_D: bn_te_RscText {
        idc = 955008;
        type = 0;
        style = 32;
        sizeEx = 0.03;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "Угломер";
        colorBackground[] = {0.5, 0.5, 0.5, 0.7};
        colorText[] = {1,1,1, 0.9};
        shadow = 1;

        x = -0.1;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
        y = 0.74; //(0 + 0.19*0.3) * safezoneH + safezoneY;
        w = 0.1 * safezoneW;
        h = 0.025 * safezoneH;
      };
      class bn_te_E: bn_te_RscText {
        idc = 955002;
        type = 0;
        style = 32;
        sizeEx = 0.03;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "Прицел";
        colorBackground[] = {0.5, 0.5, 0.5, 0.7};
        colorText[] = {1,1,1, 0.9};
        shadow = 1;

        x = -0.1; //(0.5-0.4/2 + 0.6*0.4) * safezoneW + safezoneX;
        y = 0.86;//(0 + 0.47*0.3) * safezoneH + safezoneY;
        w = 0.1 * safezoneW;
        h = 0.025 * safezoneH;
      };
	  
	  class bn_te_Charge: bn_te_RscText {
        idc = 955004;
        type = 0;
        style = 32;
        sizeEx = 0.03;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "Заряд";
        colorBackground[] = {0.5, 0.5, 0.5, 0.7};
        colorText[] = {1,1,1, 0.9};
        shadow = 1;

        x = -0.1; //(0.5-0.4/2 + 0.6*0.4) * safezoneW + safezoneX;
        y = 0.92;//(0 + 0.47*0.3) * safezoneH + safezoneY;
        w = 0.1 * safezoneW;
        h = 0.025 * safezoneH;
      };
	  
	  class bn_te_RscSlider_955005: bn_te_RscSlider
		{
			idc = 955005;
			type = 3;
			style = 0;
			sizeEx = 0.04;
			lineSpacing = 1;
			font = "PuristaMedium";
			x = -0.2;
			y = 0.8;
			w = 0.03;
			h = 0.1;
			colorBackground[] = {-1,-1,-1,0};
			color[] = {0.5,0.5,0.7,1};
			tooltip = $STR_tu_arty_bubble_level; //--- ToDo: Localize;
		};
		
		class BN_GUN_SIGHT_PIP: RscPicture {
        idc = 955009;
        type = 0;
        style = 48;
        sizeEx = 0.04;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "#(argb,256,256,1)r2t(bngunsightsurface,1.0);";
        colorText[] = {1,1,1, 0.98};
        colorBackground[] = {1,0,0, 0};
        shadow = 1;

        x = -0.25;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
        y = -0.2; //(0 + 0.19*0.3) * safezoneH + safezoneY;
        w = 0.3 * safezoneW / (4/3);
        h = 0.3 * safezoneH;
      };
      class BN_MK19_TE_E: RscPicture {
        idc = 955010;
        type = 0;
        style = 48;
        sizeEx = 0.04;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "\bn_te\img\panorama.paa"; //"\tu_arty\data\sight.paa";
        colorText[] = {1,1,1, 1};
        colorBackground[] = {1,0,0, 0};
        shadow = 0;

        x = -0.25;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
        y = -0.2; //(0 + 0.19*0.3) * safezoneH + safezoneY;
        w = 0.3 * safezoneW / (4/3);
        h = 0.3 * safezoneH;
      };
	  
	   class BN_GUN_SIGHT_FULLSCREEN: RscPicture {
        idc = 955011;
        type = 0;
        style = 48;
        sizeEx = 0.04;
        lineSpacing = 1;
        font = "PuristaMedium";
        text = "\bn_te\img\panorama.paa"; //"\tu_arty\data\sight.paa";
        colorText[] = {1,1,1, 1};
        colorBackground[] = {1,0,0, 0};
        shadow = 0;

		x = 0.5-(safezoneH/(4/3))*0.5;
		y = safezoneY;
		w = safezoneH/(4/3);
		h = safezoneH;
      };
	  
	  class BN_GUN_SIGHT_SHADE_LEFT: RscText {
			idc = 955012;
			type = 0;
			style = 2;
			x = safezoneXAbs; 
			y = safeZoneY;
			h = safezoneH;
			w = (safezoneWAbs/2) - (safezoneH/(4/3))*0.5; //w == h
			text = "l";
			font = "EtelkaNarrowMediumPro";
			sizeEx = 0.03;
			colorBackground[] = {0,0,0,1};
			colorText[] = {0,0,0,0};
      };
	  
	  class BN_GUN_SIGHT_SHADE_RIGHT: BN_GUN_SIGHT_SHADE_LEFT {
			idc = 955013;
			x = 0.5 + (safezoneH/(4/3))*0.5;
			y = safeZoneY;
			h = safezoneH;
			w = (safezoneWAbs/2);
      };
	  
    };
	
	
	
  };
  
  
  class TU_ARTY_PAG17 {
	#include "common.hpp"
	#define BN_TE_GUI_GRID_X	(0.3)
	#define BN_TE_GUI_GRID_Y	(0)
	#define BN_TE_GUI_GRID_W	(0.025)
	#define BN_TE_GUI_GRID_H	(0.04)
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
    onLoad = "uiNamespace setVariable ['TU_ARTY_PAG17_Display', _this select 0]; if ((uiNamespace getVariable ['tu_arty_elevation_dial',0]) == 0) then {0 = ([0,0,0,0,false,false,6,0,vehicle player]) execVM '\bn_te\pag-17\el_dial_change.sqf';};";
	onKeyDown = "0 = _this execVM '\bn_te\scripts\keydown.sqf'";
	onUnload = "if ((vehicle player isKindOf 'StaticWeapon') && (alive player)) then {bn_te_handle = [] execVM '\bn_te\scripts\t-e.sqf'};";
    duration = 1;
    fadein = 0;
    fadeout = 0;
  
  name = "TU_ARTY_PAG17";
    class controls {
		class bn_te_RscPicture_1200: bn_te_RscPicture
			{
				idc = 1200;
				type = 0;
				style = 48;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "\bn_te\pag-17\sight_unit.paa";
				x = -13 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 0 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 20 * BN_TE_GUI_GRID_W;
				h = 25 * BN_TE_GUI_GRID_H;
				colorText[] = {1,1,1,0.7};
				colorBackground[] = {1,1,1,0.7};
				colorActive[] = {1,1,1,0.7};
			};
	/*
		class bn_te_RscButton_1600: bn_te_RscButton
			{
				idc = 1600;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "+"; //--- ToDo: Localize;
				x = -1 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 20 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 1.2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				tooltip = $STR_tu_arty_increase_elevation; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [1]) execVM '\bn_te\pag-17\el_dial_change.sqf';";
			};
		class bn_te_RscButton_1601: bn_te_RscButton
			{
				idc = 1601;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "-"; //--- ToDo: Localize;
				x = -5.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 20 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 1.2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_elevation; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [-1]) execVM '\bn_te\pag-17\el_dial_change.sqf';";
			};
	 	class RscButton_1602: RscButton
			{
				idc = 1602;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "+"; //--- ToDo: Localize;
				x = -9.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 12 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 1.2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				tooltip = $STR_tu_arty_increase_deflection; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [1]) execVM 'def_change.sqf';";
			};
		class RscButton_1603: RscButton
			{
				idc = 1603;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "-"; //--- ToDo: Localize;
				x = -9.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 15 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 1.2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_deflection; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [-1]) execVM 'def_change.sqf';";
			};
		class RscButton_1604: RscButton_1603
			{
				idc = 1604;
				text = "^"; //--- ToDo: Localize;
				x = 3.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 6.5 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				tooltip = $STR_tu_arty_increase_optic_level; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [-1]) execVM 'optic_change.sqf';";
			};		
		
		class RscButton_1605: RscButton_1604
			{
				idc = 1605;
				text = "v"; //--- ToDo: Localize;
				x = 3.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 7.5 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 1.2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_optic_level; //--- ToDo: Localize;
				onMouseButtonClick = "0 = (_this + [1]) execVM 'optic_change.sqf';";
			};
			
			// "3.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X","6.5 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y" */
		class bn_te_RscSlider_1900: bn_te_RscSlider
			{
				idc = 1900;
				type = 3;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				x = -8.65 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X; //-9.5
				y = 17.5 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y; //18
				w = 0.03;
				h = 0.1;
				colorBackground[] = {-1,-1,-1,0};
				color[] = {0.5,0.5,0.7,1};
				tooltip = $STR_tu_arty_bubble_level; //--- ToDo: Localize;
			};
	/* 	class RscText_Def_Small: RscText
			{
				idc = 1000;
				type = 0;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "10"; //--- ToDo: Localize;
				x = -10 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 13.5 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_deflection_value_small; //--- ToDo: Localize;
			};
		class RscText_Def_Large: RscText
			{
				idc = 1001;
				type = 0;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "30"; //--- ToDo: Localize;
				x = -3.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 11 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_deflection_value_large; //--- ToDo: Localize;
			}; */
		class bn_te_RscText_1002: bn_te_RscText
			{
				idc = 1002;
				type = 0;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "0"; //--- ToDo: Localize;
				x = 1.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 16 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_elevation_value_large; //--- ToDo: Localize;
			};
		class bn_te_RscText_1003: bn_te_RscText
			{
				idc = 1003;
				type = 0;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "0"; //--- ToDo: Localize;
				x = -3.5 * BN_TE_GUI_GRID_W + BN_TE_GUI_GRID_X;
				y = 19 * BN_TE_GUI_GRID_H + BN_TE_GUI_GRID_Y;
				w = 2 * BN_TE_GUI_GRID_W;
				h = 1 * BN_TE_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_elevation_value_small; //--- ToDo: Localize;
			};
	};
 };
};


 class TU_ARTY_TAB {
	#include "common.hpp"
	#define BN_TE_GUI_GRID_X	(0)
	#define BN_TE_GUI_GRID_Y	(0)
	#define BN_TE_GUI_GRID_W	(0.025)
	#define BN_TE_GUI_GRID_H	(0.04)
	
    idd = -1;
    movingEnable = 1;
    enableSimulation = 1;
    enableDisplay = 1;
    onLoad = "uiNamespace setVariable ['TU_ARTY_TAB_Display', _this select 0];";
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    name = "TU_ARTY_D";
    class controls {
 		class MyRscHTML: bn_te_RscText {
		  idc = 1500;
		  type = 13; // defined constant (9)
		  style = 0; // defined constant (0)
		  
		  x = safeZoneX+safeZoneW /4;
		  y = safeZoneY+0.05;
		  w = safeZoneW / 4;
		  h = safeZoneH-0.1;
		  
		  text="Таблица грузится (либо её съели мыши)";
		  size = (safeZoneH-0.1) / 52;
		  colorBackground[] = {1,1,1,0.5};
		  colorBold[] = {1, 0, 0, 1};
		  colorLink[] = {0, 0, 1, 1};
		  colorLinkActive[] = {1, 0, 0, 1};
		  colorPicture[] = {1, 1, 1, 1};
		  colorPictureBorder[] = {1, 0, 0, 1};
		  colorPictureLink[] = {0, 0, 1, 1};
		  colorPictureSelected[] = {0, 1, 0, 1};
		  colorText[] = {0, 0, 0, 1};
 			 class Attributes {
				font = "PuristaMedium";
				color = "#000000";
				align = "left";
				valign = "top";
				shadow = 0;
				shadowColor = "#555555";
				size = "1";
			}; 
		}; 
	
	class bn_te_RscButton_prevPage: bn_te_RscButton
		{
			idc = 1501;
			text = "<-";
			x = safeZoneX+safeZoneW /4 - BN_TE_GUI_GRID_W;
			y = safeZoneY+0.05;
			w = BN_TE_GUI_GRID_W;
			tooltip = "Previous page"; //--- ToDo: Localize;
			onMouseButtonClick = "uiNamespace setVariable ['TU_ARTY_current_page', ((uiNamespace getVariable ['TU_ARTY_current_page', 0])-1) max 0]; 0 = (uiNamespace getVariable ['TU_ARTY_pages',[]]) execVM '\bn_te\scripts\showtable.sqf';";
		};		
	class bn_te_RscButton_nextPage: bn_te_RscButton_prevPage
		{
			idc = 1502;
			text = "->";
			x = safeZoneX+(safeZoneW /4)*2;
			tooltip = "Next page"; //--- ToDo: Localize;
			onMouseButtonClick = "uiNamespace setVariable ['TU_ARTY_current_page', ((uiNamespace getVariable ['TU_ARTY_current_page', 0])+1) min (count (uiNamespace getVariable ['TU_ARTY_pages',[]]))]; 0 = (uiNamespace getVariable ['TU_ARTY_pages',[]]) execVM '\bn_te\scripts\showtable.sqf';";
		};			
	};
 };
 
 class CfgSounds {
  class ACE_Sound_Click;
  class TU_ARTY_Click1: ACE_Sound_Click {
    sound[] = {"\bn_te\sound\agm_scopes_click", 3, 2, 200};
  };
  class TU_ARTY_Click2: TU_ARTY_Click1 {
    sound[] = {"\bn_te\sound\agm_scopes_click", 3.3, 1.8, 200};
  };
  class TU_ARTY_Click3: TU_ARTY_Click1 {
    sound[] = {"\bn_te\sound\agm_scopes_click", 2.8, 2.3, 200};
  };
};
 