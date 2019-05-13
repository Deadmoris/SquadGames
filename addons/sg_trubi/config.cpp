#include "BIS_AddonInfo.hpp"

class CfgPatches
{
	class CUP_launch_RPG18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class HAFM_Weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgWeapons {	
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class rhs_weap_rpg26: Launcher_Base_F
	{
		class WeaponSlotsInfo;
	};
	class tu_rhs_weap_rpg18: rhs_weap_rpg26
	{
		ace_overpressure_angle = 70;
		ace_overpressure_damage = 0.7;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 20;
		ACE_UsedTube = "tu_rhs_weap_rpg18_used";
		scope = 2; // Показывается всегда и везде
		magazines[] = {"tu_rhs_rpg18_mag"}; // Магазин
		discreteDistance[] = {};
		discreteDistanceCameraPoint[] = {};
		descriptionShort = "РПГ-18<br />Эффективная дальность стрельбы:10-250м<br />Бронепробиваемость: до 300мм брони<br />Скорость полета гранаты: 114м/с";
		picture = "\CUP\Weapons\CUP_Weapons_RPG18\data\ui\gear_rpg18_X_ca.paa";
		model = "\CUP\Weapons\CUP_Weapons_RPG18\CUP_rpg18.p3d";
		modelOptics = "-";
		displayname = $STR_RPG18;
		aimTransitionSpeed = 0.75;
		recoil = "recoil_single_law";
		reloadAction = "ReloadRPG";
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s1",4,1,1400};
			begin2[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s2",4,1,1400};
			begin3[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s3",4,1,1400};
			begin4[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s4",4,1,1400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Reload",1,1,35};
		drySound[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Dry",1,1,35};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Fly",0.31622776,1.5,900};
		showToPlayer = 1;
		minRange = 10;
		minRangeProbab = 0.9;
		midRange = 100;
		midRangeProbab = 0.7;
		maxRange = 250;
		maxRangeProbab = 0.1;
		aiRateOfFire = 7;
		aiRateOfFireDistance = 300;
		weaponInfoType = "rhs_rscOptics_disposable";
		optics = 1;
		class OpticsModes
		{
			class ironsight
			{
				opticsID = 2;
				opticsPPEffects[] = {};
				useModelOptics = 0;
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.0;
				opticsZoomInit = 0.75;
				visionMode = "";
				discreteDistanceInitIndex = 0;
				discreteDistance[] = {100};
				cameraDir = "op_look2";
				discreteDistanceCameraPoint[] = {"look2_10"};
				distanceZoomMin = 100;
				distanceZoomMax = 100;
			};
			class ironsight2: ironsight
			{
				opticsID = 1;
				discreteDistance[] = {50,100,150,200};
				discreteDistanceCameraPoint[] = {"look_05","look_10","look_15","look_20"};
				cameraDir = "op_look";
				distanceZoomMin = 50;
				distanceZoomMax = 250;
			};
		};
		
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 57.2;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
	};
	class tu_rhs_weap_rpg18_used: tu_rhs_weap_rpg18
	{
		ACE_isUsedLauncher = 1;
		scope = 1;
		descriptionshort = "Used launcher tube";
		displayname = $STR_RPG18_used;
		weaponInfoType = "RscWeaponZeroing";
		magazines[] = {"ACE_FiredMissileDummy"};
		model = "\CUP\Weapons\CUP_Weapons_RPG18\CUP_rpg18_loaded.p3d";
	};
	
	class tu_rhs_M72 : Launcher {
		
		scope = 2;
		displayName = $STR_M72;
		model = "\HAFM_Weapons\law\HAFM_Law.p3d";
		picture = "\HAFM_Weapons\law\data\ico\gear_M72_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\HAFM_Weapons\law\Data\anims\m136.rtm"};
		reloadAction = "ReloadRPG";
		modelOptics = "-";
		weaponInfoType = "RscWeaponEmpty";
		magazineReloadSwitchPhase = 1;
		magazineReloadTime = 1;
		magazines[] = {"tu_rhs_M72_mag"};
		aiRateOfFire = 5.0;	// delay between shots at given distance
		aiRateOfFireDistance = 150;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.8;
		maxRange = 250;
		maxRangeProbab = 0.1;
		canLock = LockNo;
		weaponLockDelay = 2.0;
		canDrop = true;
		showEmpty = 1;
		autoReload = false;
		enableReload = 0;
		reloadtime = 1;
		memorypointcamera = "eye";
		sounds[] = {"StandardSound"};
		ace_overpressure_angle = 70;
		ace_overpressure_damage = 0.7;
		ace_overpressure_priority = 1;
		ace_overpressure_range = 20;
		ACE_UsedTube = "tu_rhs_m72_used";
		
		class BaseSoundModeType {
			weaponSoundEffect = "DefaultRifle";
		};
		
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s1",4,1,1400};
			begin2[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s2",4,1,1400};
			begin3[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s3",4,1,1400};
			begin4[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\RPG_s4",4,1,1400};
			soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
		};
		drySound[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Dry", 0.446684, 1, 20};
		reloadMagazineSound[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Reload", 1.0, 1, 10};
		soundFly[] = {"CUP\Weapons\CUP_Weapons_RPG18\data\sfx\Fly", db-10, 1.5, 700};
		recoil = "recoil_single_law";
		lockAcquire = 0;
		inertia = 0.2;
		
		class WeaponSlotsInfo {
			mass = 57.2;
			allowedSlots[] = {901};
		};
		descriptionShort = "M72 LAW<br />Эффективная дальность стрельбы:10-250м<br />Бронепробиваемость: до 300мм брони<br />Скорость полета гранаты: 120м/с";
		
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		
		class Library {
			libTextDesc = "M72 LAW";
		};
	};
	
		class tu_rhs_m72_used: tu_rhs_m72
	{
		ACE_isUsedLauncher = 1;
		scope = 1;
		descriptionshort = "Used launcher tube";
		displayname = $STR_M72_used;
		weaponInfoType = "RscWeaponZeroing";
		magazines[] = {"ACE_FiredMissileDummy"};
		model = "\HAFM_Weapons\law\HAFM_Law_Loaded.p3d";
	};
	
	
};
class CfgMagazines {
	class Default;	// External class reference
	class CA_LauncherMagazine;	// External class reference
	class rhs_rpg26_mag;
	class tu_rhs_rpg18_mag: rhs_rpg26_mag
	{
		initspeed = 114; // Скорость вылета гранаты из РПГ
		author = "Fighter";
		ammo = "tu_rhs_rpg18_rocket"; // Отсылка на гранату
		scope = 1;
		scopeArsenal = 0;
		displayName = "Preloaded Missle";
		picture = "\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\blank_icon.paa";
		weaponPoolAvailable = 0;
		mass = 0;
	};
	
	class tu_rhs_M72_mag : CA_LauncherMagazine {
		initspeed = 200; // Скорость вылета гранаты из РПГ
		scope = 1;
		scopeArsenal = 0;
		model = "\HAFM_Weapons\Law\HAFM_M72_Rocket.p3d";
		modelSpecial = "\HAFM_Weapons\law\HAFM_Law_Loaded.p3d";
		displayName = "M72 Rocket";
		ammo = tu_rhs_m72_rocket;
		picture = "\HAFM_Weapons\law\data\ico\gear_M72_rocket_ca.paa";
		descriptionShort = "LAW M72 Rocket";
		mass = 0;
		weaponPoolAvailable = 0;
	};
};	

class CfgAmmo {
		class MissileBase;
		class rhs_rpg26_rocket;
	class tu_rhs_rpg18_rocket: rhs_rpg26_rocket
	{
		airfriction = 0.7; // Трение воздуха (настроен хорошо, мб можно попробовать 0.75, но не больше и не меньше)
		deflecting = 5; // Траектория
		deflectionSlowDown = 0.8; // Замедление падения
		maxspeed = 114; // Макс скорость
		thrust = 0; // Без движка
		thrustTime = 0; // Без движка
		timetoLive = 8; // Самоликвидатор
		hit = 150; 
		indirectHit = 5;
		indirectHitRange = 2;
		submunitionAmmo = "rhs_rpg7v2_pg7v_penetrator"; // Подвяжем РХС механику, для совместимости с ДЗ
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class tu_rhs_m72_rocket: MissileBase
	{
		airfriction = 0.2; // Трение воздуха 
		maxspeed = 200; // Макс скорость
		thrust = 0; // Без движка
		thrustTime = 0; // Без движка
		timetoLive = 15; // Самоликвидатор
		hit = 150; 
		indirectHit = 5;
		model = "\HAFM_Weapons\Law\HAFM_M72_Rocket.p3d";
		indirectHitRange = 2;
		submunitionAmmo = "rhs_rpg7v2_pg7v_penetrator"; // Подвяжем РХС механику, для совместимости с ДЗ
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	
};