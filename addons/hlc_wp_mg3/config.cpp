////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_mg3\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:16:30 2019 : 'file' last modified on Tue Jan 09 07:52:09 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class MG42_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\mg42\mg42_first",1}};
		range = 10;
		volume = 1.2;
		rangeCurve[] = {{0,1},{10,0}};
	};
	class MG42_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_close1",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_close2",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_close3",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MG42_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid1",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid2",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_mid3",1}};
		volume = 1.672;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class MG42_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist1",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist2",1},{"hlc_wp_MG3\snd\soundshaders\mg42\MG42_dist3",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class MG42_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class MG42_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest",1}};
		volume = "1*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG42_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class MG42_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\mg42\mg42_indoor",1}};
		volume = "1*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class MG42_tailMeadows_SoundShader
	{
		samples[] = {{"\hlc_wp_MG3\snd\soundshaders\mg42\mg42_meadow",1}};
		volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG42_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees",1}};
		volume = "1*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG42_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MG42_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MG42_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MG42_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MG42_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MG42_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MG3_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_first",1}};
		range = 10;
		volume = 1.2;
	};
	class MG3_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_close1",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_close2",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_close3",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MG3_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid1",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid2",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_mid3",1}};
		volume = 1.672;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class MG3_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist1",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist2",1},{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_dist3",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class MG3_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class MG3_tailForest_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest",1}};
		volume = "1*((1-interior/1.4)*Forest/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG3_tailHouses_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		range = 1500;
		rangeCurve[] = {{0,1},{250,0.3},{1500,0}};
		limitation = 1;
	};
	class MG3_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_MG3\snd\soundshaders\MG3\MG3_indoor",1}};
		volume = "1*((interior)*0.65)";
		range = 350;
		rangeCurve[] = {{0,1},{50,0.4},{100,0.2},{350,0}};
		limitation = 1;
	};
	class MG3_tailMeadows_SoundShader
	{
		samples[] = {{"\hlc_wp_MG3\snd\soundshaders\MG3\MG3_meadow",1}};
		volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG3_tailTrees_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees",1}};
		volume = "1*((1-interior/1.4)*trees/3)";
		range = 2000;
		rangeCurve[] = {{0,1},{2000,0}};
		limitation = 1;
	};
	class MG3_silencerShot_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",1},{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class MG3_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MG3_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MG3_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MG3_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MG3_silencerTailTrees_SoundShader
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
	class MG42_Shot_SoundSet
	{
		soundShaders[] = {"MG42_closeShot_SoundShader","MG42_midShot_SoundShader","MG42_distShot_SoundShader","MG42_Closure_SoundShader"};
		volumeFactor = 1.2;
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
	class MG42_tail_SoundSet
	{
		soundShaders[] = {"MG42_tailDistant_SoundShader","MG42_tailForest_SoundShader","MG42_tailHouses_SoundShader","MG42_tailInterior_SoundShader","MG42_tailMeadows_SoundShader","MG42_tailTrees_SoundShader"};
		volumeFactor = 1;
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
	class MG3_Shot_SoundSet
	{
		soundShaders[] = {"MG3_closeShot_SoundShader","MG3_midShot_SoundShader","MG3_distShot_SoundShader","MG3_Closure_SoundShader"};
		volumeFactor = 1.2;
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
	class MG3_tail_SoundSet
	{
		soundShaders[] = {"MG3_tailDistant_SoundShader","MG3_tailForest_SoundShader","MG3_tailHouses_SoundShader","MG3_tailInterior_SoundShader","MG3_tailMeadows_SoundShader","MG3_tailTrees_SoundShader"};
		volumeFactor = 1;
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
};
class CfgPatches
{
	class hlcweapons_MG3s
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","cba_jr","hlcweapons_core"};
		units[] = {"HLC_MG3_ammobox","HLC_MG42_ammobox","Weapon_hlc_lmg_MG42","Weapon_hlc_lmg_mg42_bakelite","Weapon_hlc_lmg_MG42KWS_t","Weapon_hlc_lmg_MG42KWS_g","Weapon_hlc_lmg_MG42KWS_b","Weapon_hlc_lmg_MG3","Weapon_hlc_lmg_MG3_optic","Weapon_hlc_lmg_MG3KWS_g","Weapon_hlc_lmg_MG3KWS_b","Weapon_hlc_lmg_MG3KWS"};
		weapons[] = {"hlc_lmg_MG42","hlc_lmg_mg42_bakelite","hlc_lmg_MG42KWS_t","hlc_lmg_MG42KWS_g","hlc_lmg_MG42KWS_B","hlc_lmg_MG3","hlc_lmg_MG3_optic","hlc_lmg_MG3KWS","hlc_lmg_MG3KWS_b","hlc_lmg_MG3KWS_g"};
		magazines[] = {"hlc_50Rnd_792x57_B_MG42","hlc_100Rnd_792x57_B_MG42","hlc_200Rnd_792x57_B_MG42","hlc_50Rnd_792x57_M_MG42","hlc_100Rnd_792x57_M_MG42","hlc_200Rnd_792x57_M_MG42","hlc_50Rnd_792x57_T_MG42","hlc_100Rnd_792x57_T_MG42","hlc_200Rnd_792x57_T_MG42","hlc_50Rnd_792x57_AP_MG42","hlc_100Rnd_792x57_AP_MG42","hlc_200Rnd_792x57_AP_MG42","hlc_50Rnd_762x51_B_MG3","hlc_100Rnd_762x51_B_MG3","hlc_250Rnd_762x51_B_MG3","hlc_50Rnd_762x51_M_MG3","hlc_100Rnd_762x51_M_MG3","hlc_250Rnd_762x51_M_MG3","hlc_50Rnd_762x51_Barrier_MG3","hlc_100Rnd_762x51_Barrier_MG3","hlc_250Rnd_762x51_Barrier_MG3","hlc_50Rnd_762x51_T_MG3","hlc_100Rnd_762x51_T_MG3","hlc_250Rnd_762x51_T_MG3"};
		version = "1.2";
		author = "toadie";
	};
};
class CfgMods
{
	class Mod_Base;
	class Niarms_MG3: Mod_Base
	{
		name = "NIArsenal: MG3 GPMGs";
		picture = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_mg3\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913_short_MG;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadMG42 = "HLC_GestureReloadMG42";
		HLC_GestureReloadMG3 = "HLC_GestureReloadMG3";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			HLC_GestureReloadMG42[] = {"HLC_GestureReloadMG42","Gesture"};
			HLC_GestureReloadMG3[] = {"HLC_GestureReloadMG3","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReloadMG42[] = {"HLC_GestureReloadMG42_Prone","Gesture"};
			HLC_GestureReloadMG3[] = {"HLC_GestureReloadMG3_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadMG42[] = {"HLC_GestureReloadMG42_Context","Gesture"};
			HLC_GestureReloadMG3[] = {"HLC_GestureReloadMG3_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadMG42[] = {"HLC_GestureReloadMG42_Context","Gesture"};
			HLC_GestureReloadMG3[] = {"HLC_GestureReloadMG3_Context","Gesture"};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				HLC_GestureReloadMG42[] = {"HLC_GestureReloadMG42_Prone","Gesture"};
				HLC_GestureReloadMG3[] = {"HLC_GestureReloadMG3_Prone","Gesture"};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class HLC_GestureReloadMG42: Default
		{
			file = "hlc_wp_mg3\anim\reload_mg42_standing.rtm";
			speed = -10.233334;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class HLC_GestureReloadMG42_Prone: Default
		{
			file = "hlc_wp_mg3\anim\reload_mg42_prone.rtm";
			speed = -10.233334;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class HLC_GestureReloadMG42_Context: HLC_GestureReloadMG42
		{
			mask = "handsWeapon_context";
		};
		class HLC_GestureReloadMG3: Default
		{
			file = "hlc_wp_mg3\anim\reload_mg3_standing.rtm";
			speed = -10.4;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class HLC_GestureReloadMG3_Prone: Default
		{
			file = "hlc_wp_mg3\anim\reload_mg3_prone.rtm";
			speed = -10.5;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.029315,0,0.120521,0,0.14006,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.146579,1,0.16612,0,0.94462,0,0.97068,1};
		};
		class HLC_GestureReloadMG3_Context: HLC_GestureReloadMG3
		{
			mask = "handsWeapon_context";
		};
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class HLC_MG42_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		vehicleClass = "Ammo";
		scopeCurator = 2;
		displayName = "HLC MG42 Supply Box";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 12;
			};
			class _xx_hlc_50Rnd_792x57_M_MG42
			{
				magazine = "hlc_50Rnd_792x57_M_MG42";
				count = 12;
			};
			class _xx_hlc_50Rnd_792x57_T_MG42
			{
				magazine = "hlc_50Rnd_792x57_T_MG42";
				count = 12;
			};
			class _xx_hlc_50Rnd_792x57_AP_MG42
			{
				magazine = "hlc_50Rnd_792x57_AP_MG42";
				count = 12;
			};
			class _xx_hlc_100Rnd_792x57_B_MG42
			{
				magazine = "hlc_100Rnd_792x57_B_MG42";
				count = 8;
			};
			class _xx_hlc_100Rnd_792x57_M_MG42
			{
				magazine = "hlc_100Rnd_792x57_M_MG42";
				count = 8;
			};
			class _xx_hlc_100Rnd_792x57_T_MG42
			{
				magazine = "hlc_100Rnd_792x57_T_MG42";
				count = 8;
			};
			class _xx_hlc_100Rnd_792x57_AP_MG42
			{
				magazine = "hlc_100Rnd_792x57_AP_MG42";
				count = 8;
			};
			class _xx_hlc_200Rnd_792x57_B_MG42
			{
				magazine = "hlc_200Rnd_792x57_B_MG42";
				count = 4;
			};
			class _xx_hlc_200Rnd_792x57_M_MG42
			{
				magazine = "hlc_200Rnd_792x57_M_MG42";
				count = 4;
			};
			class _xx_hlc_200Rnd_792x57_T_MG42
			{
				magazine = "hlc_200Rnd_792x57_T_MG42";
				count = 4;
			};
			class _xx_hlc_200Rnd_792x57_AP_MG42
			{
				magazine = "hlc_200Rnd_792x57_AP_MG42";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_lmg_MG42
			{
				weapon = "hlc_lmg_MG42";
				count = 5;
			};
			class _xx_hlc_lmg_mg42_bakelite
			{
				weapon = "hlc_lmg_mg42_bakelite";
				count = 5;
			};
			class _xx_hlc_lmg_MG42KWS_t
			{
				weapon = "hlc_lmg_MG42KWS_t";
				count = 3;
			};
			class _xx_hlc_lmg_MG42KWS_g
			{
				weapon = "hlc_lmg_MG42KWS_g";
				count = 3;
			};
			class _xx_hlc_lmg_mg42kws_b
			{
				weapon = "hlc_lmg_mg42kws_b";
				count = 3;
			};
		};
	};
	class HLC_MG3_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		vehicleClass = "Ammo";
		scopeCurator = 2;
		displayName = "HLC MG3 Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_762x51_B_MG3
			{
				magazine = "hlc_50Rnd_762x51_B_MG3";
				count = 12;
			};
			class _xx_hlc_50Rnd_762x51_M_MG3
			{
				magazine = "hlc_50Rnd_762x51_M_MG3";
				count = 12;
			};
			class _xx_hlc_50Rnd_762x51_T_MG3
			{
				magazine = "hlc_50Rnd_762x51_T_MG3";
				count = 12;
			};
			class _xx_hlc_50Rnd_762x51_Barrier_MG3
			{
				magazine = "hlc_50Rnd_762x51_Barrier_MG3";
				count = 12;
			};
			class _xx_hlc_100Rnd_762x51_B_MG3
			{
				magazine = "hlc_100Rnd_762x51_B_MG3";
				count = 8;
			};
			class _xx_hlc_100Rnd_762x51_M_MG3
			{
				magazine = "hlc_100Rnd_762x51_M_MG3";
				count = 8;
			};
			class _xx_hlc_100Rnd_762x51_T_MG3
			{
				magazine = "hlc_100Rnd_762x51_T_MG3";
				count = 8;
			};
			class _xx_hlc_100Rnd_762x51_Barrier_MG3
			{
				magazine = "hlc_100Rnd_762x51_Barrier_MG3";
				count = 8;
			};
			class _xx_hlc_250Rnd_762x51_B_MG3
			{
				magazine = "hlc_250Rnd_762x51_B_MG3";
				count = 4;
			};
			class _xx_hlc_250Rnd_762x51_M_MG3
			{
				magazine = "hlc_250Rnd_762x51_M_MG3";
				count = 4;
			};
			class _xx_hlc_250Rnd_762x51_T_MG3
			{
				magazine = "hlc_250Rnd_762x51_T_MG3";
				count = 4;
			};
			class _xx_hlc_250Rnd_762x51_Barrier_MG3
			{
				magazine = "hlc_250Rnd_762x51_Barrier_MG3";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_lmg_MG3
			{
				weapon = "hlc_lmg_MG3";
				count = 4;
			};
			class _xx_hlc_lmg_MG3_optic
			{
				weapon = "hlc_lmg_MG3_optic";
				count = 4;
			};
			class _xx_hlc_lmg_MG3KWS
			{
				weapon = "hlc_lmg_MG3KWS";
				count = 4;
			};
			class _xx_hlc_lmg_MG3KWS_g
			{
				weapon = "hlc_lmg_MG3KWS_g";
				count = 4;
			};
			class _xx_hlc_lmg_MG3KWS_b
			{
				weapon = "hlc_lmg_MG3KWS_b";
				count = 4;
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
	class Weapon_Base_F;
	class Weapon_hlc_lmg_MG42: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG42";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG42
			{
				weapon = "hlc_lmg_MG42";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_mg42_bakelite: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG42(Bakelite)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_mg42_bakelite
			{
				weapon = "hlc_lmg_mg42_bakelite";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG42KWS_t: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG42KWS(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG42KWS_t
			{
				weapon = "hlc_lmg_MG42KWS_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG42KWS_b: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG42KWS(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG42KWS_b
			{
				weapon = "hlc_lmg_MG42KWS_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG42KWS_g: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG42KWS(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG42KWS_g
			{
				weapon = "hlc_lmg_MG42KWS_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG3: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG3";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG3
			{
				weapon = "hlc_lmg_MG3";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_792x57_B_MG42
			{
				magazine = "hlc_50Rnd_792x57_B_MG42";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG3_optic: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "Mg M/62";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG3_optic
			{
				weapon = "hlc_lmg_MG3_optic";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_762x51_M_MG3
			{
				magazine = "hlc_50Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG3KWS: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG3KWS(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG3KWS
			{
				weapon = "hlc_lmg_MG3KWS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_762x51_M_MG3
			{
				magazine = "hlc_50Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG3KWS_b: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG3KWS(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG3KWS_b
			{
				weapon = "hlc_lmg_MG3KWS_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_762x51_M_MG3
			{
				magazine = "hlc_50Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_lmg_MG3KWS_g: Weapon_Base_F
	{
		dlc = "Niarms_MG3";
		scope = 2;
		scopeCurator = 2;
		displayName = "MG3KWS(Green)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_lmg_MG3KWS_g
			{
				weapon = "hlc_lmg_MG3KWS_g";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_50Rnd_762x51_M_MG3
			{
				magazine = "hlc_50Rnd_762x51_M_MG3";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_50Rnd_792x57_B_MG42: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_792x57_Ball";
		count = 50;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Type: Boat-Tailed Full-Metal Jacket<br />Rounds: 50";
		displayname = "7.92mm FMJ 50Rnd Gurt34-Linked Belt";
		model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
		initspeed = 759.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 40;
		displaynameshort = "FMJ";
		nameSound = "mgun";
	};
	class hlc_100Rnd_792x57_B_MG42: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Type: Boat-Tailed Full-Metal Jacket<br />Rounds: 100";
		displayname = "7.92mm FMJ 100Rnd Gurt34-Linked Belt";
		mass = 72;
	};
	class hlc_200Rnd_792x57_B_MG42: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm Ss Patrone<br />Type: Boat-Tailed Full-Metal Jacket<br />Rounds: 200";
		displayname = "7.92mm FMJ 200Rnd Gurt34-Linked Belt";
		mass = 120;
	};
	class hlc_50Rnd_792x57_M_MG42: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_792x57_Tracer";
		descriptionshort = "Caliber: 7.92x57mm SmKv/SmK L'spur<br />Type: Spitzgescho� mit Kern (Enhanced Penetrator FMJ)/Incendiary-tip Tracer<br />Rounds: 50";
		displayname = "7.92mm EPR 50Rnd Gurt34-Linked Belt(Tracers every 4)";
		initspeed = 884.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 40;
		displaynameshort = "EPR/Tracer";
	};
	class hlc_100Rnd_792x57_M_MG42: hlc_50Rnd_792x57_M_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm SmKv/SmK L'spur<br />Type: Spitzgescho� mit Kern (Enhanced Penetrator FMJ)/Incendiary-tip Tracer<br />Rounds: 100";
		displayname = "7.92mm EPR 100Rnd Gurt34-Linked Belt(Tracers every 4)";
		mass = 72;
	};
	class hlc_200Rnd_792x57_M_MG42: hlc_50Rnd_792x57_M_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm SmKv/SmK L'spur<br />Type: Spitzgescho� mit Kern (Enhanced Penetrator FMJ)/Incendiary-tip Tracer<br />Rounds: 200";
		displayname = "7.92mm EPR 200Rnd Gurt34-Linked Belt(Tracers every 4)";
		mass = 120;
	};
	class hlc_50Rnd_792x57_T_MG42: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_792x57_Tracer";
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Type: Spitzgescho� mit Kern Leuchtspur (Spitzer with Tracer)<br />Rounds: 50";
		displayname = "7.92mm Tracer 50Rnd Gurt34-Linked Belt";
		model = "hlc_wp_mg3\mesh\magazine\magazine_42.p3d";
		initspeed = 884.9;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 40;
		displaynameshort = "SmKL' Tracer";
	};
	class hlc_100Rnd_792x57_T_MG42: hlc_50Rnd_792x57_T_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Type: Spitzgescho� mit Kern Leuchtspur (Spitzer with Tracer)<br />Rounds: 100";
		displayname = "7.92mm Tracer 100Rnd Gurt34-Linked Belt";
		mass = 72;
	};
	class hlc_200Rnd_792x57_T_MG42: hlc_50Rnd_792x57_T_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm SmK L'Spur<br />Type: Spitzgescho� mit Kern Leuchtspur (Spitzer with Tracer)<br />Rounds: 200";
		displayname = "7.92mm Tracer 200Rnd Gurt34-Linked Belt";
		mass = 120;
	};
	class hlc_50Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_792x57_AP";
		descriptionshort = "Caliber: 7.92x57mm SmKH <br />Type: Spitzgescho� mit Hartkern (Spitzer with Hard Core-Armor-Piercing)<br />Rounds: 50";
		displayname = "7.92mm AP 50Rnd Gurt34-Linked Belt";
		initspeed = 853.44;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg42AP_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 24;
		displaynameshort = "SmKH AP";
	};
	class hlc_100Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_AP_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.92x57mm SmKH <br />Type: Spitzgescho� mit Hartkern (Spitzer with Hard Core-Armor-Piercing)<br />Rounds: 100";
		displayname = "7.92mm AP 100Rnd Gurt34-Linked Belt";
		mass = 48;
	};
	class hlc_200Rnd_792x57_AP_MG42: hlc_50Rnd_792x57_AP_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 200;
		descriptionshort = "Caliber: 7.92x57mm SmKH <br />Type: Spitzgescho� mit Hartkern (Spitzer with Hard Core-Armor-Piercing)<br />Rounds: 200";
		displayname = "7.92mm AP 200Rnd Gurt34-Linked Belt";
		mass = 96;
	};
	class hlc_50Rnd_762x51_B_MG3: hlc_50Rnd_792x57_B_MG42
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd DM6-Linked Belt";
		model = "hlc_wp_mg3\mesh\magazine\magazine.p3d";
		initspeed = 853;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 20;
		displaynameshort = "M80A1 EPR";
	};
	class hlc_100Rnd_762x51_B_MG3: hlc_50Rnd_762x51_B_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 100";
		displayname = "7.62mm EPR 100Rnd DM6-Linked Belt";
		mass = 48;
	};
	class hlc_250Rnd_762x51_B_MG3: hlc_50Rnd_762x51_B_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 250";
		displayname = "7.62mm EPR 250Rnd DM6-Linked Belt";
		mass = 110;
	};
	class hlc_50Rnd_762x51_M_MG3: hlc_50Rnd_762x51_B_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd DM6-Linked Belt(Tracers every 4)";
		initspeed = 853;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 20;
		displaynameshort = "EPR/Tracer";
	};
	class hlc_100Rnd_762x51_M_MG3: hlc_50Rnd_762x51_M_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
		displayname = "7.62mm EPR 100Rnd DM6-Linked Belt(Tracers every 4)";
		mass = 48;
	};
	class hlc_250Rnd_762x51_M_MG3: hlc_50Rnd_762x51_M_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 250";
		displayname = "7.62mm EPR 250Rnd DM6-Linked Belt(Tracers every 4)";
		mass = 110;
	};
	class hlc_50Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_B_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_Barrier";
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm SOST 50Rnd DM6-Linked Belt(Tracers every 4)";
		initspeed = 815;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 20;
		displaynameshort = "Mk319/Tracer";
	};
	class hlc_100Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_Barrier_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 100";
		displayname = "7.62mm SOST 100Rnd DM6-Linked Belt(Tracers every 4)";
		mass = 48;
	};
	class hlc_250Rnd_762x51_Barrier_MG3: hlc_50Rnd_762x51_Barrier_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 250";
		displayname = "7.62mm SOST 250Rnd DM6-Linked Belt(Tracers every 4)";
		mass = 110;
	};
	class hlc_50Rnd_762x51_T_MG3: hlc_50Rnd_762x51_B_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 50";
		displayname = "7.62mm Tracer 50Rnd DM6-Linked Belt";
		initspeed = 853;
		lastroundstracer = 5;
		picture = "\hlc_wp_mg3\tex\ui\m_mg3tracer_ca.paa";
		scope = 2;
		tracersevery = 1;
		mass = 20;
		displaynameshort = "M62A1 Tracer";
	};
	class hlc_100Rnd_762x51_T_MG3: hlc_50Rnd_762x51_T_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 100;
		descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 100";
		displayname = "7.62mm Tracer 100Rnd DM6-Linked Belt";
		mass = 48;
	};
	class hlc_250Rnd_762x51_T_MG3: hlc_50Rnd_762x51_T_MG3
	{
		dlc = "Niarms_MG3";
		author = "Toadie, Spartan0536";
		count = 250;
		descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 250";
		displayname = "7.62mm Tracer 250Rnd DM6-Linked Belt";
		mass = 110;
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
	class hlc_MG42_base: Rifle_Base_F
	{
		dlc = "Niarms_MG3";
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_overheating_allowbarrelswap = 1;
		agm_bipod = 1;
		hasBipod = 1;
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		TMR_acc_bipod = 1;
		scope = 1;
		cursor = "mg";
		cursoraim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.5;
		deployedpivot = "deploypoint";
		magazines[] = {"hlc_50Rnd_792x57_B_MG42","hlc_50Rnd_792x57_M_MG42","hlc_50Rnd_792x57_T_MG42","hlc_100Rnd_792x57_B_MG42","hlc_100Rnd_792x57_M_MG42","hlc_100Rnd_792x57_T_MG42","hlc_200Rnd_792x57_B_MG42","hlc_200Rnd_792x57_M_MG42","hlc_200Rnd_792x57_T_MG42","hlc_50Rnd_792x57_AP_MG42","hlc_100Rnd_792x57_AP_MG42","hlc_200Rnd_792x57_AP_MG42"};
		maxRecoilSway = 0.015;
		swayDecaySpeed = 1.25;
		recoil = "recoil_zafir";
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"","","","",""};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
			};
			class CowsSlot
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.92mm";
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
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_Mg3\snd\mg3_first",1,1,10};
				closure2[] = {"\hlc_wp_Mg3\snd\mg3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MG42_Shot_SoundSet","MG42_Tail_SoundSet"};
			};
			reloadtime = "(60/1200)";
			dispersion = 0.00072725;
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
			aiRateOfFire = 0.05;
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
			aiRateOfFire = 0.05;
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
			aiRateOfFire = 0.05;
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
			aiRateOfFire = 0.05;
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
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
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
			requiredOpticType = 2;
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
		drysound[] = {"\hlc_wp_mg3\snd\mg3_dryfire",1,1,10};
		reloadmagazinesound[] = {"\hlc_wp_mg3\snd\mg42_reload",0.8,1,18};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
	};
	class hlc_lmg_MG42: hlc_MG42_base
	{
		maxZeroing = 1100;
		scope = 2;
		author = "Toadie";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		model = "\hlc_wp_MG3\mesh\mg42\mg42.p3d";
		reloadaction = "HLC_GestureReloadMG42";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg42_ca";
		displayName = "Mauser MG42";
		discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2wood_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.paa"};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG42.rtm"};
		dexterity = 0.42324796;
		aimTransitionSpeed = 0.29627356;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 242;
		};
		inertia = 1.36;
		class Library
		{
			libTextDesc = "MG42";
		};
	};
	class hlc_lmg_mg42_bakelite: hlc_lmg_mg42
	{
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg42\mg42_a.p3d";
		displayName = "Mauser MG42(Bakelite)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\MG42reciever_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.paa"};
	};
	class hlc_lmg_MG42KWS_t: hlc_lmg_MG42
	{
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg42\mg42kws.p3d";
		displayName = "Rheinmetall MG42-KWS(Tan)";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG3kws.rtm"};
		picture = "\hlc_wp_mg3\tex\ui\gear_mg42kws_ca";
		dexterity = 0.5571088;
		aimTransitionSpeed = 0.38997617;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 193;
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
		};
		inertia = 1.2;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverKWS_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1KWS_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.paa"};
	};
	class hlc_lmg_mg42kws_g: hlc_lmg_mg42kws_t
	{
		author = "Toadie";
		displayName = "Rheinmetall MG42-KWS(Green)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa","\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.paa"};
	};
	class hlc_lmg_mg42kws_b: hlc_lmg_MG42KWS_t
	{
		author = "Toadie";
		displayName = "Rheinmetall MG42-KWS(Black)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa","\hlc_wp_mg3\tex\standard\mg42gurtrommel_co.paa"};
	};
	class hlc_lmg_MG3: hlc_MG42_base
	{
		maxZeroing = 1100;
		scope = 2;
		author = "Toadie";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 431.8;
		model = "\hlc_wp_MG3\mesh\mg3\mg3.p3d";
		reloadaction = "HLC_GestureReloadMG3";
		descriptionShort = "General-Purpose Machine Gun<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg3_ca";
		displayName = "Rheinmetall MG3";
		reloadmagazinesound[] = {"\hlc_wp_mg3\snd\mg3_reload",0.8,1,18};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		dexterity = 0.45710883;
		aimTransitionSpeed = 0.31997618;
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\MG3reciever_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2plastic_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
		magazines[] = {"hlc_50Rnd_762x51_B_MG3","hlc_50Rnd_762x51_M_MG3","hlc_50Rnd_762x51_Barrier_MG3","hlc_50Rnd_762x51_T_MG3","hlc_100Rnd_762x51_B_MG3","hlc_100Rnd_762x51_M_MG3","hlc_100Rnd_762x51_Barrier_MG3","hlc_100Rnd_762x51_T_MG3","hlc_250Rnd_762x51_B_MG3","hlc_250Rnd_762x51_B_MG3","hlc_250Rnd_762x51_M_MG3","hlc_250Rnd_762x51_Barrier_MG3","hlc_250Rnd_762x51_T_MG3","hlc_100Rnd_762x51_M_M60E4","hlc_100Rnd_762x51_B_M60E4","hlc_100Rnd_762x51_Barrier_M60E4","hlc_100Rnd_762x51_T_M60E4","hlc_100Rnd_762x51_Mdim_M60E4"};
		discretedistance[] = {200,300,400,500,600,700,800,900,1000,1100};
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		discretedistanceinitindex = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG42.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 220;
		};
		inertia = 1.25;
		class FullAuto: FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"MG3_Shot_SoundSet","MG3_Tail_SoundSet"};
			};
			reloadtime = "(60/1000)";
			dispersion = 0.0008727;
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
			aiRateOfFire = 0.06;
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
			aiRateOfFire = 0.06;
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
			aiRateOfFire = 0.06;
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
			aiRateOfFire = 0.06;
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
			aiRateOfFire = 0.06;
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.8;
			maxRange = 400;
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
		class Library
		{
			libTextDesc = "MG3";
		};
	};
	class hlc_lmg_MG3_optic: hlc_lmg_MG3
	{
		scope = 2;
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg3\mg3_later.p3d";
		picture = "\hlc_wp_mg3\tex\ui\gear_m62_ca";
		displayName = "Rheinmetall Mg M/62";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\MG3recieverDane_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 225;
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
		};
	};
	class hlc_lmg_MG3KWS: hlc_lmg_MG3
	{
		scope = 2;
		author = "Toadie";
		model = "\hlc_wp_MG3\mesh\mg3\mg3kws.p3d";
		picture = "\hlc_wp_mg3\tex\ui\gear_mg3kws_ca";
		displayName = "Rheinmetall MG3-KWS(Tan)";
		dexterity = 0.5571088;
		aimTransitionSpeed = 0.38997617;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\MG3recieverkws_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_Co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_MG3\anim\handpose_MG3kws.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 240;
			class CowsSlot: asdg_OpticRail1913_short_MG
			{
				iconPosition[] = {0.5,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail{};
		};
		inertia = 1.2;
	};
	class hlc_lmg_MG3KWS_b: hlc_lmg_MG3KWS
	{
		author = "Toadie";
		displayName = "Rheinmetall MG3-KWS(Black)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_black_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_black_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
	};
	class hlc_lmg_MG3KWS_g: hlc_lmg_MG3KWS
	{
		author = "Toadie";
		displayName = "Rheinmetall MG3-KWS(Green)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","Camo5"};
		hiddenSelectionsTextures[] = {"\hlc_wp_mg3\tex\Standard\mg3recieverkws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap1kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap2kws_green_co.paa","\hlc_wp_mg3\tex\Standard\partsmap3_green_co.paa","\hlc_wp_mg3\tex\standard\MG3_drum_co.paa"};
	};
};
