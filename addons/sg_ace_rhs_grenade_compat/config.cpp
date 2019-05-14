
class CfgPatches {
	class sg_ace_rhs_grenade_compat {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_frag", "rhs_c_weapons","rhsusf_c_weapons","rhs_c_troops","rhsusf_c_troops", "ace_compat_rhs_afrf3", "ace_compat_rhs_usf3", "ace_compat_rhs_gref3","A3_Weapons_F_Tank"};
		author = "Pzn, griggs";
		ammo[] = {"rhs_ammo_rgd5","rhs_ammo_rgn_base","rhs_ammo_rgn","rhs_ammo_rgo_base","rhs_ammo_rgo","rhs_ammo_rgn_exp","rhs_ammo_rgo_exp","rhs_ammo_rgn_sub","rhs_ammo_rgo_sub","rhs_ammo_fakel","rhs_ammo_fakels","rhs_ammo_zarya2","rhs_ammo_plamyam","R_PG32V_F","rhs_rpg26_rocket","rhs_rpg7v2_pg7vl","rhs_rpg7v2_og7v","rhs_rpg7v2_tbg7v","rhs_rshg2_rocket","rhs_ammo_M136_hedp_rocket","rhs_ammo_gbu12","rhs_ammo_fab250"};
	};
};

class cfgammo {
	class B_65x39_Caseless;
	class GrenadeBase;
	class G_40mm_HE : GrenadeBase {
		indirectHit = 8;
		indirectHitRange = 2;
	};
	class Grenade;
	class GrenadeHand : Grenade {
		indirectHit = 10;
		indirectHitRange = 2;
	};
	class mini_Grenade : GrenadeHand {
		indirectHit = 8;
		indirectHitRange = 1.5;
	};
	class rhs_ammo_m67: GrenadeHand
	{
		indirectHit = 10;
		indirectHitRange = 2;
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
	};
	class rhs_ammo_rgd5 : GrenadeHand {
		indirectHit = 10;
		indirectHitRange = 2;
        ace_frag_classes[] = {"ACE_frag_tiny_HD"};
	};
	/* class rhs_ammo_rgn_base: rhs_ammo_rgd5
	{
		explosionTime = 4;
		indirectHitRange = 3;
	};
	/*class rhs_ammo_rgn_sub: rhs_ammo_rgn_base
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 193;
		ace_frag_charge = 97;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhs_ammo_rgo_base: rhs_ammo_rgd5
	{
		explosionTime = 4;
		indirectHitRange = 5;
	};
	class rhs_ammo_rgo_sub: rhs_ammo_rgo_base
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 243;
		ace_frag_charge = 67;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_small_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	}; */
	class rhs_ammo_f1: GrenadeHand
	{
		indirectHit = 7;
		indirectHitRange = 3.5;		
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_enabled = 1;
		ace_frag_skip = 0;
		ace_frag_force = 1;
		ace_frag_metal = 500;
		ace_frag_charge = 60;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "3/5";
	};
	// class rhs_ammo_VOG30: G_40mm_HE
	// {
	// 	indirectHit = 8;
	// 	indirectHitRange = 2;
	// };
	// class rhs_ammo_GPD30: rhs_ammo_VOG30
	// {
	// 	indirectHit = 7;
	// 	indirectHitRange = 4;
	// };
	// class rhs_ammo_VOG17m: rhs_ammo_VOG30
	// {
	// 	indirectHit = 4;
	// 	indirectHitRange = 1.2;
	// };
	class rhs_g_vog25: G_40mm_HE {
		ace_frag_enabled = 1;
        ace_frag_metal = 250;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 48;  // Amount of explosive filler (grams) - information below
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhs_g_vog25p: rhs_g_vog25 {
        ace_frag_metal = 275;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 42;  // Amount of explosive filler (grams) - information below
	};
	class rhsusf_40mm_HE: G_40mm_HE
	{
		ace_frag_enabled = 1;
        ace_frag_metal = 230;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 32;  // Amount of explosive filler (grams) - information below
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class rhsusf_40mm_HEDP: rhsusf_40mm_HE
	{
		indirectHit = 5;
		indirectHitRange = 1.2;
        ace_frag_metal = 230;  // Amount of metal being fragmented (grams) - information below
        ace_frag_charge = 45;  // Amount of explosive filler (grams) - information below
	};
	class rhs_g_gdm40 : rhs_g_vog25 {
		ace_frag_enabled = 0;
		ace_frag_skip = 1;
		ace_frag_force = 0;
	};
	class RocketBase;
	class R_PG32V_F: RocketBase{};
	class rhs_rpg26_rocket: R_PG32V_F{
		// submunitionAmmo = "";
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket{};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		indirectHitRange = 8;
		ace_frag_enabled = 1;
		ace_frag_metal = 1600;
		ace_frag_charge = 400;
		ace_frag_gurney_c = 2800;
		ace_frag_gurney_k = "3/5";
		ace_frag_classes[] = {"ACE_frag_small"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	
	
	class rhs_ammo_M136_rocket : RocketBase {
		// submunitionAmmo = "";
		indirectHit = 25;
		indirectHitRange = 3;
	};
	
	class rhs_ammo_M136_hedp_rocket : rhs_ammo_M136_rocket {
		indirectHit = 31;
		indirectHitRange = 4.5;
	};
	class Bomb_04_F;
	class rhs_ammo_gbu12: Bomb_04_F {
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge"};
		ace_frag_metal = 140000;
		ace_frag_charge = 87000;
		ace_frag_gurney_c = 2320;
		ace_frag_gurney_k = "1/2";
	};
	class rhs_ammo_fab250: bomb_04_f {
		ace_frag_enabled = 1;
		ace_frag_classes[] = {"ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge"};
		ace_frag_metal = 156000;
		ace_frag_charge = 940000;
		ace_frag_gurney_c = 2320;
		ace_frag_gurney_k = "1/2";
	};
	
	/* class rhs_ammo_Hydra_HE : RocketBase {	
		hit = 200;
		indirectHit = 40;
		indirectHitRange = 8;
	}; */
	
	class BulletBase;
	
	class Gatling_30mm_HE_Plane_CAS_01_F : BulletBase { 
		hit = 125;
		indirectHit = 15;
		indirectHitRange = 2.3;
	};
	
	class B_30mm_APFSDS_Tracer_Red;
	
	class RHS_ammo_M919_APFSDS : B_30mm_APFSDS_Tracer_Red {
		indirectHit = 3;
		indirectHitRange = 0.03;
	};
			
	class rhs_ammo_mk19m3_M384 : G_40mm_HE {
		indirectHit = 10;
		indirectHitRange = 2.1;
	};
	
	class rhs_ammo_mk19m3_M430I : G_40mm_HE {
		indirectHit = 10;
		indirectHitRange = 2.1;
	};
};




class cfgweapons {
	class rhs_acc_sniper_base;
	class rhs_acc_1pn93_base: rhs_acc_sniper_base
	{
		ace_nightvision_nvgGeneration = 2;
	};
	class NVGoggles;
	class rhs_1PN138: NVGoggles
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius = 0.13;
	};
	class rhsusf_ANPVS_14: NVGoggles
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_4096.paa";
		ace_nightvision_bluRadius = 0.13;
	};
	class rhsusf_ANVIS: NVGoggles
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius = 0.15;
	};
	class rhsusf_ANPVS_15: rhsusf_ANPVS_14
	{
		modelOptics = "";
		ace_nightvision_border = "\z\ace\addons\nightvision\data\nvg_mask_binos_4096.paa";
		ace_nightvision_bluRadius = 0.15;
	};
	
	
};