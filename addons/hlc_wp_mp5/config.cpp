////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_mp5\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:16:35 2019 : 'file' last modified on Tue Jan 09 08:44:58 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class mp5_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_first",1},{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class mp5_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class mp5_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_mid",1}};
		volume = 1.6;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class mp5_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5_dist",1}};
		volume = 0.8;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class mp5_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant",1}};
		volume = 0.3;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class mp5_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_forest",1}};
		volume = "1.0*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_forest_mid",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class mp5_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_urban",1}};
		volume = "1.0*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_urban_mid",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class mp5_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_indoor",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class mp5_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class mp5_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_meadows",1}};
		volume = "1.0*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class mp5_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees",1},{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees1",1}};
		volume = "1.0((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
	class mp5_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class mp5_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_suppressed_mid",1}};
		volume = 1.0;
		range = 150;
		rangeCurve[] = {{0,0.2},{50,1},{150,0}};
	};
	class mp5_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class mp5_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_suppressed_close_tail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class mp5_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5sd_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5sd\mp5sd_fire",1}};
		volume = 1.0;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class mp5sd_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5sd\mp5sd_mid",1}};
		volume = 1.0;
		range = 150;
		rangeCurve[] = {{0,0.2},{50,1},{150,0}};
	};
	class mp5sd_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5sd_silencerTailHouses_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class mp5sd_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5sd\mp5sd_suppressed_close_tail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class mp5sd_silencerTailMeadows_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailMeadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5sd_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class mp5k_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class mp5k_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_mid",1}};
		volume = 1.6;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class mp5k_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_dist",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class mp5k_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant",1}};
		volume = 0.3;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class mp5k_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_forest",1}};
		volume = "1.0*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5k_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_forest",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class mp5k_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_urban",1}};
		volume = "1.0*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5k_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_urban",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class mp5k_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_indoor",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class mp5k_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class mp5k_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_meadows",1}};
		volume = "1.0*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5k_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class mp5k_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_trees",1}};
		volume = "1.0((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp5k_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
	class 9mmar_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\9mmar\hks1",1},{"hlc_wp_mp5\snd\soundshaders\9mmar\hks2",1},{"hlc_wp_mp5\snd\soundshaders\9mmar\hks3",1}};
		volume = 0.6;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class 9mmar_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\9mmar\hks_mid",1}};
		volume = 1.6;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class 9mmar_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\9mmar\hks_dist",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class 9mmar_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant",1}};
		volume = 0.3;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class 9mmar_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_forest",1}};
		volume = "1.0*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class 9mmar_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_forest_mid",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class 9mmar_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_urban",1}};
		volume = "1.0*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class 9mmar_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_urban_mid",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class 9mmar_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\9mmar\hks_indoor",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class 9mmar_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\9mmar\hks_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class 9mmar_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_meadows",1}};
		volume = "1.0*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class 9mmar_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class 9mmar_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees",1}};
		volume = "1.0((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class 9mmar_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
	class MP510_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_first",1},{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class MP510_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class MP510_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_mid",1}};
		volume = 1.6;
		range = 1500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1500,0}};
	};
	class MP510_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_dist",1}};
		volume = 1.0;
		range = 1500;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1500,1}};
	};
	class MP510_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_taildistant",1}};
		volume = 0.3;
		range = 1500;
		rangeCurve[] = {{0,0},{300,0.7},{1500,1}};
		limitation = 1;
	};
	class MP510_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_forest",1}};
		volume = "1.0*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class MP510_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_forest_mid",1}};
		volume = " 1*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class MP510_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_urban",1}};
		volume = "1.0*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class MP510_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_urban_mid",1}};
		volume = "1*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class MP510_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_indoor",1}};
		volume = "interior";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class mp510_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_indoor_mid",1}};
		volume = " 1*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class MP510_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_meadows",1}};
		volume = "1.0*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp510_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_meadows_mid",1}};
		volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class MP510_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_trees",1}};
		volume = "1.0((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class mp510_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_trees_mid",1}};
		volume = " 1*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 0;
	};
	class MP510_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close",1}};
		volume = 1.0;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class MP510_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_mid",1}};
		volume = 1.0;
		range = 150;
		rangeCurve[] = {{0,0.2},{50,1},{150,0}};
	};
	class MP510_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close_tail",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MP510_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close_tail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class MP510_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_sil_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class MP510_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close_tail_indoor",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class MP510_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close_tail",1}};
		volume = "1.0((1-interior/1.4)*trees/3)";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class mp5_Shot_SoundSet
	{
		soundShaders[] = {"mp5_closeShot_SoundShader","mp5_midShot_SoundShader","mp5_distShot_SoundShader","mp5_Closure_SoundShader"};
		volumeFactor = 1;
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
	class mp5_tail_SoundSet
	{
		soundShaders[] = {"mp5_tailDistant_SoundShader","mp5_tailTrees_SoundShader","mp5_tailForest_SoundShader","mp5_tailMeadows_SoundShader","mp5_tailHouses_SoundShader","mp5_tailInterior_SoundShader","mp5_tailTrees_mid_SoundShader","mp5_tailForest_mid_SoundShader","mp5_tailMeadows_mid_SoundShader","mp5_tailHouses_mid_SoundShader","mp5_tailInterior_mid_SoundShader"};
		volumeFactor = 1.0;
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
	class mp5_silencerShot_SoundSet
	{
		soundShaders[] = {"mp5_silencerShot_SoundShader","mp5_Closure_SoundShader","mp5_silencerShot_mid_SoundShader"};
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
	class mp5_silencerTail_SoundSet
	{
		soundShaders[] = {"mp5_silencerTailTrees_SoundShader","mp5_silencerTailForest_SoundShader","mp5_silencerTailMeadows_SoundShader","mp5_silencerTailHouses_SoundShader","mp5_silencerTailInterior_SoundShader"};
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
	class mp5sd_silencerShot_SoundSet
	{
		soundShaders[] = {"mp5sd_silencerShot_SoundShader","mp5_Closure_SoundShader","mp5sd_silencerShot_mid_SoundShader"};
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
	class mp5sd_silencerTail_SoundSet
	{
		soundShaders[] = {"mp5sd_silencerTailTrees_SoundShader","mp5sd_silencerTailForest_SoundShader","mp5sd_silencerTailMeadows_SoundShader","mp5sd_silencerTailHouses_SoundShader","mp5sd_silencerTailInterior_SoundShader"};
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
	class mp5k_Shot_SoundSet
	{
		soundShaders[] = {"mp5k_closeShot_SoundShader","mp5k_midShot_SoundShader","mp5k_distShot_SoundShader","mp5_Closure_SoundShader"};
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
	class mp5k_tail_SoundSet
	{
		soundShaders[] = {"mp5k_tailDistant_SoundShader","mp5k_tailTrees_SoundShader","mp5k_tailForest_SoundShader","mp5k_tailMeadows_SoundShader","mp5k_tailHouses_SoundShader","mp5k_tailInterior_SoundShader","mp5k_tailTrees_mid_SoundShader","mp5k_tailForest_mid_SoundShader","mp5k_tailMeadows_mid_SoundShader","mp5k_tailHouses_mid_SoundShader","mp5k_tailInterior_mid_SoundShader"};
		volumeFactor = 1.0;
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
	class 9mmar_Shot_SoundSet
	{
		soundShaders[] = {"9mmar_closeShot_SoundShader","9mmar_midShot_SoundShader","9mmar_distShot_SoundShader","mp5_Closure_SoundShader"};
		volumeFactor = 1.1;
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
	class 9mmar_tail_SoundSet
	{
		soundShaders[] = {"9mmar_tailDistant_SoundShader","9mmar_tailTrees_SoundShader","9mmar_tailForest_SoundShader","9mmar_tailMeadows_SoundShader","9mmar_tailHouses_SoundShader","9mmar_tailInterior_SoundShader","9mmar_tailTrees_mid_SoundShader","9mmar_tailForest_mid_SoundShader","9mmar_tailMeadows_mid_SoundShader","9mmar_tailHouses_mid_SoundShader","9mmar_tailInterior_mid_SoundShader"};
		volumeFactor = 1.0;
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
	class mp510_Shot_SoundSet
	{
		soundShaders[] = {"mp510_closeShot_SoundShader","mp510_midShot_SoundShader","mp510_distShot_SoundShader","mp510_Closure_SoundShader"};
		volumeFactor = 1.2;
		volumeCurve = "InverseSquare3Curve";
		stereoStartDistance = 8;
		stereoRadius = 10;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "HLC_defaultDistanceFilter";
		frequencyRandomizer = 0.5;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class mp510_tail_SoundSet
	{
		soundShaders[] = {"mp510_tailDistant_SoundShader","mp510_tailTrees_SoundShader","mp510_tailForest_SoundShader","mp510_tailMeadows_SoundShader","mp510_tailHouses_SoundShader","mp510_tailInterior_SoundShader","mp510_tailTrees_mid_SoundShader","mp510_tailForest_mid_SoundShader","mp510_tailMeadows_mid_SoundShader","mp510_tailHouses_mid_SoundShader","mp510_tailInterior_mid_SoundShader"};
		volumeFactor = 1.0;
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
	class mp510_silencerShot_SoundSet
	{
		soundShaders[] = {"mp510_silencerShot_SoundShader","mp510_Closure_SoundShader","mp510_silencerShot_mid_SoundShader"};
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
	class mp510_silencerTail_SoundSet
	{
		soundShaders[] = {"mp510_silencerTailTrees_SoundShader","mp510_silencerTailForest_SoundShader","mp510_silencerTailMeadows_SoundShader","mp510_silencerTailHouses_SoundShader","mp510_silencerTailInterior_SoundShader"};
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
};
class CfgPatches
{
	class hlcweapons_mp5
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","cba_jr","hlcweapons_core"};
		units[] = {"HLC_MP5_ammobox","weapon_hlc_smg_mp5k_PDW","weapon_hlc_smg_mp5a2","weapon_hlc_smg_mp5a3","weapon_hlc_smg_mp5a4","weapon_hlc_smg_mp5n","weapon_hlc_smg_9mmar","weapon_hlc_smg_mp5sd5","weapon_hlc_smg_mp5sd6","weapon_hlc_smg_mp510","Weapon_hlc_smg_mp5k"};
		weapons[] = {"hlc_smg_mp5k_PDW","hlc_smg_mp5a2","hlc_smg_mp5a4","hlc_smg_mp5n","hlc_smg_mp5sd5","hlc_smg_mp5sd6","hlc_smg_mp5k","hlc_smg_9mmar","hlc_acc_Surefiregrip","hlc_smg_mp510","hlc_smg_mp5a3"};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_SD_MP5","hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
		version = "1.7";
		author = "toadie";
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgMods
{
	class Mod_Base;
	class Niarms_MP5: Mod_Base
	{
		name = "NIArsenal: MP5 SMGss";
		picture = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_mp5\tex\ui\NIArms1_ca.paa";
	};
};
class asdg_SlotInfo;
class niarms_mp5_frontsiderail: asdg_SlotInfo
{
	linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
	displayName = "$STR_A3_PointerSlot0";
	iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
	class compatibleItems
	{
		hlc_acc_Surefiregrip = 1;
	};
};
class asdg_FrontSideRail;
class asdg_OpticRail1913_short;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_9MM_SMG: asdg_MuzzleSlot
{
	class compatibleItems;
};
class asdg_MuzzleSlot_45ACP_SMG: asdg_MuzzleSlot
{
	class compatibleItems;
};
class cfgRecoils
{
	class recoil_ebr;
	class recoil_mp5a2: recoil_ebr
	{
		muzzleOuter[] = {0.1,0.4,0.2,0.2};
		kickBack[] = {0.01,0.02};
		temporary = 0.007;
		permanent = 0.09;
	};
	class recoil_mp5a3: recoil_ebr
	{
		muzzleOuter[] = {0.15,0.34,0.2,0.2};
		kickBack[] = {0.01,0.02};
		temporary = 0.012;
		permanent = 0.11;
	};
	class recoil_mp5k: recoil_ebr
	{
		muzzleOuter[] = {0.15,0.3,0.3,0.3};
		kickBack[] = {0.03,0.05};
		temporary = 0.012;
		permanent = 0.11;
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class HLC_MP5_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC MP5 Supply Box";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 30;
			};
			class _xx_hlc_30Rnd_9x19_GD_MP5
			{
				magazine = "hlc_30Rnd_9x19_GD_MP5";
				count = 30;
			};
			class _xx_hlc_30Rnd_9x19_SD_MP5
			{
				magazine = "hlc_30Rnd_9x19_SD_MP5";
				count = 30;
			};
			class _xx_hlc_30Rnd_10mm_B_MP5
			{
				magazine = "hlc_30Rnd_10mm_B_MP5";
				count = 30;
			};
			class _xx_hlc_30Rnd_10mm_JHP_MP5
			{
				magazine = "hlc_30Rnd_10mm_JHP_MP5";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_smg_mp5a2
			{
				weapon = "hlc_smg_mp5a2";
				count = 20;
			};
			class _xx_hlc_smg_mp5a3
			{
				weapon = "hlc_smg_mp5a3";
				count = 20;
			};
			class _xx_hlc_smg_mp5a4
			{
				weapon = "hlc_smg_mp5a4";
				count = 20;
			};
			class _xx_hlc_smg_mp5N
			{
				weapon = "hlc_smg_mp5N";
				count = 20;
			};
			class _xx_hlc_smg_mp510
			{
				weapon = "hlc_smg_mp510";
				count = 20;
			};
			class _xx_hlc_smg_mp5sd5
			{
				weapon = "hlc_smg_mp5sd5";
				count = 20;
			};
			class _xx_hlc_smg_mp5sd6
			{
				weapon = "hlc_smg_mp5sd6";
				count = 20;
			};
			class _xx_hlc_smg_mp5k_pdw
			{
				weapon = "hlc_smg_mp5k_pdw";
				count = 20;
			};
			class _xx_hlc_smg_9mmar
			{
				weapon = "hlc_smg_9mmar";
				count = 20;
			};
			class _xx_hlc_smg_mp5k
			{
				weapon = "hlc_smg_mp5k";
				count = 20;
			};
		};
		class TransportItems
		{
			class _xx_hlc_acc_Surefiregrip
			{
				name = "hlc_acc_Surefiregrip";
				count = 10;
			};
			class _xx_hlc_muzzle_Agendasix
			{
				name = "hlc_muzzle_Agendasix";
				count = 10;
			};
			class _xx_hlc_muzzle_Tundra
			{
				name = "hlc_muzzle_Tundra";
				count = 10;
			};
			class _xx_hlc_muzzle_Agendasix10mm
			{
				name = "hlc_muzzle_Agendasix10mm";
				count = 10;
			};
			class _xx_optic_Holosight_smg
			{
				name = "optic_Holosight_smg";
				count = 10;
			};
			class _xx_optic_hamr
			{
				name = "optic_hamr";
				count = 10;
			};
			class _xx_optic_Aco_smg
			{
				name = "optic_Aco_smg";
				count = 10;
			};
			class _xx_optic_ACO_grn_smg
			{
				name = "optic_ACO_grn_smg";
				count = 10;
			};
		};
	};
	class Weapon_Base_F;
	class Weapon_hlc_smg_mp5k_PDW: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5K - PDW";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5k_PDW
			{
				weapon = "hlc_smg_mp5k_PDW";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5k: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5K";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5k
			{
				weapon = "hlc_smg_mp5k";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5a2: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5A2";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5a2
			{
				weapon = "hlc_smg_mp5a2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_MP5N: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5N";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_MP5N
			{
				weapon = "hlc_smg_MP5N";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_9mmar: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5N '9MMAR'";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_9mmar
			{
				weapon = "hlc_smg_9mmar";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5a4: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5A4";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5a4
			{
				weapon = "hlc_smg_mp5a4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp510: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5 / 10";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp510
			{
				weapon = "hlc_smg_mp510";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_10mm_B_MP5
			{
				magazine = "hlc_30Rnd_10mm_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5sd5: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5SD5";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5sd5
			{
				weapon = "hlc_smg_mp5sd5";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5a3: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5A3";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5a3
			{
				weapon = "hlc_smg_mp5a3";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
	class Weapon_hlc_smg_mp5sd6: Weapon_Base_F
	{
		dlc = "Niarms_MP5";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK MP5SD6";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SubMachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_smg_mp5sd6
			{
				weapon = "hlc_smg_mp5sd6";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_9x19_B_MP5
			{
				magazine = "hlc_30Rnd_9x19_B_MP5";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_9x21_Mag;
	class hlc_30Rnd_9x19_B_MP5: 30Rnd_9x21_Mag
	{
		dlc = "Niarms_MP5";
		author = "Toadie, Spartan0536";
		ammo = "HLC_9x19_M882_SMG";
		count = 30;
		descriptionshort = "Caliber: 9x19mm M882 Ball<br />Type: Full Metal Jacket<br />Rounds: 30";
		displayname = "9mm FMJ 30Rnd MP5 Magazine";
		model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
		initspeed = 416.1;
		lastroundstracer = 0;
		picture = "\hlc_wp_MP5\tex\ui\mag_9x19_ball_ca";
		scope = 2;
		tracersevery = 0;
		displaynameshort = "M882 Ball";
	};
	class hlc_30Rnd_9x19_GD_MP5: 30Rnd_9x21_Mag
	{
		dlc = "Niarms_MP5";
		author = "Toadie, Spartan0536";
		ammo = "HLC_9x19_JHP_SMG";
		count = 30;
		descriptionshort = "Caliber: 9x19mm Mk243 Mod 0 JHP<br />Type: Jacketed Hollow Point (Winchester USA9JHP2)<br />Rounds: 30";
		displayname = "9mm JHP 30Rnd MP5 Magazine";
		model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
		initspeed = 315.8;
		lastroundstracer = 0;
		picture = "\hlc_wp_MP5\tex\ui\mag_9x19_jhp_ca";
		scope = 2;
		tracersevery = 0;
		displaynameshort = "Mk243 JHP";
	};
	class hlc_30Rnd_9x19_SD_MP5: 30Rnd_9x21_Mag
	{
		dlc = "Niarms_MP5";
		author = "Toadie, Spartan0536";
		ammo = "HLC_9x19_Subsonic";
		count = 30;
		descriptionshort = "Caliber: 9x19mm Ball<br />Type: Full Metal Jacket<br />Rounds: 30";
		displayname = "9mm Subsonic 30Rnd MP5 Magazine";
		model = "hlc_wp_mp5\mesh\magazine\magazine.p3d";
		initspeed = 305.8;
		lastroundstracer = 0;
		picture = "\hlc_wp_MP5\tex\ui\mag_9x19_subsonic_ca";
		scope = 2;
		tracersevery = 0;
		displaynameshort = "Subsonic";
	};
	class hlc_30Rnd_10mm_B_MP5: 30Rnd_9x21_Mag
	{
		dlc = "Niarms_MP5";
		author = "Toadie, Spartan0536";
		ammo = "HLC_10mm_FMJ";
		count = 30;
		descriptionshort = "Caliber: 10mm AUTO Heavy FMJ-FN<br />Used in: Full Metal Jacket Flat Nose<br />Rounds: 30";
		displayname = "10mm FMJ 30Rnd MP5/10 Magazine";
		model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
		initspeed = 408.8;
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 0;
		displaynameshort = "FMJ-FN";
		picture = "\hlc_wp_MP5\tex\ui\mag_10mm_fmj_ca";
	};
	class hlc_30Rnd_10mm_JHP_MP5: 30Rnd_9x21_Mag
	{
		dlc = "Niarms_MP5";
		author = "Toadie, Spartan0536";
		ammo = "HLC_10mm_JHP";
		count = 30;
		descriptionshort = "Caliber: 10mm AUTO Low Flash JHP<br />Type: Jacketed Hollow Point (Barnes TAC-XP Bullet)<br />Rounds: 30";
		displayname = "10mm JHP 30Rnd MP5/10 Magazine";
		model = "hlc_wp_mp5\mesh\magazine\magazine_10mm.p3d";
		initspeed = 463.3;
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 0;
		displaynameshort = "TAC-XP JHP";
		picture = "\hlc_wp_MP5\tex\ui\mag_10mm_hydra_ca";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class hlc_acc_Surefiregrip: ItemCore
	{
		dlc = "Niarms_MP5";
		author = "Arby26,Toadie";
		_generalMacro = "acc_flashlight";
		scope = 2;
		displayName = "Surefire Weaponlight";
		descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "hlc_wp_mp5\mesh\surefire_griplight\Surefire.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 7;
			class FlashLight
			{
				position = "flash";
				direction = "flash dir";
				color[] = {25,22,20};
				ambient[] = {0.001,0.001,0.001};
				size = 1;
				innerAngle = 50;
				outerAngle = 120;
				coneFadeCoef = 10;
				intensity = 330;
				useFlare = 1;
				dayLight = 1;
				FlareSize = 0.7;
				onlyInNvg = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 1;
					quadratic = 75;
				};
				scale[] = {0};
			};
		};
		inertia = 0.05;
	};
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class hlc_muzzle_Agendasix: muzzle_snds_h
	{
		dlc = "Niarms_MP5";
		author = " Toadie";
		displayName = "AWC Agenda Six (9mm)";
		picture = "\hlc_wp_MP5\tex\ui\gear_agendasix_ca";
		model = "\hlc_wp_mp5\mesh\agendasix\a6.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 11;
		};
		inertia = 0.08;
	};
	class hlc_muzzle_Agendasix10mm: hlc_muzzle_Agendasix
	{
		dlc = "Niarms_MP5";
		author = "Toadie";
		displayName = "AWC Agenda Six (10mm)";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_MP5_base: Rifle_Base_F
	{
		scope = 1;
		dlc = "Niarms_MP5";
		recoil = "recoil_mp5a2";
		hasBipod = 0;
		magazineReloadSwitchPhase = 0.5;
		deployedpivot = "deploypivot";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		drysound[] = {"hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_empty",1,1,20};
		changeFiremodeSound[] = {"hlc_wp_mp5\snd\mp5_safety",1,1,8};
		reloadmagazinesound[] = {"\hlc_wp_MP5\snd\mp5_reload_empty",0.7,1,20};
		magazines[] = {"hlc_30Rnd_9x19_B_MP5","hlc_30Rnd_9x19_GD_MP5","hlc_30Rnd_9x19_SD_MP5"};
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 8;
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
			allowedSlots[] = {701,901};
			class MuzzleSlot: asdg_MuzzleSlot_9MM_SMG
			{
				iconPosition[] = {0.0,0.35};
				iconScale = 0.2;
				class compatibleItems: compatibleItems
				{
					hlc_muzzle_Agendasix = 1;
				};
			};
			class CowsSlot
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot
			{
				iconPosition[] = {0.2,0.35};
				iconScale = 0.25;
			};
		};
		descriptionShort = "SMG<br/>Caliber:9x19mm NATO";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.501187,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.398107,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.398107,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.398107,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.501187,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.501187,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.501187,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.501187,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.501187,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.501187,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.501187,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.398107,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				closure2[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_Shot_SoundSet","mp5_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_silencerShot_SoundSet","mp5_silencerTail_SoundSet"};
			};
			reloadtime = "(60/800)";
			dispersion = 0.00093;
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
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				closure2[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_Shot_SoundSet","mp5_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_silencerShot_SoundSet","mp5_silencerTail_SoundSet"};
			};
			reloadtime = "(60/800)";
			dispersion = 0.00093;
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
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				closure2[] = {"\hlc_wp_MP5\snd\mp5_first",0.75,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_Shot_SoundSet","mp5_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"mp5_silencerShot_SoundSet","mp5_silencerTail_SoundSet"};
			};
			reloadtime = "(60/800)";
			dispersion = 0.00093;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 20;
			maxRangeProbab = 0.4;
		};
	};
	class hlc_smg_mp5k_PDW: hlc_Mp5_base
	{
		scope = 2;
		recoil = "recoil_mp5k";
		AB_barrelTwist = 10;
		AB_barrelLength = 4.5;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 114.3;
		author = "Twinke Masta, Thanez, Christian Øelund,Toadie";
		model = "\hlc_wp_Mp5\mesh\mp5kpdw\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5K";
		reloadmagazinesound[] = {"\hlc_wp_MP5\snd\mp5k_reload",0.7,1,20};
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5kpdw_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Foregrip","Rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\fas_mp5\handguard_co.paa","hlc_wp_mp5\tex\thanez_mp5k\forek_co.paa","hlc_wp_mp5\tex\emdg_mp5sd\rail_co.paa"};
		displayName = "HK MP5K-PDW";
		discretedistance[] = {50};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\gesture_mp5k.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.4,0.2};
				iconScale = 0.2;
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.05,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.2;
		dexterity = 1.9994003;
		aimTransitionSpeed = 1.3995801;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5k_Shot_SoundSet","mp5k_tail_SoundSet"};
			};
			reloadtime = "(60/900)";
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5k_Shot_SoundSet","mp5k_tail_SoundSet"};
			};
			reloadtime = "(60/900)";
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5k_Shot_SoundSet","mp5k_tail_SoundSet"};
			};
			reloadtime = "(60/900)";
		};
		class Library
		{
			libTextDesc = "Heckler und Koch GMBH MP5K PDW";
		};
	};
	class hlc_smg_mp5k: hlc_smg_mp5k_PDW
	{
		recoil = "recoil_mp5k";
		AB_barrelTwist = 10;
		AB_barrelLength = 4.5;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 114.3;
		author = "Twinke Masta, Geno,Toadie";
		model = "\hlc_wp_Mp5\mesh\mp5k\mp5.p3d";
		type = 2;
		reloadaction = "HLC_GestureReloadMP5K_pistol";
		displayName = "HK MP5K";
		discretedistance[] = {50};
		discretedistanceinitindex = 0;
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5k_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Foregrip","Rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\thanez_mp5k\buttk_co.paa","hlc_wp_mp5\tex\thanez_mp5k\forek_co.paa","hlc_wp_mp5\tex\emdg_mp5sd\rail_co.paa"};
		modes[] = {"Single","FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 40;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.25};
				iconScale = 0.2;
			};
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.2,0.3};
				iconScale = 0.2;
			};
		};
		inertia = 0.15;
		dexterity = 1.2748126;
		aimTransitionSpeed = 0.8923688;
	};
	class hlc_smg_mp5a2: hlc_Mp5_base
	{
		scope = 2;
		recoil = "recoil_mp5a2";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno, Christian Øelund,Toadie";
		model = "\hlc_wp_Mp5\mesh\mp5a2\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5a2_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Foregrip","Rail","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa"};
		displayName = "HK MP5A2";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;
			class PointerSlot: niarms_mp5_frontsiderail
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.25;
		dexterity = 1.8994002;
		aimTransitionSpeed = 1.3295802;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		modes[] = {"Single","FullAuto"};
		class Library
		{
			libTextDesc = "Heckler und Koch GMBH Mp5A2";
		};
	};
	class hlc_smg_MP5N: hlc_Mp5_base
	{
		scope = 2;
		recoil = "recoil_mp5a3";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Krycek,Toadie";
		model = "\hlc_wp_Mp5\mesh\mp5n\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5n_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Foregrip","Stock","Rail","Quad1","Quad2","Panel"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\fab_co.paa","hlc_wp_mp5\tex\krycek_mp5\fab_co.paa","hlc_wp_mp5\tex\rails_co.paa"};
		displayName = "MP5A5";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 1;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 65;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.35};
				iconScale = 0.25;
			};
		};
		inertia = 0.33;
		dexterity = 1.5534912;
		aimTransitionSpeed = 1.0874438;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "Heckler und Koch GMBH Mp5N";
		};
	};
	class UGL_F;
	class hlc_smg_9mmar: hlc_smg_MP5N
	{
		scope = 2;
		recoil = "recoil_mp5a3";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno, Tigg, Christian Øelund,Toadie";
		model = "\hlc_wp_Mp5\mesh\9mmar\9mmar.p3d";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Rail","M203","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\tigg_m203\m203_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa"};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\newgest\gesture_9mmar.rtm"};
		displayName = "HK MP5N '9MMAR'";
		discretedistance[] = {50,100,150,200};
		bg_bipod = 0;
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"9mmar_Shot_SoundSet","9mmar_tail_SoundSet"};
			};
			reloadtime = "(60/700)";
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"9mmar_Shot_SoundSet","9mmar_tail_SoundSet"};
			};
			reloadtime = "(60/700)";
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"9mmar_Shot_SoundSet","9mmar_tail_SoundSet"};
			};
			reloadtime = "(60/700)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
			class MuzzleSlot{};
			class PointerSlot{};
		};
		inertia = 0.63;
		dexterity = 1.2821454;
		aimTransitionSpeed = 0.89750177;
		muzzles[] = {"this","hlc_M203_Mp5"};
		class hlc_M203_Mp5: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m","GL_eye_400m"};
			discreteDistanceInitIndex = 1;
			displayname = "M203A1";
			reloadAction = "GestureReloadTrgUGL";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadmagazinesound[] = {"hlc_wp_mp5\snd\gren_cock1",1,1,20};
			reloadtime = 0.1;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\hlc_wp_MP5\snd\glauncher",1,1,400};
				begin2[] = {"\hlc_wp_MP5\snd\glauncher",1,1,400};
				begin3[] = {"\hlc_wp_MP5\snd\glauncher",1,1,400};
			};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			sound[] = {"hlc_wp_mp5\snd\glauncher",1,1,400};
			weaponinfotype = "RscWeaponZeroing";
		};
	};
	class hlc_smg_mp5a4: hlc_Mp5_base
	{
		scope = 2;
		recoil = "recoil_mp5a2";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno, Christian Øelund,Toadie";
		model = "\hlc_wp_Mp5\mesh\mp5a4\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5a4_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Foregrip","Stock","Rail","Quad1","Quad2","Panel"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\fab_co.paa","hlc_wp_mp5\tex\krycek_mp5\fab_co.paa","hlc_wp_mp5\tex\rails_co.paa"};
		displayName = "HK MP5A4";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 58;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.35};
				iconScale = 0.25;
			};
		};
		inertia = 0.29;
		dexterity = 1.6926577;
		aimTransitionSpeed = 1.1848603;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class Library
		{
			libTextDesc = "Heckler und Koch GMBH Mp5A4";
		};
	};
	class hlc_smg_mp510: hlc_smg_MP5N
	{
		recoil = "recoil_mp5a2";
		AB_barrelTwist = 15;
		AB_barrelLength = 9;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno,Toadie, Christian Øelund";
		magazines[] = {"hlc_30Rnd_10mm_B_MP5","hlc_30Rnd_10mm_JHP_MP5"};
		model = "\hlc_wp_Mp5\mesh\mp510\mp510.p3d";
		reloadaction = "HLC_GestureReloadMP510";
		reloadmagazinesound[] = {"\hlc_wp_MP5\snd\mp510_reload_empty",0.7,1,20};
		picture = "\hlc_wp_MP5\tex\ui\gear_mp510_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Foregrip","Stock","Rail","Quad1","Quad2","Panel"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\geno_twinke_mp5\rec40_co.paa","hlc_wp_mp5\tex\geno_twinke_mp5\navy_co.paa","hlc_wp_mp5\tex\geno_twinke_mp5\fore_co.paa","hlc_wp_mp5\tex\geno_twinke_mp5\fullstock_co.paa","hlc_wp_mp5\tex\emdg_mp5sd\rail_co.paa","hlc_wp_mp5\tex\thanez_mp5\fore_co.paa","hlc_wp_mp5\tex\thanez_mp5\rails_co.paa","hlc_wp_mp5\tex\rails_co.paa"};
		displayName = "HK MP5/10";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		descriptionShort = "SMG<br/>Caliber: 10mm AUTO";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 57;
			class MuzzleSlot: asdg_MuzzleSlot_45ACP_SMG
			{
				class compatibleItems: compatibleItems
				{
					hlc_muzzle_Agendasix10mm = 1;
				};
				iconPosition[] = {0.0,0.25};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.15};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.3,0.15};
				iconScale = 0.25;
			};
		};
		inertia = 0.29;
		dexterity = 1.715328;
		aimTransitionSpeed = 1.2007296;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp510_Shot_SoundSet","mp510_tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"mp510_silencerShot_SoundSet","mp510_silencerTail_SoundSet"};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp510_Shot_SoundSet","mp510_tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"mp510_silencerShot_SoundSet","mp510_silencerTail_SoundSet"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp510_Shot_SoundSet","mp510_tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"mp510_silencerShot_SoundSet","mp510_silencerTail_SoundSet"};
			};
		};
	};
	class hlc_smg_mp5sd5: hlc_Mp5_base
	{
		scope = 2;
		recoil = "recoil_mp5a2";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno,Toadie, Christian Øelund";
		fireLightDuration = 0;
		fireLightIntensity = 0;
		model = "\hlc_wp_Mp5\mesh\mp5sd5\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd5_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_parts2_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa"};
		displayName = "HK MP5SD5";
		initspeed = 285;
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.45,0.35};
				iconScale = 0.2;
			};
			class MuzzleSlot{};
		};
		inertia = 0.31;
		dexterity = 1.6092874;
		aimTransitionSpeed = 1.1265012;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet"};
			};
		};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet"};
			};
		};
		class Burst: Burst
		{
			sounds[] = {"StandardSound"};
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"mp5sd_silencerShot_SoundSet","mp5sd_silencerTail_SoundSet"};
			};
		};
	};
	class hlc_smg_mp5a3: hlc_smg_mp5a2
	{
		scope = 2;
		recoil = "recoil_mp5a3";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno,Toadie, Christian Øelund";
		model = "\hlc_wp_Mp5\mesh\mp5a3\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5a3_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Foregrip","Rail","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5ka1_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa"};
		displayName = "HK MP5A3";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62;
		};
		inertia = 0.31;
		dexterity = 1.6092874;
		aimTransitionSpeed = 1.1265012;
	};
	class hlc_smg_mp5sd6: hlc_smg_mp5sd5
	{
		scope = 2;
		recoil = "recoil_mp5a3";
		AB_barrelTwist = 10;
		AB_barrelLength = 9;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 228.6;
		author = "Twinke Masta, Geno,Toadie, Christian Øelund";
		model = "\hlc_wp_Mp5\mesh\mp5sd6\mp5.p3d";
		reloadaction = "HLC_GestureReloadMP5";
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_mp5\gesture\mp5_handgesture.rtm"};
		picture = "\hlc_wp_MP5\tex\ui\gear_mp5sd6_x_ca";
		hiddenSelections[] = {"Reciever","FCG","Stock","Rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_co.paa","hlc_wp_mp5\tex\krycek_mp5\mp5_rai_co.paa"};
		displayName = "HK MP5SD6";
		discretedistance[] = {50,100,150,200};
		discretedistanceinitindex = 0;
		cameradir = "look_out";
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
		};
		inertia = 0.34;
		dexterity = 1.5026169;
		aimTransitionSpeed = 1.0518318;
	};
};
