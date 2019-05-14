#define true	1
#define false	0

#define private		0
#define protected		1
#define public		2

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#define LockNo		0
#define LockCadet		1
#define LockYes		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

class CfgPatches
{
	class rebalance_bis
	{
		units[] =
		{
			"B_Heli_Light_01_F",
			"B_Heli_Light_01_armed_F",
			"C_Heli_light_01_blue_F",
			"C_Heli_light_01_red_F",
			"C_Heli_light_01_ion_F",
			"C_Heli_light_01_blueLine_F",
			"C_Heli_light_01_digital_F",
			"C_Heli_light_01_elliptical_F",
			"C_Heli_light_01_furious_F",
			"C_Heli_light_01_graywatcher_F",
			"C_Heli_light_01_jeans_F",
			"C_Heli_light_01_light_F",
			"C_Heli_light_01_shadow_F",
			"C_Heli_light_01_sheriff_F",
			"C_Heli_light_01_speedy_F",
			"C_Heli_light_01_sunset_F",
			"C_Heli_light_01_vrana_F",
			"C_Heli_light_01_wasp_F",
			"C_Heli_light_01_stripped_F",
			"C_Heli_light_01_luxe_F",
			"B_Heli_Light_01_stripped_F",
			"C_Heli_light_01_wave_F",
			"B_SDV_01_F",
			"O_SDV_01_F",
			"I_SDV_01_F",
			"I_G_Boat_Transport_01_F",
			"B_Boat_Transport_01_F",
			"O_Boat_Transport_01_F",
			"I_Boat_Transport_01_F",
			"B_Lifeboat",
			"O_Lifeboat",
			"C_Rubberboat"
		};
		weapons[] =
		{
			"CMFlareLauncher"
		};
		requiredVersion = 1.32;
		requiredAddons[] =
		{
			"A3_Data_F",
			"A3_Boat_F",
			"A3_Boat_F_SDV_01",
			"A3_Boat_F_Boat_Transport_01",
			"A3_Weapons_F",
			"A3_Air_F",
			"A3_Air_F_Heli_Light_01",
			"ace_overpressure",
			"ace_aircraft",
			"ace_ballistics",
			"ace_huntir",
			"A3_Weapons_F_Jets",
			"A3_Static_F_Jets",
			"A3_Static_F_Jets_AAA_System_01",
			"A3_Static_F_Jets_SAM_System_01",
			"A3_Static_F_Jets_SAM_System_02",
			"bn_csw_load",
			"bn_csw_load"
		};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgCloudlets
{
	class Default;
	class SmokeShellWhiteSmall: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB",1.8};
			sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 30;
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0.05;
		size[] = {0.46,4.5,18};
		color[] = {{0.6,0.6,0.6,0.2},{0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0}};
		animationSpeed[] = {1.5,0.5};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0,0,0};
		moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0.1, 0.1, 0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriod = 1;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.08;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -8;
	};
	class SmokeShellWhite: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 30;
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0.05;
		size[] = {0.46,4.5,18};
		color[] = {{0.6,0.6,0.6,0.2},{0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0}};
		animationSpeed[] = {1.5,0.5};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0,0,0};
		moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0.1, 0.1, 0.1};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriod = 1;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.08;
        randomDirectionIntensityVar = 0;
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -8;
	};
	class SmokeShellWhite2: SmokeShellWhite
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 4;
		particleFSLoop = 0;
		color[] = {{0.6,0.6,0.6,1},{0.6,0.6,0.6,0.5},{0.6,0.6,0.6,0}};
	};
};
class SmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = {0,0,0};
		intensity = 2;
		interval = 1;
	};
	class SmokeShell2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class Mode_SemiAuto;

class Mode_Burst;

class Mode_FullAuto;
class SensorTemplateActiveRadar;
class SensorTemplateDataLink;

class vdisp_aaasystem_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {8000,4000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_aaasystem_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {8000,4000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_longsystem_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {12000,8000,4000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_longsystem_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {12000,8000,4000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class CfgAmmo {	
	class Default;
	class BulletBase;
	class MissileBase;	// External class reference
	class GrenadeHand;
	
	class FuelExplosion: Default
	{
		hit = 40;
		indirectHit = 30;
		indirectHitRange = 1.5;
	};
	class pzn_FuelExplosion_small: FuelExplosion
	{
		hit = 1;
		indirectHit = 0.5;
		indirectHitRange = 0.5;
	};
	
    class SmokeShell: GrenadeHand {
        smokeColor[] = {1, 1, 1, 1};
        timeToLive = 90;
    };
	class M_PG_AT : MissileBase { 
		indirectHit = 40;
		indirectHitRange = 6;
	};
	
	class M_AT : M_PG_AT { 
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 8;
	};
	
	class ammo_Gun35mmAABase;
	class ammo_AAA_Gun35mm_AA: ammo_Gun35mmAABase {
		caliber = 0.5;
		airLock = 2;
		dispersion = 0.006;
		missileLockMaxDistance = 4000; 
        missileLockMinDistance = 200;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	
	class ammo_Missile_MediumRangeAABase;
	class ammo_Missile_rim162: ammo_Missile_MediumRangeAABase {
		airLock = 2;
		cmimmunity = 0.95;
		missileLockMaxDistance = 10000; 
        missileLockMinDistance = 1000;
	};	
	
	class ammo_Missile_ShortRangeAABase;
	class ammo_Missile_rim116: ammo_Missile_ShortRangeAABase {
		airLock = 2;
		cmimmunity = 0.95;
		missileLockMaxDistance = 5000; 
        missileLockMinDistance = 600;
	};	

	 class B_127x99_Ball : BulletBase {
		tracerEndTime = 2.5;
	 };

	 class B_127x108_Ball : BulletBase {
		tracerEndTime = 2.5;
	 };

	 
};

class cfgWeapons {	
	class SmokeLauncher;
	
	class CannonCore;
	class weapon_Cannon_Phalanx: CannonCore {
		weaponLockSystem = 8;
	};
	
	class MissileLauncher;
	class weapon_rim162Launcher: MissileLauncher {
		weaponLockSystem = 8;
	};
	
	class weapon_rim116Launcher: MissileLauncher {
		weaponLockSystem = 8;
	};
	
	class CMFlareLauncher : SmokeLauncher {
		scope = public;
		displayName = "$STR_A3_CMFlareLauncher0";
		magazines[] = {"60Rnd_CMFlareMagazine", "120Rnd_CMFlareMagazine", "240Rnd_CMFlareMagazine", "60Rnd_CMFlare_Chaff_Magazine", "120Rnd_CMFlare_Chaff_Magazine", "240Rnd_CMFlare_Chaff_Magazine", "192Rnd_CMFlare_Chaff_Magazine", "168Rnd_CMFlare_Chaff_Magazine", "300Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 0.2;
		simulation = "cmlauncher";
		modes[] = {"Single", "Burst", "FullAuto", "AIBurst"};
		
		class Single : Mode_SemiAuto {
			reloadTime = 0.1;
			burst = 1;
			multiplier = 2;
		};
		
		class Burst : Mode_Burst {
			reloadTime = 0.2;
			burst = 5;
			showToPlayer = true;
			multiplier = 2;
		};
		
		class AIBurst : Burst {
			burst = 5;
		};
		
		class FullAuto : Burst { 
			displayName = $STR_full_auto;
			burst = 300; 
			reloadTime = 2;
			showToPlayer = true;
		};
	};	
	
	class TU_CMFlareLauncher_Single : CMFlareLauncher {		
		class Single : Single {
			multiplier = 1;
		};
		
		class AIBurst : AIBurst {
			multiplier = 1;
		};
		
		class Burst : Burst {
			multiplier = 1;
		};
		
		class FullAuto : FullAuto {
			multiplier = 1;
		};
	};
	
	class Launcher_Base_F;
	
	class launch_Titan_base : Launcher_Base_F { 
		ace_overpressure_priority = 1; 
		ace_overpressure_angle = 30; 
		ace_overpressure_range = 3; 
		ace_overpressure_damage = 0.3; 
		ace_reloadlaunchers_enabled = 1; 
	};
    
   class MGunCore;
    class MGun: MGunCore {};
    class LMG_RCWS: MGun {};

   class UGL_F;
  /*   class GL_3GL_F: UGL_F {
		magazines[] = {
			"3Rnd_HE_Grenade_shell", "3Rnd_UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "3Rnd_UGL_FlareYellow_F", "3Rnd_UGL_FlareCIR_F", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", 
			"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow", "ACE_HuntIR_M203", 
			"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"
		};
    }; */
    class Rifle_Base_F;
    class arifle_MX_Base_F: Rifle_Base_F {
        class GL_3GL_F: UGL_F {
			magazines[] = {
				"3Rnd_HE_Grenade_shell", "3Rnd_UGL_FlareWhite_F", "3Rnd_UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "3Rnd_UGL_FlareYellow_F", "3Rnd_UGL_FlareCIR_F", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", 
				"rhs_mag_M441_HE", "rhs_mag_M433_HEDP", "rhs_mag_M4009", "rhs_mag_m576", "rhs_mag_M585_white", "rhs_mag_M661_green", "rhs_mag_M662_red", "rhs_mag_M713_red", "rhs_mag_M714_white", "rhs_mag_M715_green", "rhs_mag_M716_yellow", "ACE_HuntIR_M203", 
				"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"
			};
        };
    };
	class arifle_MX_SW_F : arifle_MX_Base_F {
		magazines[] = {
			"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim", 
			"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x47_Scenar_mag", "ACE_30Rnd_65_Creedmor_mag"
		};
	};
	
	class arifle_MXM_F : arifle_MX_Base_F {
		magazines[] = {
			"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x47_Scenar_mag", "ACE_30Rnd_65_Creedmor_mag", 
			"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
	};
	
	class arifle_MX_F : arifle_MX_Base_F {
		magazines[] = {
			"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x47_Scenar_mag", "ACE_30Rnd_65_Creedmor_mag", 
			"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
	};
	
	class arifle_MX_GL_F : arifle_MX_Base_F {
		magazines[] = {
			"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x47_Scenar_mag", "ACE_30Rnd_65_Creedmor_mag", 
			"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
	};
	
	class arifle_MXC_F : arifle_MX_Base_F {
		magazines[] = {
			"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag_Tracer", "ACE_30Rnd_65x39_caseless_mag_Tracer_Dim", "ACE_30Rnd_65x47_Scenar_mag", "ACE_30Rnd_65_Creedmor_mag", 
			"100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag", "ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
	};
};

class CfgVehicles {
		
	class Man;
	class CAManBase: Man
	{
		irtarget = 0;
	};
	class Ship_F;
	class Boat_F: Ship_F {
		radarTarget = 1;
		radarTargetSize = 1;
	};
	class Ship;
	class SmallShip : Ship
	{
		irtarget = 0;
	};
	class SDV_01_base_F : Boat_F {
		irTarget = false;
		radarTarget = 0;
	};
	
	class Rubber_duck_base_F : Boat_F { 
		maxspeed = 200;
		irTarget = false;
	};
	
	class Land;
	class LandVehicle: Land
	{
		irtarget = 0;
	};
	class Car: LandVehicle
	{
		class Components;
		class HitPoints;
		class NewTurret;
	};
	class Car_F : Car {
		radarTarget = 1;
		radarTargetSize = 1;
		explosionEffect = "pzn_FuelExplosion_small";
		class NewTurret;	// External class reference
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
		class Components: Components
		{
			class AICarSteeringComponent;
		};
	};
	
	class Wheeled_APC_F : Car_F
	{
		explosionEffect = "FuelExplosion";
		class NewTurret;	// External class reference
		class Turrets
		{
			class MainTurret : NewTurret
			{
				startEngine = false;
			};
		};
	};

    class MRAP_01_base_F : Car_F
	{
		explosionEffect = "pzn_FuelExplosion_small";
	};
	class Tank : LandVehicle
	{
		explosionEffect = "FuelExplosion";
		class NewTurret;	// External class reference
	};
	
	class Tank_F : Tank
	{
		explosionEffect = "FuelExplosion";
		class Turrets
		{
			class MainTurret : NewTurret
			{
				startEngine = false;
			};
		};
	};	
	class Helicopter_Base_F;
	
	class Helicopter_Base_H : Helicopter_Base_F {
		weapons[] = {"TU_CMFlareLauncher_Single"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	
	class Heli_Light_01_base_F : Helicopter_Base_H {
		weapons[] = {"TU_CMFlareLauncher_Single"};
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"};
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	
	class Heli_Light_01_armed_base_F : Heli_Light_01_base_F {
		weapons[] = {"M134_minigun", "missiles_DAR", "TU_CMFlareLauncher_Single"};
		magazines[] = {"5000Rnd_762x51_Belt", "24Rnd_missiles", "60Rnd_CMFlare_Chaff_Magazine"};
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F
	{
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	class StaticWeapon: LandVehicle
    {
        class Turrets;
    };
    class StaticMGWeapon;
    class AAA_System_01_base_F: StaticMGWeapon {
		class Turrets;
		class MainTurret;
		class Components;
	};
	class B_AAA_System_01_F: AAA_System_01_base_F {
		radarTargetSize=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal=360;
						angleRangeVertical=100;
						aimDown=-45;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableATL= 10;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
			    class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_aaasystem_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_aaasystem_Right {};
				};
			};
        };
	};
	class SAM_System_01_base_F: StaticMGWeapon {
		class Turrets;
		class MainTurret;
		class Components;
	};
	class B_SAM_System_01_F: SAM_System_01_base_F {
		radarTargetSize=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 8000;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 8000;
						angleRangeHorizontal=60;
						angleRangeVertical=40;
						animDirection="mainGun";
						aimDown=-0.5;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableATL= 10;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
			    class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_aaasystem_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_aaasystem_Right {};
				};
			};
        };
	};
	class SAM_System_02_base_F: StaticMGWeapon {
		class Turrets;
		class MainTurret;
		class Components;
	};
	class B_SAM_System_02_F: SAM_System_02_base_F {
		radarTargetSize=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 12000;
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 12000;
							maxRange = 12000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 12000;
						angleRangeHorizontal=60;
						angleRangeVertical=40;
						animDirection="mainGun";
						aimDown=-0.5;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableATL= 10;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret 
			{
			    class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_longsystem_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_longsystem_Right {};
				};
			};
        };
	};
	class UAV_01_base_F;
	class B_UAV_01_F: UAV_01_base_F
	{
		altFullForce = 1000; //Статический потолок
		altNoForce = 1000; //Практический потолок
	};
	class O_UAV_01_F: UAV_01_base_F
	{
		altFullForce = 1000; //Статический потолок
		altNoForce = 1000; //Практический потолок
	};
	class I_UAV_01_F: UAV_01_base_F
	{
		altFullForce = 1000; //Статический потолок
		altNoForce = 1000; //Практический потолок
	};
	//by kiker fix Jeep Wrangler (apex) хайд+перебор вооружения
	class Offroad_02_base_F: Car_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
		class Turrets: Turrets
		{
		};		
		class animationSources: AnimationSources
		{
			class Door_1_source
			{
				source="door";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2_source: Door_1_source
			{
			};
			class Door_3_source: Door_1_source
			{
			};
			class hideLeftDoor
			{
				displayName="$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor10";
				author="Fixed by Kiker";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-4;
			};
			class hideRightDoor: hideLeftDoor
			{
				displayName="$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor20";
			};
			class hideRearDoor: hideLeftDoor
			{
				displayName="$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor30";
				mass=-2;
			};
			class hideBullbar: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideBullbar0";
			};
			class hideFenders: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideFenders0";
				mass=-14;
			};
			class hideHeadSupportRear: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideHeadSupportRear0";
				mass=-2.5;
			};
			class hideHeadSupportFront: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideHeadSupportFront0";
				mass=-2.5;
			};
			class hideRollcage: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideRollcage0";
				mass=-15;
			};
			class hideSeatsRear: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideSeatsRear0";
				lockCargoAnimationPhase=1;
				lockCargo[]={1,2};
				mass=-5;
			};
			class hideSpareWheel: hideLeftDoor
			{
				displayName="$STR_A3_animationSources_hideSpareWheel0";
			};
			class LMG_revolving
			{
				source="revolving";
				weapon="BN_RHS_M249";
			};
			class LMG_reload
			{
				source="reload";
				weapon="BN_RHS_M249";
			};
			class LMG_reloadmagazine
			{
				source="reloadmagazine";
				weapon="BN_RHS_M249";
			};
			class LMG_muzzle_rot
			{
				source="ammorandom";
				weapon="BN_RHS_M249";
			};
			class SPG9_reloadmagazine
			{
				source="reloadmagazine";
				weapon="BN_rhs_weap_SPG9";
			};
			class SPG9_reload
			{
				source="reload";
				weapon="BN_rhs_weap_SPG9";
			};
		};
		animationList[]=
		{
			"hideLeftDoor",
			0,
			"hideRightDoor",
			0,
			"hideRearDoor",
			0,
			"hideBullbar",
			0,
			"hideFenders",
			0,
			"hideHeadSupportFront",
			0,
			"hideHeadSupportRear",
			0,
			"hideRollcage",
			0,
			"hideSeatsRear",
			0,
			"hideSpareWheel",
			0
		};
	};
	class Offroad_02_unarmed_base_F: Offroad_02_base_F
	{
	};
	class Offroad_02_LMG_base_F: Offroad_02_base_F
	{
	};
	class Offroad_02_AT_base_F: Offroad_02_base_F
	{
	};
	class C_IDAP_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_black_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_blue_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_green_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_orange_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_red_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class C_Offroad_02_unarmed_white_F: C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class I_C_Offroad_02_unarmed_F: Offroad_02_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class I_C_Offroad_02_unarmed_brown_F: I_C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class I_C_Offroad_02_unarmed_olive_F: I_C_Offroad_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
	};
	class I_C_Offroad_02_LMG_F: Offroad_02_LMG_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
		bn_csw_loading_style = 1;
		class animationSources: AnimationSources
		{
			class LMG_revolving
			{
				source="revolving";
				weapon="BN_RHS_M249";
			};
			class LMG_reload
			{
				source="reload";
				weapon="BN_RHS_M249";
			};
			class LMG_reloadmagazine
			{
				source="reloadmagazine";
				weapon="BN_RHS_M249";
			};
			class LMG_muzzle_rot
			{
				source="ammorandom";
				weapon="BN_RHS_M249";
			};
		};
		class TransportMagazines
			{
				class _xx_rhs_200rnd_556x45_M_SAW
				{
					magazine = "rhs_200rnd_556x45_M_SAW";
					count = 4;
				};
			};
		class Turrets: Turrets
		{
			class LMG_Turret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				turretInfoType = "RscWeaponZeroing";
				weapons[]=
				{
					"BN_RHS_M249"
				};
				magazines[]=
				{
					"rhs_200rnd_556x45_M_SAW"
				};
				minElev=-10;
				maxElev=18;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="Gunner_Offroad_02_LMG_F";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
	};
	class I_C_Offroad_02_AT_F: Offroad_02_AT_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		engineMOI=1;
		maxSpeed=135;
		enginePower=179;
		bn_csw_loading_style = 1;
		class AnimationSources: animationSources
		{
			class hideRollcage
			{
				source="user";
				animPeriod=0.001;
			};
			class hideHeadSupportRear
			{
				source="user";
				animPeriod=0.001;
			};
			class hideSeatsRear
			{
				source="user";
				animPeriod=0.001;
			};
			class hideBullbar
			{
				source="user";
				animPeriod=0.001;
			};
			class SPG9_reloadmagazine
			{
				source="reloadmagazine";
				weapon="BN_rhs_weap_SPG9";
			};
			class SPG9_reload
			{
				source="reload";
				weapon="BN_rhs_weap_SPG9";
			};
		};
		class TransportMagazines
		{
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_pg9v";
				count = 6;
			};
			class _xx_spg_mag_he
			{
				magazine = "BN_rhs_mag_og9v";
				count = 6;
			};
		};
		class Turrets: Turrets
		{
			class AT_Turret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"BN_rhs_weap_SPG9"
				};
				magazines[]=
				{
					"BN_rhs_mag_pg9v"
				};
				minElev=-5;
				maxElev=14;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="Gunner_Offroad_02_AT_F";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunEnd="konec hlavne";
				gunBeg="usti hlavne";
				memoryPointGunnerOptics="gunnerView";
				turretInfoType = "RscWeaponZeroing";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope";
				class OpticsIn
				{
					class HEAT: ViewOptics
					{
						initFov=0.111;
						minFov=0.111;
						maxFov=0.111;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope.p3d";
					};
					class HE: ViewOptics
					{
						initFov=0.111;
						minFov=0.111;
						maxFov=0.111;
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_of_scope.p3d";
					};
				};
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				gunnerForceOptics=0;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.111;
					minFov=0.111;
					maxFov=0.111;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewOptics
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
		animationList[]=
		{
			"hideLeftDoor",
			0.69999999,
			"hideRightDoor",
			0.69999999,
			"hideRearDoor",
			0.40000001,
			"hideBullbar",
			1,
			"hideFenders",
			0.69999999,
			"hideHeadSupportFront",
			0.5,
			"hideHeadSupportRear",
			0.69999999,
			"hideRollcage",
			1,
			"hideSpareWheel",
			0.80000001,
			"hideSeatsRear",
			1
		};
	};
	//by kiker fix Jeep Wrangler под другими классами
	class SG_Offroad_02_unarmed_F: I_C_Offroad_02_unarmed_F
	{
		displayName = "Jeep Wrangler";
		author="Fixed by Kiker";
		scope=2;
		faction = "IND_C_F";
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Orange
			{
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Brown
			{
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
		};
	};
	class SG_Offroad_02_LMG_F: I_C_Offroad_02_LMG_F
	{
		displayName = "Jeep Wrangler (M249)";
		author="Fixed by Kiker";
		scope=2;
		faction = "IND_C_F";
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Orange
			{
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Brown
			{
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
		};
	};
	class SG_Offroad_02_AT_F: I_C_Offroad_02_AT_F
	{
		displayName = "Jeep Wrangler (SPG)";
		author="Fixed by Kiker";
		scope=2;
		faction = "IND_C_F";
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Blue
			{
				displayName="$STR_A3_TEXTURESOURCES_BLUE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Green
			{
				displayName="$STR_A3_TEXTURESOURCES_GREEN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Orange
			{
				displayName="$STR_A3_TEXTURESOURCES_ORANGE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Red
			{
				displayName="$STR_A3_TEXTURESOURCES_RED0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class White
			{
				displayName="$STR_A3_TEXTURESOURCES_WHITE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Brown
			{
				displayName="$STR_A3_TEXTURESOURCES_BROWN0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
			class Olive
			{
				displayName="$STR_A3_TEXTURESOURCES_OLIVE0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa",
					"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"
				};
				materials[]=
				{
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_2_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_ext_chrome.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_metal.rvmat",
					"\a3\soft_f_exp\offroad_02\data\offroad_02_int_chrome.rvmat"
				};
				factions[]=
				{
					"IND_C_F"
				};
			};
		};
	};
	//by kiker fix Karatel + NEW skins
	class MRAP_02_base_F: Car_F
	{
		author="Fixed by Kiker";
		maxSpeed=120;
	};
	class MRAP_02_hmg_base_F: MRAP_02_base_F
	{
		author="Fixed by Kiker";
		maxSpeed=120;
	};
	class MRAP_02_gmg_base_F: MRAP_02_hmg_base_F
	{
		author="Fixed by Kiker";
	};
	class O_MRAP_02_F: MRAP_02_base_F
	{
		author="Fixed by Kiker";
		maxSpeed=120;
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Black
			{
				displayName="Black";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_G_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_G_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_D_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_D_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
		};
	};
	class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_MRAP_02_gmg_F: MRAP_02_gmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_MRAP_02_ghex_F: MRAP_02_base_F
	{
		author="Fixed by Kiker";
		maxSpeed=120;
		class TextureSources
		{
			class Hex
			{
				displayName="$STR_A3_TEXTURESOURCES_HEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
					"\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
				factions[]=
				{
					"OPF_T_F"
				};
			};
			class Black
			{
				displayName="Black";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_G_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_G_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="Fixed by Kiker";
				textures[]=
				{
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_01_D_co.paa",
					"\Rebalance_bis\data\mrap_02\mrap_02_ext_02_D_co.paa",
					"\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"
				};
			};
		};
	};
	class O_T_MRAP_02_hmg_ghex_F: MRAP_02_hmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_MRAP_02_gmg_ghex_F: MRAP_02_gmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix LSV MK. II (apex) хайд
	class LSV_02_unarmed_base_F;
	class LSV_02_base_F: Car_F
	{
		class Turrets;
	};
	class LSV_02_AT_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class LSV_02_armed_base_F: LSV_02_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class O_T_LSV_02_armed_F: LSV_02_armed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_armed_viper_F: O_T_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_AT_F: LSV_02_AT_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_unarmed_viper_F: O_T_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_armed_F: LSV_02_armed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class O_LSV_02_armed_viper_F: O_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_unarmed_F: LSV_02_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_AT_F: LSV_02_AT_base_F
	{
		author="Fixed by Kiker";
		scope=0;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};
	class O_LSV_02_unarmed_viper_F: O_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_armed_black_F: O_T_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_armed_ghex_F: O_T_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_armed_arid_F: O_T_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_unarmed_black_F: O_T_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_unarmed_ghex_F: O_T_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_LSV_02_unarmed_arid_F: O_T_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_armed_black_F: O_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_armed_ghex_F: O_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_armed_arid_F: O_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_unarmed_black_F: O_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_unarmed_ghex_F: O_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_LSV_02_unarmed_arid_F: O_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix LSV MK. II под другими классами + перебор вооружения + NEW skins
	class SG_LSV_02_armed_M134: O_LSV_02_armed_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=130;
		enginePower=300;
		side = 1;
		faction = "BLU_F";
		class AnimationSources: AnimationSources
		{
			class Minigun
			{
				source="revolving";
				weapon="rhs_weap_m134_minigun_1";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="rhs_weap_m134_minigun_1";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="rhs_weap_m134_minigun_1";
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_white_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_white_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_green_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_green_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
				};
			};
			class Arid
			{
				displayName="$STR_A3_TextureSources_Arid0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_m134_minigun_1"
				};
				magazines[]=
				{
					"5000Rnd_762x51_Belt"
				};
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
	};
	class SG_LSV_02_armed_Metis: O_LSV_02_AT_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=130;
		enginePower=300;
		bn_csw_loading_style = 1;
		side = 1;
		faction = "BLU_F";
		class AnimationSources: AnimationSources
		{
			class VoronaMuzzle_rot
			{
				source="ammorandom";
				weapon="rhs_weap_9K115_2_launcher";
			};
			class VoronaMuzzle_reload
			{
				source="reload";
				weapon="rhs_weap_9K115_2_launcher";
			};
			class VoronaMuzzle_revolving
			{
				source="revolving";
				weapon="rhs_weap_9K115_2_launcher";
			};
			class VoronaMuzzle_reloadMagazine
			{
				source="reloadMagazine";
				weapon="rhs_weap_9K115_2_launcher";
			};
		};
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_white_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_white_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_green_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_green_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
				};
			};
			class Arid
			{
				displayName="$STR_A3_TextureSources_Arid0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa",
					"\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_F_CO.paa"
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_9K115_2_launcher"
				};
				magazines[]=
				{
					"rhs_mag_9M131M"
				};
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewGunner
				{
					initFov=0.69999999;
					minFov=0.25;
					maxFov=1.1;
				};
			};
		};
	};
	class SG_LSV_02_unarmed: O_T_LSV_02_unarmed_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=130;
		enginePower=300;
		side = 1;
		faction = "BLU_F";
		class TextureSources
		{
			class Black
			{
				displayName="$STR_A3_TEXTURESOURCES_BLACK0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
				};
			};
			class Desert
			{
				displayName="Desert";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_white_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_white_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
				};
			};
			class Green
			{
				displayName="Green";
				author="Fixed by Kiker";
				textures[]=
				{
					"\rebalance_bis\data\LSV_02\CSAT_LSV_01_green_CO.paa",
					"\rebalance_bis\data\LSV_02\CSAT_LSV_02_green_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
				};
			};
			class GreenHex
			{
				displayName="$STR_A3_TEXTURESOURCES_GREENHEX0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
				};
			};
			class Arid
			{
				displayName="$STR_A3_TextureSources_Arid0";
				author="Fixed by Kiker";
				textures[]=
				{
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
					"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
				};
			};
		};
	};
	//by kiker fix M-ATV хайд вооруженных
	class MRAP_01_gmg_base_F;
	class MRAP_01_hmg_base_F;
	class B_MRAP_01_gmg_F: MRAP_01_gmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_MRAP_01_hmg_F: MRAP_01_hmg_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_MRAP_01_gmg_F: B_MRAP_01_gmg_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_MRAP_01_hmg_F: B_MRAP_01_hmg_F
	{
		author="Fixed by Kiker";
		scope=0;
	};	
	//by kiker fix Otokar ARMA хайд
	class APC_Wheeled_02_base_F;
	class APC_Wheeled_02_base_v2_F;
	class O_APC_Wheeled_02_base_F: APC_Wheeled_02_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_APC_Wheeled_02_rcws_ghex_F: O_APC_Wheeled_02_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_APC_Wheeled_02_rcws_v2_ghex_F: APC_Wheeled_02_base_v2_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix Polaris DAGOR хайд
	class LSV_01_base_F: Car_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class LSV_01_armed_base_F: LSV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class LSV_01_unarmed_base_F: LSV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class LSV_01_light_base_F: LSV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class LSV_01_AT_base_F: LSV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_armed_F: LSV_01_armed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_AT_F: LSV_01_AT_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_armed_CTRG_F: B_T_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_unarmed_CTRG_F: B_T_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_armed_F: LSV_01_armed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_AT_F: LSV_01_AT_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_unarmed_F: LSV_01_unarmed_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_armed_black_F: B_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_armed_olive_F: B_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_armed_sand_F: B_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_unarmed_black_F: B_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_unarmed_olive_F: B_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_LSV_01_unarmed_sand_F: B_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_armed_black_F: B_T_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_armed_olive_F: B_T_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_armed_sand_F: B_T_LSV_01_armed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_unarmed_black_F: B_T_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_unarmed_olive_F: B_T_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_LSV_01_unarmed_sand_F: B_T_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix Polaris DAGOR под другими классами
	class SG_LSV_01_unarmed: B_T_LSV_01_unarmed_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=120;
		enginePower=250;
	};
	//by kiker fix SUV
	class SUV_01_base_F;
	class C_SUV_01_F: SUV_01_base_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=135;
		enginePower=280;
	};
	class SUV_01_base_red_F: C_SUV_01_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=135;
		enginePower=280;
	};
	class SUV_01_base_black_F: C_SUV_01_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=135;
		enginePower=280;
	};
	class SUV_01_base_grey_F: C_SUV_01_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=135;
		enginePower=280;
	};
	class SUV_01_base_orange_F: C_SUV_01_F
	{
		author="Fixed by Kiker";
		scope=2;
		maxSpeed=135;
		enginePower=280;
	};
	//by kiker fix KamAZ MRL хайд
	class Truck_02_MRL_base_F;
	class I_Truck_02_MRL_F: Truck_02_MRL_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix Rooikat 120 UP хайд
	class AFV_Wheeled_01_up_base_F;
	class AFV_Wheeled_01_base_F;
	class B_T_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix Badger IFV хайд
	class B_APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_T_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_cannon_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	//by kiker fix UGV хайд
	class UGV_01_base_F: Car_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_UGV_01_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_UGV_01_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class I_UGV_01_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_UGV_01_rcws_ghex_F: UGV_01_rcws_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class O_T_UGV_01_ghex_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	class C_IDAP_UGV_01_F: UGV_01_base_F
	{
		author="Fixed by Kiker";
		scope=0;
	};
	
};
