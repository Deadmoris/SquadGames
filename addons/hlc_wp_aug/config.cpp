////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_aug\config.bin
//Produced from mikero's Dos Tools Dll version 6.34
//'now' is Tue May 14 20:04:12 2019 : 'file' last modified on Tue Apr 30 19:56:39 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class aug_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1},{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1}};
		range = 15;
		volume = 0.87;
	};
	class aug_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_close1",1},{"hlc_wp_aug\snd\soundshaders\aug\aug_close2",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aug_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class aug_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class aug_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.8;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class aug_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_Forest",1}};
		volume = "1.675*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aug_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_Forest_mid",1}};
		volume = " 1.675*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class aug_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_urban",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aug_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_urban_mid",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aug_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_interior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class aug_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_interior_mid",1}};
		volume = " 1.675*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class aug_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_meadow",1},{"hlc_wp_aug\snd\soundshaders\aug\aug_meadow",1}};
		volume = "1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aug_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_meadow_mid",1}};
		volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aug_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_trees",1}};
		volume = " 1.675*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aug_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_trees_mid",1}};
		volume = " 1.675*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aug_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_Suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aug_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid",1}};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class aug_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class aug_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class aug_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_Suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class aug_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\AUG_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class aug_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augcarbine_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1},{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1}};
		range = 15;
		volume = 0.87;
	};
	class augcarbine_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_close1",1},{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_close2",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class augcarbine_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class augcarbine_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class augcarbine_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class augcarbine_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_Forest",1}};
		volume = "1.675*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class AUGcarbine_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGcarbine\AUGcarbine_Forest_mid",1}};
		volume = " 1.675*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class augcarbine_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_urban",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class AUGcarbine_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGcarbine\AUGCarbine_mid",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augcarbine_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_interior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class augcarbine_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_interior_mid",1}};
		volume = " 1.675*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class augcarbine_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_meadow",1}};
		volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class augcarbine_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_meadow_mid",1}};
		volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augcarbine_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_trees",1}};
		volume = "1.675*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class augcarbine_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_trees_mid",1}};
		volume = " 1.675*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augcarbine_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class augcarbine_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid",1}};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class augcarbine_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augcarbine_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class augcarbine_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class augcarbine_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augcarbine_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class aughbar_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1},{"hlc_wp_aug\snd\soundshaders\aug\aug_first",1}};
		range = 15;
		volume = 0.87;
	};
	class aughbar_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_close1",1},{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_close2",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aughbar_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class aughbar_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class aughbar_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class aughbar_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_forest",1}};
		volume = " 1.675*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aughbar_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_Forest_mid",1}};
		volume = " 1.675*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class aughbar_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_urban",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aughbar_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_urban_mid",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aughbar_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_interior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class aughbar_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_interior_mid",1}};
		volume = " 1.675*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class aughbar_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_meadow",1}};
		volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aughbar_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_meadow_mid",1}};
		volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aughbar_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_trees",1}};
		volume = "1.675*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class aughbar_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aughbar\aughbar_trees_mid",1}};
		volume = " 1.675*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class aughbar_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aughbar_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid",1}};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class aughbar_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class aughbar_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class aughbar_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class aughbar_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class aughbar_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augpara_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_first",1},{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_first",1}};
		range = 15;
		volume = 0.87;
	};
	class augpara_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_close",1}};
		volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class augpara_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_mid",1}};
		volume = 1.3;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class augpara_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_dist",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class augpara_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant",1}};
		volume = 0.4;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class augpara_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_forest",1}};
		volume = "1.675*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class augpara_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\augpara_Forest_mid",1}};
		volume = " 1.675*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class augpara_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_urban",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class augpara_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\augpara_urban_mid",1}};
		volume = "1.675*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augpara_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_interior",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class augpara_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\augpara_interior_mid",1}};
		volume = " 1.675*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class augpara_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGpara\AUgpara_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class AUGpara_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_meadow_mid",1}};
		volume = "2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augpara_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\AUGpara_trees",1}};
		volume = "1.675*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class augpara_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\augpara\augpara_trees_mid",1}};
		volume = " 1.675*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class augpara_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class augpara_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_mid",1}};
		volume = 1.0;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class augpara_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augpara_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class augpara_silencerTailInterior_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailInterior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class augpara_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class augpara_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class aug_Shot_SoundSet
	{
		soundShaders[] = {"aug_closeShot_SoundShader","aug_midShot_SoundShader","aug_distShot_SoundShader","aug_Closure_SoundShader"};
		volumeFactor = 1.3;
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
	class aug_Tail_SoundSet
	{
		soundShaders[] = {"aug_tailDistant_SoundShader","aug_tailForest_SoundShader","aug_tailHouses_SoundShader","aug_tailInterior_SoundShader","aug_tailMeadows_SoundShader","aug_tailTrees_SoundShader","aug_tailForest_mid_SoundShader","aug_tailHouses_mid_SoundShader","aug_tailInterior_mid_SoundShader","aug_tailMeadows_mid_SoundShader","aug_tailTrees_mid_SoundShader"};
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
	class aug_silencerShot_SoundSet
	{
		soundShaders[] = {"aug_silencerShot_SoundShader","aug_Closure_SoundShader","aug_silencerShot_mid_SoundShader"};
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
	class aug_silencerTail_SoundSet
	{
		soundShaders[] = {"aug_silencerTailTrees_SoundShader","aug_silencerTailForest_SoundShader","aug_silencerTailMeadows_SoundShader","aug_silencerTailHouses_SoundShader","aug_silencerTailInterior_SoundShader"};
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
	class augcarbine_Shot_SoundSet
	{
		soundShaders[] = {"augcarbine_closeShot_SoundShader","augcarbine_midShot_SoundShader","augcarbine_distShot_SoundShader","augcarbine_Closure_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class augcarbine_Tail_SoundSet
	{
		soundShaders[] = {"augcarbine_tailDistant_SoundShader","augcarbine_tailForest_SoundShader","augcarbine_tailHouses_SoundShader","augcarbine_tailInterior_SoundShader","augcarbine_tailMeadows_SoundShader","augcarbine_tailTrees_SoundShader","augcarbine_tailForest_mid_SoundShader","augcarbine_tailHouses_mid_SoundShader","augcarbine_tailInterior_mid_SoundShader","augcarbine_tailMeadows_mid_SoundShader","augcarbine_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
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
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class augcarbine_silencerShot_SoundSet
	{
		soundShaders[] = {"augcarbine_silencerShot_SoundShader","augcarbine_Closure_SoundShader","augcarbine_silencerShot_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class augcarbine_silencerTail_SoundSet
	{
		soundShaders[] = {"augcarbine_silencerTailTrees_SoundShader","augcarbine_silencerTailForest_SoundShader","augcarbine_silencerTailMeadows_SoundShader","augcarbine_silencerTailHouses_SoundShader","augcarbine_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
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
	class aughbar_Shot_SoundSet
	{
		soundShaders[] = {"aughbar_closeShot_SoundShader","aughbar_midShot_SoundShader","aughbar_distShot_SoundShader","aughbar_Closure_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class aughbar_Tail_SoundSet
	{
		soundShaders[] = {"aughbar_tailDistant_SoundShader","aughbar_tailForest_SoundShader","aughbar_tailHouses_SoundShader","aughbar_tailInterior_SoundShader","aughbar_tailMeadows_SoundShader","aughbar_tailTrees_SoundShader","aughbar_tailForest_mid_SoundShader","aughbar_tailHouses_mid_SoundShader","aughbar_tailInterior_mid_SoundShader","aughbar_tailMeadows_mid_SoundShader","aughbar_tailTrees_mid_SoundShader"};
		volumeFactor = 1.1;
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
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class aughbar_silencerShot_SoundSet
	{
		soundShaders[] = {"aughbar_silencerShot_SoundShader","aughbar_Closure_SoundShader","aughbar_silencershot_mid_soundshader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class aughbar_silencerTail_SoundSet
	{
		soundShaders[] = {"aughbar_silencerTailTrees_SoundShader","aughbar_silencerTailForest_SoundShader","aughbar_silencerTailMeadows_SoundShader","aughbar_silencerTailHouses_SoundShader","aughbar_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
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
	class augpara_Shot_SoundSet
	{
		soundShaders[] = {"augpara_closeShot_SoundShader","augpara_midShot_SoundShader","augpara_distShot_SoundShader","augpara_Closure_SoundShader"};
		volumeFactor = 1.3;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
	};
	class augpara_tail_SoundSet
	{
		soundShaders[] = {"augpara_tailTrees_SoundShader","augpara_tailForest_SoundShader","augpara_tailMeadows_SoundShader","augpara_tailHouses_SoundShader","augpara_tailInterior_SoundShader","augpara_tailTrees_SoundShader","augpara_tailForest_mid_SoundShader","augpara_tailMeadows_mid_SoundShader","augpara_tailHouses_mid_SoundShader","augpara_tailInterior_mid_SoundShader"};
		volumeFactor = 1.1;
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
		distanceFilter = "HLC_rifleTailDistanceFilter";
	};
	class augpara_silencerShot_SoundSet
	{
		soundShaders[] = {"augpara_silencerShot_SoundShader","augpara_silencerShot_mid_SoundShader","augpara_Closure_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class augpara_silencerTail_SoundSet
	{
		soundShaders[] = {"augpara_silencerTailTrees_SoundShader","augpara_silencerTailForest_SoundShader","augpara_silencerTailMeadows_SoundShader","augpara_silencerTailHouses_SoundShader","augpara_silencerTailInterior_SoundShader"};
		volumeFactor = 0.7;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 0.1;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
};
class CfgPatches
{
	class hlcweapons_AUG
	{
		requiredaddons[] = {"hlcweapons_core","rhsusf_c_weapons"};
		units[] = {"HLC_AUG_ammobox","HLC_AUG_Weaponbox1","Weapon_hlc_rifle_aug","Weapon_hlc_rifle_auga1_t","Weapon_hlc_rifle_auga1_b","Weapon_hlc_rifle_auga1carb","Weapon_hlc_rifle_auga1carb_t","Weapon_hlc_rifle_auga1carb_b","Weapon_hlc_rifle_aughbar","Weapon_hlc_rifle_aughbar_t","Weapon_hlc_rifle_aughbar_b","Weapon_hlc_rifle_augpara","Weapon_hlc_rifle_augpara_t","Weapon_hlc_rifle_augpara_b","Weapon_hlc_rifle_auga2","Weapon_hlc_rifle_auga2_t","Weapon_hlc_rifle_auga2_b","Weapon_hlc_rifle_auga2carb","Weapon_hlc_rifle_auga2carb_t","Weapon_hlc_rifle_auga2carb_b","Weapon_hlc_rifle_auga2lsw","Weapon_hlc_rifle_auga2lsw_t","Weapon_hlc_rifle_auga2lsw_b","Weapon_hlc_rifle_auga2para","Weapon_hlc_rifle_auga2para_t","Weapon_hlc_rifle_auga2para_b","Weapon_hlc_rifle_augsr","Weapon_hlc_rifle_augsr_t","Weapon_hlc_rifle_augsr_b","Weapon_hlc_rifle_augsrcarb","Weapon_hlc_rifle_augsrcarb_t","Weapon_hlc_rifle_augsrcarb_b","Weapon_hlc_rifle_augsrhbar","Weapon_hlc_rifle_augsrhbar_t","Weapon_hlc_rifle_augsrhbar_b","Weapon_hlc_rifle_auga3","Weapon_hlc_rifle_auga3_bl","Weapon_hlc_rifle_auga3_b","Weapon_hlc_rifle_auga3_GL","Weapon_hlc_rifle_auga3_GL_bl","Weapon_hlc_rifle_auga3_GL_b"};
		weapons[] = {"hlc_barrel_standard","hlc_barrel_carbine","hlc_barrel_hbar","hlc_barrel_9mm","hlc_rifle_aug","hlc_rifle_auga1_t","hlc_rifle_auga1_B","hlc_rifle_auga1carb","hlc_rifle_auga1carb_t","hlc_rifle_auga1carb_b","hlc_rifle_aughbar","hlc_rifle_aughbar_b","hlc_rifle_aughbar_t","hlc_rifle_augpara","hlc_rifle_augpara_b","hlc_rifle_augpara_t","hlc_rifle_auga2","hlc_rifle_auga2_b","hlc_rifle_auga2_t","hlc_rifle_augsr","hlc_rifle_augsr_b","hlc_rifle_augsr_t","hlc_rifle_auga2para","hlc_rifle_auga2para_b","hlc_rifle_auga2para_t","hlc_rifle_auga2carb","hlc_rifle_auga2carb_t","hlc_rifle_auga2carb_b","hlc_rifle_augsrcarb","hlc_rifle_augsrcarb_t","hlc_rifle_augsrcarb_b","hlc_rifle_auga2lsw","hlc_rifle_auga2lsw_t","hlc_rifle_auga2lsw_b","hlc_rifle_augsrhbar","hlc_rifle_augsrhbar_b","hlc_rifle_augsrhbar_t","hlc_rifle_auga3","hlc_rifle_auga3_bl","hlc_rifle_auga3_b","hlc_rifle_auga3_GL","hlc_rifle_auga3_GL_BL","hlc_rifle_auga3_GL_B","hlc_rifle_auga3_grip","hlc_rifle_auga3_grip2","hhlc_rifle_auga3_grip3","hlc_rifle_auga3_bl_grip","hlc_rifle_auga3_bl_grip2","hhlc_rifle_auga3_bl_grip3","hlc_rifle_auga3_b_grip","hlc_rifle_auga3_b_grip2","hhlc_rifle_auga3_b_grip3"};
		magazines[] = {"hlc_30Rnd_556x45_B_AUG","hlc_30Rnd_556x45_SOST_AUG","hlc_30Rnd_556x45_SPR_AUG","hlc_30Rnd_556x45_T_AUG","hlc_40Rnd_556x45_B_AUG","hlc_40Rnd_556x45_SOST_AUG","hlc_40Rnd_556x45_SPR_AUG","hlc_25Rnd_9x19mm_M882_AUG","hlc_25Rnd_9x19mm_JHP_AUG","hlc_30Rnd_556x45_M_AUG","hlc_40Rnd_556x45_T_AUG","hlc_40Rnd_556x45_M_AUG"};
		author = "toadie";
		version = "1.9";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgSounds
{
	class hlc_barrelswapaug
	{
		name = "hlc_barrelswapaug";
		Sound[] = {"\hlc_wp_aug\snd\aug_swapbarrel.wss",1,1,15};
		titles[] = {};
	};
};
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class nia_rifle_grips_slot;
class asdg_UnderSlot;
class nia_charms_slot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems{};
};
class niarms_MuzzleSlot_augpara: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_snds_a6aug = 1;
	};
};
class CfgFunctions
{
	class HLC
	{
		class common
		{
			class barrel_init
			{
				file = "\hlc_wp_aug\pre_init.sqf";
				preInit = 1;
			};
			class getmagazinesprimary
			{
				file = "\hlc_wp_aug\scripts\fnc_getmagazinesprimary.sqf";
			};
			class barrelswitch
			{
				file = "\hlc_wp_aug\scripts\fnc_barrelswitch.sqf";
			};
		};
	};
};
class cfgMods
{
	class Mod_Base;
	class Niarms_AUG: Mod_Base
	{
		name = "NIArsenal: AR15 Rifles";
		picture = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_aug\tex\ui\NIArms1_ca.paa";
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class UserActions
		{
			class hlc_switch_barrel_standard
			{
				displayName = "Change Barrel (Standard)";
				priority = 1;
				radius = 1;
				position = "pilot";
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_standard_compatible_weapons) && ('hlc_barrel_standard' in items player)}";
				statement = "[this,'hlc_barrel_standard'] spawn hlc_fnc_barrelswitch";
			};
			class hlc_switch_barrel_carbine
			{
				displayName = "Change Barrel (Carbine)";
				priority = 1;
				radius = 1;
				position = "pilot";
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_carbine_compatible_weapons) && ('hlc_barrel_carbine' in items player)}";
				statement = "[this,'hlc_barrel_carbine'] spawn hlc_fnc_barrelswitch";
			};
			class hlc_switch_barrel_hbar
			{
				displayName = "Change Barrel (HBAR)";
				priority = 1;
				radius = 1;
				position = "pilot";
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_hbar_compatible_weapons) && ('hlc_barrel_hbar' in items player)}";
				statement = "[this,'hlc_barrel_hbar'] spawn hlc_fnc_barrelswitch";
			};
			class hlc_switch_barrel_9mm
			{
				displayName = "Change Barrel (9MM PARA)";
				priority = 1;
				radius = 1;
				position = "pilot";
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "HLC_ShowBarrelActions && player == this && ((currentweapon player) == (primaryweapon player)) && {(primaryweapon player in hlc_barrel_9mm_compatible_weapons) && ('hlc_barrel_9mm' in items player)}";
				statement = "[this,'hlc_barrel_9mm'] spawn hlc_fnc_barrelswitch";
			};
		};
	};
	class B_supplyCrate_F;
	class HLC_AUG_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC AUG Ammo";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 20;
			};
			class _xx_hlc_30Rnd_556x45_SOST_AUG
			{
				magazine = "hlc_30Rnd_556x45_SOST_AUG";
				count = 20;
			};
			class _xx_hlc_30Rnd_556x45_SPR_AUG
			{
				magazine = "hlc_30Rnd_556x45_SPR_AUG";
				count = 20;
			};
			class _xx_hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 20;
			};
			class _xx_hlc_40Rnd_556x45_SOST_AUG
			{
				magazine = "hlc_40Rnd_556x45_SOST_AUG";
				count = 20;
			};
			class _xx_hlc_40Rnd_556x45_SPR_AUG
			{
				magazine = "hlc_40Rnd_556x45_SPR_AUG";
				count = 20;
			};
			class _xx_hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 20;
			};
			class _xx_hlc_25Rnd_9x19mm_JHP_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_JHP_AUG";
				count = 20;
			};

		};
		class TransportItems
		{
			class _xx_hlc_muzzle_snds_a6AUG
			{
				name = "hlc_muzzle_snds_a6AUG";
				count = 10;
			};
			class _xx_hlc_barrel_standard
			{
				name = "hlc_barrel_standard";
				count = 5;
			};
			class _xx_hlc_barrel_carbine
			{
				name = "hlc_barrel_carbine";
				count = 5;
			};
			class _xx_hlc_barrel_hbar
			{
				name = "hlc_barrel_hbar";
				count = 5;
			};
			class _xx_hlc_barrel_9mm
			{
				name = "hlc_barrel_9mm";
				count = 5;
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
	class Weapon_hlc_rifle_aug: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aug
			{
				weapon = "hlc_rifle_aug";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga1_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga1_t
			{
				weapon = "hlc_rifle_auga1_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga1_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga1_b
			{
				weapon = "hlc_rifle_auga1_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga1carb: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 Carbine(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga1carb
			{
				weapon = "hlc_rifle_auga1carb";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga1carb_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 Carbine(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga1carb_b
			{
				weapon = "hlc_rifle_auga1carb_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga1carb_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 Carbine(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga1carb_t
			{
				weapon = "hlc_rifle_auga1carb_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aughbar: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 HBAR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aughbar
			{
				weapon = "hlc_rifle_aughbar";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aughbar_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 HBAR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aughbar_t
			{
				weapon = "hlc_rifle_aughbar_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aughbar_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 HBAR(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aughbar_b
			{
				weapon = "hlc_rifle_aughbar_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augpara: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 PARA(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augpara
			{
				weapon = "hlc_rifle_augpara";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augpara_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 PARA(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augpara_t
			{
				weapon = "hlc_rifle_augpara_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augpara_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA1 PARA(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augpara_b
			{
				weapon = "hlc_rifle_augpara_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2
			{
				weapon = "hlc_rifle_auga2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2_t
			{
				weapon = "hlc_rifle_auga2_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2_b
			{
				weapon = "hlc_rifle_auga2_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2carb: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 Carbine(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2carb
			{
				weapon = "hlc_rifle_auga2carb";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2carb_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 Carbine(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2carb_b
			{
				weapon = "hlc_rifle_auga2carb_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2carb_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 Carbine(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2carb_t
			{
				weapon = "hlc_rifle_auga2carb_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2lsw: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 HBAR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2lsw
			{
				weapon = "hlc_rifle_auga2lsw";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2lsw_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 HBAR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2lsw_t
			{
				weapon = "hlc_rifle_auga2lsw_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2lsw_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 HBAR(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2lsw_b
			{
				weapon = "hlc_rifle_auga2lsw_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2para: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 PARA(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2para
			{
				weapon = "hlc_rifle_auga2para";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2para_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 PARA(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2para_t
			{
				weapon = "hlc_rifle_auga2para_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga2para_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2 PARA(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga2para_b
			{
				weapon = "hlc_rifle_auga2para_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsr: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsr
			{
				weapon = "hlc_rifle_augsr";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsr_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsr_t
			{
				weapon = "hlc_rifle_augsr_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsr_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA2(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsr_b
			{
				weapon = "hlc_rifle_augsr_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrcarb: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR Carbine(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrcarb
			{
				weapon = "hlc_rifle_augsrcarb";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrcarb_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR Carbine(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrcarb_b
			{
				weapon = "hlc_rifle_augsrcarb_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrcarb_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR Carbine(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrcarb_t
			{
				weapon = "hlc_rifle_augsrcarb_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrhbar: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR HBAR(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrhbar
			{
				weapon = "hlc_rifle_augsrhbar";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrhbar_t: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR HBAR(Tan)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrhbar_t
			{
				weapon = "hlc_rifle_augsrhbar_t";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_augsrhbar_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUG-SR HBAR(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_augsrhbar_b
			{
				weapon = "hlc_rifle_augsrhbar_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3
			{
				weapon = "hlc_rifle_auga3";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3_bl: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3(Blue)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3_bl
			{
				weapon = "hlc_rifle_auga3_bl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3_b
			{
				weapon = "hlc_rifle_auga3_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3_GL: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3 GL(OD)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3_GL
			{
				weapon = "hlc_rifle_auga3_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3_GL_bl: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3 GL(Blue)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3_GL_bl
			{
				weapon = "hlc_rifle_auga3_GL_bl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_auga3_GL_b: Weapon_Base_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		scopeCurator = 2;
		displayName = "AUGA3 GL(Black)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_auga3_GL_b
			{
				weapon = "hlc_rifle_auga3_GL_b";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 1;
			};
		};
	};
	class HLC_AUG_Weaponbox1: B_supplyCrate_F
	{
		dlc = "Niarms_AUG";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC AUG Weapon Cache";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_556x45_B_AUG
			{
				magazine = "hlc_30Rnd_556x45_B_AUG";
				count = 30;
			};
			class _xx_hlc_30Rnd_556x45_SOST_AUG
			{
				magazine = "hlc_30Rnd_556x45_SOST_AUG";
				count = 30;
			};
			class _xx_hlc_30Rnd_556x45_SPR_AUG
			{
				magazine = "hlc_30Rnd_556x45_SPR_AUG";
				count = 30;
			};
			class _xx_hlc_40Rnd_556x45_B_AUG
			{
				magazine = "hlc_40Rnd_556x45_B_AUG";
				count = 30;
			};
			class _xx_hlc_40Rnd_556x45_SOST_AUG
			{
				magazine = "hlc_40Rnd_556x45_SOST_AUG";
				count = 30;
			};
			class _xx_hlc_40Rnd_556x45_SPR_AUG
			{
				magazine = "hlc_40Rnd_556x45_SPR_AUG";
				count = 30;
			};
			class _xx_hlc_25Rnd_9x19mm_M882_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_M882_AUG";
				count = 30;
			};
			class _xx_hlc_25Rnd_9x19mm_JHP_AUG
			{
				magazine = "hlc_25Rnd_9x19mm_JHP_AUG";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_aug
			{
				weapon = "hlc_rifle_aug";
				count = 10;
			};
			class _xx_hlc_rifle_auga1carb
			{
				weapon = "hlc_rifle_auga1carb";
				count = 10;
			};
			class _xx_hlc_rifle_aughbar
			{
				weapon = "hlc_rifle_aughbar";
				count = 10;
			};
			class _xx_hlc_rifle_augpara
			{
				weapon = "hlc_rifle_augpara";
				count = 10;
			};
			class _xx_hlc_rifle_auga2
			{
				weapon = "hlc_rifle_auga2";
				count = 10;
			};
			class _xx_hlc_rifle_auga2carb
			{
				weapon = "hlc_rifle_auga2carb";
				count = 10;
			};
			class _xx_hlc_rifle_auga2lsw
			{
				weapon = "hlc_rifle_auga2lsw";
				count = 10;
			};
			class _xx_hlc_rifle_auga2para
			{
				weapon = "hlc_rifle_auga2para";
				count = 10;
			};
			class _xx_hlc_rifle_augsr
			{
				weapon = "hlc_rifle_augsr";
				count = 10;
			};
			class _xx_hlc_rifle_augsrcarb
			{
				weapon = "hlc_rifle_augsrcarb";
				count = 10;
			};
			class _xx_hlc_rifle_augsrhbar
			{
				weapon = "hlc_rifle_augsrhbar";
				count = 10;
			};
			class _xx_hlc_rifle_auga3
			{
				weapon = "hlc_rifle_auga3";
				count = 10;
			};
			class _xx_hlc_rifle_auga3_GL
			{
				weapon = "hlc_rifle_auga3_GL";
				count = 10;
			};
			class _xx_hlc_rifle_auga1_t
			{
				weapon = "hlc_rifle_auga1_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga1carb_t
			{
				weapon = "hlc_rifle_auga1carb_t";
				count = 10;
			};
			class _xx_hlc_rifle_aughbar_t
			{
				weapon = "hlc_rifle_aughbar_t";
				count = 10;
			};
			class _xx_hlc_rifle_augpara_t
			{
				weapon = "hlc_rifle_augpara_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga2_t
			{
				weapon = "hlc_rifle_auga2_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga2carb_t
			{
				weapon = "hlc_rifle_auga2carb_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga2lsw_t
			{
				weapon = "hlc_rifle_auga2lsw_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga2para_t
			{
				weapon = "hlc_rifle_auga2para_t";
				count = 10;
			};
			class _xx_hlc_rifle_augsr_t
			{
				weapon = "hlc_rifle_augsr_t";
				count = 10;
			};
			class _xx_hlc_rifle_augsrcarb_t
			{
				weapon = "hlc_rifle_augsrcarb_t";
				count = 10;
			};
			class _xx_hlc_rifle_augsrhbar_t
			{
				weapon = "hlc_rifle_augsrhbar_t";
				count = 10;
			};
			class _xx_hlc_rifle_auga3_bl
			{
				weapon = "hlc_rifle_auga3_bl";
				count = 10;
			};
			class _xx_hlc_rifle_auga3_GL_bl
			{
				weapon = "hlc_rifle_auga3_GL_bl";
				count = 10;
			};
			class _xx_hlc_rifle_auga1_b
			{
				weapon = "hlc_rifle_auga1_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga1carb_b
			{
				weapon = "hlc_rifle_auga1carb_b";
				count = 10;
			};
			class _xx_hlc_rifle_aughbar_b
			{
				weapon = "hlc_rifle_aughbar_b";
				count = 10;
			};
			class _xx_hlc_rifle_augpara_b
			{
				weapon = "hlc_rifle_augpara_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga2_b
			{
				weapon = "hlc_rifle_auga2_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga2carb_b
			{
				weapon = "hlc_rifle_auga2carb_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga2lsw_b
			{
				weapon = "hlc_rifle_auga2lsw_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga2para_b
			{
				weapon = "hlc_rifle_auga2para_b";
				count = 10;
			};
			class _xx_hlc_rifle_augsr_b
			{
				weapon = "hlc_rifle_augsr_b";
				count = 10;
			};
			class _xx_hlc_rifle_augsrcarb_b
			{
				weapon = "hlc_rifle_augsrcarb_b";
				count = 10;
			};
			class _xx_hlc_rifle_augsrhbar_b
			{
				weapon = "hlc_rifle_augsrhbar_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga3_b
			{
				weapon = "hlc_rifle_auga3_b";
				count = 10;
			};
			class _xx_hlc_rifle_auga3_GL_b
			{
				weapon = "hlc_rifle_auga3_GL_b";
				count = 10;
			};
		};
		class TransportItems
		{
			class _xx_hlc_muzzle_snds_a6AUG
			{
				name = "hlc_muzzle_snds_a6AUG";
				count = 10;
			};
			class _xx_hlc_barrel_standard
			{
				name = "hlc_barrel_standard";
				count = 5;
			};
			class _xx_hlc_barrel_carbine
			{
				name = "hlc_barrel_carbine";
				count = 5;
			};
			class _xx_hlc_barrel_hbar
			{
				name = "hlc_barrel_hbar";
				count = 5;
			};
			class _xx_hlc_barrel_9mm
			{
				name = "hlc_barrel_9mm";
				count = 5;
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
};
class CfgMagazines
{
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class hlc_30Rnd_556x45_B_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_30Rnd_556x45_B_AUG";
		displayname = "$STR_NIA_30Rnd_556x45_B_AUG";
		initspeed = 974.8;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_greentip_co.paa","hlc_core\tex\magazines\308_greentip_co.paa"};
		modelSpecialIsProxy = 1;
		scope = 2;
		tracersevery = 0;
		mass = 10.8;
		displaynameshort = "$STR_NIA_556_EPR";
		author = "Spartan0536,Toadie";
	};
	class hlc_30Rnd_556x45_SOST_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_Mk318_Ball";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_30Rnd_556x45_SOST_AUG";
		displayname = "$STR_NIA_30Rnd_556x45_SOST_AUG";
		initspeed = 954.4;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_aug_SOST_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
		scope = 2;
		tracersevery = 0;
		mass = 11.8;
		displaynameshort = "$STR_NIA_556_SOST";
		author = "Spartan0536,Toadie";
	};
	class hlc_30Rnd_556x45_SPR_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_Mk262_Ball";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_30Rnd_556x45_SPR_AUG";
		displayname = "$STR_NIA_30Rnd_556x45_SPR_AUG";
		initspeed = 868.7;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_aug_SPR_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
		scope = 2;
		tracersevery = 0;
		mass = 12.8;
		displaynameshort = "$STR_NIA_556_SPR";
		author = "Spartan0536,Toadie";
	};
	class hlc_30Rnd_556x45_T_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_30Rnd_556x45_T_AUG";
		displayname = "$STR_NIA_30Rnd_556x45_T_AUG";
		initspeed = 974.8;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_redtip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
		scope = 2;
		tracersevery = 1;
		mass = 10.8;
		displaynameshort = "$STR_NIA_556_Tracer";
		author = "Spartan0536,Toadie";
	};
	class hlc_30Rnd_556x45_M_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_30Rnd_556x45_M_AUG";
		displayname = "$STR_NIA_30Rnd_556x45_M_AUG";
		initspeed = 974.8;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_aug_m_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_greentip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
		scope = 2;
		tracersevery = 4;
		mass = 10.8;
		displaynameshort = "$STR_NIA_556_M";
		author = "Spartan0536,Toadie";
	};
	
	class hlc_40Rnd_556x45_B_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855A1_Ball";
		count = 42;
		descriptionshort = "$STR_NIA_DESC_42Rnd_556x45_B_AUG";
		displayname = "$STR_NIA_42Rnd_556x45_B_AUG";
		initspeed = 974.8;
		picture = "\hlc_core\tex\ui\ammo\m_augball_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_greentip_co.paa","hlc_core\tex\magazines\308_greentip_co.paa"};
		scope = 2;
		tracersevery = 0;
		mass = 14;
		displaynameshort = "$STR_NIA_556_EPR";
		author = "Spartan0536,Toadie";
	};
	class hlc_40Rnd_556x45_SOST_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_Mk318_Ball";
		count = 42;
		descriptionshort = "$STR_NIA_DESC_42Rnd_556x45_SOST_AUG";
		displayname = "$STR_NIA_42Rnd_556x45_SOST_AUG";
		initspeed = 954.4;
		picture = "\hlc_core\tex\ui\ammo\m_aug_SOST_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
		scope = 2;
		tracersevery = 3;
		mass = 15.2;
		displaynameshort = "$STR_NIA_556_SOST";
		author = "Spartan0536,Toadie";
	};
	class hlc_40Rnd_556x45_SPR_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_Mk262_Ball";
		count = 42;
		descriptionshort = "$STR_NIA_DESC_42Rnd_556x45_SPR_AUG";
		displayname = "$STR_NIA_42Rnd_556x45_SPR_AUG";
		initspeed = 868.7;
		picture = "\hlc_core\tex\ui\ammo\m_aug_SPR_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_co.paa","hlc_core\tex\magazines\308_co.paa"};
		scope = 2;
		tracersevery = 3;
		mass = 15.8;
		displaynameshort = "$STR_NIA_556_SPR";
		author = "Spartan0536,Toadie";
	};
	class hlc_40Rnd_556x45_T_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		count = 42;
		descriptionshort = "$STR_NIA_DESC_42Rnd_556x45_T_AUG";
		displayname = "$STR_NIA_42Rnd_556x45_T_AUG";
		initspeed = 974.8;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_augtracer_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_redtip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
		scope = 2;
		tracersevery = 1;
		mass = 14;
		displaynameshort = "$STR_NIA_556_Tracer";
		author = "Spartan0536,Toadie";
	};
	class hlc_40Rnd_556x45_M_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		count = 30;
		descriptionshort = "$STR_NIA_DESC_42Rnd_556x45_M_AUG";
		displayname = "$STR_NIA_42Rnd_556x45_M_AUG";
		initspeed = 974.8;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_aug_m_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\30rnd_556NATO_AUG.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = {"roundtype1","roundtype2"};
		hiddenSelectionsTextures[] = {"hlc_core\tex\magazines\308_greentip_co.paa","hlc_core\tex\magazines\308_redtip_co.paa"};
		scope = 2;
		tracersevery = 4;
		mass = 14;
		displaynameshort = "$STR_NIA_556_M";
		author = "Spartan0536,Toadie";
	};
	class hlc_25Rnd_9x19mm_M882_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_9x19_FMJ";
		count = 25;
		descriptionshort = "$STR_NIA_DESC_25Rnd_9x19mm_M882_AUG";
		displayname = "$STR_NIA_25Rnd_9x19mm_M882_AUG";
		initspeed = 416.1;
		picture = "\hlc_wp_aug\tex\ui\m_aug9mm_ball_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
		modelSpecialIsProxy = 1;
		scope = 2;
		tracersevery = 0;
		mass = 12.8;
		displaynameshort = "$STR_NIA_9x19mm_FMJ";
		author = "Spartan0536,Toadie";
	};
	class hlc_25Rnd_9x19mm_JHP_AUG: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		dlc = "Niarms_AUG";
		ammo = "rhs_ammo_9x19_JHP";
		count = 25;
		descriptionshort = "$STR_NIA_DESC_25Rnd_9x19mm_JHP_AUG";
		displayname = "$STR_NIA_25Rnd_9x19mm_JHP_AUG";
		initspeed = 315.8;
		picture = "\hlc_wp_aug\tex\ui\m_aug9mm_JHP_ca.paa";
		model = "\hlc_wp_aug\mesh\magazine\magazine2.p3d";
		modelSpecial = "\hlc_wp_aug\mesh\magazine\proxy\25rnd_9x19mm_AUG.p3d";
		modelSpecialIsProxy = 1;
		scope = 2;
		tracersevery = 0;
		mass = 12.8;
		displaynameshort = "$STR_NIA_9x19mm_FMJ";
		author = "Spartan0536,Toadie";
	};
};
class CfgMagazineWells
{
	class CBA_556x45_STEYR
	{
		NIA_mags[] = {"hlc_30Rnd_556x45_B_AUG","hlc_30Rnd_556x45_SOST_AUG","hlc_30Rnd_556x45_SPR_AUG","hlc_30Rnd_556x45_T_AUG","hlc_30Rnd_556x45_M_AUG","hlc_40Rnd_556x45_B_AUG","hlc_40Rnd_556x45_SOST_AUG","hlc_40Rnd_556x45_SPR_AUG","hlc_40Rnd_556x45_T_AUG","hlc_40Rnd_556x45_M_AUG"};
	};
	class CBA_9x19_STEYR
	{
		NIA_mags[] = {"hlc_25Rnd_9x19mm_M882_AUG","hlc_25Rnd_9x19mm_JHP_AUG"};
	};
};
class CfgRecoils
{
	class recoil_ebr;
	class recoil_AUG9mm: recoil_ebr
	{
		muzzleOuter[] = {0.1,0.4,0.2,0.2};
		kickBack[] = {0.01,0.02};
		temporary = 0.007;
		permanent = 0.09;
	};
};
class CfgWeapons
{
	class ItemCore;
	class muzzle_snds_H;
	class hlc_muzzle_snds_a6AUG: muzzle_snds_H
	{
		dlc = "Niarms_AUG";
		author = "Toadie";
		displayName = "$STR_NIA_barrel_agenda6";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "hlc_wp_aug\mesh\agendasix\a6";
	};
	class hlc_barrel_standard: Itemcore
	{
		dlc = "Niarms_AUG";
		author = "Toadie";
		displayName = "$STR_NIA_barrel_standard";
		descriptionshort = "$STR_NIA_barrel_standard_DESC";
		picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
		model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
		scope = 2;
		class ItemInfo
		{
			mass = 20;
			type = 201;
		};
	};
	class hlc_barrel_carbine: Itemcore
	{
		dlc = "Niarms_AUG";
		author = "Toadie";
		displayName = "$STR_NIA_barrel_carbine";
		descriptionshort = "$STR_NIA_barrel_carbine_DESC";
		picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
		model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
		scope = 2;
		class ItemInfo
		{
			mass = 17;
			type = 201;
		};
	};
	class hlc_barrel_hbar: Itemcore
	{
		dlc = "Niarms_AUG";
		author = "Toadie";
		displayName = "$STR_NIA_barrel_hbar";
		descriptionshort = "$STR_NIA_barrel_HBAR_DESC";
		picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
		model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
		scope = 2;
		class ItemInfo
		{
			mass = 30;
			type = 201;
		};
	};
	class hlc_barrel_9mm: Itemcore
	{
		dlc = "Niarms_AUG";
		author = "Toadie";
		descriptionshort = "$STR_NIA_barrel_9mm_DESC";
		displayName = "$STR_NIA_barrel_9mm";
		picture = "\hlc_wp_aug\tex\ui\gear_barrel_9mm_ca.paa";
		model = "hlc_wp_aug\mesh\pickup\9mm_kit.p3d";
		scope = 2;
		class ItemInfo
		{
			mass = 20;
			type = 201;
		};
	};
	class Rifle;
	class UGL_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_aug_base: Rifle_Base_F
	{
		recoil = "recoil_trg21";
		dlc = "Niarms_AUG";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		author = "Toadie";
		scope = 0;
		magazineReloadSwitchPhase = 0.5;
		aidispersioncoefx = 3;
		aidispersioncoefy = 5;
		class Library
		{
			libTextDesc = "Izhmash AK74";
		};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
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
			mass = 33;
			class PointerSlot{};
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "$STR_NIA_AUG_DESC";
		magazines[] = {"hlc_30Rnd_556x45_B_AUG","hlc_30Rnd_556x45_SOST_AUG","hlc_30Rnd_556x45_SPR_AUG","hlc_30Rnd_556x45_T_AUG","hlc_30Rnd_556x45_M_AUG","hlc_40Rnd_556x45_B_AUG","hlc_40Rnd_556x45_SOST_AUG","hlc_40Rnd_556x45_SPR_AUG","hlc_40Rnd_556x45_T_AUG","hlc_40Rnd_556x45_M_AUG"};
		magazineWell[] = {"CBA_556x45_STEYR"};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		inertia = 0.36;
		dexterity = 1.6413774;
		aimTransitionSpeed = 1.1489642;
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
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadtime = "(60/680)";
			dispersion = 0.000308356;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet","aug_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet","aug_silencerTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadtime = "(60/680)";
			dispersion = 0.000308356;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"aug_Shot_SoundSet","aug_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"aug_silencerShot_SoundSet","aug_silencerTail_SoundSet"};
			};
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
			maxRange = 20;
			maxRangeProbab = 0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 900;
			maxRangeProbab = 0.1;
		};
		drysound[] = {"\hlc_wp_aug\snd\clipempty_rifle",1,1,10};
		reloadMagazineSound[] = {"hlc_wp_aug\snd\f88a1_reload2",1,1,30};
		class ItemInfo
		{
			priority = 1;
		};
	};
	class hlc_rifle_aug: hlc_aug_base
	{
		author = "Sarv, Tenoyl, Toadie";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		AB_barrelTwist = 9;
		AB_barrelLength = 20;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 508.0;
		inertia = 0.36;
		dexterity = 1.6413774;
		aimTransitionSpeed = 1.1489642;
		scope = 2;
		displayName = "$STR_NIA_AUGA1_OD";
		model = "hlc_wp_aug\mesh\auga1\auga1.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1OD_x_ca";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\aughands_hands.rtm"};
		reloadAction = "HLC_GestureReloadAUG";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		bg_bipod = 0;
		optics = 1;
		visionmode[] = {"Normal"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_aug","hlc_rifle_auga1carb","hlc_rifle_aughbar","hlc_rifle_augpara"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
		class Library
		{
			libTextDesc = "Steyr AUG A1";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 79;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class CowsSlot{};
			class Charmslot: nia_charms_slot{};
		};
		modes[] = {"FullAuto","Single","fullauto_medium"};
		class Single: Single
		{
			showToPlayer = 0;
			maxRange = 600;
		};
		class OpticsModes
		{
			class ACOG
			{
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomInit = 0.166;
				opticsZoomMin = 0.166;
				opticsZoomMax = 0.166;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memorypointcamera = "eye";
				opticsid = 1;
				visionmode[] = {"Normal"};
			};
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye2";
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
	class hlc_rifle_auga1_t: hlc_rifle_aug
	{
		author = "Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA1_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga1TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_t","hlc_rifle_auga1carb_t","hlc_rifle_aughbar_t","hlc_rifle_augpara_t"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_auga1_b: hlc_rifle_aug
	{
		author = "Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA1_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_b","hlc_rifle_aughbar_b","hlc_rifle_augpara_b"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_auga1carb: hlc_rifle_aug
	{
		author = "Sarv, Tenoyl, Toadie";
		AB_barrelTwist = 9;
		AB_barrelLength = 16;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 406.4;
		inertia = 0.33;
		dexterity = 1.7360195;
		aimTransitionSpeed = 1.2152137;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineOD_x_ca";
		displayName = "$STR_NIA_AUGA1_Carbine_OD";
		descriptionShort = "$STR_NIA_AUG_Carbine_DESC";
		hiddenSelections[] = {"Camo"};
		reloadAction = "HLC_GestureReloadAUG";
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_aug","hlc_rifle_auga1carb","hlc_rifle_aughbar","hlc_rifle_augpara"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"augcarbine_Shot_SoundSet","augcarbine_Tail_SoundSet"};
			};
			dispersion = 0.000596155;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"augcarbine_Shot_SoundSet","augcarbine_Tail_SoundSet"};
			};
			dispersion = 0.000596155;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
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
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
		};
	};
	class hlc_rifle_auga1carb_B: hlc_rifle_auga1carb
	{
		author = "Sarv, Tenoyl, Toadie";
		model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		displayName = "$STR_NIA_AUGA1_Carbine_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_black_co.paa"};
		modes[] = {"FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_b","hlc_rifle_aughbar_b","hlc_rifle_augpara_b"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_auga1carb_t: hlc_rifle_auga1carb
	{
		author = "Sarv, Tenoyl, Toadie";
		model = "hlc_wp_aug\mesh\auga1\AUGa1_Carbine.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1carbinetan_x_ca";
		displayName = "$STR_NIA_AUGA1_Carbine_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		modes[] = {"FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_t","hlc_rifle_auga1carb_t","hlc_rifle_aughbar_t","hlc_rifle_augpara_t"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_aughbar: hlc_rifle_aug
	{
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		author = "Sarv, Tenoyl, Toadie";
		inertia = 0.39;
		dexterity = 1.5612919;
		aimTransitionSpeed = 1.0929043;
		AB_barrelTwist = 9;
		AB_barrelLength = 24;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 609.6;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		bg_bipod = 1;
		cse_bipod = 1;
		tmr_autorest_deployable = 1;
		model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarOD_x_ca";
		displayName = "$STR_NIA_AUGA1_HBAR_OD";
		descriptionShort = "$STR_NIA_AUG_HBAR_DESC";
		hiddenSelections[] = {"Camo"};
		reloadAction = "HLC_GestureReloadAUG";
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_aug","hlc_rifle_auga1carb","hlc_rifle_aughbar","hlc_rifle_augpara"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"aughbar_Shot_SoundSet","aughbar_Tail_SoundSet"};
			};
			dispersion = 0.000266686;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"aughbar_Shot_SoundSet","aughbar_Tail_SoundSet"};
			};
			dispersion = 0.000266686;
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
		modes[] = {"FullAuto","close","medium","far"};
		class close: FullAuto
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 7;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 5;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 5;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.3;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class far: close
		{
			requiredOpticType = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 86;
		};
	};
	class hlc_rifle_aughbar_B: hlc_rifle_aughbar
	{
		author = "Sarv, Tenoyl, Toadie";
		model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarBLACK_x_ca";
		displayName = "$STR_NIA_AUGA1_HBAR_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_black_co.paa"};
		modes[] = {"FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_b","hlc_rifle_aughbar_b","hlc_rifle_augpara_b"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_aughbar_t: hlc_rifle_aughbar
	{
		author = "Sarv, Tenoyl, Toadie";
		model = "hlc_wp_aug\mesh\auga1\auga1_hbar.p3d";
		picture = "\hlc_wp_aug\tex\ui\gear_auga1hbarTAN_x_ca";
		displayName = "$STR_NIA_AUGA1_HBAR_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		modes[] = {"FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_t","hlc_rifle_auga1carb_t","hlc_rifle_aughbar_t","hlc_rifle_augpara_t"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_augpara: hlc_aug_base
	{
		recoil = "recoil_AUG9mm";
		author = "Sarv, Tenoyl, Toadie";
		inertia = 0.31;
		dexterity = 1.8092874;
		aimTransitionSpeed = 1.2665012;
		AB_barrelTwist = 9;
		AB_barrelLength = 16.5;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 419.1;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		scope = 2;
		magazines[] = {"hlc_25Rnd_9x19mm_M882_AUG","hlc_25Rnd_9x19mm_JHP_AUG"};
		magazineWell[] = {"CBA_9x19_STEYR"};
		displayName = "$STR_NIA_AUGA1_9mm_OD";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		model = "hlc_wp_aug\mesh\augSMG\AUGa1.p3d";
		reloadAction = "HLC_GestureReloadAUGPara";
		descriptionShort = "$STR_NIA_AUGPAra_DESC";
		reloadMagazineSound[] = {"hlc_wp_aug\snd\aug-arra_reload",1,1,30};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\aughands_hands.rtm"};
		optics = 0;
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mm_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_aug","hlc_rifle_auga1carb","hlc_rifle_aughbar","hlc_rifle_augpara"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
			class CowsSlot{};
			class MuzzleSlot: niarms_MuzzleSlot_augpara
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class Charmslot: nia_charms_slot{};
		};
		modes[] = {"FullAuto","Single","fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\aug_para_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\aug_para_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_Shot_SoundSet","augpara_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_silencerShot_SoundSet","augpara_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.001044521;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_Shot_SoundSet","augpara_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_silencerShot_SoundSet","augpara_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.001044521;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.01;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 0.5;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.5;
			maxRange = 60;
			maxRangeProbab = 0.4;
		};
		class OpticsModes
		{
			class ACOG
			{
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomInit = 0.166;
				opticsZoomMin = 0.166;
				opticsZoomMax = 0.166;
				distanceZoomMin = 100;
				distanceZoomMax = 100;
				memorypointcamera = "eye";
				opticsid = 1;
				visionmode[] = {"Normal"};
			};
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye2";
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
	class hlc_rifle_augpara_b: hlc_rifle_augpara
	{
		author = "Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA1_9mm_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mmBLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_b","hlc_rifle_auga1carb_b","hlc_rifle_aughbar_b","hlc_rifle_augpara_b"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
	};
	class hlc_rifle_augpara_t: hlc_rifle_augpara
	{
		author = "Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA1_9mm_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mmTAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga1_t","hlc_rifle_auga1carb_t","hlc_rifle_aughbar_t","hlc_rifle_augpara_t"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
	};
	class hlc_rifle_auga2: hlc_rifle_aug
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		inertia = 0.37;
		dexterity = 1.6132396;
		aimTransitionSpeed = 1.1292677;
		AB_barrelTwist = 9;
		AB_barrelLength = 20;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 508.0;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		scope = 2;
		picture = "\hlc_wp_aug\tex\ui\gear_auga2OD_x_ca";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\aughands_hands.rtm"};
		reloadAction = "HLC_GestureReloadAUG";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2","hlc_rifle_auga2carb","hlc_rifle_auga2lsw","hlc_rifle_auga2para"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		bg_bipod = 0;
		displayName = "$STR_NIA_AUGA2_OD";
		class OpticsModes
		{
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {"",""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		model = "hlc_wp_aug\mesh\auga2\auga2_mil.p3d";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			showToPlayer = 0;
			maxRange = 500;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		class Library
		{
			libTextDesc = "Steyr AUG A2";
		};
	};
	class hlc_rifle_auga2_t: hlc_rifle_auga2
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_t","hlc_rifle_auga2carb_t","hlc_rifle_auga2lsw_T","hlc_rifle_auga2para_T"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_auga2_b: hlc_rifle_auga2
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_b","hlc_rifle_auga2carb_B","hlc_rifle_auga2lsw_B","hlc_rifle_auga2para_b"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_auga2para: hlc_aug_base
	{
		recoil = "recoil_AUG9mm";
		author = "Sproily, Sarv, Tenoyl, Toadie";
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		scope = 2;
		AB_barrelTwist = 9;
		AB_barrelLength = 16.5;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 419.1;
		magazines[] = {"hlc_25Rnd_9x19mm_M882_AUG","hlc_25Rnd_9x19mm_JHP_AUG"};
		magazineWell[] = {"CBA_9x19_STEYR"};
		displayName = "$STR_NIA_AUGA2_9mm_OD";
		hiddenSelections[] = {"Camo"};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\aughands_hands.rtm"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		model = "hlc_wp_aug\mesh\augSMG\AUGa2.p3d";
		reloadAction = "HLC_GestureReloadAUGPara";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2","hlc_rifle_auga2carb","hlc_rifle_auga2lsw","hlc_rifle_auga2para"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
		reloadMagazineSound[] = {"hlc_wp_aug\snd\aug-arra_reload",1,1,30};
		descriptionShort = "$STR_NIA_AUGPAra_DESC";
		inertia = 0.31;
		dexterity = 1.8092874;
		aimTransitionSpeed = 1.2665012;
		optics = 0;
		class OpticsModes
		{
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {"",""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2_x_ca";
		modes[] = {"FullAuto","Single","fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\aug_para_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\aug_para_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_Shot_SoundSet","augpara_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_silencerShot_SoundSet","augpara_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.001044521;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				closure2[] = {"\hlc_wp_aug\snd\f88a1_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_Shot_SoundSet","augpara_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"augpara_silencerShot_SoundSet","augpara_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.001044521;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
			aiRateOfFireDispersion = 2;
			minRange = 40;
			minRangeProbab = 0.9;
			midRange = 80;
			midRangeProbab = 0.5;
			maxRange = 250;
			maxRangeProbab = 0.1;
		};
		class fullauto_medium: FullAuto
		{
			burst = 3;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 40;
			midRangeProbab = 0.5;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
			class MuzzleSlot: niarms_MuzzleSlot_augpara
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class Charmslot: nia_charms_slot{};
		};
		class Library
		{
			libTextDesc = "Steyr AUG A2";
		};
	};
	class hlc_rifle_auga2para_t: hlc_rifle_auga2para
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_9mm_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_t","hlc_rifle_auga2carb_t","hlc_rifle_auga2lsw_T","hlc_rifle_auga2para_T"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
	};
	class hlc_rifle_auga2para_b: hlc_rifle_auga2para
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_9mm_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_aug9mmA2BLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_b","hlc_rifle_auga2carb_B","hlc_rifle_auga2lsw_B","hlc_rifle_auga2para_b"};
		HLC_CurrentBarrel = "hlc_barrel_9mm";
	};
	class hlc_rifle_auga2carb: hlc_rifle_auga2
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		AB_barrelTwist = 9;
		AB_barrelLength = 18;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 457.2;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		displayName = "$STR_NIA_AUGA2_Carbine_OD";
		descriptionShort = "$STR_NIA_AUG_Carbine_DESC";
		model = "hlc_wp_aug\mesh\auga2\AUGa2_carbine.p3d";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2","hlc_rifle_auga2carb","hlc_rifle_auga2lsw","hlc_rifle_auga2para"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
		picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineOD_x_ca";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"augcarbine_Shot_SoundSet","augcarbine_Tail_SoundSet"};
			};
			dispersion = 0.000555596;
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"augcarbine_Shot_SoundSet","augcarbine_Tail_SoundSet"};
			};
			dispersion = 0.000555596;
			maxRange = 400;
		};
		class fullauto_medium: FullAuto
		{
			burst = 3;
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.1;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 450;
			aiRateOfFireDispersion = 3;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		inertia = 0.34;
		dexterity = 1.7026169;
		aimTransitionSpeed = 1.1918318;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 74;
		};
	};
	class hlc_rifle_auga2carb_t: hlc_rifle_auga2carb
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_Carbine_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_t","hlc_rifle_auga2carb_t","hlc_rifle_auga2lsw_T","hlc_rifle_auga2para_T"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_auga2carb_b: hlc_rifle_auga2carb
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_Carbine_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_b","hlc_rifle_auga2carb_B","hlc_rifle_auga2lsw_B","hlc_rifle_auga2para_b"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_auga2lsw: hlc_rifle_aughbar
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		inertia = 0.38;
		dexterity = 1.5865825;
		aimTransitionSpeed = 1.1106077;
		AB_barrelTwist = 9;
		AB_barrelLength = 24;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 609.6;
		agm_bipod = 1;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		bg_bipod = 1;
		cse_bipod = 1;
		model = "hlc_wp_aug\mesh\auga2\auga2_hbar.p3d";
		displayName = "$STR_NIA_AUGA2_HBAR_OD";
		descriptionShort = "$STR_NIA_AUG_HBAR_DESC";
		picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarOD_x_ca";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2","hlc_rifle_auga2carb","hlc_rifle_auga2lsw","hlc_rifle_auga2para"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
		class OpticsModes
		{
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {"",""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 83;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		class Library
		{
			libTextDesc = "Steyr AUG A2";
		};
		class FullAuto: FullAuto
		{
			reloadtime = "(60/750)";
		};
		class Single: Single
		{
			reloadtime = "(60/750)";
		};
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class close: FullAuto
		{
			burst = 8;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 450;
			aiRateOfFireDispersion = 2;
			minRange = 80;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 650;
			maxRangeProbab = 0.1;
		};
		class far_optic1: close
		{
			requiredOpticType = 1;
			burst = 3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 800;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.8;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType = 2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 450;
			aiRateOfFireDispersion = 3;
			minRange = 30;
			minRangeProbab = 0.8;
			midRange = 300;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.1;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class hlc_rifle_auga2lsw_t: hlc_rifle_auga2lsw
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_HBAR_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_t","hlc_rifle_auga2carb_t","hlc_rifle_auga2lsw_T","hlc_rifle_auga2para_T"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_auga2lsw_b: hlc_rifle_auga2lsw
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUGA2_HBAR_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_auga2_b","hlc_rifle_auga2carb_B","hlc_rifle_auga2lsw_B","hlc_rifle_auga2para_b"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_augsr: hlc_rifle_auga2
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\aughands_hands.rtm"};
		reloadAction = "HLC_GestureReloadAUG";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr","hlc_rifle_augsrcarb","hlc_rifle_augsrhbar"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		bg_bipod = 0;
		displayName = "$STR_NIA_AUG_SR_OD";
		inertia = 0.37;
		dexterity = 1.6132396;
		aimTransitionSpeed = 1.1292677;
		model = "hlc_wp_aug\mesh\auga2\auga2.p3d";
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			showToPlayer = 1;
			minRange = 0;
		};
	};
	class hlc_rifle_augsr_t: hlc_rifle_augsr
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_t","hlc_rifle_augsrcarb_t","hlc_rifle_augsrhbar_t"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_augsr_b: hlc_rifle_augsr
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2TAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_b","hlc_rifle_augsrcarb_B","hlc_rifle_augsrhbar_B"};
		HLC_CurrentBarrel = "hlc_barrel_standard";
	};
	class hlc_rifle_augsrcarb: hlc_rifle_auga2carb
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		model = "hlc_wp_aug\mesh\auga2\augsr_carbine.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		bg_bipod = 0;
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr","hlc_rifle_augsrcarb","hlc_rifle_augsrhbar"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
		displayName = "$STR_NIA_AUG_SR_Carbine_OD";
		descriptionShort = "$STR_NIA_AUG_Carbine_DESC";
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			showToPlayer = 1;
			minRange = 0;
		};
	};
	class hlc_rifle_augsrcarb_t: hlc_rifle_augsrcarb
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_Carbine_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineTAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_t","hlc_rifle_augsrcarb_t","hlc_rifle_augsrhbar_t"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_augsrcarb_b: hlc_rifle_augsrcarb
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_Carbine_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2carbineBLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_b","hlc_rifle_augsrcarb_B","hlc_rifle_augsrhbar_B"};
		HLC_CurrentBarrel = "hlc_barrel_carbine";
	};
	class hlc_rifle_augsrhbar: hlc_rifle_auga2lsw
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		model = "hlc_wp_aug\mesh\auga2\augsr_hbar.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_co.paa"};
		bg_bipod = 0;
		displayName = "$STR_NIA_AUG_SR_HBAR_OD";
		descriptionShort = "$STR_NIA_AUG_HBAR_DESC";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr","hlc_rifle_augsrcarb","hlc_rifle_augsrhbar"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			showToPlayer = 1;
			minRange = 0;
		};
	};
	class hlc_rifle_augsrhbar_t: hlc_rifle_augsrhbar
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_HBAR_T";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_tan_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarTAN_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_t","hlc_rifle_augsrcarb_t","hlc_rifle_augsrhbar_t"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_augsrhbar_b: hlc_rifle_augsrhbar
	{
		author = "Sproily, Sarv, Tenoyl, Toadie";
		displayName = "$STR_NIA_AUG_SR_HBAR_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\steyr_aug_BLACK_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga2hbarBLACK_x_ca";
		HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_augsr_b","hlc_rifle_augsrcarb_B","hlc_rifle_augsrhbar_B"};
		HLC_CurrentBarrel = "hlc_barrel_hbar";
	};
	class hlc_rifle_auga3: hlc_rifle_aug
	{
		author = "Wang_Chung, Philibuster, Toadie";
		inertia = 0.37;
		dexterity = 1.5132396;
		aimTransitionSpeed = 1.0592678;
		AB_barrelTwist = 9;
		AB_barrelLength = 18;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 457.2;
		AGM_Overheating_Dispersion[] = {0,0.001,0.002,0.004};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		AGM_Overheating_allowSwapBarrel = 1;
		scope = 2;
		displayName = "$STR_NIA_AUGA3_Green";
		model = "hlc_wp_aug\mesh\auga3\auga3.p3d";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_STD.rtm"};
		hiddenSelections[] = {"Camo","Vert"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa"};
		bg_bipod = 0;
		optics = 0;
		class OpticsModes
		{
			class Kolimator
			{
				cameradir = "";
				distancezoommax = 100;
				distancezoommin = 100;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {"",""};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
		reloadAction = "HLC_GestureReloadAUGA3";
		reloadMagazineSound[] = {"hlc_wp_aug\snd\auga3_reload",1,1,30};
		picture = "\hlc_wp_aug\tex\ui\gear_auga3GREEN_x_ca";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			showToPlayer = 0;
			maxRange = 500;
		};
		class Library
		{
			libTextDesc = "Steyr AUG A3";
		};
		class WeaponSlotsInfo
		{
			mass = 81;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail{};
			class UnderBarrelSlot: asdg_UnderSlot{};
			class GripodSlot: nia_rifle_grips_slot{};
		};
		rhs_grip1_change = "hlc_rifle_auga3_grip";
		rhs_grip2_change = "hlc_rifle_auga3_grip2";
		rhs_grip3_change = "hhlc_rifle_auga3_grip3";
		baseWeapon = "hlc_rifle_auga3";
	};
	class hlc_rifle_auga3_grip: hlc_rifle_auga3
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_grip2: hlc_rifle_auga3
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_afg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hhlc_rifle_auga3_grip3: hlc_rifle_auga3
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_bl: hlc_rifle_auga3
	{
		author = "Wang_Chung, Philibuster, Toadie";
		displayName = "$STR_NIA_AUGA3_bl";
		hiddenSelections[] = {"Camo","Vert"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga3BLUE_x_ca";
		rhs_grip1_change = "hlc_rifle_auga3_bl_grip";
		rhs_grip2_change = "hlc_rifle_auga3_bl_grip2";
		rhs_grip3_change = "hhlc_rifle_auga3_bl_grip3";
		baseWeapon = "hlc_rifle_auga3_bl";
	};
	class hlc_rifle_auga3_bl_grip: hlc_rifle_auga3_bl
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_bl_grip2: hlc_rifle_auga3_bl
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_afg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hhlc_rifle_auga3_bl_grip3: hlc_rifle_auga3_bl
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_b: hlc_rifle_auga3
	{
		author = "Wang_Chung, Philibuster, Toadie";
		displayName = "$STR_NIA_AUGA3_B";
		hiddenSelections[] = {"Camo","Vert"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Black_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_auga3BLACK_x_ca";
		rhs_grip1_change = "hlc_rifle_auga3_b_grip";
		rhs_grip2_change = "hlc_rifle_auga3_b_grip2";
		rhs_grip3_change = "hhlc_rifle_auga3_b_grip3";
		baseWeapon = "hlc_rifle_auga3_b";
	};
	class hlc_rifle_auga3_b_grip: hlc_rifle_auga3_b
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_b_grip2: hlc_rifle_auga3_b
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_afg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hhlc_rifle_auga3_b_grip3: hlc_rifle_auga3_b
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\augA3_vfg.rtm"};
		inertia = "(0.37 + 0.066)";
		dexterity = 1.4598945;
		aimTransitionSpeed = 1.0219262;
	};
	class hlc_rifle_auga3_GL: hlc_rifle_auga3
	{
		author = "Wang_Chung, Philibuster, Toadie";
		scope = 2;
		hiddenSelections[] = {"Camo","Vert"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_co.paa","\hlc_wp_aug\tex\redrogue_MVG\MVG_Diffuse-Green_co.paa"};
		bg_bipod = 0;
		optics = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class UnderBarrelSlot{};
			class GripodSlot{};
		};
		inertia = "0.38 + 0.13";
		dexterity = 1.3266034;
		aimTransitionSpeed = 0.92862236;
		displayName = "$STR_NIA_AUGA3GL_Green";
		model = "hlc_wp_aug\mesh\auga3\AUGa3GL.p3d";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_aug\gesture\a3\auga3gl_hands.rtm"};
		muzzles[] = {"this","hlc_M203_AUGA3"};
		picture = "\hlc_wp_aug\tex\ui\gear_augglGREEN_x_ca";
		class hlc_M203_AUGA3: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {50,100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"gl_eye_50m","gl_eye_100m","gl_eye_150m","gl_eye_200m","gl_eye_250m","gl_eye_300m","gl_eye_350m"};
			discreteDistanceInitIndex = 1;
			displayname = "M203-2003";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadAction = "HLC_GestureReloadACRGL";
			reloadMagazineSound[] = {"hlc_core\sound\GL\M203_reload",1.0,1,10};
			drySound[] = {"hlc_core\sound\GL\GL_drystrike",1,1,10};
			magazineWell[] = {"UGL_40x36"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					weaponSoundEffect = "DefaultRifle";
					closure1[] = {"hlc_core\sound\GL\GL_striker",1,1,10};
					closure2[] = {"hlc_core\sound\GL\GL_striker",1,1,10};
					soundClosure[] = {"closure1",0.5,"closure2",0.5};
					soundSetShot[] = {"NIA_GL_Shot_SoundSet","NIA_GL_Tail_SoundSet"};
				};
				recoil = "M240Recoil";
				recoilProne = "M240Recoil";
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
		};
		baseWeapon = "hlc_rifle_auga3_GL";
	};
	class hlc_rifle_auga3_GL_BL: hlc_rifle_auga3_GL
	{
		author = "Wang_Chung, Philibuster, Toadie";
		displayName = "$STR_NIA_AUGA3GL_bl";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_blue_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_augglBLUE_x_ca";
		baseWeapon = "hlc_rifle_auga3_GL_BL";
	};
	class hlc_rifle_auga3_GL_B: hlc_rifle_auga3_GL
	{
		author = "Wang_Chung, Philibuster, Toadie";
		displayName = "$STR_NIA_AUGA3GL_B";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\hlc_wp_aug\tex\Philibust_A3\Wangchung\map2_black_co.paa"};
		picture = "\hlc_wp_aug\tex\ui\gear_augglBLACK_x_ca";
		baseWeapon = "hlc_rifle_auga3_GL_B";
	};
};
