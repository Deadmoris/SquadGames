#include "script_component.hpp"

class CfgPatches
{
	class ace_compat_rhs_gref3
	{
		name="ACE3 - RHS GREF Compatibility";
		units[]={};
		weapons[]={};
		requiredVersion=1.88;
		requiredAddons[]=
		{
			"rhsgref_main",
			"rhsgref_c_weapons"
		};
		author="$STR_ace_common_ACETeam";
		authors[]=
		{
			"PabstMirror",
			"Ruthberg",
			"Anton"
		};
		url="$STR_ace_main_URL";
		version="3.12.6.43";
		versionStr="3.12.6.43";
		versionAr[]={3,12,6,43};
		magazines[]={};
		ammo[]=
		{
			"rhsgref_ammo_rkg3em",
			"rhs_ammo_762x25_Ball",
			"rhs_ammo_792x57_Ball"
		};
	};
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"