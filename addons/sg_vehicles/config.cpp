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
	class sg_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"sg_cup_vehicles","sg_btr40","sg_vtn_vehicles","CAData"};
	};
};

#include "defines.hpp"
#include "dialogs.hpp"








class CfgMovesBasic
{
	class passenger_flatground_2;
	class DefaultDie;
	class ManActions
	{
		SG_ZSU57_Gunner = "SG_ZSU57_Gunner";
		SG_ZSU57_Gunner_Closed = "SG_ZSU57_Gunner_Closed";
		SG_REAR_Gunner = "SG_REAR_Gunner";
		
		SG_REAR_Gunner_M2 = "SG_REAR_Gunner_M2";
		SG_Gunner_M60 = "SG_Gunner_M60";
		
		SG_Gunner_TwinM2 = "SG_Gunner_TwinM2";
		
		sg_PBR_Driver = "sg_PBR_Driver";
	};
};


class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	
	{
		class Crew;
		
			
		class SG_KIA_ZSU57_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vehicles\data\anim\sg_zsu_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		
		class SG_ZSU57_Gunner: Crew
		{
			file = "\sg_vehicles\data\anim\sg_zsu_gunner.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_KIA_ZSU57_Gunner",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		
		
		class SG_KIA_ZSU57_Gunner_Closed: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vehicles\data\anim\sg_zsu_gunner_kia_closed.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		
		class SG_ZSU57_Gunner_Closed: Crew
		{
			file = "\sg_vehicles\data\anim\sg_zsu_gunner_closed.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_KIA_ZSU57_Gunner_Closed",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		
		class SG_Gunner_TwinM2_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vehicles\data\anim\sg_twin_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		
		class SG_Gunner_TwinM2: Crew
		{
			file = "\sg_vehicles\data\anim\sg_twin_gunner.rtm";
			disableWeapons = 1;
			disableWeaponsLong = 1;
			interpolateTo[] = {"SG_Gunner_TwinM2_KIA",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		
		class driver_boat01;
		class SG_REAR_Gunner: driver_boat01
		{
			file = "\sg_vehicles\data\anim\sg_rear_gunner_pkm.rtm";
		};
		
		class SG_REAR_Gunner_M2: driver_boat01
		{
			file = "\sg_vehicles\data\anim\sg_rear_gunner_m2.rtm";
		};
		
		class SG_Gunner_M60: driver_boat01
		{
			file = "\sg_vehicles\data\anim\sg_gunner_m60.rtm";
		};
		
		
		class sg_PBR_Driver: Crew
		{
			file = "\sg_vehicles\data\anim\uns_PBR_Driver.rtm";
			interpolateTo[] = {"KIA_driver_boat01",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
		};
		
		
	};
};



class CfgAmmo
{
	class ShellBase;
	
	/*class ammo_Penetrator_Base;
	
	class SG_57mm_HEAT: ammo_Penetrator_Base
	{
		caliber = 16.7;
		warheadName = "HEAT";
		hit = 235;
	};	*/
	
	class SG_Sh_57mm_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 200;
		indirectHit = 13;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 0;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 792;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"sg_cup_vehicles\data\sound\shorter.wss",2,1,500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};	
	class SG_Sh_57mm_HEFRAG: SG_Sh_57mm_HEAT
	{
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 15;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		typicalSpeed = 792;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
	
	class SG_57mm_HEFRAG_AirExplo: SG_Sh_57mm_HEFRAG
	{
		typicalSpeed = 100;
		explosive = 1;
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		model = "\A3\Weapons_f\empty";
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class SG_8Rnd_57mmHEAT: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_57mm_HEAT";
		ammo = "SG_Sh_57mm_HEAT";
		count = 8;
		initSpeed = 990;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_57mm_HEAT";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
	class SG_8Rnd_57mmHEFRAG: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_57mm_HE";
		ammo = "SG_Sh_57mm_HEFRAG";
		count = 8;
		initSpeed = 990;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_57mm_HE";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
};

class Mode_FullAuto;
class cfgWeapons
{
	class cannon_125mm;

	class SG_S68: cannon_125mm
	{
		scope = 1;
		displayName = "$STR_S68";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		cursorSize = 1;
		magazines[] = {"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEAT"};
		reloadMagazineSound[] = {"\sg_vehicles\sounds\s60_reload",1,1,20};
		
		class GunParticles
		{
			class Effect
			{
				effectName = "AutoCannonFired";
				positionName = "barrel_pos_1";
				directionName = "barrel_dir_1";
			};
			class Effect2: Effect
			{
				positionName = "barrel_pos_2";
				directionName = "barrel_dir_2";
			};
		};
		
		modes[] = {"manual"};
		class manual: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				//soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
				begin1[] = {"\sg_vehicles\sounds\s60_fire",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			displayName = "Auto";
			autoFire = 0;
			burst = 2;
			soundContinuous = 0;
			showToPlayer = 1;
			soundBurst = 0;
			reloadTime = 0.5;
			multiplier = 1;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			dispersion = 0.006;	
		};
	};
	
	
	
	
	class BN_RHS_weap_Ags30;
	class SG_RHS_weap_Ags30: BN_RHS_weap_Ags30
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
		};
	};
	
	class rhs_weap_m240_abrams;
	class sg_m60_veh: rhs_weap_m240_abrams
	{
		displayName = "M60";
		class GunParticles
		{
			class effect1
			{
				positionName = "m60_usti_hlavne";
				directionName = "m60_konec_hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "m60_machinegun_eject_pos";
				directionName = "m60_machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3: effect2
			{
				effectname = "MachineGunEject";
			};
		};	
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 15;
		reloadTime = 0;
		magazineReloadTime = 0;
	};
	
	
	class sg_m60_veh2: rhs_weap_m240_abrams
	{
		displayName = "M60";
		class GunParticles
		{
			class effect1
			{
				positionName = "m60_usti_hlavne_1";
				directionName = "m60_konec_hlavne_1";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "m60_machinegun_eject_pos_1";
				directionName = "m60_machinegun_eject_dir_1";
				effectName = "MachineGunCartridge2";
			};
			class effect3: effect2
			{
				effectname = "MachineGunEject";
			};
		};	
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 15;
		reloadTime = 0;
		magazineReloadTime = 0;
	};
	
	class MGun;
	class BN_RHS_M2;
	class SG_M2_Rear: BN_RHS_M2
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "rear_usti_hlavne";
				directionName = "rear_konec_hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "rear_machinegun_eject_pos";
				directionName = "rear_machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3: effect2
			{
				effectname = "MachineGunEject";
			};
		};
	
	};
	class SG_M2_Twin: BN_RHS_M2
	{
		displayName = "Twin M2HB";
		
		dispersion = 0.015;
		reloadTime = 0.02;
		isMultiBarrel = 1;
		BarrelCount = 2;
		BarrelName = "barrel";
		
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 3;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
		
		class GunParticles
		{
			class effect1
			{
				positionName = "usti_hlavne_1";
				directionName = "konec_hlavne_1";
				effectName = "MachineGunCloud";
			};

			class effect2: effect1
			{
				positionName = "usti_hlavne_2";
				directionName = "konec_hlavne_2";
			};

		};
		modes[] = {"manual"};
		class manual: MGun
		{
			displayName = "Twin M2HB";
			class StandardSound
			{
				drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1.0,1,10};
				reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_reload",1.0,1,10};
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_tail_SoundSet"};
			};
			autoFire = 1;
			reloadTime = 0.05;
			dispersion = 0.002;
			showToPlayer = 1;
			burst = 2;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;		
			multiplier = 1;
			soundBurst = 0;			
		};
	};
	
	
	
	
};






class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics;
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
		class Periscope;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	
	class SG_ZSU57_Base: Tank_F
	{
		displayName = "$STR_ZSU57";
		model = "\sg_vehicles\zsu57.p3d";
		picture = "\sg_vehicles\data\picture_zsu57_ca.paa";
		Icon = "\sg_vehicles\data\icon_zsu57_ca.paa";
		
		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4),(_this select 5),(_this select 6)] execVM 'sg_vehicles\scripts\fire.sqf'; [(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4),(_this select 5),(_this select 6)] execVM 'sg_vehicles\scripts\anims.sqf';";
		};
		
		
		
		class UserActions
		{
			class OpenDialog
			{
				displayName = "$STR_OPEN_DIALOG";
				position = "zamerny";
				priority = 20;
				radius = 1;
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, commander this]) && (alive this)";
				statement = "_=[this] execvm ""sg_vehicles\scripts\openDialog.sqf"";";
			};
			class DisableAirExplode
			{
				displayName = "$STR_DISABLE_AIR_EXPLOSION";
				position = "zamerny";
				priority = 19;
				radius = 1;
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player in [gunner this, commander this]) && (alive this)";
				statement = "_=[this] execvm ""sg_vehicles\scripts\disableAirExplosion.sqf"";";
			};
		};
		
		class ViewOptics: ViewOptics
		{
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
		};
		
		
		scope = 0;
		accuracy = 0.8;
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
				
		armor = 300;
		armorStructural = 2.5;
		
	
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.995;
		damageResistance = 0.00843;
		destrType = "DestructDefault";
		cost = 1500000;
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneControlActions[] = {"all"};
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhonePosition[] = {0,0,0};
		acre_infantryPhoneIntercom[] = {"all"};
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
				armor = 1.6;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.24;
				explosionShielding = 0.009;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.45;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.139;
				explosionShielding = 0.015;
				radius = 0.27;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.25;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.25;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
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
		
	commanderCanSee = 2;	// default
	gunnerCanSee = 2;	// default
	driverCanSee = 2;	// default
		
		
		class CargoTurret;
		class Turrets: Turrets {
			class MainTurret: NewTurret
			{
				
						
				
				
				//stabilizedInAxes = 4;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				body = "mainTurret";
				gun = "mainGun";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				soundServo[] = {"A3\sounds_f\dummysound",0.31622776,1,15};
				minElev = -4.5;
				maxElev = 85;
				minTurn = -360;
				maxTurn = 360;
				hasgunner = 1;
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				primaryGunner = 1;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				
				class HitPoints
				{
					class HitTurret
					{
						armor = 2;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.3;
						explosionShielding = 0.001;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
				
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				forceHideGunner = 0;
				viewGunnerInExternal = 1;
				startEngine = 0;
				memoryPointGun[] = {"barrel_pos_1","barrel_pos_2"};
				hideWeaponsGunner = 1;
				weapons[] = {"SG_S68"};
				magazines[] = {
					
					"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG",
					"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG",
					"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG",
					"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG",
					"SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG","SG_8Rnd_57mmHEFRAG",
					
					"SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT",
					"SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT",
					"SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT","SG_8Rnd_57mmHEAT",
					
				};
								
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "SG_ZSU57_Gunner";
				ispersonturret = 1;
				animationSourceHatch = "hatchGunner";
				
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
					visionMode[] = {"Normal"};
				};
				class ViewGunner
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
				
			class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = "CPCommander";
						proxyIndex = 1;
						primaryGunner = 0;
						primaryObserver = 1;
						gunnerName = "$STR_POSITION_COMMANDER";
						stabilizedInAxes = 0;
						commanding = 2;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						startEngine = 0;
						hasgunner = 1;
						viewGunnerInExternal = 1;
						gunnerForceOptics = 0;						
						forceHideGunner = 0;
						animationSourceHatch = "hatchCommander";
						gunnerAction = "vehicle_turnout_2";
						gunnerInAction = "SG_ZSU57_Gunner";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						ispersonturret = 1;
						hideWeaponsGunner = 1;
						class ViewGunner
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
				};	
				
				
				
				
				
				
			

				//LODTurnedIn = 1000;
			//	LODTurnedOut= 1000;
				
					
				
							
			};
			
			class CargoTurret_01: CargoTurret
			{
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				commanding = -2;
				gunnerName = "$STR_PASSANGER_M_L";
				gunnerCompartments = "Compartment2";
				gunnerUsesPilotView = 0;
				gunnerAction = "passenger_flatground_2";
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
				gunnerName = "$STR_PASSANGER_M_R";
				proxyIndex = 2;
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
			
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_L_R";
				proxyIndex = 3;
				gunnerAction = "passenger_inside_4";
			};
			
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 4;
				gunnerAction = "passenger_inside_4";
			};
		};
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source = "revolving";
				weapon = "SG_S68";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "SG_S68";
			};
		};
		
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {
			"\sg_cup_vehicles\data\t55_body_olive_co",
			"\sg_cup_vehicles\data\t55_tower_olive_co",
			"\sg_vehicles\data\ZSU_Gun_co",
			"\sg_vehicles\data\ZSU_Gun_FL_co"
			
			};
		
		class textureSources
		{
		};
		type = 1;
		threat[] = {0.4,0.4,0.0};
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				
			"sg_cup_vehicles\data\t55_body.rvmat",
			"sg_cup_vehicles\data\t55_body_damage.rvmat",
			"sg_cup_vehicles\data\t55_body_destruct.rvmat",
			
			"sg_cup_vehicles\data\t55_tower.rvmat",
			"sg_cup_vehicles\data\t55_tower_damage.rvmat",
			"sg_cup_vehicles\data\t55_tower_destruct.rvmat",
			
			"sg_vehicles\data\ZSU_Gun.rvmat",
			"sg_vehicles\data\ZSU_Gun_damage.rvmat",
			"sg_vehicles\data\ZSU_Gun_destruct.rvmat",
			
			"sg_vehicles\data\ZSU_Gun_FL.rvmat",
			"sg_vehicles\data\ZSU_Gun_FL_damage.rvmat",
			"sg_vehicles\data\ZSU_Gun_FL_destruct.rvmat",
			
			
			
			"a3\data_f\default.rvmat",
			"a3\data_f\default.rvmat",
			"a3\data_f\default_destruct.rvmat"
			
			};
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
		};
		aggregateReflectors[] = {{"LeftLight"}};
	
		
		
		
		
		torqueCurve[] = {{"(000/2000)",0},{"(600/2000)","(1700/2245)"},{"(800/2000)","(1950/2245)"},{"(1200/2000)","(2150/2245)"},{"(1400/2000)","(2245/2245)"},{"(1600/2000)","(1675/2245)"},{"(2000/2000)","(1200/2245)"},{"(3000/2000)",0}};
		thrustDelay = 0.6;
		clutchStrength = 80.0;
		fuelCapacity = 520;
		brakeIdleSpeed = 1.78;
		latency = 1.1;
		tankTurnForce = 330000;
		idleRpm = 500;
		redRpm = 1200;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95,0.75};
		normalSpeedForwardCoef = 0.7;
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-15.0,"N",0,"D1",1.25,"D2",1.2,"D3",1.15,"D4",1.05,"D5",0.95};
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

	class SG_ZSU57: SG_ZSU57_Base
	{
		author = "Kiker / Midgardsorm";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_crew_F"};
	};
	
	class SG_ZSU57_Armor: SG_ZSU57
	{
		displayName = "$STR_ZSU57";
		model = "\sg_vehicles\zsu57_armor.p3d";
		class CargoTurret;
		class Turrets: Turrets {
			class MainTurret: MainTurret
			{
				
				
				gunnerInAction = "SG_ZSU57_Gunner_Closed";		
				
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerInAction = "SG_ZSU57_Gunner_Closed";
					};
				};	
				
				

					
				
							
			};
			
			class CargoTurret_01: CargoTurret_01
			{};
			class CargoTurret_02: CargoTurret_02
			{};
			
			class CargoTurret_03: CargoTurret_03
			{};
			
			class CargoTurret_04: CargoTurret_04
			{};
		};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class Ship_F;
	class sg_boat_base_turret: Ship_F
	{
		class NewTurret;
		class EventHandlers;
		class Turrets
		{
			class MainTurret: NewTurret{};
			class BackTurret: NewTurret{};
		};
		
		bn_csw_loading_style = 1;
		class ACE_Actions {
            class ACE_MainActions {
				// selection = "";
				distance = 5;
				condition = 1;
				class BN_CSW_Load_New {
					displayName = "Зарядить...";
					distance = 5;
					condition = "count ([_target] call bn_csw_fnc_add_subactions) > 0";
					icon = "\bn_csw_load\data\ui\load.paa";
					statement = "hint 'Выбери тип снаряда.'";
					showDisabled = 0;
					priority = 5;
					hotkey = "L";
					position = [0.1,0,0];
					enableInside = 0;
					insertChildren = "[_target] call bn_csw_fnc_add_subactions";
				};
				class BN_CSW_Unload {
					displayName = "Разрядить";
					distance = 5;
					condition = "true";
					icon = "\bn_csw_load\data\ui\unload.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_unload;";
					showDisabled = 1;
					priority = 5.1;
					hotkey = "U";
					position = [-0.1,0,0];
					enableInside = 0;
				};
			};
		};
	};
	class SG_ASSAULT_BOAT_Base: sg_boat_base_turret
	{
		scope = 0;
		canFloat = 0;
		simulation = "shipX";
		idleRpm = 100;
		redRpm = 1000;
		thrustDelay = 1;
		enginePower = 100;
		engineShiftY = 0;
		maxSpeed = 40;
		vehicleClass = "Ship";
		editorSubcategory = "EdSubcat_Boats";
		driverLeftHandAnimName = "volant";
		driverRightHandAnimName = "volant";
		waterSpeedFactor = 1;
		waterResistanceCoef = 0.005;
		waterAngularDampingCoef = 1.75;
		waterLinearDampingCoefX = 1;
		waterLinearDampingCoefY = 3;
		rudderForceCoef = 1;
		rudderForceCoefAtMaxSpeed = 0.0045;
		waterLeakiness = 5;
		waterEffectSpeed = 5;
		waterFastEffectSpeed = 25;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.5,"N",0,"D1",3.5,"D2",3,"D3",2.5};
			TransmissionRatios[] = {"High",1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		model = "\sg_vehicles\assault_boat.P3D";
		mapSize = 10;
		
		
		HiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		HiddenSelectionsTextures[] = 
		{
			"\sg_vehicles\data\korp_co.paa",
			"\sg_vehicles\data\dekor_co.paa",
			"\sg_vehicles\data\tur_front_co.paa",
			"\sg_vehicles\data\tur_back_co.paa",
			"\sg_vehicles\data\penel_co.paa"
		};

		class textureSources
		{
			
			class GREY
			{
				displayName = "Grey";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vehicles\data\korp_co.paa",
					"\sg_vehicles\data\dekor_co.paa",
					"\sg_vehicles\data\tur_front_co.paa",
					"\sg_vehicles\data\tur_back_co.paa",
					"\sg_vehicles\data\penel_co.paa"
				};
				factions[] = {};
			};
			
			
			class CAMO
			{
				displayName = "Camo";
				author = "Kiker";
				textures[] = 		
				{
					"\sg_vehicles\data\korp2_co.paa",
					"\sg_vehicles\data\dekor2_co.paa",
					"\sg_vehicles\data\tur_front2_co.paa",
					"\sg_vehicles\data\tur_back2_co.paa",
					"\sg_vehicles\data\penel2_co.paa"
				};
				factions[] = {};
			};
		};
		
		driverIsCommander = 0;
		driverAction = "driver_boat01";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		nameSound = "veh_ship_attackBoat_s";
		radarType = 8;
		driverCanSee = "1+2+4+8+16";
		gunnerCanSee = "2+8+16";
		commanderCanSee = 31;
		unitInfoType = "UnitInfoShip";
		threat[] = {0.8,0.2,0.2};
		irTarget = 1;
		accuracy = 0.5;
		weapons[] = {};
		magazines[] = {};
		commanding = 3;
		class NewTurret;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				startEngine = 0;
				commanding = 2;
				primaryGunner = 1;
				outGunnerMayFire = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				
				
				gunnerName = "$STR_FRONT_GUNNER";
				
				gunnerAction = "SG_Sparka_Gunner";
				gunnerInAction = "SG_Sparka_Gunner";
				
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				
				weapons[] = {"SG_DSHK_sparka"};
				magazines[] = {"rhs_mag_127x108mm_50","rhs_mag_127x108mm_50"};				
				memoryPointGun[] = {"front_usti_hlavne_1","front_usti_hlavne_2"};
				
				gunBeg = "front_usti_hlavne_1";
				gunEnd = "front_konec_hlavne_1";
				
				body = "FRONT_otocvez";
				gun = "FRONT_otochlaven";
				animationSourceBody = "FRONT_Turret";
				animationSourceGun = "FRONT_Gun";
				
				memoryPointGunnerOptics = "FRONT_gunnerview";
				
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = "StabilizedInAxesNone";
				initElev = 0;
				minElev = -15;
				maxElev = 45;
				initTurn = 0;
				minTurn = -360;
				maxTurn = 360;
				class HitPoints
				{
				class HitTurret
				{
					armor = 0.8;
					material = 0;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
					class HitGun
					{
					armor = 0.4;
					material = 0;
					name = "zbran";
					visual = "zbran";
					passThrough = 1;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -15;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
				};
				
				
	

			};
			class BackTurret: BackTurret
			{
				startEngine = 0;
				commanding = 1;
				proxyIndex = 2;
				primaryGunner = 0;
				primary = 0;
				memoryPointsGetInGunner = "pos rear gunner";
				memoryPointsGetInGunnerDir = "pos rear gunner dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				outGunnerMayFire = 1;
				gunnerAction = "SG_REAR_Gunner";
				gunnerInAction = "SG_REAR_Gunner";
				gunnerName = "$STR_REAR_GUNNER";
				weapons[] = {"SG_VTN_pkm"};
				magazines[] = {"sg_250Rnd_762x54mmR"};
				gunBeg = "REAR_usti_hlavne";
				gunEnd = "REAR_konec_hlavne";
				body = "REAR_otocvez";
				gun = "REAR_otochlaven";
				animationSourceBody = "REAR_Turret";
				animationSourceGun = "REAR_Gun";
				selectionFireAnim = "REAR_zasleh";
				memoryPointGunnerOptics = "REAR_gunnerview";
				gunnerLeftHandAnimName = "REAR_handle_L";
				gunnerRightHandAnimName = "REAR_handle_R";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				initElev = 0;
				minElev = -10;
				maxElev = 60;
				initTurn = 180;
				minTurn = 80;
				maxTurn = 280;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -135;
					maxAngleY = 135;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
					turretInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
					discreteDistanceInitIndex = 1;
				};
			};
			
			class CargoTurret_Cabina: CargoTurret
			{
				proxyIndex = 1;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_BOAT_COMMANDER";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				hasgunner = 1;
				commanding = 5;
			};
			
			class CargoTurret_Back1: CargoTurret
			{
				proxyIndex = 2;
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_CARGO_R_R";
				memoryPointsGetInGunner = "cargo right pos 1";
				memoryPointsGetInGunnerDir = "cargo right dir 1";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				hasgunner = 1;
			};
			
			class CargoTurret_back2: CargoTurret_Back1
			{
				proxyIndex = 3;
				gunnerName = "$STR_CARGO_R_L";
				memoryPointsGetInGunner = "cargo left pos 1";
				memoryPointsGetInGunnerDir = "cargo left dir 1";
			};
			
			class CargoTurret_right_front: CargoTurret
			{
				proxyIndex = 4;
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_CARGO_F_R";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				memoryPointsGetInGunner = "cargo right pos 2";
				memoryPointsGetInGunnerDir = "cargo right dir 2";
				hasgunner = 1;
			};
			class CargoTurret_left_front: CargoTurret_right_front
			{
				proxyIndex = 5;
				gunnerName = "$STR_CARGO_F_L";
				initTurn = -140;
				minTurn = -30;
				maxTurn = 90;
				memoryPointsGetInGunner = "cargo left pos 2";
				memoryPointsGetInGunnerDir = "cargo left dir 2";
			};
			class CargoTurret_right_rear: CargoTurret_right_front
			{
				proxyIndex = 6;
				gunnerName = "$STR_CARGO_M_L";
				initTurn = -10;
				minTurn = -50;
				maxTurn = 90;
				memoryPointsGetInGunner = "cargo left pos 3";
				memoryPointsGetInGunnerDir = "cargo left dir 3";
			};
			class CargoTurret_left_rear: CargoTurret_right_front
			{
				proxyIndex = 7;
				gunnerName = "$STR_CARGO_M_R";
				initTurn = 10;
				minTurn = -50;
				maxTurn = 50;
				memoryPointsGetInGunner = "cargo right pos 3";
				memoryPointsGetInGunnerDir = "cargo right dir 3";
			};
		};
		class ViewPilot;
		class Viewgunner;
		class AnimationSources
		{
			class FRONT_ReloadAnim
			{
				source = "reload";
				weapon = "SG_DSHK_sparka";
			};
			class FRONT_ReloadMagazine: FRONT_ReloadAnim
			{
				source = "reloadmagazine";
			};
			class FRONT_Revolving: FRONT_ReloadAnim
			{
				source = "revolving";
			};
			class muzzle_rot_dshk1: FRONT_ReloadAnim
			{
				source = "ammorandom";
			};
			class muzzle_rot_dshk2: muzzle_rot_dshk1{};
			
			class REAR_ReloadAnim
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
			class REAR_ReloadMagazine: REAR_ReloadAnim
			{
				source = "reloadmagazine";
			};
			class REAR_Revolving: REAR_ReloadAnim
			{
				source = "revolving";
			};
		};
		

		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4)] execVM 'sg_btr40\scripts\multibarrel.sqf'";
		};
		
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};

		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2: Exhaust1
			{
				position = "vyfuk start 1";
				direction = "vyfuk konec 1";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.5,0.5,0.5,1.0};
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
			class GunnerLight: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 50;
				name = "cerveny pozicni";
				drawLight = 1;
				drawLightSize = 0.6;
				drawLightCenterSize = 0.05;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "zeleny pozicni";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "bily pozicni";
			};
		};
		armor = 50;
		ejectDamageLimit = 0.95;
		class HitPoints
		{
			class HitEngine
			{
				armor = 1.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1.0;
				material = -1;
				name = "fuel";
				visual = "";
				passThrough = 0;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vehicles\data\korp.rvmat",
				"sg_vehicles\data\korp_damage.rvmat",
				"sg_vehicles\data\korp_destruct.rvmat",
				
				"sg_vehicles\data\penel.rvmat",
				"sg_vehicles\data\penel_damage.rvmat",
				"sg_vehicles\data\penel_destruct.rvmat",
				
				"sg_vehicles\data\tur_back.rvmat",
				"sg_vehicles\data\tur_back_damage.rvmat",
				"sg_vehicles\data\tur_back_destruct.rvmat",
				
				"sg_vehicles\data\tur_front.rvmat",
				"sg_vehicles\data\tur_front_damage.rvmat",
				"sg_vehicles\data\tur_front_destruct.rvmat",
				
				
				"sg_vehicles\data\dekor.rvmat",
				"sg_vehicles\data\dekor_damage.rvmat",
				"sg_vehicles\data\dekor_destruct.rvmat"
				
				
				
			};
		};
		
		
		
		
		
		insideSoundCoef = 0;
		attenuationEffectType = "OpenCarAttenuation";
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2",0.501187,1,300};
				frequency = "0.95 + ((rpm/ 1200) factor[(100/ 1200),(300/ 1200)])*0.15";
				volume = "engineOn*(((rpm/ 1200) factor[(0/ 1200),(30/ 1200)]) * ((rpm/ 1200) factor[(500/ 1200),(300/ 1200)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2",0.630957,1.0,450};
				frequency = "0.95 + ((rpm/ 1200) factor[(300/ 1200),(600/ 1200)])*0.2";
				volume = "engineOn*(((rpm/ 1200) factor[(150/ 1200),(250/ 1200)]) * ((rpm/ 1200) factor[(600/ 1200),(400/ 1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2",0.794328,1.0,500};
				frequency = "0.95 +  ((rpm/ 1200) factor[(600/ 1200),(900/ 1200)])*0.2";
				volume = "engineOn*(((rpm/ 1200) factor[(350/ 1200),(500/ 1200)]) * ((rpm/ 1200) factor[(1000/ 1200),(700/ 1200)]))";
			};
			class EngineMaxOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2",1.0,1.0,600};
				frequency = "0.95 + ((rpm/ 1200) factor[(700/ 1200),(1000/ 1200)])*0.2";
				volume = "engineOn*((rpm/ 1200) factor[(800/ 1200),(1200/ 1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.707946,1.0,150};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.794328,1.0,250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.707946,1.0,150};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.794328,0.9,250};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,0.9,350};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",1.778279,0.9,100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
		};
		maximumLoad = 9999;
		transportMaxBackpacks = 15;
		transportMaxMagazines = 250;
		transportMaxWeapons = 40;
		transportMaxItems = 40;
		class TransportItems
		{};
		class TransportMagazines
		{
			class _xx_rhs_mag_127x108mm_50
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 8;
			};
			class _xx_sg_250Rnd_762x54mmR
			{
				magazine = "sg_250Rnd_762x54mmR";
				count = 4;
			};
		};
		class TransportWeapons
		{};
	};

	class SG_ASSAULT_BOAT: SG_ASSAULT_BOAT_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "$STR_ASSAULT_BOAT";
		transportSoldier = 0;
		threat[] = {0.8,0.3,0.5};
		hasCommander = 1;
		driverIsCommander = 0;
		armor = 60;
	};
	
	class SG_ASSAULT_BOAT_AGS: SG_ASSAULT_BOAT
	{
		displayName = "$STR_ASSAULT_BOAT_AGS";
		model = "\sg_vehicles\assault_boat_ags.P3D";
	
		
		class Turrets: Turrets {
			class MainTurret: MainTurret
			{
				startEngine = 0;
				commanding = 2;
				primaryGunner = 1;
				outGunnerMayFire = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				
				
				gunnerName = "$STR_FRONT_GUNNER";
				
				gunnerAction = "SG_Sparka_Gunner";
				gunnerInAction = "SG_Sparka_Gunner";
				
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				
				weapons[] = {"SG_DSHK_sparka"};
				magazines[] = {"rhs_mag_127x108mm_50","rhs_mag_127x108mm_50"};				
				memoryPointGun[] = {"front_usti_hlavne_1","front_usti_hlavne_2"};
				
				gunBeg = "front_usti_hlavne_1";
				gunEnd = "front_konec_hlavne_1";
				
				body = "FRONT_otocvez";
				gun = "FRONT_otochlaven";
				animationSourceBody = "FRONT_Turret";
				animationSourceGun = "FRONT_Gun";
				
				memoryPointGunnerOptics = "FRONT_gunnerview";
				
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = "StabilizedInAxesNone";
				initElev = 0;
				minElev = -15;
				maxElev = 45;
				initTurn = 0;
				minTurn = -360;
				maxTurn = 360;
				class HitPoints
				{
				class HitTurret
				{
					armor = 0.8;
					material = 0;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
					class HitGun
					{
					armor = 0.4;
					material = 0;
					name = "zbran";
					visual = "zbran";
					passThrough = 1;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -15;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
				};
				
				
	

			};
			class BackTurret: BackTurret
			{
				memoryPointGun = "weapon_ags_end";
				gunBeg = "weapon_ags_end";
				gunEnd = "weapon_ags_start";
				gun = "weapon_ags";
				animationSourceGun = "weapon_ags";
				selectionFireAnim = "muzzleFlash2";
				gunnerLeftHandAnimName = "weapon_ags";
				gunnerRightHandAnimName = "weapon_ags";
				gunnerLeftLegAnimName = "weapon_ags_leg_left";
				gunnerRightLegAnimName = "weapon_ags_leg_right";
				gunnerAction = "rhs_tigr_gunner_ags";
				gunnerInAction = "rhs_tigr_gunner_ags";
				memoryPointGunnerOptics = "gunnerview_ags";
				
				startEngine = 0;
				commanding = 1;
				proxyIndex = 2;
				primaryGunner = 0;
				primary = 0;
				memoryPointsGetInGunner = "pos rear gunner";
				memoryPointsGetInGunnerDir = "pos rear gunner dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				outGunnerMayFire = 1;
				gunnerName = "$STR_REAR_GUNNER";
				weapons[] = {"SG_RHS_weap_Ags30"};
				magazines[] = {"RHS_mag_VOG30_30"};
				body = "REAR_otocvez";
				animationSourceBody = "REAR_Turret";
				
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				
				soundServo[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				initElev = 0;
				minElev = -10;
				maxElev = 60;
				initTurn = 180;
				minTurn = 80;
				maxTurn = 280;
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\optika_AGS30";
						initFov = 0.25;
						minFov = 0.25;
						maxFov = 0.25;
					};
				};
			};
			
			class CargoTurret_Cabina: CargoTurret
			{
				proxyIndex = 1;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_BOAT_COMMANDER";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				hasgunner = 1;
			};
			
			class CargoTurret_Back1: CargoTurret
			{
				proxyIndex = 2;
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_CARGO_R_R";
				memoryPointsGetInGunner = "cargo right pos 1";
				memoryPointsGetInGunnerDir = "cargo right dir 1";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				hasgunner = 1;
			};
			
			class CargoTurret_back2: CargoTurret_Back1
			{
				proxyIndex = 3;
				gunnerName = "$STR_CARGO_R_L";
				memoryPointsGetInGunner = "cargo left pos 1";
				memoryPointsGetInGunnerDir = "cargo left dir 1";
			};
			
			class CargoTurret_right_front: CargoTurret
			{
				proxyIndex = 4;
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_CARGO_F_R";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				memoryPointsGetInGunner = "cargo right pos 2";
				memoryPointsGetInGunnerDir = "cargo right dir 2";
				hasgunner = 1;
			};
			class CargoTurret_left_front: CargoTurret_right_front
			{
				proxyIndex = 5;
				gunnerName = "$STR_CARGO_F_L";
				initTurn = -140;
				minTurn = -30;
				maxTurn = 90;
				memoryPointsGetInGunner = "cargo left pos 2";
				memoryPointsGetInGunnerDir = "cargo left dir 2";
			};
			class CargoTurret_right_rear: CargoTurret_right_front
			{
				proxyIndex = 6;
				gunnerName = "$STR_CARGO_M_L";
				initTurn = -10;
				minTurn = -50;
				maxTurn = 90;
				memoryPointsGetInGunner = "cargo left pos 3";
				memoryPointsGetInGunnerDir = "cargo left dir 3";
			};
			class CargoTurret_left_rear: CargoTurret_right_front
			{
				proxyIndex = 7;
				gunnerName = "$STR_CARGO_M_R";
				initTurn = 10;
				minTurn = -50;
				maxTurn = 50;
				memoryPointsGetInGunner = "cargo right pos 3";
				memoryPointsGetInGunnerDir = "cargo right dir 3";
			};
			
		};
	
	
		class AnimationSources: AnimationSources
		{
			class weapon_ags_reload
			{
				source = "reload";
				weapon = "BN_RHS_weap_Ags30";
			};
			class weapon_ags_ReloadMagazine: weapon_ags_reload
			{
				source = "reloadmagazine";
			};
			class weapon_ags_ammoRandom: weapon_ags_reload
			{
				source = "ammorandom";
			};
		};
	
	
		class TransportMagazines
		{
			class _xx_rhs_mag_127x108mm_50
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 8;
			};
			class _xx_RHS_mag_VOG30_30
			{
				magazine = "RHS_mag_VOG30_30";
				count = 5;
			};
		};
	
	
	
	
	
	};

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class sg_pbr_base: sg_boat_base_turret
	{
		scope = 0;
		
		
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		
		vehicleClass = "Ship";
		editorSubcategory = "EdSubcat_Boats";
		
		driverLeftHandAnimName = "handle_driver_l";
		driverRightHandAnimName = "handle_driver_r";
		
		picture = "\sg_vehicles\data\PBR_pic.paa";
		Icon = "\sg_vehicles\data\PBR_ico.paa";
		model = "\sg_vehicles\PBR_M2";
		mapSize = 10;
		irTarget = 1;
		simulation = "shipX";
		idleRpm = 100;
		redRpm = 1000;
		thrustDelay = 1;
		enginePower = 220;
		engineShiftY = -0.7;
		maxSpeed = 50;
		waterSpeedFactor = 1;
		waterResistanceCoef = 0.005;
		waterAngularDampingCoef = 3;
		waterLinearDampingCoefX = 2;
		waterLinearDampingCoefY = 1;
		rudderForceCoef = 2;
		rudderForceCoefAtMaxSpeed = 0.0045;
		waterLeakiness = 5;
		waterEffectSpeed = 5;
		waterFastEffectSpeed = 25;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-1,"R1",-0.5,"N",0,"D1",3.5,"D2",3,"D3",2.5,"D4",2.0};
			TransmissionRatios[] = {"High",1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		armor = 120;
		damageResistance = 0.00242;
		armorStructural = 1.0;
		class HitPoints
		{
			class HitEngine
			{
				armor = 1.2;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
				radius = 0.2;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "hull";
				visual = "zbytek";
				passThrough = 1;
				explosionShielding = 1;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "fuel";
				visual = "";
				passThrough = 0;
				explosionShielding = 1;
			};
		};
		class DestructionEffects;
		class Damage
		{
			tex[] = {};
			mat[] = {
				
				
				"sg_vehicles\data\pbr_roof.rvmat",
				"sg_vehicles\data\pbr_roof.rvmat",
				"sg_vehicles\data\PBRm_destruct.rvmat",
				
				"sg_vehicles\data\PBRm.rvmat",
				"sg_vehicles\data\PBRm_damage.rvmat",
				"sg_vehicles\data\PBRm_destruct.rvmat"
				
			/*	"sg_vehicles\data\glass.rvmat",
				"sg_vehicles\data\glass.rvmat",
				"sg_vehicles\data\PBR_destruct.rvmat",
				
				"uns_m113\data\m2_ammotray.rvmat",
				"uns_m113\data\m2_ammotray.rvmat",
				"uns_m113\data\m2_ammotray_destruct.rvmat",
				
				"uns_compat\ca\weapons\data\m2.rvmat",
				"uns_compat\ca\weapons\data\m2.rvmat",
				"uns_compat\ca\weapons\data\m2_destruct.rvmat"
			*/
			};
		};
		class NewTurret;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class BackTurret: BackTurret{};
			
		};
		class ViewPilot;
		class Viewgunner;
		maximumLoad = 9999;
		transportMaxMagazines = 150;
		transportMaxItems = 30;
		transportMaxWeapons = 30;
		transportMaxBackpacks = 6;
		class TransportMagazines
		{
			class _xx_rhs_mag_100rnd_127x99_mag
			{
				magazine = "rhs_mag_100rnd_127x99_mag";
				count = 12;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 10;
			};
		};
		class TransportItems
		{
			
		};
		class TransportWeapons
		{
			
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Dashboard Upper";
				shortName = "D.Up";
				componentName = "ACRE_VRC64";
				allowedPositions[] = {"driver","commander"};
				disabledPositions[] = {};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
	};
	
	class sg_pbr: sg_pbr_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		
		displayName = "PBR Mk.II (M2)";
		driverIsCommander = 0;
		commanding = 3;
		hasGunner = 1;
		hasCommander = 1;
		hideWeaponsDriver = 1;
		
		//ejectDeadGunner = 1;
		//ejectDeadCargo = 1;
		//ejectDeadDriver = 1;
		
		driverAction = "sg_PBR_Driver";
		
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		
		memoryPointsGetInCommander = "pos commander";
		memoryPointsGetInCommanderDir = "pos commander dir";
		
		memoryPointsGetInGunner = "pos gunner";
		memoryPointsGetInGunnerDir = "pos gunner dir";
		
		//driverLeftHandAnimName = "handle_driver_l";
		//driverRightHandAnimName = "handle_driver_r";
		
	
		
		threat[] = {0.7,0.4,0.8};
		
		commanderCanSee = 2;	// default
		gunnerCanSee = 2;	// default
		driverCanSee = 2;	// default
			
		class Components {};
		
		minSpeed = -0.5;
		maxSpeed = 55;
		steerAheadSimul = 2.2;
		steerAheadPlan = 2.4;
		predictTurnSimul = 2.6;
		predictTurnPlan = 2.8;
		precision = 50;
		brakeDistance = 50;
		accuracy = 0.95;
		camouflage = 14;
		fuelCapacity = 500;
		cost = 2000000;
		enableGPS = 0;
		secondaryExplosion = 1;
		unloadInCombat = 0;
		nameSound = "veh_ship_attackBoat_s";
		insideSoundCoef = 0;
		attenuationEffectType = "OpenCarAttenuation";
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2",0.501187,1,300};
				frequency = "0.95 + ((rpm/ 1200) factor[(100/ 1200),(300/ 1200)])*0.15";
				volume = "engineOn*(((rpm/ 1200) factor[(0/ 1200),(30/ 1200)]) * ((rpm/ 1200) factor[(500/ 1200),(300/ 1200)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2",0.630957,1.0,450};
				frequency = "0.95 + ((rpm/ 1200) factor[(300/ 1200),(600/ 1200)])*0.2";
				volume = "engineOn*(((rpm/ 1200) factor[(150/ 1200),(250/ 1200)]) * ((rpm/ 1200) factor[(600/ 1200),(400/ 1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2",0.794328,1.0,500};
				frequency = "0.95 +  ((rpm/ 1200) factor[(600/ 1200),(900/ 1200)])*0.2";
				volume = "engineOn*(((rpm/ 1200) factor[(350/ 1200),(500/ 1200)]) * ((rpm/ 1200) factor[(1000/ 1200),(700/ 1200)]))";
			};
			class EngineMaxOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2",1.0,1.0,600};
				frequency = "0.95 + ((rpm/ 1200) factor[(700/ 1200),(1000/ 1200)])*0.2";
				volume = "engineOn*((rpm/ 1200) factor[(800/ 1200),(1200/ 1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.707946,1.0,150};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.794328,1.0,250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.707946,1.0,150};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.794328,0.9,250};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,0.9,350};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",1.778279,0.9,100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
		};
		HiddenSelections[] = {"camo1"};
		HiddenSelectionsTextures[] = {"\sg_vehicles\data\pbrm_co.paa"};
		
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				startEngine = 0;
				commanding = 2;
				primaryGunner = 1;
				outGunnerMayFire = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "$STR_FRONT_GUNNER";
				gunnerAction = "SG_Gunner_TwinM2";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"SG_M2_Twin"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag"};
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
				discreteDistanceInitIndex = 2;
				body = "OtocVez";
				gun = "OtocHlaven";
				memoryPointGun[] = {"usti_hlavne_1","usti_hlavne_2"};
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				minElev = -10;
				maxElev = 40;
				minTurn = -100;
				maxTurn = 100;
				initTurn = 0;
				soundServo[] = {"A3\sounds_f\dummysound",1.0};
				class HitTurret
				{
					armor = 0.8;
					material = 0;
					name = "vez";
					visual = "vez";
					passThrough = 1;
				};
				class HitGun
				{
					armor = 0.4;
					material = 0;
					name = "zbran";
					visual = "zbran";
					passThrough = 1;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
					turretInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
					discreteDistanceInitIndex = 2;
				};
			};
			class BackTurret: BackTurret
			{
				startEngine = 0;
				commanding = 1;
				proxyIndex = 2;
				primaryGunner = 0;
				primary = 0;
				memoryPointsGetInGunner = "pos rear gunner";
				memoryPointsGetInGunnerDir = "pos rear gunner dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				outGunnerMayFire = 1;
				gunnerAction = "SG_REAR_Gunner_M2";
				gunnerName = "$STR_REAR_GUNNER";
				weapons[] = {"SG_M2_Rear"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag"};
				gunnerLeftHandAnimName = "REAR_handle_L";
				gunnerRightHandAnimName = "REAR_handle_R";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
				discreteDistanceInitIndex = 2;
				body = "otocvez_2";
				gun = "OtocHlaven_2";
				memoryPointGun = "REAR_usti_hlavne";
				gunBeg = "REAR_usti_hlavne";
				gunEnd = "REAR_konec_hlavne";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				selectionFireAnim = "rear_zasleh";
				memoryPointGunnerOptics = "gunnerview_2";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				showgunneroptics = 1;
				gunnerForceOptics = 0;
				castGunnerShadow = 0;
				minElev = -10;
				maxElev = 30;
				initElev = -5;
				initTurn = 180;
				minTurn = 120;
				maxTurn = 240;
				soundServo[] = {"",1.0};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -10;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -135;
					maxAngleY = 135;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
					turretInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
					discreteDistanceInitIndex = 2;
				};
			};
			
			class M60Turret: BackTurret
			{
				commanding = 0;
				proxyIndex = 4;
				primaryGunner = 0;
				primary = 0;
				outGunnerMayFire = 1;
				memoryPointsGetInGunner = "m60_pos_gunner";
				memoryPointsGetInGunnerDir = "m60_pos_gunner_dir";
				gunnerAction = "SG_Gunner_M60";
				gunnerName = "$STR_M60_GUNNER_LEFT";
				weapons[] = {"sg_m60_veh"};
				magazines[] = {"rhs_mag_762x51_M240_200"};
				TurretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 1;
				gunnerLeftHandAnimName = "m60_feedtray_cover";
				gunnerRightHandAnimName = "m60_feedtray_cover";
				body = "m60_MainTurret";
				gun = "m60_MainGun";
				memoryPointGun = "m60_usti_hlavne";
				gunBeg = "m60_usti_hlavne";
				gunEnd = "m60_konec_hlavne";
				animationSourceBody = "m60_MainTurret";
				animationSourceGun = "m60_MainGun";
				selectionFireAnim = "m60_zasleh";
				memoryPointGunnerOptics = "m60_gunnerview";
				minElev = -15;
				maxElev = 45;
				initElev = 15;
				initTurn = 90;
				minTurn = 45;
				maxTurn = 135;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -20;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = -135;
					maxAngleY = 135;
					initFov = 0.4;
					minFov = 0.4;
					maxFov = 0.4;
					turretInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 1;
				};
			};
					
			class M60Turret1: M60Turret
			{
				proxyIndex = 3;
				memoryPointsGetInGunner = "m60_pos_gunner_1";
				memoryPointsGetInGunnerDir = "m60_pos_gunner_dir_1";
				gunnerAction = "SG_Gunner_M60";
				gunnerName = "$STR_M60_GUNNER_RIGHT";
				weapons[] = {"sg_m60_veh2"};
				gunnerLeftHandAnimName = "m60_feedtray_cover_1";
				gunnerRightHandAnimName = "m60_feedtray_cover_1";
				body = "m60_MainTurret_1";
				gun = "m60_MainGun_1";
				memoryPointGun = "m60_usti_hlavne_1";
				gunBeg = "m60_usti_hlavne_1";
				gunEnd = "m60_konec_hlavne_1";
				animationSourceBody = "m60_MainTurret_1";
				animationSourceGun = "m60_MainGun_1";
				selectionFireAnim = "m60_zasleh_1";
				memoryPointGunnerOptics = "m60_gunnerview_1";
				initTurn = -90;
				minTurn = -135;
				maxTurn = -45;
			};
			
			
			class CargoTurret_Cabina: CargoTurret
			{
				proxyIndex = 1;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				gunnerCompartments = "Compartment1";
				gunnerName = "$STR_BOAT_COMMANDER";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetOutAction = "GetOutLow";
				maxElev = 45;
				minElev = -15;
				initTurn = -20;
				minTurn = -80;
				maxTurn = 80;
				isPersonTurret = 1;
				hasgunner = 1;
				commanding = 5;
			};

			class CargoTurret_01: CargoTurret_Cabina
			{
				proxyIndex = 2;
				gunnerAction = "passenger_inside_2";
				gunnerGetInAction = "GetInHemttBack";
				gunnerGetOutAction = "GetOutLow";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "$STR_CARGO_R_L";
				gunnerCompartments = "Compartment2";
				maxElev = 15;
				minElev = -15;
				maxTurn = -40;
				minTurn = -115;
				isPersonTurret = 1;
				selectionFireAnim = "";
				commanding = -2;
				class Hitpoints{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				proxyIndex = 3;
				gunnerName = "$STR_CARGO_R_R";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				maxTurn = 95;
				minTurn = 20;
				minElev = -45;
			};
			
			class CargoTurret_right_rear: CargoTurret_01
			{
				proxyIndex = 4;
				gunnerAction = "passenger_inside_4";
				gunnerName = "$STR_CARGO_M_L";
				initTurn = -10;
				minTurn = -50;
				maxTurn = 90;
				memoryPointsGetInGunner = "pos cargo lf";
				memoryPointsGetInGunnerDir = "pos cargo lf dir";
			};
			class CargoTurret_left_rear: CargoTurret_01
			{
				proxyIndex = 5;
				gunnerName = "$STR_CARGO_M_R";
				gunnerAction = "passenger_inside_2";
				initTurn = 10;
				minTurn = -50;
				maxTurn = 50;
				memoryPointsGetInGunner = "pos cargo rf";
				memoryPointsGetInGunnerDir = "pos cargo rf dir";
			};

		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class CargoLight: Left
			{
				position = "C svetlo";
				direction = "konec C svetla";
				hitpoint = "C svetlo";
				selection = "C svetlo";
			};
			class GunnerLight: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class CommanderLight: Left
			{
				position = "commander light";
				direction = "commander light dir";
				hitpoint = "commander light";
				selection = "commander light";
			};
			class M60Light: Left
			{
				position = "m60_svetlo";
				direction = "m60_konec_svetla";
				hitpoint = "m60_svetlo";
				selection = "m60_svetlo";
			};
			class M60Light1: Left
			{
				position = "m60_svetlo_1";
				direction = "m60_konec_svetla_1";
				hitpoint = "m60_svetlo_1";
				selection = "m60_svetlo_1";
			};
		};
		class MarkerLights
		{
			class PositionRed
			{
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 50;
				name = "cerveny pozicni";
				drawLight = 1;
				drawLightSize = 0.6;
				drawLightCenterSize = 0.05;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 0;
			};
			class PositionGreen: PositionRed
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "zeleny pozicni";
			};
			class PositionWhite: PositionRed
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "bily pozicni";
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		slingLoadCargoMemoryPointsDir[] = {};
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		getInRadius = 15;
		class AnimationSources
		{
			class FRONT_ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M2_Twin";
			};
			class FRONT_M2_MuzzleFlashROT
			{
				source = "ammoRandom";
				weapon = "SG_M2_Twin";
			};
			class FRONT_Revolving
			{
				source = "revolving";
				weapon = "SG_M2_Twin";
			};
			

			class REAR_ReloadAnim
			{
				source = "reload";
				weapon = "SG_M2_Rear";
			};
			class REAR_ReloadMagazine: REAR_ReloadAnim
			{
				source = "reloadmagazine";
			};
			class REAR_Revolving: REAR_ReloadAnim
			{
				source = "revolving";
			};
			class REAR_recoil_source: REAR_ReloadAnim
			{
				animPeriod = 0.01;
			};
			class REAR_M2_MuzzleFlashROT: REAR_ReloadAnim
			{
				source = "ammoRandom";
			};
			
			
			class m60_ReloadAnim
			{
				source = "reload";
				weapon = "sg_m60_veh";
			};
			class m60_ReloadMagazine: m60_ReloadAnim
			{
				source = "reloadmagazine";
			};
			class m60_Revolving: m60_ReloadAnim
			{
				source = "revolving";
			};
			class m60_recoil_source: m60_ReloadAnim
			{
				animPeriod = 0.01;
			};
			class m60_MuzzleFlashROT: m60_ReloadAnim
			{
				source = "ammoRandom";
			};
			
			
			class m60_ReloadAnim1
			{
				source = "reload";
				weapon = "sg_m60_veh2";
			};
			class m60_ReloadMagazine1: m60_ReloadAnim1
			{
				source = "reloadmagazine";
			};
			class m60_Revolving1: m60_ReloadAnim1
			{
				source = "revolving";
			};
			class m60_recoil_source1: m60_ReloadAnim1
			{
				animPeriod = 0.01;
			};
			class m60_MuzzleFlashROT1: m60_ReloadAnim1
			{
				source = "ammoRandom";
			};
		};
		class Library
		{
			libTextDesc = "Patrol Boat Riverine (PBR) Mark II, from Mekong Delta - 1968";
		};
		class UserActions
		{};
		
		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4)] execVM 'sg_btr40\scripts\multibarrel.sqf'";
		};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};
