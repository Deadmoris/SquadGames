#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class tu_arty_config
	{
		units[]={};
		weapons[]={"tu_arty_tables_2b14","tu_arty_tables_m224","tu_arty_tables_m252","tu_arty_tables_120mm","tu_arty_tables_D30","tu_arty_tables_M119","tu_arty_tables_2s3","bn_rhs_weap_D30","bn_rhs_weap_grad"};
		requiredVersion=1.0;
		requiredAddons[]={"A3_Static_F_Gamma", "A3_Weapons_F", "rhs_c_heavyweapons", "bn_csw_load", "bn_te", "ace_maptools", "ace_interaction", "Extended_Eventhandlers", "ace_mk6mortar", "rhs_c_2s3", "ace_spottingscope", "tu_arty"};
	};
};


class CfgFunctions
{
	class tu_arty {
		class myCategory { // отсортировал по алфавиту
			class add_observable {file = "\tu_arty_config\functions\add_observable.sqf";};
			class add_subscriber {file = "\tu_arty_config\functions\add_subscriber.sqf";};
			class add_trackable {file = "\tu_arty_config\functions\add_trackable.sqf";};
			class air_friction {file = "\tu_arty_config\functions\air_friction.sqf";};
			class ammo_cookoff {file = "\tu_arty_config\functions\ammo_cookoff.sqf";};
			class ammo_explode {file = "\tu_arty_config\functions\ammo_explode.sqf";};
			class assemble_m224 {file = "\tu_arty_config\functions\assemble_m224.sqf";};
			class attach_grenade {file = "\tu_arty_config\functions\attach_grenade.sqf";};
			class assign_marker_color {file = "\tu_arty_config\functions\assign_marker_color.sqf";};
			class collapse_aiming_circle {file = "\tu_arty_config\functions\collapse_aiming_circle.sqf";};
			class collective_action {file = "\tu_arty_config\functions\collective_action.sqf";};
			class def_change {file = "\tu_arty_config\functions\def_change.sqf";};
			//class dev_buildTable {file = "\tu_arty_config\functions\dev_buildTable.sqf";};
			//class dev_simulateFindSolution {file = "\tu_arty_config\functions\dev_simulateFindSolution.sqf";};
			//class dev_simulateCalcRangeTableLine {file = "\tu_arty_config\functions\dev_simulateCalcRangeTableLine.sqf";};	
			//class dev_simulateShot {file = "\tu_arty_config\functions\dev_simulateShot.sqf";};			
			class deploy_aiming_circle {file = "\tu_arty_config\functions\deploy_aiming_circle.sqf";};
			class el_dial_change {file = "\tu_arty_config\functions\el_dial_change.sqf";};
			class elevate {file = "\tu_arty_config\functions\elevate.sqf";};
			class endShift {file = "\tu_arty_config\functions\end_shift.sqf";};
			class explosion_marker {file = "\tu_arty_config\functions\explosion_marker.sqf"; recompile = 1;};
			class fired_EH {file = "\tu_arty_config\functions\fired.sqf";};
			class fired_EH_gun {file = "\tu_arty_config\functions\fired_gun.sqf";};
			class firefinder_detection {file = "\tu_arty_config\functions\firefinder_detection.sqf";};
			class firefinder_update_markers {file = "\tu_arty_config\functions\firefinder_update_markers.sqf";};			
			class fold_gun {file = "\tu_arty_config\functions\fold_gun.sqf";};
			class give_up_token {file = "\tu_arty_config\functions\give_up_token.sqf";};
			class getIn_EH {file = "\tu_arty_config\functions\GetIn.sqf";};
			class getOut_EH {file = "\tu_arty_config\functions\GetOut.sqf";};
			class grenade_subactions {file = "\tu_arty_config\functions\grenade_subactions.sqf";};
			class handleKeydown {file = "\tu_arty_config\functions\handleKeydown.sqf";};
			class init_keybinds {file = "\tu_arty_config\functions\init_keybinds.sqf"; postInit = 1;};
			class ini_collimator {file = "\tu_arty_config\functions\ini_collimator.sqf";preInit = 1;};
			class is_shell_detected {file = "\tu_arty_config\functions\is_shell_detected.sqf";};
			//class keydown_EH {file = "\tu_arty_config\functions\keydown.sqf";};
			class level_gun {file = "\tu_arty_config\functions\level_gun.sqf";};
			class level_howitzer {file = "\tu_arty_config\functions\level_howitzer.sqf";};
			class map_tools_menu_children {file = "\tu_arty_config\functions\map_tools_menu_children.sqf";};
			class optic_change {file = "\tu_arty_config\functions\optic_change.sqf";};
			class optic_swing {file = "\tu_arty_config\functions\optic_swing.sqf";};
			class position_camera {file = "\tu_arty_config\functions\position_camera.sqf";};
			class proximity_burst {file = "\tu_arty_config\functions\proximity_burst.sqf";};
			class prep_diag_init {file = "\tu_arty_config\functions\prep_diag_init.sqf";};
			class raise_pole {file = "\tu_arty_config\functions\raise_pole.sqf";};
			class request_token {file = "\tu_arty_config\functions\request_token.sqf";};
			class release_grenade {file = "\tu_arty_config\functions\release_grenade.sqf";};
			class recoil {file = "\tu_arty_config\functions\recoil.sqf";};
			class select_helpers {file = "\tu_arty_config\functions\select_helpers.sqf";};
			class sight_interface_pf_handler {file = "\tu_arty_config\functions\sight_interface_pf_handler.sqf";};
			class shift {file = "\tu_arty_config\functions\shift.sqf";};
			class smoke_burst {file = "\tu_arty_config\functions\smoke_burst.sqf";};
			class tow_stuff {file = "\tu_arty_config\functions\tow_stuff.sqf";};
			class towing_enabled {file = "\tu_arty_config\functions\towing_enabled.sqf";};
			class traverse {file = "\tu_arty_config\functions\traverse.sqf";};
			class unfold_gun {file = "\tu_arty_config\functions\unfold_gun.sqf";};
			class unlevel_gun {file = "\tu_arty_config\functions\unlevel_gun.sqf";};
			class untow_stuff {file = "\tu_arty_config\functions\untow_stuff.sqf";};
			class uav_cam_create {file = "\tu_arty_config\functions\uav_cam_create.sqf";};
			class use_aiming_circle {file = "\tu_arty_config\functions\use_aiming_circle.sqf";};
			class weapon_assembled_EH {file = "\tu_arty_config\functions\weapon_assembled_eh.sqf";};
			class weather_report {file = "\tu_arty_config\functions\weather_report.sqf"; postInit = 1;};
			class init {
				file = "\tu_arty_config\functions\init.sqf";
				preInit = 1;
				};		
//			class prep_init_charge_list {file = "\tu_arty_config\functions\prep_init_charge_list.sqf";};
		};
	};
	
	class ace_mk6mortar {
		class ace_mk6mortar {
			class rangeTablePreCalculatedValues {
				file = "\tu_arty_config\functions\range_table_values.sqf";
				recompile = 1;
			};
			class rangeTablePageChange {
				file = "\tu_arty_config\functions\range_table_page_change.sqf";
				recompile = 1;
			};
		};
	};
};

class Mode_SemiAuto;
class DefaultEventhandlers;

class SmokeShellWhiteSmall;
class tu_arty_SmokeShellEffect : SmokeShellWhiteSmall {
   	class SmokeShellWhite1 {
       simulation = "particles";   
       type = "tu_arty_SmokeShellParticles1";
       position[] = {0, 0, 0};   
       lifeTime = -1;            
       qualityLevel = -1;        
       start = 1;                
       enabled = 1;              
   	};

    class SmokeShellWhite2 {
       simulation = "particles";   
       type = "tu_arty_SmokeShellParticles2"; 
       position[] = {0, 0, 0};   
       lifeTime = -1;            
       qualityLevel = -1;      
       start = 1;              
       enabled = 1;              
   };


};

class CfgCloudlets
{	
	class SmokeShellWhite;
	class tu_arty_SmokeShellParticles1 : SmokeShellWhite {
    	interval = "0.2";      
    	particleShape = \A3\data_f\ParticleEffects\Universal\Universal;	
    	particleFSNtieth = 16;	
    	particleFSIndex = 12;	
    	particleFSFrameCount = 7;
    	particleFSLoop = 0;		    
    	animationSpeed[] = {0.2};	
    	angle = 0;				   
    	angleVar = 360;			    
    	animationName = "";
    	particleType = "Billboard";	  
		timerPeriod = 1;			   
    	lifeTime = 5;			     
    	moveVelocity[] = {0, 0,  0.5};	             
    	rotationVelocity = 0;		     
    	weight = 1.277;			             
    	volume = 1;			            
    	rubbing = 0.025;			    
    	size[] = {0.5, 8, 12, 15};			     
    	color[] = {{1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 0.5},{1, 1, 1, 0}};	     
    	randomDirectionPeriod = 1;		    
    	randomDirectionIntensity = 0.04;	     
    	onTimerScript = "";		             
    	beforeDestroyScript = "";		     
    	lifeTimeVar = 2;			     
    	position[] = {0, 0, 0};                  
    	positionVar[] = {0.3, 0.3, 0.3};		     
    	positionVarConst[] = {0, 0, 0};	     
    	moveVelocityVar[] = {1.5, 1.5, 1};	     
    	moveVelocityVarConst[] = {0, 0, 0};      
    	rotationVelocityVar = 20;		     
    	sizeVar = 0.2;			    
    	colorVar[] = {0, 0, 0, 0.1};
 	};

	class tu_arty_SmokeShellParticles2 : tu_arty_SmokeShellParticles1 {
		interval = "0.15"; 
		particleFSNtieth = 16;	
    	particleFSIndex = 7;	
    	particleFSFrameCount = 48;
    	particleFSLoop = 1;				   
    	lifeTime = 10;	
		color[] = {{1, 1, 1, 0.7},{1, 1, 1, 0.5},{1, 1, 1, 0.25},{1, 1, 1, 0}};
	};
};

class CfgAmmo
{	
	class SmokeShell;
	class tu_arty_SmokeShell : SmokeShell {
		effectsSmoke = "tu_arty_SmokeShellEffect";
		explosionTime = 0.1;
		timeToLive = 180;
	};

	//2б14 82
	class Sh_82mm_AMOS;
	class bn_82mm_shell: Sh_82mm_AMOS {
		airFriction = -0.00012;
		tu_arty_derivation = 0;
		hit = 100;
		indirectHit = 35;
		indirectHitRange = 18;
		audibleFire = 15;
		ace_frag_metal = 2646;     // metal in grams
		ace_frag_charge = 454;    // explosive in grams
		ace_frag_gurney_c = 2440; // Gurney velocity constant for explosive type. See: http://en.wikipedia.org/wiki/Gurney_equations
		//не знаю константы для ТД, пусть будет тротил
		ace_frag_gurney_k = 1/2;  // Gurney shape factor
		ace_frag_classes[]={"ACE_frag_small","ACE_frag_small_HD","ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge"};
		ace_frag_force=1;
		soundFly[] = {"\tu_arty\sound\sound_fly_mortar",0.7,1,350};
		tu_arty_explosion_marker_size = 1;
		tu_arty_explosion_marker_alpha = 1;
		/*
		soundHit1[] = {"\tu_arty\sound\explosions\1",2.51189,1,1900};
		soundHit2[] = {"\tu_arty\sound\explosions\2",2.51189,1,1900};
		soundHit3[] = {"\tu_arty\sound\explosions\3",2.51189,1,1900};
		soundHit4[] = {"\tu_arty\sound\explosions\4",2.51189,1,1900};
		soundHit5[] = {"\tu_arty\sound\explosions\5",2.51189,1,1900};
		soundHit6[] = {"\tu_arty\sound\explosions\6",2.51189,1,1900};
		soundHit7[] = {"\tu_arty\sound\explosions\7",2.51189,1,1900};
		soundHit8[] = {"\tu_arty\sound\explosions\8",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
		*/
		//SoundSetExplosion[] = {"DS_Ex_82mm_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		//soundSetSonicCrack[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
		//soundSetFly[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
		whistleOnFire = 0;
	};
	
	class bn_82mm_smoke: bn_82mm_shell {
		//simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteSmall";
		explosionEffects = "RHS_GDM40Effect";
		hit = 8;
		indirectHit = 7;
		indirectHitRange = 3.5;
		suppressionRadiusHit = 24;
		ace_frag_metal = 2646;
		ace_frag_charge = 66;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[]={"ACE_frag_small","ACE_frag_small_HD","ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge"};
		ace_frag_force=1;
		tu_arty_effect = "Smoke";
		simulation = "shotShell";
		simulationStep = 0.05;
		timeToLive = 180;
		tu_arty_explosion_marker_size = 1;
		tu_arty_explosion_marker_alpha = 0.5;
		tu_arty_smokeVelocity = 13; //спавн дымов (скорость)
		tu_arty_smokeCount[] = {4,1}; //длина массива - количество рядов; значение - количество дыма; последний ряд летит вверх
	};
	
	class bn_82mm_illum: bn_82mm_shell {
		ace_frag_skip = 1;    
		aimAboveDefault = 4;
		aimAboveTarget[] = {30,60,120,180,240,300,360};
		cost = 100;
		effectFlare = "CounterMeasureFlare";
		flareSize = 12;
		hit = 5;
		indirectHit = 1;
		indirectHitRange = 1;
		intensity = 3000000;
		lightColor[] = {0.95,0.95,1,0.5};
		model = "\A3\weapons_f\ammo\shell";
		simulation = "shotIlluminating";
		simulationStep = 0.05;
		smokeColor[] = {1,1,1,0.5};
		timeToLive = 120;
		//triggerDistance = 100;
		triggerSpeedCoef = 1;
		triggerTime = -1;
		brightness = 50;
		size = 1;
		tu_arty_explosion_marker_size = 1;
		tu_arty_explosion_marker_alpha = 0.2;
		soundFly[] = {""};
	};
	
	class bn_82mm_frag: bn_82mm_shell {
//		simulation = "shotSmoke";
		effectsSmoke = "SmokeShellWhiteSmall";
		hit = 35;
		indirectHit = 10;
		indirectHitRange = 15;
		ace_frag_metal = 2646;   
		ace_frag_charge = 454;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD"};
		ace_frag_force=1;
	};

	//m224 60mm
	class bn_60mm_shell_frag: bn_82mm_shell {
		airFriction = -0.00015;
		tu_arty_derivation = 0;
		hit = 30;
		indirectHit = 10;
		indirectHitRange = 4;
		ace_frag_metal = 1450;   
		ace_frag_charge = 250;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD"};
		ace_frag_force=1;
		tu_arty_explosion_marker_size = 0.75;
		tu_arty_explosion_marker_alpha = 1;
		/*
		soundHit1[] = {"\tu_arty\sound\explosions\1",2.51189,1,1900};
		soundHit2[] = {"\tu_arty\sound\explosions\2",2.51189,1,1900};
		soundHit3[] = {"\tu_arty\sound\explosions\3",2.51189,1,1900};
		soundHit4[] = {"\tu_arty\sound\explosions\4",2.51189,1,1900};
		soundHit5[] = {"\tu_arty\sound\explosions\5",2.51189,1,1900};
		soundHit6[] = {"\tu_arty\sound\explosions\6",2.51189,1,1900};
		soundHit7[] = {"\tu_arty\sound\explosions\7",2.51189,1,1900};
		soundHit8[] = {"\tu_arty\sound\explosions\8",2.51189,1,1900};
		multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
		*/
		//SoundSetExplosion[] = {"DS_Ex_rocket_small_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		//SoundSetExplosion[] = {"JSRS_Mortar_Explosion_SoundSet","JSRS_Mortar_Explosion_Stereo_SoundSet","JSRS_Shell_Explosion_Reflector_SoundSet","JSRS_Big_Debris_SoundSet"};
		//soundSetSonicCrack[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
		//soundSetFly[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
	};
	
	class bn_60mm_frag_prx: bn_60mm_shell_frag {
		tu_arty_explosion_marker_size = 0.8;
		tu_arty_explosion_marker_alpha = 0.9;
	};
	
	class bn_60mm_smoke: bn_82mm_smoke {
		hit = 8;
		indirectHit = 10;
		indirectHitRange = 2;
		suppressionRadiusHit = 24;
		ace_frag_metal = 1450;   
		ace_frag_charge = 40;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD"};
		ace_frag_force=1;
		airFriction = -0.00015;
		tu_arty_derivation = 0;
		tu_arty_explosion_marker_size = 0.75;
		tu_arty_explosion_marker_alpha = 0.5;
		tu_arty_smokeVelocity = 10;
		tu_arty_smokeCount[] = {2,1}; 
	};

	class bn_60mm_illum: bn_82mm_illum {
		airFriction = -0.00015;
		tu_arty_derivation = 0;
		timeToLive = 100;
		intensity = 2000000;
		brightness = 50;
		size = 1;
	};

	class SmallSecondary;
	class bn_60mm_proximity_burst: SmallSecondary {
		hit = 25;
		indirectHit = 10;
		indirectHitRange = 8;
		ace_frag_metal = 1450;   
		ace_frag_charge = 250;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium"};
		ace_frag_force=1;
	};

	// m252 81mm
	class bn_81mm_illum: bn_82mm_illum {
		airFriction = -0.000095;
		tu_arty_derivation = 0;
	};

	class bn_81mm_shell_frag: bn_82mm_shell {
		airFriction = -0.000095;
		tu_arty_derivation = 0;
		effectsSmoke = "SmokeShellWhiteSmall";
		hit = 35;
		indirectHit = 10;
		indirectHitRange = 15;
		ace_frag_metal = 2646;   
		ace_frag_charge = 454;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD"};
		ace_frag_force=1;
	};

	class bn_81mm_frag_prx: bn_81mm_shell_frag {
	};
	
	class bn_81mm_smoke: bn_82mm_smoke {
		airFriction = -0.000095;
		tu_arty_derivation = 0;
	};

	class bn_81mm_proximity_burst: SmallSecondary {
		hit = 35;
		indirectHit = 10;
		indirectHitRange = 15;
		ace_frag_metal = 2646;   
		ace_frag_charge = 454;   
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2; 
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD"};
		ace_frag_force=1;
	};


	//120mm
	class bn_120mm_shell: bn_82mm_shell {
		airFriction = -0.00004;
		tu_arty_derivation = 0;
		hit = 125;
		indirectHit = 50;
		indirectHitRange = 21;
		suppressionRadiusHit = 20;
		ace_frag_metal = 13230;   
		ace_frag_charge = 2670;   
		ace_frag_gurney_c = 2440; 
		ace_frag_gurney_k = 1/2;  
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge","ACE_frag_huge"};
		ace_frag_force=1;
		tu_arty_explosion_marker_size = 1.4;
		tu_arty_explosion_marker_alpha = 1;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		//soundSetSonicCrack[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
		//soundSetFly[] = {"JSRS_SC_Arty_FlyBy_SoundSet"};
	};

	class bn_120mm_illum: bn_82mm_illum {
		airFriction = -0.00004;
		tu_arty_derivation = 0;
		timeToLive = 140;
		intensity = 4000000;
		brightness = 50;
		size = 2;
	};

	class bn_120mm_smoke: bn_82mm_smoke {
		hit = 9;
		indirectHit = 7;
		indirectHitRange = 3.5;
		suppressionRadiusHit = 24;
		ace_frag_metal = 13230;   
		ace_frag_charge = 120;   
		ace_frag_gurney_c = 2440; 
		ace_frag_gurney_k = 1/2;  
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge","ACE_frag_huge"};
		ace_frag_force=1;
		airFriction = -0.00004;
		tu_arty_derivation = 0;
		tu_arty_explosion_marker_size = 1.4;
		tu_arty_explosion_marker_alpha = 0.5;
		tu_arty_smokeVelocity = 15;
		tu_arty_smokeCount[] = {3,3,1};
	};
	

	//д30 122mm
	
	class bn_122mm_OF_462: bn_120mm_shell {
		airFriction = -0.000055;	
		deflecting = 0;
		tu_arty_derivation = -0.267;
		hit = 200;
		indirectHit = 100;
		indirectHitRange = 18;
		ace_frag_metal = 18090;   
		ace_frag_charge = 3670;   
		ace_frag_gurney_c = 2440; 
		ace_frag_gurney_k = 1/2;  
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge","ACE_frag_huge"};
		ace_frag_force=1;
		tu_arty_explosion_marker_size = 1.4;
		tu_arty_explosion_marker_alpha = 1;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	};

	class bn_122mm_D4: bn_120mm_smoke {
		airFriction = -0.000055;	
		deflecting = 0;
		tu_arty_derivation = -0.267;
		tu_arty_explosion_marker_size = 1.4;
		tu_arty_explosion_marker_alpha = 0.5;
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	};
	
	class rhs_ammo_3bk18;
	class bn_122mm_BP1: rhs_ammo_3bk18 {
		hit = 200;
		deflecting = 0;
		timeToLive = 45;
		soundFly[] = {"\tu_arty\sound\sound_fly",0.9,1.7,700};
	};
	
	class bn_122mm_S_463Zh: bn_120mm_illum {
		airFriction = -0.000055;
		deflecting = 0;
		tu_arty_derivation = -0.267;
		timeToLive = 160;
		intensity = 120000;
		brightness = 3;
		size = 3;
	};
	
	class bn_105mm_BP1: rhs_ammo_3bk18 {
		hit = 150;
		timeToLive = 45;
		soundFly[] = {"\tu_arty\sound\sound_fly",0.9,1.7,700};
	};

	//m119 105mm
	class bn_105mm_D: bn_120mm_smoke {
		deflecting = 0;
		airFriction = -0.000055;	
		tu_arty_derivation = -0.250;
		tu_arty_explosion_marker_size = 1.2;
		tu_arty_explosion_marker_alpha = 0.5;
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	};
	
	class bn_105mm_S: bn_120mm_illum {
		deflecting = 0;
		airFriction = -0.000055;	
		tu_arty_derivation = -0.250;
		timeToLive = 160;
		intensity = 120000;
		brightness = 3;
		size = 3;
	};
	
	class bn_105mm_OF: bn_120mm_shell {
		deflecting = 0;
		airFriction = -0.000055;	
		tu_arty_derivation = -0.250;
		hit = 150;
		indirectHit = 100;
		indirectHitRange = 18;
		ace_frag_metal = 12090;   
		ace_frag_charge = 3270;   
		ace_frag_gurney_c = 2440; 
		ace_frag_gurney_k = 1/2;  
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge","ACE_frag_huge"};
		ace_frag_force=1;
		tu_arty_explosion_marker_size = 1.4;
		tu_arty_explosion_marker_alpha = 1;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	};
	
	//bm21
	class R_230mm_HE;
	class rhs_ammo_m21OF_HE: R_230mm_HE
	{
		submunitionAmmo = "bn_122mm_OF_462";
		triggerDistance = 100;
		airFriction = -0.000047;	
		tu_arty_derivation = -0.167;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","JSRS_Big_Debris_SoundSet"};
		//soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};	
	};
	
	//class R_230mm_fly;
	//class rhs_m21OF_fly: R_230mm_fly
	//{
	//	airFriction = -0.000047;	
	//	tu_arty_derivation = -0.167;
	//	SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","JSRS_Big_Debris_SoundSet"};
	//	soundSetSonicCrack[] = {"DS_bulletSonicCrack_SoundSet","DS_bulletSonicCrackTail_SoundSet"};
	//	//soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	//};


	//2s3 152
	class Sh_155mm_AMOS;
	class rhs_ammo_3WOF27 : Sh_155mm_AMOS {
		airFriction = -0.000041;	
		tu_arty_derivation = -0.267;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		soundSetSonicCrack[] = {"DS_bulletSonicCrack_SoundSet","DS_bulletSonicCrackTail_SoundSet"};
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};	
	};

	//atom?wka
	class rhs_ammo_3WB3 : rhs_ammo_3WOF27 {
		airFriction = -0.000041;	
		tu_arty_derivation = -0.267;
	};
	class rhs_ammo_152_WP : rhs_ammo_3WOF27 {
		airFriction = -0.000041;
		tu_arty_derivation = -0.267;		
	};
	class Sh_155mm_AMOS_LG;
	class rhs_ammo_3WOF93 : Sh_155mm_AMOS_LG {
		airFriction = -0.000041;	
		tu_arty_derivation = -0.267;
		//SoundSetExplosion[] = {"DS_Ex_heavy_arty_SoundSet","DS_exploSmall_Tail_placeholder_SoundSet"};
		soundSetSonicCrack[] = {"DS_bulletSonicCrack_SoundSet","DS_bulletSonicCrackTail_SoundSet"};
		soundFly[] = {"\tu_arty\sound\sound_fly",0.3,1.6,500};
	};
	class Flare_82mm_AMOS_White;
	class rhs_ammo_3WS23 : Flare_82mm_AMOS_White {
		airFriction = -0.000041;
		tu_arty_derivation = -0.267;
	};

	class Smoke_120mm_AMOS_White;
	class bn_152mm_53WD546U : bn_122mm_D4 {
		hit = 10;
		indirectHit = 7;
		indirectHitRange = 4;
		suppressionRadiusHit = 30;
		ace_frag_metal = 37900;   
		ace_frag_charge = 170;   
		ace_frag_gurney_c = 2440; 
		ace_frag_gurney_k = 1/2;  
		ace_frag_classes[]={"ACE_frag_medium","ACE_frag_medium_HD","ACE_frag_large","ACE_frag_large_HD","ACE_frag_huge","ACE_frag_huge"};
		ace_frag_force=1;
		simulation = "shotShell";
		airFriction = -0.000041;
		tu_arty_derivation = -0.267;
		tu_arty_smokeVelocity = 17;
		tu_arty_smokeCount[] = {4,4,1};
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	//bm21
	class rhs_mag_40Rnd_122mm_rockets : VehicleMagazine
	{
		initspeed = 690;
		muzzleImpulseFactor = 0.15;
	};
	
	class 32Rnd_155mm_Mo_shells;
	//2s3 152mm
	class rhs_mag_HE_2a33: 32Rnd_155mm_Mo_shells
	{
		//ammo = "rhs_ammo_3WOF27";
		initSpeed = 560;
		muzzleImpulseFactor = 2;
	};
	//class rhs_mag_HE_2a33_26: rhs_mag_HE_2a33
	//{
	//	count = 26;
	//};
	
	class rhs_mag_WP_2a33: rhs_mag_HE_2a33
	{
		//ammo = "rhs_ammo_152_WP";
		initSpeed = 560;
	};
	
	class rhs_mag_Atomic_2a33: rhs_mag_HE_2a33
	{
		//ammo = "rhs_ammo_3WB3";
		initSpeed = 560;
	};
	
	class rhs_mag_LASER_2a33: rhs_mag_HE_2a33
	{
		//ammo = "rhs_ammo_3WOF93";
		initSpeed = 560;
	};
	
	class rhs_mag_SMOKE_2a33: rhs_mag_HE_2a33
	{
		ammo = "bn_152mm_53WD546U";
		initSpeed = 560;
	};
	
	class rhs_mag_ILLUM_2a33: rhs_mag_HE_2a33
	{
		//ammo = "rhs_ammo_3WS23";
		initSpeed = 560;
	};
	
	class 8Rnd_82mm_Mo_shells;
	class bn_82mm_shell_0: 8Rnd_82mm_Mo_shells {
		count = 1;
		ammo = "bn_82mm_shell";
		initSpeed = 75;
		//model = "\tu_arty\data\ace_arty_82mm_he_shell"; //"\tu_arty\data\ace_arty_82mm_smoke_shell";
		model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he.p3d";
		picture = "\tu_arty\data\equip\82mm_shell_0";
		displayName = "82-мм ОФ мина, заряд основной";
		tu_arty_availableCharges[] = {"bn_82mm_shell_1","bn_82mm_shell_2","bn_82mm_shell_3","bn_82mm_shell_4"};
		tu_arty_chargeName = "основной";
		allowedslots[] = {901};
		mass = 40;
        displayNameShort = "ОФ, основной";
	};
	class bn_82mm_shell_1: bn_82mm_shell_0 {
		initSpeed = 130;
		model = "\rhsusf\addons\rhsusf_m252\rhs_m821_he.p3d";
		displayName = "82-мм ОФ мина, заряд 1-й";
		picture = "\tu_arty\data\equip\82mm_shell_1";
		tu_arty_base_charge = "bn_82mm_shell_0";
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_82mm_shell_0","bn_82mm_shell_2","bn_82mm_shell_3","bn_82mm_shell_4"};
        displayNameShort = "ОФ, 1-й";
	};
	class bn_82mm_shell_2: bn_82mm_shell_0 {
		initSpeed = 170;
		displayName = "82-мм ОФ мина, заряд 2-й";
		picture = "\tu_arty\data\equip\82mm_shell_2";
		tu_arty_base_charge = "bn_82mm_shell_0";
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_82mm_shell_0","bn_82mm_shell_1","bn_82mm_shell_3","bn_82mm_shell_4"};
        displayNameShort = "ОФ, 2-й";
	};
	class bn_82mm_shell_3: bn_82mm_shell_0 {
		initSpeed = 205;
		displayName = "82-мм ОФ мина, заряд 3-й";
		picture = "\tu_arty\data\equip\82mm_shell_3";
		tu_arty_base_charge = "bn_82mm_shell_0";
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_82mm_shell_0","bn_82mm_shell_1","bn_82mm_shell_2","bn_82mm_shell_4"};
        displayNameShort = "ОФ, 3-й";
	};
	class bn_82mm_shell_4: bn_82mm_shell_0 {
		initSpeed = 242;
		displayName = "82-мм ОФ мина, заряд дальнобойный";
		picture = "\tu_arty\data\equip\82mm_shell_4";
		tu_arty_base_charge = "bn_82mm_shell_0";
		tu_arty_chargeName = "дальнобойный";
		tu_arty_availableCharges[] = {"bn_82mm_shell_1","bn_82mm_shell_2","bn_82mm_shell_3","bn_82mm_shell_0"};
        displayNameShort = "ОФ, дальнобойный";
	};
// дым 82 мм	
	class bn_82mm_smoke_0: bn_82mm_shell_0 {
		ammo = "bn_82mm_smoke";
		displayName = "82-мм дымовая мина, заряд основной";
		model = "\tu_arty\82mm\82mm_wp_m74\82mm_wp_m74_0.p3d";
		picture = "\tu_arty\data\equip\82mm_WP";
		tu_arty_effect = "Smoke";
		tu_arty_availableCharges[] = {"bn_82mm_smoke_1","bn_82mm_smoke_2","bn_82mm_smoke_3","bn_82mm_smoke_4"};
        displayNameShort = "Д, основной";
	};
	class bn_82mm_smoke_1: bn_82mm_shell_1 {
		ammo = "bn_82mm_smoke";
		displayName = "82-мм дымовая мина, заряд 1-й";
		model = "\tu_arty\82mm\82mm_wp_m74\82mm_wp_m74_1.p3d";
		picture = "\tu_arty\data\equip\82mm_WP";
		tu_arty_effect = "Smoke";
		tu_arty_base_charge = "bn_82mm_smoke_0";
		tu_arty_availableCharges[] = {"bn_82mm_smoke_0","bn_82mm_smoke_2","bn_82mm_smoke_3","bn_82mm_smoke_4"};
        displayNameShort = "Д, 1-й";
	};
	class bn_82mm_smoke_2: bn_82mm_shell_2 {
		ammo = "bn_82mm_smoke";
		displayName = "82-мм дымовая мина, заряд 2-й";
		model = "\tu_arty\82mm\82mm_wp_m74\82mm_wp_m74_2.p3d";
		picture = "\tu_arty\data\equip\82mm_WP";
		tu_arty_effect = "Smoke";
		tu_arty_base_charge = "bn_82mm_smoke_0";
		tu_arty_availableCharges[] = {"bn_82mm_smoke_0","bn_82mm_smoke_1","bn_82mm_smoke_3","bn_82mm_smoke_4"};
        displayNameShort = "Д, 2-й";
	};
	class bn_82mm_smoke_3: bn_82mm_shell_3 {
		ammo = "bn_82mm_smoke";
		displayName = "82-мм дымовая мина, заряд 3-й";
		model = "\tu_arty\82mm\82mm_wp_m74\82mm_wp_m74_3.p3d";
		picture = "\tu_arty\data\equip\82mm_WP";
		tu_arty_effect = "Smoke";
		tu_arty_base_charge = "bn_82mm_smoke_0";
		tu_arty_availableCharges[] = {"bn_82mm_smoke_0","bn_82mm_smoke_1","bn_82mm_smoke_2","bn_82mm_smoke_4"};
        displayNameShort = "Д, 3-й";
	};
	class bn_82mm_smoke_4: bn_82mm_shell_4 {
		ammo = "bn_82mm_smoke";
		displayName = "82-мм дымовая мина, заряд дальнобойный";
		model = "\tu_arty\82mm\82mm_wp_m74\82mm_wp_m74_4.p3d";
		picture = "\tu_arty\data\equip\82mm_WP";
		tu_arty_effect = "Smoke";
		tu_arty_base_charge = "bn_82mm_smoke_0";
		tu_arty_availableCharges[] = {"bn_82mm_smoke_1","bn_82mm_smoke_2","bn_82mm_smoke_3","bn_82mm_smoke_0"};
        displayNameShort = "Д, дальнобойный";
	};

	// 81 мм	
	
	class bn_81mm_shell_0: bn_82mm_shell_0 {
		count = 1;
		ammo = "bn_81mm_shell_frag";
		initSpeed = 71;
		model = "\tu_arty\81mm\HE_m821a2\HE_m821a2_0.p3d";
		picture = "\tu_arty\data\equip\81mm_HE";
		displayName = "81-мм оск. мина, заряд 0, IMP";
		tu_arty_availableCharges[] = {"bn_81mm_shell_prx_0","bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
		tu_arty_chargeName = "#0, IMP";
		allowedslots[] = {901};
		mass = 30;
        displayNameShort = "ОФ, #0, IMP";
	};
	class bn_81mm_shell_1: bn_81mm_shell_0 {
		initSpeed = 154;
		model = "\tu_arty\81mm\HE_m821a2\HE_m821a2_1.p3d";
		displayName = "81-мм оск. мина, заряд 1, IMP";
		picture = "\tu_arty\data\equip\81mm_HE";
		tu_arty_base_charge = "bn_81mm_shell_0";
		tu_arty_chargeName = "#1, IMP";
		tu_arty_availableCharges[] = {"bn_81mm_shell_0","bn_81mm_shell_prx_0","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
        displayNameShort = "ОФ, #1, IMP";
	};
	class bn_81mm_shell_2: bn_81mm_shell_0 {
		initSpeed = 210;
		model = "\tu_arty\81mm\HE_m821a2\HE_m821a2_2.p3d";
		displayName = "81-мм оск. мина, заряд 2, IMP";
		picture = "\tu_arty\data\equip\81mm_HE";
		tu_arty_base_charge = "bn_81mm_shell_0";
		tu_arty_chargeName = "#2, IMP";
		tu_arty_availableCharges[] = {"bn_81mm_shell_0","bn_81mm_shell_prx_0","bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
	    displayNameShort = "ОФ, #2, IMP";
	};
	class bn_81mm_shell_3: bn_81mm_shell_0 {
		initSpeed = 259;
		model = "\tu_arty\81mm\HE_m821a2\HE_m821a2_3.p3d";
		displayName = "81-мм оск. мина, заряд 3, IMP";
		picture = "\tu_arty\data\equip\81mm_HE";
		tu_arty_base_charge = "bn_81mm_shell_0";
		tu_arty_chargeName = "#3, IMP";
		tu_arty_availableCharges[] = {"bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_4","bn_81mm_shell_prx_4","bn_81mm_shell_0","bn_81mm_shell_prx_0"};
	    displayNameShort = "ОФ, #3, IMP";
	};
	class bn_81mm_shell_4: bn_81mm_shell_0 {
		initSpeed = 297;
		model = "\tu_arty\81mm\HE_m821a2\HE_m821a2_4.p3d";
		displayName = "81-мм оск. мина, заряд 4, IMP";
		picture = "\tu_arty\data\equip\81mm_HE";
		tu_arty_base_charge = "bn_81mm_shell_0";
		tu_arty_chargeName = "#4, IMP";
		tu_arty_availableCharges[] = {"bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_0","bn_81mm_shell_prx_0"};
	    displayNameShort = "ОФ, #4, IMP";
	};
	
	// PROXIMITY BURST
	
	class bn_81mm_shell_prx_0: bn_81mm_shell_0 {
		ammo = "bn_81mm_frag_prx";
		displayName = "81-мм оск. мина, заряд 0, PRX";
		tu_arty_availableCharges[] = {"bn_81mm_shell_0","bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
		tu_arty_chargeName = "#0 PRX";
	    displayNameShort = "ОФ, #0, PRX";
		picture = "\tu_arty\data\equip\81mm_HE";
	};
	class bn_81mm_shell_prx_1: bn_81mm_shell_1 {
		displayName = "81-мм оск. мина, заряд 1, PRX";
		ammo = "bn_81mm_frag_prx";
		tu_arty_base_charge = "bn_81mm_shell_prx_0";
		tu_arty_chargeName = "#1 PRX";
		tu_arty_availableCharges[] = {"bn_81mm_shell_0","bn_81mm_shell_prx_0","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
	    displayNameShort = "ОФ, #1, PRX";
		picture = "\tu_arty\data\equip\81mm_HE";
	};
	class bn_81mm_shell_prx_2: bn_81mm_shell_2 {
		ammo = "bn_81mm_frag_prx";
		displayName = "81-мм оск. мина, заряд 2, PRX";
		tu_arty_base_charge = "bn_81mm_shell_prx_0";
		tu_arty_chargeName = "#2 PRX";
		tu_arty_availableCharges[] = {"bn_81mm_shell_0","bn_81mm_shell_prx_0","bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_4","bn_81mm_shell_prx_4"};
	    displayNameShort = "ОФ, #2, PRX";
		picture = "\tu_arty\data\equip\81mm_HE";
	};
	class bn_81mm_shell_prx_3: bn_81mm_shell_3 {
		ammo = "bn_81mm_frag_prx";
		displayName = "81-мм оск. мина, заряд 3, PRX";
		tu_arty_base_charge = "bn_81mm_shell_prx_0";
		tu_arty_chargeName = "#3 PRX";
		tu_arty_availableCharges[] = {"bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_4","bn_81mm_shell_prx_4","bn_81mm_shell_0","bn_81mm_shell_prx_0"};
	    displayNameShort = "ОФ, #3, PRX";
		picture = "\tu_arty\data\equip\81mm_HE";
	};
	class bn_81mm_shell_prx_4: bn_81mm_shell_4 {
		ammo = "bn_81mm_frag_prx";
		displayName = "81-мм оск. мина, заряд 4, PRX";
		tu_arty_base_charge = "bn_81mm_shell_prx_0";
		tu_arty_chargeName = "#4 PRX";
		tu_arty_availableCharges[] = {"bn_81mm_shell_1","bn_81mm_shell_prx_1","bn_81mm_shell_2","bn_81mm_shell_prx_2","bn_81mm_shell_3","bn_81mm_shell_prx_3","bn_81mm_shell_0","bn_81mm_shell_prx_0"};
	    displayNameShort = "ОФ, #4, PRX";
		picture = "\tu_arty\data\equip\81mm_HE";
	};
	
	// SMOKE
	
	class bn_81mm_smoke_0: bn_81mm_shell_0 {
		count = 1;
		model = "\tu_arty\81mm\WP_m375a3\WP_m375a3_0.p3d";
		displayName = "81-мм дымовая мина, заряд 0";
		ammo = "bn_81mm_smoke";
		tu_arty_availableCharges[] = {"bn_81mm_smoke_1","bn_81mm_smoke_2","bn_81mm_smoke_3","bn_81mm_smoke_4"};
		tu_arty_chargeName = "#0";
	    displayNameShort = "Д, #0";
		picture = "\tu_arty\data\equip\81mm_WP";
	};

	class bn_81mm_smoke_1: bn_81mm_shell_1 {
		ammo = "bn_81mm_smoke";
		model = "\tu_arty\81mm\WP_m375a3\WP_m375a3_1.p3d";
		displayName = "81-мм дымовая мина, заряд 1";
		picture = "\tu_arty\data\equip\81mm_WP";
		tu_arty_base_charge = "bn_81mm_smoke_0";
		tu_arty_chargeName = "#1";
		tu_arty_availableCharges[] = {"bn_81mm_smoke_0","bn_81mm_smoke_2","bn_81mm_smoke_3","bn_81mm_smoke_4"};
	    displayNameShort = "Д, #1";
	};
	class bn_81mm_smoke_2: bn_81mm_shell_2 {
		ammo = "bn_81mm_smoke";
		displayName = "81-мм дымовая мина, заряд 2";
		picture = "\tu_arty\data\equip\81mm_WP";
		model = "\tu_arty\81mm\WP_m375a3\WP_m375a3_2.p3d";
		tu_arty_base_charge = "bn_81mm_smoke_0";
		tu_arty_chargeName = "#2";
		tu_arty_availableCharges[] = {"bn_81mm_smoke_0","bn_81mm_smoke_1","bn_81mm_smoke_3","bn_81mm_smoke_4"};
	    displayNameShort = "Д, #2";
	};
	class bn_81mm_smoke_3: bn_81mm_shell_3 {
		ammo = "bn_81mm_smoke";
		displayName = "81-мм дымовая мина, заряд 3";
		model = "\tu_arty\81mm\WP_m375a3\WP_m375a3_3.p3d";
		picture = "\tu_arty\data\equip\81mm_WP";
		tu_arty_base_charge = "bn_81mm_smoke_0";
		tu_arty_chargeName = "#3";
		tu_arty_availableCharges[] = {"bn_81mm_smoke_0","bn_81mm_smoke_1","bn_81mm_smoke_2","bn_81mm_smoke_4"};
	    displayNameShort = "Д, #3";
	};
	class bn_81mm_smoke_4: bn_81mm_shell_4 {
		ammo = "bn_81mm_smoke";
		displayName = "81-мм дымовая мина, заряд 4";
		model = "\tu_arty\81mm\WP_m375a3\WP_m375a3_4.p3d";
		picture = "\tu_arty\data\equip\81mm_WP";
		tu_arty_base_charge = "bn_81mm_smoke_0";
		tu_arty_chargeName = "#4";
		tu_arty_availableCharges[] = {"bn_81mm_smoke_0","bn_81mm_smoke_1","bn_81mm_smoke_2","bn_81mm_smoke_3"};
	    displayNameShort = "Д, #4";
	};

	// 60 мм	
	
	class bn_60mm_shell_0: bn_82mm_shell_0 {
		count = 1;
		ammo = "bn_60mm_shell_frag";
		initSpeed = 65;
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_0.p3d";
		picture = "\tu_arty\data\equip\60mm_HE";
		displayName = "60-мм оск. мина, заряд 0, IMP";
		tu_arty_availableCharges[] = {"bn_60mm_shell_prx_0","bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
		tu_arty_chargeName = "#0, IMP";
		allowedslots[] = {901};
		mass = 30;
        displayNameShort = "ОФ, #0, IMP";
	};
	class bn_60mm_shell_1: bn_60mm_shell_0 {
		initSpeed = 123;
		displayName = "60-мм оск. мина, заряд 1, IMP";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_1.p3d";
		picture = "\tu_arty\data\equip\60mm_HE";
		tu_arty_base_charge = "bn_60mm_shell_0";
		tu_arty_chargeName = "#1, IMP";
		tu_arty_availableCharges[] = {"bn_60mm_shell_0","bn_60mm_shell_prx_0","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
        displayNameShort = "ОФ, #1, IMP";
	};
	class bn_60mm_shell_2: bn_60mm_shell_0 {
		initSpeed = 165;
		displayName = "60-мм оск. мина, заряд 2, IMP";
		picture = "\tu_arty\data\equip\60mm_HE";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_2.p3d";
		tu_arty_base_charge = "bn_60mm_shell_0";
		tu_arty_chargeName = "#2, IMP";
		tu_arty_availableCharges[] = {"bn_60mm_shell_0","bn_60mm_shell_prx_0","bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
	    displayNameShort = "ОФ, #2, IMP";
	};
	class bn_60mm_shell_3: bn_60mm_shell_0 {
		initSpeed = 199;
		displayName = "60-мм оск. мина, заряд 3, IMP";
		picture = "\tu_arty\data\equip\60mm_HE";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_3.p3d";
		tu_arty_base_charge = "bn_60mm_shell_0";
		tu_arty_chargeName = "#3, IMP";
		tu_arty_availableCharges[] = {"bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_4","bn_60mm_shell_prx_4","bn_60mm_shell_0","bn_60mm_shell_prx_0"};
	    displayNameShort = "ОФ, #3, IMP";
	};
	class bn_60mm_shell_4: bn_60mm_shell_0 {
		initSpeed = 234;
		displayName = "60-мм оск. мина, заряд 4, IMP";
		picture = "\tu_arty\data\equip\60mm_HE";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_4.p3d";
		tu_arty_base_charge = "bn_60mm_shell_0";
		tu_arty_chargeName = "#4, IMP";
		tu_arty_availableCharges[] = {"bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_0","bn_60mm_shell_prx_0"};
	    displayNameShort = "ОФ, #4, IMP";
	};
	
	// PROXIMITY BURST
	
	class bn_60mm_shell_prx_0: bn_60mm_shell_0 {
		ammo = "bn_60mm_frag_prx";
		displayName = "60-мм оск. мина, заряд 0, PRX";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_0.p3d";
		tu_arty_availableCharges[] = {"bn_60mm_shell_0","bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
		tu_arty_chargeName = "#0 PRX";
	    displayNameShort = "ОФ, #0, PRX";
	};
	class bn_60mm_shell_prx_1: bn_60mm_shell_1 {
		displayName = "60-мм оск. мина, заряд 1, PRX";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_1.p3d";
		ammo = "bn_60mm_frag_prx";
		tu_arty_base_charge = "bn_60mm_shell_prx_0";
		tu_arty_chargeName = "#1 PRX";
		tu_arty_availableCharges[] = {"bn_60mm_shell_0","bn_60mm_shell_prx_0","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
	    displayNameShort = "ОФ, #1, PRX";
	};
	class bn_60mm_shell_prx_2: bn_60mm_shell_2 {
		ammo = "bn_60mm_frag_prx";
		displayName = "60-мм оск. мина, заряд 2, PRX";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_2.p3d";
		tu_arty_base_charge = "bn_60mm_shell_prx_0";
		tu_arty_chargeName = "#2 PRX";
		tu_arty_availableCharges[] = {"bn_60mm_shell_0","bn_60mm_shell_prx_0","bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_4","bn_60mm_shell_prx_4"};
	    displayNameShort = "ОФ, #2, PRX";
	};
	class bn_60mm_shell_prx_3: bn_60mm_shell_3 {
		ammo = "bn_60mm_frag_prx";
		displayName = "60-мм оск. мина, заряд 3, PRX";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_3.p3d";
		tu_arty_base_charge = "bn_60mm_shell_prx_0";
		tu_arty_chargeName = "#3 PRX";
		tu_arty_availableCharges[] = {"bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_4","bn_60mm_shell_prx_4","bn_60mm_shell_0","bn_60mm_shell_prx_0"};
	    displayNameShort = "ОФ, #3, PRX";
	};
	class bn_60mm_shell_prx_4: bn_60mm_shell_4 {
		ammo = "bn_60mm_frag_prx";
		displayName = "60-мм оск. мина, заряд 4, PRX";
		model = "\tu_arty\60mm\he_m720a1\he_m720a1_4.p3d";
		tu_arty_base_charge = "bn_60mm_shell_prx_0";
		tu_arty_chargeName = "#4 PRX";
		tu_arty_availableCharges[] = {"bn_60mm_shell_1","bn_60mm_shell_prx_1","bn_60mm_shell_2","bn_60mm_shell_prx_2","bn_60mm_shell_3","bn_60mm_shell_prx_3","bn_60mm_shell_0","bn_60mm_shell_prx_0"};
	    displayNameShort = "ОФ, #4, PRX";
	};
	
	// SMOKE
	
	class bn_60mm_smoke_0: bn_60mm_shell_0 {
		count = 1;
		displayName = "60-мм дымовая мина, заряд 0";
		picture = "\tu_arty\data\equip\60mm_WP";
		ammo = "bn_60mm_smoke";
		model = "\tu_arty\60mm\wp_m722a1\wp_m722a1_0.p3d";
		tu_arty_availableCharges[] = {"bn_60mm_smoke_1","bn_60mm_smoke_2","bn_60mm_smoke_3","bn_60mm_smoke_4"};
		tu_arty_chargeName = "#0";
	    displayNameShort = "Д, #0";
	};

	class bn_60mm_smoke_1: bn_60mm_shell_1 {
		ammo = "bn_60mm_smoke";
		displayName = "60-мм дымовая мина, заряд 1";
		picture = "\tu_arty\data\equip\60mm_WP";
		model = "\tu_arty\60mm\wp_m722a1\wp_m722a1_1.p3d";
		tu_arty_base_charge = "bn_60mm_smoke_0";
		tu_arty_chargeName = "#1";
		tu_arty_availableCharges[] = {"bn_60mm_smoke_0","bn_60mm_smoke_2","bn_60mm_smoke_3","bn_60mm_smoke_4"};
	    displayNameShort = "Д, #1";
	};
	class bn_60mm_smoke_2: bn_60mm_shell_2 {
		ammo = "bn_60mm_smoke";
		displayName = "60-мм дымовая мина, заряд 2";
		picture = "\tu_arty\data\equip\60mm_WP";
		model = "\tu_arty\60mm\wp_m722a1\wp_m722a1_2.p3d";
		tu_arty_base_charge = "bn_60mm_smoke_0";
		tu_arty_chargeName = "#2";
		tu_arty_availableCharges[] = {"bn_60mm_smoke_0","bn_60mm_smoke_1","bn_60mm_smoke_3","bn_60mm_smoke_4"};
	    displayNameShort = "Д, #2";
	};
	class bn_60mm_smoke_3: bn_60mm_shell_3 {
		ammo = "bn_60mm_smoke";
		displayName = "60-мм дымовая мина, заряд 3";
		model = "\tu_arty\60mm\wp_m722a1\wp_m722a1_3.p3d";
		picture = "\tu_arty\data\equip\60mm_WP";
		tu_arty_base_charge = "bn_60mm_smoke_0";
		tu_arty_chargeName = "#3";
		tu_arty_availableCharges[] = {"bn_60mm_smoke_0","bn_60mm_smoke_1","bn_60mm_smoke_2","bn_60mm_smoke_4"};
	    displayNameShort = "Д, #3";
	};
	class bn_60mm_smoke_4: bn_60mm_shell_4 {
		ammo = "bn_60mm_smoke";
		displayName = "60-мм дымовая мина, заряд 4";
		model = "\tu_arty\60mm\wp_m722a1\wp_m722a1_4.p3d";
		picture = "\tu_arty\data\equip\60mm_WP";
		tu_arty_base_charge = "bn_60mm_smoke_0";
		tu_arty_chargeName = "#4";
		tu_arty_availableCharges[] = {"bn_60mm_smoke_0","bn_60mm_smoke_1","bn_60mm_smoke_2","bn_60mm_smoke_3"};
	    displayNameShort = "Д, #4";
	};
	
// 120 мм

	class bn_120mm_shell_0: bn_82mm_shell_0 {
		count = 1;
		ammo = "bn_120mm_shell";
		initSpeed = 120;
		model = "\tu_arty\120mm\HE_dm11\HE_dm11_0.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 1";
		tu_arty_availableCharges[] = {"bn_120mm_shell_1","bn_120mm_shell_2","bn_120mm_shell_3","bn_120mm_shell_4","bn_120mm_shell_5"};
		tu_arty_chargeName = "№1";
		allowedslots[] = {901};
		mass = 80;
	    displayNameShort = "HE Charge 1";
	};
	class bn_120mm_shell_1: bn_120mm_shell_0 {
		initSpeed = 160;
		model = "\tu_arty\120mm\HE_dm11\HE_dm11_1.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 2";
		tu_arty_base_charge = "bn_120mm_shell_0";
		tu_arty_chargeName = "№2";
		tu_arty_availableCharges[] = {"bn_120mm_shell_0","bn_120mm_shell_2","bn_120mm_shell_3","bn_120mm_shell_4","bn_120mm_shell_5"};
	    displayNameShort = "HE Charge 2";
	};
	class bn_120mm_shell_2: bn_120mm_shell_0 {
		initSpeed = 190;
		model = "\tu_arty\120mm\HE_dm11\HE_dm11_2.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 3";
		tu_arty_base_charge = "bn_120mm_shell_0";
		tu_arty_chargeName = "№3";
		tu_arty_availableCharges[] = {"bn_120mm_shell_0","bn_120mm_shell_1","bn_120mm_shell_3","bn_120mm_shell_4","bn_120mm_shell_5"};
	    displayNameShort = "HE Charge 3";
	};
	class bn_120mm_shell_3: bn_120mm_shell_0 {
		initSpeed = 218;
		 model = "\tu_arty\120mm\HE_dm11\HE_dm11_3.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 4";
		tu_arty_base_charge = "bn_120mm_shell_0";
		tu_arty_chargeName = "№4";
		tu_arty_availableCharges[] = {"bn_120mm_shell_0","bn_120mm_shell_1","bn_120mm_shell_2","bn_120mm_shell_4","bn_120mm_shell_5"};
	   displayNameShort = "HE Charge 4";
	};
	class bn_120mm_shell_4: bn_120mm_shell_0 {
		initSpeed = 244;
		model = "\tu_arty\120mm\HE_dm11\HE_dm11_4.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 5";
		tu_arty_base_charge = "bn_120mm_shell_0";
		tu_arty_chargeName = "№5";
		tu_arty_availableCharges[] = {"bn_120mm_shell_0","bn_120mm_shell_1","bn_120mm_shell_2","bn_120mm_shell_3","bn_120mm_shell_5"};
	    displayNameShort = "HE Charge 5";
	};
	class bn_120mm_shell_5: bn_120mm_shell_0 {
		initSpeed = 266;
		model = "\tu_arty\120mm\HE_dm11\HE_dm11_5.p3d";
		picture = "\tu_arty\data\equip\120mm_HE";
		displayName = "120mm HE CHarge 6";
		tu_arty_base_charge = "bn_120mm_shell_0";
		tu_arty_chargeName = "№6";
		tu_arty_availableCharges[] = {"bn_120mm_shell_0","bn_120mm_shell_1","bn_120mm_shell_2","bn_120mm_shell_3","bn_120mm_shell_4"};
	    displayNameShort = "HE Charge 6";
	};
	
	//120 mm smoke
	
	class bn_120mm_smoke_0: bn_120mm_shell_0 {
		count = 1;
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 1";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_0.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_1","bn_120mm_smoke_2","bn_120mm_smoke_3","bn_120mm_smoke_4","bn_120mm_smoke_5"};
		tu_arty_chargeName = "№1";
	    displayNameShort = "Smoke Charge 1";
	};

	class bn_120mm_smoke_1: bn_120mm_shell_1 {
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 2";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_1.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_base_charge = "bn_120mm_smoke_0";
		tu_arty_chargeName = "№2";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_0","bn_120mm_smoke_2","bn_120mm_smoke_3","bn_120mm_smoke_4","bn_120mm_smoke_5"};
	    displayNameShort = "Smoke Charge 2";
	};
	class bn_120mm_smoke_2: bn_120mm_shell_2 {
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 3";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_2.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_base_charge = "bn_120mm_smoke_0";
		tu_arty_chargeName = "№3";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_1","bn_120mm_smoke_0","bn_120mm_smoke_3","bn_120mm_smoke_4","bn_120mm_smoke_5"};
	    displayNameShort = "Smoke Charge 3";
	};
	class bn_120mm_smoke_3: bn_120mm_shell_3 {
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 4";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_3.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_base_charge = "bn_120mm_smoke_0";
		tu_arty_chargeName = "№4";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_1","bn_120mm_smoke_2","bn_120mm_smoke_0","bn_120mm_smoke_4","bn_120mm_smoke_5"};
	    displayNameShort = "Smoke Charge 4";
	};
	class bn_120mm_smoke_4: bn_120mm_shell_4 {
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 5";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_4.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_base_charge = "bn_120mm_smoke_0";
		tu_arty_chargeName = "№5";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_1","bn_120mm_smoke_2","bn_120mm_smoke_3","bn_120mm_smoke_0","bn_120mm_smoke_5"};
	    displayNameShort = "Smoke Charge 5";
	};
	class bn_120mm_smoke_5: bn_120mm_shell_5 {
		ammo = "bn_120mm_smoke";
		displayName = "120mm Smoke Charge 6";
		model = "\tu_arty\120mm\WP_DM35\wp_dm35_5.p3d";
		picture = "\tu_arty\data\equip\120mm_WP";
		tu_arty_base_charge = "bn_120mm_smoke_0";
		tu_arty_chargeName = "№6";
		tu_arty_availableCharges[] = {"bn_120mm_smoke_1","bn_120mm_smoke_2","bn_120mm_smoke_3","bn_120mm_smoke_0","bn_120mm_smoke_4"};
	    displayNameShort = "Smoke Charge 6";
	};
	
	
	class bn_82mm_frag_0: bn_82mm_shell_0 {
		count = 1;
		ammo = "bn_82mm_shell";
		initSpeed = 75;
		//model = "\tu_arty\data\ace_arty_82mm_he_shell"; //"\tu_arty\data\ace_arty_82mm_smoke_shell";
		model = "\tu_arty\82mm\82mm_HE_m74\82mm_he_m74_0.p3d";
		picture = "\tu_arty\data\equip\82mm_HE";
		displayName = "82-мм оск. мина, заряд основной";
		tu_arty_availableCharges[] = {"bn_82mm_frag_1","bn_82mm_frag_2","bn_82mm_frag_3","bn_82mm_frag_4"};
		tu_arty_chargeName = "основной";
		allowedslots[] = {901};
		mass = 40;
	    displayNameShort = "О, основной";
	};
	class bn_82mm_frag_1: bn_82mm_frag_0 {
		initSpeed = 130;
		displayName = "82-мм оск. мина, заряд 1-й";
		model = "\tu_arty\82mm\82mm_HE_m74\82mm_he_m74_1.p3d";
		picture = "\tu_arty\data\equip\82mm_HE";
		tu_arty_base_charge = "bn_82mm_frag_0";
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_82mm_frag_0","bn_82mm_frag_2","bn_82mm_frag_3","bn_82mm_frag_4"};
	    displayNameShort = "О, 1-й";
	};
	class bn_82mm_frag_2: bn_82mm_frag_0 {
		initSpeed = 170;
		displayName = "82-мм оск. мина, заряд 2-й";
		model = "\tu_arty\82mm\82mm_HE_m74\82mm_he_m74_2.p3d";
		picture = "\tu_arty\data\equip\82mm_HE";
		tu_arty_base_charge = "bn_82mm_frag_0";
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_82mm_frag_1","bn_82mm_frag_0","bn_82mm_frag_3","bn_82mm_frag_4"};
	    displayNameShort = "О, 2-й";
	};
	class bn_82mm_frag_3: bn_82mm_frag_0 {
		initSpeed = 205;
		displayName = "82-мм оск. мина, заряд 3-й";
		model = "\tu_arty\82mm\82mm_HE_m74\82mm_he_m74_3.p3d";
		picture = "\tu_arty\data\equip\82mm_HE";
		tu_arty_base_charge = "bn_82mm_frag_0";
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_82mm_frag_1","bn_82mm_frag_2","bn_82mm_frag_0","bn_82mm_frag_4"};
	    displayNameShort = "О, 3-й";
	};
	class bn_82mm_frag_4: bn_82mm_frag_0 {
		initSpeed = 242;
		displayName = "82-мм оск. мина, заряд дальнобойный";
		model = "\tu_arty\82mm\82mm_HE_m74\82mm_he_m74_4.p3d";
		picture = "\tu_arty\data\equip\82mm_HE";
		tu_arty_base_charge = "bn_82mm_frag_0";
		tu_arty_chargeName = "дальнобойный";
		tu_arty_availableCharges[] = {"bn_82mm_frag_1","bn_82mm_frag_2","bn_82mm_frag_3","bn_82mm_frag_0"};
	    displayNameShort = "О, дальнобойный";
	};
	
// illumination
	class bn_82mm_illum_0: bn_82mm_shell_0 {
		ammo = "bn_82mm_illum";
		displayName = "82-мм осветительная мина, заряд основной";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_82mm_illum_1","bn_82mm_illum_3","bn_82mm_illum_2","bn_82mm_illum_4"};
	    displayNameShort = "С, основной";
	};
	
	class bn_82mm_illum_1: bn_82mm_shell_1 {
		ammo = "bn_82mm_illum";
		displayName = "82-мм осветительная мина, заряд 1-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_1.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_82mm_illum_0","bn_82mm_illum_2","bn_82mm_illum_4","bn_82mm_illum_3"};
		tu_arty_base_charge = "bn_82mm_illum_0";
	    displayNameShort = "С, 1-й";
	};
	
	class bn_82mm_illum_2: bn_82mm_shell_2 {
		ammo = "bn_82mm_illum";
		displayName = "82-мм осветительная мина, заряд 2-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_2.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_82mm_illum_0","bn_82mm_illum_1","bn_82mm_illum_4","bn_82mm_illum_3"};
		tu_arty_base_charge = "bn_82mm_illum_0";
	    displayNameShort = "С, 2-й";
	};
	
	class bn_82mm_illum_3: bn_82mm_shell_3 {
		ammo = "bn_82mm_illum";
		displayName = "82-мм осветительная мина, заряд 3-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_3.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_82mm_illum_0","bn_82mm_illum_1","bn_82mm_illum_2","bn_82mm_illum_4"};
		tu_arty_base_charge = "bn_82mm_illum_0";
	    displayNameShort = "С, 3-й";
	};
	
	class bn_82mm_illum_4: bn_82mm_shell_4 {
		ammo = "bn_82mm_illum";
		displayName = "82-мм осветительная мина, заряд дальнобойный";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_4.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_82mm_illum_0","bn_82mm_illum_1","bn_82mm_illum_2","bn_82mm_illum_3"};
		tu_arty_base_charge = "bn_82mm_illum_0";
	    displayNameShort = "С, дальнобойный";
	};
	

	class bn_81mm_illum_0: bn_81mm_shell_0 {
		ammo = "bn_81mm_illum";
		displayName = "81-мм осветительная мина, заряд 0-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_81mm_illum_1","bn_81mm_illum_2","bn_81mm_illum_3","bn_81mm_illum_4"};
	    displayNameShort = "С, #0";
	};
	
	class bn_81mm_illum_1: bn_81mm_shell_1 {
		ammo = "bn_81mm_illum";
		displayName = "81-мм осветительная мина, заряд 1-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_81mm_illum_0","bn_81mm_illum_2","bn_81mm_illum_4","bn_81mm_illum_3"};
		tu_arty_base_charge = "bn_81mm_illum_0";
	    displayNameShort = "С, #1";
	};
	
	class bn_81mm_illum_2: bn_81mm_shell_2 {
		ammo = "bn_81mm_illum";
		displayName = "81-мм осветительная мина, заряд 2-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_81mm_illum_0","bn_81mm_illum_1","bn_81mm_illum_3","bn_81mm_illum_4"};
		tu_arty_base_charge = "bn_81mm_illum_0";
	    displayNameShort = "С, #2";
	};
	
	class bn_81mm_illum_3: bn_81mm_shell_3 {
		ammo = "bn_81mm_illum";
		displayName = "81-мм осветительная мина, заряд 3-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_81mm_illum_0","bn_81mm_illum_1","bn_81mm_illum_2","bn_81mm_illum_4"};
		tu_arty_base_charge = "bn_81mm_illum_0";
	    displayNameShort = "С, #3";
	};
	
	class bn_81mm_illum_4: bn_81mm_shell_4 {
		ammo = "bn_81mm_illum";
		displayName = "81-мм осветительная мина, заряд 4-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_81mm_illum_0","bn_81mm_illum_1","bn_81mm_illum_2","bn_81mm_illum_3"};
		tu_arty_base_charge = "bn_81mm_illum_0";
	    displayNameShort = "С, #4";
	};

	class bn_60mm_illum_0: bn_60mm_shell_0 {
		ammo = "bn_60mm_illum";
		displayName = "60-мм осветительная мина, заряд 0-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_60mm_illum_1","bn_60mm_illum_2","bn_60mm_illum_3","bn_60mm_illum_4"};
	    displayNameShort = "С, #0";
	};
	
	class bn_60mm_illum_1: bn_60mm_shell_1 {
		ammo = "bn_60mm_illum";
		displayName = "60-мм осветительная мина, заряд 1-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_60mm_illum_0","bn_60mm_illum_2","bn_60mm_illum_4","bn_60mm_illum_3"};
		tu_arty_base_charge = "bn_60mm_illum_0";
	    displayNameShort = "С, #1";
	};
	
	class bn_60mm_illum_2: bn_60mm_shell_2 {
		ammo = "bn_60mm_illum";
		displayName = "60-мм осветительная мина, заряд 2-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_60mm_illum_0","bn_60mm_illum_1","bn_60mm_illum_3","bn_60mm_illum_4"};
		tu_arty_base_charge = "bn_60mm_illum_0";
	    displayNameShort = "С, #2";
	};
	
	class bn_60mm_illum_3: bn_60mm_shell_3 {
		ammo = "bn_60mm_illum";
		displayName = "60-мм осветительная мина, заряд 3-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_60mm_illum_0","bn_60mm_illum_1","bn_60mm_illum_2","bn_60mm_illum_4"};
		tu_arty_base_charge = "bn_60mm_illum_0";
	    displayNameShort = "С, #3";
	};
	
	class bn_60mm_illum_4: bn_60mm_shell_4 {
		ammo = "bn_60mm_illum";
		displayName = "60-мм осветительная мина, заряд 4-й";
		model = "\tu_arty\data\ace_arty_82mm_smoke_shell";//"\A3\Weapons_F\Ammo\UGL_Flare";
		picture = "\tu_arty\data\equip\82mm_shell_0.paa";
		tu_arty_effect = "Illumination";
		tu_arty_availableCharges[] = {"bn_60mm_illum_0","bn_60mm_illum_1","bn_60mm_illum_2","bn_60mm_illum_3"};
		tu_arty_base_charge = "bn_60mm_illum_0";
	    displayNameShort = "С, #4";
	};
	
	// Д-30
	class rhs_mag_3vo18_10;	
	class bn_122mm_OF_462_0: rhs_mag_3vo18_10 {
		ammo = "bn_122mm_OF_462";
		initSpeed = 160; 
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 6-й";
		count=1;
		model = "\tu_arty\data\bn_122mm";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 120;
	    displayNameShort = "ОФ, 6-й";
		muzzleImpulseFactor = 0.1;
	};
	
	class bn_122mm_OF_462_1: bn_122mm_OF_462_0 {
		initSpeed = 210;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 5-й";
	    displayNameShort = "ОФ, 5-й";
	};
	
	class bn_122mm_OF_462_2: bn_122mm_OF_462_0 {
		initSpeed = 290;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 4-й";
	    displayNameShort = "ОФ, 4-й";
	};	
	
	class bn_122mm_OF_462_3: bn_122mm_OF_462_0 {
		initSpeed = 348;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 3-й";
	    displayNameShort = "ОФ, 3-й";
	};

	class bn_122mm_OF_462_4: bn_122mm_OF_462_0 {
		initSpeed = 400;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 2-й";
	    displayNameShort = "ОФ, 2-й";
	};

	class bn_122mm_OF_462_5: bn_122mm_OF_462_0 {
		initSpeed = 445;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд 1-й";
	    displayNameShort = "ОФ, 1-й";
	};

	class bn_122mm_OF_462_6: bn_122mm_OF_462_0 {
		initSpeed = 488;
		tu_arty_chargeName = "уменьш.";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_6","bn_122mm_OF_462_7"};
		displayName = "122-мм ОФ-462, заряд уменьш.";
	    displayNameShort = "ОФ, уменьш.";
	};

	class bn_122mm_OF_462_7: bn_122mm_OF_462_0 {
		initSpeed = 573;
		tu_arty_chargeName = "полный";
		tu_arty_availableCharges[] = {"bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6"};
		displayName = "122-мм ОФ-462, заряд полный";
	    displayNameShort = "ОФ, полный";
	};

	class bn_122mm_D4_0: bn_120mm_smoke_0 {
		ammo = "bn_122mm_D4";
		initSpeed = 160;
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 6-й";
		count=1;
		model = "\tu_arty\data\bn_122mm";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 120;
	    displayNameShort = "Д, 6-й";
		muzzleImpulseFactor = 0.1;
	};

	class bn_122mm_D4_1: bn_122mm_D4_0 {
		initSpeed = 210;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 5-й";
	    displayNameShort = "Д, 5-й";
	};
	
	class bn_122mm_D4_2: bn_122mm_D4_0 {
		initSpeed = 290;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 4-й";
	    displayNameShort = "Д, 4-й";
	};
	
	class bn_122mm_D4_3: bn_122mm_D4_0 {
		initSpeed = 348;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 3-й";
	    displayNameShort = "Д, 3-й";
	};

	class bn_122mm_D4_4: bn_122mm_D4_0 {
		initSpeed = 400;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 2-й";
	    displayNameShort = "Д, 2-й";
	};

	class bn_122mm_D4_5: bn_122mm_D4_0 {
		initSpeed = 445;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_6","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд 1-й";
	    displayNameShort = "Д, 1-й";
	};

	class bn_122mm_D4_6: bn_122mm_D4_0 {
		initSpeed = 488;
		tu_arty_chargeName = "уменьш.";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_7"};
		displayName = "122-мм дымовой снаряд, заряд уменьш.";
	    displayNameShort = "Д, уменьш.";
	};

	class bn_122mm_D4_7: bn_122mm_D4_0 {
		initSpeed = 573;
		tu_arty_chargeName = "полный";
		tu_arty_availableCharges[] = {"bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6"};
		displayName = "122-мм дымовой снаряд, заряд полный";
	    displayNameShort = "Д, полный";
	};
	
	class bn_122mm_BP1_0: bn_122mm_OF_462_0 {
		ammo = "bn_122mm_BP1";
		initSpeed = 740.0;
		tu_arty_chargeName = "специальный";
		tu_arty_availableCharges[] = {};
		displayName = "122-мм кумулятивный снаряд, заряд специальный";
		count=1;
		model = "\tu_arty\data\bn_122mm";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 120;
	    displayNameShort = "Кум, спец.";
	};
	
	class bn_122mm_S_463Zh_0: bn_122mm_OF_462_0 {
		ammo = "bn_122mm_S_463Zh";
		initSpeed = 160;
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 6-й";
		count=1;
		model = "\tu_arty\data\bn_122mm";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 80;
	    displayNameShort = "С, 6-й";
	};
	class bn_122mm_S_463Zh_1: bn_122mm_S_463Zh_0 {
		initSpeed = 210;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 5-й";
	    displayNameShort = "С, 5-й";
	};
	class bn_122mm_S_463Zh_2: bn_122mm_S_463Zh_0 {
		initSpeed = 290;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 4-й";
	    displayNameShort = "С, 4-й";
	};

	class bn_122mm_S_463Zh_3: bn_122mm_S_463Zh_0 {
		initSpeed = 348;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 3-й";
	    displayNameShort = "С, 3-й";
	};
	
	class bn_122mm_S_463Zh_4: bn_122mm_S_463Zh_0 {
		initSpeed = 400;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 2-й";
	    displayNameShort = "С, 2-й";
	};

	class bn_122mm_S_463Zh_5: bn_122mm_S_463Zh_0 {
		initSpeed = 445;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд 1-й";
	    displayNameShort = "С, 1-й";
	};

	class bn_122mm_S_463Zh_6: bn_122mm_S_463Zh_0 {
		initSpeed = 488;
		tu_arty_chargeName = "уменьш.";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_7"};
		displayName = "122-мм осветительный, заряд уменьш.";
	    displayNameShort = "С, уменьш.";
	};

	class bn_122mm_S_463Zh_7: bn_122mm_S_463Zh_0 {
		initSpeed = 573;
		tu_arty_chargeName = "полный";
		tu_arty_availableCharges[] = {"bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6"};
		displayName = "122-мм осветительный, заряд полный";
	    displayNameShort = "С, полный";
	};
	
	//M119
	class bn_105mm_OF_0: rhs_mag_3vo18_10 {
		ammo = "bn_105mm_OF";
		initSpeed = 150; 
		tu_arty_chargeName = "0-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 0-й";
		count=1;
		model = "\tu_arty\105mm\HE_m1\he_m1.p3d";
		picture = "\tu_arty\data\equip\105mm_HE";
		allowedslots[] = {901};
		mass = 90;
	    displayNameShort = "ОФ, 0-й";
		muzzleImpulseFactor = 0.1;
	};
	
	class bn_105mm_OF_1: bn_105mm_OF_0 {
		initSpeed = 200;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 1-й";
	    displayNameShort = "ОФ, 1-й";
	};
	
	class bn_105mm_OF_2: bn_105mm_OF_0 {
		initSpeed = 215;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 2-й";
	    displayNameShort = "ОФ, 2-й";
	};	
	class bn_105mm_OF_3: bn_105mm_OF_0 {
		initSpeed = 236;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 3-й";
	    displayNameShort = "ОФ, 3-й";
	};	
	class bn_105mm_OF_4: bn_105mm_OF_0 {
		initSpeed = 270;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 4-й";
	    displayNameShort = "ОФ, 4-й";
	};	
	class bn_105mm_OF_5: bn_105mm_OF_0 {
		initSpeed = 315;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_6","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 5-й";
	    displayNameShort = "ОФ, 5-й";
	};	
	class bn_105mm_OF_6: bn_105mm_OF_0 {
		initSpeed = 368;
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_7"};
		displayName = "105-мм ОФ, заряд 6-й";
	    displayNameShort = "ОФ, 6-й";
	};	
	class bn_105mm_OF_7: bn_105mm_OF_0 {
		initSpeed = 430;
		tu_arty_chargeName = "7-й";
		tu_arty_availableCharges[] = {"bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6"};
		displayName = "105-мм ОФ, заряд 7-й";
	    displayNameShort = "ОФ, 7-й";
	};
	
	class bn_105mm_S_1: bn_105mm_OF_0 {
		ammo = "bn_105mm_S";
		initSpeed = 200;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 1-й";
		count=1;
		model = "\tu_arty\105mm\wp_m84a1\wp_m84a1.p3d";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 50;
	    displayNameShort = "С, 1-й";
	};
	class bn_105mm_S_2: bn_105mm_S_1 {
		initSpeed = 215;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 2-й";
	    displayNameShort = "С, 2-й";
	};
	class bn_105mm_S_3: bn_105mm_S_1 {
		initSpeed = 236;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 3-й";
	    displayNameShort = "С, 3-й";
	};
	class bn_105mm_S_4: bn_105mm_S_1 {
		initSpeed = 270;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_5","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 4-й";
	    displayNameShort = "С, 4-й";
	};
	class bn_105mm_S_5: bn_105mm_S_1 {
		initSpeed = 315;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 5-й";
	    displayNameShort = "С, 5-й";
	};
	class bn_105mm_S_6: bn_105mm_S_1 {
		initSpeed = 368;
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_7"};
		displayName = "105-мм осветительный, заряд 6-й";
	    displayNameShort = "С, 6-й";
	};
	class bn_105mm_S_7: bn_105mm_S_1 {
		initSpeed = 430;
		tu_arty_chargeName = "7-й";
		tu_arty_availableCharges[] = {"bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_6"};
		displayName = "105-мм осветительный, заряд 7-й";
	    displayNameShort = "С, 7-й";
	};
	
	class bn_105mm_D_1: bn_120mm_smoke_0 {
		ammo = "bn_105mm_D";
		initSpeed = 200;
		tu_arty_chargeName = "1-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_6","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 1-й";
		count=1;
		model = "\tu_arty\105mm\wp_m84a1\wp_m84a1.p3d";
		picture = "\tu_arty\data\equip\105mm_WP";
		allowedslots[] = {901};
		mass = 90;
	    displayNameShort = "Д, 1-й";
		muzzleImpulseFactor = 0.1;
	};
	class bn_105mm_D_2: bn_105mm_D_1 {
		initSpeed = 215;
		tu_arty_chargeName = "2-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_6","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 2-й";
	    displayNameShort = "Д, 2-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	class bn_105mm_D_3: bn_105mm_D_1 {
		initSpeed = 236;
		tu_arty_chargeName = "3-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_6","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 3-й";
	    displayNameShort = "Д, 3-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	class bn_105mm_D_4: bn_105mm_D_1 {
		initSpeed = 270;
		tu_arty_chargeName = "4-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_5","bn_105mm_D_6","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 4-й";
	    displayNameShort = "Д, 4-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	class bn_105mm_D_5: bn_105mm_D_1 {
		initSpeed = 315;
		tu_arty_chargeName = "5-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_6","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 5-й";
	    displayNameShort = "Д, 5-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	class bn_105mm_D_6: bn_105mm_D_1 {
		initSpeed = 368;
		tu_arty_chargeName = "6-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 6-й";
	    displayNameShort = "Д, 6-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	class bn_105mm_D_7: bn_105mm_D_1 {
		initSpeed = 430;
		tu_arty_chargeName = "7-й";
		tu_arty_availableCharges[] = {"bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_7"};
		displayName = "105-мм дымовой снаряд, заряд 7-й";
	    displayNameShort = "Д, 7-й";
		picture = "\tu_arty\data\equip\105mm_WP";
	};
	
	class bn_105mm_BP1_0: bn_122mm_OF_462_0 {
		ammo = "bn_105mm_BP1";
		initSpeed = 740.0;
		tu_arty_chargeName = "специальный";
		tu_arty_availableCharges[] = {};
		displayName = "105-мм кумулятивный снаряд, заряд специальный";
		count=1;
		model = "\tu_arty\data\bn_122mm";
		picture = "\tu_arty\data\equip\bn_122mm.paa";
		allowedslots[] = {901};
		mass = 90;
	    displayNameShort = "Кум, спец.";
	};
};

class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F : Launcher {
		class WeaponSlotsInfo;
	};
	class BN_M224_M8_Gun_Launcher : Launcher_Base_F { 
		scope = 2; scopearsenal = 2;
		displayName = "М224-M8 миномет";
		type = 4;
		model = "\tu_arty\ACE_m224_m8_wep";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			allowedSlots[] = {901};
			mass = 180;
		};
	};
	
	class mortar_82mm;
	class bn_mortar_82mm: mortar_82mm {
		dispersion = 0.004;
		ballisticsComputer = 0;
		magazines[] = {"bn_82mm_shell_0","bn_82mm_shell_1","bn_82mm_shell_2","bn_82mm_shell_3","bn_82mm_shell_4", "bn_82mm_smoke_0","bn_82mm_smoke_1","bn_82mm_smoke_2","bn_82mm_smoke_3","bn_82mm_smoke_4", "bn_82mm_frag_0","bn_82mm_frag_1","bn_82mm_frag_2","bn_82mm_frag_3","bn_82mm_frag_4","bn_82mm_illum_0","bn_82mm_illum_1","bn_82mm_illum_2","bn_82mm_illum_3","bn_82mm_illum_4"};
		modes[] = {"Single3"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 2.7;
		autoReload = 1;
		backgroundReload=1;
		shotFromTurret = 1;
		reloadSound[] = {"\tu_arty\sound\mortar_load_long",1,1,20};
/* 		class Single1: Mode_SemiAuto {
			artillerycharge = 1;
			artillerydispersion = 3.7;
			displayname = "Semi (close)";
			maxrange = 0;
			midrange = 0;
			minrange = 0;
			reloadsound[] = {"A3\Sounds_F\weapons\Mortar\mortar_reload_01", 1, 1, 40};
			reloadtime = 1.8;
			sound[] = {"A3\Sounds_F\weapons\Mortar\mortar_03", 1.25893, 1, 250};
			soundservo[] = {"", 0.0001, 1};
			weaponsoundeffect = "DefaultRifle";
		}; 
		class Single3: Single1 {
		};*/
	};
	
	class bn_mortar_81mm: bn_mortar_82mm {
		displayname = "81mm mortar";
		magazines[] = {"bn_81mm_shell_0","bn_81mm_shell_1","bn_81mm_shell_2","bn_81mm_shell_3","bn_81mm_shell_4","bn_81mm_shell_prx_0","bn_81mm_shell_prx_1","bn_81mm_shell_prx_2","bn_81mm_shell_prx_3","bn_81mm_shell_prx_4","bn_81mm_smoke_0","bn_81mm_smoke_1","bn_81mm_smoke_2","bn_81mm_smoke_3","bn_81mm_smoke_4","bn_81mm_illum_0","bn_81mm_illum_1","bn_81mm_illum_2","bn_81mm_illum_3","bn_81mm_illum_4"};

	};

	class bn_mortar_60mm: bn_mortar_82mm {	
		dispersion = 0.005;
		ballisticsComputer = 0;
		displayname = "60mm mortar";
		magazines[] = {"bn_60mm_shell_0","bn_60mm_shell_1","bn_60mm_shell_2","bn_60mm_shell_3","bn_60mm_shell_4","bn_60mm_shell_prx_0","bn_60mm_shell_prx_1","bn_60mm_shell_prx_2","bn_60mm_shell_prx_3","bn_60mm_shell_prx_4","bn_60mm_smoke_0","bn_60mm_smoke_1","bn_60mm_smoke_2","bn_60mm_smoke_3","bn_60mm_smoke_4","bn_60mm_illum_0","bn_60mm_illum_1","bn_60mm_illum_2","bn_60mm_illum_3","bn_60mm_illum_4"};
		modes[] = {"Single3"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 2;
		autoReload = 1;
		backgroundReload=1;
		shotFromTurret = 1;
		
		sounds[] = {"StandardSound"};
		class StandardSound {
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\tu_arty\sound\60mm", 1, 1, 1400};
			soundBegin[] = {"begin1", 1};
		};
	};

	
	class bn_mortar_60mm_m8: bn_mortar_60mm {
		magazines[] = {"bn_60mm_shell_0","bn_60mm_shell_1","bn_60mm_shell_prx_0","bn_60mm_shell_prx_1","bn_60mm_smoke_0","bn_60mm_smoke_1","bn_60mm_illum_0","bn_60mm_illum_1"};
	};
	
	class bn_mortar_120mm: bn_mortar_82mm {		
		dispersion = 0.002;
		displayname = "120мм миномет";
		ballisticsComputer = 0;
		magazines[] = {"bn_120mm_shell_0","bn_120mm_shell_1","bn_120mm_shell_2","bn_120mm_shell_3","bn_120mm_shell_4","bn_120mm_shell_5","bn_120mm_smoke_0","bn_120mm_smoke_1","bn_120mm_smoke_2","bn_120mm_smoke_3","bn_120mm_smoke_4","bn_120mm_smoke_5"};
		modes[] = {"Single3"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 4;
		autoReload = 1;
		backgroundReload=1;
		shotFromTurret = 1;
	};
	
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class tu_arty_tables_2b14: ACE_ItemCore {
		scope = 2;
		displayName = "Таблицы стрельбы (2Б14)";
		model = "\A3\Structures_F\Items\Documents\File1_F.p3d";
		picture = "\tu_arty\data\equip\tables_co";
		mass = 0.2;
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (2Б14)";
		};
	};
	
	class tu_arty_tables_m224: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (M224)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (M224)";
		};
	};

	class tu_arty_tables_m252: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (M252)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (M252)";
		};
	};
	
	class tu_arty_tables_120mm: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (120 мм)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (120 мм)";
		};
	};
	
	class tu_arty_tables_D30: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (Д-30)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (Д-30)";
		};
};
	
	class tu_arty_tables_M119: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (M119)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (M119)";
		};
	};
	
	class tu_arty_tables_2s3: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (2С3)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (2С3)";
		};
	};
	
	class tu_arty_tables_grad: tu_arty_tables_2b14 {
		scope = 2;
		displayName = "Таблицы стрельбы (БМ-21)";
		class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 2;
			displayName = "Таблицы стрельбы (БМ-21)";
		};
	};
	
	class Default;
	class Binocular: Default {
		modeloptics = "\tu_arty\data\NWD_M22_4x";
		opticszoommax = 0.0718; //0.0708
		opticszoommin = 0.0718;
	};
	
	class MGun;
	class tu_arty_aiming_circle_ocular: MGun {
		scope = 1;
	};
	
	class rhs_weap_D30;
	class bn_rhs_weap_D30: rhs_weap_D30 {
		magazines[] = {"bn_122mm_BP1_0","bn_122mm_OF_462_0","bn_122mm_OF_462_1","bn_122mm_OF_462_2","bn_122mm_OF_462_3","bn_122mm_OF_462_4","bn_122mm_OF_462_5","bn_122mm_OF_462_6","bn_122mm_OF_462_7","bn_122mm_D4_0","bn_122mm_D4_1","bn_122mm_D4_2","bn_122mm_D4_3","bn_122mm_D4_4","bn_122mm_D4_5","bn_122mm_D4_6","bn_122mm_D4_7","bn_122mm_S_463Zh_0","bn_122mm_S_463Zh_1","bn_122mm_S_463Zh_2","bn_122mm_S_463Zh_3","bn_122mm_S_463Zh_4","bn_122mm_S_463Zh_5","bn_122mm_S_463Zh_6","bn_122mm_S_463Zh_7"};
		dispersion = 0.0007;
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 10;
		modes[] = {"Single1"};	
		
		ace_overpressure_angle = 30;  // Cone in which the damage is applied (in degrees from the muzzle of the cannon)
        ace_overpressure_range = 5;  // Range in meters in which the damage is applied
        ace_overpressure_damage = 0.25;  // Damage multiplier
		
		class Single1: Mode_SemiAuto
		{
			displayName = "Semi";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_2",2.51189,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"\tu_arty\sound\load_gun",1,1,20};
			weaponSoundEffect = "DefaultRifle";
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			reloadTime = 0;
			artilleryDispersion = 1;
			artilleryCharge = 1;
		};
	};
	 
	class bn_rhs_weap_M119: bn_rhs_weap_D30 {
		magazines[] = {"bn_105mm_BP1_0","bn_105mm_OF_0","bn_105mm_OF_1","bn_105mm_OF_2","bn_105mm_OF_3","bn_105mm_OF_4","bn_105mm_OF_5","bn_105mm_OF_6","bn_105mm_OF_7","bn_105mm_D_1","bn_105mm_D_2","bn_105mm_D_3","bn_105mm_D_4","bn_105mm_D_5","bn_105mm_D_6","bn_105mm_D_7","bn_105mm_S_1","bn_105mm_S_2","bn_105mm_S_3","bn_105mm_S_4","bn_105mm_S_5","bn_105mm_S_6","bn_105mm_S_7"};
		displayName = $STR_RHS_DN_M119;
		//class GunParticles {
		//	class Effect1
		//	{
		//		directionname = "Konec hlavne";
		//		effectname = "ArtilleryFired1";
		//		positionname = "Usti hlavne";
		//	};
		//};
	};
	
	class RocketPods;
	class rhs_weap_grad;
	class bn_rhs_weap_grad: rhs_weap_grad {
		tu_arty_extra_dispersion_w = 0.005;// дополнительное рассеивание по фронту, в радианах
		dispersion = 0.03;
		modes[] = {"Close","Close_TM","Close_TB"};
		class Close: RocketPods
		{
			displayname = "РС";
			reloadtime = 0.5;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			artillerycharge = 1;
			artillerydispersion = 3;
			maxrange = 22400;
			maxrangeprobab = 0.05;
			midrange = 18000;
			midrangeprobab = 0.55;
			minrange = 3100;
			minrangeprobab = 0.15;
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.77828,1,1500};
				soundBegin[] = {"begin1",1};
				weaponSoundEffect = "DefaultRifle";
			};
		};
		//class Close_salvo: Close
		//{
		//	burst = 40;
		//	displayname = "Пакет";
		//};
		
		class Close_TB: Close
		{
			artillerycharge = 0.6376811594202899;
			displayname = "РС (тормоз Б)";
		};
		
		class Close_TM: Close
		{
			artillerycharge = 0.8043478260869565;
			displayname = "РС (тормоз М)";
		};
	};
};

class Extended_FiredBIS_Eventhandlers
{
    class BN_2b14_82mm_Base
    {
        class tu_arty_mortar_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH";
        };
    };
	
	class TU_ARTY_M224_m8_mortar
    {
		class tu_arty_M224_m8_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH";
        };
    };
	
	class rhs_2s3tank_base
    {
        class tu_arty_gun_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH_gun";
        };
    };
	
	class rhs_D30_base
	    {
        class tu_arty_gun_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH_gun";
        };
    };
	
	class RHS_M119_base
	    {
        class tu_arty_gun_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH_gun";
        };
    };
	
	class TU_ARTY_RHS_BM21
	    {
        class tu_arty_gun_fired
        {
			clientFiredBis = "_this call tu_arty_fnc_fired_EH_gun";
        };
    };
};

class Extended_WeaponAssembled_Eventhandlers
{
    class CAManBase
    {
        class tu_arty_reassemble
        {
			WeaponAssembled = "_this call tu_arty_fnc_weapon_assembled_EH;";
        };
		
/*		class tu_arty_aiming_stake
        {
			WeaponAssembled = "if ((_this select 1) isKindOf 'tu_arty_aiming_stake') then {(_this select 1) enableSimulationGlobal false};";
        };*/
    };
};

class Extended_GetIn_Eventhandlers
{
	
	class bn_ace2_aiming_circle_NATO {
        class tu_arty_aiming_circle_get_in
        {
			GetIn = "if (local (_this select 2)) then {call tu_arty_fnc_use_aiming_circle; 0 = _this execVM '\bn_te\scripts\getIn.sqf';};";
        };
    };
	
	
    class BN_2b14_82mm_Base
    {
        class tu_arty_mortar_getin
        {
			GetIn = "if (local (_this select 2)) then {_this call compile preprocessFileLineNumbers '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getIn_EH; [] call tu_arty_startCollimatorHandler}";
        };
    };
	
	class TU_ARTY_M224_m8_mortar
    {
        class tu_arty_M224_m8_getin
        {
			GetIn = "if (local (_this select 2)) then {(_this select 0) animate ['MainSwing', 0]; (_this select 0) animate ['elev', 0]; _this call compile preprocessFileLineNumbers '\bn_te\scripts\hideCompass.sqf';  _this call tu_arty_fnc_getIn_EH; 0 = _this execVM '\bn_te\scripts\getIn.sqf';}";
        };
    };
	
	class TU_ARTY_HMMWV_Artillery_Radar {
		class tu_arty_an_pvq37_getIn
		{
			GetIn = "if (local (_this select 2)) then {[] spawn tu_arty_fnc_firefinder_update_markers}";
		};
	};
	
	class TU_gaz66_radar {
		class TU_gaz66_radar_getIn
		{
			GetIn = "if (local (_this select 2)) then {[] spawn tu_arty_fnc_firefinder_update_markers; {[_x] call tu_arty_fnc_add_observable} forEach allMissionObjects 'Air'}";
		};
	};
	
	class bn_rhs_zsu234_aa {
		class bn_rhs_zsu234_aa_getIn
		{
			GetIn = "if (local (_this select 2)) then {{[_x] call tu_arty_fnc_add_observable} forEach allMissionObjects 'Air'}";
		};
	};
	
	class rhs_D30_base {
        class tu_arty_gun_get_in
        {
			GetIn = "if (local (_this select 2)) then {[] call tu_arty_fnc_assign_marker_color; _this call compile preprocessFileLineNumbers '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getIn_EH;  [] call tu_arty_startCollimatorHandler}";
        };
    };
	
	class RHS_M119_base {
        class tu_arty_gun_get_in
        {
			GetIn = "if (local (_this select 2)) then {[] call tu_arty_fnc_assign_marker_color; _this call compile preprocessFileLineNumbers '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getIn_EH;  [] call tu_arty_startCollimatorHandler}";
        };
    };
	
	class TU_ARTY_RHS_BM21
	    {
        class tu_arty_grad_get_in
        {
			GetIn = "if (local (_this select 2)) then {[] call tu_arty_fnc_assign_marker_color; _this call compile preprocessFileLineNumbers '\bn_te\scripts\hideCompass.sqf'; [] call tu_arty_startCollimatorHandler};";
        };
    };
};

class Extended_Init_Eventhandlers
{
    class BN_2b14_82mm_Base
    {
        class tu_arty_mortar_init
        {
			init = "(_this select 0) setVariable ['tu_arty_elevation_dial',1000]";
        };
    };
	
	class rhs_D30_base
	    {
        class tu_arty_gun_init
        {
			init = "(_this select 0) setVariable ['tu_arty_elevation_dial',0];";
		};
    };
	
	class RHS_M119_base
	    {
        class tu_arty_gun_init
        {
			init = "(_this select 0) setVariable ['tu_arty_elevation_dial',0];";
		};
    };
	
	class TU_ARTY_HMMWV_Artillery_Radar {
		class tu_arty_an_pvq37_init
			{
				init = "(_this select 0) setVariable ['tu_arty_firefinder',1,true]; [(_this select 0)] remoteExecCall ['tu_arty_fnc_add_subscriber',0,true];";
			};
	};
	
	class TU_gaz66_radar {
		class tu_arty_an_pvq37_init
			{
				init = "(_this select 0) setVariable ['tu_arty_firefinder',1,true]; [(_this select 0)] remoteExecCall ['tu_arty_fnc_add_subscriber',0,true];";
			};
	};
	
	class bn_rhs_zsu234_aa {
		class bn_rhs_zsu234_aa_init
			{
				init = "(_this select 0) setVariable ['tu_arty_firefinder',1,true]; [(_this select 0)] remoteExecCall ['tu_arty_fnc_add_subscriber',0,true];";
			};
	};
};

class Extended_GetOut_Eventhandlers
{
    class BN_2b14_82mm_Base
    {
        class tu_arty_mortar_getout
        {
			GetOut = "if (local (_this select 2)) then {_this execVM '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getOut_EH; [] call tu_arty_endCollimatorHandler}";
        };
    };
	
	class TU_ARTY_M224_m8_mortar
    {
        class tu_arty_M224_m8_getout
        {
			GetOut = "if (local (_this select 2)) then {_this execVM '\bn_te\scripts\hideCompass.sqf'; diag_log format['getOut %1 %2 %3',_this]; (_this select 0) animate ['elev', -1*((_this select 0) animationPhase 'MainGun')]; _this call tu_arty_fnc_getOut_EH;}";
        };
    };
	
	class rhs_D30_base
	{
        class tu_arty_gun_getout
        {
			GetOut = "if (local (_this select 2)) then {_this execVM '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getOut_EH; [] call tu_arty_endCollimatorHandler};";
        };
    };

	class RHS_M119_base
	{
        class tu_arty_gun_getout
        {
			GetOut = "if (local (_this select 2)) then {_this execVM '\bn_te\scripts\hideCompass.sqf'; _this call tu_arty_fnc_getOut_EH; [] call tu_arty_endCollimatorHandler};";
        };
    };

	class TU_ARTY_RHS_BM21
	    {
        class tu_arty_grad_getout
        {
			GetOut = "if (local (_this select 2)) then {[] call tu_arty_endCollimatorHandler};";
        };
    };
};

class Extended_Explosion_Eventhandlers
{
    class ACE_Box_Misc
    {
        class tu_arty_cookoff
        {
			Hit = "if ((getDammage (_this select 0) > 0.1) && {!((_this select 0) getVariable ['tu_arty_cookoff_in_progress', false])}) then {[_this select 0] spawn tu_arty_fnc_ammo_cookoff};";
        };
    };
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			
		 	class TU_ARTY_M224_M8_Assemble {
			  displayName = "Установить M224";
			  condition = "(vehicle _player == _player) && ('BN_M224_M8_Gun_Launcher' in (weapons _player))";
			  //condition = "'BN_M224_M8_Gun_Launcher' in (weapons _player)";
			  statement = "[_target, 3] call tu_arty_fnc_assemble_m224";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
		
		 	class TU_ARTY_Open_Table_2B14 {
			  displayName = "Таблицы стрельбы (2Б14)";
			  condition = "'tu_arty_tables_2b14' in (items _player)";
			  statement = "['bn_mortar_82mm'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_M224 {
			  displayName = "Таблицы стрельбы (M224)";
			  condition = "'tu_arty_tables_m224' in (items _player)";
			  statement = "['bn_mortar_60mm'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_M252 {
			  displayName = "Таблицы стрельбы (M252)";
			  condition = "'tu_arty_tables_m252' in (items _player)";
			  statement = "['bn_mortar_81mm'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_120mm {
			  displayName = "Таблицы стрельбы (120 мм)";
			  condition = "'tu_arty_tables_120mm' in (items _player)";
			  statement = "['bn_mortar_120mm'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_D30 {
			  displayName = "Таблицы стрельбы (Д-30)";
			  condition = "'tu_arty_tables_D30' in (items _player)";
			  statement = "['bn_rhs_weap_D30'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_M119 {
			  displayName = "Таблицы стрельбы (M119)";
			  condition = "'tu_arty_tables_M119' in (items _player)";
			  statement = "['bn_rhs_weap_M119'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_2s3 {
			  displayName = "Таблицы стрельбы (2С3)";
			  condition = "'tu_arty_tables_2s3' in (items _player)";
			  statement = "['bn_rhs_weap_2a33'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};
			class TU_ARTY_Open_Table_grad {
			  displayName = "Таблицы стрельбы (БМ-21)";
			  condition = "'tu_arty_tables_grad' in (items _player)";
			  statement = "['bn_rhs_weap_grad'] call tu_arty_fnc_open_table";
			  showDisabled = 0;
			  priority = 2.4;
			  enableInside = 1;
			  exceptions[] = {"isNotInside"};
			};			

			class TU_ARTY_self_prep_shells {
				displayName = "Подготовить мины";
				condition = "(({'bn_82mm_shell_0' in ([(configFile >> 'CfgMagazines' >> _x),true] call BIS_fnc_returnParents)} count (magazines  player)) > 0)||(({'bn_122mm_OF_462_0' in ([(configFile >> 'CfgMagazines' >> _x),true] call BIS_fnc_returnParents)} count (magazines  player)) > 0)";
				statement = "uiNamespace setVariable ['TU_ARTY_prep_source', (backpackContainer player)]; createDialog 'TU_ARTY_PREP_D'";
				showDisabled = 0;
				priority = 1;
				hotkey = "P";
				enableInside = 1;
			};
			
			class TU_ARTY_deploy_aiming_circle {
				displayName = "Установить буссоль ПАБ-2"; //условно
				condition = "(backpack player) == 'BN_Aiming_Circle_Bag'";
				statement = "[6000] call tu_arty_fnc_deploy_aiming_circle";
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
			};
			
			class TU_ARTY_deploy_aiming_circle_NATO {
				displayName = "Установить буссоль M2A2";
				condition = "(backpack player) == 'BN_Aiming_Circle_Bag'";
				statement = "[6400] call tu_arty_fnc_deploy_aiming_circle";
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
			};
			
			class ACE_MapTools {
				class TU_Select_Map_Tools_Texture {
                    displayName = "Выбрать шкалу";
                    condition = "ace_maptools_mapTool_Shown != 0";
                    statement = "";
                    exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
                    showDisabled = 1;
                    priority = 1;
					insertChildren = "[] call tu_arty_fnc_map_tools_menu_children;";
                };
			};
		};
	};
	
	/*extern*/ class LandVehicle;

	class StaticWeapon: LandVehicle {
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class ViewGunner;
		/*extern*/ class ViewOptics;
		class ACE_Actions;
		class ACE_MainActions;
	};

	class StaticCannon: StaticWeapon {
		/*extern*/ class ViewOptics;
		/*extern*/ class ViewGunner;
		class ACE_Actions;
		class ACE_MainActions;
	};

	class StaticGrenadeLauncher: StaticWeapon {
		/*extern*/ class ViewOptics;
		/*extern*/ class ViewGunner;
		/*extern*/ class Turrets;// 
		/*extern*/ class MainTurret;// 
		class ACE_Actions;
		class ACE_MainActions;
	};

	class StaticMortar: StaticWeapon {
		/*extern*/ class ViewOptics;
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
	};
	class rhs_2b14_82mm_Base;
	class rhs_2b14_82mm_msv: rhs_2b14_82mm_Base
	{
		scope = 1;
	};
	class rhs_2b14_82mm_vdv: rhs_2b14_82mm_Base
	{
		scope = 1;
	};
	class rhs_2b14_82mm_ins: rhs_2b14_82mm_Base
	{
		scope = 1;
	};
	class BN_2b14_82mm_Base: StaticCannon{ //StaticGrenadeLauncher{// StaticMortar {
		tu_arty_sight = 2;
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 2;
		
		ace_dragging_canDrag = 0;
		ace_dragging_canCarry = 0;
		
		availableForSupportTypes[] = {"Artillery"};
		displayname = "$STR_rhs_DN_2B14";
		vehicleClass = "rhs_vehclass_artillery";

		class Library {
			libTextDesc = "$STR_rhs_LIB_2B14";
		};
		model = "\tu_arty\ACE_2B14";
		transportSoldier = 0;
		//cargoAction[] = {"rhs_D30_Cargo"};
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		mapSize = 1.500000;

		class Turrets: Turrets {
//			/*extern*/ class ViewOptics;
//			/*extern*/ class ViewGunner;
			class MainTurret: MainTurret {
				//memoryPointsGetInGunner = "pos_gunner_dir";
				//memoryPointsGetInGunnerDir = "pos_gunner";
				elevationMode = 1;
				
//				/*extern*/ class ViewOptics;
				animationSourceElevation = "MainGun";
				gunnerAction = "rhs_D30_Cargo";
				weapons[] = {"bn_mortar_82mm"};
				gunnerOpticsModel = "\tu_arty\SightUnit";
				turretinfotype = "RscWeaponZeroing";
//				discreteDistance[] = {1};
//				discreteDistanceInitIndex = 0;
				// "RscWeaponRangefinder"; //возможно, здесь собака порылась 
				//RscWeaponRangeZeroing
				gunEnd = "gun_chamber";
				gunBeg = "gun_muzzle";
				selectionFireAnim = "gun_muzzle";
				magazines[] = {};
				initElev = 45;
				initTurn = 0;
				minElev = 45;
				maxElev = 45;
				minTurn = -4;
				maxTurn = 4;
				class ViewOptics:ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.12;
					minFov = 0.12;
					maxFov = 0.12;
				};
				class ViewGunner:ViewGunner {
				   initAngleX = 30;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
				
				class OpticsIn {
					class Wide : ViewOptics {
						gunnerOpticsModel = "\tu_arty\SightUnit";
						initFov = 0.12;
						minFov = 0.12;
						maxFov = 0.12;
						visionMode[] = {"Normal"};
					};
					
					class Night : Wide {
						gunnerOpticsModel = "\tu_arty\SightUnit_night";
					};
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 1;
		
		class ACE_Actions: ACE_Actions{	
			
			class ACE_MainActions: ACE_MainActions {
				
				class TU_ARTY_setOwner {
					displayName = "Фикс управления";
					distance = 3;
					condition = "true";
					statement = "[_target, _player] call tu_arty_fnc_setOwner";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
			};

			class BN_CSW_Load_New {
				displayName = "Зарядить...";
				distance = 3;
				condition = "count ([_target] call bn_csw_fnc_add_subactions) > 0";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				enableInside = 0;
				insertChildren = "[_target] call bn_csw_fnc_add_subactions";
				selection = "gun_muzzle";
			};
			class BN_CSW_Unload {
				displayName = "Разрядить";
				distance = 2;
				condition = "true";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "0 = [_target, _player] execVM '\bn_csw_load\scripts\bn_csw_unload.sqf';";
				showDisabled = 1;
				priority = 1;
				hotkey = "U";
				enableInside = 0;
				selection = "gun_chamber";
			};
			class TU_ARTY_Move_Tripod {
				displayName = "Переставить двуногу";
				distance = 2;
				condition = "true"; //"isNil (_target getVariable ['bn_drag_handle',nil]);";
				statement = "[_target] call tu_arty_fnc_shift;";
				showDisabled = 0;
				priority = 1;
				hotkey = "M";
				enableInside = 0;
				selection = "aimpoint";
			};
			class TU_ARTY_Level_Gun {
				displayName = "Закрепить";
				distance = 2;
				condition = "isNull attachedTo _target"; //"isNil (_target getVariable ['bn_drag_handle',nil]);";
				statement = "[7, [_target], {[_this select 0] call tu_arty_fnc_level_gun;}, {}, 'Закрепление орудия'] call ace_common_fnc_progressBar;"; 
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
				selection = "osahlavne";
			};
			class TU_ARTY_Unlevel_Gun {
				displayName = "Открепить";
				distance = 2;
				condition = "!(isNull attachedTo _target)"; //"isNil (_target getVariable ['bn_drag_handle',nil]);";
				statement = "[7, [_target], {detach ((_this select 0) select 0);}, {}, 'Открепление орудия'] call ace_common_fnc_progressBar;"; 
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
				selection = "osahlavne";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"rhs_Podnos_Gun_Bag","rhs_Podnos_Bipod_Bag"};
			displayName = "";
		};
		class UserActions
		{
		  class tu_arty_show_mpm44m
			  {
				displayName = "<t color='#CCCCCC'>Прицел МПМ-44М</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && {(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))};";
				statement = "cutRsc ['TU_ARTY_D_light','PLAIN'];";
			  };
			/*  
			class tu_arty_show_mpm44m_old
			  {
				displayName = "Прицел МПМ-44М (мышь)";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && {(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))};";
				statement = "createDialog 'tu_arty_d';";
			  };
			*/
		 };
		class AnimationSources {

			class MainTurret {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};

			class MainTurret_RotateFast: MainTurret {
				animPeriod = 0.001000;
			};

			class MainGun {
				source = "user";
				weapon = "bn_mortar_82mm";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = 0;
				maxValue = 0;
			};
			class MainGunT {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 1030;
				minValue = 750;
				maxValue = 1417;
			};

			class OpticSwing
			{
				initPhase = 0;
				animPeriod = 0.010000;
				minValue=-400;
				maxValue=400;
				source="user";
			};

			class OpticElevate {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 1000;
				minValue = 650;
				maxValue = 1500;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};

			class OpticRevolve {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};

			class MainTurretTraverse {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = -200;
				maxValue = 200;
			};
		};
	};	
	class BN_2b14_82mm_MSV: BN_2b14_82mm_Base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};

	class TU_ARTY_M252_mortar: BN_2b14_82mm_Base
	{
		model = "\tu_arty\rhs_mortar_m252";
		displayName = "81-мм миномет M252";
		bn_arty_milSys = 6400;

		class assembleInfo: assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_M252_Gun_Bag", "BN_M252_Bipod_Bag"};
		};
		
		class Turrets: Turrets {

			class MainTurret: MainTurret {
				/*extern*/ class ViewOptics;
				gunnerAction = "rhs_D30_Cargo";
				weapons[] = {"bn_mortar_81mm"};
				magazines[] = {};
				gunEnd = "gun_chamber";
				gunBeg = "gun_muzzle";
				selectionFireAnim = "gun_muzzle";
				initElev = 45;
				initTurn = 0;
				minElev = 45;
				maxElev = 45;
				minTurn = -4;
				maxTurn = 4;
			};
		};
		
		class AnimationSources {

			class MainTurret {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
			};

			class MainTurret_RotateFast: MainTurret {
				animPeriod = 0.001000;
			};

			class MainGun {
				source = "user";
				weapon = "bn_mortar_81mm";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = 0;
				maxValue = 0;
			};
			
			class MainGunT {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 1030;
				minValue = 800;
				maxValue = 1511;
			};

			class OpticSwing
			{
				initPhase = 0;
				animPeriod = 0.010000;
				minValue=-400;
				maxValue=400;
				source="user";
			};

			class OpticElevate {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 1000;
				minValue = 100;
				maxValue = 1600;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};

			class OpticRevolve {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
			};

			class MainTurretTraverse {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = -200;
				maxValue = 200;
			};
		};
	};

	class TU_ARTY_M224_mortar: TU_ARTY_M252_mortar {

		model = "\tu_arty\ACE_m224";
		displayName = "60-мм миномет M224";
		ace_dragging_canDrag = 1;

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				/*extern*/ class ViewOptics;
				weapons[] = {"bn_mortar_60mm"};
			};
		};

		class assembleInfo: assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_M224_Gun_Bag", "BN_M224_Bipod_Bag"};
		};

		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions
			{
				class TU_ARTY_Add_Tripod {
					displayName = "Облегченный вариант";
					distance = 2;
					condition = "true";
					statement = "[_target, 0] call tu_arty_fnc_assemble_m224;";
					showDisabled = 0;
					priority = 1;
					hotkey = "O";
					enableInside = 0;
					//selection = "zamerny";
				};
			};
		};
	};
	
	class TU_ARTY_M224_mortar_WD: TU_ARTY_M224_mortar
	{
		scope = 2;
		side = 1;
		author = "RHS (A2 port)";
		faction = "rhs_faction_usarmy_wd";
		crew = "rhsusf_army_ucp_rifleman";
		typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
	};
	
	
	class TU_ARTY_M252_mortar_WD: TU_ARTY_M252_mortar
	{
		scope = 2;
		side = 1;
		author = "RHS";
		faction = "rhs_faction_usarmy_wd";
		crew = "rhsusf_army_ucp_rifleman";
		typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
	};
	
	
	class TU_ARTY_M224_m8_mortar: StaticGrenadeLauncher{ //StaticGrenadeLauncher{// StaticMortar {StaticCannon
		tu_arty_sight = 2;
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 0;	
		bn_arty_show_deflection = 0;
		bn_arty_show_azimuth = 0;
		bn_arty_elevation_style = 2;
		
		displayName = "60-мм миномет M224-M8";
		
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		
		availableForSupportTypes[] = {"Artillery"};
		vehicleClass = "rhs_vehclass_artillery";

		class Library {
			libTextDesc = "$STR_rhs_LIB_2B14";
		};
		
		model = "\tu_arty\ACE_m224_m8";
		transportSoldier = 0;
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\podnos_2b14_ca.paa";
		mapSize = 1.500000;

		class Turrets: Turrets {
//			/*extern*/ class ViewOptics;
//			/*extern*/ class ViewGunner;
			class MainTurret: MainTurret {
				
				gunnerAction = "rhs_D30_Cargo";
				weapons[] = {"bn_mortar_60mm_m8"};
				//memoryPointsGetInGunner = "pos_gunner_dir";
				//memoryPointsGetInGunnerDir = "pos_gunner";
				//elevationMode = 0;
				animationSourceElevation = "MainGun";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				turretinfotype = "RscWeaponZeroing";
				gunEnd = "gun_chamber";
				gunBeg = "gun_muzzle";
				selectionFireAnim = "gun_muzzle";
				magazines[] = {};
				initElev = 0;
				initTurn = 0;
				minElev = 40;
				maxElev = 85;
				minTurn = -15;
				maxTurn = 15;
				//gunnerRightHandAnimName = "ruchkaR";
				//gunnerLeftHandAnimName = "ruchkaL";
				maxHorizontalRotSpeed = 0.1;
				maxVerticalRotSpeed = 0.1;
				
				class ViewOptics:ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.25;
					maxFov = 0.75;
				};
				class ViewGunner:ViewGunner {
				   initAngleX = 30;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 1;

		class ACE_SelfActions{
			class BN_CSW_Load_New_Self {
				displayName = "Зарядить...";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {count ([_target] call bn_csw_fnc_add_subactions) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "[_target] call tu_arty_fnc_recoil; [_target] call bn_csw_fnc_add_subactions";
			};
		};
		
		class ACE_Actions: ACE_Actions
		{
			class BN_CSW_Load_New {
				displayName = "Зарядить...";
				distance = 3;
				condition = "count ([_target] call bn_csw_fnc_add_subactions) > 0";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				enableInside = 0;
				insertChildren = "; [_target] call bn_csw_fnc_add_subactions";
				selection = "gun_muzzle";
			};
			class BN_CSW_Unload {
				displayName = "Разрядить";
				distance = 2;
				condition = "true";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "0 = [_target, _player] execVM '\bn_csw_load\scripts\bn_csw_unload.sqf';";
				showDisabled = 1;
				priority = 1;
				hotkey = "U";
				enableInside = 0;
				selection = "gun_chamber";
			};
			
			class ACE_MainActions: ACE_MainActions
			{
				selection  = "aimpoint";

				class TU_ARTY_setOwner {
					displayName = "Фикс управления";
					distance = 3;
					condition = "true";
					statement = "[_target, _player] call tu_arty_fnc_setOwner";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};

				class TU_ARTY_Add_Tripod {
					displayName = "Присоединить двуногу";
					distance = 2;
					condition = "backpack player == 'BN_M224_Bipod_Bag'";
					statement = "[_target, 1] call tu_arty_fnc_assemble_m224";
					showDisabled = 0;
					priority = 1;
					hotkey = "O";
					enableInside = 0;
				};
				
				class TU_ARTY_M8_Gun_Assemble {
					displayName = "Упаковать M224";
					distance = 2;
					condition = "true";
					statement = "[_target, 2] call tu_arty_fnc_assemble_m224";
					showDisabled = 0;
					priority = 1;
					hotkey = "O";
					enableInside = 0;
				};
			};
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {""};
			displayName = "";
		};
		
		class AnimationSources {

			class MainTurret {
				source = "mainturret";
				//animPeriod = 0;
				initPhase = 0;
				//minValue=-0,261799;
				//maxValue=0,261799;
			};

			class MainGun {
				source = "maingun";
				//weapon = "bn_mortar_60mm";
				//animPeriod = 0;
				initPhase = 0;
				//minValue=0.78539819;
				//maxValue=1.48353;
			};

			class MainTurretTraverse {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};
			
			class elev {source="user";animperiod=0;};
			class MainSwing {source="user";animperiod=0;};
		};
	};	
	
	class TU_ARTY_M224_m8_mortar_WD: TU_ARTY_M224_m8_mortar
	{
		scope = 2;
		side = 1;
		author = "RHS (A2 port)";
		faction = "rhs_faction_usarmy_wd";
		crew = "rhsusf_army_ucp_rifleman";
		typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
	};
	
	
	class TU_ARTY_120mm_mortar: BN_2b14_82mm_Base {
		model = "\tu_arty\ACE_120_TAMPELLA";
		bn_arty_milSys = 6000;
		displayName = "120-мм миномет";
		
		class Turrets: Turrets {

			class MainTurret: MainTurret {
				animationSourceElevation = "MainGun";
				/*extern*/ class ViewOptics;
				gunnerAction = "rhs_D30_Cargo";
				weapons[] = {"bn_mortar_120mm"};
				magazines[] = {};
				gunEnd = "gun_chamber";
				gunBeg = "gun_muzzle";
				selectionFireAnim = "gun_muzzle";
				initElev = 45;
				initTurn = 0;
				minElev = 45;
				maxElev = 45;
				minTurn = -4;
				maxTurn = 4;
			};
		};
		
		class assembleInfo: assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {""};
			displayName="120-мм миномет";
		};
		
		class ACE_Actions;
		
		class AnimationSources {

			class MainTurret {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};

			class MainTurret_RotateFast: MainTurret {
				animPeriod = 0.001000;
			};

			class MainGun {
				source = "user";
				weapon = "bn_mortar_120mm";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = 0;
				maxValue = 0;
			};
			
			class MainGunT {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 1030;
				minValue = 750;
				maxValue = 1417;
			};

			class OpticSwing
			{
				initPhase = 0;
				animPeriod = 0.010000;
				minValue=-400;
				maxValue=400;
				source="user";
			};

			class OpticElevate {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 1000;
				minValue = 650;
				maxValue = 1500;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};

			class OpticRevolve {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};

			class MainTurretTraverse {
				source = "user";
				animPeriod = 0.010000;
				initPhase = 0;
				minValue = -200;
				maxValue = 200;
			};
		};
	};
	
	class TU_ARTY_120mm_mortar_WD: TU_ARTY_120mm_mortar
	{
		scope = 2;
		side = 1;
		author = "RHS (A2 port)";
		faction = "rhs_faction_usarmy_wd";
		crew = "rhsusf_army_ucp_rifleman";
		typicalCargo[] = {"rhsusf_army_ucp_rifleman"};
	};
	
	class StaticATWeapon: StaticWeapon {
        class Turrets: Turrets {
            class MainTurret: MainTurret
			{
				class ViewOptics;
			};
        };
    };
	class ACE_SpottingScopeObject: StaticATWeapon {
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
    };
	
	class Box_NATO_Support_F;
	class rhs_weapon_crate;
	class ACE_Box_Misc: Box_NATO_Support_F {
		class ACE_Actions;
		class ACE_MainActions;
	};
	class bn_mortar_box_large: rhs_weapon_crate {
		class ACE_Actions;
		class ACE_MainActions;
	};
	
	class BN_82mm_shells_box: ACE_Box_Misc {
		scope = 1; // deprecated
		// решение принято в пользу осколочных 82-мм мин
		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1_single";
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_7ya37_1_single.paa";
		displayName = "Ящик 82 мм ОФ мин";
		maximumload = 400;
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_82mm_shell_0";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
		class ACE_Actions: ACE_Actions { //: ACE_Actions
			class ACE_MainActions: ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = 1;
				class bn_prep_shells {
					displayName = "Подготовить мины";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};
	};
	
	class bn_ace2_aiming_circle_NATO: ACE_SpottingScopeObject 
	{
		scope = 2;
		model = "\tu_arty\ace_arty_m2a2_aiming_circle";
		icon = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\icomap_kord_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord_CA.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord_CA.paa";
		mapSize = 3;
		displayName = "Буссоль";

		/*
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"bn_aiming_circle_bag"};
			displayName = "";
		};*/
		
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {};
		
		class ACE_Actions {
			class TU_ARTY_Pickup_Aiming_Point {
				displayName = "Сложить";
				distance = 2;
				condition = "true"; //"isNil (_target getVariable ['bn_drag_handle',nil]);";
				statement = "[_target] call tu_arty_fnc_collapse_aiming_circle;"; 
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
				selection = "centerpoint";
			};
			
			class TU_ARTY_setOwner {
				displayName = "Фикс управления";
				distance = 3;
				condition = "true";
				statement = "[_target, _player] call tu_arty_fnc_setOwner";
				showDisabled = 0;
				priority = 5;
				enableInside = 0;
				insertChildren = "";
				selection = "gunnerview";
			};
		};
			
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 0;	
		bn_arty_show_deflection = 0;
		bn_arty_show_azimuth = 1;
		bn_arty_elevation_style = 2;
		tu_arty_sight = 1;
		
		class AnimationSources
		{
			class MainGun {
				initPhase = 0;
			};
				
			class MainGunT {
				initPhase=0;
			};
			
			
			class MainTurretTraverse
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.002;
				minValue = -6400;
				maxValue = 6400;
			};
			class deflection_knob
			{
				initPhase = 0;
			};
			
			class elevation_knob
			{
				initPhase = 0;
			};
			
			class orienting_knobs
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.02;
				minValue = "-6400";
				maxValue = "6400";
			};
			class left_cover
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				minValue = "0";
				maxValue = "1";
			};
			class right_cover
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
				minValue = "0";
				maxValue = "1";
			};
			
			class compass_needle {
				animPeriod = 0.001;
				initPhase=0;
                minPhase=-20;
                maxPhase=20;
                minValue=-20;
                maxValue=20;
			};
		};
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven_shake";
				gunnerRightHandAnimName="otochlaven_shake";
				gunnerLeftLegAnimName="leg_left";
				gunnerRightLegAnimName="leg_right";
				elevationMode = 3;
				animationSourceElevation = "MainGun";
				weapons[] = {"tu_arty_aiming_circle_ocular"};
				magazines[] = {};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				//gunnerOpticsModel = "\rhsafrf\addons\rhs_weapons2\misc\tr8\rhs_tr8_reticle.p3d";
				gunnerAction = "rhs_DShKM_Gunner";
				gunnerOpticsModel = "\tu_arty\SightUnit";
				gunnerOpticsEffect[] = {};
				turretinfotype = "RscWeaponZeroing";
				minElev = -23;
				maxelev = 45;
				minTurn = -180;
				maxTurn = 180;
				maxVerticalRotSpeed = 0.25;
				maxHorizontalRotSpeed = 2;
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				gunnergetInAction = "PlayerStand";
				gunnergetOutAction = "PlayerStand";

				class ViewOptics:ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.12;
					minFov = 0.12;
					maxFov = 0.12;
				};
				class ViewGunner:ViewGunner {
				   initAngleX = -10;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.55;
					maxFov = 0.75;
				};
				
				class OpticsIn {
					class Wide : ViewOptics {
						gunnerOpticsModel = "\tu_arty\SightUnit";
						initFov = 0.12;
						minFov = 0.12;
						maxFov = 0.12;
						visionMode[] = {"Normal"};
					};
					
					class Night : Wide {
						gunnerOpticsModel = "\tu_arty\SightUnit_night";
					};
				};
			};
		};
	};
	
	class bn_ace2_aiming_circle: bn_ace2_aiming_circle_NATO
	{
		bn_arty_milSys = 6000;
		model = "\tu_arty\pab_2m";
		
		class UserActions {
			
			class tu_arty_show_periscope
			{
				displayName = "<t color='#CCCCCC'>Надеть перископ</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && ((this animationPhase 'peris_hide') == 0)";
				statement = "this animateSource ['pab2_peris', 1];;";
			};
			class tu_arty_hide_periscope
			{
				displayName = "<t color='#CCCCCC'>Снять перископ</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && ((this animationPhase 'peris_hide') == 1)";
				statement = "(vehicle player) animateSource ['pab2_peris', 0];;";
			};
		};
		
		class AnimationSources
		{
			
			class MainTurretTraverse
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.002;
				minValue = -6000;
				maxValue = 6000;
			};
			
			class pab2_peris
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0;
				minValue = -1;
				maxValue = 1;
			};
			
			class OpticRevolve
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.002;
				minValue= -6000;
				maxValue= 6000;
			};
			
			class compass_needle {
				animPeriod = 0.001;
				initPhase=0;
                minPhase=-20;
                maxPhase=20;
                minValue=-20;
                maxValue=20;
			};
			
			class OpticLens {
				initPhase=0;
				animPeriod = 0.002;
				minValue = -1;
				maxValue = 1;
                minPhase=-1;
                maxPhase=1;
			};
		};
	};
	
	class BN_60mm_shells_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 60-мм осколочных мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_60mm_shell_0";
				count = 12;
			};
		};
	};
	
	class BN_60mm_smoke_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 60-мм дымовых мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_60mm_smoke_0";
				count = 8;
			};
		};
		
		class BN_60mm_illum_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 60-мм осветительных мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_60mm_illum_0";
				count = 8;
			};
		};
	};
	};
	
	class BN_82mm_shells_box_large: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 82 мм осколочных мин (большой)";
		model = "rhsafrf\addons\rhs_weapons\crates\rhs_3Ya40_1";
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_weapons_crate_ak.paa";
		maximumload = 1281;
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_82mm_frag_0";
				count = 32;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
/*		class ACE_Actions : ACE_Actions { //
			class ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = 1;
				class bn_prep_shells {
					displayName = "Подготовить мины";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};*/
	};
	
	class BN_81mm_shells_box_large: BN_82mm_shells_box_large {
		scope = 2;
		displayName = "Ящик 81 мм осколочных мин (большой)";
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_81mm_shell_0";
				count = 32;
			};
		};
	};

	class BN_122mm_shells_box_large: BN_82mm_shells_box_large {
		displayName = "Ящик 122-мм снарядов ОФ-462";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\d30_shell_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		maximumload = 1281;
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_122mm_OF_462_7";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
		class ACE_Actions;
		class ACE_MainActions;
			
/*		class ACE_Actions : ACE_Actions { //
			class ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = 1;
				class bn_prep_shells {
					displayName = "Подготовить заряды";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};*/
	};
	
	class BN_122mm_smoke_box_large: BN_122mm_shells_box_large {
		displayName = "Ящик 122-мм дымовых снарядов Д-4";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\d30_smoke_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_122mm_D4_7";
				count = 8;
			};
		};
	};
	
	class BN_122mm_illum_box_large: BN_122mm_shells_box_large {
		displayName = "Ящик 122-мм осветительных снарядов С-463Ж";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\d30_illum_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_122mm_S_463Zh_7";
				count = 8;
			};
		};
	};
	
	class BN_122mm_AT_box_large: BN_122mm_shells_box_large {
		displayName = "Ящик 122-мм кумулятивных снарядов БП1";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\d30_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_122mm_BP1_0";
				count = 8;
			};
		};
		class ACE_Actions : ACE_Actions { //
			class ACE_MainActions: ACE_MainActions
			{
				class bn_prep_shells {
				};
			};
		};
	};
		
	class BN_105mm_shells_box_large: BN_122mm_shells_box_large {
		displayName = "Ящик 105-мм ОФ снарядов";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\m119_shell_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_105mm_OF_7";
				count = 10;
			};
		};
	};	
		
	class BN_105mm_smoke_box_large: BN_105mm_shells_box_large {
		displayName = "Ящик 105-мм дымовых снарядов";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\m119_smoke_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_105mm_D_7";
				count = 10;
			};
		};
	};

	class BN_105mm_illum_box_large: BN_105mm_shells_box_large {
		displayName = "Ящик 105-мм осветительных снарядов";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\m119_illum_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_105mm_S_7";
				count = 10;
			};
		};
	};
	
	class BN_105mm_AT_box_large: BN_105mm_shells_box_large {
		displayName = "Ящик 105-мм кумулятивных снарядов";
		hiddenSelectionsTextures[] = {"\tu_arty\data\ammo\m119_ap_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_105mm_BP1_0";
				count = 10;
			};
		};
		
		class ACE_Actions : ACE_Actions { //
			class ACE_MainActions: ACE_MainActions
			{
				class bn_prep_shells {
				};
			};
		};
	};
		
	class BN_120mm_shells_box_large: BN_82mm_shells_box_large {
		displayName = "Ящик 120 мм ОФ мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_120mm_mag
			{
				magazine = "bn_120mm_shell_0";
				count = 16;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
/*		class ACE_Actions: ACE_Actions { //
			class ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = 1;
				class bn_prep_shells {
					displayName = "Подготовить мины";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};*/
	};
	
	class BN_120mm_smoke_box_large: BN_82mm_shells_box_large {
		scope = 2;
		displayName = "Ящик 120 мм дымовых мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_120mm_mag
			{
				magazine = "bn_120mm_smoke_0";
				count = 16;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
/*		class ACE_Actions: ACE_Actions { //
			class ACE_MainActions
			{
				selection = "";
				distance = 5;
				condition = 1;
				class bn_prep_shells {
					displayName = "Подготовить мины";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};*/
	};
	
	class BN_82mm_smoke_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 82 мм дымовых мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_82mm_smoke_0";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_82mm_illum_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 82-мм осветительных мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_82mm_illum_0";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_82mm_smoke_box_large: BN_82mm_shells_box_large {
		displayName = "Ящик 82 мм дымовых мин (большой)";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_82mm_smoke_0";
				count = 32;
			};
		};
/*		class ACE_Actions: ACE_Actions {
			class ACE_MainActions {
				class bn_prep_shells {
					displayName = "Подготовить мины";
					distance = 2;
					condition = "({count (getArray (configFile >> 'CfgMagazines' >> _x >> 'tu_arty_availableCharges')) > 0} count (magazineCargo _target)) > 0";
					statement = "uiNamespace setVariable ['TU_ARTY_prep_source', _target]; createDialog 'TU_ARTY_PREP_D'";
					showDisabled = 0;
					priority = 1.1;
					hotkey = "P";
					enableInside = 0;
				};
			};
		};*/
		class TransportItems {};
		class TransportBackpacks {};
	};
	

	class BN_81mm_smoke_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 81 мм дымовых мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_81mm_smoke_0";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_81mm_illum_box: BN_82mm_shells_box {
		scope = 2;
		displayName = "Ящик 81-мм осветительных мин";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_81mm_illum_0";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_81mm_smoke_box_large: BN_82mm_shells_box_large {
		displayName = "Ящик 81 мм дымовых мин (большой)";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_82mm_mag
			{
				magazine = "bn_81mm_smoke_0";
				count = 32;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};

	class BN_2b14_box: ACE_Box_Misc {
		displayName = "Ящик с минометом 2Б14";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons {};
		class TransportItems {
			class _xx_tab_mag
				{
					name = "tu_arty_tables_2b14";
					count = 2;
				};
			class _xx_maptools
				{
					name = "ACE_MapTools";
					count = 1;
				};
			};
		class TransportBackpacks {
			class _xx_gunbag
				{
					backpack = "RHS_Podnos_Gun_Bag";
					count = 1;
				};
			class _xx_tripodbag
				{
					backpack = "RHS_Podnos_Bipod_Bag";
					count = 1;
				};
			class _xx_sidor
				{
					backpack = "rhs_sidor";
					count = 1;
				};	
				class _xx_stake
				{
					backpack = "tu_arty_aiming_stake_bag";
					count = 2;
				};
		};
		class TransportMagazines {};
	};
	
	class BN_m224_box: ACE_Box_Misc {
		displayName = "Ящик с минометом M224";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons {};
		class TransportItems {
			class _xx_tab_mag
				{
					name = "tu_arty_tables_m224";
					count = 2;
				};
			class _xx_maptools
				{
					name = "ACE_MapTools";
					count = 1;
				};
			};
		class TransportBackpacks {
			class _xx_gunbag
				{
					backpack = "BN_M224_Gun_Bag";
					count = 1;
				};
			class _xx_tripodbag
				{
					backpack = "BN_M224_Bipod_Bag";
					count = 1;
				};
			class _xx_sidor
				{
					backpack = "rhsusf_assault_eagleaiii_coy";
					count = 1;
				};	
			class _xx_stake
				{
					backpack = "tu_arty_aiming_stake_bag";
					count = 2;
				};	
		};
		class TransportMagazines {};
	};

	class BN_m252_box: ACE_Box_Misc {
		displayName = "Ящик с минометом M252";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons {};
		class TransportItems {
			class _xx_tab_mag
				{
					name = "tu_arty_tables_m252";
					count = 2;
				};
			class _xx_maptools
				{
					name = "ACE_MapTools";
					count = 1;
				};
			};
		class TransportBackpacks {
			class _xx_gunbag
				{
					backpack = "BN_M252_Gun_Bag";
					count = 1;
				};
			class _xx_tripodbag
				{
					backpack = "BN_M252_Bipod_Bag";
					count = 1;
				};
			class _xx_sidor
				{
					backpack = "rhsusf_assault_eagleaiii_coy";
					count = 1;
				};	
			class _xx_stake
				{
					backpack = "tu_arty_aiming_stake_bag";
					count = 2;
				};	
		};
		class TransportMagazines {};
	};

	
	class BN_artillery_box: ACE_Box_Misc {
		displayName = "Контейнер с буссолью";
//		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		maximumload = 380;
		class TransportWeapons {};
		class TransportItems {
			class _xx_maptools
				{
					name = "ACE_MapTools";
					count = 1;
				};
			class _xx_log	{
					name  = "tu_decoration_log";
					count = 1;
				};
			};
		class TransportBackpacks {
			class _xx_gunbag
				{
					backpack = "BN_Aiming_Circle_Bag";
					count = 1;
				};
			class _xx_stake
				{
					backpack = "tu_arty_aiming_stake_bag";
					count = 2;
				};
			class _xx_collimator
				{
					backpack = "tu_arty_collimator_bag";
					count = 2;
				};
		};
		class TransportMagazines {};
	};
	
//	class assembleInfo;
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class RHS_NSV_Gun_Bag: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	class RHS_NSV_Tripod_Bag: Weapon_Bag_Base
	{
		class assembleInfo;
	};
	
	class BN_M224_Gun_Bag: RHS_NSV_Tripod_Bag
	{
		displayName = "Вьюк со стволом М224";
		_generalMacro = "TU_ARTY_M224_mortar_WD";
		mass = 180;
		class assembleInfo: assembleInfo
		{
			assembleTo = "TU_ARTY_M224_mortar_WD";
			dissasembleTo[] = {};
			base[] = {"BN_M224_Bipod_Bag"};
			primary = 1;
			displayName = "миномет М224";
		};
	};

	class BN_M252_Gun_Bag: RHS_NSV_Tripod_Bag
	{
		displayName = "Вьюк со стволом М252";
		_generalMacro = "TU_ARTY_M252_mortar_WD";
		mass = 180;
		class assembleInfo: assembleInfo
		{
			assembleTo = "TU_ARTY_M252_mortar_WD";
			dissasembleTo[] = {};
			base[] = {"BN_M252_Bipod_Bag"};
			primary = 1;
			displayName = "миномет М252";
		};
	};
	
	class BN_M224_Bipod_Bag: RHS_NSV_Gun_Bag
	{
		mass = 421;
		displayName = "Вьюк с плитой М224";
		_generalMacro = "TU_ARTY_M224_mortar_WD";
		class assembleInfo: assembleInfo
		{
			primary = 0;
			displayName = "миномет М224";
			assembleTo = "";
			dissasembleTo[] = {};
			base[] = {};
		};
	};

	class BN_M252_Bipod_Bag: RHS_NSV_Gun_Bag
	{
		mass = 421;
		displayName = "Вьюк с плитой М252";
		_generalMacro = "TU_ARTY_M252_mortar_WD";
		class assembleInfo: assembleInfo
		{
			primary = 0;
			displayName = "миномет М252";
			assembleTo = "";
			dissasembleTo[] = {};
			base[] = {};
		};
	};
	
	class BN_Aiming_Circle_Bag: RHS_NSV_Tripod_Bag
	{
		mass = 160;
//		model = "\tu_arty\ace_arty_m2a2_aiming_circle_wep";
// 		модель не работает пока
		displayName = "Буссоль (сложена)";
		// сборка-разборка реализована через скрипты
		/*
		_generalMacro = "bn_ace2_aiming_circle";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "буссоль";
			assembleTo = "bn_ace2_aiming_circle";
			dissasembleTo[] = {};
			base[] = {};
		};*/
	};
	
	class Land_RedWhitePole_F;
	class TU_Arty_Aiming_Stake: Land_RedWhitePole_F {
		displayName = "Прицельная вешка";
		simulation = "house";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"tu_arty_aiming_stake_bag"};
			displayName = "прицельную вешку";
		};
		
		init = "(_this select 0) enableSimulation false;";
	};
	
	class tu_arty_aiming_stake_bag: RHS_NSV_Tripod_Bag {
		displayName = "Прицельная вешка";
		mass = 15;
		picture = "\tu_arty\data\equip\stake.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "прицельную вешку";
			assembleTo = "TU_Arty_Aiming_Stake";
			dissasembleTo[] = {};
			base = "";
		};
	};
	
	class tu_arty_collimator_bag: RHS_NSV_Tripod_Bag {
		displayName = "Орудийный коллиматор";
		mass = 80;
		picture = "\tu_arty\data\equip\collimator_item_ca.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "орудийный коллиматор";
			assembleTo = "tu_arty_collimator";
			dissasembleTo[] = {};
			base = "";
		};
	};
			
	class tu_arty_collimator_test: Land_RedWhitePole_F
	{
		model = "\tu_arty\sa_collimator_test";
		scope = 1;
		animated = true;
		
		init = "(_this select 0) enableSimulation false;";
		
		class AnimationSources {
			class mask
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			
			class offset {
				source = "user";
				animPeriod = 1e-005;
				minValue = -100;
				maxValue = 100;
			};
			
			class expand_ul {
				source = "user";
				animPeriod = 1e-005;
				minValue = -1;
				maxValue = 1;
			};
			
			class expand_ur {
				source = "user";
				animPeriod = 1e-005;
				minValue = -1;
				maxValue = 1;
			};
			
			class expand_ll {
				source = "user";
				animPeriod = 1e-005;
				minValue = -1;
				maxValue = 1;
			};
			
			class expand_lr {
				source = "user";
				animPeriod = 1e-005;
				minValue = -1;
				maxValue = 1;
			};
		};
	};
	
	
	class tu_arty_collimator: Land_RedWhitePole_F { //StaticWeapon{	
		displayName = "Орудийный коллиматор";
		simulation = "house";
		scope = 2;
		model = "\tu_arty\sa_collimator";
		icon = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\icomap_kord_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord_CA.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\kord_CA.paa";
		mapSize = 3;
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};
        ace_dragging_carryDirection = 180;
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"tu_arty_collimator_bag"};
			displayName = "орудийный коллиматор";
		};
		
		init = "(_this select 0) enableSimulation false;";

		class Reflectors {
			class Reflector {
				color[] = {1, 1, 1, 1};
				ambient[] = {1, 1, 1, 1};
				position = "optic_backlight";
				direction = "optic_proxy";
				hitpoint = "optic_backlight";
				selection = "optic_backlight";
				brightness = 0.001;
				size = 0.01;
			};
		};
		class ACE_Actions {
			class TU_ARTY_Level_Gun {
				displayName = "Горизонтировать";
				distance = 2;
				condition = "!((vectorUp _target) isEqualTo [0,0,1])";
				statement = "[7, [_target], {[_this select 0] call tu_arty_fnc_level_gun;}, {}, 'Горизонтирование'] call ace_common_fnc_progressBar;"; 
				showDisabled = 0;
				priority = 1;
				enableInside = 0;
				selection = "sight_begin";
			};			
		};		
		class UserActions{
			class use_collimator
			{
				displayName = "<t color='#CCCC88'>Орудийный коллиматор</t>";
				displayNameDefault = "";
				priority = 6;
				radius = 5;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "true";
				statement = "[this] spawn tu_arty_onAlignCollimator;";
			};			
		};		
		
		class AnimationSources
		{
			
			class elevate_optic 
			{
				source = "user";
				animPeriod = 0.01;
				minValue = -300;
				maxValue = 300;
			};			
			class rotate_optic 
			{
				source = "user";
				animPeriod = 0.01;
				minValue = -6400;
				maxValue = 6400;
			};
		};
	};
	
	class RHS_M119_base : StaticCannon {
		dlc = RHS_USAF;
		accuracy = 0.12;
		cost = 10000;
		availableForSupportTypes[] = {"Artillery"};
		artilleryScanner = 1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1", "SlingLoadCargo2", "SlingLoadCargo3"};
		displayName = $STR_RHS_DN_M119;
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";
		model = "\tu_arty\m119";
		picture = "\rhsusf\addons\rhsusf_heavyweapons\data\ico\M119_CA.paa";
		icon = "\rhsusf\addons\rhsusf_heavyweapons\data\map_ico\icomap_m119_CA.paa";
		driveOnComponent[] = {"wheel_1_1", "wheel_1_2"};
		mapSize = 4.5;
		cargoAction[] = {};
		typicalCargo[] = {};
		transportSoldier = 0;
		//memoryPointsGetInCargo = "pos_cargo_dir";
		//memoryPointsGetInCargoDir = "pos_cargo";
		gunnerHasFlares = 1;
		ace_cargo_canLoad = 0;
		bn_arty_milSys = 6400;
		bn_arty_rounding_T = 1;
		bn_arty_show_firemode = 0;
		tu_arty_sight = 3;
		
		class Damage {
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\m119_howitzer\data\m119.rvmat", "rhsusf\addons\rhsusf_heavyweapons\m119_howitzer\data\m119.rvmat", "rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"};
		};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				weapons[] = {"bn_rhs_weap_M119"};
				magazines[] = {};
				//weapons[] = {"RHS_weap_M119"};
				//magazines[] = {"RHS_mag_m1_he_12", "rhs_mag_m314_ilum_4", "rhs_mag_m60a2_smoke_4"};
				gunnerAction = "rhs_M119_Gunner";
				//gunnerOpticsModel = "\rhsusf\addons\rhsusf_heavyweapons\M119_Howitzer\optika_M119";
				gunnerOpticsModel = "\tu_arty\SightUnit";
				gunnerOpticsEffect[] = {"OpticsCHAbera1", "OpticsBlur2"};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				//elevationMode = 1;			
				//turretInfoType = "RHSUSF_gui_optic_mortar";
				turretinfotype = "RscWeaponZeroing";
				minElev = -6;
				maxelev = 72;
				minTurn = -6;
				maxTurn = 6;
				maxVerticalRotSpeed = 0.25;
				maxHorizontalRotSpeed = 0.1;
				
				class ViewOptics:ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.12;
					minFov = 0.12;
					maxFov = 0.12;
				};
				class ViewGunner:ViewGunner {
				    initAngleX = 30;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
				
				class OpticsIn {
					class Wide : ViewOptics {
						gunnerOpticsModel = "\tu_arty\SightUnit";
						initFov = 0.12;
						minFov = 0.12;
						maxFov = 0.12;
						visionMode[] = {"Normal"};
					};
					
					class Night : Wide {
						gunnerOpticsModel = "\tu_arty\SightUnit_night";
					};
				};
			};
		};
		
		class AnimationSources {
			
			class MainTurret_RotateFast {
				source = "user";
				animPeriod = 0.0060;
			};
			
			class fold_arty {
				source = "door";
				animPeriod = 1.8;
			};
			
			class fold_arty_gun {
				source = "user";
				animPeriod = 1.8;
			};
			
			class fold_arty_plate : fold_arty_gun {
				animPeriod = 0.001;
			};
			
			class fold_arty_handler : fold_arty_plate {
				mass = -1;
				displayName = "fold gun";
				author = $STR_RHSUSF_AUTHOR_FULL;
				onPhaseChanged = "[_this select 0,_this select 1] call rhs_fnc_m119_fold;";
			};
			
			class recoil_source {
				source = "reload";
				weapon = "RHS_weap_M119";
			};
			
			class muzzle_hide_arty : recoil_source {};
			
			class OpticElevate {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue = 0;
				maxValue = 1280;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};

			class OpticRevolve {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -6400;
				maxValue = 6400;
			};
			
			class OpticSwing {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -400;
				maxValue = 400;
			};
		};
		
		class Library {
			libTextDesc = $STR_RHS_LIB_M119;
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 450;
		
		class EventHandlers : DefaultEventhandlers {
			class RHSUSF_EventHandlers {
				fired = "_this spawn rhs_fnc_fired_m119";
			};
		};
		
		class UserActions {
			
			class tu_arty_show_mpm44m
			{
				displayName = "<t color='#CCCCCC'>Прицел M137A1</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && {(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))};";
				statement = "cutRsc ['TU_ARTY_D_light','PLAIN'];";
			};
			
			delete Unfold;
			delete Fold;
		};
		
		
		class ACE_Actions: ACE_Actions {
			
			class ACE_MainActions: ACE_MainActions {
				
				class TU_ARTY_setOwner {
					displayName = "Фикс управления";
					distance = 3;
					condition = "true";
					statement = "[_target, _player] call tu_arty_fnc_setOwner";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};	

				class bn_fold_gun {
					displayName = "В походное положение";
					distance = 3;
					condition = "([] call tu_arty_fnc_towing_enabled) && !(_target getVariable ['tu_arty_folded',false])";
					statement = "[_target] call tu_arty_fnc_fold_gun";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
				class bn_unfold_gun {
					displayName = "В боевое положение";
					distance = 3;
					condition = "(_target getVariable ['tu_arty_folded',false])";
					statement = " [_target] call tu_arty_fnc_unfold_gun";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
			};
			
			class TU_ARTY_Move_Tripod {
				displayName = "Развернуть";
				distance = 2;
				condition = "(_target animationPhase 'fold_plate_move') == 0"; //"isNil (_target getVariable ['bn_drag_handle',nil]);";
				statement = "[_target] call tu_arty_fnc_shift;";
				showDisabled = 0;
				priority = 1;
				hotkey = "M";
				enableInside = 0;
				selection = "aimpoint";
			};
			
			class bn_tow_gun {
					displayName = "Прицепить";
					distance = 3;
					condition = "([] call tu_arty_fnc_towing_enabled) && (_target getVariable ['tu_arty_folded',false]) && (isNull (attachedTo _target))";
					statement = "[_target] call tu_arty_fnc_tow_stuff";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
					selection = "slingloadcargo3";
					//position = "[0,3.2,-0.9]";
				};
				
			class bn_untow_gun {
				displayName = "Отцепить";
				distance = 3;
				condition = "(_target getVariable ['tu_arty_folded',false]) && !(isNull (attachedTo _target))";
				statement = "[_target] call tu_arty_fnc_untow_stuff";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				selection = "slingloadcargo3";
				//position = "[0,3.2,-0.9]";
			};
			
			class bn_level_howitzer {
				displayName = "Горизонтировать";
				distance = 4;
				condition = "!(_target getVariable ['tu_arty_folded',false]) && (isNull (attachedTo _target))";
				statement = "[_target] call tu_arty_fnc_level_howitzer";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				selection = "horizon";
			};
		};
	};
	
	class rhs_D30_base: StaticCannon
	{
		dlc = "RHS_AFRF";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3"};
		accuracy = 0.12;
		cost = 10000;
		availableForSupportTypes[] = {"Artillery"};
		artilleryScanner = 1;
		displayName = "$STR_rhs_DN_D30";
		vehicleClass = "rhs_vehclass_artillery";
		model = "\tu_arty\D30";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_d30_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\d30_CA.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\d30_CA.paa";
		mapSize = 4.5;
		cargoAction[] = {};
		typicalCargo[] = {};
		transportSoldier = 0;
		gunnerHasFlares = 1;
		driveOnComponent[] = {"leftw","slide"};
		//memoryPointsGetInCargo = "pos_cargo_dir";
		//memoryPointsGetInCargoDir = "pos_cargo";
		ace_cargo_canLoad = 0;
		armor = 40;
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_firemode = 0;
		tu_arty_sight = 3;
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunBeg = "Usti hlavne";
				gunEnd = "Konec hlavne";
				weapons[] = {"bn_rhs_weap_D30"};
				magazines[] = {};
				gunnerAction = "rhs_D30_Gunner";
				//gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30";
				gunnerOpticsModel = "\tu_arty\SightUnit";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				//elevationMode = 1;			
				//turretinfotype = "rhs_gui_optic_mortar";
				turretinfotype = "RscWeaponZeroing";
				minElev = -7.2;
				maxelev = 72;
				minTurn = -180;
				maxTurn = 180;
				maxVerticalRotSpeed = 0.25;
				maxHorizontalRotSpeed = 0.1;
				
				class ViewOptics:ViewOptics {
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.12;
					minFov = 0.12;
					maxFov = 0.12;
				};
				class ViewGunner:ViewGunner {
				    initAngleX = 30;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
				
				class OpticsIn {
					class Wide : ViewOptics {
						gunnerOpticsModel = "\tu_arty\SightUnit";
						initFov = 0.12;
						minFov = 0.12;
						maxFov = 0.12;
						visionMode[] = {"Normal"};
					};
					
					class Night : Wide {
						gunnerOpticsModel = "\tu_arty\SightUnit_night";
					};
				};
			};
		};
		class HitPoints {
		class HitBody
		   {
			armor = 0.8;
			material = -1;
			name = "telo";
			visual = "zbytek";
			passThrough = 1;
			minimalHit = 0.44;
			explosionShielding = 1;
			radius = 0.25;
		   };
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "bn_rhs_weap_D30";
			};
			class muzzle_hide_arty: recoil_source{};
			class leftT_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = -2.3;
			};
			class rightT_source: leftT_source
			{
				initPhase = 0;
			};
			class leftW_source: leftT_source
			{
				initPhase = -1.7;
			};
			class rightW_source: leftW_source{};
			class maingunT_source
			{
				initPhase = 0;
			};
			class mainTurretT_source: maingunT_source{};
			class szpilki_source
			{
				source = "user";
				animPeriod = 0.1;
				initPhase = 0;
			};
			class body_source
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class d30_kolo
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			
			class MainGun {
				initPhase = 0;
			};
				
			class MainGunT {
				initPhase=0;
			};
						
			class OpticElevate {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue = 0;
				maxValue = 1200;
			};
			
			class OpticLens {
				source = "user";
				animPeriod = 0.001000;
				initPhase = 0;
				minValue=-400;
				maxValue=400;
			};

			class OpticRevolve {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -6000;
				maxValue = 6000;
			};
			
			class OpticSwing {
				source = "user";
				animPeriod = 0.002000;
				initPhase = 0;
				minValue = -400;
				maxValue = 400;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\D30\data\d30.rvmat","rhsafrf\addons\rhs_heavyweapons\D30\data\d30_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_rhs_LIB_D30";
		};
		
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 450;
		
		class EventHandlers: DefaultEventhandlers
		{
			class RHS_EventHandlers
			{
				fired = "_this spawn rhs_fnc_fired_d30";
			};
		};
		class UserActions
		{
			//class raise_pole
			//{
			//	displayName = "Поднять/опустить вешку";
			//	position = "aimpoint";
			//	radius = 2.51;
			//	onlyForplayer = 0;
			//	condition = "(alive this)";
			//	statement = "[this] call tu_arty_fnc_raise_pole;";
			//};
			
			class tu_arty_show_mpm44m
			{
				displayName = "<t color='#CCCCCC'>Прицел Д-726-45</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && {(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))};";
				statement = "cutRsc ['TU_ARTY_D_light','PLAIN'];";
			};
			/*
			class tu_arty_show_mpm44m_old
			{
				displayName = "Прицел Д-726-45 (мышь)";
				displayNameDefault = "";
				priority = 3;
				radius = 20;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == gunner this) && {(isNull (uiNamespace getVariable ['TU_ARTY_Display', displayNull]))};";
				statement = "createDialog 'tu_arty_d';";
			};
			*/
		
			delete Fold;
			delete Unfold;
		};
				
		class TransportItems {
			class _xx_tab_mag
			{
				name = "tu_arty_tables_d30";
				count = 1;
			};
		};

		class ACE_Actions: ACE_Actions {
			
			class ACE_MainActions: ACE_MainActions {
				
				class TU_ARTY_setOwner {
					displayName = "Фикс управления";
					distance = 3;
					condition = "true";
					statement = "[_target, _player] call tu_arty_fnc_setOwner";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};

				class bn_fold_gun {
					displayName = "В походное положение";
					distance = 3;
					condition = "([] call tu_arty_fnc_towing_enabled) && !(_target getVariable ['tu_arty_folded',false])";
					statement = "[_target] call tu_arty_fnc_fold_gun";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
				class bn_unfold_gun {
					displayName = "В боевое положение";
					distance = 3;
					condition = "(_target getVariable ['tu_arty_folded',false])";
					statement = "[_target] call tu_arty_fnc_unfold_gun";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
			};
			class bn_tow_gun {
					displayName = "Прицепить";
					distance = 3;
					condition = "([] call tu_arty_fnc_towing_enabled) && (_target getVariable ['tu_arty_folded',false]) && (isNull (attachedTo _target))";
					statement = "[_target] call tu_arty_fnc_tow_stuff";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
					position = "[0,3.2,-0.9]";
				};
			class bn_untow_gun {
				displayName = "Отцепить";
				distance = 3;
				condition = "(_target getVariable ['tu_arty_folded',false]) && !(isNull (attachedTo _target))";
				statement = "[_target] call tu_arty_fnc_untow_stuff";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				position = "[0,3.2,-0.9]";
			};
			class bn_level_howitzer {
				displayName = "Горизонтировать";
				distance = 4;
				condition = "!(_target getVariable ['tu_arty_folded',false]) && (isNull (attachedTo _target))";
				statement = "[_target] call tu_arty_fnc_level_howitzer";
				showDisabled = 0;
				priority = 1.1;
				enableInside = 0;
				position = "[0,0,-1]";
			};
		};
	};
	
	class rhs_D30_AT_base: rhs_D30_base{		
		model = "\rhsafrf\addons\rhs_heavyweapons\D30\D30";
	
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				elevationMode = 0;
				gunnerOpticsModel = "\rhsafrf\addons\rhs_heavyweapons\data\2Dscope_D30";
				//turretinfotype = "rhs_gui_optic_mortar";
			};
		};

		class UserActions
		{
			delete tu_arty_show_mpm44m;
		};
	}; 
	
	
	class rhs_D30_ins: rhs_D30_base
	{
		scope=2;
		side = 2;
		faction = "rhs_faction_insurgents";
		crew="rhs_g_Soldier_F";
		typicalCargo[]= {"rhs_g_Soldier_F"};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {};
			};
		};
	};
	
	class Truck_F;
	class RHS_Ural_BaseTurret: Truck_F {
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class ViewOptics;
	};
	class RHS_BM21_MSV_01: RHS_Ural_BaseTurret {
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class ViewOptics;
		/*extern*/ class GunnerOptics;
		class ACE_Actions;
		class ACE_MainActions;
	};
	
	class rhs_gaz66_vmf {
		tu_arty_gun_attachment_point[] = {0,-3.0,0.2};
		tu_arty_gun_rotation[] = {0,-0.2,1};
	};
	
	class RHS_Ural_Base  {
		tu_arty_gun_attachment_point[] = {0,-3.5,0.2}; 
		tu_arty_gun_rotation[] = {0,-0.2,1};
	};
	
	class rhsusf_hmmwe_base {
		tu_arty_gun_attachment_point[] = {0,-3.0,0.2};
		tu_arty_gun_rotation[] = {0,-0.1,1};
	};
	
	class TU_ARTY_RHS_BM21: RHS_BM21_MSV_01 {
		displayName = "BM-21 (усложн.)";
		class UserActions
			{
			  class bn_use_te
				{
					displayName = "<t color='#CCCC88'>Угломер/прицел</t>";
					displayNameDefault = "";
					priority = 3;
					radius = 20;
					position = "camera";
					showWindow = 0;
					onlyForPlayer = 1;
					condition = "(player == gunner this) && (isNull (uiNamespace getVariable ['bn_te_Display', displayNull]));";
					statement = "bn_te_handle = [_this] execVM '\bn_te\scripts\t-e.sqf';";
				};
			};
				
		bn_arty_milSys = 6000;
		bn_arty_rounding_T = 1;
		bn_arty_show_traverse = 0;
		bn_arty_show_firemode = 1;
		bn_arty_show_deflection = 1;
		tu_arty_use_offset = 1;
		tu_arty_sight_offset[] = {-1.35,-0.95,0.15};
		tu_arty_sight_offset_selection = "OsaVeze";
		gunnerCanSee = 2+4+8;
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = 1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = 0;
				maxElev = 65;
				initElev = 11.5;
				weapons[] = {"bn_rhs_weap_grad"};
				magazines[] = {"RHS_mag_40Rnd_122mm_rockets"};
				gunnerAction = "passenger_apc_narrow_generic03still";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_empty";
				gunnergetInAction = "GetInHigh";
				gunnergetOutAction = "GetOutHigh";
				stabilizedInAxes = "StabilizedInAxesNone";
				outGunnerMayFire = 1;
				usePiP = 1;
				inGunnerMayFire = 1;
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
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
				lockWhenVehicleSpeed = 1;
				elevationMode = 3;
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {
			class _xx_tables_mag
			{
				name = "tu_arty_tables_grad";
				count = 1;
			};
			class _xx_ace_maptools
			{
				name = "ACE_MapTools";
				count = 1;
			};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class bn_level_howitzer {
					displayName = "Горизонтировать";
					distance = 3;
					condition = "(isNull (attachedTo _target))";
					statement = "[_target] call tu_arty_fnc_level_howitzer";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
			};
		};
	};

	
	class rhs_gaz66_r142_msv;
	class TU_gaz66_radar: rhs_gaz66_r142_msv {
		displayName = "Индикаторная машина РЛС П-37";
		tu_arty_radar_type = "LONG RANGE AIR";
		tu_arty_radar_detection_range = 35000; // меньше реальной, но мы и так далеко не летаем
		tu_arty_radar_detection_angle = 6; //существенно больше реального, потому что у РХСного радара слишком большая частота вращения
		tu_radar_tracking_time_required = 0;
		tu_arty_radar_error = 10;
		tu_radar_show_once = 0;
		tu_arty_radar_pos = "_near_radars = nearestObjects [_this, ['rhs_p37'], 100]; if (count _near_radars > 0 && {alive (_near_radars select 0)}) exitWith {(getPos (_near_radars select 0)) vectorAdd [0,0,4]}; [0,0,0]";
		tu_arty_radar_alpha = "_near_radars = nearestObjects [_this, ['rhs_p37'], 100]; if (count _near_radars > 0) exitWith {(_near_radars select 0) getDir ((_near_radars select 0) modelToWorld ((_near_radars select 0) selectionPosition 'track_radar'))}; 0";
		tu_arty_detectable = "_this isKindOf 'Air'";
	};
	
	class Tank;
	class Tank_F: Tank {
		class ACE_Actions;
		class ACE_MainActions;
	};
	
	class rhs_2s3tank_base: Tank_F {
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class bn_level_howitzer {
					displayName = "Горизонтировать";
					distance = 3;
					condition = "(isNull (attachedTo _target))";
					statement = "[_target] call tu_arty_fnc_level_howitzer";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
				};
			};
		};
	};
	
	class UAV_01_base_F;
	class O_UAV_01_F: UAV_01_base_F {
		class ViewPilot;
		class Viewoptics;
		class Turrets;
		class MainTurret;
		class ACE_Actions;
		class ACE_MainActions;
		class Components;
	};
	
	class TU_Cheap_UAV_Red: O_UAV_01_F  {
		scope = 2;
		displayName = "Лёгкий БПЛА";
		altFullForce = 300;
		altNoForce = 600;
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		fuelCapacity = 15;
		class Components : Components                   
		{
			class SensorsManagerComponent 
			{
			};                                                                                            
		};
		class Turrets: Turrets { 
			class MainTurret: MainTurret {
				weapons[] = {};
				magazines[] = {};
				class ViewOptics: Viewoptics
				{
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					minFov = 0.6;
					maxFov = 1;
					initFov = 0.75;
					visionMode[] = {"Normal"};
				};
				class ViewGunner: Viewoptics {
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					minFov = 0.6;
					maxFov = 1;
					initFov = 0.75;
					visionMode[] = {"Normal"};
				};
				class OpticsIn {
					class Wide {
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.6;
						minFov = 0.6;
						maxFov = 0.6;
						directionStabilized = 1;
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};

					class Medium : Wide {
						opticsDisplayName = "M";
						initFov = 0.5;
						minFov = 0.5;
						maxFov = 0.5;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};

					class Narrow : Wide {
						opticsDisplayName = "N";
						initFov = 0.25;
						minFov = 0.25;
						maxFov = 0.25;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
					
				};
			};
		};
		
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = -90;
			minAngleY = -90;
			maxAngleY = -90;
			minFov = 0.6;
			maxFov = 1;
			initFov = 0.75;
			visionMode[] = {"Normal"};
		};
		
		class ViewGunner: Viewoptics {
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			minFov = 0.6;
			maxFov = 1;
			initFov = 0.75;
			visionMode[] = {"Normal"};
		};
		
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TU_cheap_UAV_backpack_Red"};
		};
		
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class bn_attach_grenade {
					displayName = "Прицепить гранату";
					distance = 3;
					condition = "(({!(isNull _x)} count (attachedObjects _target)) == 0) && (count ([player] call tu_arty_fnc_grenade_subactions) > 0) && (_target == (getConnectedUAV player))";
					statement = "";
					showDisabled = 0;
					priority = 1.1;
					enableInside = 0;
					icon = "\bn_csw_load\data\ui\load.paa";
					position = [0,0,-0.1];
					insertChildren = "[_target] call tu_arty_fnc_grenade_subactions";
				};
			};
		};
		
		class UserActions {
			class tu_arty_uav_extra_cam
			  {
				displayName = "<t color='#CCCCCC'>Доп. камера</t>";
				displayNameDefault = "";
				priority = 3;
				radius = 2;
				position = "camera";
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(isNil 'bn_uav_cam') && {((uavControl this select 0) == player) && {(uavControl this select 1) != ''}}";
				statement = "[this] spawn tu_arty_fnc_uav_cam_create";
			  };
		};
	};
	
	class TU_Cheap_UAV_Blue: TU_Cheap_UAV_Red {
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TU_cheap_UAV_backpack_Blue"};
		};
	};
	
	class TU_Cheap_UAV_Green: TU_Cheap_UAV_Red {
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_Soldier_lite_F"};
		side = 2;
		faction = "IND_F";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"TU_cheap_UAV_backpack_Green"};
		};
	};
	
	class O_UAV_01_backpack_F;
	class B_UAV_01_backpack_F;
	class I_UAV_01_backpack_F;
	class TU_cheap_UAV_backpack_Red: O_UAV_01_backpack_F {
		displayName = "Рюкзак с легким БПЛА";
		class assembleInfo {
			assembleTo = "TU_Cheap_UAV_Red";
			displayName = "лёгкий БПЛА";
			base = "";
			primary = 1;
			dissasembleTo[] = {};
		};
	};
	class TU_cheap_UAV_backpack_Blue: B_UAV_01_backpack_F {
		displayName = "Рюкзак с легким БПЛА";
		class assembleInfo {
			assembleTo = "TU_Cheap_UAV_Blue";
			displayName = "лёгкий БПЛА";
			base = "";
			primary = 1;
			dissasembleTo[] = {};
		};
	};
	
	class TU_cheap_UAV_backpack_Green: I_UAV_01_backpack_F {
		displayName = "Рюкзак с легким БПЛА";
		class assembleInfo {
			assembleTo = "TU_Cheap_UAV_Green";
			displayName = "лёгкий БПЛА";
			base = "";
			primary = 1;
			dissasembleTo[] = {};
		};
	};
	// на будущее

/*	class rhs_zsu234_aa;
	class bn_rhs_zsu234_aa: rhs_zsu234_aa {
		displayName = "ЗСУ-23-4 (усложн.)";
		tu_arty_radar_type = "SHORT RANGE AIR";
		tu_arty_radar_detection_range = 20000;
		tu_arty_radar_detection_angle = 6;
		tu_radar_tracking_time_required = 0;
		tu_arty_radar_error = 10;
		tu_radar_show_once = 0;
		tu_arty_radar_pos = "(getPos _this) vectorAdd [0,0,2]";
		tu_arty_radar_alpha = "_this getVariable ['tu_arty_fnc_firefinder_angle',0]";
		tu_arty_detectable = "_this isKindOf 'Air'";
		commanderCanSee = 4+8+16;
		gunnerCanSee = 4+8+16;
		driverCanSee = 2+8+16;
		allowTabLock = 0;
	};*/
};

// #include "interface.cpp";

#include "common.hpp"
#define TU_ARTY_GUI_GRID_X	(0)
#define TU_ARTY_GUI_GRID_Y	(0)
#define TU_ARTY_GUI_GRID_W	(0.015)
#define TU_ARTY_GUI_GRID_H	(0.02)

#define TU_ARTY_PREP_GUI_GRID_X	(0)
#define TU_ARTY_PREP_GUI_GRID_Y	(0)
#define TU_ARTY_PREP_GUI_GRID_W	(0.03)
#define TU_ARTY_PREP_GUI_GRID_H	(0.04)

class CfgMarkers {
	class ACE_MapToolFixed {
		name = "MapToolFixed";
		icon = "\tu_arty\data\mapToolFixed.paa";
		scope = 0;
		color[] = {1, 1, 1, 1};
		size = 32;
	};
	class TU_ARTY_Explosion {
		name = "TU_ARTY_Explosion";
		icon = "\tu_arty\data\explosion.paa";
		scope = 0;
		color[] = {0, 0, 0, 1};
		size = 32;
		shadow = false;
	};
};

class TU_ARTY_D {
	
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
	onLoad = "uiNamespace setVariable ['TU_ARTY_Display', _this select 0]; tu_arty_dials_handle = [{[vehicle player] call tu_arty_fnc_sight_interface_pf_handler;}, 0, []] call CBA_fnc_addPerFrameHandler; ctrlEnable [1900, false];";
	onUnload = "[tu_arty_dials_handle] call CBA_fnc_removePerFrameHandler;";
	onKeyDown = "";
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    name = "TU_ARTY_D";
    class controls {
		class Tu_Arty_RscPicture_1200: Tu_Arty_RscPicture
		{
			idc = 1200;
			type = 0;
			style = 48;
			sizeEx = 0.04;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "\tu_arty\data\sight_unit.paa";
			x = 0.83 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 1 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 23.3333 * TU_ARTY_GUI_GRID_W;
			h = 49 * TU_ARTY_GUI_GRID_H;
			
			colorText[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorActive[] = {1,1,1,1};
		};

		class Tu_Arty_RscButton_1600: Tu_Arty_RscButton
		{
			idc = 1600;
			type = 1;
			style = 0;
			sizeEx = 0.04;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "  +"; //--- ToDo: Localize;
			x = 13 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 39 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 4 * TU_ARTY_GUI_GRID_W;
			h = 10.5 * TU_ARTY_GUI_GRID_H;
			tooltip = $STR_tu_arty_increase_elevation; //--- ToDo: Localize;
			onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_el_dial_change;";
			class Attributes
			{
				align = "center";
			};				
		};
		class Tu_Arty_RscButton_1601: Tu_Arty_RscButton
			{
				idc = 1601;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "-"; //--- ToDo: Localize;
				x = 8.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 39 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 3.5 * TU_ARTY_GUI_GRID_W;
				h = 10.5 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_elevation; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_el_dial_change;";
			};
		class Tu_Arty_RscButton_1602: Tu_Arty_RscButton
			{
				idc = 1602;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "+"; //--- ToDo: Localize;
				x = 3.33 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 23 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 4 * TU_ARTY_GUI_GRID_W;
				h = 3 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_increase_deflection; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_def_change;";
			};
		class Tu_Arty_RscButton_1603: Tu_Arty_RscButton
			{
				idc = 1603;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "-"; //--- ToDo: Localize;
				x = 3.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 27 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 3.5 * TU_ARTY_GUI_GRID_W;
				h = 3 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_deflection; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_def_change;";
			};
		class Tu_Arty_RscButton_1604: Tu_Arty_RscButton_1603
			{
				idc = 1604;
				text = "^"; //--- ToDo: Localize;
				x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 17 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 2 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_increase_optic_level; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_optic_change;";
			};		
		
		class Tu_Arty_RscButton_1605: Tu_Arty_RscButton_1604
			{
				idc = 1605;
				text = "v"; //--- ToDo: Localize;
				x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 21 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 2 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_decrease_optic_level; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_optic_change;";
			};
			
		// "3.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X","6.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y"
		class Tu_Arty_RscSlider_1900: Tu_Arty_RscSlider
		{
			idc = 1900;
			type = 3;
			style = 0;
			sizeEx = 0.04;
			lineSpacing = 1;
			font = "PuristaMedium";
			x = 5.83 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 35 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			//w = 2 * TU_ARTY_GUI_GRID_W;
			w = 1.5 * TU_ARTY_GUI_GRID_W;
			h = 5 * TU_ARTY_GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0};
			color[] = {0,0,0,1}; //{0.5,0.5,0.7,1};
			colorActive[] ={0,0,0,1}; // {0.6,0.6,0.8,1};
			tooltip = $STR_tu_arty_bubble_level; //--- ToDo: Localize;
		};
		
		class Tu_Arty_RscSlider_1901: Tu_Arty_RscSlider
		{
			idc = 1901;
			type = 3;
			//style = 0;
			sizeEx = 0.04;
			lineSpacing = 1;
			font = "PuristaMedium";
			x = 10.1 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 27.2 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			//w = 2 * TU_ARTY_GUI_GRID_W;
			w = 5 * TU_ARTY_GUI_GRID_W;
			h = 1.6 * TU_ARTY_GUI_GRID_H;
			colorBackground[] = {-1,-1,-1,0};
			color[] = {0,0,0,1}; //{0.5,0.5,0.7,1};
			colorActive[] ={0,0,0,1}; // {0.6,0.6,0.8,1};
			tooltip = $STR_tu_arty_bubble_swing; //--- ToDo: Localize;
		};
		
		class Tu_Arty_RscText_Def_Small: Tu_Arty_RscText
		{
			idc = 1000;
			type = 0;
			style = 0;
			sizeEx = 0.03;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "0"; //--- ToDo: Localize;
			x = 5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 25 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 3.33333 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {-1,-1,-1,0};
			tooltip = $STR_tu_arty_deflection_value_small; //--- ToDo: Localize;
		};
		class Tu_Arty_RscText_Def_Large: Tu_Arty_RscText
		{
			idc = 1001;
			type = 0;
			style = 0;
			sizeEx = 0.03;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "30"; //--- ToDo: Localize;
			x = 11.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 22.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 2.5 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {-1,-1,-1,0};
			tooltip = $STR_tu_arty_deflection_value_large; //--- ToDo: Localize;
		};
		class Tu_Arty_RscText_1002: Tu_Arty_RscText
		{
			idc = 1002;
			type = 0;
			style = 0;
			sizeEx = 0.03;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "10"; //--- ToDo: Localize;
			x = 16.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 32 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 3.33333 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {-1,-1,-1,0};
			tooltip = $STR_tu_arty_elevation_value_large; //--- ToDo: Localize;
		};
		class Tu_Arty_RscText_1003: Tu_Arty_RscText
		{
			idc = 1003;
			type = 0;
			style = 0;
			sizeEx = 0.03;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "00"; //--- ToDo: Localize;
			x = 11.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 38.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 3.33333 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			colorText[] = {-1,-1,-1,1};
			colorBackground[] = {-1,-1,-1,0};
			tooltip = $STR_tu_arty_elevation_value_small; //--- ToDo: Localize;
		};

		class Tu_Arty_RscText_1004: Tu_Arty_RscText
		{
			idc = 1004;
			type = 0;
			style = 0;
			sizeEx = 0.03;
			lineSpacing = 1;
			font = "PuristaMedium";
			text = "00"; //--- ToDo: Localize;
			x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;			
			y = 19 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 2 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,0};
			tooltip = $STR_tu_arty_lens_value; //--- ToDo: Localize;
		};
	};
 };
 
 ////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by [ODK]Bn_, v1.063, #Luwulu)
////////////////////////////////////////////////////////

class TU_ARTY_PREP_D {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
    onLoad = "uiNamespace setVariable ['TU_ARTY_PREP_display', _this select 0]; [_this select 0] call tu_arty_fnc_prep_diag_init";
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    name = "TU_ARTY_PREP_D";
	class controls {
		class Tu_Arty_Background {    
			idc = -1;
			type = 0;
			style = 2; //centre text
			x = 8 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 1 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 25 * TU_ARTY_PREP_GUI_GRID_W;
			h = 15 * TU_ARTY_PREP_GUI_GRID_H;
			font = "EtelkaNarrowMediumPro";
			sizeEx = 0.03;
			colorBackground[] = {0.5,0.5,0.5,0.5};
			colorText[] = {0,0,1,1};
			text = "";
		};  
	
		class Tu_Arty_RscCombo_2100: Tu_Arty_RscCombo
		{
			idc = 2100;
			x = 15.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 4 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 16 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
			onLBSelChanged = "[] call tu_arty_prep_init_charge_list;";
		};
		class Tu_Arty_RscText_1000: Tu_Arty_RscText
		{
			idc = 3000;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscText_1000;
			x = 15.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 1.5 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 12 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
		};
		class Tu_Arty_RscText_1001: Tu_Arty_RscText
		{
			idc = 3001;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscText_1001;
			x = 8.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 4 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 6 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
		};
		class Tu_Arty_RscText_1002: Tu_Arty_RscText
		{
			idc = 3002;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscText_1002;
			x = 8.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 8 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 6 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
		};
		class Tu_Arty_RscCombo_2101: Tu_Arty_RscCombo
		{
			idc = 3101;
			x = 15.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 6 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 16 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
		};
		class Tu_Arty_RscSlider_1900: Tu_Arty_RscSlider
		{
			idc = 3900;
			x = 15.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 8 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 16 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
			color[] = {0,0,0,1};
			colorActive[] = {0,0,0,1};
			onSliderPosChanged = "[] call tu_arty_prep_update;";
		};
		class Tu_Arty_RscText_1003: Tu_Arty_RscText
		{
			idc = 3003;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscText_1003;
			x = 8.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 6 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 6 * TU_ARTY_PREP_GUI_GRID_W;
			h = 1 * TU_ARTY_PREP_GUI_GRID_H;
		};
		class Tu_Arty_RscButton_1600: Tu_Arty_RscButton
		{
			idc = 3600;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscButton_1600;
			x = 18.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 10 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 6 * TU_ARTY_PREP_GUI_GRID_W;
			h = 2 * TU_ARTY_PREP_GUI_GRID_H;
			soundClick[] = 
			{
				"\bn_te\sound\agm_scopes_click",
				0.07,
				1
			};
			onMouseButtonClick = "[] call tu_arty_prep_start;";
		};
		class Tu_Arty_RscButton_1601: Tu_Arty_RscButton_1600
		{
			idc = 3601;
			text = $STR_A3_tu_arty_prep_shells_dialog_RscButton_1601;
			x = 25.5 * TU_ARTY_PREP_GUI_GRID_W + TU_ARTY_PREP_GUI_GRID_X;
			y = 10 * TU_ARTY_PREP_GUI_GRID_H + TU_ARTY_PREP_GUI_GRID_Y;
			w = 6 * TU_ARTY_PREP_GUI_GRID_W;
			h = 2 * TU_ARTY_PREP_GUI_GRID_H;
			onMouseButtonClick = "closeDialog 2;";
		};
	};
};

class TU_ARTY_FIREFINDER_D {
    idd = -1;
    movingEnable = 0;
    enableSimulation = 1;
    enableDisplay = 1;
    onLoad = "uiNamespace setVariable ['TU_ARTY_FIREFINDER_display', _this select 0];";
    duration = 1e+011;
    fadein = 0;
    fadeout = 0;
    name = "TU_ARTY_FIREFINDER_D";
	class controls {
		class Tu_Arty_FF_Background {    
			idc = -1;
			type = 0;
			style = 2; //centre text
			x = 8 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 1 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 25 * TU_ARTY_GUI_GRID_W;
			h = 15 * TU_ARTY_GUI_GRID_H;
			font = "EtelkaNarrowMediumPro";
			sizeEx = 0.03;
			colorBackground[] = {0.5,0.5,0.5,0.5};
			colorText[] = {0,0,1,1};
			text = "";
		};  
		class Tu_Arty_RscSlider_5900: Tu_Arty_RscSlider
		{
			idc = 5900;
			x = 15.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 8 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 16 * TU_ARTY_GUI_GRID_W;
			h = 1 * TU_ARTY_GUI_GRID_H;
			color[] = {0,0,0,1};
			colorActive[] = {0,0,0,1};
			onSliderPosChanged = "sliderSetRange [5900, 0, 359]; ctrlSetText [5003, 'Азимут: ' + str(floor(sliderPosition 5900))];";
		};
		class Tu_Arty_RscText_5003: Tu_Arty_RscText
		{
			idc = 5003;
			text = "0";
			x = 8.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 6 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 16 * TU_ARTY_GUI_GRID_W;
			h = 1 * TU_ARTY_GUI_GRID_H;
		};
		class Tu_Arty_RscButton_1600: Tu_Arty_RscButton
		{
			idc = 5600;
			text = "Ок";
			x = 18.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 10 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 6 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			soundClick[] = 
			{
				"\bn_te\sound\agm_scopes_click",
				0.07,
				1
			};
			onMouseButtonClick = "(vehicle player) setVariable ['tu_arty_fnc_firefinder_angle',floor(sliderPosition 5900), true]; closeDialog 1;";
	
		};
		class Tu_Arty_RscButton_1601: Tu_Arty_RscButton_1600
		{
			idc = 5601;
			text = "Отмена";
			x = 25.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
			y = 10 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
			w = 6 * TU_ARTY_GUI_GRID_W;
			h = 2 * TU_ARTY_GUI_GRID_H;
			onMouseButtonClick = "closeDialog 2;";
		};
	};
};

class RscTitles {
	class bn_uav_sight {
		idd = -1;
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "";
		onUnload = "";
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		name = "bn_uav_sight";
		class RscPicture;
		class controls {
			class BN_UAV_SIGHT_PIP: RscPicture {
				idc = 932009;
				type = 0;
				style = 48;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "#(argb,256,256,1)r2t(bnuavsight,1.0);";
				colorText[] = {1,1,1, 0.98};
				colorBackground[] = {1,0,0, 0};
				shadow = 1;

				x = -0.3;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
				y = -0.25; //(0 + 0.19*0.3) * safezoneH + safezoneY;
				w = 0.4 * safezoneW / (4/3);
				h = 0.4 * safezoneH;
			};
			class BN_UAV_SIGHT_LINES: RscPicture {
				idc = 932009;
				type = 0;
				style = 48;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "\tu_arty\data\4x_m22.paa";
				colorText[] = {1,1,1, 0.98};
				colorBackground[] = {1,0,0, 0};
				shadow = 0;

				x = -0.3;//(0.5-0.4/2 + 0.45*0.4) * safezoneW + safezoneX;
				y = -0.25; //(0 + 0.19*0.3) * safezoneH + safezoneY;
				w = 0.4 * safezoneW / (4/3);
				h = 0.4 * safezoneH;
			};
		};
	};
	class TU_ARTY_D_light {
		
		idd = -1;
		movingEnable = 0;
		enableSimulation = 1;
		enableDisplay = 1;
		onLoad = "uiNamespace setVariable ['TU_ARTY_Display', _this select 0]; tu_arty_dials_handle = [{[vehicle player] call tu_arty_fnc_sight_interface_pf_handler;}, 0, []] call CBA_fnc_addPerFrameHandler; ctrlEnable [1900, false];";
		onKeyDown = "";
		duration = 1e+011;
		fadein = 0;
		fadeout = 0;
		name = "TU_ARTY_D";
		class controls {
			class Tu_Arty_RscPicture_1200: Tu_Arty_RscPicture
			{
				idc = 1200;
				type = 0;
				style = 48;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "\tu_arty\data\sight_unit.paa";
				x = 0.83 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 1 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 23.3333 * TU_ARTY_GUI_GRID_W;
				h = 49 * TU_ARTY_GUI_GRID_H;
				
				colorText[] = {1,1,1,1};
				colorBackground[] = {1,1,1,1};
				colorActive[] = {1,1,1,1};
			};
	
			class Tu_Arty_RscButton_1600: Tu_Arty_RscButton
			{
				idc = 1600;
				type = 1;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "  +"; //--- ToDo: Localize;
				x = 13 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 39 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 4 * TU_ARTY_GUI_GRID_W;
				h = 10.5 * TU_ARTY_GUI_GRID_H;
				tooltip = $STR_tu_arty_increase_elevation; //--- ToDo: Localize;
				onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_el_dial_change;";
				class Attributes
				{
					align = "center";
				};				
			};
			class Tu_Arty_RscButton_1601: Tu_Arty_RscButton
				{
					idc = 1601;
					type = 1;
					style = 0;
					sizeEx = 0.04;
					lineSpacing = 1;
					font = "PuristaMedium";
					text = "-"; //--- ToDo: Localize;
					x = 8.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
					y = 39 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
					w = 3.5 * TU_ARTY_GUI_GRID_W;
					h = 10.5 * TU_ARTY_GUI_GRID_H;
					tooltip = $STR_tu_arty_decrease_elevation; //--- ToDo: Localize;
					onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_el_dial_change;";
				};
			class Tu_Arty_RscButton_1602: Tu_Arty_RscButton
				{
					idc = 1602;
					type = 1;
					style = 0;
					sizeEx = 0.04;
					lineSpacing = 1;
					font = "PuristaMedium";
					text = "+"; //--- ToDo: Localize;
					x = 3.33 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
					y = 23 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
					w = 4 * TU_ARTY_GUI_GRID_W;
					h = 3 * TU_ARTY_GUI_GRID_H;
					tooltip = $STR_tu_arty_increase_deflection; //--- ToDo: Localize;
					onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_def_change;";
				};
			class Tu_Arty_RscButton_1603: Tu_Arty_RscButton
				{
					idc = 1603;
					type = 1;
					style = 0;
					sizeEx = 0.04;
					lineSpacing = 1;
					font = "PuristaMedium";
					text = "-"; //--- ToDo: Localize;
					x = 3.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
					y = 27 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
					w = 3.5 * TU_ARTY_GUI_GRID_W;
					h = 3 * TU_ARTY_GUI_GRID_H;
					tooltip = $STR_tu_arty_decrease_deflection; //--- ToDo: Localize;
					onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_def_change;";
				};
			class Tu_Arty_RscButton_1604: Tu_Arty_RscButton_1603
				{
					idc = 1604;
					text = "^"; //--- ToDo: Localize;
					x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
					y = 17 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
					w = 2 * TU_ARTY_GUI_GRID_W;
					h = 2 * TU_ARTY_GUI_GRID_H;
					tooltip = $STR_tu_arty_increase_optic_level; //--- ToDo: Localize;
					onMouseButtonClick = "(_this + [1]) call tu_arty_fnc_optic_change;";
				};		
			
			class Tu_Arty_RscButton_1605: Tu_Arty_RscButton_1604
				{
					idc = 1605;
					text = "v"; //--- ToDo: Localize;
					x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
					y = 21 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
					w = 2 * TU_ARTY_GUI_GRID_W;
					h = 2 * TU_ARTY_GUI_GRID_H;
					tooltip = $STR_tu_arty_decrease_optic_level; //--- ToDo: Localize;
					onMouseButtonClick = "(_this + [-1]) call tu_arty_fnc_optic_change;";
				};
				
			// "3.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X","6.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y"
			class Tu_Arty_RscSlider_1900: Tu_Arty_RscSlider
			{
				idc = 1900;
				type = 3;
				style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				x = 5.83 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 35 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				//w = 2 * TU_ARTY_GUI_GRID_W;
				w = 1.5 * TU_ARTY_GUI_GRID_W;
				h = 5 * TU_ARTY_GUI_GRID_H;
				colorBackground[] = {-1,-1,-1,0};
				color[] = {0,0,0,1}; //{0.5,0.5,0.7,1};
				colorActive[] ={0,0,0,1}; // {0.6,0.6,0.8,1};
				tooltip = $STR_tu_arty_bubble_level; //--- ToDo: Localize;
			};
			
			class Tu_Arty_RscSlider_1901: Tu_Arty_RscSlider
			{
				idc = 1901;
				type = 3;
				//style = 0;
				sizeEx = 0.04;
				lineSpacing = 1;
				font = "PuristaMedium";
				x = 10.1 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 27.2 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				//w = 2 * TU_ARTY_GUI_GRID_W;
				w = 5 * TU_ARTY_GUI_GRID_W;
				h = 1.6 * TU_ARTY_GUI_GRID_H;
				colorBackground[] = {-1,-1,-1,0};
				color[] = {0,0,0,1}; //{0.5,0.5,0.7,1};
				colorActive[] ={0,0,0,1}; // {0.6,0.6,0.8,1};
				tooltip = $STR_tu_arty_bubble_swing; //--- ToDo: Localize;
			};
			
			class Tu_Arty_RscText_Def_Small: Tu_Arty_RscText
			{
				idc = 1000;
				type = 0;
				style = 0;
				sizeEx = 0.03;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "0"; //--- ToDo: Localize;
				x = 5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 25 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 3.33333 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_deflection_value_small; //--- ToDo: Localize;
			};
			class Tu_Arty_RscText_Def_Large: Tu_Arty_RscText
			{
				idc = 1001;
				type = 0;
				style = 0;
				sizeEx = 0.03;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "30"; //--- ToDo: Localize;
				x = 11.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 22.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 2.5 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_deflection_value_large; //--- ToDo: Localize;
			};
			class Tu_Arty_RscText_1002: Tu_Arty_RscText
			{
				idc = 1002;
				type = 0;
				style = 0;
				sizeEx = 0.03;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "10"; //--- ToDo: Localize;
				x = 16.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 32 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 3.33333 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_elevation_value_large; //--- ToDo: Localize;
			};
			class Tu_Arty_RscText_1003: Tu_Arty_RscText
			{
				idc = 1003;
				type = 0;
				style = 0;
				sizeEx = 0.03;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "00"; //--- ToDo: Localize;
				x = 11.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;
				y = 38.5 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 3.33333 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				colorText[] = {-1,-1,-1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_elevation_value_small; //--- ToDo: Localize;
			};
	
			class Tu_Arty_RscText_1004: Tu_Arty_RscText
			{
				idc = 1004;
				type = 0;
				style = 0;
				sizeEx = 0.03;
				lineSpacing = 1;
				font = "PuristaMedium";
				text = "00"; //--- ToDo: Localize;
				x = 22.5 * TU_ARTY_GUI_GRID_W + TU_ARTY_GUI_GRID_X;			
				y = 19 * TU_ARTY_GUI_GRID_H + TU_ARTY_GUI_GRID_Y;
				w = 2 * TU_ARTY_GUI_GRID_W;
				h = 2 * TU_ARTY_GUI_GRID_H;
				colorText[] = {1,1,1,1};
				colorBackground[] = {-1,-1,-1,0};
				tooltip = $STR_tu_arty_lens_value; //--- ToDo: Localize;
			};
		};
	 };
};

class RscListNBox;
class RscPicture;
class RscText;
class RscActiveText;
class ACE_82mm_RangeTable_Dialog {
    class ControlsBackground {
        class TableBackground: RscPicture {
            idc = -1;
            text = "\tu_arty\data\RangeTable_background.paa";
            x = "18 *(safeZoneH / 40) +       (safezoneX + (safezoneW - safeZoneH)/2)";
            y = "1 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
            w = "16.7634559672906 * (safeZoneH / 40)";
            h = "23 * ((safeZoneH / 1.2) / 25)";
            colorBackground[] = {1,1,1,1};
        };
    };
    class controls {
        class TheTable: RscListNBox {
            idc = 20001;
            x = "18 *(safeZoneH / 40) +       (safezoneX + (safezoneW - safeZoneH)/2)";
            y = "4.36 * ((safeZoneH / 1.2) / 25) +   (safezoneY + (safezoneH - (safeZoneH / 1.2))/2)";
            w = "16.7634559672906 * (safeZoneH / 40)";
            h = "19.64 * ((safeZoneH / 1.2) / 25)";
            columns[] = {(0/867),(76/867),(151/867),(214/867),(272/867),(333/867),
            (395/867),(453/867),(514/867),(582/867),(640/867),(714/867),(779/867)};
        };		
		class CloseBackground: RscText {
            idc = -1;
            x = "34.7634559672906 *(safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2)";
        };
        class CloseActiveText: RscActiveText {
            idc = -1;
            x = "34.7634559672906 *(safeZoneH / 40) + (safezoneX + (safezoneW - safeZoneH)/2)";
        };
    };
};
