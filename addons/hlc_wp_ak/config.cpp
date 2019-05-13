////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_ak\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:14:51 2019 : 'file' last modified on Mon Jan 08 09:27:12 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class Nia_ak47_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_first",1},{"hlc_wp_ak\snd\soundshaders\ak47\ak47_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_ak47_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_close1",1},{"hlc_wp_ak\snd\soundshaders\ak47\ak47_close2",1},{"hlc_wp_ak\snd\soundshaders\ak47\ak47_close3",1},{"hlc_wp_ak\snd\soundshaders\ak47\ak47_close4",1}};
		volume = 2.3;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_ak47_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_ak47_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_dist",1}};
		volume = "1.S";
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_ak47_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_indoor",1}};
		volume = "2*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak47_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_ak47_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_trees",1}};
		volume = "2*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak47_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_forest",1}};
		volume = " 2*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak47_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_meadows",1}};
		volume = "2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak47_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_urban",1}};
		volume = "2*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak47_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_urban_mid",1}};
		volume = "1.2*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_ak47_Shot_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_ak47_Shot_Silenced_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_ak47_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail_Indoor",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Nia_ak47_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class Nia_ak47_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak47\ak47_siltail",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class Nia_ak74_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_first",1},{"hlc_wp_ak\snd\soundshaders\ak74\ak74_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_ak74_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_ak74_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_ak74_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_ak74_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_ak74_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak74_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak74_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak74_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_ak74_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak74_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_ak74_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak74_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak74_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak74_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak74_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_ak74_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_ak74_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_ak74_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_ak74_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_ak74_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_ak74_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_rpk_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_first",1},{"hlc_wp_ak\snd\soundshaders\rpk\rpk_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_rpk_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rpk_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_rpk_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_rpk_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rpk_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk_Shot_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_rpk_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_rpk_tailInterior_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail_indoor",1}};
		volume = "interior";
		range = 500;
		limitation = 0;
	};
	class Nia_rpk_tailTrees_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees",1}};
		volume = "(1-interior/1.4)*trees";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailForest_Silenced_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest",1}};
		volume = "(1-interior/1.4)*forest";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailMeadows_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk_tailHouses_Silenced_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk\rpk_siltail",1}};
		volume = "(1-interior/1.4)*houses";
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk74_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_rpk74_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rpk74_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_rpk74_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_rpk74_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_rpk74_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_rpk74_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rpk74_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rpk74_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rpk74_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_rpk74_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_sil_mid",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_rpk74_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rpk74\rpk74_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_rpk74_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aks74u_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first",1},{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_aks74u_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_close",1}};
		volume = 0.78;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_aks74u_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_aks74u_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_aks74u_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_aks74u_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aks74u_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aks74u_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aks74u_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_aks74u_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aks74u_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_aks74u_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_meadows",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aks74u_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aks74u_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_trees",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aks74u_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aks74u_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_aks74u_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_sil",1}};
		volume = 0.8;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_aks74u_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aks74u_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_aks74u_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak74\ak74_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_aks74u_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aks74u\aks74u_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aks74u_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_ak12_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_first",1},{"hlc_wp_ak\snd\soundshaders\ak12\ak12_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_ak12_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_ak12_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_ak12_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_ak12_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_ak12_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak12_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak12_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak12_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_ak12_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_indoor",1}};
		volume = " 1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak12_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_ak12_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_meadow",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak12_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak12_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_ak12_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_ak12_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_ak12_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_sil",1}};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_ak12_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_ak12_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_ak12_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_ak12_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\ak12\ak12_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_ak12_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aek_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_first",1},{"hlc_wp_ak\snd\soundshaders\aek\aek_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_aek_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_aek_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_mid",1}};
		volume = 1.6252;
		range = 2000;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{2000,0}};
	};
	class Nia_aek_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class Nia_aek_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class Nia_aek_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_forest",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aek_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aek_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_urban",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aek_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_aek_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aek_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_aek_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aek_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aek_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_aek_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_aek_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_sil",1}};
		volume = 0.8;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class nia_aek_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_sil_mid",1}};
		volume = 0.8;
		range = 250;
		rangeCurve[] = {{0,0.2},{50,1},{250,0}};
	};
	class Nia_aek_silencerTailForest_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aek_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_siltail",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class Nia_aek_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_siltail_indoor",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class Nia_aek_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\aek\aek_siltail",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_aek_silencerTailTrees_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class Nia_SLR107U_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first",1},{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_first",1}};
		range = 35;
		volume = 1;
		rangeCurve[] = {{0,1},{35,0}};
	};
	class Nia_SLR107U_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107u_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_SLR107U_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_SLR107U_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_SLR107U_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_SLR107U_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_SLR107U_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_SLR107U_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_SLR107U_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_SLR107U_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_SLR107U_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\slr107u_urban",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_SLR107U_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\SLR107U\SLR107U_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_rk62_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_first",1}};
		range = 35;
		volume = 0.87;
	};
	class Nia_rk62_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_close",1}};
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class Nia_rk62_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_mid",1}};
		volume = 1.6252;
		range = 1800;
		rangeCurve[] = {{0,0.5},{50,1},{300,0},{1800,0}};
	};
	class Nia_rk62_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_dist",1}};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
	};
	class Nia_rk62_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_rk62_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_trees",1}};
		volume = "1.5*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_rk62_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_urban",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_rk62_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\rk62\rk62_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_saiga_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_first",1}};
		range = 35;
		volume = 0.87;
	};
	class Nia_saiga_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_close",1}};
		volume = 0.78;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class Nia_saiga_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.5},{100,1},{300,0},{1500,0}};
	};
	class Nia_saiga_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_dist",1}};
		volume = 1.7782794;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{1500,1}};
	};
	class Nia_saiga_tailDistant_SoundShader
	{
		samples[] = {{"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6Lynx_taildistant",1}};
		volume = 0.4;
		range = 2500;
		rangeCurve[] = {{0,0},{300,1},{2500,1}};
		limitation = 1;
	};
	class Nia_saiga_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_forest",1}};
		volume = "1.5*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_saiga_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_forest_mid",1}};
		volume = " 1.5*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_saiga_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_urban",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_saiga_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_urban_mid",1}};
		volume = "1.5*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{1200,0}};
		range = 1200;
		limitation = 1;
	};
	class Nia_saiga_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_indoor",1}};
		volume = "1.5*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_saiga_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_indoor_mid",1}};
		volume = " 1.5*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class Nia_saiga_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_meadows",1}};
		volume = "1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_saiga_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_meadows_mid",1}};
		volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class Nia_saiga_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_trees",1}};
		volume = " 2.585*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class Nia_saiga_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_ak\snd\soundshaders\saiga\saiga_trees_mid",1}};
		volume = " 1.5*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
};
class CfgSoundSets
{
	class Nia_ak74_Shot_SoundSet
	{
		soundShaders[] = {"nia_ak74_closeShot_SoundShader","nia_ak74_midShot_SoundShader","nia_ak74_distShot_SoundShader","nia_ak74_Closure_SoundShader"};
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
	class Nia_ak74_Tail_SoundSet
	{
		soundShaders[] = {"nia_ak74_tailForest_SoundShader","nia_ak74_tailHouses_SoundShader","nia_ak74_tailInterior_SoundShader","nia_ak74_tailMeadows_SoundShader","nia_ak74_tailTrees_SoundShader","nia_ak74_tailForest_mid_SoundShader","nia_ak74_tailHouses_mid_SoundShader","nia_ak74_tailInterior_mid_SoundShader","nia_ak74_tailMeadows_mid_SoundShader","nia_ak74_tailTrees_mid_SoundShader"};
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
	class Nia_ak74_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_ak74_silencerShot_SoundShader","nia_ak74_Closure_SoundShader","nia_ak74_silencerShot_mid_SoundShader"};
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
	class Nia_ak74_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_ak74_silencerTailTrees_SoundShader","nia_ak74_silencerTailForest_SoundShader","nia_ak74_silencerTailMeadows_SoundShader","nia_ak74_silencerTailHouses_SoundShader","nia_ak74_silencerTailInterior_SoundShader"};
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
	class Nia_ak47_Shot_SoundSet
	{
		soundShaders[] = {"nia_ak47_Closure_SoundShader","nia_ak47_closeShot_SoundShader","nia_ak47_midShot_SoundShader","nia_ak47_distShot_SoundShader"};
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
	class Nia_ak47_Tail_SoundSet
	{
		soundShaders[] = {"nia_ak47_tailInterior_SoundShader","nia_ak47_tailTrees_SoundShader","nia_ak47_tailForest_SoundShader","nia_ak47_tailMeadows_SoundShader","nia_ak47_tailHouses_SoundShader","nia_ak47_tailInterior_mid_SoundShader","nia_ak47_tailTrees_mid_SoundShader","nia_ak47_tailForest_mid_SoundShader","nia_ak47_tailMeadows_mid_SoundShader","nia_ak47_tailHouses_mid_SoundShader"};
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
	class Nia_ak47_Shot_Silenced_SoundSet
	{
		soundShaders[] = {"nia_ak47_Closure_SoundShader","nia_ak47_Shot_Silenced_SoundShader","nia_ak47_Shot_Silenced_mid_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.1;
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_ak47_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = {"nia_ak47_tailInterior_Silenced_SoundShader","nia_ak47_tailTrees_Silenced_SoundShader","nia_ak47_tailForest_Silenced_SoundShader","nia_ak47_tailMeadows_Silenced_SoundShader","nia_ak47_tailHouses_Silenced_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class Nia_ak47_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_ak47_Closure_SoundShader","nia_ak47_closeShot_SoundShader","nia_ak47_midShot_SoundShader","nia_ak47_distShot_SoundShader"};
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
	class Nia_ak47_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_ak47_tailInterior_SoundShader","nia_ak47_tailTrees_SoundShader","nia_ak47_tailForest_SoundShader","nia_ak47_tailMeadows_SoundShader","nia_ak47_tailHouses_SoundShader"};
		volumeFactor = 1;
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
	class Nia_rpk_Shot_SoundSet
	{
		soundShaders[] = {"nia_rpk_Closure_SoundShader","nia_rpk_closeShot_SoundShader","nia_rpk_midShot_SoundShader","nia_rpk_distShot_SoundShader"};
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
	class Nia_rpk_Tail_SoundSet
	{
		soundShaders[] = {"nia_rpk_tailInterior_SoundShader","nia_rpk_tailTrees_SoundShader","nia_rpk_tailForest_SoundShader","nia_rpk_tailMeadows_SoundShader","nia_rpk_tailHouses_SoundShader","nia_rpk_tailInterior_mid_SoundShader","nia_rpk_tailTrees_mid_SoundShader","nia_rpk_tailForest_mid_SoundShader","nia_rpk_tailMeadows_mid_SoundShader","nia_rpk_tailHouses_mid_SoundShader"};
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
	class Nia_rpk_Shot_Silenced_SoundSet
	{
		soundShaders[] = {"nia_rpk_Closure_SoundShader","nia_rpk_Shot_Silenced_SoundShader","nia_rpk_silencerShot_mid_SoundShader"};
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
	class Nia_rpk_ShotTail_Silenced_SoundSet
	{
		soundShaders[] = {"nia_rpk_tailInterior_Silenced_SoundShader","nia_rpk_tailTrees_Silenced_SoundShader","nia_rpk_tailForest_Silenced_SoundShader","nia_rpk_tailMeadows_Silenced_SoundShader","nia_rpk_tailHouses_Silenced_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
	};
	class Nia_rpk_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_rpk_Closure_SoundShader","nia_rpk_silencerShot_SoundShader","nia_rpk_silencerShot_mid_SoundShader"};
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
	class Nia_rpk_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_rpk_silencerTailTrees_SoundShader","nia_rpk_silencerTailForest_SoundShader","nia_rpk_silencerTailMeadows_SoundShader","nia_rpk_silencerTailHouses_SoundShader","nia_rpk_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class Nia_rpk74_Shot_SoundSet
	{
		soundShaders[] = {"nia_rpk74_closeShot_SoundShader","nia_rpk74_midShot_SoundShader","nia_rpk74_distShot_SoundShader","nia_rpk74_Closure_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_rpk74_Tail_SoundSet
	{
		soundShaders[] = {"nia_rpk74_tailForest_SoundShader","nia_rpk74_tailHouses_SoundShader","nia_rpk74_tailInterior_SoundShader","nia_rpk74_tailMeadows_SoundShader","nia_rpk74_tailTrees_SoundShader","nia_rpk74_tailForest_mid_SoundShader","nia_rpk74_tailHouses_mid_SoundShader","nia_rpk74_tailInterior_mid_SoundShader","nia_rpk74_tailMeadows_mid_SoundShader","nia_rpk74_tailTrees_mid_SoundShader"};
		volumeFactor = 1.35;
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
	class Nia_rpk74_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_rpk74_silencerShot_SoundShader","nia_rpk74_Closure_SoundShader","nia_rpk74_silencerShot_mid_SoundShader"};
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
	class Nia_rpk74_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_rpk74_silencerTailTrees_SoundShader","nia_rpk74_silencerTailForest_SoundShader","nia_rpk74_silencerTailMeadows_SoundShader","nia_rpk74_silencerTailHouses_SoundShader","nia_rpk74_silencerTailInterior_SoundShader"};
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
	class Nia_aks74u_Shot_SoundSet
	{
		soundShaders[] = {"nia_aks74u_closeShot_SoundShader","nia_aks74u_midShot_SoundShader","nia_aks74u_distShot_SoundShader","nia_aks74u_Closure_SoundShader"};
		volumeFactor = 1.4;
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
	class Nia_aks74u_Tail_SoundSet
	{
		soundShaders[] = {"nia_aks74u_tailForest_SoundShader","nia_aks74u_tailHouses_SoundShader","nia_aks74u_tailInterior_SoundShader","nia_aks74u_tailMeadows_SoundShader","nia_aks74u_tailTrees_SoundShader","nia_aks74u_tailForest_mid_SoundShader","nia_aks74u_tailHouses_mid_SoundShader","nia_aks74u_tailInterior_mid_SoundShader","nia_aks74u_tailMeadows_mid_SoundShader","nia_aks74u_tailTrees_mid_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_aks74u_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_aks74u_silencerShot_SoundShader","nia_aks74u_Closure_SoundShader","nia_aks74u_silencerShot_mid_SoundShader"};
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
	class Nia_aks74u_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_aks74u_silencerTailTrees_SoundShader","nia_aks74u_silencerTailForest_SoundShader","nia_aks74u_silencerTailMeadows_SoundShader","nia_aks74u_silencerTailHouses_SoundShader","nia_aks74u_silencerTailInterior_SoundShader"};
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
	class Nia_ak12_Shot_SoundSet
	{
		soundShaders[] = {"nia_ak12_closeShot_SoundShader","nia_ak12_midShot_SoundShader","nia_ak12_distShot_SoundShader","nia_ak12_Closure_SoundShader"};
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
	class Nia_ak12_Tail_SoundSet
	{
		soundShaders[] = {"nia_ak12_tailForest_SoundShader","nia_ak12_tailHouses_SoundShader","nia_ak12_tailInterior_SoundShader","nia_ak12_tailMeadows_SoundShader","nia_ak12_tailTrees_SoundShader","nia_ak12_tailForest_mid_SoundShader","nia_ak12_tailHouses_mid_SoundShader","nia_ak12_tailInterior_mid_SoundShader","nia_ak12_tailMeadows_mid_SoundShader","nia_ak12_tailTrees_mid_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_ak12_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_ak12_Closure_SoundShader","nia_ak12_silencerShot_SoundShader","nia_ak12_silencerShot_mid_SoundShader"};
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
	class Nia_ak12_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_ak12_silencerTailTrees_SoundShader","nia_ak12_silencerTailForest_SoundShader","nia_ak12_silencerTailMeadows_SoundShader","nia_ak12_silencerTailHouses_SoundShader","nia_ak12_silencerTailInterior_SoundShader"};
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
	class Nia_aek_Shot_SoundSet
	{
		soundShaders[] = {"nia_aek_closeShot_SoundShader","nia_aek_midShot_SoundShader","nia_aek_distShot_SoundShader","nia_aek_Closure_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_aek_Tail_SoundSet
	{
		soundShaders[] = {"nia_aek_tailForest_SoundShader","nia_aek_tailHouses_SoundShader","nia_aek_tailInterior_SoundShader","nia_aek_tailMeadows_SoundShader","nia_aek_tailTrees_SoundShader","nia_aek_tailForest_mid_SoundShader","nia_aek_tailHouses_mid_SoundShader","nia_aek_tailInterior_mid_SoundShader","nia_aek_tailMeadows_mid_SoundShader","nia_aek_tailTrees_mid_SoundShader"};
		volumeFactor = 1.35;
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
	class Nia_aek_silencerShot_SoundSet
	{
		soundShaders[] = {"nia_aek_silencerShot_SoundShader","nia_aek_Closure_SoundShader","nia_aek_silencerShot_mid_SoundShader"};
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
	class Nia_aek_silencerTail_SoundSet
	{
		soundShaders[] = {"nia_aek_silencerTailTrees_SoundShader","nia_aek_silencerTailForest_SoundShader","nia_aek_silencerTailMeadows_SoundShader","nia_aek_silencerTailHouses_SoundShader","nia_aek_silencerTailInterior_SoundShader"};
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
	class Nia_SLR107U_Shot_SoundSet
	{
		soundShaders[] = {"nia_SLR107U_Closure_SoundShader","nia_SLR107U_closeShot_SoundShader","nia_SLR107U_midShot_SoundShader","nia_SLR107U_distShot_SoundShader"};
		volumeFactor = 1.4;
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
	class Nia_SLR107U_Tail_SoundSet
	{
		soundShaders[] = {"nia_SLR107U_tailInterior_SoundShader","nia_SLR107U_tailTrees_SoundShader","nia_SLR107U_tailForest_SoundShader","Nia_SLR107U_tailMeadows_SoundShader","nia_SLR107U_tailHouses_SoundShader","nia_SLR107U_tailInterior_mid_SoundShader","nia_SLR107U_tailTrees_mid_SoundShader","nia_SLR107U_tailForest_mid_SoundShader","Nia_SLR107U_tailMeadows_mid_SoundShader","nia_SLR107U_tailHouses_mid_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_rk62_Shot_SoundSet
	{
		soundShaders[] = {"nia_rk62_Closure_SoundShader","nia_rk62_closeShot_SoundShader","nia_rk62_midShot_SoundShader","nia_rk62_distShot_SoundShader"};
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
	class Nia_rk62_Tail_SoundSet
	{
		soundShaders[] = {"Nia_rk62_tailInterior_SoundShader","nia_rk62_tailTrees_SoundShader","nia_rk62_tailForest_SoundShader","nia_rk62_tailMeadows_SoundShader","nia_rk62_tailHouses_SoundShader","Nia_rk62_tailInterior_mid_SoundShader","nia_rk62_tailTrees_mid_SoundShader","nia_rk62_tailForest_mid_SoundShader","nia_rk62_tailMeadows_mid_SoundShader","nia_rk62_tailHouses_mid_SoundShader"};
		volumeFactor = 1.5;
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
	class Nia_saiga_Shot_SoundSet
	{
		soundShaders[] = {"nia_saiga_closeShot_SoundShader","nia_saiga_midShot_SoundShader","nia_saiga_distShot_SoundShader","nia_saiga_Closure_SoundShader"};
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
	class Nia_saiga_tail_SoundSet
	{
		soundShaders[] = {"nia_saiga_tailDistant_SoundShader","nia_saiga_tailTrees_SoundShader","nia_saiga_tailForest_SoundShader","nia_saiga_tailMeadows_SoundShader","nia_saiga_tailHouses_SoundShader","nia_saiga_tailInterior_SoundShader","nia_saiga_tailTrees_mid_SoundShader","nia_saiga_tailForest_mid_SoundShader","nia_saiga_tailMeadows_mid_SoundShader","nia_saiga_tailHouses_mid_SoundShader","nia_saiga_tailInterior_mid_SoundShader"};
		volumeFactor = 1.35;
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
};
class CfgPatches
{
	class hlcweapons_aks
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Weapons_F_Acc","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_AK_ammobox","Weapon_hlc_rifle_ak74","Weapon_hlc_rifle_ak74_dirty","Weapon_hlc_rifle_aks74","Weapon_hlc_rifle_aks74_GL","Weapon_hlc_rifle_ak12","Weapon_hlc_rifle_ak12GL","Weapon_hlc_rifle_akU12","Weapon_hlc_rifle_RPK12","Weapon_hlc_rifle_aks74u","Weapon_hlc_rifle_aek971worn","Weapon_hlc_rifle_aek971","Weapon_hlc_rifle_ak47","Weapon_hlc_rifle_akm","Weapon_hlc_rifle_akmgl","Weapon_hlc_rifle_rpk","Weapon_hlc_rifle_rpk74n","Weapon_hlc_rifle_saiga12k","Weapon_hlc_rifle_ak74_MTK","Weapon_hlc_rifle_ak74_dirty2","Weapon_hlc_rifle_aks74_MTK","Weapon_hlc_rifle_aks74u_MTK","Weapon_hlc_rifle_aek971_mtk","Weapon_hlc_rifle_akm_MTK","Weapon_hlc_rifle_RK62","Weapon_hlc_rifle_slr107u","Weapon_hlc_rifle_slr107u_MTK","Weapon_hlc_rifle_ak74m","Weapon_hlc_rifle_ak74m_gl","Weapon_hlc_rifle_ak74m_MTK"};
		weapons[] = {"HLC_Optic_PSO1","HLC_Optic_1p29","hlc_muzzle_545SUP_AK","hlc_muzzle_762SUP_AK","hlc_rifle_ak74","hlc_rifle_aks74","hlc_optic_kobra","hlc_optic_goshawk","hlc_rifle_ak12","hlc_rifle_aks74u","hlc_rifle_ak47","hlc_rifle_akm","hlc_rifle_akmgl","hlc_rifle_rpk","hlc_rifle_aks74_GL","hlc_rifle_aek971","hlc_rifle_saiga12k","hlc_rifle_ak74_45rnd","hlc_rifle_ak74_60rnd","hlc_rifle_ak74_dirty","hlc_rifle_ak74_dirty_45rnd","hlc_rifle_ak74_dirty_60rnd","hlc_rifle_ak74_dirty2","hlc_rifle_ak74_dirty2_45rnd","hlc_rifle_ak74_dirty2_60rnd","hlc_rifle_aks74_45rnd","hlc_rifle_aks74_60rnd","hlc_rifle_ak12_45rnd","hlc_rifle_ak12_60rnd","hlc_rifle_ak12GL","hlc_rifle_ak12GL_45rnd","hlc_rifle_ak12GL_60rnd","hlc_rifle_aku12","hlc_rifle_aku12_45rnd","hlc_rifle_aku12_60rnd","hlc_rifle_RPK12","hlc_rifle_RPK12_45rnd","hlc_rifle_RPK12_60rnd","hlc_rifle_aks74u_45rnd","hlc_rifle_aks74u_60rnd","hlc_rifle_ak47_45rnd","hlc_rifle_ak47_75rnd","hlc_rifle_akm_45rnd","hlc_rifle_akm_75rnd","hlc_rifle_akmgl_45rnd","hlc_rifle_akmgl_75rnd","hlc_rifle_rpk_45rnd","hlc_rifle_rpk_75rnd","hlc_rifle_rpk74n","hlc_rifle_rpk74n_45rnd","hlc_rifle_rpk74n_60rnd","hlc_rifle_aks74_GL_45rnd","hlc_rifle_aks74_GL_60rnd","hlc_rifle_aek971_45rnd","hlc_rifle_aek971_60rnd","hlc_rifle_aek971worn","hlc_rifle_aek971worn_45rnd","hlc_rifle_aek971worn_60rnd","hlc_rifle_RK62","hlc_rifle_RK62_45rnd","hlc_rifle_RK62_75rnd","hlc_rifle_slr107u","hlc_rifle_slr107u_45rnd","hlc_rifle_slr107u_75rnd","hlc_rifle_slr107u_MTK","hlc_rifle_slr107u_MTK_45rnd","hlc_rifle_slr107u_MTK_75rnd","hlc_rifle_ak74_MTK","hlc_rifle_ak74_MTK_45rnd","hlc_rifle_ak74_MTK_60rnd","hlc_rifle_ak74m","hlc_rifle_ak74m_45rnd","hlc_rifle_ak74m_60rnd","hlc_rifle_ak74m_gl","hlc_rifle_ak74m_gl_45rnd","hlc_rifle_ak74m_gl_60rnd","hlc_rifle_ak74m_MTK","hlc_rifle_ak74m_MTK_45rnd","hlc_rifle_ak74m_MTK_60rnd","hlc_rifle_aek971_mtk","hlc_rifle_aek971_mtk_45rnd","hlc_rifle_aek971_mtk_60rnd","hlc_rifle_aks74u_MTK","hlc_rifle_aks74u_MTK_45rnd","hlc_rifle_aks74u_MTK_60rnd","hlc_rifle_akm_MTK","hlc_rifle_akm_MTK_45rnd","hlc_rifle_akm_MTK_75rnd","hlc_rifle_aks74_MTK","hlc_rifle_aks74_MTK_45rnd","hlc_rifle_aks74_MTK_60rnd"};
		magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12","hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_t_ak","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_EP_ak","hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_m_rpk","hlc_75Rnd_762x39_m_rpk","hlc_VOG25_AK","hlc_GRD_Red","hlc_GRD_blue","hlc_GRD_green","hlc_GRD_yellow","hlc_GRD_white","hlc_GRD_purple","hlc_GRD_orange","hlc_30Rnd_545x39_S_AK","hlc_45Rnd_545x39_m_rpk","hlc_60Rnd_545x39_t_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","hlc_30rnd_762x39_s_ak"};
		version = "V2.3";
		author = "toadie";
	};
};
class cfgMods
{
	class Mod_Base;
	class Niarms_AK: Mod_Base
	{
		name = "NIArsenal: AK Rifles";
		picture = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
	};
};
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail
{
	class compatibleItems
	{
		HLC_Optic_PSO1 = 1;
		HLC_Optic_1p29 = 1;
		hlc_optic_kobra = 1;
		hlc_optic_goshawk = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_545SUP_AK = 1;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_762SUP_AK = 1;
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadAK12New = "HLC_GestureReloadAK12New";
		HLC_GestureReloadRPK12 = "HLC_GestureReloadRPK12";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			HLC_GestureReloadAK12New[] = {"HLC_GestureReloadAK12New","Gesture"};
			HLC_GestureReloadRPK12[] = {"HLC_GestureReloadRPK12","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReloadAK12New[] = {"HLC_GestureReloadAK12New_Prone","Gesture"};
			HLC_GestureReloadRPK12[] = {"HLC_GestureReloadRPK12_Prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadAK12New[] = {"HLC_GestureReloadAK12New_Context","Gesture"};
			HLC_GestureReloadRPK12[] = {"HLC_GestureReloadRPK12_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadAK12New[] = {"HLC_GestureReloadAK12New_Context","Gesture"};
			HLC_GestureRechamberAWM[] = {"HLC_GestureReloadRPK12_Context","Gesture"};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				HLC_GestureReloadAK12New[] = {"HLC_GestureReloadAK12New_Context","Gesture"};
				HLC_GestureReloadRPK12[] = {"HLC_GestureReloadRPK12_Context","Gesture"};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class HLC_GestureReloadAK12New: Default
		{
			file = "hlc_wp_ak\anim\reload\reload_ak12_standing.rtm";
			speed = -4.8;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.007944,1,0.034722,0,0.8402778,0,0.8888889,1};
		};
		class HLC_GestureReloadAK12New_Prone: Default
		{
			file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
			speed = -4.8;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.007944,1,0.034722,0,0.8402778,0,0.8888889,1};
		};
		class HLC_GestureReloadAK12New_Context: HLC_GestureReloadAK12New
		{
			mask = "handsWeapon_context";
		};
		class HLC_GestureReloadRPK12: Default
		{
			file = "hlc_wp_ak\anim\reload\reload_rpk12_standing.rtm";
			speed = -4.8;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.007944,1,0.034722,0,0.8402778,0,0.8888889,1};
		};
		class HLC_GestureReloadRPK12_Prone: Default
		{
			file = "hlc_wp_ak\anim\reload\reload_rpk12_prone.rtm";
			speed = -4.8;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.007944,1,0.034722,0,0.8402778,0,0.8888889,1};
		};
		class HLC_GestureReloadRPK12_Context: HLC_GestureReloadRPK12
		{
			mask = "handsWeapon_context";
		};
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class HLC_AK_ammobox: B_supplyCrate_F
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC AK Supply Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		dlc = "Niarms_AK";
		class TransportMagazines
		{
			class _xx_hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 60;
			};
			class _xx_hlc_30Rnd_545x39_t_ak
			{
				magazine = "hlc_30Rnd_545x39_t_ak";
				count = 60;
			};
			class _xx_hlc_30Rnd_545x39_S_AK
			{
				magazine = "hlc_30Rnd_545x39_S_AK";
				count = 60;
			};
			class _xx_hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 60;
			};
			class _xx_hlc_30Rnd_545x39_EP_ak
			{
				magazine = "hlc_30Rnd_545x39_EP_ak";
				count = 60;
			};
			class _xx_hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 60;
			};
			class _xx_hlc_30Rnd_762x39_t_ak
			{
				magazine = "hlc_30Rnd_762x39_t_ak";
				count = 60;
			};
			class _xx_hlc_45Rnd_762x39_t_rpk
			{
				magazine = "hlc_45Rnd_762x39_t_rpk";
				count = 60;
			};
			class _xx_hlc_45Rnd_762x39_m_rpk
			{
				magazine = "hlc_45Rnd_762x39_m_rpk";
				count = 60;
			};
			class _xx_hlc_60Rnd_545x39_t_rpk
			{
				magazine = "hlc_60Rnd_545x39_t_rpk";
				count = 60;
			};
			class _xx_hlc_10rnd_12g_buck_S12
			{
				magazine = "hlc_10rnd_12g_buck_S12";
				count = 60;
			};
			class _xx_hlc_10rnd_12g_slug_S12
			{
				magazine = "hlc_10rnd_12g_slug_S12";
				count = 60;
			};
			class _xx_hlc_VOG25_AK
			{
				magazine = "hlc_VOG25_AK";
				count = 60;
			};
			class _xx_hlc_GRD_White
			{
				magazine = "hlc_GRD_White";
				count = 60;
			};
			class _xx_hlc_GRD_red
			{
				magazine = "hlc_GRD_red";
				count = 60;
			};
			class _xx_hlc_GRD_green
			{
				magazine = "hlc_GRD_green";
				count = 60;
			};
			class _xx_hlc_GRD_blue
			{
				magazine = "hlc_GRD_blue";
				count = 60;
			};
			class _xx_hlc_GRD_orange
			{
				magazine = "hlc_GRD_orange";
				count = 60;
			};
			class _xx_hlc_GRD_purple
			{
				magazine = "hlc_GRD_purple";
				count = 60;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 10;
			};
			class _xx_hlc_rifle_aks74
			{
				weapon = "hlc_rifle_aks74";
				count = 10;
			};
			class _xx_hlc_rifle_aks74_GL
			{
				weapon = "hlc_rifle_aks74_GL";
				count = 10;
			};
			class _xx_hlc_rifle_aks74_MTK
			{
				weapon = "hlc_rifle_aks74_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_aks74u
			{
				weapon = "hlc_rifle_aks74u";
				count = 10;
			};
			class _xx_hlc_rifle_aks74u_MTK
			{
				weapon = "hlc_rifle_aks74u_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_ak47
			{
				weapon = "hlc_rifle_ak47";
				count = 10;
			};
			class _xx_hlc_rifle_akm
			{
				weapon = "hlc_rifle_akm";
				count = 10;
			};
			class _xx_hlc_rifle_akmgl
			{
				weapon = "hlc_rifle_akmgl";
				count = 10;
			};
			class _xx_hlc_rifle_akm_MTK
			{
				weapon = "hlc_rifle_akm_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_RK62
			{
				weapon = "hlc_rifle_RK62";
				count = 10;
			};
			class _xx_hlc_rifle_slr107u
			{
				weapon = "hlc_rifle_slr107u";
				count = 10;
			};
			class _xx_hlc_rifle_slr107u_MTK
			{
				weapon = "hlc_rifle_slr107u_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_aku12
			{
				weapon = "hlc_rifle_aku12";
				count = 10;
			};
			class _xx_hlc_rifle_rpk12
			{
				weapon = "hlc_rifle_rpk12";
				count = 10;
			};
			class _xx_hlc_rifle_rpk
			{
				weapon = "hlc_rifle_rpk";
				count = 10;
			};
			class _xx_hlc_rifle_rpk74n
			{
				weapon = "hlc_rifle_rpk74n";
				count = 10;
			};
			class _xx_hlc_rifle_ak12
			{
				weapon = "hlc_rifle_ak12";
				count = 10;
			};
			class _xx_hlc_rifle_ak12gl
			{
				weapon = "hlc_rifle_ak12gl";
				count = 10;
			};
			class _xx_hlc_rifle_aek971
			{
				weapon = "hlc_rifle_aek971";
				count = 10;
			};
			class _xx_hlc_rifle_aek971_mtk
			{
				weapon = "hlc_rifle_aek971_mtk";
				count = 10;
			};
			class _xx_hlc_rifle_ak74_MTK
			{
				weapon = "hlc_rifle_ak74_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_ak74m
			{
				weapon = "hlc_rifle_ak74m";
				count = 10;
			};
			class _xx_hlc_rifle_ak74m_gl
			{
				weapon = "hlc_rifle_ak74m_gl";
				count = 10;
			};
			class _xx_hlc_rifle_ak74m_MTK
			{
				weapon = "hlc_rifle_ak74m_MTK";
				count = 10;
			};
			class _xx_hlc_rifle_saiga12k
			{
				weapon = "hlc_rifle_saiga12k";
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
			class _xx_HLC_Optic_PSO1
			{
				name = "HLC_Optic_PSO1";
				count = 10;
			};
			class _xx_HLC_Optic_1p29
			{
				name = "HLC_Optic_1p29";
				count = 10;
			};
			class _xx_hlc_muzzle_545SUP_AK
			{
				name = "hlc_muzzle_545SUP_AK";
				count = 10;
			};
			class _xx_hlc_muzzle_762SUP_AK
			{
				name = "hlc_muzzle_762SUP_AK";
				count = 10;
			};
			class _xx_hlc_optic_kobra
			{
				name = "hlc_optic_kobra";
				count = 10;
			};
			class _xx_hlc_optic_goshawk
			{
				name = "hlc_optic_goshawk";
				count = 10;
			};
		};
	};
	class Weapon_Base_F;
	class Weapon_hlc_rifle_ak74: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74
			{
				weapon = "hlc_rifle_ak74";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74_MTK
			{
				weapon = "hlc_rifle_ak74_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74_dirty: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74(Worn)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74_dirty
			{
				weapon = "hlc_rifle_ak74_dirty";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74_dirty2: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74(Worn)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74_dirty2
			{
				weapon = "hlc_rifle_ak74_dirty2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aks74: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKS-74";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aks74
			{
				weapon = "hlc_rifle_aks74";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aks74_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKS-74(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aks74_MTK
			{
				weapon = "hlc_rifle_aks74_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aks74_GL: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKS-74+GP30";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aks74_GL
			{
				weapon = "hlc_rifle_aks74_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak12: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-12";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak12
			{
				weapon = "hlc_rifle_ak12";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak12GL: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-12+GP30";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak12GL
			{
				weapon = "hlc_rifle_ak12GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aku12: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-12U";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aku12
			{
				weapon = "hlc_rifle_aku12";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_RPK12: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "RPK-12";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_RPK12
			{
				weapon = "hlc_rifle_RPK12";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aks74u: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKS-74U";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aks74u
			{
				weapon = "hlc_rifle_aks74u";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aks74u_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKS-74U(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aks74u_MTK
			{
				weapon = "hlc_rifle_aks74u_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aek971worn: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AEK-971(Worn)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aek971worn
			{
				weapon = "hlc_rifle_aek971worn";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aek971: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AEK-971";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aek971
			{
				weapon = "hlc_rifle_aek971";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_aek971_mtk: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AEK-971(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_aek971_mtk
			{
				weapon = "hlc_rifle_aek971_mtk";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak47: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-47";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak47
			{
				weapon = "hlc_rifle_ak47";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_akm: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKM";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_akm
			{
				weapon = "hlc_rifle_akm";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_akm_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKM(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_akm_MTK
			{
				weapon = "hlc_rifle_akm_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_akmgl: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AKM+GP25";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_akmgl
			{
				weapon = "hlc_rifle_akmgl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_rpk: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "RPK";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_rpk
			{
				weapon = "hlc_rifle_rpk";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_75Rnd_762x39_m_rpk
			{
				magazine = "hlc_75Rnd_762x39_m_rpk";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_rpk74n: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "RPK-74";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_MachineGuns";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_rpk74n
			{
				weapon = "hlc_rifle_rpk74n";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_45Rnd_545x39_t_rpk
			{
				magazine = "hlc_45Rnd_545x39_t_rpk";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_saiga12k: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "Saiga 12K";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_saiga12k
			{
				weapon = "hlc_rifle_saiga12k";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_10rnd_12g_buck_S12
			{
				magazine = "hlc_10rnd_12g_buck_S12";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_RK62: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "RK.62";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_RK62
			{
				weapon = "hlc_rifle_RK62";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_slr107u: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "SLR-107U";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_slr107u
			{
				weapon = "hlc_rifle_slr107u";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_slr107u_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "SLR-107U(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_slr107u_MTK
			{
				weapon = "hlc_rifle_slr107u_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_762x39_b_ak
			{
				magazine = "hlc_30Rnd_762x39_b_ak";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74m: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74M";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74m
			{
				weapon = "hlc_rifle_ak74m";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74m_gl: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74M(GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74m_gl
			{
				weapon = "hlc_rifle_ak74m_gl";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_ak74m_MTK: Weapon_Base_F
	{
		dlc = "Niarms_AK";
		scope = 2;
		scopeCurator = 2;
		displayName = "AK-74M(MTK)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_ak74m_MTK
			{
				weapon = "hlc_rifle_ak74m_MTK";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30Rnd_545x39_B_AK
			{
				magazine = "hlc_30Rnd_545x39_B_AK";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_10rnd_12g_buck_S12: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_12G_Buck";
		count = 8;
		descriptionshort = "Caliber: 12 Gauge 00-Buck<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "12 Gauge Buckshot 12Rnd Saiga Magazine";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_buck_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "00-Buck";
	};
	class hlc_10rnd_12g_slug_S12: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "B_12Gauge_Slug";
		count = 8;
		descriptionshort = "Caliber: 12 Gauge Slug<br />Rounds: 12<br />Used in: Saiga12K";
		displayname = "12 Gauge Slug 12Rnd Saiga Magazine";
		initspeed = 700;
		lastroundstracer = 1;
		picture = "\hlc_wp_ak\tex\ui\m_saiga12k_slug_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_saiga.p3d";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "Slug";
	};
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 5.45x39mm 7N6M<br />Type:Full Metal Jacket (Lead Tip, Mild Steel Core)<br />Rounds: 30";
		displayname = "5.45mm FMJ 30Rnd AK Magazine";
		initSpeed = 879.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N6M FMJ";
	};
	class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_7u1";
		count = 30;
		descriptionshort = "Caliber: 5.45x39mm 7U1<br />Type:Full Metal Jacket<br />Rounds: 30";
		displayname = "5.45mm Subsonic 30Rnd AK Magazine";
		initspeed = 371;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7U1 Subsonic";
		model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		descriptionshort = "Caliber: 5.45x39mm 7T3<br />Type:Full Metal Jacket (Barium Tip, Mild Steel Core)<br />Rounds: 30";
		displayname = "5.45mm Tracer 30Rnd AK Magazine";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 1;
		mass = 12;
		displaynameshort = "7T3 Tracer";
		picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 5.45x39mm 7T3<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 45";
		displayname = "5.45mm Tracer 45Rnd RPK74 Magazine";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 18.3;
		displaynameshort = "7T3 Tracer";
		picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_rpk74.p3d";
	};
	class hlc_45Rnd_545x39_m_rpk: hlc_30Rnd_545x39_T_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 45";
		displayname = "5.45mm FMJ 45Rnd RPK74 Magazine (Tracers Every 3)";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 18.3;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_rpk74.p3d";
	};
	class hlc_60Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_Tracer";
		count = 60;
		descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 60";
		displayname = "5.45mm FMJ 60Rnd RPK Magazine";
		lastroundstracer = 5;
		scope = 2;
		tracersevery = 3;
		mass = 24;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_rpk12.p3d";
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "FH_545x39_EP";
		descriptionshort = "Caliber: 5.45x39mm 7N10 EP<br />Type: Full Metal Jacket (Lead Tip, Hardened Steel Core)<br />Rounds: 30";
		displayname = "5.45mm EP 30Rnd AK Magazine";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 12;
		displaynameshort = "7N10 EP-FMJ";
		initSpeed = 879.9;
		picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_74.p3d";
	};
	class hlc_30Rnd_762x39_b_ak: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231S(M43 Ball)<br />Type: Full Metal Jacket with Mild Steel Core<br />Rounds: 30";
		displayname = "7.62mm FMJ 30Rnd AK Magazine";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "57-N-231S FMJ";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
		initspeed = 739.1;
	};
	class hlc_30Rnd_762x39_t_ak: hlc_30Rnd_762x39_b_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P<br />Type: Barium Salt Tracer<br />Rounds: 30";
		displayname = "7.62mm Tracer 30Rnd AK Magazine";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "57-N-231P Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_t_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
		initspeed = 739.1;
	};
	class hlc_30Rnd_762x39_AP_ak: hlc_30Rnd_762x39_b_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_AP";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 30";
		displayname = "7.62mm AP 30Rnd AK Magazine";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 13;
		displaynameshort = "7N23 AP";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
		initspeed = 759.0;
	};
	class hlc_45Rnd_762x39_AP_rpk: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_AP";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 45";
		displayname = "7.62mm AP 45Rnd RPK Magazine";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 16;
		displaynameshort = "7N23 AP";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
		initspeed = 759.0;
	};
	class hlc_75Rnd_762x39_AP_rpk: hlc_45Rnd_762x39_AP_rpk
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		count = 75;
		descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 75";
		displayname = "7.62mm AP 75Rnd RPK Magazine";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 0;
		mass = 32;
		displaynameshort = "7N23 AP";
		picture = "\hlc_wp_ak\tex\ui\m_rpkdrum_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_RPKdrum.p3d";
		initspeed = 759.0;
	};
	class hlc_30rnd_762x39_s_ak: hlc_30Rnd_762x39_b_ak
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_Ball";
		count = 30;
		descriptionshort = "Caliber: 7.62x39mm 557-N-321U<br />Type: Full Metal Jacket with Mild Steel Core<br />Rounds: 30";
		displayname = "7.62mm Subsonic 30Rnd AK Magazine";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 13;
		displaynameshort = "57-N-321U Subsonic";
		picture = "\hlc_wp_ak\tex\ui\m_ak47_b_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine.p3d";
		initspeed = 311.8;
	};
	class hlc_45Rnd_762x39_t_rpk: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231P<br />Type: Barium Salt Tracer<br />Rounds: 45";
		displayname = "7.62mm Tracer 45Rnd RPK Magazine";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 1;
		mass = 16;
		displaynameshort = "57-N-231P Tracer";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_tracer_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_Rpk.p3d";
		initspeed = 739.1;
	};
	class hlc_45Rnd_762x39_m_rpk: hlc_45Rnd_762x39_t_rpk
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "HLC_762x39_Tracer";
		count = 45;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231S/57-N-231P<br />Type: FMJ/Barium Salt Tracer<br />Rounds: 45";
		displayname = "7.62mm FMJ 45Rnd RPK Magazine (Tracers Every 3)";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 16;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpk_mixed_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_RPK.p3d";
		initspeed = 739.1;
	};
	class hlc_75Rnd_762x39_m_rpk: hlc_45Rnd_762x39_m_rpk
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		count = 75;
		descriptionshort = "Caliber: 7.62x39mm 57-N-231S/57-N-231P<br />Type: FMJ/Barium Salt Tracer<br />Rounds: 75";
		displayname = "7.62mm FMJ 75Rnd RPK Magazine (Tracers every 3)";
		lastroundstracer = 1;
		scope = 2;
		tracersevery = 3;
		mass = 32;
		displaynameshort = "Tracer/Ball";
		picture = "\hlc_wp_ak\tex\ui\m_rpkdrum_ca.paa";
		model = "\hlc_wp_ak\mesh\magazine\magazine_RPKdrum.p3d";
		initspeed = 739.1;
	};
	class 1Rnd_HE_Grenade_shell;
	class hlc_VOG25_AK: 1Rnd_HE_Grenade_shell
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "G_40mm_HE";
		count = 1;
		descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "VOG25 HE Grenade Round";
		displaynameshort = "HE Grenade";
		initspeed = 76;
		mass = 4;
		namesound = "";
		picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
		scope = 2;
		type = 16;
	};
	class hlc_GRD_White: 1Rnd_HE_Grenade_shell
	{
		dlc = "Niarms_AK";
		author = "Toadie";
		ammo = "G_40mm_Smoke";
		descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (White)";
		displaynameshort = "White Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
		reloadaction = "HLC_GestureReloadGP30";
	};
	class hlc_GRD_Red: hlc_grd_white
	{
		dlc = "Niarms_AK";
		ammo = "G_40mm_SmokeRed";
		descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Red)";
		displaynameshort = "Red Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
	};
	class hlc_GRD_green: hlc_grd_white
	{
		dlc = "Niarms_AK";
		ammo = "G_40mm_SmokeGreen";
		descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Green)";
		displaynameshort = "Green Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
	};
	class hlc_GRD_yellow: hlc_grd_white
	{
		dlc = "Niarms_AK";
		ammo = "G_40mm_SmokeYellow";
		descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Yellow)";
		displaynameshort = "Yellow Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
	};
	class hlc_GRD_orange: hlc_grd_white
	{
		ammo = "G_40mm_SmokeOrange";
		descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Orange)";
		displaynameshort = "Orange Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
	};
	class hlc_GRD_purple: hlc_grd_white
	{
		dlc = "Niarms_AK";
		ammo = "G_40mm_SmokePurple";
		descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Purple)";
		displaynameshort = "Purple Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
	};
	class hlc_GRD_blue: hlc_grd_white
	{
		dlc = "Niarms_AK";
		ammo = "G_40mm_SmokeBlue";
		descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
		displayname = "GRD Round (Blue)";
		displaynameshort = "Blue Smoke";
		picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
	};
};
class CfgWeapons
{
	class InventoryOpticsItem_Base_F;
	class ItemCore;
	class optic_ACO_grn: ItemCore
	{
		class ItemInfo;
	};
	class optic_dms;
	class HLC_Optic_PSO1: optic_dms
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		descriptionshort = "PSO1 Optical Sniper Sight<br />Magnification: 4x";
		displayname = "PSO-1M";
		model = "\hlc_wp_ak\mesh\pso1\pso1.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_pso1_x_ca";
		ACE_ScopeAdjust_Vertical[] = {0,0};
		ACE_ScopeAdjust_Horizontal[] = {-10,10};
		ACE_ScopeAdjust_Increment = 0.5;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 12;
			modelOptics = "\hlc_wp_ak\mesh\pso1\pso_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {100,200,300,400,450,500,550,600,650,700,750,800,850,900,950,1000};
					discreteDistanceInitIndex = 3;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip_ILLUM
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					discreteDistance[] = {400};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\pso1\pso_optics_illum"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.06;
	};
	class HLC_Optic_1p29: HLC_Optic_PSO1
	{
		dlc = "Niarms_AK";
		author = "Bionic, Toadie";
		descriptionshort = "1P29 Combat Optic<br />Magnification: 4x";
		displayname = "1P29";
		model = "\hlc_wp_ak\mesh\1p29\1p29.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_1p29_ca";
		ACE_ScopeAdjust_Vertical[] = {};
		ACE_ScopeAdjust_Horizontal[] = {};
		ACE_ScopeAdjust_Increment = 0;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 16;
			modelOptics = "\hlc_wp_ak\mesh\1p29\1p29_optics";
			class OpticsModes
			{
				class Snip
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					discreteDistance[] = {300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 400;
					distanceZoomMax = 400;
					discretefov[] = {0.0623};
					discreteInitIndex = 0;
					memoryPointCamera = "opticView";
					modelOptics[] = {"\hlc_wp_ak\mesh\1p29\1p29_optics"};
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
			};
		};
		inertia = 0.08;
	};
	class hlc_optic_kobra: optic_ACO_grn
	{
		dlc = "Niarms_AK";
		author = "Tigg, Toadie";
		descriptionshort = "Open Face Collimator Optic";
		displayname = "Kobra EKP-1S-03M";
		model = "\hlc_wp_ak\mesh\Kobra\kobra.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_kobra_ca";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
		class ItemInfo: ItemInfo
		{
			mass = 8;
		};
		inertia = 0.04;
	};
	class hlc_optic_goshawk: optic_ACO_grn
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		scope = 2;
		displayName = "Goshawk TIWS";
		descriptionshort = "Goshawk Thermal Immaging Weapon Sight<br />Magnification: 3.6x";
		picture = "\hlc_wp_ak\tex\ui\gear_goshawk_ca";
		model = "\hlc_wp_ak\mesh\goshawk\goshawk.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 32;
			modelOptics = "\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d";
			class OpticsModes
			{
				class Goshawk_TI
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomMin = 0.06944444;
					opticsZoomMax = 0.06944444;
					opticsZoomInit = 0.06944444;
					distanceZoomMin = 300;
					distanceZoomMax = 2200;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200};
					discreteDistanceInitIndex = 1;
					modelOptics[] = {"\hlc_wp_ak\mesh\goshawk\TI_goshawk_optic.p3d"};
					memoryPointCamera = "eye2";
					visionmode[] = {"Ti","Normal"};
					thermalMode[] = {0,1};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "eye";
				};
			};
		};
		inertia = 0.16;
	};
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class hlc_muzzle_545SUP_AK: muzzle_snds_H
	{
		dlc = "Niarms_AK";
		author = "Bohemia Interactive, Toadie";
		displayName = "PBS4 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS4\pbs4";
		class ItemInfo: ItemInfo
		{
			mass = 12;
		};
		inertia = 0.08;
	};
	class hlc_muzzle_762SUP_AK: hlc_muzzle_545SUP_AK
	{
		dlc = "Niarms_AK";
		author = "Jason9Jason, Toadie";
		displayName = "PBS1 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "\hlc_wp_ak\mesh\PBS1\pbs1";
	};
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class hlc_ak_base: Rifle_Base_F
	{
		magazineReloadSwitchPhase = 0.5;
		author = "Toadie";
		recoil = "recoil_mk20";
		deployedPivot = "deploypivot";
		hasBipod = 0;
		scope = 0;
		magazines[] = {"hlc_30Rnd_545x39_B_AK","hlc_30Rnd_545x39_T_AK","hlc_30Rnd_545x39_EP_AK","hlc_45Rnd_545x39_t_rpk","hlc_30Rnd_545x39_S_AK","hlc_60Rnd_545x39_t_rpk","hlc_45Rnd_545x39_m_rpk","30Rnd_545x39_Mag_F","30Rnd_545x39_Mag_Green_F","30Rnd_545x39_Mag_Tracer_F","30Rnd_545x39_Mag_Tracer_Green_F"};
		class Library
		{
			libTextDesc = "Izhmash AK74";
		};
		reloadAction = "HLC_GestureReloadAK";
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
			class MuzzleSlot: asdg_MuzzleSlot_545R
			{
				iconPosition[] = {0.0,0.45};
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
		descriptionShort = "Assault rifle<br/>Caliber: 5.45mm";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_akhandgesture.rtm"};
		changeFiremodeSound[] = {"hlc_wp_ak\snd\ak_selector",1,1,8};
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
		modes[] = {"FullAuto","Single","AI_Burst_close","AI_Burst_far","AI_Single_optics1","AI_Single_optics2"};
		class Single: Mode_SemiAuto
		{
			reloadtime = "(60/650)";
			dispersion = 0.000654498;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_Shot_SoundSet","Nia_ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_silencerShot_SoundSet","Nia_ak74_silencerTail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadtime = "(60/650)";
			dispersion = 0.000654498;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.3;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_Shot_SoundSet","Nia_ak74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak74_silencerShot_SoundSet","Nia_ak74_silencerTail_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
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
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
			showToPlayer = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		drysound[] = {"\hlc_wp_ak\snd\empty_assaultrifles",1,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak74\ak74m_reload",0.8,1,20};
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		class hlc_GP30: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m","GL_eye_400m"};
			discreteDistanceInitIndex = 1;
			displayname = "GP30";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			drysound[] = {"A3\sounds_f\Weapons\other\sfx5",1,1,400};
			cursoraim = "gl";
			magazinereloadtime = 0;
			magazines[] = {"hlc_VOG25_AK","hlc_GRD_White","hlc_GRD_Red","hlc_GRD_Green","hlc_GRD_Yellow","hlc_GRD_Purple","hlc_GRD_Blue","hlc_GRD_Orange"};
			reloadmagazinesound[] = {"\hlc_wp_ak\snd\gp30_reload",1,1,20};
			reloadtime = 0.1;
			sound[] = {"\hlc_wp_ak\snd\gp30_fire",1.0,1,400};
			weaponinfotype = "RscWeaponZeroing";
			reloadAction = "HLC_GestureReloadGP30";
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
		class hlc_GP25: hlc_GP30
		{
			cameraDir = "OP_look";
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
			discreteDistanceInitIndex = 2;
			displayname = "GP25";
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		dlc = "Niarms_AK";
		AB_barrelTwist = 7.87;
		AB_barrelLength = 16.3;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
		deployedPivot = "deploypivot";
		author = "MrRifleman, Toadie";
		scope = 2;
		displayName = "Izhmash AK74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_ak74\body_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		bg_bipod = 0;
		discreteDistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		reloadAction = "HLC_GestureReloadAK545";
		class Single: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class AI_Burst_close: FullAuto
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
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.45};
				iconScale = 0.2;
			};
		};
		inertia = 0.3;
		dexterity = 1.6495835;
		aimTransitionSpeed = 1.1547084;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_60rnd";
			default = "hlc_rifle_ak74";
		};
	};
	class hlc_rifle_ak74_45rnd: hlc_rifle_ak74
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_45rnd.p3d";
		inertia = "0.3+0.081";
		dexterity = 1.3865825;
		aimTransitionSpeed = 0.97060776;
	};
	class hlc_rifle_ak74_60rnd: hlc_rifle_ak74
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_60rnd.p3d";
		inertia = "0.3+1";
		dexterity = 1.3166463;
		aimTransitionSpeed = 0.92165244;
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		author = "MrRifleman, Millenia, Toadie";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74d1_ca";
		displayName = "Izhmash AK74(Worn)";
		hiddenSelections[] = {"Main","Dovetail","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_ak74\body_dirty_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_dirty_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty_60rnd";
			default = "hlc_rifle_ak74_dirty";
		};
	};
	class hlc_rifle_ak74_dirty_45rnd: hlc_rifle_ak74_dirty
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(Worn)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty_45rnd.p3d";
		inertia = "0.3+0.081";
		dexterity = 1.3865825;
		aimTransitionSpeed = 0.97060776;
	};
	class hlc_rifle_ak74_dirty_60rnd: hlc_rifle_ak74_dirty
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(Worn)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty_60rnd.p3d";
		inertia = "0.3+0.1";
		dexterity = 1.3166463;
		aimTransitionSpeed = 0.92165244;
	};
	class hlc_rifle_ak74_dirty2: hlc_rifle_ak74
	{
		author = "MrRifleman, Bull5hit, Toadie";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74d2_ca";
		displayName = "Izhmash AK74(Worn)";
		hiddenSelections[] = {"Main","Dovetail","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_ak74\body_dirty2_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty2_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_dirty2_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty2_60rnd";
			default = "hlc_rifle_ak74_dirty2";
		};
	};
	class hlc_rifle_ak74_dirty2_45rnd: hlc_rifle_ak74_dirty2
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(Worn)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2_45rnd.p3d";
		inertia = "0.3+0.08";
		dexterity = 1.3637626;
		aimTransitionSpeed = 0.95463383;
	};
	class hlc_rifle_ak74_dirty2_60rnd: hlc_rifle_ak74_dirty2
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(Worn)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_dirty2_60rnd.p3d";
		inertia = "0.3+0.1";
		dexterity = 1.3166463;
		aimTransitionSpeed = 0.92165244;
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "MrRifleman, Toadie";
		reloadAction = "HLC_GestureReloadAK545";
		scope = 2;
		model = "\hlc_wp_ak\mesh\aks74\aks74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74_ca";
		displayName = "Izhmash AKS74";
		hiddenSelections[] = {"Main","Dovetail","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_aks\aks_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 58;
		};
		inertia = 0.29;
		dexterity = 1.6926577;
		aimTransitionSpeed = 1.1848603;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_60rnd";
			default = "hlc_rifle_aks74";
		};
	};
	class hlc_rifle_aks74_45rnd: hlc_rifle_aks74
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74";
		model = "\hlc_wp_ak\mesh\aks74\aks74_45rnd.p3d";
		inertia = "0.29+0.08";
		dexterity = 1.4132396;
		aimTransitionSpeed = 0.9892677;
	};
	class hlc_rifle_aks74_60rnd: hlc_rifle_aks74
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74";
		model = "\hlc_wp_ak\mesh\aks74\aks74_60rnd.p3d";
		inertia = "0.29+0.1";
		dexterity = 1.3396142;
		aimTransitionSpeed = 0.9377299;
	};
	class hlc_rifle_ak12: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash AK12";
		model = "\hlc_wp_ak\mesh\ak12\ak12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12_ca";
		hiddenSelections[] = {"Main","Foregrip","Bracket","Bipod","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\ak12\ak12_m_co.paa","hlc_wp_ak\tex\ak12\ak12_upper_co.paa","hlc_wp_ak\tex\toadie_offset\rail_co.paa","hlc_wp_ak\tex\mil_aks\aks-74u_co.paa",""};
		discreteDistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		bg_bipod = 0;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2",1,1,20};
		reloadAction = "HLC_GestureReloadAK12New";
		modes[] = {"FullAuto","Burst","Single","AI_Burst_close","AI_Single_optics1","AI_Single_optics2","AI_far","SemiAuto"};
		class FullAuto: Mode_FullAuto
		{
			reloadtime = "(60/600)";
			dispersion = 0.000654498;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.8;
			maxRange = 30;
			maxRangeProbab = 0.3;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_Shot_SoundSet","Nia_ak12_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_silencerShot_SoundSet","Nia_ak12_silencerTail_SoundSet"};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadtime = "(60/600)";
			dispersion = 0.00062541;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 30;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_Shot_SoundSet","Nia_ak12_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_silencerShot_SoundSet","Nia_ak12_silencerTail_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			burst = 2;
			textureType = "dual";
			reloadtime = "(60/1000)";
			dispersion = 0.00062541;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 2;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.0005;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_Shot_SoundSet","Nia_ak12_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_ak12_silencerShot_SoundSet","Nia_ak12_silencerTail_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
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
		class SemiAuto: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
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
		};
		inertia = 0.33;
		dexterity = 1.5360194;
		aimTransitionSpeed = 1.0752136;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak12_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak12_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak12_60rnd";
			default = "hlc_rifle_ak12";
		};
	};
	class hlc_rifle_ak12_45rnd: hlc_rifle_ak12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12";
		model = "\hlc_wp_ak\mesh\ak12\ak12_45rnd.p3d";
		inertia = "0.33+0.08";
		dexterity = 1.3144112;
		aimTransitionSpeed = 0.9200878;
	};
	class hlc_rifle_ak12_60rnd: hlc_rifle_ak12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12";
		model = "\hlc_wp_ak\mesh\ak12\ak12_60rnd.p3d";
		inertia = "0.33+0.1";
		dexterity = 1.2540196;
		aimTransitionSpeed = 0.8778137;
	};
	class hlc_rifle_ak12GL: hlc_rifle_ak12
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash AK12(GL)";
		model = "\hlc_wp_ak\mesh\ak12\ak12GP.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12GL_ca";
		hiddenSelections[] = {"Main","Foregrip","Bracket","Bipod","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\ak12\ak12_m_co.paa","hlc_wp_ak\tex\ak12\ak12_upper_co.paa","hlc_wp_ak\tex\toadie_offset\rail_co.paa","hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\gp30\gp30_co.paa"};
		discretedistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		reloadAction = "HLC_GestureReloadAK12New";
		muzzles[] = {"this","hlc_GP30"};
		weaponinfotype = "RscWeaponZeroing";
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94;
		};
		inertia = 0.67;
		dexterity = 1.1977026;
		aimTransitionSpeed = 0.83839184;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak12GL_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak12GL_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak12GL_60rnd";
			default = "hlc_rifle_ak12GL";
		};
	};
	class hlc_rifle_ak12GL_45rnd: hlc_rifle_ak12GL
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12(GL)";
		model = "\hlc_wp_ak\mesh\ak12\ak12GP_45rnd.p3d";
		inertia = "0.67+0.08";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_ak12GL_60rnd: hlc_rifle_ak12GL
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12(GL)";
		model = "\hlc_wp_ak\mesh\ak12\ak12GP_60rnd.p3d";
		inertia = "0.67+0.1";
		dexterity = 1.0475565;
		aimTransitionSpeed = 0.73328954;
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		AB_barrelTwist = 6.3;
		AB_barrelLength = 8.3;
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 210.82;
		author = "Maibatsu, Toadie";
		scope = 2;
		initspeed = -0.816667;
		displayName = "Izhmash AK12U";
		model = "\hlc_wp_ak\mesh\ak12\akU12.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak12u_ca";
		hiddenSelections[] = {"Main","Foregrip","Bracket","Bipod","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\ak12\ak12_m_co.paa","hlc_wp_ak\tex\ak12\ak12_upper_co.paa","hlc_wp_ak\tex\toadie_offset\rail_co.paa","hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\gp30\gp30_co.paa"};
		discretedistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discretedistanceinitindex = 2;
		bg_bipod = 0;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak12\ak12_reload2",1,1,20};
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_aks74uhandgesture.rtm"};
		reloadAction = "HLC_GestureReloadAK12New";
		class FullAuto: FullAuto
		{
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_aks74u_Shot_SoundSet","Nia_aks74u_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_aks74u_silencerShot_SoundSet","Nia_aks74u_silencerTail_SoundSet"};
			};
		};
		class Single: Single
		{
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_aks74u_Shot_SoundSet","Nia_aks74u_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_aks74u_silencerShot_SoundSet","Nia_aks74u_silencerTail_SoundSet"};
			};
			maxRange = 400;
		};
		class Burst: Burst
		{
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_aks74u_Shot_SoundSet","Nia_aks74u_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_aks74u_silencerShot_SoundSet","Nia_aks74u_silencerTail_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
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
		class SemiAuto: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
		};
		inertia = 0.3;
		dexterity = 1.6495835;
		aimTransitionSpeed = 1.1547084;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aku12_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aku12_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aku12_60rnd";
			default = "hlc_rifle_aku12";
		};
	};
	class hlc_rifle_aku12_45rnd: hlc_rifle_aku12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12U";
		model = "\hlc_wp_ak\mesh\ak12\aku12_45rnd.p3d";
		inertia = "0.3+0.08";
		dexterity = 1.3865825;
		aimTransitionSpeed = 0.97060776;
	};
	class hlc_rifle_aku12_60rnd: hlc_rifle_aku12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK12U";
		model = "\hlc_wp_ak\mesh\ak12\aku12_60rnd.p3d";
		inertia = "0.3+0.1";
		dexterity = 1.3166463;
		aimTransitionSpeed = 0.92165244;
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		dlc = "Niarms_AK";
		AB_barrelLength = 23.2;
		ACE_barrelLength = 589.28;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		hasBipod = 1;
		soundBipodDown[] = {"\hlc_wp_ak\snd\rpk_bipodin","db-3",1,20};
		soundBipodUp[] = {"\hlc_wp_ak\snd\rpk_bipodout","db-3",1,20};
		author = "Maibatsu, Toadie";
		scope = 2;
		displayName = "Izhmash RPK12";
		descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
		model = "\hlc_wp_ak\mesh\ak12\rpk12_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk12_ca";
		hiddenSelections[] = {"Main","Foregrip","Bracket","Bipod","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\ak12\ak12_m_co.paa","hlc_wp_ak\tex\ak12\ak12_upper_co.paa","hlc_wp_ak\tex\toadie_offset\rail_co.paa","hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\gp30\gp30_co.paa"};
		cursor = "mg";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		discretedistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discretedistanceinitindex = 2;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak12\rpk12_reload",1,1,20};
		reloadAction = "HLC_GestureReloadRPK12";
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
		};
		class Burst: Burst
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
			requiredOpticType = 1;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
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
		class SemiAuto: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class AI_far: Single
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
			burst = 5;
			reloadtime = 0.2;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 4;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 600;
			midRangeProbab = 0.05;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class Library
		{
			libTextDesc = "Izhmash AK12 5.45mm";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 98;
		};
		inertia = 0.7;
		dexterity = 1.14985;
		aimTransitionSpeed = 0.804895;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_RPK12_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_RPK12_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_RPK12_60rnd";
			default = "hlc_rifle_RPK12";
		};
	};
	class hlc_rifle_RPK12_45rnd: hlc_rifle_RPK12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK12";
		model = "\hlc_wp_ak\mesh\ak12\rpk12_45rnd.p3d";
		inertia = "0.7+0.08";
		dexterity = 1.0464402;
		aimTransitionSpeed = 0.7325082;
	};
	class hlc_rifle_RPK12_60rnd: hlc_rifle_RPK12
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK12";
		model = "\hlc_wp_ak\mesh\ak12\rpk12.p3d";
		inertia = "0.7+0.1";
		dexterity = 1.0248959;
		aimTransitionSpeed = 0.71742713;
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		AB_barrelTwist = 6.3;
		AB_barrelLength = 8.3;
		ACE_barrelTwist = 160.02;
		ACE_barrelLength = 210.82;
		author = "Millenia, Toadie";
		scope = 2;
		displayName = "Izhmash AKS74U";
		initspeed = -0.816667;
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74u_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_ak74\body_co.paa"};
		discretedistance[] = {350,500};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_aks74uhandgesture.rtm"};
		reloadAction = "HLC_GestureReloadAK545OneHand";
		class FullAuto: FullAuto
		{
			reloadtime = "(60/700)";
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_aks74u_Shot_SoundSet","Nia_aks74u_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_aks74u_silencerShot_SoundSet","Nia_aks74u_silencerTail_SoundSet"};
			};
		};
		class Single: Single
		{
			reloadtime = "(60/700)";
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_aks74u_Shot_SoundSet","Nia_aks74u_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_aks74u_silencerShot_SoundSet","Nia_aks74u_silencerTail_SoundSet"};
			};
			maxRange = 400;
		};
		class Library
		{
			libTextDesc = "Izhmash AKS74U";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 52;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.26;
		dexterity = 1.8417532;
		aimTransitionSpeed = 1.2892272;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74u_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74u_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_60rnd";
			default = "hlc_rifle_aks74u";
		};
	};
	class hlc_rifle_aks74u_45rnd: hlc_rifle_aks74u
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74U";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\adept\wpn_ak_10_co.paa"};
		inertia = "0.26+0.08";
		dexterity = 1.5026169;
		aimTransitionSpeed = 1.0518318;
	};
	class hlc_rifle_aks74u_60rnd: hlc_rifle_aks74u
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74U";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u_60rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akmags\texture_co.paa"};
		inertia = "0.26+0.1";
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
	};
	class hlc_rifle_ak47: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		scope = 2;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 16.3;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 414.02;
		author = "Twinke Masta, Marcius, Toadie";
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak","hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		displayName = "Izhmash AK47";
		model = "\hlc_wp_ak\mesh\ak47\ak47.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak47_ca";
		hiddenSelections[] = {"Main","upper","Dovetail","Mount","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\47_rec_co.paa","hlc_wp_ak\tex\upper_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\magazine_co.paa"};
		recoil = "recoil_mx";
		discreteDistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		bg_bipod = 0;
		descriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
		reloadAction = "HLC_GestureReloadAK762";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\ak47\ak_reload_longer",0.9,1,30};
		class FullAuto: FullAuto
		{
			reloadTime = 0.097;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_SoundSet","Nia_ak47_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_Silenced_SoundSet","Nia_ak47_ShotTail_Silenced_SoundSet"};
			};
		};
		class Single: Single
		{
			reloadTime = 0.097;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_SoundSet","Nia_ak47_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_Silenced_SoundSet","Nia_ak47_ShotTail_Silenced_SoundSet"};
			};
		};
		class AI_Burst_close: FullAuto
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
		class AI_Burst_far: AI_Burst_close
		{
			burst = 4;
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
		class AI_Single_optics1: Single
		{
			showToPlayer = 0;
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
		class AI_Single_optics2: AI_Single_optics1
		{
			requiredOpticType = 2;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class Burst3: Single
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.1;
			burst = 3;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
			showToPlayer = 0;
		};
		class Burst2: Burst3
		{
			burst = 2;
			textureType = "dual";
		};
		class Library
		{
			libTextDesc = "Izhmash AK47 (Type 1)";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 69;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_ak47_45rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_ak47_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_ak47_75rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_ak47_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_ak47_75rnd";
			default = "hlc_rifle_ak47";
		};
	};
	class hlc_rifle_ak47_45rnd: hlc_rifle_ak47
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK47";
		model = "\hlc_wp_ak\mesh\ak47\ak47_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\47_rec_co.paa","hlc_wp_ak\tex\upper_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\bl_rpk\mag_co.paa"};
		inertia = "0.35+0.07";
		dexterity = 1.2926446;
		aimTransitionSpeed = 0.9048512;
	};
	class hlc_rifle_ak47_75rnd: hlc_rifle_ak47
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK47";
		model = "\hlc_wp_ak\mesh\ak47\ak47_75rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\47_rec_co.paa","hlc_wp_ak\tex\upper_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.35+0.145";
		dexterity = 1.1574228;
		aimTransitionSpeed = 0.8101959;
	};
	class hlc_rifle_akm: hlc_rifle_ak47
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		AB_barrelTwist = 7.87;
		AB_barrelLength = 16.3;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
		scope = 2;
		author = "MrRifleman, Bull5hit, Toadie";
		model = "\hlc_wp_ak\mesh\akm\akm.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_akm_x_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_akm\akm_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		displayName = "Izhmash AKM";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62;
		};
		inertia = 0.31;
		dexterity = 1.6092874;
		aimTransitionSpeed = 1.1265012;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_akm_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akm_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akm_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akm_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akm_75rnd";
			default = "hlc_rifle_akm";
		};
	};
	class hlc_rifle_akm_45rnd: hlc_rifle_akm
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM";
		model = "\hlc_wp_ak\mesh\akm\akm_45rnd.p3d";
		inertia = "0.31+0.07";
		dexterity = 1.3865825;
		aimTransitionSpeed = 0.97060776;
	};
	class hlc_rifle_akm_75rnd: hlc_rifle_akm
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM";
		model = "\hlc_wp_ak\mesh\akm\akm_75rnd.p3d";
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.31+0.145";
		dexterity = 1.2239947;
		aimTransitionSpeed = 0.8567963;
	};
	class hlc_rifle_akmgl: hlc_rifle_akm
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "MrRifleman, Bull5hit, Bohemia Interactive, Toadie";
		model = "\hlc_wp_ak\mesh\akmgl\akm.p3d";
		hiddenSelections[] = {"Main","Dovetail","Mount","GP25"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_akm\akm_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\bi_gp25\gp25_co.paa"};
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp.rtm"};
		displayName = "Izhmash AKM (GL)";
		descriptionShort = "Assault rifle,Grenade Launcher<br/>Caliber: 7.62mm";
		muzzles[] = {"this","hlc_GP25"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 92;
		};
		inertia = 0.66;
		dexterity = 1.2150402;
		aimTransitionSpeed = 0.8505281;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_akmgl_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akmgl_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akmgl_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akmgl_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akmgl_75rnd";
			default = "hlc_rifle_akmgl";
		};
	};
	class hlc_rifle_akmgl_45rnd: hlc_rifle_akmgl
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM (GL)";
		model = "\hlc_wp_ak\mesh\akmgl\akm_45rnd.p3d";
		inertia = "0.66+0.07";
		dexterity = 1.1074138;
		aimTransitionSpeed = 0.77518964;
	};
	class hlc_rifle_akmgl_75rnd: hlc_rifle_akmgl
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM (GL)";
		model = "\hlc_wp_ak\mesh\akmgl\akm_75rnd.p3d";
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.66+0.145";
		dexterity = 1.0197322;
		aimTransitionSpeed = 0.71381253;
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"\hlc_wp_ak\snd\rpk_bipodin","db-3",1,20};
		soundBipodUp[] = {"\hlc_wp_ak\snd\rpk_bipodout","db-3",1,20};
		author = "Booly, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		cursor = "mg";
		scope = 2;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 23.2;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 589.28;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak","hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		model = "\hlc_wp_ak\mesh\rpk\rpk_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk_x_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akm\akm_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		displayName = "Izhmash RPK";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		descriptionShort = "Light Support Weapon<br/>Caliber: 7.62mm";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\rpk_reload",0.9,1,30};
		modes[] = {"FullAuto","Single","50m","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class FullAuto: FullAuto
		{
			reloadtime = "(60/600)";
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_SoundSet","Nia_rpk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class Single: Single
		{
			reloadtime = "(60/600)";
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_SoundSet","Nia_rpk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class 50m: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class AI_long: 50m
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
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
		};
		class AI_close: AI_long
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
		class AI_short: AI_close
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
		class AI_medium: AI_close
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
		class AI_far: AI_close
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
		class AI_toofar: AI_far
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
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
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
		class AI_toofar_optic1: AI_far_optic1
		{
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
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 96;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
		};
		inertia = 0.48;
		dexterity = 1.1810873;
		aimTransitionSpeed = 0.82676107;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_rpk_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_rpk_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_rpk_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_rpk_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_rpk_75rnd";
			default = "hlc_rifle_rpk";
		};
	};
	class hlc_rifle_rpk_45rnd: hlc_rifle_rpk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK";
		model = "\hlc_wp_ak\mesh\rpk\rpk.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\bl_rpk\mag_co.paa"};
		inertia = "0.48+0.07";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_rpk_75rnd: hlc_rifle_rpk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		model = "\hlc_wp_ak\mesh\rpk\rpk_75rnd.p3d";
		displayName = "Izhmash RPK";
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		inertia = "0.48+0.145";
		dexterity = 0.99990404;
		aimTransitionSpeed = 0.6999328;
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"\hlc_wp_ak\snd\rpk_bipodin","db-3",1,20};
		soundBipodUp[] = {"\hlc_wp_ak\snd\rpk_bipodout","db-3",1,20};
		author = "Booly, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		aidispersioncoefx = 10;
		aidispersioncoefy = 12;
		AB_barrelTwist = 9.45;
		AB_barrelLength = 23.2;
		ACE_barrelTwist = 240.03;
		ACE_barrelLength = 589.28;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		displayName = "Izhmash RPK74";
		descriptionShort = "Light Support Weapon<br/>Caliber: 5.45mm";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk74\rpk74_reload",0.9,1,30};
		model = "\hlc_wp_ak\mesh\rpk\rpk74_30rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rpk74_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_aks\aks_co.paa"};
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		modes[] = {"FullAuto","Single","50m","AI_long","AI_close","AI_short","AI_medium","AI_far","AI_toofar","AI_far_optic1","AI_toofar_optic1","AI_far_optic2","AI_toofar_optic2"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.47;
		dexterity = 1.1977026;
		aimTransitionSpeed = 0.83839184;
		class FullAuto: FullAuto
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class Single: Single
		{
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak12_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_Shot_SoundSet","Nia_rpk74_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk74_silencerShot_SoundSet","Nia_rpk74_silencerTail_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.1;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class 50m: FullAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 20;
			maxRangeProbab = 0.1;
		};
		class AI_long: 50m
		{
			showToPlayer = 0;
			aiBurstTerminable = 1;
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
		};
		class AI_close: AI_long
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
		class AI_short: AI_close
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
		class AI_medium: AI_close
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
		class AI_far: AI_close
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
		class AI_toofar: AI_far
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
		class AI_far_optic1: AI_far
		{
			requiredOpticType = 1;
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
		class AI_toofar_optic1: AI_far_optic1
		{
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
		class AI_far_optic2: AI_far_optic1
		{
			requiredOpticType = 2;
		};
		class AI_toofar_optic2: AI_toofar_optic1
		{
			requiredOpticType = 2;
		};
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_rpk74n_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_60rnd";
			default = "hlc_rifle_rpk74n";
		};
	};
	class hlc_rifle_rpk74n_45rnd: hlc_rifle_rpk74n
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK74";
		model = "\hlc_wp_ak\mesh\rpk\rpk74.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\adept\wpn_ak_10_co.paa"};
		inertia = "0.47+0.081";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_rpk74n_60rnd: hlc_rifle_rpk74n
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash RPK74";
		model = "\hlc_wp_ak\mesh\rpk\rpk74_60rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bl_rpk\rpk_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akmags\texture_co.paa"};
		inertia = "0.47+0.1";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "MrRifleman, Tigg, Toadie";
		model = "\hlc_wp_ak\mesh\aks74gl\aks74gl.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		displayName = "Izhmash AKS74(GL)";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74gl_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_aks\aks_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\gp30\gp30_co.paa"};
		muzzles[] = {"this","hlc_GP30"};
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 84;
		};
		inertia = 0.42;
		dexterity = 1.2926446;
		aimTransitionSpeed = 0.9048512;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_GL_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_GL_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_GL_60rnd";
			default = "hlc_rifle_aks74_GL";
		};
	};
	class hlc_rifle_aks74_GL_45rnd: hlc_rifle_aks74_GL
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74(GL)";
		model = "\hlc_wp_ak\mesh\aks74gl\aks74GL_45rnd.p3d";
		muzzles[] = {"this","hlc_GP30"};
		inertia = "0.42+0.081";
		dexterity = 1.14985;
		aimTransitionSpeed = 0.804895;
	};
	class hlc_rifle_aks74_GL_60rnd: hlc_rifle_aks74_GL
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74(GL)";
		model = "\hlc_wp_ak\mesh\aks74gl\aks74GL_60rnd.p3d";
		inertia = "0.42+0.1";
		dexterity = 1.1087507;
		aimTransitionSpeed = 0.7761255;
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		dlc = "Niarms_AK";
		author = "Arby26, Millenia, Toadie";
		scope = 2;
		ACE_barrelTwist = 241.3;
		ACE_barrelLength = 431.8;
		deployedPivot = "deploypivot";
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971clean.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aek_ca";
		hiddenSelections[] = {"Main","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mill_aek\bull5hit\aek971_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		reloadMagazineSound[] = {"hlc_wp_ak\snd\soundshaders\aek\aek_reload",1,1,20};
		discreteDistance[] = {200,100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye1","eye","eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10"};
		cameraDir = "look";
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_aks74uhandgesture.rtm"};
		discretedistanceinitindex = 0;
		bg_bipod = 0;
		reloadAction = "HLC_GestureReloadAK545OneHand";
		modes[] = {"FullAuto","Burst","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.0681;
			dispersion = 0.0005563233;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_Shot_SoundSet","Nia_aek_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_silencerShot_SoundSet","Nia_aek_silencerTail_SoundSet"};
			};
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Burst: Mode_Burst
		{
			reloadTime = 0.0681;
			dispersion = 0.0005563233;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_Shot_SoundSet","Nia_aek_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_silencerShot_SoundSet","Nia_aek_silencerTail_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 40;
			maxRangeProbab = 0.1;
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.0681;
			dispersion = 0.0005563233;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak2_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_Shot_SoundSet","Nia_aek_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_aek_silencerShot_SoundSet","Nia_aek_silencerTail_SoundSet"};
			};
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
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
		class Library
		{
			libTextDesc = "ZID AEK971S";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
		};
		inertia = 0.33;
		dexterity = 1.5360194;
		aimTransitionSpeed = 1.0752136;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_60rnd";
			default = "hlc_rifle_aek971";
		};
	};
	class hlc_rifle_aek971_45rnd: hlc_rifle_aek971
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971clean_45rnd.p3d";
		inertia = "0.33+0.081";
		dexterity = 1.3144112;
		aimTransitionSpeed = 0.9200878;
	};
	class hlc_rifle_aek971_60rnd: hlc_rifle_aek971
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971clean_60rnd.p3d";
		inertia = "0.33+0.109";
		dexterity = 1.2540196;
		aimTransitionSpeed = 0.8778137;
	};
	class hlc_rifle_aek971worn: hlc_rifle_aek971
	{
		author = "Arby26, Millenia, Toadie";
		displayName = "ZID AEK971S(Worn)";
		model = "\hlc_wp_ak\mesh\aek971\aek971.p3d";
		hiddenSelections[] = {"Main","Mount"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mill_aek\aek971_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa"};
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971worn_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971worn_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971worn_60rnd";
			default = "hlc_rifle_aek971worn";
		};
	};
	class hlc_rifle_aek971worn_45rnd: hlc_rifle_aek971worn
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971_45rnd.p3d";
		inertia = "0.33+0.081";
		dexterity = 1.3144112;
		aimTransitionSpeed = 0.9200878;
	};
	class hlc_rifle_aek971worn_60rnd: hlc_rifle_aek971worn
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S";
		model = "\hlc_wp_ak\mesh\aek971\aek971_60rnd.p3d";
		inertia = "0.33+0.109";
		dexterity = 1.2540196;
		aimTransitionSpeed = 0.8778137;
	};
	class hlc_rifle_saiga12k: hlc_ak_base
	{
		dlc = "Niarms_AK";
		recoil = "recoil_m320";
		ACE_barrelTwist = 0.0;
		ACE_twistDirection = 0;
		ACE_barrelLength = 429.26;
		author = "Bohemia Interactive, Toadie";
		reloadAction = "HLC_GestureReloadRPK";
		scope = 2;
		magazines[] = {"hlc_10rnd_12g_buck_S12","hlc_10rnd_12g_slug_S12"};
		model = "\hlc_wp_ak\mesh\saiga\saiga12k.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_saiga_ca";
		hiddenSelections[] = {"Main"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\bi_s12k\saiga12k_co.paa"};
		displayName = "Izhmash Saiga12K";
		discretedistance[] = {100,200,300,400};
		discretedistanceinitindex = 0;
		descriptionShort = "Shotgun<br/>Caliber:12 Gauge";
		bg_bipod = 1;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\saiga\saiga_reload",0.9,1,30};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			dispersion = 0.001666789;
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				closure2[] = {"\hlc_wp_ak\snd\ak74_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_saiga_Shot_SoundSet","Nia_saiga_tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 140;
			maxRangeProbab = 0.02;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class MuzzleSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
		class nia_magSwitch
		{
			default = "hlc_rifle_saiga12k";
		};
	};
	class hlc_rifle_RK62: hlc_ak_base
	{
		deployedPivot = "deploypivot";
		scope = 2;
		dlc = "Niarms_AK";
		author = "Nix";
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak","hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		model = "hlc_wp_ak\mesh\rk62\rk62.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_rk62_ca";
		hiddenSelections[] = {"Main"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		displayName = "Valmet Rk.62";
		drysound[] = {"\hlc_wp_ak\snd\empty_assaultrifles",1.5,1,10};
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rk62\rk62_reload",1,1,20};
		reloadAction = "HLC_GestureReloadAK";
		recoil = "recoil_mx";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
		DescriptionShort = "Assault rifle<br/>Caliber: 7.62mm";
		discreteDistance[] = {150,100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye_150","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
		cameraDir = "eye_look";
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rk62_Shot_SoundSet","Nia_rk62_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.000378155;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_rk62_Shot_SoundSet","Nia_rk62_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_rpk_Shot_Silenced_SoundSet","Nia_rpk_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.00049451;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class fullauto_medium: FullAuto
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
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
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
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 4;
			minRange = 300;
			minRangeProbab = 0.8;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_RK62_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_RK62_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_RK62_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_RK62_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_RK62_75rnd";
			default = "hlc_rifle_RK62";
		};
	};
	class hlc_rifle_RK62_45rnd: hlc_rifle_RK62
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Valmet Rk.62";
		model = "hlc_wp_ak\mesh\rk62\rk62_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		inertia = "0.35+0.07";
		dexterity = 1.2926446;
		aimTransitionSpeed = 0.9048512;
	};
	class hlc_rifle_RK62_75rnd: hlc_rifle_RK62
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Valmet Rk.62";
		model = "hlc_wp_ak\mesh\rk62\rk62_75rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\nix_rk62\rk62_co.paa"};
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.35+0.145";
		dexterity = 1.1574228;
		aimTransitionSpeed = 0.8101959;
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		dlc = "Niarms_AK";
		AB_barrelTwist = 7.87;
		AB_barrelLength = 8.3;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 210.82;
		deployedPivot = "deploypivot";
		author = "Toadie";
		scope = 2;
		initspeed = -0.907539;
		magazines[] = {"hlc_30Rnd_762x39_b_ak","hlc_30Rnd_762x39_t_ak","hlc_45Rnd_762x39_m_rpk","HLC_45rnd_762x39_T_RPK","hlc_30rnd_762x39_s_ak","hlc_75Rnd_762x39_m_rpk","hlc_30Rnd_762x39_AP_ak","hlc_45Rnd_762x39_AP_rpk","hlc_75Rnd_762x39_AP_rpk","30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		displayName = "Arsenal Inc. SLR107U";
		DescriptionShort = "Room Broom<br/>Caliber: 7.62mm";
		model = "\hlc_wp_ak\mesh\slr107u\slr.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_slr107u_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\toadie_slr107u\akm_762_mag_co.paa"};
		bg_bipod = 0;
		recoil = "recoil_mx";
		discretedistance[] = {350,500};
		discretedistanceinitindex = 0;
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ak\anim\new_aks74uhandgesture.rtm"};
		modes[] = {"FullAuto","Single","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			reloadTime = 0.097;
			dispersion = 0.000972294;
			maxRange = 400;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_SLR107U_Shot_SoundSet","Nia_SLR107U_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_Silenced_SoundSet","Nia_ak47_ShotTail_Silenced_SoundSet"};
			};
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.097;
			dispersion = 0.000972294;
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"Nia_SLR107U_Shot_SoundSet","Nia_SLR107U_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"Nia_ak47_Shot_Silenced_SoundSet","Nia_ak47_ShotTail_Silenced_SoundSet"};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 56;
			class CowsSlot: asdg_OpticSideMount
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762R
			{
				iconPosition[] = {0.0,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.28;
		dexterity = 1.7388076;
		aimTransitionSpeed = 1.2171652;
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\slr107u\slr107U_reload_empty",0.8,1,20};
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_slr107u_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_slr107u_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_slr107u_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_75rnd";
			default = "hlc_rifle_slr107u";
		};
	};
	class hlc_rifle_slr107u_45rnd: hlc_rifle_slr107u
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Arsenal Inc. SLR107U";
		model = "\hlc_wp_ak\mesh\slr107u\slr_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\bl_rpk\mag_co.paa"};
		inertia = "0.28+0.07";
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
	};
	class hlc_rifle_slr107u_75rnd: hlc_rifle_slr107u
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Arsenal Inc. SLR107U";
		model = "\hlc_wp_ak\mesh\slr107u\slr_75rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.28+0.145";
		dexterity = 1.2618707;
		aimTransitionSpeed = 0.8833095;
	};
	class hlc_rifle_slr107u_MTK: hlc_rifle_slr107u
	{
		dlc = "Niarms_AK";
		author = "Toadie,RedRogueXIII";
		displayName = "Arsenal Inc. SLR107U(MTK)";
		model = "\hlc_wp_ak\mesh\slr107u\slr_MTK.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_slr107umtk_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 60;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.3;
		dexterity = 1.6495835;
		aimTransitionSpeed = 1.1547084;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_slr107u_MTK_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_slr107u_MTK_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_slr107u_MTK_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_MTK_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_slr107u_MTK_75rnd";
			default = "hlc_rifle_slr107u_MTK";
		};
	};
	class hlc_rifle_slr107u_MTK_45rnd: hlc_rifle_slr107u_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Arsenal Inc. SLR107U";
		model = "\hlc_wp_ak\mesh\slr107u\slr_MTK_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\bl_rpk\mag_co.paa"};
		inertia = "0.3+0.07";
		dexterity = 1.4132396;
		aimTransitionSpeed = 0.9892677;
	};
	class hlc_rifle_slr107u_MTK_75rnd: hlc_rifle_slr107u_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Arsenal Inc. SLR107U";
		model = "\hlc_wp_ak\mesh\slr107u\slr_MTK_75rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\toadie_slr107u\slr107u_map1_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\populik_Drum\ak_drum_mag_co.paa"};
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.3+0.145";
		dexterity = 1.2425073;
		aimTransitionSpeed = 0.86975515;
	};
	class hlc_rifle_ak74_MTK: hlc_rifle_ak74
	{
		dlc = "Niarms_AK";
		author = "MrRifleman, Toadie";
		displayName = "Izhmash AK74(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74mtk_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 64;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.32;
		dexterity = 1.5715089;
		aimTransitionSpeed = 1.1000562;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74_MTK_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74_MTK_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_MTK_60rnd";
			default = "hlc_rifle_ak74_MTK";
		};
	};
	class hlc_rifle_ak74_MTK_45rnd: hlc_rifle_ak74_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk_45rnd.p3d";
		inertia = "0.32+0.081";
		dexterity = 1.3372657;
		aimTransitionSpeed = 0.936086;
	};
	class hlc_rifle_ak74_MTK_60rnd: hlc_rifle_ak74_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74_mtk_60rnd.p3d";
		inertia = "0.32+0.109";
		dexterity = 1.2739222;
		aimTransitionSpeed = 0.8917455;
	};
	class hlc_rifle_ak74m: hlc_rifle_ak74
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "MrRifleman, Toadie";
		reloadAction = "HLC_GestureReloadAK545OneHand";
		scope = 2;
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74m_ca";
		hiddenSelections[] = {"Main","Dovetail","Mount","Foregrip","GP30"};
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\rifleman_ak74\body_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\tigg_ak74m\ak74m_co.paa","hlc_wp_ak\tex\gp30\gp30_co.paa"};
		displayName = "Izhmash AK74M";
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
		};
		inertia = 0.34;
		dexterity = 1.5026169;
		aimTransitionSpeed = 1.0518318;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_60rnd";
			default = "hlc_rifle_ak74m";
		};
	};
	class hlc_rifle_ak74m_45rnd: hlc_rifle_ak74m
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_45rnd.p3d";
		inertia = "0.34+0.081";
		dexterity = 1.2926446;
		aimTransitionSpeed = 0.9048512;
	};
	class hlc_rifle_ak74m_60rnd: hlc_rifle_ak74m
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_60rnd.p3d";
		inertia = "0.34+0.109";
		dexterity = 1.2350034;
		aimTransitionSpeed = 0.8645023;
	};
	class hlc_rifle_ak74m_gl: hlc_rifle_ak74m
	{
		dlc = "Niarms_AK";
		deployedPivot = "deploypivot";
		author = "MrRifleman, Tigg, Toadie";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_core\animation\gesture\handpose_gp25.rtm"};
		displayName = "Izhmash AK74M(GL)";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74mgl_ca";
		muzzles[] = {"this","hlc_GP30"};
		bg_bipod = 0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 84;
		};
		inertia = 0.47;
		dexterity = 1.1977026;
		aimTransitionSpeed = 0.83839184;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_gl_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_gl_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_gl_60rnd";
			default = "hlc_rifle_ak74m_gl";
		};
	};
	class hlc_rifle_ak74m_gl_45rnd: hlc_rifle_ak74m_gl
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M(GL)";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl_45rnd.p3d";
		inertia = "0.47+0.081";
		dexterity = 1.0816942;
		aimTransitionSpeed = 0.75718594;
	};
	class hlc_rifle_ak74m_gl_60rnd: hlc_rifle_ak74m_gl
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M(GL)";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74gl_60rnd.p3d";
		inertia = "0.47+0.109";
		dexterity = 1.0475565;
		aimTransitionSpeed = 0.73328954;
	};
	class hlc_rifle_ak74m_MTK: hlc_rifle_ak74m
	{
		dlc = "Niarms_AK";
		author = "MrRifleman,Tigg, Toadie";
		displayName = "Izhmash AK74M(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74mmtk_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 72;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.36;
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_ak74m_MTK_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_ak74m_MTK_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_MTK_60rnd";
			default = "hlc_rifle_ak74m_MTK";
		};
	};
	class hlc_rifle_ak74m_MTK_45rnd: hlc_rifle_ak74m_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk_45rnd.p3d";
		inertia = "0.36+0.081";
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
	};
	class hlc_rifle_ak74m_MTK_60rnd: hlc_rifle_ak74m_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AK74M(MTK)";
		model = "\hlc_wp_ak\mesh\tigg_ak74m\ak74_mtk_60rnd.p3d";
		inertia = "0.36+0.109";
		dexterity = 1.1994032;
		aimTransitionSpeed = 0.8395822;
	};
	class hlc_rifle_aek971_mtk: hlc_rifle_aek971
	{
		dlc = "Niarms_AK";
		author = "Arby26, Millenia, Toadie";
		displayName = "ZID AEK971S(MTK)";
		model = "\hlc_wp_ak\mesh\aek971\aek971_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aekmtk_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aek971_mtk_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aek971_mtk_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_mtk_60rnd";
			default = "hlc_rifle_aek971_mtk";
		};
	};
	class hlc_rifle_aek971_mtk_45rnd: hlc_rifle_aek971_mtk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S(MTK)";
		model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_45rnd.p3d";
		inertia = "0.35+0.081";
		dexterity = 1.2718903;
		aimTransitionSpeed = 0.89032316;
	};
	class hlc_rifle_aek971_mtk_60rnd: hlc_rifle_aek971_mtk
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "ZID AEK971S(MTK)";
		model = "\hlc_wp_ak\mesh\aek971\aek971_mtk_60rnd.p3d";
		inertia = "0.35+0.109";
		dexterity = 1.2168155;
		aimTransitionSpeed = 0.8517708;
	};
	class hlc_rifle_aks74u_MTK: hlc_rifle_aks74u
	{
		dlc = "Niarms_AK";
		author = "Millenia, Toadie";
		displayName = "Izhmash AKS74U(MTK)";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74umtk_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 56;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.28;
		dexterity = 1.7388076;
		aimTransitionSpeed = 1.2171652;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74u_MTK_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74u_MTK_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_MTK_60rnd";
			default = "hlc_rifle_aks74u_MTK";
		};
	};
	class hlc_rifle_aks74u_MTK_45rnd: hlc_rifle_aks74u_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74U(MTK)";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u_mtk_45rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\adept\wpn_ak_10_co.paa"};
		inertia = "0.28+0.08";
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
	};
	class hlc_rifle_aks74u_MTK_60rnd: hlc_rifle_aks74u_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74U(MTK)";
		model = "\hlc_wp_ak\mesh\millaks74u\aks74u_mtk_60rnd.p3d";
		hiddenSelectionsTextures[] = {"hlc_wp_ak\tex\mil_aks\aks-74u_co.paa","hlc_wp_ak\tex\rifleman_ak74\mount_co.paa","hlc_wp_ak\tex\rrxviii_mtk83\mtk-83_co.paa","hlc_wp_ak\tex\rifleman_akmags\texture_co.paa"};
		inertia = "0.28+0.109";
		dexterity = 1.3637626;
		aimTransitionSpeed = 0.95463383;
	};
	class hlc_rifle_akm_MTK: hlc_rifle_akm
	{
		dlc = "Niarms_AK";
		author = "MrRifleman, Bull5hit, Toadie";
		model = "\hlc_wp_ak\mesh\akm\akm_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_akmmtk_ca";
		displayName = "Izhmash AKM(MTK)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 66;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.33;
		dexterity = 1.5360194;
		aimTransitionSpeed = 1.0752136;
		class nia_magSwitch
		{
			HLC_45rnd_762x39_T_RPK = "hlc_rifle_akm_MTK_45rnd";
			hlc_45Rnd_762x39_m_rpk = "hlc_rifle_akm_MTK_45rnd";
			hlc_75Rnd_762x39_m_rpk = "hlc_rifle_akm_MTK_75rnd";
			hlc_45Rnd_762x39_AP_rpk = "hlc_rifle_akm_MTK_45rnd";
			hlc_75Rnd_762x39_AP_rpk = "hlc_rifle_akm_MTK_75rnd";
			default = "hlc_rifle_akm_MTK";
		};
	};
	class hlc_rifle_akm_MTK_45rnd: hlc_rifle_akm_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM(MTK)";
		model = "\hlc_wp_ak\mesh\akm\akm_mtk_45rnd.p3d";
		inertia = "0.33+0.07";
		dexterity = 1.3372657;
		aimTransitionSpeed = 0.936086;
	};
	class hlc_rifle_akm_MTK_75rnd: hlc_rifle_akm_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKM(MTK)";
		model = "\hlc_wp_ak\mesh\akm\akm_mtk_75rnd.p3d";
		reloadAction = "HLC_GestureReloadAK762Drum";
		reloadMagazineSound[] = {"\hlc_wp_ak\snd\soundshaders\rpk\RPK_drumreload",0.9,1,30};
		inertia = "0.31+0.145";
		dexterity = 1.2239947;
		aimTransitionSpeed = 0.8567963;
	};
	class hlc_rifle_aks74_MTK: hlc_rifle_aks74
	{
		dlc = "Niarms_AK";
		author = "MrRifleman, Toadie";
		model = "\hlc_wp_ak\mesh\aks74\aks74_mtk.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_aks74mtk_ca";
		displayName = "Izhmash AKS74(MTK)";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 62;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.2;
			};
		};
		inertia = 0.31;
		dexterity = 1.6092873;
		aimTransitionSpeed = 1.1265011;
		class nia_magSwitch
		{
			hlc_45Rnd_545x39_t_rpk = "hlc_rifle_aks74_MTK_45rnd";
			hlc_45Rnd_545x39_m_rpk = "hlc_rifle_aks74_MTK_45rnd";
			hlc_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_MTK_60rnd";
			default = "hlc_rifle_aks74_MTK";
		};
	};
	class hlc_rifle_aks74_MTK_45rnd: hlc_rifle_aks74_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74(MTK)";
		model = "\hlc_wp_ak\mesh\aks74\aks74_mtk_45rnd.p3d";
		inertia = "0.31+0.08";
		dexterity = 1.361292;
		aimTransitionSpeed = 0.9529044;
	};
	class hlc_rifle_aks74_MTK_60rnd: hlc_rifle_aks74_MTK
	{
		scopeArsenal = 0;
		dlc = "Niarms_AK";
		displayName = "Izhmash AKS74(MTK)";
		model = "\hlc_wp_ak\mesh\aks74\aks74_mtk_60rnd.p3d";
		inertia = "0.33+0.109";
		dexterity = 1.2540196;
		aimTransitionSpeed = 0.8778137;
	};
};
