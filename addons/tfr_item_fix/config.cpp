class CfgPatches
{
	class tfr_item_fix
	{
		requiredAddons[] = {"A3_Modules_F", "A3_UI_F", "A3_Structures_F_Items_Electronics", "A3_Weapons_F_ItemHolders"};
		units[] = {};
		weapons[] = {};
		author = "Peroika";
		version[] = {};
	};
};

class CfgVehicles {
	class ReammoBox;
	class Item_Base_F;

	class Bag_Base: ReammoBox
	{
		tf_hasLRradio = 0;
		tf_encryptionCode = "";
		tf_range = 20000;
	};
	class TFAR_Bag_Base: Bag_Base
	{
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		scope = 1;
		scopeCurator = 1;
	};
  
	class tf_rt1523g: TFAR_Bag_Base
	{
		maximumLoad = 110;
	};
	class tf_rt1523g_sage: tf_rt1523g
	{
		maximumLoad= 160;
	};
	class tf_rt1523g_green: tf_rt1523g
	{
		maximumLoad= 160;
	};
	class tf_rt1523g_fabric: tf_rt1523g
	{
		maximumLoad= 160;
	};
	class tf_rt1523g_black: tf_rt1523g
	{
		maximumLoad= 160;
	};
	class tf_bussole: TFAR_Bag_Base
	{
		maximumLoad= 110;
	};
	class tf_anarc210: TFAR_Bag_Base
	{
		maximumLoad= 160;
	};
	class tf_anarc164: TFAR_Bag_Base
	{
		maximumLoad= 160
	};
	class tf_mr6000l: TFAR_Bag_Base
	{
		maximumLoad= 160;
	};
	class tf_rt1523g_rhs: tf_rt1523g
	{
		maximumLoad= 110;
	};
	class tf_rt1523g_bwmod: tf_rt1523g
	{
		maximumLoad= 110;
	};
	
};