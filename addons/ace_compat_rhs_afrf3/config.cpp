#include "script_component.hpp"

class CfgPatches
{
	class ace_compat_rhs_afrf3
	{
		name="ACE3 - RHS AFRF Compatibility";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"ace_rearm",
			"ace_refuel",
			"ace_repair",
			"rhs_c_weapons",
			"rhs_c_troops",
			"rhs_c_bmd",
			"rhs_c_bmp",
			"rhs_c_bmp3",
			"rhs_c_a2port_armor",
			"rhs_c_btr",
			"rhs_c_sprut",
			"rhs_c_t72",
			"rhs_c_tanks",
			"rhs_c_a2port_air",
			"rhs_c_a2port_car",
			"rhs_c_cars",
			"rhs_c_trucks",
			"rhs_c_2s3",
			"rhs_c_rva",
			"rhs_c_heavyweapons"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"Ruthberg",
			"GitHawk",
			"BaerMitUmlaut",
			"commy2",
			"Skengman2"
		};
		url="$STR_ace_main_URL";
		version="3.12.6.43";
		versionStr="3.12.6.43";
		versionAr[]={3,12,6,43};
		magazines[]={};
		ammo[]=
		{
			"rhs_B_545x39_Ball",
			"rhs_B_545x39_Ball_Tracer_Green",
			"rhs_B_762x54_Ball",
			"rhs_B_762x54_Ball_Tracer_Green",
			"rhs_B_762x54_7N1_Ball",
			"rhs_B_762x39_Ball",
			"rhs_B_762x39_Tracer",
			"rhs_B_9x19_7N21",
			"rhs_B_9x18_57N181S",
			"rhs_B_545x39_7U1_Ball",
			"rhs_B_762x39_U_Ball",
			"rhs_B_9x39_SP5",
			"rhs_ammo_127x108mm_x5",
			"rhs_ammo_rgd5",
			"rhs_ammo_rgn_base",
			"rhs_ammo_rgn",
			"rhs_ammo_rgn_sub",
			"rhs_ammo_rgn_exp",
			"rhs_ammo_fakel",
			"rhs_ammo_fakels",
			"rhs_ammo_zarya2",
			"rhs_ammo_plamyam",
			"R_PG32V_F",
			"rhs_rpg26_rocket",
			"rhs_rpg7v2_pg7vl",
			"rhs_rpg7v2_og7v",
			"rhs_rpg7v2_tbg7v",
			"rhs_rshg2_rocket",
			"rhs_g_vog25",
			"rhs_g_vg40tb",
			"rhs_g_vg40sz",
			"rhs_g_gdm40",
			"rhs_g_vg40md_white"
		};
	};
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"