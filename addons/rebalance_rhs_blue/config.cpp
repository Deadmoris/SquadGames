class CfgPatches {
	class rebalance_rhs_blue {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhsusf_c_troops", "rhsusf_c_heavyweapons", "RHS_US_A2_AirImport", "A3_Armor_F_EPB_APC_tracked_03", "RHS_US_A2Port_Armor", "A3_Soft_F_MRAP_01", "rhsusf_vehicles", "rhsusf_c_hmmwv", "bn_csw_load","rhsusf_c_ch53","rhsusf_c_weapons","rhs_c_weapons", "ace_compat_rhs_usf3", "rhsusf_optics","rhsusf_c_m1117","rhsusf_c_melb", "rhs_c_weapons", "rhsgref_c_air","rhsusf_c_airweapons","rhsusf_c_m1a1","rhsusf_c_m1a2","rhsusf_sounds","rhsusf_weapon_sounds","rhsusf_c_m109","rhsusf_c_Cougar","rhsusf_c_Caiman"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgAmmo {
	class B_127x99_Ball;
	class B_127x99_SLAP;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		caliber = 2.5;
		hit = 30;
	};
	
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball {
		hit = 35;
		caliber = 2.8;
	};
	class rhs_ammo_127x99_Ball:B_127x99_Ball
	{
		caliber = 2.6;		
	}

	class rhs_ammo_127x99_SLAP: B_127x99_SLAP
	{
		caliber = 3.4;
	}
};