class CfgPatches
{
	class 40th_weapons_cfg
	{
		units[]={};
		weapons[]=
		{
			"40th_weap_svd_wood",
			"40th_weap_svd_wood_pso1"
		};
		requiredVersion=1;
		requiredAddons[]=
		{
			"rhs_main",
			"A3_Data_F"
		};
	};
};
class CfgWeapons
{
	class rhs_weap_svd;
	class 40th_weap_svd_wood: rhs_weap_svd
	{
		baseWeapon="sar_weap_svd_wood";
		displayname="$STR_SVD_WOOD";
		scope=2;
		model="\rhsafrf\addons\rhs_weapons\SVD\svd_polymer";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"40th_weapons\svd\data\svdp_co.paa",
			"rhsafrf\addons\rhs_weapons\svd\data\svds_co.paa"
		};
	};
	class 40th_weap_svd_wood_pso1: 40th_weap_svd_wood
	{
		scope=1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhs_acc_pso1m2";
			};
		};
	};
};
class cfgMods
{
	author="Basher";
	timepacked="1545955006";
};
