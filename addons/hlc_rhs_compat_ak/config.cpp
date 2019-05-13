class CfgPatches
{
	class HLC_COMPAT_RHS_AK
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"hlcweapons_core",
			"hlcweapons_aks",
			"rhs_c_weapons",
			"cba_jr"
		};
		version="1";
		projectName="HLCmod";
		author="Toadie";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class UGL_F;
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			"hlc_60Rnd_545x39_t_rpk",
			"hlc_45Rnd_545x39_m_rpk",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F"
		};
	};
	class rhs_weap_ak74m;
	class rhs_weap_akm: rhs_weap_ak74m
	{
		magazines[]+=
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_30Rnd_762x39_AP_ak",
			"hlc_45Rnd_762x39_AP_rpk",
			"hlc_75Rnd_762x39_AP_rpk",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
	};
	class rhs_weap_pkp;
	class rhs_weap_rpk74m: rhs_weap_pkp
	{
		magazines[]+=
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			"hlc_60Rnd_545x39_t_rpk",
			"hlc_45Rnd_545x39_m_rpk",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F"
		};
	};
	class rhs_weap_m70_base: Rifle_Base_F
	{
		magazines[]+=
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_30Rnd_762x39_AP_ak",
			"hlc_45Rnd_762x39_AP_rpk",
			"hlc_75Rnd_762x39_AP_rpk",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
	};
	class GP25_Base: UGL_F
	{
		magazines[]+=
		{
			"hlc_VOG25_AK",
			"hlc_GRD_White",
			"hlc_GRD_Red",
			"hlc_GRD_Green",
			"hlc_GRD_Yellow",
			"hlc_GRD_Purple",
			"hlc_GRD_Blue",
			"hlc_GRD_Orange"
		};
	};
	class hlc_ak_base: Rifle_Base_F
	{
		magazines[]+=
		{
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7N6_AK",
			"rhs_45Rnd_545x39_7N6_AK"
		};
		class hlc_GP30: UGL_F
		{
			magazines[]+=
			{
				"rhs_VOG25",
				"rhs_VOG25p",
				"rhs_vg40tb",
				"rhs_vg40sz",
				"rhs_vg40op_white",
				"rhs_vg40op_green",
				"rhs_vg40op_red",
				"rhs_GRD40_white",
				"rhs_GRD40_green",
				"rhs_GRD40_red",
				"rhs_VG40MD_White",
				"rhs_VG40MD_Green",
				"rhs_VG40MD_Red",
				"rhs_GDM40"
			};
		};
	};
	class hlc_rifle_ak74: hlc_ak_base
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74_45rnd";
		};
	};
	class hlc_rifle_ak74_dirty: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74_dirty_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74_dirty_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74_dirty_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74_dirty_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74_dirty_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74_dirty_45rnd";
		};
	};
	class hlc_rifle_ak74_dirty2: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74_dirty2_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74_dirty2_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74_dirty2_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74_dirty2_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74_dirty2_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74_dirty2_45rnd";
		};
	};
	class hlc_rifle_aks74: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aks74_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aks74_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aks74_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aks74_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aks74_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aks74_45rnd";
		};
	};
	class hlc_rifle_ak12: hlc_ak_base
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak12_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak12_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak12_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak12_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak12_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak12_45rnd";
		};
	};
	class hlc_rifle_ak12GL: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak12GL_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak12GL_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak12GL_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak12GL_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak12GL_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak12GL_45rnd";
		};
	};
	class hlc_rifle_aku12: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aku12_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aku12_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aku12_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aku12_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aku12_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aku12_45rnd";
		};
	};
	class hlc_rifle_RPK12: hlc_rifle_ak12
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_RPK12_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_RPK12_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_RPK12_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_RPK12_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_RPK12_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_RPK12_45rnd";
		};
	};
	class hlc_rifle_aks74u: hlc_ak_base
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aks74u_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aks74u_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aks74u_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aks74u_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aks74u_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aks74u_45rnd";
		};
	};
	class hlc_rifle_rpk74n: hlc_ak_base
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_rpk74n_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_rpk74n_45rnd";
		};
	};
	class hlc_rifle_aks74_GL: hlc_rifle_aks74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aks74_GL_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aks74_GL_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aks74_GL_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aks74_GL_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aks74_GL_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aks74_GL_45rnd";
		};
	};
	class hlc_rifle_aek971: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aek971_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aek971_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aek971_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aek971_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aek971_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aek971_45rnd";
		};
	};
	class hlc_rifle_aek971worn: hlc_rifle_aek971
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aek971worn_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aek971worn_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aek971worn_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aek971worn_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aek971worn_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aek971worn_45rnd";
		};
	};
	class hlc_rifle_ak74_MTK: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74_MTK_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74_MTK_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74_MTK_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74_MTK_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74_MTK_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74_MTK_45rnd";
		};
	};
	class hlc_rifle_ak74m: hlc_rifle_ak74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74m_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74m_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74m_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74m_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74m_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74m_45rnd";
		};
	};
	class hlc_rifle_ak74m_gl: hlc_rifle_ak74m
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74m_gl_45rnd";
		};
	};
	class hlc_rifle_ak74m_MTK: hlc_rifle_ak74m
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_ak74m_gl_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_ak74m_gl_45rnd";
		};
	};
	class hlc_rifle_aek971_mtk: hlc_rifle_aek971
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aek971_mtk_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aek971_mtk_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aek971_mtk_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aek971_mtk_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aek971_mtk_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aek971_mtk_45rnd";
		};
	};
	class hlc_rifle_aks74u_MTK: hlc_rifle_aks74u
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aks74u_MTK_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aks74u_MTK_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aks74u_MTK_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aks74u_MTK_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aks74u_MTK_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aks74u_MTK_45rnd";
		};
	};
	class hlc_rifle_aks74_MTK: hlc_rifle_aks74
	{
		class nia_magSwitch
		{
			rhs_45Rnd_545x39_AK="hlc_rifle_aks74_MTK_45rnd";
			rhs_45Rnd_545x39_7N10_AK="hlc_rifle_aks74_MTK_45rnd";
			rhs_45Rnd_545x39_7N22_AK="hlc_rifle_aks74_MTK_45rnd";
			rhs_45Rnd_545x39_AK_green="hlc_rifle_aks74_MTK_45rnd";
			rhs_45Rnd_545x39_7U1_AK="hlc_rifle_aks74_MTK_45rnd";
			rhs_45Rnd_545x39_7N6_AK="hlc_rifle_aks74_MTK_45rnd";
		};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"hlc_30Rnd_545x39_B_AK",
			"hlc_30Rnd_545x39_T_AK",
			"hlc_30Rnd_545x39_EP_AK",
			"hlc_45Rnd_545x39_t_rpk",
			"hlc_30Rnd_545x39_S_AK",
			"hlc_60Rnd_545x39_t_rpk",
			"hlc_45Rnd_545x39_m_rpk",
			"rhs_30Rnd_545x39_AK",
			"rhs_30Rnd_545x39_AK_no_tracers",
			"rhs_30Rnd_545x39_7N10_AK",
			"rhs_30Rnd_545x39_7N22_AK",
			"rhs_30Rnd_545x39_AK_green",
			"rhs_30Rnd_545x39_7U1_AK",
			"rhs_45Rnd_545x39_AK",
			"rhs_45Rnd_545x39_7N10_AK",
			"rhs_45Rnd_545x39_7N22_AK",
			"rhs_45Rnd_545x39_AK_green",
			"rhs_45Rnd_545x39_7U1_AK",
			"rhs_30Rnd_545x39_7N6_AK",
			"rhs_45Rnd_545x39_7N6_AK"
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_30Rnd_762x39_AP_ak",
			"hlc_45Rnd_762x39_AP_rpk",
			"hlc_75Rnd_762x39_AP_rpk",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		magazines[]+=
		{
			"hlc_30Rnd_762x39_b_ak",
			"hlc_30Rnd_762x39_t_ak",
			"hlc_45Rnd_762x39_m_rpk",
			"HLC_45rnd_762x39_T_RPK",
			"hlc_30rnd_762x39_s_ak",
			"hlc_75Rnd_762x39_m_rpk",
			"hlc_30Rnd_762x39_AP_ak",
			"hlc_45Rnd_762x39_AP_rpk",
			"hlc_75Rnd_762x39_AP_rpk",
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
};
