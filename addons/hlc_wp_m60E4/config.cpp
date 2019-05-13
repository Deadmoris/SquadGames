////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_m60E4\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:16:00 2019 : 'file' last modified on Tue Jan 09 06:18:34 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class M60E4_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\M60_first",1}};
		range = 15;
		volume = 1;
		rangeCurve[] = {{0,1},{15,0}};
	};
	class M60E4_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class M60E4_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class M60E4_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class M60E4_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class M60E4_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_forest",1}};
		volume = "1.4*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_forest_mid",1}};
		volume = " 1.4*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class M60E4_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_urban",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_urban_mid",1}};
		volume = "1.4*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_indoor",1}};
		volume = "1.4*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_indoor_mid",1}};
		volume = " 1.4*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class M60E4_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_meadows",1}};
		volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_meadows_mid",1}};
		volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_trees",1}};
		volume = "1.4*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M60E4_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m60E4\snd\m60_trees_mid",1}};
		volume = " 1.4*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M60E4_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class M60E4_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M60E4_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class M60E4_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class M60E4_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M60E4_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class M60e4_Shot_SoundSet
	{
		soundShaders[] = {"M60e4_closeShot_SoundShader","M60e4_midShot_SoundShader","M60e4_distShot_SoundShader","M60e4_Closure_SoundShader"};
		volumeFactor = 1.15;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class M60e4_tail_SoundSet
	{
		soundShaders[] = {"M60e4_tailDistant_SoundShader","M60e4_tailForest_SoundShader","M60e4_tailHouses_SoundShader","M60e4_tailInterior_SoundShader","M60e4_tailMeadows_SoundShader","M60e4_tailTrees_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "HLC_rifleTailDistanceFilter";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class M60e4_silencerShot_SoundSet
	{
		soundShaders[] = {"M60e4_silencerShot_SoundShader","M60e4_Closure_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class M60e4_silencerTail_SoundSet
	{
		soundShaders[] = {"M60e4_silencerTailTrees_SoundShader","M60e4_silencerTailForest_SoundShader","M60e4_silencerTailMeadows_SoundShader","M60e4_silencerTailHouses_SoundShader","M60e4_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		stereoStartDistance = 100;
		stereoRadius = 50;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
class CfgPatches
{
	class hlcweapons_m60e4
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_M60E4_ammobox","Weapon_hlc_lmg_M60E4","Weapon_hlc_lmg_M60"};
		weapons[] = {"hlc_lmg_M60E4","hlc_lmg_m60"};
		magazines[] = {};
		version = "13";
		author = "toadie";
	};
};
class cfgMods
{
	class Mod_Base;
	class Niarms_M60: Mod_Base
	{
		name = "NIArsenal: M60 GPMGs";
		picture = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_m60E4\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_OpticRail1913_short_MG;
class CfgVehicles
{
	class NATO_Box_Base;
	class Weapon_Base_F;
	class HLC_M60E4_ammobox: NATO_Box_Base
	{
		dlc = "Niarms_M60";
		scope = 2;
		vehicleClass = "Ammo";
		scopeCurator = 2;
		displayName = "HLC M60E4 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_100Rnd_762x51_B_M60E4
			{
				magazine = "hlc_100Rnd_762x51_B_M60E4";
				count = 30;
			};
			class _xx_hlc_100Rnd_762x51_T_M60E4
			{
				magazine = "hlc_100Rnd_762x51_T_M60E4";
				count = 30;
			};
			class _xx_hlc_100Rnd_762x51_M_M60E4
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_lmg_M60E4
			{
				weapon = "hlc_lmg_M60E4";
				count = 10;
			};
			class _xx_hlc_lmg_M60
			{
				weapon = "hlc_lmg_M60";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_optic_Holosight
			{
				name = "optic_Holosight";
				count = 10;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 10;
			};
			class _xx_optic_rco
			{
				name = "optic_rco";
				count = 10;
			};
			class _xx_optic_ACO_grn
			{
				name = "optic_ACO_grn";
				count = 10;
			};
		};
	};
	class Weapon_hlc_lmg_M60E4: Weapon_Base_F
	{
		dlc = "Niarms_M60";
		scope = 2;
		scopeCurator = 2;
		displayName = "M60E4";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_M60E4
			{
				weapon = "hlc_lmg_M60E4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_100Rnd_762x51_M_M60E4
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_m60: Weapon_Base_F
	{
		dlc = "Niarms_M60";
		scope = 2;
		scopeCurator = 2;
		displayName = "M60";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_m60
			{
				weapon = "hlc_lmg_m60";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_100Rnd_762x51_M_M60E4
			{
				magazine = "hlc_100Rnd_762x51_M_M60E4";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_M60e4_base: Rifle_Base_F
	{
		dlc = "Niarms_M60";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		scope = 1;
		cursor = "mg";
		cursoraim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.5;
		magazines[] = {"hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4","150Rnd_762x51_Box","150Rnd_762x51_Box_Tracer"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
			class AmmoBeltEject
			{
				directionName = "linkeject_end";
				effectName = "MachineGunEject2";
				positionName = "linkeject_start";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{};
			class CowsSlot
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot{};
		};
		descriptionShort = "Light Machine Gun<br/>Caliber: 7.62mm";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		dexterity = 1.8;
		bullet1[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_01",0.398107,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_02",0.281838,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_03",0.281838,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_04",0.281838,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_02",0.398107,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_03",0.398107,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\7_62\metal_762_04",0.398107,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_01",0.281838,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_02",0.281838,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_03",0.281838,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\dirt_762_04",0.281838,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\grass_762_01",0.281838,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
				closure2[] = {"\hlc_wp_M60E4\snd\m60_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60E4_Shot_SoundSet","M60E4_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
			};
			reloadTime = 0.105;
			dispersion = 0.000261799;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 0.5;
			minRange = 10;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 25;
			minRangeProbab = 0.1;
			midRange = 50;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class medium_burst: close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class veryfar: close
		{
			burst = 5;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 2;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 1;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 800;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.2;
		};
		class toofar_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		class toofar_optic2: far_optic2
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 2;
			minRange = 800;
			minRangeProbab = 0.4;
			midRange = 1200;
			midRangeProbab = 0.6;
			maxRange = 1600;
			maxRangeProbab = 0.1;
		};
		drysound[] = {"\hlc_core\sound\empty_machineguns",1,1,10};
		reloadmagazinesound[] = {"\hlc_wp_M60E4\snd\m60_reload",1,1,10};
	};
	class hlc_lmg_M60E4: hlc_M60e4_base
	{
		maxZeroing = 1100;
		scope = 2;
		author = "Bohemia Interactive, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 17;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_overheating_allowbarrelswap = 1;
		hasBipod = 1;
		deployedpivot = "deploypivot";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		model = "\hlc_wp_M60E4\mesh\M60e4.p3d";
		hiddenSelections[] = {"Main","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\m60e4_co.paa","hlc_wp_m60e4\tex\m249_para_co.paa"};
		reloadaction = "HLC_GestureReloadM60";
		picture = "\hlc_wp_M60E4\tex\ui\gear_m60e4_x_ca";
		displayName = "M60E4";
		discretedistance[] = {300,400,500,600,700,800,900,1000,1100};
		cameradir = "aim_point";
		discreteDistanceCameraPoint[] = {"eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10","eye11"};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		inertia = 0.96;
		dexterity = 0.88815856;
		aimTransitionSpeed = 0.62171096;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m60e4\gesture\m60e4.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 212;
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "US Ordnance M60E4";
		};
	};
	class hlc_lmg_m60: hlc_M60e4_base
	{
		maxZeroing = 1100;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_bipod = 1;
		AGM_Overheating_allowSwapBarrel = 1;
		tmr_autorest_deployable = 1;
		hasBipod = 1;
		deployedpivot = "deploypivot";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		bg_bipod = 1;
		cse_bipod = 1;
		author = "Twinke Masta, Millenia, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 22;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		scope = 2;
		inertia = 1.05;
		dexterity = 0.85710883;
		aimTransitionSpeed = 0.5999762;
		displayName = "M60";
		picture = "\hlc_wp_M60E4\tex\ui\gear_m60_x_ca";
		model = "\hlc_wp_M60E4\mesh\m60classic\M60.p3d";
		hiddenSelections[] = {"Box","Reciever","Stock","Fore_opaq","Bipod_transp"};
		hiddenSelectionsTextures[] = {"hlc_wp_m60e4\tex\mil m60\ammobox_co.paa","hlc_wp_m60e4\tex\mil m60\body_co.paa","hlc_wp_m60e4\tex\mil m60\body2_co.paa","hlc_wp_m60e4\tex\mil m60\fore_co.paa","hlc_wp_m60e4\tex\mil m60\fore_ca.paa"};
		reloadaction = "HLC_GestureReloadM60";
		discretedistance[] = {300,400,500,600,700,800,900,1000,1100};
		cameradir = "aim_point";
		discreteDistanceCameraPoint[] = {"eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10","eye11"};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m60e4\gesture\m60e4.rtm"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "US Ordnance M60";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 231;
		};
	};
};
