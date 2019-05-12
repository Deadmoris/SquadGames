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
#define X_WEAP(XWEAP,XCOUNT) class _xx_##XWEAP { \
        weapon = #XWEAP; \
        count = XCOUNT; \
};


class CfgPatches
{
	class tu_aircraft
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_main","rhsusf_c_airweapons","rhs_c_airweapons"};
		version = 0.1;
	};
};

class SensorTemplateIR;
class SensorTemplateActiveRadar;


class CfgAmmo {
	class Bomb_04_F;
	class Bo_Mk82;
	class Missile_AGM_01_F;
	class Missile_AGM_02_F;
	class MissileCore;
	class MissileBase: MissileCore {
		class Components;
	};	
	class Gatling_30mm_HE_Plane_CAS_01_F;
	class M_Air_AA: MissileBase {
	};
	class ammo_Bomb_LaserGuidedBase;	
	class B_25mm;
	class Bo_GBU12_LGB;
	class rhs_ammo_r60_base;
	class rhs_ammo_Hellfire_AT;
    class rhs_ammo_agm65;
	
	
	class Missile_AA_04_F: MissileBase
	{
		class Components;
	};
	class Missile_AA_03_F : Missile_AA_04_F {
		missileLockCone = 25;
		missileKeepLockedCone = 35;
		weaponLockSystem = "2 + 16";
		cmimmunity = 0.75;
	};
	
	class rhs_ammo_r73: Missile_AA_04_F {
		weaponLockSystem = "2 + 16";
		missileLockCone = 20;
		missileKeepLockedCone = 35;
		cmimmunity = 0.75;
	};
	class rhs_ammo_r73m: rhs_ammo_r73 {
		weaponLockSystem = "2 + 16";
		missileLockCone = 18;
		missileKeepLockedCone = 33;
		cmimmunity = 0.77;
	};
	class rhs_ammo_r74: rhs_ammo_r73m {
		weaponLockSystem = "2 + 16";
		missileLockCone = 25;
		missileKeepLockedCone = 35;
		cmimmunity = 0.8;
	};
	class rhs_ammo_r74m2: rhs_ammo_r73 {
		weaponLockSystem = "2 + 16";
		missileLockCone = 25;
		missileKeepLockedCone = 35;
		cmimmunity = 0.82;
	};
	class rhs_ammo_Sidewinder_AA: Missile_AA_04_F {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class rhs_ammo_aim9m: rhs_ammo_Sidewinder_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.73;
	};
	class rhs_ammo_Sidewinder_AA_a10: rhs_ammo_Sidewinder_AA {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class rhs_ammo_Sidewinder_AA_delay: rhs_ammo_Sidewinder_AA {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class rhs_ammo_Sidewinder_AA_heli	: rhs_ammo_Sidewinder_AA {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA {
		activeSensorAlwaysOn = 0;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		thrust = 340;
		/* class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 40;
						angleRangeVertical = 45;
					};
				};
			};
		}; */
    };
	
	class rhs_ammo_aim120d : rhs_ammo_aim120 {
	    weaponLockSystem = 8;
		missileLockCone = 50;
		missileKeepLockedCone = 60;
		cmimmunity = 0.9;
		thrust = 400;
		/* class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
					};
				};
			};
		}; */
    };
	
	class rhs_ammo_r27_base: Missile_AA_04_F {};
	class rhs_ammo_r27r : rhs_ammo_r27_base {
		activeSensorAlwaysOn = 0;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		/* class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2100;
							maxRange = 2100;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		}; */
    };
	
	class rhs_ammo_r27er : rhs_ammo_r27r {
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		/* class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2500;
							maxRange = 2500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		}; */
    };
	
	class rhs_ammo_r27t: rhs_ammo_r27_base
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 20;
		missileKeepLockedCone = 30;
		missileLockMaxDistance = 8000;
		missileLockMinDistance = 500;
		cmimmunity = 0.7;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange = 500;
							maxRange = 8000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = -1;
						angleRangeHorizontal = 15;
						angleRangeVertical = 15;
						maxTrackableSpeed = 1200;
						aimDown = 0;
					};
				};
			};
		};
    };
	class rhs_ammo_r27et : rhs_ammo_r27t {
		weaponLockSystem = "2 + 16";
		missileLockCone = 20;
		missileKeepLockedCone = 30;
		cmimmunity = 0.7;
    };
	
	class rhs_ammo_r77 : rhs_ammo_r73 {
		activeSensorAlwaysOn = 0;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		/* class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2800;
							maxRange = 2800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
					};
				};
			};
		}; */
    };
	
	class rhs_ammo_r77m : rhs_ammo_r77 {
	    weaponLockSystem = 8;
		missileLockCone = 50;
		missileKeepLockedCone = 60;
		cmimmunity = 0.9;
    };
    
	class rhs_ammo_r60: rhs_ammo_r60_base {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.65;
	};
	class rhs_ammo_r60m: rhs_ammo_r60_base {
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.7;
	};
	class rhs_ammo_agm65e: MissileBase {
		submunitionAmmo = "rhs_ammo_agm65_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		cost = 1000;
		hit = 400;
		indirectHit = 250;
		indirectHitRange = 10.5;
		whistleDist = 8;
		simulationStep = 0.002;
		cmimmunity = 0.8;
		maxControlRange = 11000;
		maneuvrability = 14;
		trackOversteer = 1;
		maxSpeed = 320;
		airFriction = 0.07;
		sideAirFriction = 0.08;
		trackLead = 1;
		initTime = 0.15;
		thrustTime = 2;
		thrust = 246;
		fuseDistance = 500;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "PylonBackEffects";
		muzzleEffect = "";
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		maverickWeaponIndexOffset = 50;
		missileLockCone = 60;
		
		manualControl = 0;
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e_fly.p3d";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_agm65e.p3d";
		
		irlock = 0;
		airLock = 0;
		timeToLive = 25;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	/*
	class FIR_AIM9X : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 18;
		missileKeepLockedCone = 33;
		cmimmunity = 0.77;
	};
	class FIR_AAM5 : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 18;
		missileKeepLockedCone = 33;
		cmimmunity = 0.77;
	};
	class js_a_fa18_Aim9x: MissileBase
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 18;
		missileKeepLockedCone = 33;
		cmimmunity = 0.77;
	};
	class js_a_fa18_aim120c: MissileBase
	{
		activeSensorAlwaysOn = 0;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
	};
	class FIR_AIM9L : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class FIR_AAM3 : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class FIR_AIM9L_TWAS : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	class FIR_AIM9L_TWAS_Red : M_Air_AA
	{
		weaponLockSystem = "2 + 16";
		missileLockCone = 15;
		missileKeepLockedCone = 30;
		cmimmunity = 0.75;
	};
	
	class FIR_AIM54 : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
	};
	class FIR_AIM7 : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
		
	};
	class FIR_AIM7_2 : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
		
	};
	class FIR_AIM120 : M_Air_AA
	{
		activeSensorAlwaysOn = 0;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		
	};
	
	
	class FIR_AIM120B : FIR_AIM120
	{
		weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 47;
		cmimmunity = 0.83;
		
	};
	class FIR_AIM120A : FIR_AIM120
	{
		weaponLockSystem = 8;
		missileLockCone = 35;
		missileKeepLockedCone = 45;
		cmimmunity = 0.8;
		
	};
	
	class FIR_AAM4 : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
		
	};
	class FIR_AIM120_TWAS : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		
	};
	
	
	
	class FIR_AIM120_TWAS_Red : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.85;
		
	};
	class FIR_AIM54_TWAS : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
		
	};
	class FIR_AIM54_TWAS_Red : M_Air_AA
	{
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		cmimmunity = 0.75;
		
	};
	class FIR_AGM65D: M_Air_AA
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 25;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class FIR_AGM65G: M_Air_AA
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 25;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class FIR_AGM65L: M_Air_AA
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 25;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class js_a_fa18_Maverick: MissileBase
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 25;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class FIR_GBU31 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU32 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU38 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU39 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU53 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU10 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	
	class js_a_fa18_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
		nvLock = 0;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
	};
	class FIR_GBU12 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
		nvLock = 0;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
	};
	class FIR_GBU24A : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GBU24B : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class FIR_GCS1 : Bo_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
	};
	
	class js_a_fa18_GBU38_JDAM: js_a_fa18_GBU12_LGB
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class js_a_fa18_GBU32_JDAM: js_a_fa18_GBU38_JDAM
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	class js_a_fa18_GBU31_JDAM: js_a_fa18_GBU38_JDAM
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	*/
	class tu_ammo_R60: rhs_ammo_r73{
		cmimmunity = 0.65;
	};
	class tu_ammo_MK82 : Bo_Mk82 {
		maverickweapon = 1;
		canLock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
        autoSeekTarget = 0;
		weaponLockSystem = 0; 
		irlock = 0;
		laserlock = 0;
	};
	
	class tu_ammo_25mm_Av8b : B_25mm {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 4;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
	};
		
	class tu_ammo_AAM4: M_Air_AA {
		model = "\tu_aircraft\data\AAM4";
		proxyShape = "\tu_aircraft\data\AAM4";
		hit = 300;
		indirectHit = 250;
		indirectHitRange = 5;
		fuseDistance = 800;
		weaponLockSystem = "2 + 16";
		timetoLive = 40;
		maneuvrability = 35;
		cmimmunity = 0.85;
		lockType = 0;
		airLock = 2;
		irLock = "true";
		laserLock = "false";
		initTime = 0.5;
		thrustTime = 25;
		maxspeed = 600;
		maxControlRange = 3800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 450;
		effectsMissile = "missile3";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		holdsterAnimValue = 1;
	};
	
	class tu_ammo_AAM3 : M_Air_AA {
		weaponLockSystem = "2 + 16";
		model = "\tu_aircraft\data\AAM3";
		proxyShape = "\tu_aircraft\data\AAM3";
		hit = 300;
		indirectHit = 200;
		indirectHitRange = 5;
		timetoLive = 20;
		cmimmunity = 0.85;
		maneuvrability = 90;
		lockType = 0;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		initTime = 0.1;
		maxspeed = 850;
		maxControlRange = 2000;
		trackOversteer = 1;
		trackLead = 0.5;
		thrust = 230;
		thrustTime = 7;
		effectsMissile = "missile3";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		holdsterAnimValue = 0.5;
	};
	
	class tu_ammo_AIM7: M_Air_AA {
		model = "\tu_aircraft\data\AIM7";
		proxyShape = "\tu_aircraft\data\AIM7";
		hit = 300;
		indirectHit = 250;
		indirectHitRange = 5;
		fuseDistance = 800;
		weaponLockSystem = "2 + 16";
		timetoLive = 40;
		maneuvrability = 35;
		cmimmunity = 0.8;
		lockType = 1;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		initTime = 0.5;
		thrustTime = 20;
		maxspeed = 780;
		maxControlRange = 3800;
		trackOversteer = 1;
		trackLead = 1;
		thrust = 400;
		effectsMissile = "tu_pzrk_smoke";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		holdsterAnimValue = 1;
	};
	
	class tu_ammo_AIM9M: M_Air_AA {
		weaponLockSystem = "2 + 16";
		model = "\tu_aircraft\data\AIM9M";
		proxyShape = "\tu_aircraft\data\AIM9M";
		hit = 300;
		indirectHit = 200;
		indirectHitRange = 5;
		timetoLive = 20;
		cmimmunity = 0.8;
		maneuvrability = 90;
		lockType = 0;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		initTime = 0.1;
		maxspeed = 850;
		maxControlRange = 2000;
		trackOversteer = 1;
		trackLead = 0.5;
		thrust = 220;
		thrustTime = 7;
		effectsMissile = "tu_pzrk_smoke";
		soundHit[] = {"A3\Sounds_F\weapons\Rockets\explosion_missile_01",3.1622777,1,1800};
		holdsterAnimValue = 0.5;
	};
		
	class tu_ammo_agm84: MissileBase {
		model = "\tu_aircraft\data\agm84";
		proxyShape = "\tu_aircraft\data\agm84";
		hit = 2500;
		indirectHit = 1500;
		indirectHitRange = 10.5;
		maxSpeed = 300;
		airFriction = 0.04;
		sideAirFriction = 0.08;
		maneuvrability = 14;
		simulationStep = 0.002;
		airLock = 0;
		irLock = 0;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		whistleDist = 8;
		maxControlRange = 11000;
		manualControl = 0;
		cost = 1000;
		trackOversteer = 1;
		timeToLive = 120;
		trackLead = 1;
		initTime = 0.35;
		thrustTime = 2;
		thrust = 366;
		fuseDistance = 500;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		effectsMissile = "missile2";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
		soundHit[] = {"",1,1,1900};
		class Hiteffects
		{
			hitWater = "ImpactEffectsSmall";
		};
		class CamShakeExplode
		{
			power = "(150*0.2)";
			duration = "((round (150^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((10 + 150^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 150;
			duration = "((round (150^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(80^0.25)";
			duration = "((round (80^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((80^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 4;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	
	class tu_ammo_aim120: Missile_AA_04_F {
		model = "\tu_aircraft\data\aim120";
		proxyShape = "\tu_aircraft\data\aim120";
		hit = 300;
		indirectHit = 200;
		indirectHitRange = 10;
		maxSpeed = 850;
		airFriction = 0.078;
		sideAirFriction = 0.2;
		maneuvrability = 30;
		simulationStep = 0.002;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		cmimmunity = 0.8;
		trackOversteer = 1;
		trackLead = 1;
		cost = 1000;
		timeToLive = 20;
		initTime = 0.25;
		thrustTime = 30.5;
		thrust = 385;
		fuseDistance = 750;
	    weaponLockSystem = 8;
		missileLockCone = 40;
		missileKeepLockedCone = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "tu_pzrk_smoke";
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
							minRange = 3000;
							maxRange = 3000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
					};
				};
			};
		};
	};
	
	class tu_ammo_aim9x: MissileBase {
		model = "\tu_aircraft\data\aim9x";
		proxyShape = "\tu_aircraft\data\aim9x";
		hit = 200;
		indirectHit = 85;
		maxSpeed = 828;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airFriction = 0.05;
		sideAirFriction = 0.1;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		weaponLockSystem = "2 + 16";
		missileLockCone = 30;
		cmimmunity = 0.8;
		timeToLive = 40;
		trackOversteer = 1;
		trackLead = 1;
		initTime = 0;
		thrustTime = 5;
		thrust = 240;
		fuseDistance = 100;
		cost = 1500;
		whistleDist = 20;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "tu_pzrk_smoke";
		muzzleEffect = "BIS_fnc_effectFiredHeliRocket";
	};
	
	class tu_ammo_kab500l: ammo_Bomb_LaserGuidedBase {
		hit = 6000;
		indirectHit = 1800;
		indirectHitRange = 12;
		laserLock = 1;
		airlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1",2.51189,1,2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2",2.51189,1,2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3",2.51189,1,2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",2.51189,1,2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",2.51189,1,2400};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		explosionSoundEffect = "DefaultExplosion";
		model = "\tu_aircraft\data\kab500l";
		proxyShape = "\tu_aircraft\data\kab500l";
		trackOversteer = 1;
		trackLead = 0.95;
		maneuvrability = 20;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
		missileLockCone = 120;
		maxControlRange = 8000;
		manualControl = 0;
		lockSeekRadius = 300;
		irlock = 0;
		timeToLive = 31337;
	};
	
	class tu_ammo_r77 : MissileBase {
		model = "\tu_aircraft\data\r77";
		proxyShape = "\tu_aircraft\data\r77";
		hit = 400;
		indirectHit = 200;
		indirectHitRange = 10;
		airFriction = 0.078;
		sideAirFriction = 0.2;
		maneuvrability = 30;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 1;
		airLock = 2;
		irLock = 1;
		laserLock = 0;
		cost = 1000;
		timeToLive = 20;
		maxSpeed = 850;
		initTime = 0.25;
		thrustTime = 30.5;
		thrust = 385;
		fuseDistance = 50;
		cmimmunity = 0.8;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
		effectsMissile = "tu_pzrk_smoke";
		weaponLockSystem = "2 + 16";
	};
	
	class rhs_ammo_fab250 : Bomb_04_F {
		hit = 3400;
		indirectHit = 625;
		indirectHitRange = 24;
		airLock = 0;
		canLock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
        autoSeekTarget = 0;
		weaponLockSystem = 0; 
		irlock = 0;
		laserlock = 0;
		/*maxControlRange = 10;
		maneuvrability = 2.5; 
		model = "\rhsafrf\addons\rhs_a2port_air\data\proxy\fab250";
		proxyShape = "\rhsafrf\addons\rhs_a2port_air\data\proxy\fab250"; */
	};
	
	class rhs_ammo_gbu12 : Bomb_04_F {
		hit = 3000;
		indirectHit = 550;
		indirectHitRange = 18;
		fuseDistance = 50;
		maxControlRange = 100000;
		manualControl = 0;
		maneuvrability = 20;
		autoSeekTarget = 1;
		lockSeekRadius = 300;
		nvLock = 0;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
		laserLock = 1;
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
	};
	
	class CUP_Bo_KAB250_LGB: Bo_GBU12_LGB {
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
		nvLock = 0;
		missileLockMaxDistance = 7000; 
        missileLockMinDistance = 500;
		weaponLockSystem = 4;
	};
	
	class tu_ammo_gbu38 : rhs_ammo_gbu12 {
		model = "\tu_aircraft\data\gbu38";
		proxyShape = "\tu_aircraft\data\gbu38";
		simulation = "shotMissile";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		airLock = 0;
		irLock = 0;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		missileLockCone = 150;
		lockSeekRadius = 300;
		autoSeekTarget = 1;
		cost = 1000;
		timeToLive = 31337;
	};
	
	class tu_ammo_gbu32 : tu_ammo_gbu38 {
		model = "\tu_aircraft\data\gbu32";
		proxyShape = "\tu_aircraft\data\gbu32";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 18;
		cost = 1200;
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	
	class tu_ammo_gbu31 : tu_ammo_gbu32 {
		model = "\tu_aircraft\data\gbu31";
		proxyShape = "\tu_aircraft\data\gbu31";
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 25;
		cost = 1800;
		irlock = 0;
		airLock = 0;
		timeToLive = 31337;
		lockSeekRadius = 300;
	};
	
	class rhs_ammo_s25_base;
	class rhs_ammo_s25l: rhs_ammo_s25_base
	{
        irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class rhs_ammo_s25ld: rhs_ammo_s25l	{};
	
	class rhs_ammo_kh29_base;
	class rhs_ammo_kh29l: rhs_ammo_kh29_base
	{
        irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};	
	class rhs_ammo_kh29ml: rhs_ammo_kh29_base
	{
        irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	
	class rhs_ammo_kh38m_base;
	class rhs_ammo_kh38mle: rhs_ammo_kh38m_base
	{
        irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};	
	class rhs_ammo_kh38mle_ext: rhs_ammo_kh38mle
	{
        irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};	
	
	class rhs_ammo_kh25_base;
	class rhs_ammo_kh25: rhs_ammo_kh25_base
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class rhs_ammo_kh25ml: rhs_ammo_kh25_base
	{
		irlock = 0;
		airLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1; 
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOBL";
            seekerLockModes[] = {"LOBL"};

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 30;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 8000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	
	class rhs_ammo_kab250;
	class rhs_ammo_kab500: rhs_ammo_kab250
	{
		model = "\js_jc_su35\stores\m_kab500l";
		proxyShape = "\js_jc_su35\stores\m_kab500l";
	};
	
	class tu_ammo_ch25: rhs_ammo_kh29l
	{
		hit = 2200;
		indirectHit = 60;
		airLock = 0;
		irLock = 0;
		timeToLive = 19;
		canlock = 0;
		nvLock = 0;
		missileLockMaxDistance = 0; 
        missileLockMinDistance = 0;
		weaponLockSystem = 0;
		laserlock = 1;
		model = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_fly_F.p3d";
		proxyShape = "\A3\Weapons_F_EPC\Ammo\Missile_AGM_01_F.p3d";
	};
	
	class tu_ammo_30mm_A10 : Gatling_30mm_HE_Plane_CAS_01_F
	{
		hit = 220;
		caliber = 4.17;
		indirecthit = 40;
		airLock = 0;
		irLock = 0;
		canlock = 0;
		nvLock = 0;
	};
};

class CfgMagazines {
	class rhs_mag_1000Rnd_30x173;
	class rhs_mag_R73;
	class rhs_mag_gsh30_bt_250;
	class VehicleMagazine;
	class rhs_mag_gbu12;
	class rhs_mag_agm65;
	class 300Rnd_25mm_shells;
	class 2Rnd_Mk82;
	class FIR_M61A2_480rnd_M : VehicleMagazine
	{
		initSpeed = 1036;
	};
	class tu_6Rnd_Mk82 : 2Rnd_Mk82 {
		ammo = "tu_ammo_MK82";
		count = 6;
	};
	class tu_4Rnd_Mk82 : 2Rnd_Mk82 {
		ammo = "tu_ammo_MK82";
		count = 4;
	};
	class tu_2Rnd_Mk82 : 2Rnd_Mk82 {
		ammo = "tu_ammo_MK82";
		count = 2;
	};
	
	class tu_300Rnd_25mm_shells_T : 300Rnd_25mm_shells {
		ammo = "tu_ammo_25mm_Av8b";
		tracersevery = 1;
		nvgOnly = 0;
	};
		
	class tu_1Rnd_GBU31 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_GBU31_SHORT";
		descriptionShort = "$STR_TU_AIRCRAFT_GBU31_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_GBU31_SHORT";
		ammo = "tu_ammo_gbu31";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	
	class tu_2Rnd_GBU31 : tu_1Rnd_GBU31 {
		count = 2;
	};
	
	class tu_1Rnd_GBU32 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_GBU32";
		descriptionShort = "$STR_TU_AIRCRAFT_GBU32";
		displayNameShort = "$STR_TU_AIRCRAFT_GBU32";
		ammo = "tu_ammo_gbu32";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	
	class tu_2Rnd_GBU32 : tu_1Rnd_GBU32 {
		count = 2;
	}
	
	class tu_1Rnd_GBU38 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_GBU38_SHORT";
		descriptionShort = "$STR_TU_AIRCRAFT_GBU38_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_GBU38_SHORT";
		ammo = "tu_ammo_gbu38";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	
	class tu_2Rnd_GBU38 : tu_1Rnd_GBU38 {
		count = 2;
	};
	
	class tu_1Rnd_AAM4 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AAM4";
		displayNameShort = "$STR_TU_AIRCRAFT_AAM4";
		count = 1;
		nameSound = "missiles";
		ammo = "tu_ammo_AAM4";
		initSpeed = 0;
		maxLeadSpeed = 300;
	};
	
	class tu_2Rnd_AAM4 : tu_1Rnd_AAM4 {
		count = 2;
	};

	class tu_1Rnd_AAM3 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AAM3";
		displayNameShort = "$STR_TU_AIRCRAFT_AAM3";
		ammo = "tu_ammo_AAM3";
		initSpeed = 0;
		nameSound = "missiles";
		count = 1;
		maxLeadSpeed = 300;
	};
	
	class tu_2Rnd_AAM3 : tu_1Rnd_AAM3 {
		count = 2;
	};
	
	class tu_1Rnd_AIM7 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AIM7";
		displayNameShort = "$STR_TU_AIRCRAFT_AIM7_SHORT";
		count = 1;
		nameSound = "missiles";
		ammo = "tu_ammo_AIM7";
		initSpeed = 0;
		maxLeadSpeed = 300;
	};
	
	class tu_2Rnd_AIM7 : tu_1Rnd_AIM7 {
		count = 2;
	};
	
	class tu_6Rnd_AIM7 : tu_1Rnd_AIM7 {
		count = 6;
	};
	
	class tu_1Rnd_AIM9m : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AIM9M_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_AIM9M_SHORT";
		ammo = "tu_ammo_AIM9M";
		initSpeed = 0;
		nameSound = "missiles";
		count = 1;
		maxLeadSpeed = 300;
	};
	
	class tu_2Rnd_AIM9m : tu_1Rnd_AIM9m {
		count = 2;
	};
	
	class tu_6Rnd_AIM9m : tu_1Rnd_AIM9m {
		count = 6;
	};
	
	class tu_1Rnd_agm84 : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AGM84_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_AGM84_SHORT";
		ammo = "tu_ammo_agm84";
		initSpeed = 0;
		maxLeadSpeed = 220;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "missiles";
	};
	
	class tu_2Rnd_agm84 : tu_1Rnd_agm84 {
		count = 2;
	};
	
	class tu_1Rnd_aim120: VehicleMagazine	{
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_120";
		displayNameShort = "$STR_TU_AIRCRAFT_120";
		count = 1;
		ammo = "tu_ammo_aim120";
		initSpeed = 40;
		maxLeadSpeed = 320;
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1100};
		soundFly[] = {"A3\sounds_f\dummysound",1,1.1,700};
		soundHit[] = {"A3\sounds_f\dummysound",15.848933,1,2000};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	
	class tu_2Rnd_aim120 : tu_1Rnd_aim120 {
		count = 2;
	};
	
	class tu_4Rnd_aim120 : tu_2Rnd_aim120 {
		count = 4;
	};
	
	class tu_578Rnd_m61: VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_M61_SHORT";
		ammo = "B_20mm";
		count = 578;
		initSpeed = 1036;
		tracersEvery = 5;
		nameSound = "cannon";
	};
	
	class tu_511Rnd_m61 : tu_578Rnd_m61 {
		count = 511;
	};
	
	class tu_940Rnd_m61 : tu_578Rnd_m61 {
		count = 940;
	};
	
	class tu_1Rnd_aim9x : VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_AIM9X_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_AIM9X_SHORT";
		ammo = "tu_ammo_aim9x";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 450;
		sound[] = {"A3\sounds_f\dummysound",1,1,1300};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	
	class tu_2Rnd_aim9x : tu_1Rnd_aim9x {
		count = 2;
	};
	
	class tu_1Rnd_R77: VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_R77_SHORT";
		displayNameShort = "$STR_TU_AIRCRAFT_R77_SHORT";
		count = 1;
		ammo = "tu_ammo_r77";
		initSpeed = 40;
		maxLeadSpeed = 320;
		sound[] = {"A3\sounds_f\dummysound",31.6228,1,1100};
		soundFly[] = {"A3\sounds_f\dummysound",1,1.1,700};
		soundHit[] = {"A3\sounds_f\dummysound",15.848933,1,2000};
		reloadSound[] = {"A3\sounds_f\dummysound",0.000316228,1,20};
		nameSound = "missiles";
	};
	
	class tu_2Rnd_R77 : tu_1Rnd_R77 {
		count = 2;
	};
	
	class tu_1Rnd_kab500l: VehicleMagazine {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_KAB500L";
		descriptionShort = "$STR_TU_AIRCRAFT_KAB500L";
		displayNameShort = "$STR_TU_AIRCRAFT_KAB500L";
		ammo = "tu_ammo_kab500l";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1,1};
		reloadSound[] = {"",0.000316228,1};
		count = 1;
		nameSound = "";
	};
	
	class tu_2Rnd_kab500l : tu_1Rnd_kab500l {
		count = 2;
	};
		
	class tu_1350Rnd_30x173 : rhs_mag_1000Rnd_30x173 {
		displayName = "30x173мм PGU-14A/B API-T"; 
		displayNameShort = "API-T"; 
		ammo = "tu_ammo_30mmA10";
		count = 1350;
	};

	class tu_mag_R73: rhs_mag_R73 {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_R73"};
		pylonWeapon = "rhs_weap_r73_Launcher";
	};
	
	class rhs_mag_R73M;
	class tu_mag_R73M: rhs_mag_R73M {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_R73"};
		pylonWeapon = "rhs_weap_r73m_Launcher";
	};
	
	class rhs_mag_kh29l;
	class tu_mag_kh29l: rhs_mag_kh29l {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH29"};
		pylonWeapon = "rhs_weap_kh29_Launcher";
	};
	
	class rhs_mag_kh29ML;
	class tu_mag_kh29ML: rhs_mag_kh29ML {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH29"};
		pylonWeapon = "rhs_weap_kh29ml_Launcher";
	};
	
	class rhs_mag_kh29T;
	class tu_mag_kh29T: rhs_mag_kh29T {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH29"};
		pylonWeapon = "rhs_weap_kh29t_Launcher";
	};
	
	class rhs_mag_kh29MP;
	class tu_mag_kh29MP: rhs_mag_kh29MP {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH29"};
		pylonWeapon = "rhs_weap_kh29mp_Launcher";
	};
	
	class rhs_mag_kh29D;
	class tu_mag_kh29D: rhs_mag_kh29D {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH29"};
		pylonWeapon = "rhs_weap_kh29d_Launcher";
	};
	
	class rhs_mag_Kh38mle;
	class tu_mag_Kh38mle: rhs_mag_Kh38mle {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH38"};
		pylonWeapon = "rhs_weap_kh38mle_Launcher";
	};
	
	class rhs_mag_Kh38mae;
	class tu_mag_Kh38mae: rhs_mag_Kh38mae {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH38"};
		pylonWeapon = "rhs_weap_kh38mae_Launcher";
	};
	
	class rhs_mag_Kh38mte;
	class tu_mag_Kh38mte: rhs_mag_Kh38mte {
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_KH38"};
		pylonWeapon = "rhs_weap_kh38mte_Launcher";
	};
	
	class rhs_mag_Sidewinder;
	class tu_mag_Sidewinder: rhs_mag_Sidewinder
	{
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_AIM9"};
	};
	
	class rhs_mag_aim9m;
	class tu_mag_aim9m: rhs_mag_aim9m
	{
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_AIM9"};
	};
	
	class rhs_mag_aim120;
	class tu_mag_aim120: rhs_mag_aim120
	{
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_aim120","TU_HP_AIM120_2x"};
	};
	class tu_mag_aim120_2: rhs_mag_aim120
	{
		count = 2;
		displayName = "AIM-120 x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_AIM120_2x"};
	};
	
	class rhs_mag_aim120d;
	class tu_mag_aim120d: rhs_mag_aim120d
	{
		model = "\rhsafrf\addons\rhs_a2port_air\data\rhs_pylon_m_r73";
		hardpoints[] = {"TU_HP_aim120","TU_HP_AIM120_2x"};
	};
	class tu_mag_aim120d_2: rhs_mag_aim120d
	{
		count = 2;
		displayName = "AIM-120D x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_AIM120_2x"};
	};
	
	class rhs_mag_mk82;
	class tu_mag_mk82_2: rhs_mag_mk82
	{
		count = 2;
		displayName = "Mk82 x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_BOMB_500_2x","TU_HP_LGB_500_2x"};
	};
	
	class tu_mag_gbu12_2: rhs_mag_gbu12
	{
		count = 2;
		displayName = "GBU-12 x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_LGB_500_2x"};
	};
	
	class rhs_mag_cbu87;
	class tu_mag_cbu87_2: rhs_mag_cbu87
	{
		count = 2;
		displayName = "CBU-87 x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_BOMB_500_2x","TU_HP_LGB_500_2x"};
	};
	
	class rhs_mag_cbu100;
	class tu_mag_cbu100_2: rhs_mag_cbu100
	{
		count = 2;
		displayName = "CBU-100 x2";
		model = "\rhsusf\addons\rhsusf_a2port_air\data\proxy\rhsusf_pylon_m_aim9_2x";
		hardpoints[] = {"TU_HP_BOMB_500_2x","TU_HP_LGB_500_2x"};
	};
	
	/*class tu_2Rnd_Kh25: rhs_mag_kh29l
	{
		displayNameShort = "Kh-25 ML";
		ammo = "tu_ammo_ch25";
		count = 2;
	};
	class tu_2Rnd_R60: tu_mag_R73
	{
		displayNameShort = "R60 AA Missile";
		ammo = "tu_ammo_R60";
		count = 2;
	};*/

	class tu_150Rnd_30mm_GSh30 : rhs_mag_gsh30_bt_250 {
		count = 150;
		weight = 0.390*150;
		maxLeadSpeed = 300;
	};
};

class CfgWeapons {
	class rhs_weap_GSh30;
	class MissileLauncher;
	class RocketPods;
	class CannonCore;
	class Bomb_04_Plane_CAS_01_F;
	class rhs_weap_HellfireLauncher;
	class Mk82BombLauncher;
	class Missile_AGM_02_Plane_CAS_01_F;
	class Missile_AA_04_Plane_CAS_01_F;
	
	class rhs_weap_r27r_Launcher: Missile_AA_04_Plane_CAS_01_F {
	    weaponLockSystem = 8;
	    cmImmunity = 0;
	};
	
	class rhs_weap_r74_Launcher;
	class rhs_weap_r77_Launcher: rhs_weap_r74_Launcher {
	    weaponLockSystem = 8;
	    cmImmunity = 0;
	};
	
	class rhs_weap_r77m_Launcher: rhs_weap_r77_Launcher {
	    weaponLockSystem = 8;
	    cmImmunity = 0;
	};
	
	class rhs_weap_SidewinderLauncher: MissileLauncher {
		magazines[] += {"tu_mag_Sidewinder"};
	};
	
	class rhs_weap_AIM9M: rhs_weap_SidewinderLauncher
	{
		magazines[] += {"tu_mag_aim9m"};
	};
	
	class rhs_weap_AIM120 : rhs_weap_SidewinderLauncher {
	    weaponLockSystem = 8;
	    cmImmunity = 0;
		magazines[] += {"tu_mag_aim120","tu_mag_aim120_2"};
	};
	
	class rhs_weap_AIM120D : rhs_weap_AIM120 {
	    weaponLockSystem = 8;
	    cmImmunity = 0;
		magazines[] += {"tu_mag_aim120d","tu_mag_aim120d_2"};
	};
	
	class rhs_weap_gbu12: Bomb_04_Plane_CAS_01_F
	{
		weaponLockSystem = 4;
		ace_laser_canSelect = 1;
		lockAcquire = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		magazines[] += {"tu_mag_gbu12_2"};
	};
	class rhs_weap_mk82: Mk82BombLauncher
	{
		displayName = "Mk 82";
		cursorSize = 0;
		cursor = "bomb";
		cursorAim = "EmptyCursor";
		magazines[] += {"tu_mag_mk82_2"};
	};
	class rhs_weap_cbu100: rhs_weap_mk82
	{
		displayName = "CBU-100";
		magazines[] += {"tu_mag_cbu100_2"};
	};
	class rhs_weap_cbu87: rhs_weap_mk82
	{
		displayName = "CBU-87";
		magazines[] += {"tu_mag_cbu87_2"};
	};
	/*
	class js_w_su35_gsh30: CannonCore
	{
		ballisticsComputer = 8;
		weaponLockSystem = 0;
		canLock = 0;
	};
	class js_w_su35_r73Laucher: MissileLauncher
	{
		weaponLockSystem = 0;
	};
	class js_w_fa18_aim9xLaucher: MissileLauncher
	{
		weaponLockSystem = 0;
	};
	class FIR_AIM9X : MissileLauncher
	{
		weaponLockSystem = 0;
	};
	class FIR_AAM5 : MissileLauncher
	{
		weaponLockSystem = 0;
	};
	class FIR_AAM3: MissileLauncher
	{
		weaponLockSystem = 0;
	};
	class FIR_AIM9L : MissileLauncher
	{
		weaponLockSystem = 0;
	};
	
	class FIR_AAM4 : MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	class FIR_AIM120: MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	class FIR_AIM7: MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	class FIR_AIM54: MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	class js_w_su35_r77Laucher: MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	class js_w_fa18_aim120cLaucher: MissileLauncher
	{
		weaponLockSystem = "2 + 4 + 8";
	};
	
	class js_w_fa18_MaverickLauncher: RocketPods
	{
	    weaponLockSystem = 0;
	    canLock = 0;
	    ace_laser_canSelect = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class js_w_fa18_HarpoonLauncher: RocketPods
	{
	    ace_laser_canSelect = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class js_w_fa18_GBU12LGBLaucher: RocketPods
	{
		weaponLockSystem = 4;
		ace_laser_canSelect = 1;
		lockAcquire = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
	};
	class js_w_fa18_Mk82BombLauncher: js_w_fa18_GBU12LGBLaucher
	{
		weaponLockSystem = 0;
		canLock = 0;
		lockAcquire = 0;
		ace_laser_canSelect = 0;
	};
	class js_w_fa18_GBU38BombLauncher: js_w_fa18_GBU12LGBLaucher {};
	class js_w_fa18_GBU32BombLauncher: js_w_fa18_GBU12LGBLaucher {};
	class js_w_fa18_GBU31BombLauncher: js_w_fa18_GBU12LGBLaucher {};
	class FIR_BLU107 : MissileLauncher {};
	
	class FIR_GBU12 : MissileLauncher
	{
		weaponLockSystem = 4;
	    ace_laser_canSelect = 1;
	    lockAcquire = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
	};
	class FIR_GCS1 : MissileLauncher {};
	class FIR_GBU10 : MissileLauncher {};
	class FIR_GBU24 : MissileLauncher {};
	class FIR_GBU31 : MissileLauncher {};
	class FIR_GBU32 : MissileLauncher {};
	class FIR_GBU38 : MissileLauncher {};
	class FIR_GBU39 : MissileLauncher {};
	class FIR_GBU53 : MissileLauncher {};
	class FIR_AGM65 : MissileLauncher
	{
		weaponLockSystem = 0;
		canLock = 0;
	    ace_laser_canSelect = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
	};
	*/
	class tu_weap_Mk82Bomb_Launcher : Mk82BombLauncher {
		weaponLockSystem = 0;
		canLock = 0;
		magazines[] = {"tu_6Rnd_Mk82","tu_4Rnd_Mk82","tu_2Rnd_Mk82"};
	};

	class gatling_25mm: CannonCore {
		class manual;
	};
	
	class tu_weap_gatling_25mm : gatling_25mm {
		weaponLockSystem = 0;
		canLock = 0;
		magazines[] = {"tu_300Rnd_25mm_shells_T"};
		class manual: manual
		{
			displayname = "$STR_TU_AIRCRAFT_GATLING_25MM";
		};
		class GunParticles
		{
			class Effect
			{
				directionName = "Cannon_Barrel_End";
				effectName = "MachineGun2";
				positionName = "Cannon_Barrel_Start";
			};
		};
	};
	
	class tu_weap_GBU38_Laucher : rhs_weap_gbu12 {
		canLock = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = 4;
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "$STR_TU_AIRCRAFT_GBU38";
		displayNameMagazine = "$STR_TU_AIRCRAFT_GBU38_SHORT";
		shortNameMagazine = "$STR_TU_AIRCRAFT_GBU38_SHORT";
		magazines[] = {"tu_1Rnd_GBU38", "tu_2Rnd_GBU38"};
	};
	
	class tu_weap_GBU32_Laucher : tu_weap_GBU38_Laucher {
		canLock = 2;
		weaponLockDelay = 3;
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "$STR_TU_AIRCRAFT_GBU32";
		displayNameMagazine = "$STR_TU_AIRCRAFT_GBU32_SHORT";
		shortNameMagazine = "$STR_TU_AIRCRAFT_GBU32_SHORT";
		magazines[] = {"tu_1Rnd_GBU32", "tu_2Rnd_GBU32"};
	};
	
	class tu_weap_GBU31_Laucher : tu_weap_GBU32_Laucher {
		canLock = 2;
		weaponLockDelay = 3;
		cmImmunity = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		displayName = "$STR_TU_AIRCRAFT_GBU31";
		displayNameMagazine = "$STR_TU_AIRCRAFT_GBU31";
		shortNameMagazine = "$STR_TU_AIRCRAFT_GBU31";
		magazines[] = {"tu_1Rnd_GBU31", "tu_2Rnd_GBU31"};
	};

	class tu_weap_aam4_Laucher : MissileLauncher {
		scope = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = 8;
		cmimmunity = 0.85;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "$STR_TU_AIRCRAFT_AAM4";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AAM4";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AAM4";
		magazineReloadTime = 0.5;
		initspeed = 30;
		reloadTime = 0.3;
		aiDispersionCoefX = 1.0;
		aiDispersionCoefY = 1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 4000;
		minRange = 1000;
		minRangeProbab = 0.04;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.65;
		magazines[] = {"tu_1Rnd_AAM4", "tu_2Rnd_AAM4"};
	};

	class tu_weap_aam3_Laucher : MissileLauncher {
		scope = 2;
		weaponLockDelay = 2.0;
		weaponLockSystem = 8;
		cmimmunity = 0.8;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "$STR_TU_AIRCRAFT_AAM3";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AAM3";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AAM3";
		magazineReloadTime = 0.5;
		initspeed = 30;
		reloadTime = 0.5;
		aiDispersionCoefX = 1.0;
		aiDispersionCoefY = 1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 800;
		minRange = 100;
		minRangeProbab = 0.75;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.2;
		magazines[] = {"tu_1Rnd_AAM3", "tu_2Rnd_AAM3"};
	};

	class tu_weap_aim7_Laucher : MissileLauncher {
		scope = 2;
		weaponLockDelay = 0.5;
		weaponLockSystem = 8;
		cmimmunity = 0.85;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "$STR_TU_AIRCRAFT_AIM7";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AIM7_SHORT";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AIM7_SHORT";
		magazineReloadTime = 0.5;
		initspeed = 30;
		reloadTime = 0.3;
		aiDispersionCoefX = 1.0;
		aiDispersionCoefY = 1.0;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 4000;
		minRange = 1000;
		minRangeProbab = 0.04;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.65;
		magazines[] = {"tu_1Rnd_AIM7", "tu_2Rnd_AIM7", "tu_6Rnd_AIM7"};
	};	

	class tu_weap_aim9m_Laucher : MissileLauncher {
		scope = 2;
		weaponLockDelay = 2.0;
		weaponLockSystem = 2;
		cmImmunity = 0.8;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		displayName = "$STR_TU_AIRCRAFT_AIM9M";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AIM9M_SHORT";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AIM9M_SHORT";
		magazineReloadTime = 0.5;
		initspeed = 30;
		reloadTime = 0.5;
		aiDispersionCoefX = 1.0;
		aiDispersionCoefY = 1.0;
		missileLockCone = 30;
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 800;
		minRange = 100;
		minRangeProbab = 0.75;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 2000;
		maxRangeProbab = 0.2;
		magazines[] = {"tu_1Rnd_AIM9m", "tu_2Rnd_AIM9m", "tu_6Rnd_AIM9m"};
	};

	class tu_weap_agm84_Laucher : RocketPods {
		canLock = 2;
		autoFire = 0;
		displayName = "$STR_TU_AIRCRAFT_AGM84";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AGM84";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AGM84_SHORT";
		magazines[] = {"tu_1Rnd_agm84", "tu_2Rnd_agm84"};
		ace_laser_canSelect = 1;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		weaponLockDelay = 3;
		textureType = "fullAuto";
		minRange = 300;
		minRangeProbab = 0.25;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 9000;
		maxRangeProbab = 0.01;
	};

	class tu_weap_aim120_Laucher : MissileLauncher {
		canLock = 2;
		weaponLockDelay = 3;
		weaponLockSystem = 8;
		cmImmunity = 0.6;
		magazines[] = {"tu_1Rnd_aim120", "tu_2Rnd_aim120", "tu_4Rnd_aim120"};
		displayName = "$STR_TU_AIRCRAFT_120";
		displayNameMagazine = "$STR_TU_AIRCRAFT_120";
		shortNameMagazine = "$STR_TU_AIRCRAFT_120_SHORT";
		cursorAim = "missile";
		cursor = "EmptyCursor";
		cursorSize = 1;
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		textureType = "semi";
	};

	class tu_weap_m61 : CannonCore {
		scope = 2;
		displayName = "$STR_TU_AIRCRAFT_M61";
		displayNameMagazine = "$STR_TU_AIRCRAFT_M61";
		shortNameMagazine = "$STR_TU_AIRCRAFT_M61_SHORT";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		magazines[] = {"tu_578Rnd_m61", "tu_511Rnd_m61", "tu_940Rnd_m61"};
		canLock = 2;
		ballisticsComputer = 2;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "nosegun";
				directionName = "nosegun_dir";
			};
		};
		class manual: CannonCore
		{
			displayName = "M61A2 20mm";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\gatling\gatling4",1.12202,1,1100};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
			reloadTime = 0.02;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};

	class tu_weap_aim9x_Laucher : MissileLauncher {
		canLock = 2;
		weaponLockDelay = 1;
		weaponLockSystem = 0;
		cmImmunity = 0.85;
		displayName = "$STR_TU_AIRCRAFT_AIM9X";
		displayNameMagazine = "$STR_TU_AIRCRAFT_AIM9X";
		shortNameMagazine = "$STR_TU_AIRCRAFT_AIM9X_SHORT";
		cursorAim = "missile";
		cursor = "EmptyCursor";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.7;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] = {"tu_1Rnd_aim9x", "tu_2Rnd_aim9x"};
		holdsterAnimValue = 1;
		textureType = "semi";
	};

	class tu_weap_kab500l_Laucher : RocketPods {
		weaponLockSystem = 4;
		canLock = 2;
		lockAcquire = 1;
		displayName = "$STR_TU_AIRCRAFT_KAB500L";
		displayNameMagazine = "$STR_TU_AIRCRAFT_KAB500L";
		shortNameMagazine = "$STR_TU_AIRCRAFT_KAB500L";
		magazines[] = {"tu_1Rnd_kab500l", "tu_2Rnd_kab500l"};
		ace_laser_canSelect = 1;
		reloadTime = 0.1;
		magazineReloadTime = 0.5;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursor = "EmptyCursor";
		cursorAim = "EmptyCursor";
		textureType = "fullAuto";
		missileLockCone = 180;
		weaponLockDelay = 1;
	};

	class tu_weap_r77_Launcher : MissileLauncher {
		canLock = 2;
		autoFire = 0;
		displayName = "$STR_TU_AIRCRAFT_R77";
		displayNameMagazine = "$STR_TU_AIRCRAFT_R77";
		shortNameMagazine = "$STR_TU_AIRCRAFT_R77_SHORT";
		magazines[] = {"tu_1Rnd_R77", "tu_2Rnd_R77", "PylonRack_Missile_r77_JS_SU35_x1"};
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		cursorSize = 1;
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.12202,1.3,1000};
			soundBegin[] = {"begin1",1};
			weaponSoundEffect = "DefaultRifle";
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.316228,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.316228,2.5};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 3;
		textureType = "semi";
		weaponLockSystem = 8;
	};

	class tu_weap_GSh30 : rhs_weap_GSh30 {
		displayname = "$STR_TU_AIRCRAFT_GSH301";
		magazines[] = {"tu_150Rnd_30mm_GSh30", "rhs_mag_gsh30_ofzt_750", "rhs_mag_gsh30_ofzt_250", "rhs_mag_gsh30_bt_750", "rhs_mag_gsh30_bt_250"};
		weaponLockSystem = 0;
		canLock = 0;
	};

	class rhs_weap_r73_Launcher: Missile_AA_04_Plane_CAS_01_F {
		magazines[] += {"tu_mag_R73"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	
	class rhs_weap_r73m_Launcher: rhs_weap_r73_Launcher	{
		magazines[] = {"rhs_mag_R73M","rhs_mag_R73M_APU73","tu_mag_R73M"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	
	class rhs_weap_kh25_Launcher: Missile_AGM_02_Plane_CAS_01_F {
	    weaponLockType = 0;
		canLock = 0;
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
	};
	
	class rhs_weap_kh25ml_Launcher: rhs_weap_kh25_Launcher {
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
	};
	
	class rhs_weap_kh25ma_Launcher: rhs_weap_kh25ml_Launcher
	{
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
	    weaponLockType = 8;
		canLock = 2;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class rhs_weap_kh25mt_Launcher: rhs_weap_kh25ml_Launcher
	{
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
	    weaponLockType="CM_Lock_TV";
	};
	class rhs_weap_kh25mtp_Launcher: rhs_weap_kh25ml_Launcher
	{
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
	};
	class rhs_weap_kh25mp_Launcher: rhs_weap_kh25ml_Launcher
	{
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
	};
		
	class rhs_weap_s25;
	class rhs_weap_s25l: rhs_weap_s25
	{
		canLock = 0;
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
	};
	class rhs_weap_s25ld: rhs_weap_s25
	{
		canLock = 0;
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
	};
	
	class rhs_weap_kh29_Launcher: rhs_weap_kh25_Launcher {
		canLock = 0;
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
		magazines[] += {"tu_mag_kh29l"};
	};
	
	class rhs_weap_kh29ml_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
		magazines[] += {"tu_mag_kh29ML"};
	};
	
	class rhs_weap_kh29t_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
		weaponLockType=1;
		magazines[] += {"tu_mag_kh29T"};
	};
	
	class rhs_weap_kh29mp_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
		weaponLockType=8;
		magazines[] += {"tu_mag_kh29MP"};
	};
	
	class rhs_weap_kh29d_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
		weaponLockType=2;
		magazines[] += {"tu_mag_kh29D"};
	};
	
	class rhs_weap_kh38mle_Launcher: rhs_weap_kh29_Launcher
	{
		ace_laser_showHud = 1;
	    ace_laser_canSelect = 1;
		magazines[] = {"rhs_mag_kh38mle","rhs_mag_kh38mle_int","tu_mag_Kh38mle"};
	};
	
	class rhs_weap_kh38mae_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
		magazines[] += {"tu_mag_Kh38mae"};
	};
	
	class rhs_weap_kh38mte_Launcher: rhs_weap_kh25ml_Launcher {
		ace_laser_showHud = 0;
	    ace_laser_canSelect = 0;
		canLock = 2;
		magazines[] += {"tu_mag_Kh38mte"};
	};
	
	class rhs_weap_fab250;
	class rhs_weap_kab250: rhs_weap_fab250
	{
		magazines[] = {"rhs_mag_kab250", "rhs_mag_kab250_int"};
	};
	class rhs_weap_kh55sm_Launcher: rhs_weap_kh29_Launcher	{};
	class rhs_weap_9k121_Launcher: rhs_weap_kh55sm_Launcher
	{
		ace_laser_showHud = 0;
		ace_laser_canSelect = 0;
	};
	class tu_weap_Ch25_Launcher: rhs_weap_kh29_Launcher
	{
		displayName = "Kh-25";
		magazines[] = {"tu_2Rnd_Kh25"};
		weaponLockSystem = 0;
		canLock = 0;
	};
	class tu_weap_r60_Launcher : rhs_weap_r73_Launcher
	{
		displayName = "R-60";
		magazines[] = {"tu_2Rnd_R60"};
	};
	class rhs_weap_agm65;
	class rhs_weap_agm65b: rhs_weap_agm65 {
	    weaponLockSystem = 0;
	    weaponLockType = 0;
	    canLock = 0;
	};
	class rhs_weap_agm65e: rhs_weap_agm65 {
	    weaponLockSystem = 0;
	    weaponLockType = 0;
	    canLock = 0;
		ace_laser_canSelect = 1;
        ace_laser_showHud = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
	class CUP_Vblauncher_KAB250_veh: RocketPods {
		author = "Community Upgrade Project";
		displayName = "KAB-250L LGB";
		magazines[] = {"CUP_6Rnd_KAB250_M","CUP_4Rnd_KAB250_M","PylonRack_Missile_cab250_JS_SU35_x1"};
		aiRateOfFire = 5;
		aiRateOfFireDistance = 500;
		namesound = "";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
		lockAcquire = 1;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.562341,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.562341,2.5};
	};
};