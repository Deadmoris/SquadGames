////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_fal\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:15:42 2019 : 'file' last modified on Mon Jan 08 15:09:10 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class FAL_Closure_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\generic\fal_first",1}};
		range = 25;
		volume = 0.87;
		rangeCurve[] = {{0,1},{25,0}};
	};
	class FAL_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\FAL_close",1}};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{2500,0}};
	};
	class FAL_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class FAL_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class FAL_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_forest",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_forest_mid",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class FAL_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_urban",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_urban_mid",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class FAL_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor",1}};
		volume = " 1.3*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class FAL_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor_mid",1}};
		volume = " 1.3*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class FAL_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows_mid",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class FAL_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_trees",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_trees_mid",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class FAL_silencerShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class FAL_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_mid",1}};
		volume = 1.0;
		range = 350;
		rangeCurve[] = {{0,0.2},{50,1},{350,0}};
	};
	class FAL_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class FAL_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class FAL_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close_tail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class FAL_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close_tail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class FAL_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class FAL2_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\FAL2_close",1}};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL2_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{2500,0}};
	};
	class FAL2_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\FAL2_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class FAL2_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{150,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class FAL2_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_forest",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL2_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_forest_mid",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class FAL2_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_urban",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL2_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_urban_mid",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class FAL2_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor",1}};
		volume = " 1.3*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class FAL2_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor_mid",1}};
		volume = " 1.2*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class FAL2_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL2_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows_mid",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class FAL2_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_trees",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class FAL2_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\FAL\fal_trees_mid",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class OSW_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_close",1}};
		volume = 0.65;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class OSW_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{2500,0}};
	};
	class OSW_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class OSW_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant",1}};
		volume = 0.3;
		range = 2000;
		rangeCurve[] = {{0,0},{150,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class OSW_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_forest",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class OSW_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_forest_mid",1}};
		volume = " 1.3*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class OSW_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_urban",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class OSW_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_urban_mid",1}};
		volume = "1.3*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class OSW_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_indoor",1}};
		volume = "1.3*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class OSW_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_indoor_mid",1}};
		volume = "1.3*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class OSW_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_meadows",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class OSW_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_meadows_mid",1}};
		volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class OSW_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_trees",1}};
		volume = "1.3*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class OSW_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_FAL\snd\soundshaders\OSW\OSW_trees_mid",1}};
		volume = " 1.3*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
};
class CfgSoundSets
{
	class FAL_Shot_SoundSet
	{
		soundShaders[] = {"FAL_closeShot_SoundShader","FAL_midShot_SoundShader","FAL_distShot_SoundShader","FAL_Closure_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
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
	class FAL_tail_SoundSet
	{
		soundShaders[] = {"FAL_tailDistant_SoundShader","FAL_tailForest_SoundShader","FAL_tailHouses_SoundShader","FAL_tailInterior_SoundShader","FAL_tailMeadows_SoundShader","FAL_tailTrees_SoundShader","FAL_tailForest_mid_SoundShader","FAL_tailHouses_mid_SoundShader","FAL_tailInterior_mid_SoundShader","FAL_tailMeadows_mid_SoundShader","FAL_tailTrees_mid_SoundShader"};
		volumeFactor = 1.0;
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
	class FAL_silencerShot_SoundSet
	{
		soundShaders[] = {"FAL_silencerShot_SoundShader","FAL_Closure_SoundShader","FAL_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
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
	class FAL_silencerTail_SoundSet
	{
		soundShaders[] = {"FAL_silencerTailTrees_SoundShader","FAL_silencerTailForest_SoundShader","FAL_silencerTailMeadows_SoundShader","FAL_silencerTailHouses_SoundShader","FAL_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class FAL2_Shot_SoundSet
	{
		soundShaders[] = {"FAL2_closeShot_SoundShader","FAL2_midShot_SoundShader","FAL2_distShot_SoundShader","FAL_Closure_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
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
	class FAL2_tail_SoundSet
	{
		soundShaders[] = {"FAL_tailDistant_SoundShader","FAL2_tailForest_SoundShader","FAL2_tailHouses_SoundShader","FAL2_tailInterior_SoundShader","FAL2_tailMeadows_SoundShader","FAL2_tailTrees_SoundShader","FAL2_tailForest_mid_SoundShader","FAL2_tailHouses_mid_SoundShader","FAL2_tailInterior_mid_SoundShader","FAL2_tailMeadows_mid_SoundShader","FAL2_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
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
	class OSW_Shot_SoundSet
	{
		soundShaders[] = {"OSW_closeShot_SoundShader","OSW_midShot_SoundShader","OSW_distShot_SoundShader","FAL_Closure_SoundShader"};
		volumeFactor = 1.4;
		volumeCurve = "InverseSquare2Curve";
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
	class OSW_tail_SoundSet
	{
		soundShaders[] = {"FAL_tailDistant_SoundShader","OSW_tailForest_SoundShader","OSW_tailHouses_SoundShader","OSW_tailInterior_SoundShader","OSW_tailMeadows_SoundShader","OSW_tailTrees_SoundShader","OSW_tailForest_mid_SoundShader","OSW_tailHouses_mid_SoundShader","OSW_tailInterior_mid_SoundShader","OSW_tailMeadows_mid_SoundShader","OSW_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
		volumeCurve = "InverseSquare2Curve";
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
	class hlcweapons_falpocalypse
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_FAL_ammobox","Weapon_hlc_rifle_SLRchopmod","Weapon_hlc_rifle_LAR","Weapon_hlc_rifle_c1A1","Weapon_hlc_rifle_FAL5061","Weapon_hlc_rifle_STG58F","Weapon_hlc_rifle_SLR","Weapon_hlc_rifle_L1A1slr","Weapon_hlc_rifle_osw_GL","Weapon_hlc_rifle_falosw","weapon_hlc_rifle_FAL5061Rail","Weapon_hlc_rifle_FAL5000","Weapon_hlc_rifle_FAL5000Rail","Weapon_hlc_rifle_FAL5000_RH"};
		weapons[] = {"hlc_rifle_SLRchopmod","hlc_rifle_LAR","hlc_rifle_c1A1","hlc_rifle_FAL5061","hlc_rifle_STG58F","hlc_rifle_SLR","hlc_rifle_L1A1slr","hlc_rifle_osw_GL","hlc_rifle_falosw","hlc_optic_suit","hlc_optic_PVS4FAL","hlc_rifle_falosw_XMAG","hlc_rifle_osw_GL_XMAG","hlc_rifle_SLR_XMAG","hlc_rifle_STG58F_XMAG","hlc_rifle_FAL5061Rail","hlc_rifle_FAL5061Rail_XMAG","hlc_rifle_FAL5061_XMAG","hlc_rifle_FAL5000","hlc_rifle_FAL5000_XMAG","hlc_rifle_FAL5000Rail","hlc_rifle_FAL5000Rail_XMAG","hlc_rifle_FAL5000_RH","hlc_rifle_FAL5000_RH_XMAG","hlc_rifle_L1A1SLR_XMAG","hlc_rifle_c1A1_XMAG","hlc_rifle_LAR_XMAG","hlc_rifle_SLRchopmod_XMAG"};
		magazines[] = {};
		version = "v1.98";
		author = "toadie";
	};
};
class cfgMods
{
	class Mod_Base;
	class Niarms_FAL: Mod_Base
	{
		name = "NIArsenal: FAL Rifles";
		picture = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_fal\tex\ui\NIArms1_ca.paa";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems{};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Weapon_Base_F;
	class HLC_FAL_ammobox: B_supplyCrate_F
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC FAL Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		dlc = "Niarms_FAL";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_mk316_fal
			{
				magazine = "hlc_20Rnd_762x51_mk316_fal";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_barrier_fal
			{
				magazine = "hlc_20Rnd_762x51_barrier_fal";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_t_fal
			{
				magazine = "hlc_20Rnd_762x51_t_fal";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_S_fal
			{
				magazine = "hlc_20Rnd_762x51_S_fal";
				count = 30;
			};
			class _xx_hlc_50rnd_762x51_M_FAL
			{
				magazine = "hlc_50rnd_762x51_M_FAL";
				count = 30;
			};
			class _xx_hlc_50rnd_762x51_MDIM_FAL
			{
				magazine = "hlc_50rnd_762x51_MDIM_FAL";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_falosw
			{
				weapon = "hlc_rifle_falosw";
				count = 20;
			};
			class _xx_hlc_rifle_osw_GL
			{
				weapon = "hlc_rifle_osw_GL";
				count = 20;
			};
			class _xx_hlc_rifle_L1A1slr
			{
				weapon = "hlc_rifle_L1A1slr";
				count = 20;
			};
			class _xx_hlc_rifle_SLR
			{
				weapon = "hlc_rifle_SLR";
				count = 20;
			};
			class _xx_hlc_rifle_STG58F
			{
				weapon = "hlc_rifle_STG58F";
				count = 20;
			};
			class _xx_hlc_rifle_FAL5061
			{
				weapon = "hlc_rifle_FAL5061";
				count = 20;
			};
			class _xx_hlc_rifle_c1A1
			{
				weapon = "hlc_rifle_c1A1";
				count = 20;
			};
			class _xx_hlc_rifle_LAR
			{
				weapon = "hlc_rifle_LAR";
				count = 20;
			};
			class _xx_hlc_rifle_SLRchopmod
			{
				weapon = "hlc_rifle_SLRchopmod";
				count = 20;
			};
		};
		class TransportItems
		{
			class _xx_hlc_optic_suit
			{
				name = "hlc_optic_suit";
				count = 10;
			};
			class _xx_hlc_optic_PVS4FAL
			{
				name = "hlc_optic_PVS4FAL";
				count = 10;
			};
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
	class Weapon_hlc_rifle_falosw: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "DSArms FAL OSW";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_falosw
			{
				weapon = "hlc_rifle_falosw";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_osw_GL: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "DSArms FAL OSW(GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_osw_GL
			{
				weapon = "hlc_rifle_osw_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_SLR: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lithgow SLR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_SLR
			{
				weapon = "hlc_rifle_SLR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_STG58F: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "Steyr STG.58";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_STG58F
			{
				weapon = "hlc_rifle_STG58F";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5061Rail: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN FAL 50.61'Para' (RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_FAL5061Rail
			{
				weapon = "hlc_rifle_FAL5061Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5061: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN FAL 50.61'Para'";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_FAL5061
			{
				weapon = "hlc_rifle_FAL5061";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5000: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN FAL 50.00";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_FAL5000
			{
				weapon = "hlc_rifle_FAL5000";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5000Rail: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN FAL 50.00 (RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_FAL5000Rail
			{
				weapon = "hlc_rifle_FAL5000Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_FAL5000_RH: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN FAL 50.00(Rhod.Spraycam)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_FAL5000_RH
			{
				weapon = "hlc_rifle_FAL5000_RH";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_L1A1SLR: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "Enfield L1A1 SLR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_L1A1SLR
			{
				weapon = "hlc_rifle_L1A1SLR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_c1A1: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "CAL C1A1";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_c1A1
			{
				weapon = "hlc_rifle_c1A1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_LAR: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "FN LAR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_LAR
			{
				weapon = "hlc_rifle_LAR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_SLRchopmod: Weapon_Base_F
	{
		dlc = "Niarms_FAL";
		scope = 2;
		scopeCurator = 2;
		displayName = "Lithgow SLR Chopmod";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_SLRchopmod
			{
				weapon = "hlc_rifle_SLRchopmod";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_fal
			{
				magazine = "hlc_20Rnd_762x51_B_fal";
				count = 1;
			};
		};
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class optic_Arco;
	class hlc_optic_suit: optic_arco
	{
		dlc = "Niarms_FAL";
		scope = 2;
		author = "Pete, Acid Snake, Toadie";
		descriptionshort = "Single Unit, Infantry, Trilux Optic<br />Magnification: 4x";
		displayname = "SUIT";
		picture = "\hlc_wp_FAL\tex\ui\gear_suit_x_ca";
		model = "\hlc_wp_FAL\mesh\SUIT\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 7.5;
			modelOptics = "\hlc_wp_fal\mesh\suit\suit_optics";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					modelOptics[] = {"\hlc_wp_fal\mesh\suit\suit_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Kolimator
				{
					cameradir = "";
					distancezoommax = 100;
					distancezoommin = 100;
					memorypointcamera = "AOTT";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticsppeffects[] = {"",""};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
		tmr_optics_enhanced = 0;
		inertia = 0.03;
	};
	class hlc_optic_PVS4base;
	class hlc_optic_PVS4FAL: hlc_optic_PVS4base
	{
		dlc = "Niarms_FAL";
		author = "Pete, Enron, Bohemia Interactive, Toadie";
		descriptionshort = "Night Vision Optic<br />Magnification: 4x";
		displayname = "AN/PVS4(FAL)";
		picture = "\hlc_wp_FAL\tex\ui\gear_PVS4_x_ca";
		model = "\hlc_wp_FAL\mesh\PVS4\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = "36+12";
			modelOptics = "hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					modelOptics[] = {"hlc_core\mesh\accessories\sights\reticles\NV_anpvs4_optic"};
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip2: Snip
				{
					modelOptics[] = {"hlc_core\mesh\accessories\sights\reticles\NV_pvs4-daysight"};
					opticsid = 2;
				};
				class Kolimator
				{
					cameradir = "";
					distancezoommax = 100;
					distancezoommin = 100;
					memorypointcamera = "AOTT";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 3;
					opticsppeffects[] = {};
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					usemodeloptics = 0;
					visionmode[] = {};
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_fal_base: Rifle_Base_F
	{
		dlc = "Niarms_FAL";
		recoil = "recoil_ebr";
		maxZeroing = 1600;
		magazineReloadSwitchPhase = 0.5;
		scope = 1;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		magazines[] = {"hlc_20Rnd_762x51_B_fal","hlc_20Rnd_762x51_mk316_fal","hlc_20Rnd_762x51_Barrier_fal","hlc_20Rnd_762x51_t_fal","hlc_20Rnd_762x51_TDim_fal","hlc_20Rnd_762x51_S_fal","hlc_50rnd_762x51_M_FAL","hlc_50rnd_762x51_MDIM_FAL","hlc_10Rnd_762x51_B_fal","hlc_10Rnd_762x51_mk316_fal","hlc_10Rnd_762x51_Barrier_fal","hlc_10Rnd_762x51_t_fal","hlc_10Rnd_762x51_TDim_fal","hlc_10Rnd_762x51_S_fal"};
		class Library
		{
			libTextDesc = "FN FAL";
		};
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
		reloadAction = "GestureReloadEBR";
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
		distancezoommax = 300;
		distancezoommin = 300;
		drysound[] = {"hlc_core\sound\empty_assaultrifles",1.01,1,10};
		handanim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\EBR\Data\Anim\ebr.rtm"};
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\sa58_reload",0.630957,1,35};
		soundbullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		changeFiremodeSound[] = {"hlc_wp_fal\snd\ak_selector",1,1,8};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot{};
			class PointerSlot
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
		};
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_WP_FAL\snd\fal_first",1,1,10};
				closure2[] = {"\hlc_WP_FAL\snd\fal_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"fal_Shot_SoundSet","fal_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"FAL_silencerShot_SoundSet","FAL_silencerTail_SoundSet"};
			};
			dispersion = 0.000555596;
			reloadtime = 0.086;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 15;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_WP_FAL\snd\fal_first",1,1,10};
				closure2[] = {"\hlc_WP_FAL\snd\fal_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"fal_Shot_SoundSet","fal_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"FAL_silencerShot_SoundSet","FAL_silencerTail_SoundSet"};
			};
			dispersion = 0.000555596;
			reloadtime = 0.086;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredoptictype = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
		};
	};
	class hlc_rifle_falosw: hlc_fal_base
	{
		author = "Pete, Enron, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 13;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 330.2;
		initspeed = -0.868;
		scope = 2;
		displayName = "DSArms FAL OSW";
		handAnim[] = {"OFP2_ManSkeleton","\hlc_wp_fal\gesture\newgesture\hands_osw.rtm"};
		descriptionShort = "Short-Barreled Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadOSW";
		model = "\hlc_wp_FAL\mesh\sa58\osw.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_osw_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","Foregrip","Grip","Rearsight","Stock","Magazine","Rails","VFG"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_wp_fal\tex\mag-20_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\sa58\verticalgrip_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 0;
		cameradir = "look";
		discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 89;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
			};
		};
		inertia = 0.48;
		dexterity = 1.26515;
		aimTransitionSpeed = 0.885605;
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"OSW_Shot_SoundSet","OSW_Tail_SoundSet"};
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"OSW_Shot_SoundSet","OSW_Tail_SoundSet"};
			};
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredoptictype = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_falosw_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_falosw_XMAG";
			default = "hlc_rifle_falosw";
		};
	};
	class hlc_rifle_falosw_XMAG: hlc_rifle_falosw
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie";
		model = "\hlc_wp_FAL\mesh\sa58\osw_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\sa58\verticalgrip_co.paa"};
		inertia = "0.48+0.225";
		dexterity = 1.0244023;
		aimTransitionSpeed = 0.71708155;
	};
	class UGL_F;
	class hlc_rifle_osw_GL: hlc_rifle_falosw
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 130;
			class UnderBarrelSlot{};
		};
		inertia = 0.77;
		dexterity = 1.0086673;
		aimTransitionSpeed = 0.70606714;
		author = "Pete, Enron, Tigg, Bohemia Interactive, Toadie";
		displayName = "DSArms FAL OSW(GL)";
		model = "\hlc_wp_FAL\mesh\sag58gl\osw_gl.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_oswgl_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","Foregrip","Grip","Rearsight","Stock","Magazine","Rails","M203"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_wp_fal\tex\mag-20_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\tigg_m203\m203_co.paa"};
		muzzles[] = {"this","hlc_M203_OSW"};
		handAnim[] = {"OFP2_ManSkeleton","\hlc_wp_fal\gesture\newgesture\osw_gl_hands.rtm"};
		class hlc_M203_OSW: UGL_F
		{
			cameradir = "GL Look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"GL Eye05","GL Eye1","GL Eye15","GL Eye2","GL Eye25","GL Eye3","gl eye35","GL Eye4"};
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadAction = "GestureReloadTrgUGL";
			reloadtime = 0.1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 60;
			minRangeProbab = 0.45;
			midRange = 200;
			midRangeProbab = 0.65;
			maxRange = 400;
			maxRangeProbab = 0.01;
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_osw_GL_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_osw_GL_XMAG";
			default = "hlc_rifle_osw_GL";
		};
	};
	class hlc_rifle_osw_GL_XMAG: hlc_rifle_osw_GL
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Tigg, Bohemia Interactive, Toadie";
		model = "\hlc_wp_FAL\mesh\SAG58GL\OSW_GL_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\sa58\foregrip-dsa_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\sa58\foldingstock_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\tigg_m203\m203_co.paa"};
		inertia = "0.77+0.225";
		dexterity = 0.84584475;
		aimTransitionSpeed = 0.5920913;
	};
	class hlc_rifle_SLR: hlc_fal_base
	{
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
		scope = 2;
		displayName = "Lithgow SLR";
		descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
		recoil = "recoil_ebr";
		maxZeroing = 1600;
		reloadAction = "HLC_GestureReloadFALLONG";
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		model = "\hlc_wp_FAL\mesh\slr\l1a1_1.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_slr_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","GasBlock","Foregrip","Grip","Rearsight","Stock","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\lithgow\fore-slr_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_wp_fal\tex\israeli\mag-20_co.paa"};
		inertia = 0.43;
		dexterity = 1.2331482;
		aimTransitionSpeed = 0.86320376;
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 0;
		cameradir = "look";
		discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
		modes[] = {"Single","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"FAL_Shot_SoundSet","FAL2_tail_SoundSet"};
			};
			minrange = 0;
			dispersion = 0.0013;
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredoptictype = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
			class CowsSlot: asdg_OpticRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				class compatibleItems
				{
					hlc_optic_suit = 1;
					hlc_optic_PVS4FAL = 1;
				};
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_SLR_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_SLR_XMAG";
			default = "hlc_rifle_SLR";
		};
	};
	class hlc_rifle_SLR_XMAG: hlc_rifle_SLR
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\slr\l1a1_1_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\lithgow\fore-slr_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.45+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_STG58F: hlc_fal_base
	{
		author = "Pete, Enron, Bohemia Interactive, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 21;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 533.4;
		scope = 2;
		displayName = "Steyr STG.58";
		descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		model = "\hlc_wp_FAL\mesh\stg58\stg58.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_stg58_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","GasBlock","Foregrip","Grip","Rearsight","Stock","Magazine","Rail","Muzzle"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\rec_co.paa","hlc_wp_fal\tex\barrel-slr_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\fsight2_co.paa","hlc_wp_fal\tex\fore-grooved_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\rsight-modern_co.paa","hlc_wp_fal\tex\stock-solid_co.paa","hlc_wp_fal\tex\mag-20_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\bis_falpara\fnfal_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		cameradir = "look";
		inertia = 0.51;
		dexterity = 1.13515;
		aimTransitionSpeed = 0.79460496;
		discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 112;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_STG58F_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_STG58F_XMAG";
			default = "hlc_rifle_STG58F";
		};
	};
	class hlc_rifle_STG58F_XMAG: hlc_rifle_STG58F
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Bohemia Interactive, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\stg58\stg58_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\rec_co.paa","hlc_wp_fal\tex\barrel-slr_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\fsight2_co.paa","hlc_wp_fal\tex\fore-grooved_co.paa","hlc_wp_fal\tex\grip-enfield_co.paa","hlc_wp_fal\tex\rsight-modern_co.paa","hlc_wp_fal\tex\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\dsatoprails_co.paa","hlc_wp_fal\tex\bis_falpara\fnfal_co.paa"};
		inertia = "0.51+0.225";
		dexterity = 0.9101347;
		aimTransitionSpeed = 0.63709426;
	};
	class hlc_rifle_FAL5061Rail: hlc_fal_base
	{
		scope = 2;
		author = "Bohemia Interactive, Arby25, Toadie";
		displayName = "FN FAL 50.61'Para' (RIS)";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_rails.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
		descriptionShort = "Infantry Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		hiddenSelections[] = {"Main","Magazine","Rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\FALmag_20rnd_co.paa","hlc_wp_fal\tex\bis_pvs4\anpvs4_co.paa"};
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 96;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.44;
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5061Rail_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5061Rail_XMAG";
			default = "hlc_rifle_FAL5061Rail";
		};
	};
	class hlc_rifle_FAL5061Rail_XMAG: hlc_rifle_FAL5061Rail
	{
		scopeArsenal = 0;
		author = "Bohemia Interactive, Arby25, Toadie";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_rails_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\bis_pvs4\anpvs4_co.paa"};
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_FAL5061: hlc_fal_base
	{
		scope = 2;
		author = "Bohemia Interactive, Arby25, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
		displayName = "FN FAL 50.61'Para'";
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_para_x_ca";
		hiddenSelections[] = {"Main","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\FALmag_20rnd_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		inertia = 0.39;
		dexterity = 1.361292;
		aimTransitionSpeed = 0.9529044;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class CowsSlot: asdg_OpticRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
				class compatibleItems
				{
					hlc_optic_suit = 1;
					hlc_optic_PVS4FAL = 1;
				};
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5061_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5061_XMAG";
			default = "hlc_rifle_FAL5061";
		};
	};
	class hlc_rifle_FAL5061_XMAG: hlc_rifle_FAL5061
	{
		scopeArsenal = 0;
		author = "Bohemia Interactive, Arby25, Toadie";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.39+0.225";
		dexterity = 1.009657;
		aimTransitionSpeed = 0.7067599;
	};
	class hlc_rifle_FAL5000: hlc_rifle_FAL5061
	{
		scope = 2;
		author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
		displayName = "FN FAL 50.00";
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL_full.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
		hiddenSelections[] = {"Main","Stock","Barrel","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_wp_fal\tex\arby25_fal\fnfal2_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_core\tex\magazines\FALmag_20rnd_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		inertia = 0.43;
		dexterity = 1.2718903;
		aimTransitionSpeed = 0.89032316;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000_XMAG";
			default = "hlc_rifle_FAL5000";
		};
	};
	class hlc_rifle_FAL5000_XMAG: hlc_rifle_FAL5000
	{
		scopeArsenal = 0;
		author = "Bohemia Interactive, Arby25, Toadie";
		model = "\hlc_wp_FAL\mesh\FN_FAL\FNFAL_full_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.43+0.225";
		dexterity = 0.97243166;
		aimTransitionSpeed = 0.68070215;
	};
	class hlc_rifle_FAL5000Rail: hlc_rifle_FAL5061Rail
	{
		scope = 2;
		displayName = "FN FAL 50.00 (RIS)";
		author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_rails.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_fal_ca";
		hiddenSelections[] = {"Main","Stock","Barrel","Rail","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_wp_fal\tex\arby25_fal\fnfal2_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\bis_pvs4\anpvs4_co.paa","hlc_core\tex\magazines\FALmag_20rnd_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 99;
		};
		inertia = 0.5;
		dexterity = 1.2150402;
		aimTransitionSpeed = 0.8505281;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000Rail_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000Rail_XMAG";
			default = "hlc_rifle_FAL5000Rail";
		};
	};
	class hlc_rifle_FAL5000Rail_XMAG: hlc_rifle_FAL5000Rail
	{
		scopeArsenal = 0;
		author = "Bohemia Interactive, Arby25, Toadie";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_rails_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_co.paa","hlc_core\tex\magazines\XMags_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\bis_pvs4\anpvs4_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.5+0.225";
		dexterity = 0.9473654;
		aimTransitionSpeed = 0.6631558;
	};
	class hlc_rifle_FAL5000_RH: hlc_rifle_FAL5000
	{
		author = "Bohemia Interactive, Arby25, Toadie, Clifton Vlodhammer";
		displayName = "FN FAL 50.00(Rhod. Spraycam)";
		picture = "\hlc_wp_FAL\tex\ui\gear_falRH_ca";
		hiddenSelections[] = {"Main","Stock","Barrel"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_Rhodie_co.paa","hlc_wp_fal\tex\arby25_fal\fnfal2_Rhodie_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_Rhodie_co.paa"};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_FAL5000_RH_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_FAL5000_RH_XMAG";
			default = "hlc_rifle_FAL5000_RH";
		};
	};
	class hlc_rifle_FAL5000_RH_XMAG: hlc_rifle_FAL5000_RH
	{
		scopeArsenal = 0;
		author = "Bohemia Interactive, Arby25, Toadie";
		model = "\hlc_wp_FAL\mesh\FN_FAL\fnFal_full_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\bis_falpara\fnfal_Rhodie_co.paa","hlc_wp_fal\tex\arby25_fal\fnfal2_Rhodie_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_Rhodie_co.paa"};
		inertia = "0.43+0.225";
		dexterity = 0.97243166;
		aimTransitionSpeed = 0.68070215;
	};
	class hlc_rifle_L1A1SLR: hlc_rifle_SLR
	{
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
		scope = 2;
		displayName = "Enfield L1A1 SLR";
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		model = "\hlc_wp_FAL\mesh\l1a1\L1A1.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_l1a1_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","GasBlock","Foregrip","Grip","Rearsight","Stock","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\c1\foregrip-vented_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_wp_fal\tex\israeli\mag-20_co.paa"};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_L1A1SLR_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_L1A1SLR_XMAG";
			default = "hlc_rifle_L1A1SLR";
		};
	};
	class hlc_rifle_L1A1SLR_XMAG: hlc_rifle_L1A1SLR
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\l1a1\L1A1_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\lithgow\barrel-slr_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\c1\foregrip-vented_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_c1A1: hlc_rifle_SLR
	{
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 21.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 551.18;
		scope = 2;
		displayName = "CAL C1A1";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","GasBlock","Foregrip","Grip","Rearsight","Stock","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\c1\rec_co.paa","hlc_wp_fal\tex\barrel-slr_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\fsight2_co.paa","hlc_wp_fal\tex\c1\foregrip-vented_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\c1\stock-solid_co.paa","hlc_wp_fal\tex\mag-20_co.paa"};
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		model = "\hlc_wp_FAL\mesh\C1A1\C1A1.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_c1_x_ca";
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_c1A1_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_c1A1_XMAG";
			default = "hlc_rifle_c1A1";
		};
	};
	class hlc_rifle_c1A1_XMAG: hlc_rifle_c1A1
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\C1A1\C1A1_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\c1\rec_co.paa","hlc_wp_fal\tex\barrel-slr_co.paa","hlc_wp_fal\tex\fsight_co.paa","hlc_wp_fal\tex\fsight2_co.paa","hlc_wp_fal\tex\c1\foregrip-vented_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\c1\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_LAR: hlc_rifle_FAL5061
	{
		author = "Pete, Enron, Acid Snake, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 21;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 533.4;
		scope = 2;
		displayName = "FN LAR";
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		handanim[] = {"OFP2_ManSkeleton","hlc_WP_FAL\gesture\l1a1_hands.rtm"};
		model = "\hlc_wp_FAL\mesh\FN_LAR\L1A1.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_izzy_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","Foregrip","Grip","Rearsight","Stock","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\israeli\barrel-izzy.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\israeli\foregrip-izzy_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\c1\stock-solid_co.paa","hlc_wp_fal\tex\mag-20_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"FAL_Shot_SoundSet","FAL2_tail_SoundSet"};
			};
			dispersion = 0.00055271;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"FAL_Shot_SoundSet","FAL2_tail_SoundSet"};
			};
			dispersion = 0.00069816003;
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredoptictype = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94;
		};
		inertia = 0.43;
		dexterity = 1.2718903;
		aimTransitionSpeed = 0.89032316;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_LAR_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_LAR_XMAG";
			default = "hlc_rifle_LAR";
		};
	};
	class hlc_rifle_LAR_XMAG: hlc_rifle_LAR
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\FN_LAR\L1A1_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\israeli\barrel-izzy.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\israeli\foregrip-izzy_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\c1\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.43+0.225";
		dexterity = 0.97243166;
		aimTransitionSpeed = 0.68070215;
	};
	class hlc_rifle_SLRchopmod: hlc_rifle_FAL5061
	{
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		AB_barrelTwist = 12;
		AB_barrelLength = 18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
		scope = 2;
		initspeed = -0.868;
		displayName = "Lithgow SLR Chopmod";
		descriptionShort = "Butchered AOW<br/>Caliber: 7.62x51mm NATO";
		reloadAction = "HLC_GestureReloadFALLONG";
		reloadmagazinesound[] = {"hlc_WP_FAL\snd\fal_reload",0.630957,1,35};
		handAnim[] = {"OFP2_ManSkeleton","\hlc_wp_fal\gesture\newgesture\chopmod_hands.rtm"};
		model = "\hlc_wp_FAL\mesh\Suchka-LR\L1A1_1.p3d";
		picture = "\hlc_wp_FAL\tex\ui\gear_bitch_x_ca";
		hiddenSelections[] = {"Reciever","Barrel","Frontsight","GasBlock","Foregrip","Grip","Rearsight","Stock","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\lithgow\fore-slr_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_wp_fal\tex\israeli\mag-20_co.paa"};
		discretedistance[] = {200,300,400,500,600,700};
		discretedistanceinitindex = 2;
		cameradir = "look";
		discreteDistanceCameraPoint[] = {"eye2","eye3","eye4","eye5","eye6","eye7"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"OSW_Shot_SoundSet","OSW_Tail_SoundSet"};
			};
			dispersion = 0.00066907;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"OSW_Shot_SoundSet","OSW_Tail_SoundSet"};
			};
			dispersion = 0.00078543;
		};
		class single_medium_optics1: Single
		{
			showToPlayer = 0;
			requiredoptictype = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 550;
			aiRateOfFireDispersion = 3;
			minRange = 150;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_medium_optics1
		{
			requiredoptictype = 2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 1200;
			aiRateOfFireDispersion = 4;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1200;
			maxRangeProbab = 0.05;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 4;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
		inertia = 0.39;
		dexterity = 1.4612919;
		aimTransitionSpeed = 1.0229043;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_FAL = "hlc_rifle_SLRchopmod_XMAG";
			hlc_50rnd_762x51_MDIM_FAL = "hlc_rifle_SLRchopmod_XMAG";
			default = "hlc_rifle_SLRchopmod";
		};
	};
	class hlc_rifle_SLRchopmod_XMAG: hlc_rifle_SLRchopmod
	{
		scopeArsenal = 0;
		author = "Pete, Enron, Toadie, Clifton Vlodhammer";
		model = "\hlc_wp_FAL\mesh\Suchka-LR\L1A1_1_xmag.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_fal\tex\israeli\rec_sanitary_co.paa","hlc_wp_fal\tex\sa58\barrel-match_co.paa","hlc_wp_fal\tex\israeli\frontsight-1_co.paa","hlc_wp_fal\tex\lithgow\fsight2_co.paa","hlc_wp_fal\tex\lithgow\fore-slr_co.paa","hlc_wp_fal\tex\c1\grip-enfield_co.paa","hlc_wp_fal\tex\israeli\rearsight-slr_co.paa","hlc_wp_fal\tex\lithgow\stock-solid_co.paa","hlc_core\tex\magazines\XMags_co.paa"};
		inertia = "0.39+0.225";
		dexterity = 1.109657;
		aimTransitionSpeed = 0.7767599;
	};
};
