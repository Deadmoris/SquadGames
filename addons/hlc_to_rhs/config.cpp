class CfgPatches
{
	class hlc_to_rhs
	{
		requiredAddons[] = {"hlcweapons_aks", "rhs_c_weapons", "rhsgref_c_weapons", "rhs_sounds", "rhsusf_c_weapons",};
		units[] = {};
		weapons[] = {};
		author = "Peroika";
		version[] = {};
	};
};

class CfgMagazines {
	class rhs_30Rnd_545x39_7N6_AK;
	class hls_rhs_60Rnd_545x39_7N6_AK: rhs_30Rnd_545x39_7N6_AK
	{
		modelSpecial = "\HLC_TO_RHS\rhs_mag_545x39_6l31_60rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
		count = 60;
		mass= 20;
		displayName = "$STR_SG_60_mag_7N6";
	};
	class rhs_30Rnd_545x39_7N10_AK;
	class hlc_rhs_60Rnd_545x39_7N10_AK: rhs_30Rnd_545x39_7N10_AK
	{
		modelSpecial = "\HLC_TO_RHS\rhs_mag_545x39_6l31_60rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
		count = 60;
		mass= 20;
		displayName = "$STR_SG_60_mag_7N10";
	};
	class rhs_30Rnd_545x39_AK_green;
	class hlc_rhs_60Rnd_545x39_t_rpk: rhs_30Rnd_545x39_AK_green
	{
		modelSpecial = "\HLC_TO_RHS\rhs_mag_545x39_6l31_60rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
		count = 60;
		mass= 20;
		displayName = "$STR_SG_60_mag_AK_green";
	};
	class rhs_30Rnd_545x39_7N22_AK;
	class hlc_rhs_60Rnd_545x39_7N22_AK: rhs_30Rnd_545x39_7N22_AK
	{
		modelSpecial = "\HLC_TO_RHS\rhs_mag_545x39_6l31_60rnd.p3d";
		picture = "\hlc_wp_ak\tex\ui\m_rpk12_mixed_ca.paa";
		count = 60;
		mass= 20;
		displayName = "$STR_SG_60_mag_7N22";
	};
	class 30Rnd_556x45_Stanag;
	class hlc_30Rnd_545x39_B_AK: 30Rnd_556x45_Stanag
	{
		scope = 1;
	};
	class hlc_30Rnd_545x39_S_AK: 30Rnd_556x45_Stanag
	{
		scope = 1;
	};
	class hlc_30Rnd_545x39_t_ak: hlc_30Rnd_545x39_B_AK
	{
		scope = 1;
	};
	class hlc_45Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		scope = 1;
	};
	class hlc_45Rnd_545x39_m_rpk: hlc_30Rnd_545x39_T_ak
	{
		scope = 1;
	};
	class hlc_60Rnd_545x39_t_rpk: hlc_30Rnd_545x39_T_ak
	{
		scope = 1;
	};
	class hlc_30Rnd_545x39_EP_ak: hlc_30Rnd_545x39_B_AK
	{
		scope = 1;
	};
};
	
	class CfgWeapons
{	
	class InventoryMuzzleItem_Base_F;	// External class reference{
	class muzzle_snds_H;	// External class reference
	
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class UGL_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F	{};
	class rhs_weap_ak74m_camo: rhs_weap_ak74m {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_camo_dtk : rhs_weap_ak74m_camo {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_npz : rhs_weap_ak74m {};
	class rhs_weap_ak74m_desert_npz : rhs_weap_ak74m_npz {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
		
	};
	class rhs_weap_ak74m_camo_npz : rhs_weap_ak74m_npz {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_desert: rhs_weap_ak74m {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_desert_dtk : rhs_weap_ak74m_desert {
		handAnim[] = {"OFP2_ManSkeleton", "\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak.rtm"};
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74: rhs_weap_ak74m
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74_3: rhs_weap_ak74
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_zenitco01_b33 : rhs_weap_ak74m
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class rhs_weap_ak74m_zenitco01 : rhs_weap_ak74m
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK"
		};
	};
	class hlc_ak_base;
	class hlc_rifle_ak12: hlc_ak_base
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK",
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_EP_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_m_rpk"
		};
		magazineWell[] = {"AK_545x39"};
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak12_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak12_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak12_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak12_60rnd";
			default = "hlc_rifle_ak12";
		};
	};
	class hlc_rifle_ak12GL: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak12Gl_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak12GL_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak12GL_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak12GL_60rnd";
			default = "hlc_rifle_ak12GL";
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aku12_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aku12_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aku12_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aku12_60rnd";
			default = "hlc_rifle_aku12";
		};
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_RPK12_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_RPK12_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_RPK12_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_RPK12_60rnd";
			default = "hlc_rifle_RPK12";
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK",
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_EP_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_m_rpk"
		};
		magazineWell[] = {"AK_545x39"};
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74_60rnd";
			default = "hlc_rifle_ak74";
		};
	};
	class hlc_rifle_ak74_MTK: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74_MTK_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74_MTK_60rnd";
			default = "hlc_rifle_ak74_MTK";
		};
	};
	class hlc_rifle_ak74_dirty2: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty2_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74_dirty2_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74_dirty2_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74_dirty2_60rnd";
			default = "hlc_rifle_ak74_dirty2";
		};
	};
	class hlc_rifle_ak74_dirty:	hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74_dirty_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74_dirty_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74_dirty_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74_dirty_60rnd";
			default = "hlc_rifle_ak74_dirty";
		};
	};
	class hlc_rifle_ak74m: hlc_ak_base
	{	
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK",
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_EP_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_m_rpk"
		};
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74m_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74m_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74m_60rnd";
			default = "hlc_rifle_ak74m";
		};
	};
	class hlc_rifle_ak74m_gl: hlc_rifle_ak74m
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_gl_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74m_gl_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74m_gl_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74m_gl_60rnd";
			default = "hlc_rifle_ak74m_gl";
		};
	};
	class hlc_rifle_ak74m_MTK: hlc_rifle_ak74m
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_ak74m_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_ak74m_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_ak74m_MTK_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_ak74m_MTK_60rnd";
			default = "hlc_rifle_ak74m_MTK";
		};
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aks74_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aks74_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aks74_60rnd";
			default = "hlc_rifle_aks74";
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_GL_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aks74_GL_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aks74_GL_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aks74_GL_60rnd";
			default = "hlc_rifle_aks74_GL";
		};
	};
	class hlc_rifle_aks74_MTK: hlc_rifle_aks74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aks74_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aks74_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aks74_MTK_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aks74_MTK_60rnd";
			default = "hlc_rifle_aks74_MTK";
		};
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK",
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_EP_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_m_rpk"
		};
		magazineWell[] = {"AK_545x39"};
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_rpk74n_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_rpk74n_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_rpk74n_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_rpk74n_60rnd";
			default = "hlc_rifle_rpk74n";
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		magazines[] =
		{
			"rhs_30Rnd_545x39_7N10_AK","rhs_30Rnd_545x39_7N10_plum_AK","rhs_30Rnd_545x39_7N10_desert_AK","rhs_30Rnd_545x39_7N10_camo_AK","rhs_30Rnd_545x39_7N6_AK","rhs_30Rnd_545x39_7N6_green_AK","rhs_30Rnd_545x39_7N6M_AK","rhs_30Rnd_545x39_7N6M_green_AK","rhs_30Rnd_545x39_7N6M_plum_AK","rhs_30Rnd_545x39_7N10_2mag_AK","rhs_30Rnd_545x39_7N10_2mag_plum_AK","rhs_30Rnd_545x39_7N10_2mag_desert_AK","rhs_30Rnd_545x39_7N10_2mag_camo_AK","rhs_30Rnd_545x39_7N22_AK","rhs_30Rnd_545x39_7N22_plum_AK","rhs_30Rnd_545x39_7N22_desert_AK","rhs_30Rnd_545x39_7N22_camo_AK","rhs_30Rnd_545x39_AK_green","rhs_30Rnd_545x39_AK_plum_green","rhs_30Rnd_545x39_7U1_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N10_AK","rhs_45Rnd_545X39_7N22_AK","rhs_45Rnd_545X39_AK_Green","rhs_45Rnd_545X39_7U1_AK",
			"hlc_rhs_60Rnd_545x39_t_rpk","hlc_rhs_60Rnd_545x39_7N22_AK","hlc_rhs_60Rnd_545x39_7N10_AK","hls_rhs_60Rnd_545x39_7N6_AK",
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_t_ak", "hlc_30Rnd_545x39_EP_ak", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK",
			"hlc_45Rnd_545x39_m_rpk"
		};
		magazineWell[] = {"AK_545x39"};
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aks74u_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aks74u_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aks74u_60rnd";
			default = "hlc_rifle_aks74u";
		};
	};
	class hlc_rifle_aks74u_MTK: hlc_rifle_aks74u
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aks74u_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aks74u_MTK_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aks74u_MTK_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aks74u_MTK_60rnd";
			default = "hlc_rifle_aks74u_MTK";
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aek971_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aek971_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aek971_60rnd";
			default = "hlc_rifle_aek971";
		};
	};
	class hlc_rifle_aek971_mtk: hlc_rifle_aek971
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aek971_mtk_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aek971_mtk_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aek971_mtk_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aek971_mtk_60rnd";
			default = "hlc_rifle_aek971_mtk";
		};
	};
	class hlc_rifle_aek971worn: hlc_rifle_aek971
	{
		class nia_magSwitch
		{
			hlc_rhs_60Rnd_545x39_t_rpk = "hlc_rifle_aek971worn_60rnd";
			hlc_rhs_60Rnd_545x39_7N22_AK = "hlc_rifle_aek971worn_mtk_60rnd";
			hlc_rhs_60Rnd_545x39_7N10_AK = "hlc_rifle_aek971worn_60rnd";
			hls_rhs_60Rnd_545x39_7N6_AK = "hlc_rifle_aek971worn_60rnd";
			default = "hlc_rifle_aek971worn";
		};
	};	
};