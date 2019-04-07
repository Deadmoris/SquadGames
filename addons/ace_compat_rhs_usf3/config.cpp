#include "script_component.hpp"

class CfgPatches
{
	class ace_compat_rhs_usf3
	{
		name="ACE3 - RHS USF Compatibility";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"ace_javelin",
			"ace_rearm",
			"ace_refuel",
			"ace_repair",
			"rhsusf_c_weapons",
			"rhsusf_c_troops",
			"rhsusf_c_m1a1",
			"rhsusf_c_m1a2",
			"RHS_US_A2_AirImport",
			"rhsusf_c_m109",
			"rhsusf_c_HEMTT_A4",
			"rhsusf_c_hmmwv",
			"rhsusf_c_rg33",
			"rhsusf_c_fmtv",
			"rhsusf_c_m113",
			"RHS_US_A2Port_Armor",
			"rhsusf_c_melb"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"Ruthberg",
			"GitHawk",
			"BaerMitUmlaut"
		};
		url="$STR_ace_main_URL";
		version="3.12.6.43";
		versionStr="3.12.6.43";
		versionAr[]={3,12,6,43};
		magazines[]={};
		ammo[]=
		{
			"rhsusf_ammo_127x99_M33_Ball",
			"rhsusf_ammo_127x99_mk211",
			"rhsusf_B_300winmag",
			"rhs_ammo_556x45_M855_Ball",
			"rhs_ammo_556x45_M855A1_Ball",
			"rhs_ammo_556x45_M855A1_Ball_Red",
			"rhs_ammo_556x45_M855A1_Ball_Green",
			"rhs_ammo_556x45_M855A1_Ball_Yellow",
			"rhs_ammo_556x45_M855A1_Ball_Orange",
			"rhs_ammo_556x45_Mk318_Ball",
			"rhs_ammo_556x45_Mk262_Ball",
			"rhs_ammo_762x51_M80_Ball",
			"rhs_ammo_762x51_M61_AP",
			"rhs_ammo_762x51_M62_tracer",
			"rhs_ammo_762x51_M80A1EPR_Ball",
			"rhs_ammo_762x51_M118_Special_Ball",
			"rhs_ammo_762x51_M993_Ball",
			"rhs_ammo_46x30_FMJ",
			"rhs_ammo_46x30_JHP",
			"rhs_ammo_46x30_AP",
			"rhs_ammo_45ACP_MHP",
			"rhs_ammo_9x19_FMJ",
			"rhs_ammo_9x19_JHP",
			"rhs_ammo_M_fgm148_AT",
			"rhs_ammo_mk3a2",
			"rhs_ammo_m84",
			"rhs_ammo_m7a3_cs",
			"rhs_ammo_m69",
			"rhs_ammo_m67",
			"rhs_ammo_M136_rocket",
			"rhs_ammo_M136_hedp_rocket",
			"rhs_ammo_smaw_SR"
		};
	};
};

#include "CfgAmmo.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"