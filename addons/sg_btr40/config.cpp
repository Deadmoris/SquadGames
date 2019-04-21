#define _ARMA_

enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4
};









class CfgPatches
{
	class sg_btr40
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"A3_Data_F","A3_Soft_F","A3_Armor_F","A3_Characters_F","A3_Cargoposes_F","rhs_c_heavyweapons","bn_csw_load"};
	};
};






class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_BTR40_Driver_EP1 = "CUP_BTR40_Driver_EP1";
		CUP_BTR40_Cargo01_EP1 = "CUP_BTR40_Cargo01_EP1";
		CUP_BTR40_Cargo02_EP1 = "CUP_BTR40_Cargo02_EP1";
		CUP_BTR40_Cargo03_EP1 = "CUP_BTR40_Cargo03_EP1";
		CUP_BTR40_Cargo_EP1 = "CUP_BTR40_Cargo01_EP1";
		CUP_BTR40_Gunner_EP1 = "CUP_BTR40_Gunner_EP1";
		uns_m113_30cal_gunner = "uns_m113_30cal_gunner";		
		UNS_M113_Driver = "UNS_M113_Driver";
		SG_Sparka_Gunner = "SG_Sparka_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class CUP_BTR40_Driver_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Driver.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		
		class SG_Sparka_Gunner_KIA: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\sparka_gunner_kia.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		
		class SG_Sparka_Gunner: Crew
		{
			file = "\sg_btr40\Data\Anim\sparka_gunner.rtm";
			speed = 1e+010;
			interpolateTo[] = {"SG_Sparka_Gunner_KIA",1};
		};
		

		
		class CUP_BTR40_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BTR40_Cargo01_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Commander.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"CUP_BTR40_Cargo01_EP1",0.1,"CUP_BTR40_Cargo01_V1_EP1",0.1,"CUP_BTR40_Cargo01_V2_EP1",0.1,"CUP_BTR40_Cargo01_V3_EP1",0.1,"CUP_BTR40_Cargo01_V4_EP1",0.1,"CUP_BTR40_Cargo01_V5_EP1",0.1};
			equivalentTo = "CUP_BTR40_Cargo01_EP1";
			variantsAI[] = {"CUP_BTR40_Cargo01_EP1",0.5,"CUP_BTR40_Cargo01_V1_EP1",0.12,"CUP_BTR40_Cargo01_V2_EP1",0.11,"CUP_BTR40_Cargo01_V3_EP1",0.1,"CUP_BTR40_Cargo01_V4_EP1",0.09,"CUP_BTR40_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class CUP_BTR40_Cargo01_V1_EP1: CUP_BTR40_Cargo01_EP1
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo_V1.rtm";
			connectTo[] = {"CUP_BTR40_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class CUP_BTR40_Cargo01_V2_EP1: CUP_BTR40_Cargo01_V1_EP1
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo_V2.rtm";
			speed = 0.3125;
		};
		class CUP_BTR40_Cargo01_V3_EP1: CUP_BTR40_Cargo01_V2_EP1
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo_V3.rtm";
			speed = 0.625;
		};
		class CUP_BTR40_Cargo01_V4_EP1: CUP_BTR40_Cargo01_V3_EP1
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo_V4.rtm";
			speed = 0.410959;
		};
		class CUP_BTR40_Cargo01_V5_EP1: CUP_BTR40_Cargo01_V4_EP1
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo_V5.rtm";
			speed = 0.333333;
		};
		class CUP_BTR40_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Cargo01.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BTR40_Cargo02_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo02.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Cargo02_EP1",1};
			speed = 1e+010;
		};
		class CUP_BTR40_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Cargo02.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BTR40_Cargo03_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Cargo03.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Cargo03_EP1",1};
			speed = 1e+010;
		};
		class CUP_BTR40_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Cargo03.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BTR40_Cargo_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Commander.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Cargo_EP1",1};
			speed = 1e+010;
		};
		class CUP_BTR40_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Commander.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_BTR40_Gunner_EP1: Crew
		{
			file = "\sg_btr40\Data\Anim\BTR40_Gunner.rtm";
			interpolateTo[] = {"CUP_BTR40_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class CUP_BTR40_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\BTR40_KIA_Gunner.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class uns_m113_30cal_gunner: Crew
		{
			file = "\sg_btr40\Data\Anim\uns_m113_30cal_gunner.rtm";
			interpolateTo[] = {"KIA_M113_Gunner",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
		};
		class KIA_M113_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_btr40\Data\Anim\KIA_M113_Gunner.rtm";
			speed = 1.4;
			ragdoll = 1;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
			InterpolateTo[] = {};
		};
		
		class KIA_UNS_M113_Driver: DefaultDie
		{
			file = "\sg_btr40\data\Anim\KIA_M113_Driver.rtm";
			actions = "DeadActions";
			connectTo[] = {"DeadState",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class UNS_M113_Driver: Crew
		{
			file = "\sg_btr40\data\Anim\M113_Driver.rtm";
			interpolateTo[] = {"KIA_UNS_M113_Driver",1};
			speed = 0.5;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
		};
		
		
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_BTR40_Driver_EP1 = "";
		CUP_BTR40_Cargo01_EP1 = "crew";
		CUP_BTR40_Cargo02_EP1 = "crew";
		CUP_BTR40_Cargo03_EP1 = "crew";
		CUP_BTR40_Commander_EP1 = "";
		CUP_BTR40_Gunner_EP1 = "";
	};
};




















/*
class CfgMagazines
{
	class rhs_mag_127x108mm_50;
	class SG_mag_127x108mm_100: rhs_mag_127x108mm_50
	{
		count = 100;
		tracersEvery = 1;
	};
	class SG_mag_127x108mm_300: SG_mag_127x108mm_100
	{
		count = 300;		
	};
	
	class rhs_mag_100rnd_127x99_mag_Tracer_Red;
	class SG_mag_127x99mm_400: rhs_mag_100rnd_127x99_mag_Tracer_Red
	{
		count = 400;
		tracersEvery = 1;		
	};
};
*/









class cfgWeapons
{
	class MGun;
	class BN_rhs_weap_DSHKM;
	class SG_DSHK_veh: BN_rhs_weap_DSHKM
	{
		class GunParticles
		{
			class FirstEffect
			{
				positionName = "machinegun_start";
				directionName = "machinegun_end";
				effectName = "MachineGunCloud";
			};
			class ThirdEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
		};		
		//magazines[] = {"rhs_mag_127x108mm_50","rhs_mag_127x108mm_150"};
		//magazines[] = {"rhs_mag_127x108mm_50"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
	};
	
	class SG_DSHK_sparka: BN_rhs_weap_DSHKM
	{
		//magazines[] = {"rhs_mag_127x108mm_50"};
		reloadTime = 0.01;
		isMultiBarrel = 1;
		BarrelCount = 2;
		BarrelName = "front_usti_hlavne";
		
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 1;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
		
		class GunParticles
		{
			class Gun1Effect
			{
				directionName = "front_konec_hlavne_1";
				positionName = "front_usti_hlavne_1";
				effectName = "MachineGunCloud";
			};
			class Gun2Effect
			{
				directionName = "front_konec_hlavne_2";
				positionName = "front_usti_hlavne_2";
				effectName = "MachineGunCloud";
			};
		};
		
		
		modes[] = {"manual"};
		class manual: MGun
		{
			displayName = "$STR_2xDSHKM";
			autoFire = 1;
			reloadTime = 0.075;
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
	
	
	class BN_RHS_M2;
	class SG_M2_Quad: BN_RHS_M2
	{
		displayName = "M45 Quadmount M2HB";
		//magazines[] = {"SG_mag_127x99mm_400"};
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
		discreteDistanceInitIndex = 2;
		aiDispersionCoefY = 24;
		aiDispersionCoefX = 24;
		dispersion = 0.015;
		reloadTime = 0.01;
		isMultiBarrel = 1;
		BarrelCount = 4;
		BarrelName = "barrel";
		
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 3;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
		
		class GunParticles
		{
			class effect1
			{
				positionName = "barrel_1";
				directionName = "chamber_1";
				effectName = "MachineGunCloud";
			};

			class effect2: effect1
			{
				positionName = "barrel_2";
				directionName = "chamber_2";
			};

			class effect3: effect1
			{
				positionName = "barrel_3";
				directionName = "chamber_3";
			};

			class effect4: effect1
			{
				positionName = "barrel_4";
				directionName = "chamber_4";
			};

		};
		modes[] = {"manual"};
		class manual: MGun
		{
			displayName = "M45 Quadmount M2HB";
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
			burst = 4;
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
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class AnimationSources;
	};
	class Wheeled_APC_F: Car_F{};
	class SG_BTR40_DSHK_Base: Wheeled_APC_F
	{
		brakeDistance = 7.0;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		expansion = 1;
		scope = 0;
		armor = 90;
		damageResistance = 0.03241;
		vehicleClass = "Armored";
		model = "sg_btr40\btr40_dshk";
		displayName = "$STR_BTR40_DSHK";
		picture = "\sg_btr40\Data\UI\Picture_btr40_dshk_CA.paa";
		Icon = "\sg_btr40\Data\UI\Icon_btr40_dshk_CA.paa";
		mapSize = 5.5;
		wheelCircumference = 2.532;
		steerAheadPlan = 0.2;
		terrainCoef = 2.5;
		damperSize = 0.1;
		damperForce = 1;
		class TransportMagazines{};
		transportSoldier = 6;
		driverAction = "CUP_BTR40_driver_EP1";
		driverInAction = "CUP_BTR40_driver_EP1";
		hideProxyInCombat = 0;
		forceHideDriver = 0;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		//cargoAction[] = {"CUP_BTR40_Cargo_EP1","CUP_UAZ_Cargo01","CUP_UAZ_Cargo01","CUP_UAZ_Cargo01","CUP_UAZ_Cargo01","CUP_UAZ_Cargo01","CUP_UAZ_Cargo01"};
		cargoAction[] = {"CUP_BTR40_Cargo_EP1","CUP_BTR40_Cargo01_EP1","CUP_BTR40_Cargo02_EP1","CUP_BTR40_Cargo03_EP1"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerOpticsShowCursor = 1;
		threat[] = {1,0.6,0.6};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set";
				shortName = "Radio";
				componentname = "ACRE_VRC64";
				allowedPositions[] = {"driver",{"cargo",0}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_DSHK_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_DSHK_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_DSHK_veh";
			};
			class HatchAction
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class textureSources
		{
			class TKA
			{
				displayName = "Takistani Army";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_btr40\data\btr40extcamo_co.paa"};
				factions[] = {};
			};
			class TKG
			{
				displayName = "Takistani Guerilla";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_btr40\data\btr40ext_co.paa"};
				factions[] = {};
			};
		};
		class UserActions
		{
			class HatchClose
			{
				displayName = "$STR_CLOSE_HATCH";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HatchAction"" !=0)";
				statement = "this animate [""HatchAction"",0]";
			};
			class HatchOpen
			{
				displayName = "$STR_OPEN_HATCH";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HatchAction"" !=1)";
				statement = "this animate [""HatchAction"",1]";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				weapons[] = {"SG_DSHK_veh"};
				soundServo[] = {};
				stabilizedInAxes = 0;
				startEngine = 0;
				magazines[] = {"rhs_mag_127x108mm_50"};
				gunnerAction = "CUP_BTR40_Gunner_EP1";
				gunnerInAction = "CUP_BTR40_Gunner_EP1";			
				/*gunnerLeftHandAnimName = "otochlaven_shake";
				gunnerRightHandAnimName = "otochlaven_shake";
				gunnerAction = "gunner_standup01";
				gunnerInAction = "gunner_standup01";*/
				gunnerLeftHandAnimName = "handle_l";
				gunnerRightHandAnimName = "handle_r";
				selectionFireAnim = "zasleh";
				ejectDeadGunner = 0;
				minElev = -18;
				maxElev = 30;
				minTurn = -50;
				maxTurn = 50;
				initTurn = 0;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel = "a3\weapons_f\reticle\optics_empty.p3d";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
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
				class ViewGunner: ViewOptics{};
				class Turrets{};
			};
		};
		DriverOutOptics = "Driverview";
		DriverOptics = "Driverview";
		driverForceOptics = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_btr40\data\btr40ext.rvmat",
				"sg_btr40\data\btr40ext_damage.rvmat",
				"sg_btr40\data\btr40ext_destruct.rvmat",
				
				"sg_btr40\data\btr40int.rvmat",
				"sg_btr40\data\btr40int_damage.rvmat",
				"sg_btr40\data\btr40int_destruct.rvmat",
				
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat"
			};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 0.6;
				material = 60;
				name = "motor";
				visual = "motor";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = 51;
				name = "palivo";
				passThrough = 0;
			};
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
		};
		hiddenSelections[] = {"camo"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_BTR40_MG";
		};
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		insideSoundCoef = 0;
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.3548134,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.70794576,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.3548134,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.70794576,1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.39810717,1,150};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.56234133,1,300};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.70794576,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1.0,1,400};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.56234133,1,200};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.70794576,1,350};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.1220185,1,425};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.2589254,1,450};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.25118864,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.31622776,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.39810717,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.63095737,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.3548134,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.56234133,1};
				frequency = "0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.70794576,1};
				frequency = "0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
				frequency = "0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.2589254,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.1220185,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.2589254,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.1220185,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.1220185,1.0,90};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.63095737,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.63095737,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 80;
		fuelCapacity = 94;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		idleRpm = 800;
		redRpm = 4500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45};
			TransmissionRatios[] = {"High",5.539};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0,0.0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1.0},{0.725,0.95},{0.85,0.6},{1.0,0.3}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 150;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 22500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 945;
				springStrength = 92064;
				springDamperRate = 9424;
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 275000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 275000;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
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
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
		};
		memoryPointTrackFLL = "stopa PLL";
		memoryPointTrackFLR = "stopa PLP";
		memoryPointTrackBLL = "stopa ZLL";
		memoryPointTrackBLR = "stopa ZLP";
		memoryPointTrackFRL = "stopa PPL";
		memoryPointTrackFRR = "stopa PPP";
		memoryPointTrackBRL = "stopa ZPL";
		memoryPointTrackBRR = "stopa ZPP";
		dustFrontLeftPos = "stopa PLL";
		dustFrontRightPos = "stopa PPP";
		dustBackLeftPos = "stopa ZLL";
		dustBackRightPos = "stopa ZPP";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3"};
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
		ace_refuel_fuelCapacity = 122;
		
		bn_csw_loading_style = 1;
		class ACE_Actions {
            class ACE_MainActions {
				// selection = "";
				distance = 5;
				condition = 1;
				class BN_CSW_Load_New {
					displayName = "Зарядить...";
					distance = 3;
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
					distance = 2;
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
	class SG_BTR40_Base: SG_BTR40_DSHK_Base
	{
		model = "sg_btr40\btr40";
		displayName = "$STR_BTR40";
		picture = "\sg_btr40\Data\UI\Picture_btr40_CA.paa";
		Icon = "\sg_btr40\Data\UI\Icon_btr40_CA.paa";
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		threat[] = {0,0,0};
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			delete ReloadAnim;
			delete ReloadMagazine;
			delete Revolving;
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_BTR40";
		};
	};
	
	
	class SG_BTR40_DSHK: SG_BTR40_DSHK_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelectionsTextures[] = {"sg_btr40\data\btr40ext_co.paa"};
		editorPreview = "sg_btr40\Data\preview\CUP_I_BTR40_MG_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_BTR40: SG_BTR40_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelectionsTextures[] = {"sg_btr40\data\btr40ext_co.paa"};
		editorPreview = "sg_btr40\Data\preview\CUP_I_BTR40_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_BTR40_2DSHK: SG_BTR40_DSHK_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 2;
		displayName = "$STR_BTR40_2DSHK";
		model = "\sg_btr40\btr40_2dshk.p3d";
		Icon = "\sg_btr40\data\icon_btr40_twindshk_ca.paa";
		hiddenSelectionsTextures[] = {"sg_btr40\data\btr40ext_co.paa"};
		threat[] = {0.5,0.3,0.8};
		transportSoldier = 1;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		
		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4)] execVM 'sg_btr40\scripts\multibarrel.sqf'";
		};
		
		class Turrets: Turrets
		{
			class FRONT_Turret: MainTurret
			{
				primaryGunner = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				commanding = 2;
				//LODTurnedOut = 1200;
				//LODTurnedIn = 1200;
				weapons[] = {"SG_DSHK_sparka"};
				magazines[] = {"rhs_mag_127x108mm_50","rhs_mag_127x108mm_50"};				
				memoryPointGun[] = {"front_usti_hlavne_1","front_usti_hlavne_2"};
				gunBeg = "front_usti_hlavne_1";
				gunEnd = "front_konec_hlavne_1";
				body = "FRONT_Turret";
				gun = "FRONT_Gun";
				hasgunner = 1;
				animationSourceBody = "FRONT_Turret";
				animationSourceGun = "FRONT_Gun";
				ejectDeadGunner = 0;
				memoryPointGunnerOptics = "FRONT_gunnerview";
				gunnerLeftHandAnimName = "FRONT_handle_l";
				gunnerRightHandAnimName = "FRONT_handle_r";
				turretInfoType = "RscWeaponZeroing";
				memoryPointsGetInGunner = "Pos cargo";
				memoryPointsGetInGunnerDir = "Pos cargo Dir";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerAction = "SG_Sparka_Gunner";
				gunnerInAction = "SG_Sparka_Gunner";				
				gunnerOpticsModel = "a3\weapons_f\reticle\optics_empty.p3d";
				
				initElev = 0;
				minElev = -15;
				maxElev = 45;
				initTurn = 0;
				minTurn = -360;
				maxTurn = 360;
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
		};
		
		class AnimationSources: AnimationSources
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
			
		};

		maximumLoad = 2200;
		
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				
				"sg_btr40\data\btr40ext.rvmat",
				"sg_btr40\data\btr40ext_damage.rvmat",
				"sg_btr40\data\btr40ext_destruct.rvmat",
				
				"sg_btr40\data\btr40int.rvmat",
				"sg_btr40\data\btr40int_damage.rvmat",
				"sg_btr40\data\btr40int_destruct.rvmat",
				
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat",
				
								
				"sg_btr40\data\tex4.rvmat",
				"sg_btr40\data\tex4_damage.rvmat",
				"sg_btr40\data\tex4_destruct.rvmat",
				
				
				"sg_btr40\data\dshk.rvmat",
				"sg_btr40\data\dshk_damage.rvmat",
				"sg_btr40\data\dshk_destruct.rvmat",
				
				"sg_btr40\data\mount.rvmat",
				"sg_btr40\data\mount.rvmat",
				"sg_btr40\data\mount_destruct.rvmat"
				
			};
		};
	};
	
	
	
	
	class SG_BTR40_M45: SG_BTR40_2DSHK
	{
		displayName = "$STR_BTR40_M45";
		model = "\sg_btr40\btr40_m45.p3d";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SG_M2_Quad"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				memoryPointGun[] = {"barrel_1","barrel_2","barrel_3","barrel_4"};
				animationSourceBody = "turret";
				animationSourceGun = "gun";
				body = "turret";
				gun = "gun";
				gunBeg = "barrel_1";
				gunEnd = "chamber_1";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerAction = "UNS_M113_Driver";
				gunnerOpticsModel = "\a3\Weapons_f\reticle\optics_empty";
				hasGunner = 1;
				crewVulnerable = 1;
				gunnerForceOptics = 0;
				outGunnerMayFire = 1;
				castGunnerShadow = 1;
				
				ejectDeadGunner = 0;
				
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				minElev = -25;
				maxElev = 65;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				TurretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.15;
					maxFov = 1.1;
					TurretInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex = 2;
				};
				class Hitpoints: Hitpoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						passThrough = 1;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						passThrough = 1;
					};
				};
			};
		};
		
		
		class Eventhandlers
		{
			fired="[(_this select 0),(_this select 1),(_this select 2),(_this select 3),(_this select 4)] execVM 'sg_btr40\scripts\multibarrel.sqf'";
		};
		
		
		class AnimationSources: AnimationSources
		{
			class cover
			{
				source = "user";
				initPhase = 0;
				animPeriod = 2;
			};
			class sightmount: cover{};

			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_M2_Quad";
			};
			
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M2_Quad";
			};
			
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M2_Quad";
			};
			
			class m2_MuzzleFlashROT: ReloadAnim
			{
				source = "ammoRandom";
				weapon = "SG_M2_Quad";
			};
		};
		
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				
				"sg_btr40\data\btr40ext.rvmat",
				"sg_btr40\data\btr40ext_damage.rvmat",
				"sg_btr40\data\btr40ext_destruct.rvmat",
				
				"sg_btr40\data\btr40int.rvmat",
				"sg_btr40\data\btr40int_damage.rvmat",
				"sg_btr40\data\btr40int_destruct.rvmat",
				
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat",
				
				"sg_btr40\data\skin3d.rvmat",
				"sg_btr40\data\skin3d_damage.rvmat",
				"sg_btr40\data\skin3d_destruct.rvmat",
				
				"sg_btr40\data\uaz.rvmat",
				"sg_btr40\data\uaz_damage.rvmat",
				"sg_btr40\data\uaz_destruct.rvmat",
				
				"sg_btr40\data\q50_parts.rvmat",
				"sg_btr40\data\q50_parts_damage.rvmat",
				"sg_btr40\data\q50_parts_destruct.rvmat",
				
				"a3\soft_f\offroad_01\data\m2.rvmat",
				"a3\soft_f\offroad_01\data\m2.rvmat",
				"sg_btr40\data\m2_destruct.rvmat",
				
				"sg_btr40\data\m1abrams_mg_mount.rvmat",
				"sg_btr40\data\m1abrams_mg_mount.rvmat",
				"sg_btr40\data\m1abrams_mg_mount_destruct.rvmat",
				
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\Offroad_01_proxy_destruct.rvmat"
				
			};
		};
		
		
		
		
		class UserActions: UserActions
		{
			class HatchClose
			{
				displayName = "$STR_CLOSE_HATCH";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HatchAction"" !=0)";
				statement = "this animate [""HatchAction"",0]";
			};
			class HatchOpen
			{
				displayName = "$STR_OPEN_HATCH";
				position = "zamerny";
				radius = 1;
				onlyForPlayer = 1;
				condition = "(player==driver this)and(this animationphase ""HatchAction"" !=1)";
				statement = "this animate [""HatchAction"",1]";
			};
			class OpenCover
			{
				displayName = "$STR_OPEN_COVER";
				position = "zamerny";
				showWindow = 0;
				radius = 3;
				priority = -1;
				onlyForPlayer = 0;
				condition = "this animationphase 'cover' < 0.1";
				statement = "this animate ['cover',1]; this animate ['sightmount',1]";
			};
			class CloseCover: OpenCover
			{
				displayName = "$STR_CLOSE_COVER";
				condition = "this animationphase 'cover' > 0.9";
				statement = "this animate ['cover',0]; this animate ['sightmount',0]";
			};
		};
		
		
		
	};
		
	
	
	class SG_BTR40_SPG: SG_BTR40_2DSHK
	{
		displayName = "$STR_BTR40_SPG";
		model = "\sg_btr40\btr40_spg.p3d";
		transportSoldier = 3;
		
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
				disableSoundAttenuation = 1;
				gunnerLeftHandAnimName = "otocHlaven";
				gunnerRightHandAnimName = "otocHlaven";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				weapons[] = {"BN_rhs_weap_SPG9"};
				magazines[]= {"BN_rhs_mag_pg9v"};
				minElev = -10;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				soundServo[] = {"A3\sounds_f\dummysound",9.999998e-007,1.0};
				gunnerAction = "Gunner_Offroad_01_AT_F";
				gunnerCompartments = "Compartment2";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunEnd = "konec hlavne";
				gunBeg = "usti hlavne";
				memoryPointGunnerOptics = "gunnerView";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgo9_scope";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2","TankGunnerOptics1"};
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				commanding = 1;
				primaryGunner = 1;
				optics = 1;
				gunnerForceOptics = 0;
				discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				TurretInfoType = "RscWeaponZeroing";
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
					initFov = 0.111;
					minFov = 0.111;
					maxFov = 0.111;
				};
			};

		};
		
		class Eventhandlers	{};
		
		class AnimationSources: AnimationSources
		{
			class SPG9_reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "BN_rhs_weap_SPG9";
			};
			class SPG9_reload
			{
				source = "reload";
				weapon = "BN_rhs_weap_SPG9";
			};
		};

		maximumLoad = 2200;
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_btr40\data\btr40ext.rvmat",
				"sg_btr40\data\btr40ext_damage.rvmat",
				"sg_btr40\data\btr40ext_destruct.rvmat",
				
				"sg_btr40\data\btr40int.rvmat",
				"sg_btr40\data\btr40int_damage.rvmat",
				"sg_btr40\data\btr40int_destruct.rvmat",
				
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat",
				
				"a3\soft_f\offroad_01\data\spg9.rvmat",
				"a3\soft_f\offroad_01\data\spg9.rvmat",
				"sg_btr40\data\spg9_destr.rvmat",
				
				"a3\soft_f\offroad_01\data\spg9_optics.rvmat",
				"a3\soft_f\offroad_01\data\spg9_optics.rvmat",
				"sg_btr40\data\spg9_optics_destr.rvmat",
				
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\Offroad_01_proxy_destruct.rvmat"
			};
		};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	};
	
	
	
	
	
	
	class SG_BTR40_ZU23: SG_BTR40_SPG
	{
		displayName = "$STR_BTR40_ZU";
		model = "\sg_btr40\btr40_zu23.p3d";
		transportSoldier = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -10;
				maxElev = 85;
				initElev = 0;
				weapons[] = {"BN_ZU23"};
				canUseScanner = 0;
				magazines[] = {"BN_40Rnd_23mm","BN_40Rnd_23mm"};
				gunnerAction = "RHS_Zu23_Cargo";
				selectionFireAnim = "zasleh";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu5";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				gunnerForceOptics = 0;
				
				ejectDeadGunner = 1;
				
				memoryPointGun[] = {"muzzle_1","muzzle_2"};
				memoryPointsGetInGunner = "pos cargo dir";
				memoryPointsGetInGunnerDir = "pos cargo";
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
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
			};
		};
		
		class Eventhandlers	{};
		
		class AnimationSources: AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "BN_ZU23";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
		};

		maximumLoad = 2200;
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_btr40\data\btr40ext.rvmat",
				"sg_btr40\data\btr40ext_damage.rvmat",
				"sg_btr40\data\btr40ext_destruct.rvmat",
				
				"sg_btr40\data\btr40int.rvmat",
				"sg_btr40\data\btr40int_damage.rvmat",
				"sg_btr40\data\btr40int_destruct.rvmat",
				
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default.rvmat",
				"A3\Data_F\default_destruct.rvmat",
				
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_destruct.rvmat",
				
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_damage.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\zu23\data\zu23_base_destruct.rvmat",
				
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\offroad_01_proxy.rvmat",
				"a3\soft_f\offroad_01\data\Offroad_01_proxy_destruct.rvmat"
			};
		};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
};