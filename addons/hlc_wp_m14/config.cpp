////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_m14\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:15:55 2019 : 'file' last modified on Tue Jan 09 05:35:46 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class M14_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_first",1},{"hlc_wp_m14\snd\soundshaders\m14_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class M14_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_close",1}};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class M14_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_mid",1}};
		volume = 1.6;
		range = 2500;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2500,0}};
	};
	class M14_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class M14_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class M14_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_forest",1}};
		volume = "1*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M14_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_forest_mid",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class M14_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_urban",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M14_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_urban_mid",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M14_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_indoor",1}};
		volume = "1*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class M14_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_meadows",1}};
		volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M14_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class M14_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_trees",1}};
		volume = "1*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class M14_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
	class M14_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_close",1}};
		volume = 1;
		range = 350;
		rangeCurve = "closeShotCurve";
	};
	class M14_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M14_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class M14_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class M14_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class M14_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class m14tactical_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_first",1},{"hlc_wp_m14\snd\soundshaders\m14_first",1}};
		range = 35;
		volume = 1;
	};
	class m14tactical_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14tac_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class m14tactical_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14tac_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2500,0}};
	};
	class m14tactical_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2500,1}};
	};
	class M14tactical_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class m14tactical_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_forest",1}};
		volume = "1*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14tactical_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_forest_mid",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class m14tactical_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_urban",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14tactical_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_urban_mid",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class m14tactical_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_indoor",1}};
		volume = "1*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14tactical_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class m14tactical_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_meadows",1}};
		volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14tactical_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class m14tactical_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_trees",1}};
		volume = "1*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class m14tactical_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_m14\snd\soundshaders\m14_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
};
class CfgSoundSets
{
	class m14_Shot_SoundSet
	{
		soundShaders[] = {"m14_closeShot_SoundShader","m14_midShot_SoundShader","m14_distShot_SoundShader","m14_Closure_SoundShader"};
		volumeFactor = 1.24;
		volumeCurve = "InverseSquare3Curve";
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
	class m14_tail_SoundSet
	{
		soundShaders[] = {"m14_tailDistant_SoundShader","m14_tailForest_SoundShader","m14_tailHouses_SoundShader","m14_tailInterior_SoundShader","m14_tailMeadows_SoundShader","m14_tailTrees_SoundShader","m14_tailForest_mid_SoundShader","m14_tailHouses_mid_SoundShader","m14_tailInterior_mid_SoundShader","m14_tailMeadows_mid_SoundShader","m14_tailTrees_mid_SoundShader"};
		volumeFactor = 1.3;
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
	class m14_silencerShot_SoundSet
	{
		soundShaders[] = {"m14_silencerShot_SoundShader","m14_Closure_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class m14_silencerTail_SoundSet
	{
		soundShaders[] = {"m14_silencerTailTrees_SoundShader","m14_silencerTailForest_SoundShader","m14_silencerTailMeadows_SoundShader","m14_silencerTailHouses_SoundShader","m14_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 3;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class m14tactical_Shot_SoundSet
	{
		soundShaders[] = {"m14tactical_closeShot_SoundShader","m14tactical_midShot_SoundShader","m14tactical_distShot_SoundShader","m14tactical_Closure_SoundShader"};
		volumeFactor = 1.4;
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
	class m14tactical_tail_SoundSet
	{
		soundShaders[] = {"m14tactical_tailDistant_SoundShader","m14tactical_tailForest_SoundShader","m14tactical_tailHouses_SoundShader","m14tactical_tailInterior_SoundShader","m14tactical_tailMeadows_SoundShader","m14tactical_tailTrees_SoundShader","m14tactical_tailForest_mid_SoundShader","m14tactical_tailHouses_mid_SoundShader","m14tactical_tailInterior_mid_SoundShader","m14tactical_tailMeadows_mid_SoundShader","m14tactical_tailTrees_mid_SoundShader"};
		volumeFactor = 1.3;
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
	class hlcweapons_m14
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_M14_ammobox","Weapon_hlc_rifle_M21","Weapon_hlc_rifle_m14sopmod","Weapon_hlc_rifle_m14dmr","weapon_hlc_rifle_M14_Bipod","weapon_hlc_rifle_M14_Rail","Weapon_hlc_rifle_M14","Weapon_hlc_rifle_M14_Bipod_Rail","Weapon_hlc_rifle_M21_Rail","Weapon_hlc_rifle_M14dmr_Rail"};
		weapons[] = {"hlc_rifle_M14","hlc_rifle_M21","hlc_rifle_m14dmr","hlc_rifle_m14sopmod","hlc_muzzle_snds_M14","hlc_optic_artel_m14","hlc_optic_LRT_m14","hlc_optic_PVS4M14","hlc_rifle_M14_XMAG","hlc_rifle_M14_Bipod","hlc_rifle_M14_Bipod_XMAG","hlc_rifle_M14_Rail","hlc_rifle_M14_Rail_XMAG","hlc_rifle_M14_Bipod_Rail","hlc_rifle_M14_Bipod_Rail_XMAG","hlc_rifle_M21_XMAG","hlc_rifle_M21_Rail","hlc_rifle_M21_Rail_XMAG","hlc_rifle_m14dmr_XMAG","hlc_rifle_M14dmr_Rail","hlc_rifle_M14dmr_Rail_XMAG","hlc_rifle_m14sopmod_XMAG"};
		magazines[] = {"hlc_50Rnd_762x51_B_M14","hlc_20Rnd_762x51_T_M14","hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_barrier_M14","hlc_20Rnd_762x51_Tdim_M14","hlc_20Rnd_762x51_Mdim_M14","hlc_50Rnd_762x51_MDIM_M14","hlc_20Rnd_762x51_S_M14"};
		version = "v1.98";
		author = "toadie";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems;
};
class asdg_OpticRail;
class niarms_m14_OpticRail: asdg_OpticRail
{
	class compatibleItems
	{
		hlc_optic_artel_m14 = 1;
		hlc_optic_LRT_m14 = 1;
		hlc_optic_PVS4M14 = 1;
	};
};
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail;
class asdg_UnderSlot;
class cfgMods
{
	class Mod_Base;
	class Niarms_M14: Mod_Base
	{
		name = "NIArsenal: M14 Rifles";
		picture = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_m14\tex\ui\NIArms1_ca.paa";
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Weapon_Base_F;
	class HLC_M14_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "Ammo";
		displayName = "HLC M14 Supply Box";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_50Rnd_762x51_B_M14
			{
				magazine = "hlc_50Rnd_762x51_B_M14";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_T_M14
			{
				magazine = "hlc_20Rnd_762x51_T_M14";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_barrier_M14
			{
				magazine = "hlc_20Rnd_762x51_barrier_M14";
				count = 30;
			};
			class _xx_hlc_20Rnd_762x51_mk316_M14
			{
				magazine = "hlc_20Rnd_762x51_mk316_M14";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_M14
			{
				weapon = "hlc_rifle_M14";
				count = 10;
			};
			class _xx_hlc_rifle_M14_Bipod
			{
				weapon = "hlc_rifle_M14_Bipod";
				count = 10;
			};
			class _xx_hlc_rifle_M14_Rail
			{
				weapon = "hlc_rifle_M14_Rail";
				count = 10;
			};
			class _xx_hlc_rifle_M14_Bipod_Rail
			{
				weapon = "hlc_rifle_M14_Bipod_Rail";
				count = 10;
			};
			class _xx_hlc_rifle_M21
			{
				weapon = "hlc_rifle_M21";
				count = 10;
			};
			class _xx_hlc_rifle_M21_Rail
			{
				weapon = "hlc_rifle_M21_Rail";
				count = 10;
			};
			class _xx_hlc_rifle_m14dmr
			{
				weapon = "hlc_rifle_m14dmr";
				count = 10;
			};
			class _xx_hlc_rifle_M14dmr_Rail
			{
				weapon = "hlc_rifle_M14dmr_Rail";
				count = 10;
			};
			class _xx_hlc_rifle_m14sopmod
			{
				weapon = "hlc_rifle_m14sopmod";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_hlc_optic_artel_m14
			{
				name = "hlc_optic_artel_m14";
				count = 10;
			};
			class _xx_hlc_optic_LRT_m14
			{
				name = "hlc_optic_LRT_m14";
				count = 10;
			};
			class _xx_hlc_optic_PVS4M14
			{
				name = "hlc_optic_PVS4M14";
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
	class Weapon_hlc_rifle_M14: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14
			{
				weapon = "hlc_rifle_M14";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Bipod: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14(Bipod)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Bipod
			{
				weapon = "hlc_rifle_M14_Bipod";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Rail: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Rail
			{
				weapon = "hlc_rifle_M14_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M14_Bipod_Rail: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14(Bipod / RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14_Bipod_Rail
			{
				weapon = "hlc_rifle_M14_Bipod_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M21: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M21";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M21
			{
				weapon = "hlc_rifle_M21";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine = "hlc_20Rnd_762x51_mk316_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M21_Rail: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M21(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M21_Rail
			{
				weapon = "hlc_rifle_M21_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine = "hlc_20Rnd_762x51_mk316_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_m14dmr: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14DMR";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_m14dmr
			{
				weapon = "hlc_rifle_m14dmr";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine = "hlc_20Rnd_762x51_mk316_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_M14dmr_Rail: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "M14DMR(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_M14dmr_Rail
			{
				weapon = "hlc_rifle_M14dmr_Rail";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_mk316_M14
			{
				magazine = "hlc_20Rnd_762x51_mk316_M14";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_m14sopmod: Weapon_Base_F
	{
		dlc = "Niarms_M14";
		scope = 2;
		scopeCurator = 2;
		displayName = "Troy M14 SOPMOD";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_m14sopmod
			{
				weapon = "hlc_rifle_m14sopmod";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20Rnd_762x51_B_M14
			{
				magazine = "hlc_20Rnd_762x51_B_M14";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_20Rnd_762x51_B_M14: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		count = 20;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname = "7.62mm EPR 20Rnd M14 Magazine";
		model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
		initspeed = 908.4;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 16.3;
		displaynameshort = "M80A1 EPR";
	};
	class hlc_20Rnd_762x51_mk316_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_MK316_20in";
		descriptionshort = "Caliber: 7.62x51mm NATO MK316 Mod 0 SBLR<br />Type: Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 20";
		displayname = "7.62mm SBLR 20Rnd M14 Magazine";
		initspeed = 731;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		tracersevery = 0;
		mass = 16.6;
		displaynameshort = "MK316 SBLR";
	};
	class hlc_20Rnd_762x51_barrier_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_MK316_20in";
		descriptionshort = "Caliber: 7.62x51mm NATO MK319 Mod 0 SOST <br />Type: Type: Reverse-Drawn Open Tip Match <br />Rounds: 20";
		displayname = "7.62mm SOST 20Rnd M14 Magazine";
		initspeed = 890.4;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		tracersevery = 0;
		mass = 16.4;
		displaynameshort = "MK319 OTM";
	};
	class hlc_20Rnd_762x51_T_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_tracer";
		descriptionshort = "Caliber: 7.62x51mm<br />Rounds: 20<br />Used in: M14,M21";
		displayname = "7.62mm Tracer 20Rnd M14 Magazine";
		initspeed = 908.4;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 1;
		mass = 16.3;
		displaynameshort = "M62A1 Tracer";
	};
	class hlc_20Rnd_762x51_Tdim_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = "Caliber: 7.62x51mm NATO M276<br />Type: IR Incendiary Tracer<br />Rounds: 20";
		displayname = "7.62mm IR-DIM 20Rnd M14 Magazine";
		initspeed = 908.4;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 1;
		mass = 16.3;
		displaynameshort = "IR-DIM";
	};
	class hlc_20Rnd_762x51_Mdim_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 20";
		displayname = "7.62mm EPR 20Rnd M14 Magazine (IR-DIM every 4)";
		initspeed = 908.4;
		lastroundstracer = 3;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 4;
		mass = 16.3;
		displaynameshort = "EPR/IR-DIM";
	};
	class hlc_50Rnd_762x51_B_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_ball";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd M14 Magazine (Tracers every 4)";
		model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
		initspeed = 908.4;
		lastroundstracer = 3;
		picture = "\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 49.47;
		displaynameshort = "EPR/Tracer";
	};
	class hlc_50Rnd_762x51_MDIM_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_B_762x51_Tracer_Dim";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd M14 Magazine (IR-DIM every 4)";
		model = "hlc_wp_m14\mesh\magazine\magazine.p3d";
		initspeed = 908.4;
		lastroundstracer = 3;
		picture = "\hlc_core\tex\ui\ammo\m_x14_mixed_ca.paa";
		scope = 2;
		tracersevery = 4;
		mass = 49.47;
		displaynameshort = "EPR/IR-DIM";
	};
	class hlc_20Rnd_762x51_S_M14: hlc_20Rnd_762x51_B_M14
	{
		dlc = "Niarms_M14";
		author = "Toadie";
		ammo = "HLC_762x51_BTSub";
		descriptionshort = "Caliber: 7.62x51mm NATO Lapua FMJ-BT Subsonic<br />Type: Full Metal Jacket with Boat Tail<br />Rounds: 20";
		displayname = "7.62mm Subsonic 20Rnd M14 Magazine";
		initspeed = 325;
		lastroundstracer = 0;
		picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
		tracersevery = 0;
		mass = 16.7;
		displaynameshort = "FMJ Subsonic";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class optic_dms;
	class hlc_optic_artel_m14: optic_dms
	{
		author = "Millenia, Toadie";
		dlc = "Niarms_M14";
		descriptionshort = "Redfield AR-TEL Magnified Optic Sight<br />Magnification: 3-9x";
		weaponInfoType = "RscWeaponZeroing";
		model = "\hlc_wp_M14\mesh\ar-tel\scope.p3d";
		picture = "\hlc_wp_M14\tex\ui\gear_artel_x_ca";
		displayname = "Redfield AR-TEL";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 9;
			modelOptics = "\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMax = "0.249/3";
					opticsZoomMin = "0.249/3";
					opticsZoomInit = "0.249/3";
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 900;
					memoryPointCamera = "eye";
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle.p3d"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip2: Snip
				{
					opticsID = 2;
					opticsZoomMax = "0.249/4";
					opticsZoomMin = "0.249/4";
					opticsZoomInit = "0.249/4";
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_4x.p3d"};
				};
				class Snip3: Snip
				{
					opticsID = 3;
					opticsZoomMax = "0.249/5";
					opticsZoomMin = "0.249/5";
					opticsZoomInit = "0.249/5";
					discreteDistance[] = {500};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_5x.p3d"};
				};
				class Snip4: Snip
				{
					opticsID = 4;
					opticsZoomMax = "0.249/6";
					opticsZoomMin = "0.249/6";
					opticsZoomInit = "0.249/6";
					discreteDistance[] = {600};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_6x.p3d"};
				};
				class Snip45: Snip
				{
					opticsID = 5;
					opticsZoomMax = "0.249/7";
					opticsZoomMin = "0.249/7";
					opticsZoomInit = "0.249/7";
					discreteDistance[] = {700};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_7x.p3d"};
				};
				class Snip6: Snip
				{
					opticsID = 6;
					opticsZoomMax = "0.249/8";
					opticsZoomMin = "0.249/8";
					opticsZoomInit = "0.249/8";
					discreteDistance[] = {800};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_8x.p3d"};
				};
				class Snip7: Snip
				{
					opticsID = 7;
					opticsZoomMax = "0.249/9";
					opticsZoomMin = "0.249/9";
					opticsZoomInit = "0.249/9";
					discreteDistance[] = {900};
					discreteDistanceInitIndex = 0;
					modelOptics[] = {"\hlc_wp_M14\mesh\ar-tel\artel_reticle_9x.p3d"};
				};
			};
		};
		inertia = 0.04;
	};
	class hlc_optic_PVS4base;
	class hlc_optic_PVS4M14: hlc_optic_PVS4base
	{
		author = "Bohemia Interactive, Toadie";
		descriptionshort = "Night Vision Optic<br />Magnification: 4x";
		displayname = "AN/PVS4(M14-Mount)";
		model = "\hlc_wp_M14\mesh\PVS4\scope.p3d";
	};
	class optic_lrps: ItemCore{};
	class hlc_optic_LeupoldM3A: optic_lrps
	{
		class ItemInfo;
	};
	class hlc_optic_LRT_m14: hlc_optic_LeupoldM3A
	{
		dlc = "Niarms_M14";
		author = "Bohemia Interactive, Toadie";
		model = "\hlc_wp_M14\mesh\leupold lrt\scope.p3d";
	};
	class muzzle_snds_H;
	class hlc_muzzle_snds_M14: muzzle_snds_H
	{
		scope = 1;
		author = "Toadie";
		displayName = "M14 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "hlc_wp_m14\mesh\SUP_308M14\hk308";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_M14_base: Rifle_Base_F
	{
		dlc = "Niarms_M14";
		deployedpivot = "deploypivot";
		hasBipod = 0;
		recoil = "recoil_ebr";
		scope = 1;
		AB_barrelTwist = 12;
		AB_barrelLength = 22;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
		magazines[] = {"hlc_20Rnd_762x51_B_M14","hlc_20Rnd_762x51_Barrier_M14","hlc_20Rnd_762x51_mk316_M14","hlc_20Rnd_762x51_T_M14","hlc_20Rnd_762x51_Mdim_M14","hlc_20Rnd_762x51_Tdim_M14","hlc_50Rnd_762x51_B_M14","hlc_20Rnd_762x51_S_M14","hlc_50Rnd_762x51_MDIM_M14","20Rnd_762x51_Mag"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		initspeed = -1.05;
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
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
				class compatibleItems: compatibleItems
				{
					hlc_muzzle_snds_M14 = 1;
				};
			};
			class CowsSlot: niarms_m14_OpticRail{};
			class PointerSlot{};
		};
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
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
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_m14\snd\m14_first",1,1,10};
				closure2[] = {"\hlc_wp_m14\snd\m14_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M14_Shot_SoundSet","M14_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"M14_silencerShot_SoundSet","M14_silencerTail_SoundSet"};
			};
			reloadTime = 0.08;
			dispersion = 0.0007;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
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
				closure1[] = {"\hlc_wp_m14\snd\m14_first",1,1,10};
				closure2[] = {"\hlc_wp_m14\snd\m14_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"M14_Shot_SoundSet","M14_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"M14_silencerShot_SoundSet","M14_silencerTail_SoundSet"};
			};
			reloadTime = 0.081;
			dispersion = 0.0009;
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
			requiredoptictype = 1;
			showtoplayer = 0;
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
			burst = 3;
			showtoplayer = 0;
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
		drysound[] = {"\hlc_wp_m14\snd\soundshaders\m14_dry",1,1,10};
		reloadmagazinesound[] = {"\hlc_wp_M14\snd\soundshaders\m14_reload",0.7,1,18};
		reloadaction = "HLC_GestureReloadm14";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	class hlc_rifle_M14: hlc_M14_base
	{
		author = "An Aggressive Napkin, Millenia, Toadie";
		scope = 2;
		recoil = "recoil_dmr_06";
		model = "\hlc_wp_M14\mesh\m14\M14.p3d";
		hiddenSelections[] = {"Main","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_m14\tex\m14\a1_m14_co.paa","hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"};
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_M14\tex\ui\gear_m14_x_ca";
		displayName = "M14";
		dexterity = 1.2718903;
		aimTransitionSpeed = 0.89032316;
		inertia = 0.43;
		memoryPointCamera = "eye";
		magazineReloadSwitchPhase = 0.5;
		cameradir = "aim_point";
		discretedistance[] = {100,200,300,400,500,600};
		discretedistanceinitindex = 2;
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6"};
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94.8;
		};
		class Single: Single
		{
			dispersion = 0.00037817;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00042180502;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "Springfield Armory M14";
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M14_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M14_XMAG";
			default = "hlc_rifle_M14";
		};
	};
	class hlc_rifle_M14_XMAG: hlc_rifle_M14
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m14\M14_xmag.p3d";
		dexterity = 0.9768343;
		aimTransitionSpeed = 0.683784;
		inertia = "0.43+0.22";
	};
	class hlc_rifle_M14_Bipod: hlc_rifle_m14
	{
		model = "\hlc_wp_M14\mesh\m21\M14_bip.p3d";
		displayName = "M14(Bipod)";
		dexterity = 1.2132726;
		aimTransitionSpeed = 0.8492908;
		inertia = 0.45;
		author = "An Aggressive Napkin, Millenia, Toadie";
		maxZeroing = 1600;
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		scope = 2;
		agm_bipod = 1;
		cse_bipod = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 99;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M14_Bipod_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M14_Bipod_XMAG";
			default = "hlc_rifle_M14_Bipod";
		};
	};
	class hlc_rifle_M14_Bipod_XMAG: hlc_rifle_M14_Bipod
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m21\M14_bip_xmag.p3d";
		dexterity = 0.95138955;
		aimTransitionSpeed = 0.66597265;
		inertia = "0.45+0.22";
	};
	class hlc_rifle_M14_Rail: hlc_rifle_m14
	{
		model = "\hlc_wp_M14\mesh\m14\M14_railed.p3d";
		displayName = "M14(RIS)";
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		inertia = 0.43;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
			class CowsSlot: asdg_OpticRail1913_short{};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M14_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M14_Rail_XMAG";
			default = "hlc_rifle_M14_Rail";
		};
	};
	class hlc_rifle_M14_Rail_XMAG: hlc_rifle_M14_Rail
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m14\M14_railed_xmag.p3d";
		dexterity = 0.95138955;
		aimTransitionSpeed = 0.66597265;
		inertia = "0.45+0.22";
	};
	class hlc_rifle_M14_Bipod_Rail: hlc_rifle_m14
	{
		model = "\hlc_wp_M14\mesh\m21\M14_biprail.p3d";
		displayName = "M14(Bipod/RIS)";
		dexterity = 1.1960094;
		aimTransitionSpeed = 0.83720654;
		inertia = 0.45;
		author = "An Aggressive Napkin, Millenia, Toadie";
		maxZeroing = 1600;
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		scope = 2;
		agm_bipod = 1;
		cse_bipod = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 99;
			class CowsSlot: asdg_OpticRail1913_short{};
		};
		hiddenSelections[] = {"Main","Bipod","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_m14\tex\m14\a1_m14_co.paa","hlc_core\tex\acc\bipod\harris\harris1a2_co.paa","hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M14_Bipod_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M14_Bipod_Rail_XMAG";
			default = "hlc_rifle_M14_Bipod_Rail";
		};
	};
	class hlc_rifle_M14_Bipod_Rail_XMAG: hlc_rifle_M14_Bipod_Rail
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m21\M14_biprail_xmag.p3d";
		dexterity = 0.95138955;
		aimTransitionSpeed = 0.66597265;
		inertia = "0.45+0.22";
	};
	class hlc_rifle_M21: hlc_M14_base
	{
		author = "An Aggressive Napkin, Millenia, Toadie";
		hasBipod = 1;
		maxZeroing = 1600;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		scope = 2;
		recoil = "recoil_dmr_06";
		agm_bipod = 1;
		cse_bipod = 1;
		model = "\hlc_wp_M14\mesh\m21\M14.p3d";
		hiddenSelections[] = {"Main","Bipod","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_m14\tex\m21\b1_m14_co.paa","hlc_core\tex\acc\bipod\harris\harris1a2_co.paa","hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa"};
		dexterity = 1.1196315;
		aimTransitionSpeed = 0.7837421;
		inertia = 0.52;
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_M14\tex\ui\gear_m21_x_ca";
		displayName = "M21";
		discretedistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6"};
		memoryPointCamera = "eye";
		cameradir = "aim_point";
		discretedistanceinitindex = 2;
		bg_bipod = 1;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m14\gesture\newgesture\m14_hands.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 114;
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		modes[] = {"Single","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			dispersion = 0.00023272;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
			minRange = 0;
			minRangeProbab = 0.4;
			midRange = 500;
			midRangeProbab = 0.8;
			maxRange = 1600;
			maxRangeProbab = 0.01;
		};
		class single_medium_optics1: Single
		{
			requiredoptictype = 1;
			showtoplayer = 0;
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
			burst = 3;
			showtoplayer = 0;
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
		class Library
		{
			libTextDesc = "Springfield Armory M21";
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M21_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M21_XMAG";
			default = "hlc_rifle_M21";
		};
	};
	class hlc_rifle_M21_XMAG: hlc_rifle_M21
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m21\M14_xmag.p3d";
		dexterity = 0.90600467;
		aimTransitionSpeed = 0.63420326;
		inertia = "0.49+0.22";
	};
	class hlc_rifle_M21_Rail: hlc_rifle_M21
	{
		dexterity = 1.0804572;
		aimTransitionSpeed = 0.75632006;
		inertia = 0.55;
		author = "An Aggressive Napkin, Millenia, Toadie";
		displayName = "M21(RIS)";
		model = "\hlc_wp_M14\mesh\m21\M14_rail.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 121.49;
			class CowsSlot: asdg_OpticRail1913_short{};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M21_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M21_Rail_XMAG";
			default = "hlc_rifle_M21_Rail";
		};
	};
	class hlc_rifle_M21_Rail_XMAG: hlc_rifle_M21_Rail
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m21\M14_rail_xmag.p3d";
		dexterity = 0.90600467;
		aimTransitionSpeed = 0.63420326;
		inertia = "0.49+0.22";
	};
	class hlc_rifle_m14dmr: hlc_rifle_M21
	{
		author = "Bohemia Interactive,Toadie";
		model = "\hlc_wp_M14\mesh\m14dmr\M14.p3d";
		hiddenSelections[] = {"Main","Bipod"};
		hiddenSelectionsTextures[] = {"hlc_wp_m14\tex\bis_dmr\us_dmr_co.paa","hlc_core\tex\acc\bipod\harris\harris1a2_co.paa"};
		dexterity = 1.0719227;
		aimTransitionSpeed = 0.7503458;
		inertia = 0.58;
		agm_bipod = 1;
		hasbipod = 1;
		deployedpivot = "deploypivot";
		cse_bipod = 1;
		maxZeroing = 1600;
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_M14\tex\ui\gear_dmr_x_ca";
		displayName = "M14DMR";
		discretedistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9"};
		cameradir = "aim_point";
		discretedistanceinitindex = 2;
		bg_bipod = 1;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 127;
		};
		class Single: Single
		{
			dispersion = 0.00031999;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_m14dmr_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_m14dmr_XMAG";
			default = "hlc_rifle_m14dmr";
		};
	};
	class hlc_rifle_m14dmr_XMAG: hlc_rifle_m14dmr
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m14dmr\M14_xmag.p3d";
		dexterity = 0.8819432;
		aimTransitionSpeed = 0.61736023;
		inertia = "0.58+0.22";
	};
	class hlc_rifle_M14dmr_Rail: hlc_rifle_m14dmr
	{
		author = "Bohemia Interactive,Toadie";
		displayName = "M14DMR(RIS)";
		model = "\hlc_wp_M14\mesh\m14dmr\M14_railed.p3d";
		dexterity = 1.0376467;
		aimTransitionSpeed = 0.72635263;
		inertia = 0.61;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 116;
			class CowsSlot: asdg_OpticRail1913_short{};
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_M14dmr_Rail_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_M14dmr_Rail_XMAG";
			default = "hlc_rifle_M14dmr_Rail";
		};
	};
	class hlc_rifle_M14dmr_Rail_XMAG: hlc_rifle_M14dmr_Rail
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\m14dmr\M14_railed_xmag.p3d";
		dexterity = 0.86405146;
		aimTransitionSpeed = 0.604836;
		inertia = "0.58+0.22";
	};
	class hlc_rifle_m14sopmod: hlc_rifle_M14
	{
		author = "Twinke Masta, Pete, Thanez, General Tso, Jihad, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 18;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
		agm_bipod = 1;
		hasbipod = 1;
		cse_bipod = 1;
		maxZeroing = 1600;
		model = "\hlc_wp_M14\mesh\sopmod\M14.p3d";
		hiddenSelections[] = {"Reciever","Furniture"};
		hiddenSelectionsTextures[] = {"hlc_wp_m14\tex\brightside\rec_co.paa","hlc_wp_m14\tex\brightside\upper_co.paa"};
		descriptionShort = "Modified Battle Rifle<br/>Caliber: 7.62mm";
		picture = "\hlc_wp_M14\tex\ui\gear_sopmod_x_ca";
		displayName = "Troy M14 SOPMOD";
		discretedistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6"};
		cameradir = "aim_point";
		recoil = "recoil_ebr";
		discretedistanceinitindex = 2;
		bg_bipod = 1;
		initspeed = -0.966;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_m14\gesture\newgesture\dmr_hands.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 89.9;
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
			};
		};
		inertia = 0.41;
		dexterity = 1.3188925;
		aimTransitionSpeed = 0.92322475;
		class Single: Single
		{
			dispersion = 0.00046544;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00052362;
		};
		class single_medium_optics1: single_medium_optics1
		{
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics1: single_far_optics1
		{
			maxRange = 1200;
		};
		class nia_magSwitch
		{
			hlc_50Rnd_762x51_B_M14 = "hlc_rifle_m14sopmod_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_m14sopmod_XMAG";
			default = "hlc_rifle_m14sopmod";
		};
	};
	class hlc_rifle_m14sopmod_XMAG: hlc_rifle_m14sopmod
	{
		scopeArsenal = 0;
		model = "\hlc_wp_M14\mesh\sopmod\M14_xmag.p3d";
		inertia = "0.41+0.22";
		dexterity = 0.9970387;
		aimTransitionSpeed = 0.6979271;
	};
};
