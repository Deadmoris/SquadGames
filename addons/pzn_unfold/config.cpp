class CfgPatches
{
	class pzn_unfold
	{
		units[] = {};
		weapons[] = {"pzn_rope"};
		requiredVersion = 1.64;
		requiredAddons[] = {"ACE_Interaction"};
	};
};


class CfgFunctions
{
	class pzn_unfold
	{
		class functions
		{
			class attachrope
			{
				file = "\pzn_unfold\functions\fn_attachrope.sqf";
			};
			class detachrope
			{
				file = "\pzn_unfold\functions\fn_detachrope.sqf";
			};
			class attachropeto
			{
				file = "\pzn_unfold\functions\fn_attachropeto.sqf";
			};
			class detachbridge
			{
				file = "\pzn_unfold\functions\fn_detachbridge.sqf";
			};
			class attachbridge
			{
				file = "\pzn_unfold\functions\fn_attachbridge.sqf";
			};
		};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class pzn_unfold
				{
					displayName = "$STR_pzn_unfold";
					class pzn_unfold_attach
					{
						displayName = "$STR_pzn_unfold_attach";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_attachrope";
						priority = 1.2;
					};
					class pzn_unfold_detach
					{
						displayName = "$STR_pzn_unfold_detach";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_detachrope";
						priority = 1.2;
					};
					class pzn_unfold_attachto
					{
						displayName = "$STR_pzn_unfold_attachto";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_attachropeto";
						priority = 1.2;
					};
				};
			};
		};
	};
	class Tank: LandVehicle
	{
		class ACE_Actions
		{
			class ACE_MainActions
			{
				class pzn_unfold
				{
					displayName = "$STR_pzn_unfold";
					class pzn_unfold_attach
					{
						displayName = "$STR_pzn_unfold_attach";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_attachrope";
						priority = 1.2;
					};
					class pzn_unfold_detach
					{
						displayName = "$STR_pzn_unfold_detach";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_detachrope";
						priority = 1.2;
					};
					class pzn_unfold_attachto
					{
						displayName = "$STR_pzn_unfold_attachto";
						distance = 4;
						statement = "_this call pzn_unfold_fnc_attachropeto";
						priority = 1.2;
					};
				};
			};
		};
	};
};
/* class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class pzn_rope: ACE_ItemCore
	{
		displayName = "$STR_pzn_unfold";
		descriptionShort = "$STR_pzn_unfold";
		model = "\A3\Structures_F_Heli\Items\Tools\Rope_01_F.p3d";
		picture = "\z\ace\addons\captives\UI\ace_cabletie_ca.paa";
		scope = 2;
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 60;
		};
	};
}; */