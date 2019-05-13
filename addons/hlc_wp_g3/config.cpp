////////////////////////////////////////////////////////////////////
//DeRap: hlc_wp_g3\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Mon May 13 14:15:48 2019 : 'file' last modified on Fri Jan 12 08:18:43 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgSoundShaders
{
	class G3_Closure_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_first",1}};
		range = 15;
		volume = 0.87;
	};
	class G3_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class G3_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class G3_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class G3_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest",1}};
		volume = "1.6*((1-interior/1.4)*Forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class G3_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class g3_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior",1}};
		volume = "1.6*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class G3_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class G3_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3_silencerShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class G3_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3a3_suppressed_mid",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class G3_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class G3_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class G3_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_interior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class G3_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class G3_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class G3KA4_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3KA4_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class G3KA4_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class G3KA4_tailDistant_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_dist",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class G3KA4_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3KA4_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class G3KA4_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3KA4_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3KA4_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior",1}};
		volume = "1.6*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class G3KA4_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class G3KA4_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3KA4_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3KA4_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3KA4_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3SG1_Closure_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_first",1}};
		range = 15;
		volume = 0.87;
	};
	class G3SG1_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class G3SG1_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class G3SG1_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class G3SG1_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class G3SG1_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3SG1_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class G3SG1_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3SG1_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3SG1_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior",1}};
		volume = "1.6*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class G3SG1_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class G3SG1_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3SG1_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class G3SG1_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class G3SG1_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class HK51_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class HK51_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class HK51_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class HK51_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class HK51_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class HK51_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class HK51_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk51_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class HK51_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_interior",1}};
		volume = "1.6*((interior)*0.65)";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class HK51_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class HK51_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk51_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class HK51_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk51_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class HK51_silencerShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class HK51_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\HK51_mid_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class HK51_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class HK51_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class HK51_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_interior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class HK51_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class HK51_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class PSG1_closeShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_close",1}};
		volume = 0.8;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class PSG1_midShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class PSG1_distShot_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_dist",1}};
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {{0,0},{100,0},{300,1},{2500,1}};
	};
	class PSG1_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class PSG1_tailForest_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class PSG1_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class PSG1_tailHouses_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class psg1_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class PSG1_tailInterior_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_interior",1}};
		volume = "(interior)*0.65";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class PSG1_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class PSG1_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class PSG1_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class PSG1_tailTrees_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_tree",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class PSG1_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_WP_G3\snd\soundshaders\psg1\PSG1_tree_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk33_Closure_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\g3_first",1},{"hlc_wp_g3\snd\g3_first",1}};
		range = 15;
		volume = 0.87;
	};
	class hk33_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\hk33_close",1},{"hlc_wp_g3\snd\soundshaders\hk33\hk33_close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class hk33_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\hk33_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{100,1},{300,0},{2500,0}};
	};
	class hk33_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\hk33_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class hk33_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class hk33_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk33_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class hk33_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk33_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk33_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\hk33_interior",1}};
		volume = "(interior)*0.65";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class hk33_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\hk33_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class hk33_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk33_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk33_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk33_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_trees_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk33_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class hk33_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_mid_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class hk33_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class hk33_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class hk33_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_interior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class hk33_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class hk33_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class hk53_closeShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_close",1},{"hlc_wp_g3\snd\soundshaders\hk53\hk53_close",1}};
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class hk53_midShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_mid",1}};
		volume = 1.6252;
		range = 2500;
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{2000,0}};
	};
	class hk53_distShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_dist",1}};
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {{0,0},{50,0},{300,1},{2000,1}};
	};
	class hk53_tailDistant_SoundShader
	{
		samples[] = {{"\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant",1}};
		volume = 0.4;
		range = 2000;
		rangeCurve[] = {{0,0},{250,0.2},{600,0.7},{2000,1}};
		limitation = 1;
	};
	class hk53_tailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_forest",1}};
		volume = "1.6*((1-interior/1.4)*forest/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk53_tailForest_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_forest_mid",1}};
		volume = " 1.6*((1-interior/1.4)*Forest/3)";
		rangeCurve[] = {{0,0},{250,1},{1800,1}};
		range = 1800;
		limitation = 1;
	};
	class hk53_tailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_urban",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk53_tailHouses_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_urban_mid",1}};
		volume = "1.6*((1-interior/1.4)*houses/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk53_tailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_interior",1}};
		volume = "(interior)*0.65";
		range = 250;
		rangeCurve[] = {{0,0.7},{250,0}};
		limitation = 1;
	};
	class hk53_tailInterior_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_interior_mid",1}};
		volume = " 1.6*((interior)*0.65)";
		rangeCurve[] = {{0,0},{250,0.4},{320,0}};
		range = 500;
		limitation = 1;
	};
	class hk53_tailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_meadows",1}};
		volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk53_tailMeadows_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_meadows_mid",1}};
		volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk53_tailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_trees",1}};
		volume = "1.6*((1-interior/1.4)*trees/3)";
		range = 250;
		rangeCurve[] = {{0,1},{250,0}};
		limitation = 1;
	};
	class hk53_tailTrees_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_trees_mid",1}};
		volume = " 1.6*((1-interior/1.4)*trees/3)";
		rangeCurve[] = {{0,0},{250,1},{2000,1}};
		range = 2000;
		limitation = 1;
	};
	class hk53_silencerShot_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class hk53_silencerShot_mid_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk33_mid_suppressed",1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	class hk53_silencerTailForest_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class hk53_silencerTailHouses_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0}};
		limitation = 1;
	};
	class hk53_silencerTailInterior_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_interior",1}};
		volume = "interior";
		range = 150;
		rangeCurve[] = {{0,1},{50,0.3},{150,0}};
		limitation = 1;
	};
	class hk53_silencerTailMeadows_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\hk53_close_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
	class hk53_silencerTailTrees_SoundShader
	{
		samples[] = {{"hlc_wp_g3\snd\soundshaders\hk53\Hk53_close_suppressed_meadow",1}};
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {{0,1},{150,0.3}};
		limitation = 1;
	};
};
class CfgSoundSets
{
	class G3_Shot_SoundSet
	{
		soundShaders[] = {"G3_closeShot_SoundShader","G3_midShot_SoundShader","G3_distShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1.2;
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
	class G3_tail_SoundSet
	{
		soundShaders[] = {"G3_tailDistant_SoundShader","G3_tailForest_SoundShader","G3_tailHouses_SoundShader","G3_tailInterior_SoundShader","G3_tailMeadows_SoundShader","G3_tailTrees_SoundShader","G3_tailForest_mid_SoundShader","G3_tailHouses_mid_SoundShader","G3_tailInterior_mid_SoundShader","G3_tailMeadows_mid_SoundShader","G3_tailTrees_mid_SoundShader"};
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
	class G3_silencerShot_SoundSet
	{
		soundShaders[] = {"G3_silencerShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		frequencyRandomizer = 0.3;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class G3_silencerTail_SoundSet
	{
		soundShaders[] = {"G3_silencerTailTrees_SoundShader","G3_silencerTailForest_SoundShader","G3_silencerTailMeadows_SoundShader","G3_silencerTailHouses_SoundShader","G3_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
	};
	class G3KA4_Shot_SoundSet
	{
		soundShaders[] = {"G3KA4_closeShot_SoundShader","G3KA4_midShot_SoundShader","G3KA4_distShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1.3;
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
	class G3KA4_tail_SoundSet
	{
		soundShaders[] = {"G3KA4_tailDistant_SoundShader","G3KA4_tailForest_SoundShader","G3KA4_tailHouses_SoundShader","G3KA4_tailInterior_SoundShader","G3KA4_tailMeadows_SoundShader","G3KA4_tailTrees_SoundShader","G3KA4_tailForest_mid_SoundShader","G3KA4_tailHouses_mid_SoundShader","G3KA4_tailInterior_mid_SoundShader","G3KA4_tailMeadows_mid_SoundShader","G3KA4_tailTrees_mid_SoundShader"};
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
	class G3SG1_Shot_SoundSet
	{
		soundShaders[] = {"G3SG1_closeShot_SoundShader","G3SG1_midShot_SoundShader","G3SG1_distShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1.2;
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
	class G3SG1_tail_SoundSet
	{
		soundShaders[] = {"G3SG1_tailDistant_SoundShader","G3SG1_tailForest_SoundShader","G3SG1_tailHouses_SoundShader","G3SG1_tailInterior_SoundShader","G3SG1_tailMeadows_SoundShader","G3SG1_tailTrees_SoundShader","G3SG1_tailForest_mid_SoundShader","G3SG1_tailHouses_mid_SoundShader","G3SG1_tailInterior_mid_SoundShader","G3SG1_tailMeadows_mid_SoundShader","G3SG1_tailTrees_mid_SoundShader"};
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
	class HK51_Shot_SoundSet
	{
		soundShaders[] = {"HK51_closeShot_SoundShader","HK51_midShot_SoundShader","HK51_distShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1.4;
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
	class HK51_tail_SoundSet
	{
		soundShaders[] = {"HK51_tailDistant_SoundShader","HK51_tailForest_SoundShader","HK51_tailHouses_SoundShader","HK51_tailInterior_SoundShader","HK51_tailMeadows_SoundShader","HK51_tailTrees_SoundShader","HK51_tailForest_mid_SoundShader","HK51_tailHouses_mid_SoundShader","HK51_tailInterior_mid_SoundShader","HK51_tailMeadows_mid_SoundShader","HK51_tailTrees_mid_SoundShader"};
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
	class PSG1_Shot_SoundSet
	{
		soundShaders[] = {"PSG1_closeShot_SoundShader","PSG1_midShot_SoundShader","PSG1_distShot_SoundShader","G3_Closure_SoundShader"};
		volumeFactor = 1.2;
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
	class PSG1_tail_SoundSet
	{
		soundShaders[] = {"PSG1_tailDistant_SoundShader","PSG1_tailForest_SoundShader","PSG1_tailHouses_SoundShader","PSG1_tailInterior_SoundShader","PSG1_tailMeadows_SoundShader","PSG1_tailTrees_SoundShader","PSG1_tailForest_mid_SoundShader","PSG1_tailHouses_mid_SoundShader","PSG1_tailInterior_mid_SoundShader","PSG1_tailMeadows_mid_SoundShader","PSG1_tailTrees_mid_SoundShader"};
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
	class hk33_Shot_SoundSet
	{
		soundShaders[] = {"hk33_closeShot_SoundShader","hk33_midShot_SoundShader","hk33_distShot_SoundShader","hk33_Closure_SoundShader"};
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
	class hk33_Tail_SoundSet
	{
		soundShaders[] = {"hk33_tailDistant_SoundShader","hk33_tailForest_SoundShader","hk33_tailHouses_SoundShader","hk33_tailInterior_SoundShader","hk33_tailMeadows_SoundShader","hk33_tailTrees_SoundShader","hk33_tailForest_mid_SoundShader","hk33_tailHouses_mid_SoundShader","hk33_tailInterior_mid_SoundShader","hk33_tailMeadows_mid_SoundShader","hk33_tailTrees_mid_SoundShader"};
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
	class hk33_silencerShot_SoundSet
	{
		soundShaders[] = {"hk33_silencerShot_SoundShader","hk33_Closure_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
	};
	class hk33_silencerTail_SoundSet
	{
		soundShaders[] = {"hk33_silencerTailTrees_SoundShader","hk33_silencerTailForest_SoundShader","hk33_silencerTailMeadows_SoundShader","hk33_silencerTailHouses_SoundShader","hk33_silencerTailInterior_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.2;
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
	};
	class hk53_Shot_SoundSet
	{
		soundShaders[] = {"hk53_closeShot_SoundShader","hk53_midShot_SoundShader","hk53_distShot_SoundShader","hk33_Closure_SoundShader"};
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
	class hk53_Tail_SoundSet
	{
		soundShaders[] = {"hk53_tailDistant_SoundShader","hk53_tailForest_SoundShader","hk53_tailHouses_SoundShader","hk53_tailInterior_SoundShader","hk53_tailMeadows_SoundShader","hk53_tailTrees_SoundShader","hk53_tailForest_mid_SoundShader","hk53_tailHouses_mid_SoundShader","hk53_tailInterior_mid_SoundShader","hk53_tailMeadows_mid_SoundShader","hk53_tailTrees_mid_SoundShader"};
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
	class hlcweapons_g3
	{
		requiredaddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr","A3_Weapons_F","A3_Sounds_F_Mark","asdg_jointrails","hlcweapons_core"};
		units[] = {"HLC_G3_ammobox","Weapon_hlc_rifle_psg1","Weapon_hlc_rifle_g3sg1","Weapon_hlc_rifle_g3ka4","Weapon_hlc_rifle_hk51","Weapon_HLC_Rifle_g3ka4_GL","Weapon_hlc_rifle_hk53","Weapon_hlc_rifle_G3A3","Weapon_hlc_rifle_g3a3ris","Weapon_hlc_rifle_g3a3v","Weapon_hlc_rifle_g3a3vris","Weapon_hlc_rifle_hk53RAS","Weapon_hlc_rifle_hk33a2","Weapon_hlc_rifle_hk33a2RIS","Weapon_hlc_rifle_hk33a2RIS_GL","Weapon_hlc_rifle_g3sg1ris","Weapon_hlc_rifle_psg1a1","Weapon_hlc_rifle_PSG1A1_RIS"};
		weapons[] = {"hlc_rifle_psg1","hlc_rifle_g3sg1","HLC_Optic_ZFSG1","hlc_optic_accupoint_g3","hlc_rifle_g3ka4","hlc_rifle_hk51","HLC_Rifle_g3ka4_GL","hlc_rifle_hk53","hlc_optic_PVS4G3","hlc_optic_ZF95_g3","hlc_rifle_g3sg1_XMAG","hlc_rifle_g3sg1ris","hlc_rifle_g3sg1ris_XMAG","hlc_rifle_psg1_XMAG","hlc_rifle_psg1A1","hlc_rifle_psg1A1_XMAG","hlc_rifle_PSG1A1_RIS","hlc_rifle_PSG1A1_RIS_XMAG","hlc_rifle_g3a3","hlc_rifle_g3a3_XMAG","hlc_rifle_g3a3ris","hlc_rifle_g3a3ris_XMAG","hlc_rifle_g3a3v","hlc_rifle_g3a3v_XMAG","hlc_rifle_g3a3vris","hlc_rifle_g3a3vris_XMAG","hlc_rifle_g3ka4_XMAG","HLC_Rifle_g3ka4_GL_XMAG","hlc_rifle_hk51_XMAG","hlc_rifle_hk53RAS","hlc_rifle_hk33a2","hlc_rifle_hk33ka3","hlc_rifle_hk33a2RIS","hlc_rifle_hk33a2RIS_GL"};
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_t_G3","hlc_30rnd_556x45_EPR_HK33","hlc_30rnd_556x45_SOST_HK33","hlc_30rnd_556x45_b_HK33","hlc_30rnd_556x45_t_HK33","hlc_20rnd_762x51_Mk316_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_MDim_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_MDIM_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_S_G3","hlc_30rnd_556x45_SPR_HK33","hlc_30rnd_556x45_tdim_HK33","hlc_30rnd_556x45_mdim_HK33"};
		version = "2.12";
		author = "toadie";
	};
};
class cfgMods
{
	class Mod_Base;
	class Niarms_G3: Mod_Base
	{
		name = "NIArsenal: G3 Rifles";
		picture = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_g3\tex\ui\NIArms1_ca.paa";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HLC_GestureReloadPSG1 = "HLC_GestureReloadPSG1";
		HLC_GestureReloadHK53 = "HLC_GestureReloadHK53";
		HLC_GestureReloadHK33 = "HLC_GestureReloadHK33";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			HLC_GestureReloadPSG1[] = {"HLC_GestureReloadPSG1","Gesture"};
			HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53","Gesture"};
			HLC_GestureReloadHK33[] = {"HLC_GestureReloadHK33","Gesture"};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			HLC_GestureReloadPSG1[] = {"HLC_GestureReloadPSG1_Prone","Gesture"};
			HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53_Prone","Gesture"};
			HLC_GestureReloadHK33[] = {"HLC_GestureReloadHK33_Prone","Gesture"};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadPSG1[] = {"HLC_GestureReloadPSG1_Context","Gesture"};
			HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53_Context","Gesture"};
			HLC_GestureReloadHK33[] = {"HLC_GestureReloadHK33_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			HLC_GestureReloadPSG1[] = {"HLC_GestureReloadPSG1_Context","Gesture"};
			HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53_Context","Gesture"};
			HLC_GestureReloadHK33[] = {"HLC_GestureReloadHK33_Context","Gesture"};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				HLC_GestureReloadPSG1[] = {"HLC_GestureReloadPSG1","Gesture"};
				HLC_GestureReloadHK53[] = {"HLC_GestureReloadHK53","Gesture"};
				HLC_GestureReloadHK33[] = {"HLC_GestureReloadHK33","Gesture"};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class HLC_GestureReloadPSG1: Default
		{
			file = "hlc_wp_g3\gesture\newgesture\reload_psg1_stand.rtm";
			speed = -6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.1722222,1,0.18888889,0,0.22222222,0,0.23888889,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.86,0,0.9,1};
		};
		class HLC_GestureReloadPSG1_Prone: Default
		{
			file = "hlc_wp_g3\gesture\newgesture\reload_psg1_prone.rtm";
			speed = -6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,0.1722222,1,0.18888889,0,0.22222222,0,0.23888889,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.86,0,0.9,1};
		};
		class HLC_GestureReloadPSG1_Context: HLC_GestureReloadPSG1
		{
			mask = "handsWeapon_context";
		};
		class HLC_GestureReloadHK53: Default
		{
			file = "hlc_wp_g3\gesture\newgesture\hk53_reload_Standing.rtm";
			speed = -6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.25;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.86,0,0.9,1};
		};
		class HLC_GestureReloadHK53_Prone: Default
		{
			file = "hlc_core\animation\gesture\reload_hk53_prone.rtm";
			speed = -6;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.86,0,0.9,1};
		};
		class HLC_GestureReloadHK53_Context: HLC_GestureReloadHK53
		{
			mask = "handsWeapon_context";
		};
		class HLC_GestureReloadHK33: Default
		{
			file = "hlc_wp_g3\gesture\newgesture\hk33_reload_Standing.rtm";
			speed = -5.77;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.93,0,0.97,1};
		};
		class HLC_GestureReloadHK33_Prone: Default
		{
			file = "hlc_wp_g3\gesture\newgesture\hk33_reload_prone.rtm";
			speed = -5.77;
			looped = 0;
			mask = "handsWeapon";
			headBobStrength = 0.2;
			headBobMode = 2;
			rightHandIKCurve[] = {0,1,1,1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0,1,0.033,0,0.93,0,0.97,1};
		};
		class HLC_GestureReloadHK33_Context: HLC_GestureReloadHK33
		{
			mask = "handsWeapon_context";
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_snds_g3 = 1;
	};
};
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_snds_HK33 = 1;
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class Weapon_Base_F;
	class HLC_G3_ammobox: B_supplyCrate_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "HLC G3 Supply Box";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportMagazines
		{
			class _xx_hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 30;
			};
			class _xx_hlc_20rnd_762x51_mk316_G3
			{
				magazine = "hlc_20rnd_762x51_mk316_G3";
				count = 30;
			};
			class _xx_hlc_20rnd_762x51_barrier_G3
			{
				magazine = "hlc_20rnd_762x51_barrier_G3";
				count = 30;
			};
			class _xx_hlc_20rnd_762x51_T_G3
			{
				magazine = "hlc_20rnd_762x51_T_G3";
				count = 30;
			};
			class _xx_hlc_50rnd_762x51_M_G3
			{
				magazine = "hlc_50rnd_762x51_M_G3";
				count = 30;
			};
			class _xx_hlc_20rnd_762x51_S_G3
			{
				magazine = "hlc_20rnd_762x51_S_G3";
				count = 30;
			};
			class _xx_hlc_30rnd_556x45_EPR_HK33
			{
				magazine = "hlc_30rnd_556x45_EPR_HK33";
				count = 30;
			};
			class _xx_hlc_30rnd_556x45_SOST_HK33
			{
				magazine = "hlc_30rnd_556x45_SOST_HK33";
				count = 30;
			};
			class _xx_hlc_30rnd_556x45_b_HK33
			{
				magazine = "hlc_30rnd_556x45_b_HK33";
				count = 30;
			};
			class _xx_hlc_30rnd_556x45_t_HK33
			{
				magazine = "hlc_30rnd_556x45_t_HK33";
				count = 30;
			};
		};
		class TransportWeapons
		{
			class _xx_hlc_rifle_g3a3
			{
				weapon = "hlc_rifle_g3a3";
				count = 7;
			};
			class _xx_hlc_rifle_g3a3ris
			{
				weapon = "hlc_rifle_g3a3ris";
				count = 7;
			};
			class _xx_hlc_rifle_g3a3v
			{
				weapon = "hlc_rifle_g3a3v";
				count = 7;
			};
			class _xx_hlc_rifle_g3a3vris
			{
				weapon = "hlc_rifle_g3a3vris";
				count = 7;
			};
			class _xx_hlc_rifle_g3sg1
			{
				weapon = "hlc_rifle_g3sg1";
				count = 6;
			};
			class _xx_hlc_rifle_g3sg1ris
			{
				weapon = "hlc_rifle_g3sg1ris";
				count = 6;
			};
			class _xx_hlc_rifle_psg1
			{
				weapon = "hlc_rifle_psg1";
				count = 3;
			};
			class _xx_hlc_rifle_psg1a1
			{
				weapon = "hlc_rifle_psg1a1";
				count = 3;
			};
			class _xx_hlc_rifle_PSG1A1_RIS
			{
				weapon = "hlc_rifle_PSG1A1_RIS";
				count = 3;
			};
			class _xx_hlc_rifle_g3ka4
			{
				weapon = "hlc_rifle_g3ka4";
				count = 12;
			};
			class _xx_HLC_Rifle_g3ka4_GL
			{
				weapon = "HLC_Rifle_g3ka4_GL";
				count = 12;
			};
			class _xx_hlc_rifle_hk51
			{
				weapon = "hlc_rifle_hk51";
				count = 12;
			};
			class _xx_hlc_rifle_hk53
			{
				weapon = "hlc_rifle_hk53";
				count = 7;
			};
			class _xx_hlc_rifle_hk53RAS
			{
				weapon = "hlc_rifle_hk53RAS";
				count = 7;
			};
			class _xx_hlc_rifle_hk33a2
			{
				weapon = "hlc_rifle_hk33a2";
				count = 5;
			};
			class _xx_hlc_rifle_hk33a2RIS
			{
				weapon = "hlc_rifle_hk33a2RIS";
				count = 5;
			};
			class _xx_hlc_rifle_hk33a2RIS_GL
			{
				weapon = "hlc_rifle_hk33a2RIS_GL";
				count = 5;
			};
		};
		class TransportItems
		{
			class _xx_HLC_Optic_ZFSG1
			{
				name = "HLC_Optic_ZFSG1";
				count = 10;
			};
			class _xx_hlc_optic_accupoint_g3
			{
				name = "hlc_optic_accupoint_g3";
				count = 10;
			};
			class _xx_hlc_optic_PVS4G3
			{
				name = "hlc_optic_PVS4G3";
				count = 10;
			};
			class _xx_hlc_optic_STANAGZF2D_G3
			{
				name = "hlc_optic_STANAGZF2D_G3";
				count = 10;
			};
			class _xx_hlc_optic_STANAGZF_G3
			{
				name = "hlc_optic_STANAGZF_G3";
				count = 10;
			};
			class _xx_hlc_optic_ZF95_g3
			{
				name = "hlc_optic_ZF95_g3";
				count = 10;
			};
			class _xx_hlc_optic_LeupoldM3A_G3
			{
				name = "hlc_optic_LeupoldM3A_G3";
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
	class Weapon_hlc_rifle_g3a3: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3A3";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3a3
			{
				weapon = "hlc_rifle_g3a3";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3a3ris: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3A3(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3a3ris
			{
				weapon = "hlc_rifle_g3a3ris";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3a3v: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3A3(Widegrip)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3a3v
			{
				weapon = "hlc_rifle_g3a3v";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3a3vris: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3A3(Widegrip / RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3a3vris
			{
				weapon = "hlc_rifle_g3a3vris";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3ka4: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3KA4 RAS";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3ka4
			{
				weapon = "hlc_rifle_g3ka4";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_HLC_Rifle_g3ka4_GL: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK G3KA4 RAS(GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class HLC_Rifle_g3ka4_GL
			{
				weapon = "HLC_Rifle_g3ka4_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk51: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "FR Ordnance MC51";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk51
			{
				weapon = "hlc_rifle_hk51";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_b_G3
			{
				magazine = "hlc_20rnd_762x51_b_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk53: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK HK53";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk53
			{
				weapon = "hlc_rifle_hk53";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_b_hk33
			{
				magazine = "hlc_30rnd_556x45_b_hk33";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk53RAS: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK HK53(RAS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk53RAS
			{
				weapon = "hlc_rifle_hk53RAS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_b_hk33
			{
				magazine = "hlc_30rnd_556x45_b_hk33";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk33a2: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK HK33A2";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk33a2
			{
				weapon = "hlc_rifle_hk33a2";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_b_hk33
			{
				magazine = "hlc_30rnd_556x45_b_hk33";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk33a2RIS: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK HK33A2(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk33a2RIS
			{
				weapon = "hlc_rifle_hk33a2RIS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_b_hk33
			{
				magazine = "hlc_30rnd_556x45_b_hk33";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_hk33a2RIS_GL: Weapon_Base_F
	{
		dlc = "Niarms_g3";
		scope = 2;
		scopeCurator = 2;
		displayName = "HK HK33A2(RIS / GL)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_hk33a2RIS_GL
			{
				weapon = "hlc_rifle_hk33a2RIS_GL";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_30rnd_556x45_b_hk33
			{
				magazine = "hlc_30rnd_556x45_b_hk33";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3sg1: Weapon_Base_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		scopeCurator = 2;
		displayName = "G3SG1";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3sg1
			{
				weapon = "hlc_rifle_g3sg1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_Mk316_G3
			{
				magazine = "hlc_20rnd_762x51_Mk316_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_g3sg1ris: Weapon_Base_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		scopeCurator = 2;
		displayName = "G3SG1(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_g3sg1ris
			{
				weapon = "hlc_rifle_g3sg1ris";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_Mk316_G3
			{
				magazine = "hlc_20rnd_762x51_Mk316_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_psg1: Weapon_Base_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		scopeCurator = 2;
		displayName = "PSG1";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_psg1
			{
				weapon = "hlc_rifle_psg1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_Mk316_G3
			{
				magazine = "hlc_20rnd_762x51_Mk316_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_psg1a1: Weapon_Base_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		scopeCurator = 2;
		displayName = "PSG1A1";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_psg1a1
			{
				weapon = "hlc_rifle_psg1a1";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_Mk316_G3
			{
				magazine = "hlc_20rnd_762x51_Mk316_G3";
				count = 1;
			};
		};
	};
	class Weapon_hlc_rifle_PSG1A1_RIS: Weapon_Base_F
	{
		dlc = "Niarms_G3";
		scope = 2;
		scopeCurator = 2;
		displayName = "PSG1A1(RIS)";
		author = "Toadie";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_SniperRifles";
		vehicleClass = "WeaponsPrimary";
		class TransportWeapons
		{
			class hlc_rifle_PSG1A1_RIS
			{
				weapon = "hlc_rifle_PSG1A1_RIS";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class hlc_20rnd_762x51_Mk316_G3
			{
				magazine = "hlc_20rnd_762x51_Mk316_G3";
				count = 1;
			};
		};
	};
};
class CfgMagazines
{
	class 30Rnd_556x45_Stanag;
	class hlc_20rnd_762x51_b_G3: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_ball";
		count = 20;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname = "7.62mm EPR 20Rnd G3 Magazine";
		initspeed = 873;
		model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
		mass = 16.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		scope = 2;
		tracersevery = 0;
		displaynameshort = "M80A1 EPR";
	};
	class hlc_20rnd_762x51_Mk316_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_MK316_20in";
		descriptionshort = "Caliber: 7.62x51mm NATO MK316 Mod 0 SBLR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
		displayname = "7.62mm SBLR 20Rnd G3 Magazine";
		initspeed = 731.52;
		mass = 18.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		tracersevery = 0;
		displaynameshort = "MK316 SBLR";
	};
	class hlc_20rnd_762x51_barrier_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_Barrier";
		descriptionshort = "Caliber: 7.62x51mm NATO Mk319 Mod0 SOST <br />Type: Reverse Drawn Open-Tip Match<br />Rounds: 20";
		displayname = "7.62mm SOST 20Rnd G3 Magazine";
		initspeed = 873;
		mass = 17.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
		tracersevery = 0;
		displaynameshort = "MK319 OTM";
	};
	class hlc_20rnd_762x51_T_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "B_762x51_Tracer_Green";
		descriptionshort = "Caliber: 7.62x51mm NATO M62A1 Tracer <br />Type: Incendiary Tracer <br />Rounds: 20";
		displayname = "7.62mm Tracer 20Rnd G3 Magazine";
		initspeed = 873;
		mass = 16.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 1;
		displaynameshort = "M62A1 Tracer";
	};
	class hlc_20rnd_762x51_MDim_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_B_762x51_Tracer_Dim";
		descriptionshort = "Caliber: 7.62x51mm NATO XM276<br />Type: IR Incendiary Tracer<br />Rounds: 20";
		displayname = "7.62mm EPR 20Rnd G3 Magazine (IR-DIM every 4)";
		initspeed = 873;
		mass = 16.9;
		lastroundstracer = 2;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 4;
		displaynameshort = "EPR/IR-DIM";
	};
	class hlc_50rnd_762x51_M_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd G3 Magazine (Tracers every 4)";
		model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
		initspeed = 873;
		mass = 49.47;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
		tracersevery = 5;
		displaynameshort = "EPR/Tracer";
	};
	class hlc_50rnd_762x51_MDIM_G3: hlc_20rnd_762x51_b_G3
	{
		dlc = "Niarms_G3";
		ammo = "HLC_B_762x51_Tracer_Dim";
		author = "Toadie, Spartan0536";
		count = 50;
		descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
		displayname = "7.62mm EPR 50Rnd G3 Magazine (IR-DIM every 4)";
		model = "hlc_wp_g3\mesh\magazine\magazine.p3d";
		initspeed = 873;
		mass = 49.47;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
		scope = 2;
		tracersevery = 5;
		displaynameshort = "EPR/IR-DIM";
	};
	class hlc_20rnd_762x51_IRDim_G3: hlc_20rnd_762x51_MDim_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		descriptionshort = "Caliber: 7.62x51mm NATO M276<br />Type: IR Incendiary Tracer<br />Rounds: 20";
		displayname = "7.62mm IRDIM 20Rnd G3 Magazine";
		initspeed = 873;
		mass = 16.9;
		picture = "\hlc_core\tex\ui\ammo\m_faltracer_ca.paa";
		tracersevery = 1;
		displaynameshort = "IR-DIM";
	};
	class hlc_20rnd_762x51_S_G3: hlc_20rnd_762x51_T_G3
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_762x51_BTSub";
		descriptionshort = "Caliber: 7.62x51mm NATO Lapua FMJ-BT Subsonic<br />Type: Full Metal Jacket with Boat Tail<br />Rounds: 20";
		displayname = "7.62mm Subsonic 20Rnd G3 Magazine";
		initspeed = 325;
		mass = 15.9;
		lastroundstracer = 1;
		picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
		tracersevery = 5;
		displaynameshort = "FMJ Subsonic";
	};
	class hlc_30rnd_556x45_b_HK33: 30Rnd_556x45_Stanag
	{
		dlc = "Niarms_G3";
		author = "Toadie";
		count = 30;
		descriptionshort = "Caliber: 5.56x45mm NATO FMJ<br />Type: Full-Metal Jacket<br />Rounds: 30";
		displayname = "5.56mm FMJ 30Rnd HK33 Magazine";
		model = "hlc_wp_g3\mesh\magazine\magazine_hk33.p3d";
		initspeed = 954.8;
		mass = 12.5;
		lastroundstracer = 3;
		scope = 2;
		tracersevery = 0;
		displaynameshort = "FMJ";
	};
	class hlc_30rnd_556x45_t_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_556NATO_EPR_Tracer";
		descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
		displayname = "5.56mm Tracer 30Rnd HK33 Magazine";
		initspeed = 954.8;
		mass = 13.5;
		lastroundstracer = 1;
		tracersevery = 1;
		displaynameshort = "M856A1 Tracer";
	};
	class hlc_30rnd_556x45_EPR_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_556NATO_EPR";
		descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
		displayname = "5.56mm EPR 30Rnd HK33 Magazine";
		initspeed = 954.8;
		mass = 13.5;
		lastroundstracer = 1;
		tracersevery = 0;
		displaynameshort = "M855A1 EPR";
	};
	class hlc_30rnd_556x45_SOST_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_556NATO_SOST";
		descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
		displayname = "5.56mm SOST 30Rnd HK33 Magazine";
		initspeed = 934.4;
		mass = 14.5;
		lastroundstracer = 1;
		tracersevery = 0;
		displaynameshort = "MK318 SOST";
	};
	class hlc_30rnd_556x45_SPR_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_556NATO_SPR";
		descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
		displayname = "5.56mm SBLR 30Rnd HK33 Magazine";
		initspeed = 848.7;
		mass = 15.5;
		lastroundstracer = 1;
		tracersevery = 0;
		displaynameshort = "MK262 Mod 1";
	};
	class hlc_30rnd_556x45_tdim_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
		displayname = "5.56mm IR-DIM 30Rnd HK33 Magazine";
		initspeed = 954.8;
		mass = 13.5;
		lastroundstracer = 1;
		tracersevery = 1;
		displaynameshort = "IR-DIM";
	};
	class hlc_30rnd_556x45_mdim_HK33: hlc_30rnd_556x45_b_HK33
	{
		dlc = "Niarms_G3";
		author = "Toadie, Spartan0536";
		ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
		displayname = "5.56mm EPR 30Rnd HK33 Magazine (IR-DIM every 4)";
		initspeed = 954.8;
		mass = 13.5;
		lastroundstracer = 1;
		tracersevery = 4;
		displaynameshort = "EPR/IR-DIM";
	};
};
class CfgWeapons
{
	class muzzle_snds_H;
	class hlc_muzzle_snds_g3: muzzle_snds_H
	{
		scope = 1;
		author = "Pete, Acid_Snake, Toadie";
		displayName = "G3 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "hlc_wp_g3\mesh\SUP_308HK\hk308";
	};
	class hlc_muzzle_snds_HK33: hlc_muzzle_snds_g3
	{
		scope = 1;
		author = "Pete, Acid_Snake, Toadie";
		displayName = "HK33 Suppressor";
		picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
		model = "hlc_wp_g3\mesh\SUP_556HK\hk308";
	};
	class InventoryOpticsItem_Base_F;
	class optic_dms;
	class HLC_Optic_ZFSG1: optic_dms
	{
		dlc = "Niarms_G3";
		author = "PAC, Millenia, Toadie";
		descriptionshort = "Zeiss Divari-DA Magnified Optic Sight<br />Magnification: 1.5-6x";
		displayname = "Zeiss Diavari-DA";
		model = "\hlc_wp_G3\mesh\sg1_scope\scope.p3d";
		picture = "\hlc_wp_G3\tex\ui\gear_diavari_x_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 20.9;
			modelOptics = "\hlc_wp_G3\mesh\sg1_scope\zfsg1_reticle";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = "0.249/6";
					opticsZoomMax = "0.249/1.5";
					opticsZoomInit = "0.249/1.5";
					discreteDistance[] = {100,200,300,400,500,600};
					discretefov[] = {"0.249/1.5","0.249/6"};
					modelOptics[] = {"hlc_core\mesh\accessories\sights\reticles\DiavariDA_1,5x","hlc_core\mesh\accessories\sights\reticles\DiavariDA_6x"};
					discreteDistanceInitIndex = 2;
					discreteInitIndex = 0;
					distanceZoomMin = 300;
					distanceZoomMax = 600;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					memorypointcamera = "eye2";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					usemodeloptics = 0;
					visionmode[] = {};
					opticsPPEffects[] = {"",""};
				};
			};
		};
		inertia = 0.09;
	};
	class hlc_optic_accupoint_g3: HLC_Optic_ZFSG1
	{
		dlc = "Niarms_G3";
		author = "Krycek, Tenoyl, Blur, Toadie";
		descriptionshort = "Trijicon Acupoint TR20 Magnified Optic Sight<br />Magnification: 3-9x";
		displayname = "Accupoint TR20";
		model = "\hlc_wp_G3\mesh\accupoint\scope.p3d";
		picture = "\hlc_wp_G3\tex\ui\gear_accupoint_x_ca";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 17.92;
			modelOptics = "\hlc_wp_G3\mesh\accupoint\accupoint_reticle";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsZoomMin = 0.0277;
					opticszoomMax = 0.0833;
					opticsZoomInit = 0.0833;
					discreteDistance[] = {200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 1200;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Iron
				{
					distancezoommax = 100;
					distancezoommin = 100;
					discretedistance[] = {100};
					discretedistanceinitindex = 0;
					memorypointcamera = "eye2";
					opticsdisableperipherialvision = 0;
					opticsdisplayname = "";
					opticsflare = 0;
					opticsid = 2;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					usemodeloptics = 0;
					visionmode[] = {};
					opticsPPEffects[] = {"",""};
				};
			};
		};
		inertia = 0.04;
	};
	class optic_arco;
	class hlc_optic_PVS4base: optic_arco
	{
		class ItemInfo;
	};
	class hlc_optic_PVS4G3: hlc_optic_PVS4base
	{
		dlc = "Niarms_G3";
		author = "Bohemia Interactive, Toadie";
		descriptionshort = "Night Vision Optic<br />Magnification: 4x";
		displayname = "AN/PVS4(G3-Mount)";
		picture = "\hlc_wp_g3\tex\ui\gear_PVS4_x_ca";
		model = "\hlc_wp_g3\mesh\PVS4\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 49.6;
			modelOptics = "\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic";
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
					modelOptics[] = {"\hlc_wp_g3\mesh\PVS4\NV_anpvs4_optic"};
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
				};
				class Snip2: Snip
				{
					modelOptics[] = {"\hlc_wp_g3\mesh\PVS4\pvs4-daysight"};
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
		inertia = 0.22;
	};
	class hlc_optic_ZF4xBase: optic_arco
	{
		class ItemInfo;
	};
	class hlc_optic_STANAGZF2D_G3: hlc_optic_ZF4xBase
	{
		author = "Krycek,Toadie";
		dlc = "Niarms_G3";
		displayname = "Hensoldt ZF(2D)";
		descriptionshort = "Hensoldt-Wetzlar ZF 4x NATO Magnified Optic<br />Magnification: 4x";
		model = "\hlc_wp_G3\mesh\ZFmod1\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 15.4;
			opticType = 2;
			optics = 1;
			modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
			class OpticsModes
			{
				class Snip
				{
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 600;
					modelOptics[] = {"\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics"};
					memoryPointCamera = "eye";
					cameradir = "";
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/4";
					opticsZoomInit = "0.25/4";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
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
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
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
		inertia = 0.1;
		tmr_optics_enhanced = 0;
	};
	class hlc_optic_STANAGZF_G3: hlc_optic_STANAGZF2D_G3
	{
		author = "Krycek,Toadie";
		displayname = "Hensoldt ZF";
		descriptionshort = "Hensoldt-Wetzlar ZF 4x NATO Magnified Optic<br />Magnification: 4x";
		model = "\hlc_wp_G3\mesh\ZFmod1\scope.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 15.4;
			opticType = 2;
			optics = 1;
			modelOptics = "\hlc_core\mesh\accessories\sights\reticles\ZFtype1_optics";
			class OpticsModes
			{
				class Snip
				{
					cameradir = "";
					usemodeloptics = 0;
					opticsZoomMin = 0.06225;
					opticsZoomMax = 0.06225;
					opticsZoomInit = 0.06225;
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					discreteDistance[] = {100,200,300,400,500,600};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 100;
					distanceZoomMax = 600;
					memoryPointCamera = "eye2";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsid = 1;
					opticsDisablePeripherialVision = 1;
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
					opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
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
	class optic_lrps;
	class hlc_optic_LeupoldM3A: optic_lrps
	{
		class ItemInfo;
	};
	class hlc_optic_ZF95Base: optic_lrps
	{
		class ItemInfo;
	};
	class hlc_optic_ZF95_g3: hlc_optic_ZF95Base
	{
		scope = 2;
		dlc = "Niarms_G3";
		author = "Toadie,Krycek";
		model = "\hlc_wp_G3\mesh\ZF95\scope.p3d";
		displayname = "Kahles ZF95 (G3)";
	};
	class hlc_optic_LeupoldM3A_G3: hlc_optic_LeupoldM3A
	{
		dlc = "Niarms_G3";
		author = "Toadie,Krycek";
		model = "\hlc_wp_G3\mesh\M3A\scope.p3d";
		displayname = "Leupold M3A (G3)";
	};
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class hlc_g3_base: Rifle_Base_F
	{
		changeFiremodeSound[] = {"\hlc_wp_g3\snd\SWITCH6",1,1,8};
		dlc = "Niarms_G3";
		recoil = "recoil_dmr_03";
		magazineReloadSwitchPhase = 0.5;
		deployedpivot = "deploypivot";
		hasBipod = 0;
		scope = 1;
		magazines[] = {"hlc_20rnd_762x51_b_G3","hlc_20rnd_762x51_mk316_G3","hlc_20rnd_762x51_barrier_G3","hlc_20rnd_762x51_T_G3","hlc_20rnd_762x51_IRDim_G3","hlc_20rnd_762x51_MDIM_G3","hlc_50rnd_762x51_M_G3","hlc_50rnd_762x51_MDIM_G3","hlc_20rnd_762x51_S_G3"};
		class Library
		{
			libTextDesc = "G3Base";
		};
		reloadAction = "HLC_GestureReloadAK";
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
		class hlc_M203_G3k: UGL_F
		{
			cameradir = "GL_Look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"GL_eye_50m","GL_eye_100m","GL_eye_150m","GL_eye_200m","GL_eye_250m","GL_eye_300m","GL_eye_350m","GL_eye_400m"};
			discreteDistanceInitIndex = 1;
			displayname = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			optics = 1;
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadmagazinesound[] = {"A3\sounds_f\Weapons\grenades\ugl_reload",1,1,20};
			reloadtime = 0.1;
			reloadAction = "GestureReloadTrgUGL";
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
				class compatibleItems
				{
					HLC_Optic_ZFSG1 = 1;
					hlc_optic_accupoint_g3 = 1;
					hlc_optic_PVS4G3 = 1;
					hlc_optic_STANAGZF2D_G3 = 1;
					hlc_optic_STANAGZF_G3 = 1;
					hlc_optic_ZF95_g3 = 1;
					hlc_optic_LeupoldM3A_G3 = 1;
				};
			};
			class PointerSlot
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0.0;
			};
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
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
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g3sg1_Shot_SoundSet","g3sg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g3_silencerShot_SoundSet","g3_silencerTail_SoundSet"};
			};
			reloadTime = 0.097;
			dispersion = 0.000334521;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"g3sg1_Shot_SoundSet","g3sg1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"g3_silencerShot_SoundSet","g3_silencerTail_SoundSet"};
			};
			reloadTime = 0.097;
			dispersion = 0.000334521;
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
		class single_medium: Single
		{
			showtoplayer = 0;
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
		drysound[] = {"\hlc_core\sound\empty_sniperrifles",1,1,10};
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
	};
	class hlc_rifle_g3sg1: hlc_g3_base
	{
		deployedpivot = "deploypivot";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db-3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db-3",1,20};
		author = "Krycek, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 17.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 449.58;
		agm_bipod = 1;
		cse_bipod = 1;
		bg_bipod = 1;
		scope = 2;
		displayName = "HK G3/SG1";
		reloadAction = "HLC_GestureReloadG3SG1";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
		descriptionShort = "Designated Marsman Rifle<br/>Caliber: 7.62x51mm NATO";
		model = "\hlc_wp_g3\mesh\g3sg1\g3sg1.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_g3sg1_x_ca";
		hiddenSelections[] = {"Main","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		discretedistance[] = {100,200,300,400};
		discretedistanceinitindex = 2;
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4"};
		cameradir = "aim_point";
		reloadmagazinesound[] = {"\hlc_wp_g3\snd\g3sg1_reload",1.0,1,25};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "SniperCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class Library
		{
			libTextDesc = "H&K G3-SG1";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 96;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
		inertia = 0.44;
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3sg1_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3sg1_XMAG";
			default = "hlc_rifle_g3sg1";
		};
	};
	class hlc_rifle_g3sg1_XMAG: hlc_rifle_g3sg1
	{
		scopeArsenal = 0;
		author = "Krycek, Toadie";
		model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_xmag.p3d";
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_g3sg1ris: hlc_rifle_g3sg1
	{
		displayName = "HK G3/SG1(RIS)";
		author = "Krycek, Toadie";
		model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed.p3d";
		hiddenSelections[] = {"Main","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3sg1\g3sg1_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3sg1ris_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3sg1ris_XMAG";
			default = "hlc_rifle_g3sg1ris";
		};
	};
	class hlc_rifle_g3sg1ris_XMAG: hlc_rifle_g3sg1ris
	{
		scopeArsenal = 0;
		author = "Krycek, Toadie";
		model = "\hlc_wp_g3\mesh\g3sg1\g3sg1_railed_xmag.p3d";
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_psg1: hlc_g3_base
	{
		deployedpivot = "deploypivot";
		scope = 2;
		hasBipod = 0;
		maxZeroing = 1600;
		author = "Krycek,noodum, Toadie";
		AB_barrelTwist = 12;
		AB_barrelLength = 25.6;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 650.24;
		model = "\hlc_wp_g3\mesh\psg1\psg1.p3d";
		displayName = "HK PSG1";
		reloadAction = "HLC_GestureReloadPSG1";
		descriptionShort = "Precision Rifle<br/>Caliber: 7.62x51mm NATO";
		modeloptics[] = {"\hlc_wp_G3\mesh\psg1\psg1_reticle","\hlc_wp_G3\mesh\psg1\PSG1_reticle_illum"};
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
		picture = "\hlc_wp_g3\tex\ui\gear_psg1_x_ca";
		reloadmagazinesound[] = {"\hlc_wp_g3\snd\psg1_reload",1.0,1,25};
		UiPicture = "\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		hiddenSelections[] = {"Main","Scope"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_noodum_psg1\psg1_co.paa","hlc_wp_g3\tex\krycek_noodum_psg1\psg1_scope_co.paa"};
		inertia = 0.72;
		dexterity = 0.920761;
		aimTransitionSpeed = 0.6445327;
		class OpticsModes
		{
			class Snip
			{
				discretedistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discretedistanceinitindex = 2;
				discretefov[] = {0.0415,0.0415};
				discreteInitIndex = 0;
				distancezoommax = 1500;
				distancezoommin = 300;
				memorypointcamera = "scope_eye";
				opticsdisableperipherialvision = 1;
				modelOptics[] = {"\hlc_wp_G3\mesh\psg1\psg1_reticle","\hlc_wp_G3\mesh\psg1\PSG1_reticle_illum"};
				opticsflare = 1;
				opticsid = 1;
				opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticszoominit = 0.0415;
				opticszoommax = 0.0415;
				opticszoommin = 0.0415;
				usemodeloptics = 1;
				visionmode[] = {"Normal"};
				opticsDisplayName = "WFOV";
			};
		};
		modes[] = {"Single","single_medium_optics1"};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"psg1_Shot_SoundSet","psg1_Tail_SoundSet"};
			};
			dispersion = 0.000218166;
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
			showtoplayer = 0;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 4;
			minRange = 250;
			minRangeProbab = 0.2;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 158;
			class MuzzleSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
			class CowsSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_psg1_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_psg1_XMAG";
			default = "hlc_rifle_psg1";
		};
	};
	class hlc_rifle_psg1_XMAG: hlc_rifle_psg1
	{
		scopeArsenal = 0;
		author = "Krycek,noodum, Toadie";
		model = "\hlc_wp_g3\mesh\psg1\psg1_xmag.p3d";
		inertia = "0.72+0.225";
		dexterity = 0.79678345;
		aimTransitionSpeed = 0.5577484;
	};
	class hlc_rifle_psg1A1: hlc_rifle_psg1
	{
		author = "Krycek,noodum, Toadie";
		model = "\hlc_wp_g3\mesh\psg1\psg1a1.p3d";
		displayName = "HK PSG1A1";
		picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
		discretedistance[] = {100};
		discretedistanceinitindex = 0;
		class OpticsModes
		{
			class Snip
			{
				discretedistance[] = {100};
				discretedistanceinitindex = 0;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				opticsppeffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				usemodeloptics = 0;
				opticsflare = 0;
				opticsid = 1;
				visionmode[] = {"Normal"};
				opticsDisplayName = "WFOV";
			};
		};
		modes[] = {"Single","single_medium_optics1","single_far_optics1"};
		inertia = 0.63;
		dexterity = 0.98676264;
		aimTransitionSpeed = 0.69073385;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 141;
			class CowsSlot: asdg_OpticRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
				class compatibleItems
				{
					HLC_Optic_ZFSG1 = 1;
					hlc_optic_accupoint_g3 = 1;
					hlc_optic_PVS4G3 = 1;
					hlc_optic_STANAGZF2D_G3 = 1;
					hlc_optic_STANAGZF_G3 = 1;
					hlc_optic_ZF95_g3 = 1;
					hlc_optic_LeupoldM3A_G3 = 1;
				};
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_psg1A1_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_psg1A1_XMAG";
			default = "hlc_rifle_psg1A1";
		};
	};
	class hlc_rifle_psg1A1_XMAG: hlc_rifle_psg1A1
	{
		scopeArsenal = 0;
		author = "Krycek,noodum, Toadie";
		model = "\hlc_wp_g3\mesh\psg1\psg1a1_xmag.p3d";
		inertia = "0.63+0.225";
		dexterity = 0.8385452;
		aimTransitionSpeed = 0.58698165;
	};
	class hlc_rifle_PSG1A1_RIS: hlc_rifle_psg1A1
	{
		author = "Krycek,noodum, Toadie";
		model = "\hlc_wp_g3\mesh\psg1\psg1a1_RAS.p3d";
		displayName = "HK PSG1A1(RIS)";
		picture = "\hlc_wp_g3\tex\ui\gear_psg1a1_ca";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_PSG1A1_RIS_XMAG";
			default = "hlc_rifle_PSG1A1_RIS";
		};
	};
	class hlc_rifle_PSG1A1_RIS_XMAG: hlc_rifle_PSG1A1_RIS
	{
		scopeArsenal = 0;
		author = "Krycek,noodum, Toadie";
		model = "\hlc_wp_g3\mesh\psg1\psg1a1_RAS_xmag.p3d";
	};
	class hlc_rifle_g3a3: hlc_rifle_g3sg1
	{
		author = "Krycek, Pete, Toadie";
		deployedpivot = "deploypivot";
		hasBipod = 0;
		AB_barrelTwist = 12;
		AB_barrelLength = 17.7;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 449.58;
		picture = "\hlc_wp_g3\tex\ui\gear_g3a3_x_ca";
		scope = 2;
		agm_bipod = 0;
		cse_bipod = 0;
		bg_bipod = 0;
		displayName = "HK G3A3";
		descriptionShort = "Battle Rifle<br/>Caliber: 7.62x51mm NATO";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_g3_std.rtm"};
		model = "\hlc_wp_g3\mesh\g3a3\g3a3.p3d";
		hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa",""};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g3_Shot_SoundSet","g3_Tail_SoundSet"};
			};
			dispersion = 0.000436332;
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g3_Shot_SoundSet","g3_Tail_SoundSet"};
			};
			dispersion = 0.000436332;
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
		class single_medium: Single
		{
			showtoplayer = 0;
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
			mass = 96.9;
		};
		inertia = 0.44;
		dexterity = 1.2520791;
		aimTransitionSpeed = 0.87645537;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3_XMAG";
			default = "hlc_rifle_g3a3";
		};
	};
	class hlc_rifle_g3a3_XMAG: hlc_rifle_g3a3
	{
		scopeArsenal = 0;
		author = "PAC, Millenia, Toadie";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_xmag.p3d";
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_g3a3ris: hlc_rifle_g3a3
	{
		displayName = "HK G3A3(RIS)";
		author = "Krycek,zulmargera87, Toadie";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed.p3d";
		hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3ris_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3ris_XMAG";
			default = "hlc_rifle_g3a3ris";
		};
	};
	class hlc_rifle_g3a3ris_XMAG: hlc_rifle_g3a3ris
	{
		scopeArsenal = 0;
		author = "Krycek,zulmargera87, Toadie";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_railed_xmag.p3d";
		inertia = "0.44+0.225";
		dexterity = 0.963825;
		aimTransitionSpeed = 0.6746775;
	};
	class hlc_rifle_g3a3v: hlc_rifle_g3a3
	{
		author = "Krycek, Toadie";
		displayName = "HK G3A3(Widegrip)";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern.p3d";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_g3sg1.rtm"};
		hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		cameradir = "aim_point";
		picture = "\hlc_wp_g3\tex\ui\gear_g3a3v_ca";
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4"};
		inertia = 0.45;
		dexterity = 1.2331482;
		aimTransitionSpeed = 0.86320376;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3v_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3v_XMAG";
			default = "hlc_rifle_g3a3v";
		};
	};
	class hlc_rifle_g3a3v_XMAG: hlc_rifle_g3a3v
	{
		scopeArsenal = 0;
		author = "PAC, Millenia, Toadie";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_xmag.p3d";
		inertia = "0.45+0.225";
		dexterity = 0.9554733;
		aimTransitionSpeed = 0.6688313;
	};
	class hlc_rifle_g3a3vris: hlc_rifle_g3a3
	{
		author = "Krycek, Toadie";
		displayName = "HK G3A3(Widegrip/RIS)";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed.p3d";
		hiddenSelections[] = {"Main","Reciever","Rec2","Grip","rail"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_co.paa","hlc_wp_g3\tex\sg1\g3sg2_co.paa","hlc_wp_g3\tex\fsg-pete-g3\recgreen_co.paa","hlc_wp_g3\tex\fsg-pete-g3\synthgreen_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3a3vris_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3a3vris_XMAG";
			default = "hlc_rifle_g3a3vris";
		};
	};
	class hlc_rifle_g3a3vris_XMAG: hlc_rifle_g3a3vris
	{
		scopeArsenal = 0;
		author = "Krycek, Toadie";
		model = "\hlc_wp_g3\mesh\g3a3\g3a3_Modern_railed_xmag.p3d";
		inertia = "0.45+0.225";
		dexterity = 0.9554733;
		aimTransitionSpeed = 0.6688313;
	};
	class hlc_rifle_g3ka4: hlc_rifle_g3a3
	{
		author = "Krycek, zulmargera87, Toadie";
		displayName = "HK G3KA4 RAS";
		model = "\hlc_wp_g3\mesh\g3_rails\g3ka4.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_g3ka4_x_ca";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_g3_std.rtm"};
		hiddenSelections[] = {"Main","Rail","Stock"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\arby_mp5n\mp5_co.paa"};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 314.96;
		inertia = 0.46;
		dexterity = 1.2150402;
		aimTransitionSpeed = 0.8505281;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 102;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.2,0.45};
				iconScale = 0;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet","g3ka4_Tail_SoundSet"};
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
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"g3ka4_Shot_SoundSet","g3ka4_Tail_SoundSet"};
			};
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
		class single_medium: Single
		{
			showtoplayer = 0;
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
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_g3ka4_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_g3ka4_XMAG";
			default = "hlc_rifle_g3ka4";
		};
	};
	class hlc_rifle_g3ka4_XMAG: hlc_rifle_g3ka4
	{
		scopeArsenal = 0;
		author = "PAC, Millenia, zulmargera87, Toadie";
		model = "\hlc_wp_g3\mesh\g3_rails\g3ka4_xmag.p3d";
		inertia = "0.46+0.225";
		dexterity = 0.9473654;
		aimTransitionSpeed = 0.6631558;
	};
	class HLC_Rifle_g3ka4_GL: hlc_rifle_g3ka4
	{
		author = "Krycek, zulmargera87, Tigg, Toadie";
		model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_g3ka4gl_x_ca";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\g3k_gl_hands.rtm"};
		displayName = "HK G3KA4 RAS(GL)";
		muzzles[] = {"this","hlc_M203_G3k"};
		hiddenSelections[] = {"Main","Rail","Stock","M203"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\arby_mp5n\mp5_co.paa","hlc_wp_g3\tex\tigg_m203\m203_co.paa"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
			class UnderBarrelSlot{};
		};
		inertia = 0.54;
		dexterity = 1.0943159;
		aimTransitionSpeed = 0.76602113;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "HLC_Rifle_g3ka4_GL_XMAG";
			default = "HLC_Rifle_g3ka4_GL";
		};
	};
	class HLC_Rifle_g3ka4_GL_XMAG: HLC_Rifle_g3ka4_GL
	{
		scopeArsenal = 0;
		author = "PAC, Millenia, zulmargera87, Toadie";
		model = "\hlc_wp_g3\mesh\g3_railsGL\g3kgl_xmag.p3d";
		inertia = "0.54+0.225";
		dexterity = 0.890132;
		aimTransitionSpeed = 0.6230924;
	};
	class hlc_rifle_hk51: hlc_rifle_g3sg1
	{
		deployedpivot = "deploypivot";
		hasBipod = 0;
		scope = 2;
		AB_barrelTwist = 12;
		AB_barrelLength = 8.31;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 211.074;
		agm_bipod = 0;
		cse_bipod = 0;
		bg_bipod = 0;
		author = "Krycek, PAC, Toadie";
		model = "\hlc_wp_g3\mesh\hene_hk51\hk53.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
		displayName = "FR Ordnance MC51";
		reloadAction = "HLC_GestureReloadHK53";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
		descriptionShort = "Compact Carbine<br/>Caliber:  7.62x51mm NATO";
		hiddenSelections[] = {"Lower"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_g3\g3_2_co.paa"};
		reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload",1.0,1,25};
		initspeed = -0.83;
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"hk51_Shot_SoundSet","hk51_Tail_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.0013;
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
				soundSetShot[] = {"hk51_Shot_SoundSet","hk51_Tail_SoundSet"};
			};
			reloadTime = 0.085;
			dispersion = 0.0013;
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
		class single_medium: Single
		{
			showtoplayer = 0;
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
			mass = 80;
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.0,0.45};
				iconScale = 0.0;
			};
		};
		inertia = 0.36;
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
		class nia_magSwitch
		{
			hlc_50rnd_762x51_M_G3 = "hlc_rifle_hk51_XMAG";
			hlc_50rnd_762x51_MDIM_G3 = "hlc_rifle_hk51_XMAG";
			default = "hlc_rifle_hk51";
		};
	};
	class hlc_rifle_hk51_XMAG: hlc_rifle_hk51
	{
		scopeArsenal = 0;
		author = "Krycek, PAC, Toadie";
		model = "\hlc_wp_g3\mesh\hene_hk51\hk53_xmag.p3d";
		inertia = "0.36+0.225";
		dexterity = 1.0409161;
		aimTransitionSpeed = 0.7286413;
	};
	class hlc_rifle_hk53: hlc_g3_base
	{
		deployedpivot = "deploypivot";
		hasBipod = 0;
		recoil = "recoil_trg20";
		maxZeroing = 400;
		author = "Soul Slayer,HeNe,Krycek,Toadie";
		scope = 2;
		AB_barrelTwist = 7;
		AB_barrelLength = 8.31;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 211.074;
		agm_bipod = 0;
		cse_bipod = 0;
		bg_bipod = 0;
		initspeed = -0.85;
		magazines[] = {"hlc_30rnd_556x45_b_hk33","hlc_30rnd_556x45_t_hk33","hlc_30rnd_556x45_epr_hk33","hlc_30rnd_556x45_sost_hk33","hlc_30rnd_556x45_tdim_HK33","hlc_30rnd_556x45_mdim_HK33","hlc_30rnd_556x45_SPR_HK33"};
		discreteDistance[] = {100,200,300,400};
		model = "\hlc_wp_g3\mesh\hene_hk53\hk53.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
		hiddenSelections[] = {"Lower","Upper","Grip","Grip1","Panels","Rail","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\hk53\lower_co.paa","hlc_wp_g3\tex\hk53\upper_co.paa","hlc_wp_g3\tex\rails_co.paa","hlc_wp_g3\tex\tigg_m203\fore_co.paa","hlc_wp_g3\tex\tigg_m203\rails_co.paa","hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa","hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa"};
		displayName = "HK HK53";
		reloadAction = "HLC_GestureReloadHK53";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\mc51_hands.rtm"};
		descriptionShort = "Compact Carbine<br/>Caliber:  5.56x45mm NATO";
		reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload",1.0,1,25};
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","AI_Burst_close"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk53_Shot_SoundSet","hk53_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.0011;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 5;
			midRangeProbab = 0.8;
			maxRange = 10;
			maxRangeProbab = 0.1;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk53_Shot_SoundSet","hk53_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.0011;
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
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk53_Shot_SoundSet","hk53_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/700)";
			dispersion = 0.0011;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.1;
			displayName = "$STR_DN_MODE_BURST";
			textureType = "burst";
			soundBurst = 0;
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
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 3;
			minRange = 120;
			minRangeProbab = 0.8;
			midRange = 200;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.01;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 68;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		inertia = 0.31;
		dexterity = 1.6092874;
		aimTransitionSpeed = 1.1265012;
	};
	class hlc_rifle_hk53RAS: hlc_rifle_hk53
	{
		author = "Soul Slayer,HeNe, Toadie";
		scope = 2;
		discreteDistance[] = {100,200,300,400};
		model = "\hlc_wp_g3\mesh\hene_hk53\hk53_rails.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk53_x_ca";
		displayName = "HK HK53(RAS)";
		hiddenSelections[] = {"Lower","Upper","Grip","Grip1","Panels","Rail","Magazine"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\hk53\lower_co.paa","hlc_wp_g3\tex\hk53\upper_co.paa","hlc_wp_g3\tex\rails_co.paa","hlc_wp_g3\tex\tigg_m203\fore_co.paa","hlc_wp_g3\tex\tigg_m203\rails_co.paa","hlc_wp_g3\tex\twinkemil_mp5\rail_co.paa","hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa"};
		inertia = 0.36;
		dexterity = 1.4413774;
		aimTransitionSpeed = 1.0089642;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
	};
	class hlc_rifle_hk33a2: hlc_g3_base
	{
		deployedpivot = "deploypivot";
		hasBipod = 0;
		recoil = "recoil_trg20";
		maxZeroing = 1000;
		author = "Krycek, Toadie";
		reloadAction = "HLC_GestureReloadHK33";
		scope = 2;
		AB_barrelTwist = 7;
		AB_barrelLength = 15.4;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 390;
		agm_bipod = 0;
		cse_bipod = 0;
		bg_bipod = 0;
		magazines[] = {"hlc_30rnd_556x45_b_hk33","hlc_30rnd_556x45_t_hk33","hlc_30rnd_556x45_epr_hk33","hlc_30rnd_556x45_sost_hk33","hlc_30rnd_556x45_tdim_HK33","hlc_30rnd_556x45_mdim_HK33"};
		discreteDistance[] = {100,200,300,400};
		model = "\hlc_wp_g3\mesh\hk33\hk33a2.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk33a2_ca";
		displayName = "HK HK33A2";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\hands_hk33.rtm"};
		descriptionShort = "Infantry Carbine<br/>Caliber:  5.56x45mm NATO";
		hiddenSelections[] = {"Main","FCG","Rail","Stock","Magazine","M203"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_hk33\hk33_co.paa","hlc_wp_g3\tex\hk53\lower_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\sg1\g3sg3_co.paa","hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa","hlc_wp_g3\tex\tigg_m203\m203_co.paa"};
		reloadmagazinesound[] = {"\hlc_wp_g3\snd\g41_reload",1.0,1,25};
		modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","AI_Burst_close","AI_far"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_Shot_SoundSet","hk33_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/750)";
			dispersion = 0.000436332;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_Shot_SoundSet","hk33_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/750)";
			dispersion = 0.000436332;
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
		class Burst: Mode_Burst
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				closure2[] = {"\hlc_wp_g3\snd\g3_first",1,1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_Shot_SoundSet","hk33_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"hk33_silencerShot_SoundSet","hk33_silencerTail_SoundSet"};
			};
			reloadtime = "(60/750)";
			dispersion = 0.000436332;
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
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 81.5;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
		inertia = 0.37;
		dexterity = 1.4132396;
		aimTransitionSpeed = 0.9892677;
	};
	class hlc_rifle_hk33ka3: hlc_rifle_hk33a2
	{
		picture = "\hlc_wp_g3\tex\ui\gear_hk33ka3_ca";
		author = "Krycek, Toadie";
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 332.58;
		model = "\hlc_wp_g3\mesh\hk33\hk33ka3.p3d";
		displayName = "HK HK33KA3";
		reloadAction = "HLC_GestureReloadHK33";
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","AI_Burst_close","AI_far"};
		inertia = 0.35;
		dexterity = 1.4711225;
		aimTransitionSpeed = 1.0297858;
	};
	class hlc_rifle_hk33a2RIS: hlc_rifle_hk33a2
	{
		author = "Krycek, Toadie";
		model = "\hlc_wp_g3\mesh\hk33\hk33_rails.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk33rail_ca";
		displayName = "HK HK33A2(RIS)";
		hiddenSelections[] = {"Main","FCG","Rail","Stock","Magazine","M203"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_hk33\hk33_co.paa","hlc_wp_g3\tex\hk53\lower_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\sg1\g3sg3_co.paa","hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa","hlc_wp_g3\tex\tigg_m203\m203_co.paa"};
		inertia = 0.38;
		dexterity = 1.3865825;
		aimTransitionSpeed = 0.97060776;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 84;
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
	};
	class hlc_rifle_hk33a2RIS_GL: hlc_rifle_hk33a2RIS
	{
		author = "Krycek,Soul Slayer,HeNe, Toadie";
		model = "\hlc_wp_g3\mesh\hk33\hk33_rails_GL.p3d";
		picture = "\hlc_wp_g3\tex\ui\gear_hk33gl_ca";
		displayName = "HK HK33A2(RIS/GL)";
		handanim[] = {"OFP2_ManSkeleton","hlc_wp_g3\gesture\newgesture\g3k_gl_hands.rtm"};
		muzzles[] = {"this","hlc_M203_G3k"};
		hiddenSelections[] = {"Main","FCG","Rail","Stock","Magazine","M203"};
		hiddenSelectionsTextures[] = {"hlc_wp_g3\tex\krycek_hk33\hk33_co.paa","hlc_wp_g3\tex\hk53\lower_co.paa","hlc_wp_g3\tex\zulmarg_tech\rail_co.paa","hlc_wp_g3\tex\sg1\g3sg3_co.paa","hlc_wp_g3\tex\krycek_hk33\hk33_parts_co.paa","hlc_wp_g3\tex\tigg_m203\m203_co.paa"};
		inertia = 0.51;
		dexterity = 1.13515;
		aimTransitionSpeed = 0.79460496;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 113;
			class UnderBarrelSlot
			{
				iconPosition[] = {0.5,0.35};
				iconScale = 0.0;
			};
		};
	};
};
