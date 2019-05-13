class CfgPatches
{
	class tu_atgm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Extended_EventHandlers","rhs_c_a2port_air","rhs_c_heavyweapons","rhsusf_c_heavyweapons","rhsgref_c_airweapons","rhs_c_airweapons","rhsusf_c_airweapons","A3_Weapons_F"};
	};
};

class Extended_PreInit_EventHandlers
{
	class tu_atgm
	{
		init = "call ('\tu_atgm\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};

class Extended_PostInit_EventHandlers
{
	class tu_atgm
	{
		clientInit = "[] spawn tu_atgm_fnc_opt_limitloop";
		init = "call ('\tu_atgm\XEH_postInit.sqf' call SLX_XEH_COMPILE)";
	};
};

class Extended_Init_EventHandlers
{
	class LaserTarget
	{
		init = "_this spawn tu_atgm_fnc_laser_init";
	};
};

class Extended_GetIn_EventHandlers
{
	class Air
	{
		tu_atgm="_this call tu_atgm_fnc_fnc_loop";
	};
};

class CfgFunctions
{
	class tu_atgm
	{
		class Functions
		{
			class effectFired
			{
				file = "\tu_atgm\effects\fn_effectFired.sqf";
			};
			class effectFirednar
			{
				file = "\tu_atgm\effects\fn_effectFirednar.sqf";
			};
			class effectFirednar2
			{
				file = "\tu_atgm\effects\fn_effectFirednar2.sqf";
			};
		};
	};
	class RHS
	{
		class SPO15_functions
		{
			class rwr_spo15
			{
				file = "\rwr_15_stn\rhs_rwr2_spo15.sqf";
				description = "SPO-15 Beryeza main handler";
			};
			class rwr_spo15_eh
			{
				file = "\rwr_15_stn\rhs_rwr2_spo15_eh.sqf";
				description = "SPO-15 Incoming Missile EH";
			};
		};
		class functions
		{
			class saclosGuide
			{
				file = "\sg_functions\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
			class saclosGuide2
			{
				file = "\sg_functions\functions\rhs_saclosGuide2.sqf";
				description = "SACLOS guidanceдля вертушек";
			}; 
            class t72_init
			{
				file = "\sg_functions\functions\rhs_t72_init.sqf";
				description = "Initialization script for T-72";
			};
			class t80_init
			{
				file = "\sg_functions\functions\rhs_tank_init.sqf";
				description = "Initialization script for T-80";
			};
			class mi24_camo
			{
				file = "\sg_functions\functions\rhs_mi24_camo.sqf";
				description = "Random Camo script for Mi-24";
				recompile = 1;
			};
			class rwr_air
			{
				file = "\sg_functions\functions\empty.sqf";
				description = "RWR system for generic planes";
				recompile = 1;
			}; 
			class rwr_mi24
			{
				file = "\sg_functions\functions\empty.sqf";
				description = "RWR system for Mi-24";
				recompile = 1;
			};
			class rwr_mi28
			{
				file = "\sg_functions\functions\empty.sqf";
				description="RWR system for Mi-28";
				recompile = 1;
			};
			class zsu_shake
			{
				file = "\sg_functions\functions\empty.sqf";
				description="Camera shake for ZSU cannon fire";
				recompile = 1;
			};
			class engineStartupDelay
			{
				file = "\sg_functions\functions\empty.sqf";
				description = "Engine startup delay";
			};
			class dynamicObjectDrawing
			{
				file = "\sg_functions\functions\empty.sqf";
				description="Dynamic Object Drawing";
			};
			class dynamicObjectDrawing_loop
			{
				file = "\sg_functions\functions\empty.sqf";
				description="Dynamic Object Drawing - main loop";
			};
		};
	};
};

class CfgAmmo
{
	
	class M_Titan_AT;
	
	class rhs_ammo_atgmCore_base: M_Titan_AT
	{
		muzzleEffect = "tu_atgm_fnc_effectFired";
	};
	class rhs_ammo_atgmBase_base: M_Titan_AT
	{
		muzzleEffect = "tu_atgm_fnc_effectFired";
	};
	
	class rhs_ammo_9m112;
	
	class rhs_ammo_TOW_AT : M_Titan_AT {
		ace_towsmoke = 1;
		ace_guidance_type = "newsmoke";
		muzzleEffect = "tu_atgm_fnc_effectFired";
	};
	
	class rhs_ammo_TOWB_AT;
	class rhs_ammo_TOW2_AT : rhs_ammo_TOWB_AT {
		ace_towsmoke = 1;
		ace_guidance_type = "newsmoke";
	};
		
	class rhs_ammo_9m112m : rhs_ammo_9m112 {
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
		
	class rhs_ammo_9m113 : rhs_ammo_atgmBase_base { // konkurs
		muzzleEffect = "tu_atgm_fnc_effectFired";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	class tu_ammo_9m113: rhs_ammo_9m113 {
		muzzleEffect = "tu_atgm_fnc_effectFired";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	class tu_ammo_9m111m: rhs_ammo_9m113 {
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
		
	class rhs_ammo_9m117 : rhs_ammo_atgmCore_base {
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	class rhs_ammo_9m119 : rhs_ammo_atgmCore_base {
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	class rhs_ammo_9m114: rhs_ammo_atgmBase_base
	{
		//rhs_muzzleEffect = "RHS_fnc_saclosGuide2";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	class rhs_ammo_9m120 : rhs_ammo_atgmBase_base 
	{
		//rhs_muzzleEffect = "RHS_fnc_saclosGuide2";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	class rhs_ammo_zt3 : rhs_ammo_atgmBase_base
	{
		//rhs_muzzleEffect = "RHS_fnc_saclosGuide2";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	/*
	class rhs_ammo_9m127 : rhs_ammo_9m120
    {
		ace_guidance_type = "0"; // отключаем tu_atgm для ка52
    };
	*/
	
	class rhs_ammo_9m133 : rhs_ammo_atgmBase_base {
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	
	class rhs_ammo_9m115: rhs_ammo_9m119
	{
		muzzleEffect = "tu_atgm_fnc_effectFired";
	};
	
	class rhs_ammo_9m14: rhs_ammo_atgmBase_base
	{
		muzzleEffect = "BIS_fnc_effectFiredRocket";
	};
	
    class rhs_ammo_9m17;
	class rhs_ammo_9m17p: rhs_ammo_9m17
	{
		//rhs_muzzleEffect = "RHS_fnc_saclosGuide2";
		ace_towsmoke = 2;
		ace_guidance_type = "newsmoke";
	};
	
	class Default;
	
	class ACE_MissileGuidance_LaserPulse: Default
	{
		model = "\A3\Weapons_F\empty.p3d";
		proxyShape = "\A3\Weapons_F\empty.p3d";
		caliber = 0;
		typicalSpeed = 600000;
		maxSpeed = 600000;
		explosive = 1;
		explosionEffects = "";
		CraterEffects = "";
		visibleFire = 0;
		audibleFire = 0;
		visibleFireTime = 0;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		cost = 0;
		deflecting = 0;
		sideAirFriction = 0;
		airFriction = 0;
		maneuvrability = 0;
		maxControlRange = 0;
		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteEffect";
		simulationStep = 0.001;
		timeToLive = 0.1;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,1};
		soundHit[] = {"",1,1};
		supersonicCrackNear[] = {"",1,1};
		supersonicCrackFar[] = {"",1,1};
		hitGround[] = {"soundHit",1};
		hitMan[] = {"soundHit",1};
		hitArmor[] = {"soundHit",1};
		hitBuilding[] = {"soundHit",1};
		class HitEffects
		{
			vehicle = "";
			object = "";
		};
		smokeColor[] = {0,0,0,0};
		class Smoke
		{
			interval = 0.1;
			cloudletDuration = 0;
			cloudletAnimPeriod = 0;
			cloudletSize = 0;
			cloudletAlpha = 0;
			cloudletGrowUp = 0;
			cloudletFadeIn = 0;
			cloudletFadeOut = 0;
			cloudletAccY = 0;
			cloudletMinYSpeed = 0;
			cloudletMaxYSpeed = 0;
			cloudletShape = "";
			cloudletColor[] = {0,0,0,0};
			initT = 1000;
			deltaT = -500;
			class Table
			{
				class T1
				{
					maxT = 0;
					color[] = {1,1,1,1};
				};
				class T2
				{
					maxT = 1000;
					color[] = {0.2,0.2,0.2,1};
				};
			};
			density = 0;
			size = 0;
			initYSpeed = 0;
			timeToLive = 0;
			in = 0;
			out = 0;
		};
	};	

};

class CfgWeapons
{
	class Laserdesignator_mounted;	
	class ACE_Laserdesignator_Hidden: Laserdesignator_mounted {
		showToPlayer=0;
		minRange=0;
		midRange=0;
		maxRange=0;
	};
	
	class FakeWeapon;
	class tu_FakeWeapon : FakeWeapon {
    magazines[]=
	{
		"FakeMagazine"	
	};
	showToPlayer = false;
	};

};

class Turrets;
class MainTurret;
class NewTurret;
class ViewOptics;
class commanderoptics;

class CfgVehicles {
	
	class Air;
	class Plane : Air
	{
		class EventHandlers;
	};
	class Plane_Base_F;
	class Plane_CAS_01_base_F : Plane_Base_F
	{
		class EventHandlers;
	};
	class Plane_Fighter_03_base_F : Plane_Base_F
	{
		class EventHandlers;
	};
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
	};
	class Helicopter_Base_H : Helicopter_Base_F {};
	class Heli_Attack_02_base_F : Helicopter_Base_F {
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Plane_CAS_02_base_F;
	class O_Plane_CAS_02_F : Plane_CAS_02_base_F
	{
		class EventHandlers;
	};
	
	class StaticWeapon;
	class StaticATWeapon : StaticWeapon
	{
		class EventHandlers;
	};

	class Car_F;
	class CUP_HMMWV_Base : Car_F
	{
		class EventHandlers;
	};
	
	class Wheeled_APC;
	class CUP_StrykerBase : Wheeled_APC
	{
		class EventHandlers;
	};
	class Tank;
	class Tank_F: Tank
	{
		class EventHandlers;
	};
	class RHS_Mi24_base : Heli_Attack_02_base_F	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[]=
				{
					"tu_FakeWeapon"
				};
				magazines[]=
				{
					"FakeMagazine"
				};
				tu_atgm_tracker = "tu_FakeWeapon"; // трекер нужен для работы отображения куда смотрит стрелок (пилоту), а также отображения и работы ПР
				tu_atgm_limitsOn = 1;
				tu_atgm_limits[] = {12,30,-4,0};
				tu_atgm_tracklimits[] = {60,30};
				initElev = 4;
			};
		};
	};
	
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				tu_atgm_tracker = "rhs_weap_2a42"; // трекер нужен для работы отображения куда смотрит стрелок (пилоту)
			};
		};
	};
	class rhs_mi28_base: Heli_Attack_02_base_F
	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				tu_atgm_tracker = "rhs_weap_2a42";
				tu_atgm_limitsOn = 1;
				tu_atgm_limits[] = {12,30,-8,0};
				tu_atgm_tracklimits[] = {60,30};
				initElev = 4;
			};
		};
	};
    class RHS_Mi24V_VVS_Base;
	class rhsgref_cdf_Mi35: RHS_Mi24V_VVS_Base {};
	
	class rhsgref_mi24g_base: rhsgref_cdf_Mi35
	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				tu_atgm_tracker = "rhs_weap_gi2";
				tu_atgm_dir = 1;
				tu_atgm_limitsOn = 1;
				tu_atgm_limits[] = {12,30,-8,0};
				tu_atgm_tracklimits[] = {60,30};
				initElev = 4;
				gunBeg = "z_flir_dir";
				gunEnd = "z_flir_pos";
			};
		};
	};
	class tu_mi24VP_base:  RHS_Mi24V_VVS_Base
	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				tu_atgm_tracker = "tu_FakeWeapon"; // трекер нужен для работы отображения куда смотрит стрелок (пилоту), а также отображения и работы ПР
				tu_atgm_limitsOn = 1;
				tu_atgm_limits[] = {12,30,-4,0};
				tu_atgm_tracklimits[] = {60,30};
				initElev = 4;
			};
		};
	};
		
	class RHS_TOW_TriPod_base: StaticATWeapon {
		class EventHandlers: EventHandlers
		{
			class Tu_atgm_EventHandlers
			{
				fired  = "if ((_this select 4) isKindOf 'MissileBase' || {(_this select 4) isKindOf 'LaserBombCore'} || {(_this select 4) isKindOf 'BombCore'}) then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call tu_atgm_fnc_fired }}";
			};
		};
	};
	/*
	class CUP_HMMWV_TOW_Base : CUP_HMMWV_Base {
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				fired = "_this call (uinamespace getvariable 'RHSUSF_fnc_effectFired');";
			};
		};
	};
	
	class CUP_B_M1135_ATGMV_Desert : CUP_StrykerBase {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[]=
				{
					"Rhs_weap_TOW_Launcher",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"rhs_mag_2Rnd_TOW2A",
					"SmokeLauncherMag"
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHSUSF_EventHandlers
			{
				fired = "_this call (uinamespace getvariable 'RHSUSF_fnc_effectFired');";
			};
			class Tu_atgm_EventHandlers 
			{ 
			fired = "if ((_this select 4) isKindOf 'MissileBase' || {(_this select 4) isKindOf 'LaserBombCore'} || {(_this select 4) isKindOf 'BombCore'}) then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call tu_atgm_fnc_fired }}"; 
		    };
		};
	};
	class BWA3_Puma_base: Tank_F
	{
		class EventHandlers: EventHandlers 
		{ 
			class RHSUSF_EventHandlers 
			{ 
					fired = "_this call (uinamespace getvariable 'RHSUSF_fnc_effectFired');"; 
			};
			class Tu_atgm_EventHandlers 
			{ 
			fired = "if ((_this select 4) isKindOf 'MissileBase' || {(_this select 4) isKindOf 'LaserBombCore'} || {(_this select 4) isKindOf 'BombCore'}) then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call tu_atgm_fnc_fired }}"; 
		    };
		};
	};	
	class CUP_SU34_Base: Plane {
		ace_laser_CanLockLaser = 1;
	}; 
	
	class JS_JC_FA18E: Plane { // pilot
		ace_laser_CanLockLaser = 1;
	};
	
	class JS_JC_FA18F: Plane { // + gunner
		ace_laser_CanLockLaser = 1;
	};
*/
	class RHS_su25_base : O_Plane_CAS_02_F {
		ace_laser_CanLockLaser = 1;
	};
/*
	class JS_JC_SU35 : Plane {
		ace_laser_CanLockLaser = 1;
	};
	
	class FIR_F16_Base: Plane_Fighter_03_base_F {
		ace_laser_CanLockLaser = 1;
	};
	
	class FIR_F16D_Base : Plane_Fighter_03_base_F {
		ace_laser_CanLockLaser = 1;
	};
	*/
	class RHS_A10 : Plane_CAS_01_base_F {
		class EventHandlers: EventHandlers
		{
			class Tu_atgm_EventHandlers
			{
				fired  = "if ((_this select 4) isKindOf 'MissileBase' || {(_this select 4) isKindOf 'LaserBombCore'} || {(_this select 4) isKindOf 'BombCore'}) then { if (local ((_this call CBA_fnc_getFirer) select 0)) then { _this call tu_atgm_fnc_fired }}";
			};
		};
		ace_laser_CanLockLaser = 1;
		tu_atgm_limits[] = {-30,5,-12,12};
		tu_atgm_tracklimits[] = {-30,5,-12,12};
		class UserActions {
			class LaseKh29 {
				displayName = "LASER ON";
				position = "HitGlass3";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, driver this]) && {(getNumber(configFile>>'cfgWeapons'>>currentWeapon this>>'tu_atgm_enableAirDesignator') == 1)}";
				statement = "[this,0,0] call tu_atgm_fnc_Kh29_Lase";
			};
			class LaseKh29Off: LaseKh29 {
				displayName = "LASER OFF";
				condition = "(player in [gunner this, driver this]) && {(this getVariable 'tu_atgm_tracking')}";
				statement = "this setVariable ['tu_atgm_tracking',nil]";
			};
		};
	};

	class CUP_AV8B_Base: Plane {
		ace_laser_CanLockLaser = 1;
	};
};

class ace_sys_air_fcs_RscPicture
{
	type=0;
	idc=-1;
	style=48;
	x=0.1;
	y=0.1;
	w=0.40000001;
	h=0.2;
	sizeEx=0.023;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="Zeppelin32";
	text="";
};

class RscTitles
{
	class AH1Z_MFD_Text
	{
		idc=-1;
		access=0;
		type=0;
		style="0x00";
		font="PuristaMedium";
		colorText[]={1,1,1,1};
		colorBackground[]={0,0,0,0};
		sizeEx=0.039999999;
	};
	class AH1Z_MFD_Display
	{
		idd="AH1Z_MFD_Control_IDC";
		onLoad="private ['_dummy']; _dummy = _this spawn tu_atgm_fnc_mfdloop; _dummy;";
		movingEnable="false";
		duration=100000;
		fadein=0;
		fadeout=0;
		name="AH-1Z Gunner MFD";
		controls[]=
		{
			"AH1Z_MFD_HeadingText",
			"AH1Z_MFD_TimeText",
			"AH1Z_MFD_TOFText",
			"AH1Z_MFD_WeaponIndicator",
			"AH1Z_MFD_DesignatorStatus",
			"AH1Z_MFD_RangeText",
			"AH1Z_MFD_DesignatorCircle",
			"AH1Z_MFD_ATTKIndicator",
			"AH1Z_MFD_Cross"
		};
		class AH1Z_MFD_HeadingText: AH1Z_MFD_Text
		{
			idc=693001;
			style="0x02";
			x=0.30000001;
			y=0.1;
			w=0.40000001;
			h=0.029999999;
			text="000";
		};
		class AH1Z_MFD_TimeText: AH1Z_MFD_Text
		{
			idc=693002;
			style="0x00";
			x=0.1;
			y=0.18000001;
			w=0.2;
			h=0.2;
			text="00:00:00";
		};
		class AH1Z_MFD_TOFText: AH1Z_MFD_Text
		{
			idc=693009;
			style="0x00";
			x=0.1;
			y=0.63999999;
			w=0.2;
			h=0.2;
			text="TOF 0.0";
		};
		class AH1Z_MFD_WeaponIndicator: AH1Z_MFD_Text
		{
			idc=693003;
			style="0x00";
			x=0.85000002;
			y=0.11;
			w=0.2;
			h=0.2;
			text="HF";
		};
		class AH1Z_MFD_DesignatorStatus: AH1Z_MFD_Text
		{
			idc=693004;
			style="0x00";
			x=0.85000002;
			y=0.18000001;
			w=0.2;
			h=0.2;
			text="DES";
		};
		class AH1Z_MFD_RangeText: AH1Z_MFD_Text
		{
			idc=693005;
			x=0.30000001;
			y=0.75;
			w=0.40000001;
			h=0.2;
			style="0x02";
			text="0000";
		};
		class AH1Z_MFD_DesignatorCircle: AH1Z_MFD_Text
		{
			idc=693006;
			x=0.45199999;
			y=0.44999999;
			w=0.1;
			h=0.12;
			style=48;
			text="\tu_atgm\data\AH1Z_laser_reticle.paa";
		};
		class AH1Z_MFD_DesignatorCircleD: AH1Z_MFD_Text
		{
			idc=693007;
			x=0.458;
			y=0.44999999;
			w=0.1;
			h=0.12;
			style=48;
			text="\tu_atgm\data\AH1Z_laser_reticle_dashed.paa";
		};
		class AH1Z_MFD_ATTKIndicator: AH1Z_MFD_Text
		{
			idc=693008;
			x=0.059999999;
			y=0.40000001;
			w=0.1;
			h=0.17;
			style=48;
			text="\tu_atgm\data\AH1Z_attk_indicator.paa";
		};
		class AH1Z_MFD_Cross
		{
			idc=693010;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={0,1,0,0.5};
			text="\ca\UI\Data\cursor_uav_gs.paa";
			sizeEx=0.029999999;
			x=0.5;
			y=0.5;
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
	};
	class AH64_MFD_Display: AH1Z_MFD_Display
	{
		class AH1Z_MFD_DesignatorCircle: AH1Z_MFD_DesignatorCircle
		{
			x=0.34999999;
			y=0.34999999;
			w=0.30000001;
			h=0.30000001;
			text="\tu_atgm\data\AH64_laser_reticle.paa";
		};
		class AH1Z_MFD_ATTKIndicator: AH1Z_MFD_ATTKIndicator
		{
			text="\tu_atgm\data\AH64_attk_indicator.paa";
		};
	};
	class Generic_Russian_Display: AH1Z_MFD_Display
	{
		idd=694000;
		onLoad="private ['_dummy']; _dummy = _this spawn tu_atgm_fnc_rfloop; _dummy;";
		name="Generic Russian rangefinder";
		controls[]=
		{
			"Generic_Russian_Display_HeadingText",
			"Generic_Russian_Display_RangeText",
			"Generic_Russian_Display_LaunchAuthorization",
			"Generic_Russian_Display_LaunchAuthorization2",
			"Generic_Russian_Display_Cross",
			"Generic_Russian_Display_Range",
			"Generic_Russian_Display_LaunchAuthorization3",
			"Generic_Russian_Display_ka52"
		};
		class Generic_Russian_Display_HeadingText: AH1Z_MFD_HeadingText
		{
			idc=694001;
			colorText[]={1,1,0,1};
		};
		class Generic_Russian_Display_RangeText: AH1Z_MFD_RangeText
		{
			idc=694002;
			colorText[]={1,1,0,1};
			text="0.0";
		};
		class Generic_Russian_Display_LaunchAuthorization: AH1Z_MFD_Text
		{
			idc=694003;
			x=0.30000001;
			y=0.64999998;
			w=0.40000001;
			h=0.2;
			colorText[]={1,1,0,1};
			style="0x02";
			text="ПР";
		};
		class Generic_Russian_Display_LaunchAuthorization2: AH1Z_MFD_Text
		{
			idc=694004;
			x=0.312;
			y=0.64999998;
			w=0.40000001;
			h=0.52;
			colorText[]={0.1,0.4,0.0};
			style="0x02";
			sizeEx=0.058;
			text="ПР";
		};
		class Generic_Russian_Display_Cross
		{
			idc=694005;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={0,1,0,0.5};
			text="\tu_atgm\data\crossdot_ca.paa";
			sizeEx=0.029999999;
			x="0.5-SafezoneX";
			y="0.5-SafezoneY";
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
		class Generic_Russian_Display_Range: Generic_Russian_Display_Cross
		{
			idc=694006;
			style="0x02";
			colorText[]={0,1,0,0.5};
			text="0.0";
			w=0.050000001;
			h=0.050000001;
		};
		class Generic_Russian_Display_LaunchAuthorization3: Generic_Russian_Display_Range
		{
			idc=694007;
			text="ПР";
		};
		class Generic_Russian_Display_ka52: AH1Z_MFD_Text
		{
			idc=694008;
			x=0.312;
			y=0.64999998;
			w=0.40000001;
			h=0.43;
			colorText[]={0.1,0.4,0.0};
			style="0x02";
			sizeEx=0.058;
			text="ПР";
		};
	};
	class ace_sys_air_fcs_dot
	{
		idd=-1;
		movingEnable=0;
		duration=9.9999998e+010;
		fadein=1;
		fadeout=1;
		name="ace_test_dot";
		sizeEx=256;
		onLoad="uiNamespace setVariable ['ace_test_dot', _this select 0]";
		class controls
		{
			class picture: ace_sys_air_fcs_RscPicture
			{
				idc=66666;
				x=0.44999999;
				y=0.44999999;
				w=0.1;
				h=0.1;
				text="\tu_atgm\data\circle_ca.paa";
				sizeEx=256;
			};
		};
	};
	class ACE_Kh29Cursor
	{
		idd=-1;
		onLoad="with uiNameSpace do { ACE_Kh29Cursor = _this select 0 }";
		movingEnable=1;
		duration=10000;
		fadeIn=0;
		fadeOut=0;
		controls[]=
		{
			"Cross",
			"Range",
			"Tti"
		};
		class Cross
		{
			idc=1;
			type=0;
			style="48 + 0x800";
			movingEnable=1;
			font="TahomaB";
			colorBackground[]={0,0,0,0};
			colorText[]={1,1,0,1};
			text="\tu_atgm\data\cursor_uav_gs.paa";
			sizeEx=0.029999999;
			x=0.5;
			y=0.5;
			w=0.1;
			h=0.1;
			size=0.034000002;
			shadow=0;
			fixedWidth=0;
			lineSpacing=0;
		};
		class Range: Cross
		{
			idc=2;
			style="0x02";
			colorText[]={0,0,0,0};
			text="";
			w=0.050000001;
			h=0.050000001;
		};
		class Tti: Range
		{
			idc=3;
		};
	};
};