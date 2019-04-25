class CfgPatches
{
	class bn_csw_load
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]={"A3_Weapons_F", "ace_interaction", "Extended_Eventhandlers", "rhsusf_c_hmmwv", "A3_Soft_F_MRAP_01","rhsusf_c_heavyweapons","rhsusf_c_statics","rhs_c_heavyweapons","rhs_a2port_car","rhs_c_a2port_car","rhsusf_c_m1a1"};
		version = "1.29";
		author = "Tushino Serious Games, [ODK]Bn_, [RFP]Griggs, [HA]PARTYzan";
		authorUrl = "http://серьёзныеигры.рф";
	};
};


class CfgFunctions {
	class pzn_csw {
		class category {
			class tow_unasssemble {
				file = "bn_csw_load\scripts\unassemble.sqf";
				recompile = 1;
			};
		};
	};
	class bn_csw {
		class bn_category {
			class load
			{
				file = "bn_csw_load\scripts\bn_csw_load.sqf";
			};
			class load_loader
			{
				file = "bn_csw_load\scripts\bn_csw_load_loader.sqf";
			};
			class load_loader_turnedout
			{
				file = "bn_csw_load\scripts\bn_csw_load_loader_turnedout.sqf";
			};
			class load_unloader
			{
				file = "bn_csw_load\scripts\bn_csw_load_unloader.sqf";
			};
			class load_unloader_turnedout
			{
				file = "bn_csw_load\scripts\bn_csw_load_unloader_turnedout.sqf";
			};
			class unload
			{
				file = "bn_csw_load\scripts\bn_csw_unload.sqf";
			};
			class atgm_load
			{
				file = "bn_csw_load\scripts\bn_csw_atgm_load.sqf";
			};
			class atgm_unloadbridge
			{
				file = "bn_csw_load\scripts\bn_csw_atgm_unloadbridge.sqf";
			};
			class atgm_unload
			{
				file = "bn_csw_load\scripts\bn_csw_atgm_unload.sqf";
			};
			class atgm_unload2
			{
				file = "bn_csw_load\scripts\bn_csw_atgm_unload2.sqf";
			};
			class remoteLoadbridge
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Loadbridge.sqf";
			};
			class remoteLoadID
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Load.sqf";
			};
			class remoteLoadbridge_loader
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Loadbridge_loader.sqf";
			};
			class remoteLoadID_loader
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Load_loader.sqf";
			};
			class remoteLoadID_unloader
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Load_unloader.sqf";
			};
			class remoteUnloadbridge
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Unloadbridge.sqf";
			};
			class remoteUnloadID
			{
				file = "bn_csw_load\scripts\bn_csw_Post_Init_Unload.sqf";
			};
			class add_subactions
			{
				file = "bn_csw_load\scripts\bn_csw_add_subactions.sqf";
			};
			class add_subactions_loader
			{
				file = "bn_csw_load\scripts\bn_csw_add_subactions_loader.sqf";
			};
			class add_subactions_loader_turnedout
			{
				file = "bn_csw_load\scripts\bn_csw_add_subactions_loader_turnedout.sqf";
			};
			class add_subactions_unloader
			{
				file = "bn_csw_load\scripts\bn_csw_add_subactions_unloader.sqf";
			};
			class add_subactions_unloader_turnedout
			{
				file = "bn_csw_load\scripts\bn_csw_add_subactions_unloader_turnedout.sqf";
			};
			class contains_magazines
			{
				file = "bn_csw_load\scripts\bn_csw_contains_magazines.sqf";
			};
		};
	};

		class RHS
	{
		tag = "RHS";
		class WeaponsEH
		{
			class back_saclosGuide
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
		};
		class functions
		{
			class Abrams_Loader
			{
				file = "bn_csw_load\scripts\empty.sqf";
				description = "Loader Script for M1 Abrams series";
			};
			class M1_defineLoadout
			{
				file = "bn_csw_load\scripts\empty.sqf";
				description = "M1 Abrams Init";
			};
		};
	};
};


class CfgAmmo {
	
	class G_40mm_HE;
	//m384 в 1,5 раза слабее вог30 и в 1,1 слабее вог 17
	class BN_G_40mm_HE: G_40mm_HE {
		airFriction = -0.00046; //40 = 2100
		timeToLive = 60;
		ace_frag_metal = 190;     // metal in grams
		ace_frag_charge = 45;    // explosive in grams
		ace_frag_gurney_c = 2830 ; // Gurney velocity constant for explosive type. See: http://en.wikipedia.org/wiki/Gurney_equations
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		indirectHit = 6;
		indirectHitRange = 2;
	};
	//http://www.dogswar.ru/boepripasy/granaty/7402-30-mm-vystrely-vog-1.html
	class rhs_ammo_VOG30: G_40mm_HE
	{
		indirectHit = 8;
		indirectHitRange = 2.5;
		airFriction = -0.00049;
		timeToLive = 60;
		ace_frag_metal = 280;     // metal in grams
		ace_frag_charge = 36;    // explosive in grams
		ace_frag_gurney_c = 2830 ; // Gurney velocity constant for explosive type. See: http://en.wikipedia.org/wiki/Gurney_equations
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
	};
	class rhs_ammo_GPD30: rhs_ammo_VOG30
	{
		indirectHit = 9;
		indirectHitRange = 2.5;
		airFriction = -0.00049;
	};
	class rhs_ammo_VOG17m: rhs_ammo_VOG30 {
		indirectHit = 7;
		indirectHitRange = 2.2;
		airFriction = -0.00049;
		timeToLive = 60;
		ace_frag_metal = 280;     // metal in grams
		ace_frag_charge = 36;    // explosive in grams
		ace_frag_gurney_c = 2830 ; // Gurney velocity constant for explosive type. See: http://en.wikipedia.org/wiki/Gurney_equations
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_force = 1;
		
	};
	
	class B_35mm_AA;
	class RHS_ammo_23mm_AA: B_35mm_AA
	{
		indirectHitRange = 2;
		visibleFireTime = 5;
	};
	/* 
	class rhs_ammo_rpgShell_base;
	class rhs_ammo_og9v: rhs_ammo_rpgShell_base
	{
		ace_frag_metal = 640;
		ace_frag_charge = 660;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_small_HD"};
		ace_frag_force = 1;
	};

	class rhs_ammo_pg9v : rhs_ammo_rpgShell_base {
		// airfriction = 0.3;
	}; */
};

class CfgMagazines {
	/*extern*/ class Default;

	class CA_Magazine: Default {};

	class VehicleMagazine: CA_Magazine {};

	class rhs_mag_2Rnd_TOW2A;	
	class rhs_mag_TOW2a: rhs_mag_2Rnd_TOW2A {
		descriptionShort = "Ракета BGM-71E TOW-2A в транспортно-пусковом контейнере";
		displayName = "Ракета BGM-71E TOW-2A";
		model = "\tu_konkurs\tow_mag.p3d";
		picture = "\tu_konkurs\tow_1tube_ca.paa";
		mass = 160;
	};
	class BN_rhs_mag_TOW2a: rhs_mag_TOW2a {
		descriptionShort = "Ракета BGM-71E TOW-2A в транспортно-пусковом контейнере";
		displayName = "Ракета BGM-71E TOW-2A";
		model = "\tu_konkurs\tow_mag.p3d";
		picture = "\tu_konkurs\tow_1tube_ca.paa";
		mass = 160;
	};
	
	class rhs_mag_9M115 : VehicleMagazine {
		descriptionShort = "Ракета 9М115 в транспортно-пусковом контейнере";
		displayName = "Ракета 9М115";
		model = "\tu_konkurs\metis_1tube_mag.p3d";
		picture = "\tu_konkurs\metis_1tube_ca.paa";
		mass = 80;
	};
	class rhs_mag_9M131: rhs_mag_9M115
	{
		descriptionShort = "Ракета 9М131 в транспортно-пусковом контейнере";
		displayName = "Ракета 9М131";
		model = "\tu_konkurs\metis_1tube_mag.p3d";
		picture = "\tu_konkurs\metis_1tube_ca.paa";
		mass = 80;
	};
	class rhs_mag_9M131M: rhs_mag_9M115
	{
		descriptionShort = "Ракета 9М131М1 в транспортно-пусковом контейнере";
		displayName = "Ракета 9М131М1";
		model = "\tu_konkurs\metis_1tube_mag.p3d";
		picture = "\tu_konkurs\metis_1tube_ca.paa";
		mass = 80;
	};
	class rhs_mag_9M131F: rhs_mag_9M115
	{
		descriptionShort = "Ракета 9М131Ф в транспортно-пусковом контейнере";
		displayName = "Ракета 9М131Ф";
		displayNameShort = "ПТРК 9М131Ф";
		model = "\tu_konkurs\metis_1tube_mag.p3d";
		picture = "\tu_konkurs\metis_1tube_ca.paa";
		mass = 80;
	};
	
	class RHS_mag_VOG30_30: VehicleMagazine
	{
		descriptionShort = "Коробка ВОГ-30";
		displayName = "Коробка ВОГ-30";
		initSpeed = 185;
		maxLeadSpeed = 100;
		model = "\bn_csw_load\data\models\ace_ags30_mag";
		picture = "\bn_csw_load\data\equip\m_ags30_ca.paa";
		mass = 80;
	};	
	class RHS_mag_GPD30_30: RHS_mag_VOG30_30
	{	
		descriptionShort = "Коробка ГПД-30";
		displayName = "Коробка ГПД-30";
	};
	class RHS_mag_VOG17m_30: RHS_mag_VOG30_30
	{
		descriptionShort = "Коробка ВОГ-17М";
		displayName = "Коробка ВОГ-17М";
	};
	
	class RHS_48Rnd_40mm_MK19: VehicleMagazine
	{
		ammo = "BN_G_40mm_HE";
		descriptionShort = "Коробка 40 мм гранат";
		displayName = "Коробка 40 мм гранат";
		displayNameShort = "M384 HE";
		model = "\bn_csw_load\data\models\ace_mk19_mag";
		picture = "\bn_csw_load\data\equip\m_mk19_ca.paa";
		mass = 120;
	};
	
	class rhs_mag_127x108mm_50: VehicleMagazine
	{
		descriptionShort = "Коробка 12,7x108 мм";
		displayName = "Коробка 12,7x108 мм";
		model = "\bn_csw_load\data\models\ace_kord_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		mass = 60;
	};
	
	class rhs_mag_100rnd_127x99_mag: VehicleMagazine
	{
		descriptionShort = "Коробка 12.7x99 mm NATO";
		displayName = "Коробка 12.7x99 mm NATO";
		displayNameShort = "12.7x99mm";
		model = "\bn_csw_load\data\models\ace_m2_mag";
		picture = "\bn_csw_load\data\equip\m_m2_ca.paa";
		mass = 120;
	};
	class rhs_mag_pg9v;
	class BN_rhs_mag_pg9v: rhs_mag_pg9v	{
		count = 1;
		model = "\tu_konkurs\pg9_mag.p3d";
		picture = "\bn_csw_load\data\equip\m_pg9_ca.paa";
		displayName = "$STR_RHS_MAG_PG9V";
		displayNameShort = "$STR_RHS_MAG_SH_PG9V";
		descriptionShort = "ПГ-9В, кумулятивный";
		mass = 50;
		ammo = "rhs_ammo_pg9v";
		scope = 2;
	};
	class rhs_mag_pg9n;
	class BN_rhs_mag_pg9n: rhs_mag_pg9n	{
		count = 1;
		displayName = "$STR_RHS_MAG_PG9N";
		picture = "\bn_csw_load\data\equip\m_pg9_ca.paa";
		displayNameShort = "$STR_RHS_MAG_SH_PG9N";
		descriptionShort = "ПГ-9Н, кумулятивный";
		mass = 50;
		scope = 2;
		model = "\tu_konkurs\pg9_mag.p3d";
	};
	class rhs_mag_pg9vnt;
	class BN_rhs_mag_pg9vnt: rhs_mag_pg9vnt
	{
		displayName = "$STR_RHS_MAG_PG9VNT";
		displayNameShort = "$STR_RHS_MAG_SH_PG9VNT";
		descriptionShort = "ПГ-9ВНТ, тандеменый";
		picture = "\bn_csw_load\data\equip\m_pg9_ca.paa";
		mass = 60;
		scope = 2;
		model = "\tu_konkurs\pg9_mag.p3d";
	};
	class rhs_mag_og9v;
	class BN_rhs_mag_og9v: rhs_mag_og9v
	{
		model = "\tu_konkurs\og9_mag.p3d";
		picture = "\bn_csw_load\data\equip\m_og9_ca.paa";
		descriptionShort = "ОГ-9В, осколочный";
		mass = 50;
		displayName = "$STR_RHS_MAG_OG9V";
		displayNameShort = "$STR_RHS_MAG_SH_OG9V";
		count = 1;
		scope = 2;
	};
	class rhs_mag_og9vm;
	class BN_rhs_mag_og9vm: rhs_mag_og9vm {
		count = 1;
		displayName = "$STR_RHS_MAG_OG9VM";
		displayNameShort = "$STR_RHS_MAG_SH_OG9VM";
		picture = "\bn_csw_load\data\equip\m_og9_ca.paa";
		ammo = "rhs_ammo_og9vm";
		descriptionShort = "ОГ-9ВМ, осколочный";
		scope = 2;
		mass = 50;
		model = "\tu_konkurs\og9_mag.p3d";
	};
		
	class rhs_mag_AZP23_250;
	class BN_40Rnd_23mm: rhs_mag_AZP23_250 {
		descriptionShort = "Коробка 23х152 мм ОФЗ";
		displayName = "Коробка 23х152 мм ОФЗ";
		displayNameShort = "23х152 мм ОФЗ";
		model = "\bn_csw_load\data\models\ace_kord_mag";
		picture = "\rhsafrf\addons\rhs_weapons\icons\pkpbox_ca.paa";
		mass = 160;
		count = 50;
	};

	class rhs_mag_M1069: VehicleMagazine
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\rhsusf\addons\rhsusf_weapons\icons\m_m136_ca.paa";
		count = 1;
		mass = 120;
	};

	class rhs_mag_M416: rhs_mag_M1069
	{
		count = 1;
	};
	class rhs_mag_M1028: rhs_mag_M1069
	{
		count = 1;
	};
	class rhs_mag_M829: rhs_mag_M1069
	{
		count = 1;
	};
	class rhs_mag_M829A1: rhs_mag_M829
	{
		count = 1;
	};
	class rhs_mag_M829A2: rhs_mag_M829
	{
		count = 1;
	};
	class rhs_mag_M829A3: rhs_mag_M829
	{
		count = 1;
	};
	class rhs_mag_M830: rhs_mag_M1069
	{
		count = 1;
	};
	class rhs_mag_M830A1: rhs_mag_M830
	{
		count = 1;
	};
	
	class rhs_mag_1100Rnd_762x51_M240;
	class rhs_mag_762x51_M240_1200: rhs_mag_1100Rnd_762x51_M240
	{
		descriptionShort = "7.62x51mm Ball 1200 rounds";
		displayName = "7.62x51 abrams coaxial 1200 rounds";
		displayNameShort = "1200 7.62x51";
		model = "\bn_csw_load\data\models\ace_m2_mag";
		picture = "\bn_csw_load\data\equip\m_m2_ca.paa";
		mass = 120;
	};
	class rhs_mag_762x51_M240;
	class rhs_mag_762x51_M240_200: rhs_mag_762x51_M240
	{
		descriptionShort = "7.62x51mm Ball 200 rounds";
		displayName = "7.62x51 turret 200 rounds";
		displayNameShort = "200 7.62x51";
		model = "\bn_csw_load\data\models\ace_m2_mag";
		picture = "\bn_csw_load\data\equip\m_m2_ca.paa";
		mass = 60;
	};
	
	class 32Rnd_155mm_Mo_shells;
	class pzn_1Rnd_155mm_Mo_shells: 32Rnd_155mm_Mo_shells
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	
	class 6Rnd_155mm_Mo_smoke;
	class pzn_1Rnd_155mm_Mo_smoke: 6Rnd_155mm_Mo_smoke
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	
	class 2Rnd_155mm_Mo_guided;
	class pzn_1Rnd_155mm_Mo_guided: 2Rnd_155mm_Mo_guided
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	class 2Rnd_155mm_Mo_LG;
	class pzn_1Rnd_155mm_Mo_LG: 2Rnd_155mm_Mo_LG
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	class 6Rnd_155mm_Mo_mine;
	class pzn_1Rnd_155mm_Mo_mine: 6Rnd_155mm_Mo_mine
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	class 2Rnd_155mm_Mo_Cluster;
	class pzn_1Rnd_155mm_Mo_Cluster: 2Rnd_155mm_Mo_Cluster
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};
	class 6Rnd_155mm_Mo_AT_mine;
	class pzn_1Rnd_155mm_Mo_AT_mine: 6Rnd_155mm_Mo_AT_mine
	{
		model = "\bn_csw_load\data\bn_122mm";
		picture = "\bn_csw_load\data\equip\bn_122mm.paa";
		count = 1;
		mass = 300;
	};

};

class CfgWeapons {
	class rhs_weap_9K114_launcher;
	class rhs_weap_9K115_launcher : rhs_weap_9K114_launcher {
		scope = 2;
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 10;
		bn_csw_extra_capacity = 0;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		canlock = 0;
		displayname = "9К115 Метис";
		magazines[] = {"rhs_mag_9M115"};
	};
	class rhs_weap_9K115_1_launcher: rhs_weap_9K115_launcher
	{
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 10;
		bn_csw_extra_capacity = 0;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		canlock = 0;
		displayname = "9К115-1 Метис-М";
		magazines[] = {"rhs_mag_9M131","rhs_mag_9M115"};
	};
	class rhs_weap_9K115_2_launcher: rhs_weap_9K115_launcher
	{
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 10;
		bn_csw_extra_capacity = 0;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		canlock = 0;
		displayName = "9К115-2 Метис-М1";
		magazines[] = {"rhs_mag_9M131M","rhs_mag_9M131F","rhs_mag_9M131","rhs_mag_9M115"};
	};
	

	class Rhs_weap_TOW_Launcher_static;
	class BN_RHS_weap_TOW_Launcher: Rhs_weap_TOW_Launcher_static
	{
		reloadTime = 0;
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 12;
		bn_csw_extra_capacity = 0;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		displayName = "M41A4 TOW";
		magazines[] = {"BN_rhs_mag_TOW2a"};
	};
	
	class RHS_weap_Ags30;
	class BN_RHS_weap_Ags30: RHS_weap_Ags30
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
			class effect2
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectName = "TU_40mm_Catridge";
			};
			class effect3
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
		};
		displayName = "АГС-30";
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 1;
		bn_csw_ReloadTime = 8;
		magazines[] = {"RHS_mag_VOG30_30","RHS_mag_GPD30_30","RHS_mag_VOG17m_30"};
		ballisticsComputer = 0;
	};

	class GMG_20mm;
	class RHS_MK19: GMG_20mm {
		maxZeroing = 1500;
	};
	class BN_RHS_MK19: RHS_MK19
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
			class effect2
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectName = "TU_40mm_Catridge";
			};
			class effect3
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
		};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 8;
		magazines[] = {"RHS_48Rnd_40mm_MK19"};
		ballisticsComputer = 2;
	};
	
	class RHS_M2;
	class BN_RHS_M2: RHS_M2 {
		magazines[] = {"rhs_mag_100rnd_127x99_mag","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Green","rhs_mag_100rnd_127x99_mag_Tracer_Yellow"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
		class FullAuto;
	};
	class BN_RHS_M249: BN_RHS_M2
	{
		displayName="M249";
		magazines[]=
		{
			"rhs_200rnd_556x45_M_SAW",
			"rhs_200rnd_556x45_B_SAW",
			"rhs_200rnd_556x45_T_SAW",
			"rhsusf_100Rnd_556x45_M855_soft_pouch",
			"rhsusf_200Rnd_556x45_M855_soft_pouch",
			"rhsusf_100Rnd_556x45_soft_pouch",
			"rhsusf_200Rnd_556x45_soft_pouch",
			"rhsusf_100Rnd_556x45_M200_soft_pouch",
			"rhs_mag_30Rnd_556x45_Mk318_Stanag",
			"rhs_mag_30Rnd_556x45_Mk262_Stanag",
			"rhs_mag_30Rnd_556x45_M855_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",
			"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow",
			"rhs_mag_30Rnd_556x45_M200_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"UK3CB_BAF_556_30Rnd",
			"UK3CB_BAF_556_30Rnd_Blank",
			"UK3CB_BAF_556_30Rnd_T",
			"UK3CB_BAF_556_100Rnd",
			"UK3CB_BAF_556_100Rnd_Blank",
			"UK3CB_BAF_556_100Rnd_T",
			"UK3CB_BAF_556_200Rnd",
			"UK3CB_BAF_556_200Rnd_Blank",
			"UK3CB_BAF_556_200Rnd_T"
		};
		reloadaction="rhs_GestureReloadM249STANAG";
		reloadmagazinesound[]=
		{
			"\rhsusf\addons\rhsusf_weapons2\M249\snd\saw_reload",
			0.5,
			1,
			20
		};
		reloadSound[]=
		{
			"",
			1,
			1
		};
		reloadTime=0.15000001;
		modes[]=
		{
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		drysound[]=
		{
			"\rhsusf\addons\rhsusf_weapons2\M249\snd\empty_machineguns",
			1,
			1,
			10
		};
		emptySound[]=
		{
			"",
			1,
			1
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_01.wss",
			0.1,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",
			0.0099999998,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",
			0.0099999998,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",
			0.0099999998,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",
			0.1,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",
			0.177828,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",
			0.177828,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",
			0.1,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",
			0.1,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",
			0.1,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",
			0.1,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",
			0.0099999998,
			1,
			15
		};
		burst=1;
		class Library
		{
			libTextDesc="The M249 provides infantry squads with the heavy volume of fire of a machine gun combined with accuracy and portability approaching that of a rifle.";
		};
		class FullAuto: FullAuto
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			airateoffire=4;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=500;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=1;
			class BaseSoundModeType
			{
			};
			burst=1;
			burstRangeMax=-1;
			canShootInWater=0;
			dispersion=0.00101;
			displayName="Full";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=10;
			maxRangeProbab=0.039999999;
			midRange=5;
			midRangeProbab=0.69999999;
			minRange=0;
			minRangeProbab=0.30000001;
			multiplier=1;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.075000003;
			requiredOpticType=-1;
			showToPlayer=1;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_sd_M249_Shot_SoundSet",
					"RHSUSF_sd_Rifle1_Tail_SoundSet"
				};
			};
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundBurst=0;
			soundClosure[]=
			{
				"sound",
				1
			};
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			soundLoop[]={};
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_M249_Shot_SoundSet",
					"RHSUSF_Rifle1_Tail_SoundSet"
				};
			};
			textureType="fullAuto";
			useAction=0;
			useActionTitle="";
			weaponSoundEffect="DefaultRifle";
		};
		class close: FullAuto
		{
			aiBurstTerminable=1;
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			aiRateOfFire=0.5;
			aiRateOfFireDispersion=1;
			aiRateOfFireDistance=50;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=1;
			class BaseSoundModeType
			{
			};
			burst=6;
			burstRangeMax=12;
			canShootInWater=0;
			dispersion=0.000261799;
			displayName="Full";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=50;
			maxRangeProbab=0.1;
			midRange=30;
			midRangeProbab=0.69;
			minRange=0;
			minRangeProbab=0.050000001;
			multiplier=1;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.075000003;
			requiredOpticType=-1;
			showToPlayer=0;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_sd_M249_Shot_SoundSet",
					"RHSUSF_sd_Rifle1_Tail_SoundSet"
				};
			};
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundBurst=0;
			soundClosure[]=
			{
				"sound",
				1
			};
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			soundLoop[]={};
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_M249_Shot_SoundSet",
					"RHSUSF_Rifle1_Tail_SoundSet"
				};
			};
			textureType="fullAuto";
			useAction=0;
			useActionTitle="";
			weaponSoundEffect="DefaultRifle";
		};
		class short: close
		{
			aiBurstTerminable=1;
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			aiRateOfFire=1;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=300;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=1;
			class BaseSoundModeType
			{
			};
			burst=5;
			burstRangeMax=12;
			canShootInWater=0;
			dispersion=0.000261799;
			displayName="Full";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=300;
			maxRangeProbab=0.1;
			midRange=150;
			midRangeProbab=0.69;
			minRange=50;
			minRangeProbab=0.40000001;
			multiplier=1;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.075000003;
			requiredOpticType=-1;
			showToPlayer=0;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_sd_M249_Shot_SoundSet",
					"RHSUSF_sd_Rifle1_Tail_SoundSet"
				};
			};
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundBurst=0;
			soundClosure[]=
			{
				"sound",
				1
			};
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			soundLoop[]={};
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_M249_Shot_SoundSet",
					"RHSUSF_Rifle1_Tail_SoundSet"
				};
			};
			textureType="fullAuto";
			useAction=0;
			useActionTitle="";
			weaponSoundEffect="DefaultRifle";
		};
		class medium: close
		{
			aiBurstTerminable=1;
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			aiRateOfFire=2;
			aiRateOfFireDispersion=2;
			aiRateOfFireDistance=600;
			artilleryCharge=1;
			artilleryDispersion=1;
			autoFire=1;
			class BaseSoundModeType
			{
			};
			burst=5;
			burstRangeMax=10;
			canShootInWater=0;
			dispersion=0.000261799;
			displayName="Full";
			ffCount=1;
			ffFrequency=11;
			ffMagnitude=0.5;
			flash="gunfire";
			flashSize=0.1;
			maxRange=600;
			maxRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.60000002;
			minRange=200;
			minRangeProbab=0.1;
			multiplier=1;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.075000003;
			requiredOpticType=-1;
			showToPlayer=0;
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_sd_M249_Shot_SoundSet",
					"RHSUSF_sd_Rifle1_Tail_SoundSet"
				};
			};
			sound[]=
			{
				"",
				10,
				1
			};
			soundBegin[]=
			{
				"sound",
				1
			};
			soundBeginWater[]=
			{
				"sound",
				1
			};
			soundBurst=0;
			soundClosure[]=
			{
				"sound",
				1
			};
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			soundLoop[]={};
			sounds[]=
			{
				"Standardsound",
				"SilencedSound"
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"RHSUSF_M249_Shot_SoundSet",
					"RHSUSF_Rifle1_Tail_SoundSet"
				};
			};
			textureType="fullAuto";
			useAction=0;
			useActionTitle="";
			weaponSoundEffect="DefaultRifle";
		};
	};
	class rhs_weap_nsvt_effects;
	class BN_rhs_weap_nsvt: rhs_weap_nsvt_effects
	{
		magazines[] = {"rhs_mag_127x108mm_50"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 2;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
	}; 
	
	class rhs_weap_kord;
	class BN_rhs_weap_kord: rhs_weap_kord
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3
			{
				positionname = "nabojnicestart";
				directionname = "nabojniceend";
				effectname = "MachineGunEject";
			};
		};
		magazines[] = {"rhs_mag_127x108mm_50"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 2;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
	};
	
	class rhs_weap_DSHKM;
	class BN_rhs_weap_DSHKM: rhs_weap_DSHKM
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3
			{
				positionname = "machinegun_eject_pos";
				directionname = "machinegun_eject_dir";
				effectname = "MachineGunEject";
			};
		};
		magazines[] = {"rhs_mag_127x108mm_50"};
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 2;
		bn_csw_ReloadTime = 6;
		ballisticsComputer = 2;
	};
	class RocketPods;
	class rhs_weap_SPG9: RocketPods
	{
	/* 
	class missiles_titan;
	class rhs_weap_SPG9: missiles_titan	{
		scope = 2;
		displayName = "$STR_RHS_DN_SPG9";
		magazineReloadTime = 10;
		modelOptics = ""; */
		magazines[] = {"rhs_mag_OG9V","rhs_mag_OG9VM","rhs_mag_PG9V","rhs_mag_PG9N","rhs_mag_PG9VNT","BN_rhs_mag_og9v","BN_rhs_mag_og9vm","BN_rhs_mag_pg9v","BN_rhs_mag_pg9n","BN_rhs_mag_pg9vnt"};
		/* sounds[] = {"StandardSound"};
		class StandardSound
		{
			weaponSoundEffect = "DefaultRifle";
			begin1[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\RocketLauncher_Shot04_A","db20",1,1100};
			soundBegin[] = {"begin1",1};
		};
		reloadMagazineSound[] = {"\rhsafrf\addons\rhs_c_heavyweapons\sounds\flare_reload","db-70",1,20};
		recoil = "launcherBase";
		aiRateOfFire = 10;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 800;
		cursor = "Rocket";
		cursorSize = 1;
		canlock = 0; */
	};
	class BN_rhs_weap_SPG9: rhs_weap_SPG9 {
		magazineReloadTime = 0;
		autoReload = 1;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 6;
		ace_overpressure_angle = 60;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.7;
		reloadtime = 0;
		magazines[] = {"BN_rhs_mag_og9v","BN_rhs_mag_og9vm","BN_rhs_mag_pg9v","BN_rhs_mag_pg9n","BN_rhs_mag_pg9vnt"};
	};
	
	class rhs_weap_Igla_twice;
	class BN_rhs_weap_Igla_twice: rhs_weap_Igla_twice {
		autoReload=1;
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 1;
		bn_csw_ReloadTime = 8;
	    magazines[] = {"rhs_mag_9k38_rocket","tu_rhs_mag_9k38_rocket"};
	};
	class Rhs_weap_stinger_Launcher_static;
	class BN_Rhs_weap_stinger_Launcher_static: Rhs_weap_stinger_Launcher_static
	{
		autoReload=1;
		magazineReloadTime = 0;
		bn_csw_extra_capacity = 1;
		bn_csw_ReloadTime = 8;
		magazines[] = {"tu_rhs_fim92F_mag","tu_rhs_fim92C_mag","tu_rhs_fim92A_mag","rhs_fim92_mag"};
	};
	
	class CannonCore;
	
	class RHS_weap_AZP23;
	class BN_ZU23: RHS_weap_AZP23 {
		displayName = "2А14";
		cartridgePos = "cartridge_pos";
		cartridgeVel = "cartridge_dir";
		class gunParticles
		{
			class effect1
			{
				positionName = "cartridge_pos";
				directionName = "cartridge_dir";
				effectName = "RHS_30mm_Catridge";
			};
			class effect2
			{
				positionName = "cartridge_pos";
				directionName = "cartridge_dir";
				effectname = "MachineGunEject";
			};
		};
		magazineReloadTime = 0;
		bn_csw_ReloadTime = 9;
		bn_csw_extra_capacity = 1;
		magazines[] = {"BN_40Rnd_23mm"};
		canlock = 0;
		// dispersion=0.0035;
		// burst = 2;
		
		class manual: CannonCore {
			displayName = "2А14";
			autoFire = 1;
			sounds[] = {"StandardSound"};

			class StandardSound {
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"\bn_csw_load\data\sound\2a14_fire", 1, 1, 1400};
				soundBegin[] = {"begin1", 1};
			};
			reloadTime = 0.06;
			dispersion = 0.008;
			multiplier = 1;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 2;
			aiRateOfFire = 0.500000;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.010000;
			midRange = 2;
			midRangeProbab = 0.010000;
			maxRange = 3;
			maxRangeProbab = 0.010000;
		};
	};
	// class CannonCore;
	class cannon_120mm: CannonCore
	{
		class player;
		class close;
		class short;
		class medium;
		class far;
	};
	class rhs_weap_m256: cannon_120mm
	{
		magazineReloadTime = 0;
		autoReload = 1;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 7;
		reloadtime = 0;
		class player: player
		{
			reloadTime = 0;
			magazineReloadTime = 0;
		};
		class close: close
		{
			reloadTime = 0;
			magazineReloadTime = 0;
		};
		class short: short
		{
			reloadTime = 0;
			magazineReloadTime = 0;
		};
		class medium: medium
		{
			reloadTime = 0;
			magazineReloadTime = 0;
		};
		class far: far
		{
			reloadTime = 0;
			magazineReloadTime = 0;
		};
	
	};
	class rhs_weap_m240veh;
	class rhs_weap_m240_abrams: rhs_weap_m240veh
	{
		magazines[] = {"rhs_mag_762x51_M240_200","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993",
			"hlc_100Rnd_762x51_B_M60E4", 
			"hlc_100Rnd_762x51_M_M60E4", 
			"hlc_100Rnd_762x51_T_M60E4"};
		bn_csw_extra_capacity = 2;
		bn_csw_ReloadTime = 15;
		reloadTime = 0;
		magazineReloadTime = 0;
	};
	class rhs_weap_m240_abrams_coax: rhs_weap_m240veh
	{
		
		magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_762x51_M240_1200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993",
			"hlc_100Rnd_762x51_B_M60E4", 
			"hlc_100Rnd_762x51_M_M60E4", 
			"hlc_100Rnd_762x51_T_M60E4"};
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 40;
		reloadTime = 0;
		magazineReloadTime = 0;
	};
	class HMG_M2;
	class RHS_M2_Abrams_Commander: HMG_M2
	{
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 15;
		reloadTime = 0;
		magazineReloadTime = 0;
	};
	
	class cannon_155mm;
	class rhs_weap_m284: cannon_155mm
	{
		magazineReloadTime = 0;
		autoReload = 1;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 53;
		magazines[] = {"pzn_1Rnd_155mm_Mo_shells","pzn_1Rnd_155mm_Mo_smoke","pzn_1Rnd_155mm_Mo_guided","pzn_1Rnd_155mm_Mo_LG","pzn_1Rnd_155mm_Mo_mine","pzn_1Rnd_155mm_Mo_Cluster","pzn_1Rnd_155mm_Mo_AT_mine"};
	};
	
	
};

class WeaponCloudsMGun;	//i have no idea what i'm doing
// bow wow

class CfgCloudlets
{
	class Default;
	class MachineGunCartridge2;
	class TU_40mm_Catridge: MachineGunCartridge2
	{
		moveVelocity[] = {"-directionX * 3","- directionY * 3","- directionZ * 3"};
		particleShape = "\tu_konkurs\casing_40mm.p3d";
		size[] = {1};
		sizeVar = 0;
	};
};
class TU_40mm_Catridge
{
	class TU_40mm_Catridge
	{
		simulation = "particles";
		type = "TU_40mm_Catridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 2;
	};
	class TU_40mm_CatridgeMed
	{
		simulation = "particles";
		type = "TU_40mm_Catridge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
		qualityLevel = 1;
	};
};
class CfgVehicles
{
	class House;
	class tu_casing_40mm: House
	{
		model = "\tu_konkurs\casing_40mm.p3d";
		displayName = "Cartridge";
		nameSound = "";
		destrType = "DestructNo";
		mapSize = 0.7;
		accuracy = 0.2;
		armor = 5;
		scope = 1;
	};
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo;
	};
	class BN_9k115_2_Gun_Bag: Weapon_Bag_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\metis_bag.p3d";
		picture = "\tu_konkurs\metis_ca.paa";
		displayName = "ПТРК Метис-М1 9K115-2";
		_generalMacro = "rhs_Metis_9k115_2_msv";
		mass = 440;
		maximumLoad = .1;
		class assembleInfo
		{
			primary = 1;
			base = "";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "rhs_Metis_9k115_2_msv";
		};
	};
	class BN_9k115_2_TWS_Gun_Bag: BN_9k115_2_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\metis_bag.p3d";
		picture = "\tu_konkurs\metis_ca.paa";
		displayName = "ПТРК Метис-М1 9K115-2 ТВП";
		_generalMacro = "BN_rhs_Metis_9k115_2_TWS_msv";
		mass = 440;
		class assembleInfo
		{
			primary = 1;
			base = "";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "BN_rhs_Metis_9k115_2_TWS_msv";
		};
	};
	class BN_9k115_1_Gun_Bag: BN_9k115_2_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\metis_bag.p3d";
		picture = "\tu_konkurs\metis_ca.paa";
		displayName = "ПТРК Метис-М 9K115-1";
		_generalMacro = "rhs_Metis_9k115_1_ins";
		mass = 440;
		class assembleInfo
		{
			primary = 1;
			base = "";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "rhs_Metis_9k115_1_ins";
		};
	};
	class BN_9k115_1_TWS_Gun_Bag: BN_9k115_2_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\metis_bag.p3d";
		picture = "\tu_konkurs\metis_ca.paa";
		displayName = "ПТРК Метис-М 9K115-1 ТВП";
		_generalMacro = "BN_rhs_Metis_9k115_1_TWS_ins";
		mass = 440;
		class assembleInfo
		{
			primary = 1;
			base = "";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "BN_rhs_Metis_9k115_1_TWS_ins";
		};
	};
	class BN_9k115_Gun_Bag: BN_9k115_2_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		model = "\tu_konkurs\metis_bag.p3d";
		picture = "\tu_konkurs\metis_ca.paa";
		displayName = "ПТРК Метис 9K115";
		_generalMacro = "rhs_Metis_9k115_ins";
		mass = 290;
		class assembleInfo
		{
			primary = 1;
			base = "";
			dissasembleTo[] = {};
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "bn_rhs_Metis_9k115_ins";
		};
	};
	class RHS_M2_Gun_Bag: Weapon_Bag_Base
	{
		displayName = "M2 Gun";
		descriptionShort = "M2 Gun Bag";
		mass = 380;
		maximumLoad = .1;
	};
	class RHS_M2_Tripod_Bag: Weapon_Bag_Base
	{
		displayName = "M3 AA Tripod for M2";
		descriptionShort = "M3 AA Tripod for M2 Bag";
		mass = 200;
		maximumLoad = .1;
	};
	class RHS_M2_MiniTripod_Bag: RHS_M2_Tripod_Bag
	{
		displayName = "M3 Minitripod for M2";
		descriptionShort = "M3 Minitripod for M2 Bag";
		mass = 139;
	};
	class RHS_Mk19_Gun_Bag: RHS_M2_Gun_Bag
	{
		displayName = "Mk19 Gun";
		descriptionShort = "Mk19 Gun Bag";
		mass = 350;
	};
	class RHS_Mk19_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		mass = 139;
		displayName = "M3 Minitripod for Mk19";
		descriptionShort = "M3 Minitripod for Mk19 Bag";
	};
	class rhs_Tow_Gun_Bag: RHS_M2_Gun_Bag
	{
		mass = 500;
		displayName = "TOW Gun";
		descriptionShort = "TOW Gun Bag";
	};
	class rhs_TOW_Tripod_Bag: RHS_M2_Tripod_Bag
	{
		mass = 500;
		displayName = "TOW Tripod";
		descriptionShort = "TOW Tripod Bag";
	};
	class rhs_M252_Gun_Bag: RHS_M2_Gun_Bag
	{
		displayName = "M252 Gun";
		descriptionShort = "M252 Gun Bag";
		mass = 300;
	};
	class rhs_M252_Bipod_Bag: RHS_M2_Tripod_Bag
	{
		mass = 400;
		displayName = "M252 Plate";
		descriptionShort = "M252 Plate Bag";
	};
	class RHS_NSV_Gun_Bag: Weapon_Bag_Base
	{
		mass = 300;
		displayName = "НСВ";
		descriptionShort = "НСВ";
		maximumLoad = .1;
	};
	class RHS_NSV_Tripod_Bag: Weapon_Bag_Base
	{
		mass = 250;
		maximumLoad = .1;
		displayName = "Тренога 6Т7 для НСВ";
		descriptionShort = "Тренога 6Т7 для НСВ";
	};
	class RHS_DShkM_Gun_Bag: RHS_NSV_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 380;
		displayName = "ДШКМ";
		descriptionShort = "ДШКМ";
	};
	class RHS_DShkM_TripodHigh_Bag: RHS_NSV_Tripod_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 400;
		displayName = "Станок для ДШКМ";
		descriptionShort = "Станок Колесникова для ДШКМ";
	};
	class RHS_DShkM_TripodLow_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 200;
		displayName = "Тренога 6Т17 для ДШКМ";
		descriptionShort = "Тренога 6Т17 оборудованная под ДШКМ";
	};
	class RHS_Kord_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Корд";
		descriptionShort = "Корд";
		mass = 300;
	};
	class RHS_Kord_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 250;
		displayName = "Тренога 6Т7 для Корд";
		descriptionShort = "Тренога 6Т7 для Корд";
	};
	class RHS_Kord_TripodHigh_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 400;
		displayName = "Станок 6У16 для Корд";
		descriptionShort = "Станок 6У16 для Корд";
		_generalMacro = "rhs_KORD_high_MSV";
		faction = "rhs_faction_msv";
		class assembleInfo: assembleInfo
		{
			assembleTo = "rhs_KORD_high_MSV";
			base[] = {"RHS_Kord_Gun_Bag"};
		};
	};
	class RHS_AGS30_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "АГС-30";
		descriptionShort = "АГС-30";
		mass = 150;
	};
	class RHS_AGS30_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "Тренога 6Т17 для АГС-30";
		descriptionShort = "Тренога 6Т17 для АГС-30";
		mass = 200;
	};
	class RHS_SPG9_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "СПГ-9";
		descriptionShort = "СПГ-9";
	};
	class RHS_SPG9_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 200;
		displayName = "Тренога 6Т6 для СПГ-9";
		descriptionShort = "Тренога 6Т6 для СПГ-9";
	};
	class RHS_Podnos_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "2Б14-1 Поднос";
		descriptionShort = "2Б14-1 Поднос";
		_generalMacro = "BN_2b14_82mm_MSV";
		mass = 300;
	};
	class RHS_Podnos_Bipod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		mass = 400;
		displayName = "Плита для 2Б14-1 Поднос";
		descriptionShort = "Плита для 2Б14-1 Поднос";
		_generalMacro = "BN_2b14_82mm_MSV";
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_A3_CfgVehicles_B_Mortar_01_Wpn_assembleInfo0";
			assembleTo = "BN_2b14_82mm_MSV";
			base[] = {"RHS_Podnos_Gun_Bag"};
		};
	};
	class RHS_Metis_Gun_Bag: RHS_DShkM_Gun_Bag
	{
		scope = 1;
	};
	class RHS_Metis_Tripod_Bag: RHS_DShkM_TripodHigh_Bag
	{
		scope = 1;
	};
	
	
	class RHS_Kornet_Gun_Bag: RHS_NSV_Gun_Bag
	{
		mass = 150;
		picture = "\tu_konkurs\konkurs_1tube_ca.paa";
		pzn_tube_mag = "rhs_mag_9m133";
	};
	
	class RHS_Kornet_Tripod_Bag: RHS_NSV_Tripod_Bag
	{
		class assembleInfo: assembleInfo
		{
			displayName = "$STR_A3_CfgVehicles_B_AT_01_Wpn_assembleInfo0";
			assembleTo = "rhs_Kornet_9M133_2_msv";
			base = "";
		};
	};
	class Land;
	class LandVehicle : Land
	{
		class ACE_Actions;
	}; 
	
	class StaticWeapon: LandVehicle
	{
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
		
/*         ace_dragging_canDrag = 1; // can this object be dragged?; 1 yes, 0 no (0 default)
        ace_dragging_dragPosition[] = {0,1.2,0}; // Offset of the model from the body while dragging, comparable to the offset in attachTo (It's the same actually)
        ace_dragging_dragDirection = 0;  // how much degrees is the model rotatated after dragging it (a global setDir after attachTo)

        ace_dragging_canCarry = 0; // can this object be carried?; 1 yes, 0 no (0 default) */
	};

	class StaticATWeapon: StaticWeapon
	{
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class ViewOptics;
	};
	
	class StaticGrenadeLauncher: StaticWeapon
	{
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class ViewOptics;
	};
	
	class StaticMGWeapon: StaticWeapon
	{
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
		/*extern*/ class EventHandlers;
		/*extern*/ class ViewOptics;
	};
		
	class AT_01_base_F: StaticMGWeapon{};
	
	
	class rhs_Kornet_Base: AT_01_base_F
	{
		bn_csw_loading_style = 4;
		pzn_tubes[] = {"RHS_Kornet_Gun_Bag"};
		class ACE_Actions {
            class ACE_MainActions {
				// selection = "";
				distance = 5;
				condition = 1;
				class BN_CSW_Load {
					displayName = "Зарядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\load.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_load;";
					showDisabled = 1;
					priority = 5;
					hotkey = "L";
					position = [0.1,0,0];
					enableInside = 0;
				};
				class BN_CSW_Unload {
					displayName = "Разрядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\unload.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_unload;";
					showDisabled = 1;
					priority = 5.1;
					hotkey = "U";
					position = [-0.1,0,0];
					enableInside = 0;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				/* tu_atgm_tracker = "rhs_weap_9K133_launcher";
				gunBeg = "spice rakety";
				gunEnd = "konec rakety"; */
				magazines[] = {};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,'RHS_Kornet_Tripod_Bag'] spawn pzn_csw_fnc_unasssemble";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RHS_EventHandlers
			{
				fired = "_this call RHS_fnc_back_saclosGuide";
			};
		};
	};
	
	class rhs_Metis_Base: StaticATWeapon
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Metis_9k115_2_msv.paa";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		memoryPointsGetInGunner = "pos_gunner";
		memoryPointsGetInGunnerDir = "pos_gunner_dir";
		model = "\tu_konkurs\metis_bare";
		bn_csw_loading_style = 4;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_9k115_2_Gun_Bag"};
			displayName = "disasemble";

		};
		pzn_tubes[] = {"TU_9M131M_Double","TU_9M131M_Single","TU_9M131F_Double","TU_9M131F_Single","TU_9M131_Double","TU_9M131_Single","TU_9M115_Double","TU_9M115_Single"};
		displayname = "ПТРК Метис-М1 9K115-2";
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		
		class ACE_Actions {
            class ACE_MainActions {
				// selection = "";
				distance = 5;
				condition = 1;
				class BN_CSW_Load {
					displayName = "Зарядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\load.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_load;";
					showDisabled = 1;
					priority = 5;
					hotkey = "L";
					position = [0.1,0,0];
					enableInside = 0;
				};
				class BN_CSW_Unload {
					displayName = "Разрядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\unload.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_unload;";
					showDisabled = 1;
					priority = 5.1;
					hotkey = "U";
					position = [-0.1,0,0];
					enableInside = 0;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_2_launcher"};
				magazines[] = {"rhs_mag_9M131M"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
		class AnimationSources
		{
			class hasMagazine
			{
				source = "hasMagazine";
				weapon = "rhs_weap_9K115_2_launcher";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_9K115_2_launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "rhs_weap_9K115_2_launcher";
			};
		};
	};
	class rhs_Metis_9k115_2_msv: rhs_Metis_Base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_2_launcher"};
				magazines[] = {"rhs_mag_9M131M"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
	};
	class rhs_Metis_9k115_2_vdv: rhs_Metis_Base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_vdv";
		crew = "rhs_vdv_rifleman";
		typicalCargo[] = {"rhs_vdv_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_2_launcher"};
				magazines[] = {"rhs_mag_9M131M"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
	};
	class rhs_Metis_9k115_2_ins: rhs_Metis_Base
	{
		scope = 2;
		side = 2;
		author = "Red Hammer Studios";
		faction = "rhs_faction_insurgents";
		crew = "rhs_g_Soldier_F";
		typicalCargo[] = {"rhs_g_Soldier_F"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_2_launcher"};
				magazines[] = {"rhs_mag_9M131M"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
	};
	class BN_rhs_Metis_TWS_Base: rhs_Metis_Base
	{
		model = "\tu_konkurs\metis";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_9k115_2_TWS_Gun_Bag"};
			displayName = "disasemble";
		};
		displayname = "ПТРК Метис-М1 9K115-2 ИК";
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal", "TI"};
					thermalMode[] = {4,5};
				};
			};
		};
	};
	class BN_rhs_Metis_9k115_1_Base: rhs_Metis_Base
	{
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_9k115_1_Gun_Bag"};
			displayName = "disasemble";
		};
		displayname = "ПТРК Метис-М 9K115-1";
		
		pzn_tubes[] = {"TU_9M131_Double","TU_9M131_Single","TU_9M115_Double","TU_9M115_Single"};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_1_launcher"};
				magazines[] = {"rhs_mag_9M131"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
		class AnimationSources
		{
			class hasMagazine
			{
				source = "hasMagazine";
				weapon = "rhs_weap_9K115_1_launcher";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_9K115_1_launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "rhs_weap_9K115_1_launcher";
			};
		};
	};	
	class BN_rhs_Metis_9k115_1_TWS_Base: BN_rhs_Metis_9k115_1_Base
	{
		model = "\tu_konkurs\metis";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_9k115_1_TWS_Gun_Bag"};
			displayName = "disasemble";
		};
		displayname = "ПТРК Метис-М 9K115-1 ИК";
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal", "TI"};
					thermalMode[] = {4,5};
				};
			};
		};
	};
	
	class BN_rhs_Metis_9k115_Base: rhs_Metis_Base
	{
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"BN_9k115_Gun_Bag"};
			displayName = "disasemble";
		};
		displayname = "ПТРК Метис 9K115";
		
		pzn_tubes[] = {"TU_9M115_Double","TU_9M115_Single"};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\metis_at_13\data\metis.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_launcher"};
				magazines[] = {"rhs_mag_9M115"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
		class AnimationSources
		{
			class hasMagazine
			{
				source = "hasMagazine";
				weapon = "rhs_weap_9K115_launcher";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "rhs_weap_9K115_launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "rhs_weap_9K115_launcher";
			};
		};
	};	
	class BN_rhs_Metis_9k115_2_TWS_msv: BN_rhs_Metis_TWS_Base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
	};
	class BN_rhs_Metis_9k115_2_TWS_vdv: BN_rhs_Metis_TWS_Base
	{
		scope = 2;
		side = 0;
		author = "Red Hammer Studios";
		faction = "rhs_faction_vdv";
		crew = "rhs_vdv_rifleman";
		typicalCargo[] = {"rhs_vdv_rifleman"};
	};
	class BN_rhs_Metis_9k115_2_TWS_ins: BN_rhs_Metis_TWS_Base
	{
		scope = 2;
		side = 2;
		author = "Red Hammer Studios";
		faction = "rhs_faction_insurgents";
		crew = "rhs_g_Soldier_F";
		typicalCargo[] = {"rhs_g_Soldier_F"};
	};
	class rhs_Metis_9k115_1_ins: BN_rhs_Metis_9k115_1_Base
	{
		displayname = "ПТРК Метис-М 9K115-1";
		scope = 2;
		side = 2;
		author = "Red Hammer Studios";
		faction = "rhs_faction_insurgents";
		crew = "rhs_g_Soldier_F";
		typicalCargo[] = {"rhs_g_Soldier_F"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"rhs_weap_9K115_1_launcher"};
				magazines[] = {"rhs_mag_9M131"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.078;
					minFov = 0.078;
					maxFov = 0.078;
					visionMode[] = {"Normal"};
					thermalMode[] = {};
				};
			};
		};
	};
	class BN_rhs_Metis_9k115_1_TWS_ins: BN_rhs_Metis_9k115_1_TWS_Base
	{
		scope = 2;
		side = 2;
		author = "Red Hammer Studios";
		faction = "rhs_faction_insurgents";
		crew = "rhs_g_Soldier_F";
		typicalCargo[] = {"rhs_g_Soldier_F"};
	};
	class BN_rhs_Metis_9k115_ins: BN_rhs_Metis_9k115_Base
	{
		scope = 2;
		side = 2;
		author = "Red Hammer Studios";
		faction = "rhs_faction_insurgents";
		crew = "rhs_g_Soldier_F";
		typicalCargo[] = {"rhs_g_Soldier_F"};
	};
	
	class StaticCannon: StaticWeapon
	{
		/*extern*/ class ViewOptics;
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
	};
	
	class rhs_D30_base: StaticCannon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0; // can this object be dragged?; 1 yes, 0 no (0 default)
	};
	
	class RHS_TOW_TriPod_base: StaticATWeapon
	{
		memoryPointsGetInGunner = "pos_gunner";
		memoryPointsGetInGunnerDir = "pos_gunner_dir";
		model = "\tu_konkurs\TOW\TOW_static";
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow_tripod.rvmat","rhsusf\addons\rhsusf_heavyweapons\tow\data\tow_tripod.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"};
		};
		bn_csw_loading_style = 4;
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {/* "TU_9P135_Bag" */};
			displayName = "";
		};
		class UserActions
		{
			class disassemble
			{
				displayName = "$STR_Disassemble";
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				position = "";
				radius = 5;
				condition = "(count (magazines this) < 1) and {count (crew this) < 1} and {(getdammage this) < 0.9}";
				statement = "[this,['RHS_Tow_Gun_Bag','RHS_Tow_Tripod_Bag']] spawn pzn_csw_fnc_tow_unasssemble";
			};
		};
		class ACE_Actions {
            class ACE_MainActions {
				// selection = "";
				distance = 5;
				condition = 1;
				class BN_CSW_Load {
					displayName = "Зарядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\load.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_load;";
					showDisabled = 1;
					priority = 5;
					hotkey = "L";
					position = [0.1,0,0];
					enableInside = 0;
				};
				class BN_CSW_Unload {
					displayName = "Разрядить";
					distance = 2;
					condition = "true";
					icon = "\bn_csw_load\data\ui\unload.paa";
					statement = "0 = [_target, _player] spawn bn_csw_fnc_atgm_unload;";
					showDisabled = 1;
					priority = 5.1;
					hotkey = "U";
					position = [-0.1,0,0];
					enableInside = 0;
				};
			};
		};
		pzn_tubes[] = {
			// "TU_TOW2A_Double",
			"TU_TOW2A_Single"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"BN_RHS_weap_TOW_Launcher"};
				magazines[] = {};
			};
		};
		class AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_weap_TOW_Launcher";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_weap_TOW_Launcher";
			};
		};
	};
		
	class RHS_ZU23_base: StaticCannon
	{
		ace_dragging_canCarry = 0;
		ace_dragging_canDrag = 0; // can this object be dragged?; 1 yes, 0 no (0 default)
		displayname = "ЗУ-23-2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_ZU23"};
				magazines[] = {"BN_40Rnd_23mm","BN_40Rnd_23mm"};
			};
		};
		class AnimationSources
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
	};
		
	class StaticAAWeapon: StaticWeapon {
		/*extern*/ class Turrets;
		/*extern*/ class MainTurret;
	};
	
	class RHS_Stinger_AA_pod_Base: StaticAAWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"BN_Rhs_weap_stinger_Launcher_static"};
				magazines[] = {"rhs_fim92_mag","rhs_fim92_mag"};
			};
		};
		class AnimationSources
		{
			class MagazineReload
			{
				source = "reloadmagazine";
				weapon = "BN_Rhs_weap_stinger_Launcher_static";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_Rhs_weap_stinger_Launcher_static";
			};
		};
	};
	
	class rhs_Igla_AA_pod_Base: StaticAAWeapon
	{
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat","rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat","rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_roof.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat","rhsafrf\addons\rhs_heavyweapons\igla\data\igla_aa_pod_seats.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"BN_rhs_weap_Igla_twice"};
				magazines[] = {"rhs_mag_9k38_rocket","rhs_mag_9k38_rocket"};
			};
		};
	};
	
	class RHS_AGS30_TriPod_base: StaticGrenadeLauncher
	{
		dlc = "RHS_AFRF";
		displayName = "АГС-30 (6Т17)";
		model = "\tu_konkurs\AGS30\AGS_static";
		ace_dragging_canCarry = 1; // can this object be carried?; 1 yes, 0 no (0 default)
		ace_dragging_carryPosition[] = {0,1.2,0}; // Same as drag, but for carrying objects
		ace_dragging_carryDirection = 0; // Same as drag, but for carrying objects
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat","rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat","rhsafrf\addons\rhs_heavyweapons\ags30\data\ags30.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				weapons[] = {"BN_RHS_weap_Ags30"};
				magazines[] = {"RHS_mag_VOG30_30"};
			};
		};
		class AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_weap_Ags30";
			};
		};
	};
	
	class RHS_AGS30_TriPod_VDV: RHS_AGS30_TriPod_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				magazines[] = {"RHS_mag_VOG30_30"};
			};
		};
	};
	class RHS_AGS30_TriPod_INS: RHS_AGS30_TriPod_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponZeroing";
				magazines[] = {"RHS_mag_VOG30_30"};
			};
		};
	};
	
 	class RHS_MK19_TriPod_base: StaticGrenadeLauncher {
		model = "\tu_konkurs\Mk19_minitripod\mk19_stat";
		class AnimationSources {
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_MK19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_MK19";
			};
			class muzzleHMG_ROT
			{
				source = "ammorandom";
				weapon = "BN_RHS_MK19";
			};
		}; 		
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat","rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\weaponmount_mk64_paint.rvmat","rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\weaponmount_mk64_paint.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat","rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\mk19.rvmat","rhsusf\addons\rhsusf_heavyweapons\mk19_minitripod\data\mk19.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscOptics_Offroad_01";
				selectionFireAnim = "zasleh";
				weapons[] = {"BN_RHS_MK19"};
				magazines[] = {"RHS_48Rnd_40mm_MK19"};
				discreteDistance[] = {300, 400, 500, 600, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500};
				discreteDistanceInitIndex = 2;
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"RHS_Mk19_Gun_Bag","RHS_Mk19_Tripod_Bag"};
			displayName = "disasemble";
		};
	};
	
	class rhs_nsv_tripod_base: StaticMGWeapon
	{
		displayName = "НСВ (6Т7)";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_nsvt";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat","rhsafrf\addons\rhs_t80\data\materials\sa_nsvt.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_rhs_weap_nsvt"};
				magazines[] = {"rhs_mag_127x108mm_50"};
			};
		};
	}; 
		
	class RHS_KORD_Base: rhs_nsv_tripod_base
	{
		model = "\tu_konkurs\KORD\kord";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_kord";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_rhs_weap_kord"};
				magazines[] = {"rhs_mag_127x108mm_50"};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"rhs_Kord_Gun_Bag","RHS_Kord_Tripod_Bag"};
			displayName = "disasemble";
		};
	};
	
	class RHS_KORD_high_base: RHS_KORD_Base
	{
		model = "\tu_konkurs\KORD\KORD_6u16sp";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_kord";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_body.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_tripod.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\data\kord_6u16sp.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_rhs_weap_kord"};
				magazines[] = {"rhs_mag_127x108mm_50"};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"rhs_Kord_Gun_Bag","RHS_Kord_TripodHigh_Bag"};
			displayName = "disasemble";
		};
	};
	
	class rhs_DSHKM_base: StaticMGWeapon
	{
		model = "\tu_konkurs\DShKM\DShKM_mg";
		class AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "BN_rhs_weap_DSHKM";
			};
			class ReloadAnim: muzzle_source
			{
				source = "reload";
			};
			class ReloadMagazine: muzzle_source
			{
				source = "reloadmagazine";
			};
			class Revolving: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk.rvmat","rhsafrf\addons\rhs_heavyweapons\dshkm\data\dshk_damage.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat","rhsafrf\addons\rhs_heavyweapons\ags30\data\tripod_ags.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat","rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat","rhsafrf\addons\rhs_heavyweapons\dshkm\data\tripod_dshk.rvmat","rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_rhs_weap_DSHKM"};
				magazines[] = {"rhs_mag_127x108mm_50"};
			};
		};
	};
	
	class rhs_DSHkM_Mini_TriPod_base: rhs_DSHKM_base
	{
		displayname = "ДШКМ (6Т17)";
		model = "\tu_konkurs\DShKM\DShKM_mg2";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_rhs_weap_DSHKM"};
				magazines[] = {"rhs_mag_127x108mm_50"};
			};
		};
	};
	
	
	class rhs_SPG9_base: AT_01_base_F
	{
		model = "\tu_konkurs\SPG9\spg9";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_SPG9";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_rhs_weap_SPG9"};
				magazines[] = {"BN_rhs_mag_pg9v"};
				turretInfoType = "RscWeaponZeroing";
				gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope";
				class OpticsIn
				{
					class HEAT: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope.p3d";
					};
					class HE: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_of_scope.p3d";
					};
				};
			};
		};
	};
	
	class rhs_SPG9M_base: rhs_SPG9_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_rhs_weap_SPG9"};
				magazines[] = {"BN_rhs_mag_pg9vnt"};
				// memoryPointGunnerOptics = "gunnerview";
			};
		};
	};
	
	class rhs_m2staticmg_base: StaticMGWeapon {
		model = "\tu_konkurs\M2\m2_mg";
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_M2";
			};
			class muzzleHMG_ROT: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\m2_stojan.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat","a3\soft_f\offroad_01\data\m2.rvmat","a3\soft_f\offroad_01\data\m2.rvmat","rhsusf\addons\rhsusf_heavyweapons\data\static_destroyed.rvmat"};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RscOptics_Offroad_01";
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag"};
			};
		};
	};
	
	class RHS_M2StaticMG_MiniTripod_base: rhs_m2staticmg_base {
		model = "\tu_konkurs\M2\m2_mg2";
	};
	
	class ACE_Box_Misc;
	
	class BN_SPG_box: ACE_Box_Misc {
		displayName = "Ящик с СПГ-9";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons {};
		class TransportMagazines {
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
		class TransportItems {};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "rhs_SPG9_Tripod_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "rhs_SPG9_Gun_Bag";
				count = 1;
			};
		};
	};
	class BN_SPG_PG9V_ammo_box: ACE_Box_Misc {
		displayName = "Ящик с гранатами ПГ-9В";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_pg9v";
				count = 10;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_SPG_PG9N_ammo_box: ACE_Box_Misc {
		displayName = "Ящик с гранатами ПГ-9Н";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_pg9n";
				count = 10;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_SPG_PG9VNT_ammo_box: ACE_Box_Misc {
		displayName = "Ящик с гранатами ПГ-9ВНТ";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_pg9vnt";
				count = 10;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_SPG_OG9V_ammo_box: ACE_Box_Misc {
		displayName = "Ящик с гранатами ОГ-9В";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_og9v";
				count = 10;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_SPG_OG9VM_ammo_box: ACE_Box_Misc {
		displayName = "Ящик с гранатами ОГ-9ВМ";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_og9vm";
				count = 10;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};

	class BN_AGS_box: ACE_Box_Misc {
		displayName = "Ящик с АГС-30";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "RHS_mag_VOG30_30";
				count = 4;
			};
		};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_AGS30_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_AGS30_Tripod_Bag";
				count = 1;
			};
		};
	};
	class BN_AGS_VOG30_ammo_box: BN_SPG_box {
		displayName = "Ящик с гранатами ВОГ-30";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "RHS_mag_VOG30_30";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_AGS_GPD30_ammo_box: BN_SPG_box {
		displayName = "Ящик с гранатами ГПД-30";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "RHS_mag_GPD30_30";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	class BN_AGS_VOG17M_ammo_box: BN_SPG_box {
		displayName = "Ящик с гранатами ВОГ-17М";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "RHS_mag_VOG17m_30";
				count = 8;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_NSV_box: BN_SPG_box {
		displayName = "Ящик с НСВ 6Т7";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_NSV_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_NSV_Tripod_Bag";
				count = 1;
			};
		};
	};
	class BN_KORD_box: BN_SPG_box {
		displayName = "Ящик с Корд 6Т7";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_Kord_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_Kord_Tripod_Bag";
				count = 1;
			};
		};
	};
	class BN_KORDH_box: BN_SPG_box {
		displayName = "Ящик с Корд 6У16";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_Kord_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_Kord_TripodHigh_Bag";
				count = 1;
			};
		};
	};
	class BN_DSKM_box: BN_SPG_box {
		displayName = "Ящик с ДШКМ 6Т17";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_DShkM_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_DShkM_TripodLow_Bag";
				count = 1;
			};
		};
	};
	class BN_DSHKMH_box: BN_SPG_box {
		displayName = "Ящик с ДШКМ";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_DShkM_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_DShkM_TripodHigh_Bag";
				count = 1;
			};
		};
	};
	class BN_127_108_ammo_box: BN_SPG_box {
		displayName = "Ящик с патронами 12.7х108 мм";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_23_152_ammo_box: BN_SPG_box {
		displayName = "Ящик с снарядами 23х152 мм";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "BN_40Rnd_23mm";
				count = 6;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_M2_box: BN_SPG_box {
		displayName = "Ящик с M2";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_100rnd_127x99_mag";
				count = 3;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_M2_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_M2_MiniTripod_Bag";
				count = 1;
			};
		};
	};
	class BN_M2H_box: BN_SPG_box {
		displayName = "Ящик с M2 AA";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_100rnd_127x99_mag";
				count = 3;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_M2_Gun_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_M2_Tripod_Bag";
				count = 1;
			};
		};
	};
	class BN_127_99_ammo_box: BN_SPG_box {
		displayName = "Ящик с патронами 12.7x99 mm NATO";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_100rnd_127x99_mag";
				count = 3;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_MK19_box: BN_AGS_box {
		displayName = "Ящик с Mk 19";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 4;
			};
		};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_spg
			{
				backpack = "RHS_Mk19_Tripod_Bag";
				count = 1;
			};
			class _xx_spg1
			{
				backpack = "RHS_Mk19_Gun_Bag";
				count = 1;
			};
		};
	};
	class BN_MK19_ammo_box: BN_SPG_box {
		displayName = "Ящик с гранатами M384 HE";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons {};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 5;
			};
		};
		class TransportItems {};
		class TransportBackpacks {};
	};
	
	class BN_TOW_box: BN_SPG_box	{
		displayName = "Ящик с ПТРК M41A4 TOW";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_tow_tripod
			{
				backpack = "RHS_Tow_Tripod_Bag";
				count = 1;
			};
			class _xx_tow_gun
			{
				backpack = "RHS_Tow_Gun_Bag";
				count = 1;
			};
		};
	};
	class BN_TOW_ammo_box: BN_SPG_box {
		displayName = "Ящик с ракетами BGM-71E TOW-2A";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_TU_TOW2A_Single
			{
				backpack = "TU_TOW2A_Single";
				count = 2;
			};
		};
	};
	class BN_kornet_box: BN_SPG_box	{
		displayName = "Ящик с ПТРК 9К135";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_tow_tripod
			{
				backpack = "RHS_Kornet_Tripod_Bag";
				count = 1;
			};
		};
	};
	class BN_kornet_ammo_box: BN_SPG_box {
		displayName = "Ящик с ракетами 9М133";
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
		class TransportBackpacks {
			class _xx_RHS_Kornet_Gun_Bag
			{
				backpack = "RHS_Kornet_Gun_Bag";
				count = 2;
			};
		};
	};
	
	/////////////kord
	class RHS_Kord_cpp_Gun_Bag: RHS_Kord_Gun_Bag
	{
		displayName = "Корд (Прицел СПП)";
		descriptionShort = "Корд (Прицел СПП)";
	};

	class RHS_Kord_CPP_Tripod_Bag: RHS_Kord_Tripod_Bag
	{
		displayName = "Тренога 6Т7 для Корд (Прицел СПП)";
		descriptionShort = "Тренога 6Т7 для Корд (Прицел СПП)";
		class assembleInfo: assembleInfo
		{
			assembleTo = "RHS_KORD_CPP";
			base[] = {"RHS_Kord_cpp_Gun_Bag"};
		};
	};

	class RHS_Kord_CPP_TripodHigh_Bag: RHS_Kord_TripodHigh_Bag
	{
		displayName = "Станок 6У16 для Корд (Прицел СПП)";
		descriptionShort = "Станок 6У16 для Корд (Прицел СПП)";
		class assembleInfo: assembleInfo
		{
			assembleTo = "rhs_KORD_high_SPP";
			base[] = {"RHS_Kord_cpp_Gun_Bag"};
		};
	};

	class RHS_KORD_CPP: RHS_KORD_Base
	{
		displayName = "Корд (Прицел СПП)";
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_MSV.paa";
		model = "\tu_konkurs\KORD\kord_spp";
		scope = 2;
		side = 0;
		//armor = 5;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				selectionFireAnim = "zasleh";
				gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\kord_spp\spp_scope.p3d";
				turretInfoType = "RscOptics_Offroad_01";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.7/6;
					minFov = 0.7/12;
					maxFov = 0.7/6;
				};
			};
		};
		class assembleInfo
		{
				primary = 0;
				base = "";
				assembleTo = "";
				dissasembleTo[] = {"rhs_Kord_cpp_Gun_Bag","RHS_Kord_CPP_Tripod_Bag"};
				displayName = "disasemble";
		};
	};

	class rhs_KORD_high_SPP: RHS_KORD_high_Base
	{
		displayName = "Корд 6У16 (Прицел СПП)";
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_KORD_MSV.paa";
		model = "\tu_konkurs\KORD\kord_6u16sp_spp";
		icon = "rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_kord6u16sp_CA.paa";
		picture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\kord6u16sp_ca.paa";
		UiPicture = "\rhsafrf\addons\rhs_heavyweapons\data\ico\kord6u16sp_ca.paa";
		scope = 2;
		side = 0;
		//armor = 5;
		author = "Red Hammer Studios";
		faction = "rhs_faction_msv";
		crew = "rhs_msv_rifleman";
		typicalCargo[] = {"rhs_msv_rifleman"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				selectionFireAnim = "zasleh";
				gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\kord_spp\spp_scope.p3d";
				minElev = -7;
				maxelev = 45;
				gunnerAction = "rhs_KORD_Gunner";
				turretInfoType = "RscOptics_Offroad_01";
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = 0.7/6;
					minFov = 0.7/12;
					maxFov = 0.7/6;
				};
			};
		};
		class assembleInfo
		{
				primary = 0;
				base = "";
				assembleTo = "";
				dissasembleTo[] = {"rhs_Kord_cpp_Gun_Bag","RHS_Kord_CPP_TripodHigh_Bag"};
				displayName = "disasemble";
		};
	};
	
#include "rhs_vehicles.cpp"
	
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Hilux_Cargo01 = "Hilux_Cargo01";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Hilux_Cargo01: Crew
		{
			file = "\bn_csw_load\data\Hilux_Cargo01.rtm";
			interpolateTo[] = {"KIA_Hilux_Cargo01",1};
		};
	};
};