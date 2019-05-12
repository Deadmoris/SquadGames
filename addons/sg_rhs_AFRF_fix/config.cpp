class CfgPatches {
	class sg_rhs_AFRF_fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_02", "A3_Air_F_Heli_Light_02", "A3_Air_F_Beta_Heli_Attack_02", "rhs_c_a2port_air", "rhs_c_heavyweapons", "rhs_main", "rhs_decals", "rhs_optics", "rhs_c_troops", "rhs_c_btr", "A3_Armor_F", "A3_Armor_F_Beta", "A3_armor_f_beta_APC_Tracked_02", "A3_Soft_F", "rhs_c_radars", "A3_CargoPoses_F", "A3_Armor_F_T100K", "rhs_aps", "A3_Anims_F_Config_Sdr","rhs_c_weapons","rhs_c_a2port_armor", "rhs_c_mi28", "rhsgref_c_troops", "rhsgref_c_a2port_armor", "rhs_sounds", "rhs_c_mig29", "rhssaf_c_weapons", "rhsgref_c_weapons", "rhs_weapon_sounds"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgAmmo
{
	class M_Titan_AT;
	
	class rhs_ammo_atgmCore_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
	
	class rhs_ammo_atgmBase_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
    class rhs_ammo_3bm_base;
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 440;
		typicalSpeed = 1800;
		caliber = 9.07407;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 465;
		typicalSpeed = 1800;
		caliber = 10.3704;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 490;
		typicalSpeed = 1780;
		caliber = 11.6105;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1760;
		caliber = 10.9848;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 450;
		typicalSpeed = 1760;
		caliber = 14.3939;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1720;
		caliber = 15.8915;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 16.8627;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 21.1765;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 500;
		caliber = 19.2157;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 520;
		typicalSpeed = 1750;
		caliber = 24.7619;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 26.7059;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 30.5882;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 27.0588;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 33.6842;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 31.2281;
	};
	class rhs_ammo_of_base;
	class rhs_ammo_3of_base: rhs_ammo_of_base //повышаем сплеш осколочных у N72,80,90
	{
		hit = 350;
		indirectHit = 130;
		indirectHitRange = 40;
	};
};