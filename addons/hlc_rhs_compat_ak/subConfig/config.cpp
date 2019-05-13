class CfgPatches
{
	class HLC_COMPAT2_RHS_AK
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"hlcweapons_aks",
			"rhs_c_weapons",
			"HLC_COMPAT_RHS_AK"
		};
		version="1";
		projectName="HLCmod";
		author="Robalo";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class rhs_weap_akm;
	class hlc_ak_base;
	class hlc_rifle_ak47: hlc_ak_base
	{
		magazines[]+=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
	class hlc_rifle_rpk: hlc_ak_base
	{
		magazines[]+=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
	class hlc_rifle_RK62: hlc_ak_base
	{
		magazines[]+=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
	class hlc_rifle_slr107u: hlc_ak_base
	{
		magazines[]+=
		{
			"rhs_30Rnd_762x39mm",
			"rhs_30Rnd_762x39mm_tracer",
			"rhs_30Rnd_762x39mm_89",
			"rhs_30Rnd_762x39mm_U"
		};
	};
};
