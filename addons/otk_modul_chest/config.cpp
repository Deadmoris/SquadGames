#define _ARMA_

class CfgPatches
{
	class OTK_MODUL_ChestRigs_Pack
	{
		units[] = {"OTK_ChestRigs_Mod"};
		weapons[] = {};
		requiredVersion = 1.7;
		requiredAddons[] = {"A3_Characters_F"};
		author = "MODUL";
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class OTK_L_Chestrig_Khaki1_RHS: Vest_camo_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki1_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		model = "\otk_modul_chest\med\partizan";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki1_co.paa",""};
		hiddenSelections[] = {"camo","camo1"};
		class ItemInfo: VestItem
		{
			uniformModel = "\otk_modul_chest\med\partizan";
			containerClass = "Supply150";
			mass = 35;
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0.1;
					passThrough = 0.8;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0.2;
					passThrough = 0.8;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0.2;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 1;
				};
			};
		};
	};
	class OTK_M_Chestrig_Khaki1_RHS: Vest_camo_Base
	{
		author = "$STR_OTK_author";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		dlc = "otk_modul_chest";
		displayName = "$STR_OTK_khaki1_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		model = "\otk_modul_chest\med\partizan";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki1_co.paa", "otk_modul_chest\med\data\khaki1_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\otk_modul_chest\med\partizan";
			containerClass = "Supply200";
			mass = 50;
			hiddenSelections[] = {"camo","camo1"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0.1;
					passThrough = 0.8;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0.2;
					passThrough = 0.8;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0.2;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 1;
				};
			};
		};
	};
	class OTK_L_Chestrig_Khaki2_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki2_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki2_co.paa",""};
	};
	class OTK_M_Chestrig_Khaki2_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki2_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki2_co.paa", "otk_modul_chest\med\data\khaki2_co.paa"};
	};
	class OTK_L_Chestrig_Khaki3_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki3_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki3_co.paa",""};
	};
	class OTK_M_Chestrig_Khaki3_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki3_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki3_co.paa", "otk_modul_chest\med\data\khaki3_co.paa"};
	};
	class OTK_L_Chestrig_Olive1_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive1_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive1_co.paa",""};
	};
	class OTK_M_Chestrig_Olive1_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive1_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive1_co.paa", "otk_modul_chest\med\data\olive1_co.paa"};
	};
	class OTK_L_Chestrig_Olive2_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive2_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive2_co.paa",""};
	};
	class OTK_M_Chestrig_Olive2_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive2_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive2_co.paa", "otk_modul_chest\med\data\olive2_co.paa"};
	};
	class OTK_L_Chestrig_Black_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_black_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\black_co.paa",""};
	};
	class OTK_M_Chestrig_Black_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_black_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\black_co.paa", "otk_modul_chest\med\data\black_co.paa"};
	};
	class OTK_L_Chestrig_VSR1_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr1_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr1_co.paa",""};
	};
	class OTK_M_Chestrig_VSR1_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr1_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr1_co.paa", "otk_modul_chest\med\data\vsr1_co.paa"};
	};
	class OTK_L_Chestrig_VSR2_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr2_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr2_co.paa",""};
	};
	class OTK_M_Chestrig_VSR2_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr2_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr2_co.paa", "otk_modul_chest\med\data\vsr2_co.paa"};
	};
	class OTK_L_Chestrig_Flora1_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_flora1_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\flora1_co.paa",""};
	};
	class OTK_M_Chestrig_Flora1_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_flora1_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\flora1_co.paa", "otk_modul_chest\med\data\flora1_co.paa"};
	};
	class OTK_L_Chestrig_EMR1_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr1_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr1_co.paa",""};
	};
	class OTK_M_Chestrig_EMR1_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr1_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr1_co.paa", "otk_modul_chest\med\data\emr1_co.paa"};
	};
	class OTK_L_Chestrig_EMR3_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr3_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr3_co.paa",""};
	};
	class OTK_M_Chestrig_EMR3_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr3_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr3_co.paa", "otk_modul_chest\med\data\emr3_co.paa"};
	};
	class OTK_L_Chestrig_TTSKO_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_ttsko_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\ttsko_co.paa",""};
	};
	class OTK_M_Chestrig_TTSKO_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_ttsko_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\ttsko_co.paa", "otk_modul_chest\med\data\ttsko_co.paa"};
	};
	class OTK_L_Chestrig_Classic3_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic3_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic3_co.paa",""};
	};
	class OTK_M_Chestrig_Classic3_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic3_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic3_co.paa", "otk_modul_chest\med\data\classic3_co.paa"};
	};
	class OTK_L_Chestrig_Classic4_RHS: OTK_L_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic4_1_RHS";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic4_co.paa",""};
	};
	class OTK_M_Chestrig_Classic4_RHS: OTK_M_Chestrig_Khaki1_RHS
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic4_2_RHS";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic4_co.paa", "otk_modul_chest\med\data\classic4_co.paa"};
	};
	class OTK_L_Chestrig_Khaki1: Vest_Camo_Base
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki1_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		model = "\otk_modul_chest\lightR\chestrig_light";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki1_co.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: VestItem
		{
			uniformModel = "\otk_modul_chest\lightR\chestrig_light";
			containerClass = "Supply150";
			mass = 35;
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0.1;
					passThrough = 0.8;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0.2;
					passThrough = 0.8;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0.2;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 1;
				};
			};
		};
	};
	class OTK_M_Chestrig_Khaki1: Vest_Camo_Base
	{
		author = "$STR_OTK_author";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		dlc = "otk_modul_chest";
		displayName = "$STR_OTK_khaki1_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		model = "otk_modul_chest\med\chestrig_medium";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki1_co.paa"};
		hiddenSelections[] = {"Camo"};
		class ItemInfo: VestItem
		{
			uniformModel = "otk_modul_chest\med\chestrig_medium";
			containerClass = "Supply200";
			mass = 50;
			hiddenSelections[] = {"Camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 0.1;
					passThrough = 0.8;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 0.2;
					passThrough = 0.8;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 0.2;
					passThrough = 0.5;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 0;
					passThrough = 1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 1;
				};
			};
		};
	};
	class OTK_L_Chestrig_Khaki2: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki2_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki2_co.paa"};
	};
	class OTK_M_Chestrig_Khaki2: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki2_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki2_co.paa"};
	};
	class OTK_L_Chestrig_Khaki3: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki3_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki3_co.paa"};
	};
	class OTK_M_Chestrig_Khaki3: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_khaki3_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\khaki3_co.paa"};
	};
	class OTK_L_Chestrig_Olive1: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive1_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive1_co.paa"};
	};
	class OTK_M_Chestrig_Olive1: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive1_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive1_co.paa"};
	};
	class OTK_L_Chestrig_Olive2: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive2_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive2_co.paa"};
	};
	class OTK_M_Chestrig_Olive2: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_olive2_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\olive2_co.paa"};
	};
	class OTK_L_Chestrig_Black: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_black_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\black_co.paa"};
	};
	class OTK_M_Chestrig_Black: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_black_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\black_co.paa"};
	};
	class OTK_L_Chestrig_VSR1: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr1_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr1_co.paa"};
	};
	class OTK_M_Chestrig_VSR1: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr1_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr1_co.paa"};
	};
	class OTK_L_Chestrig_VSR2: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr2_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\vsr2_co.paa"};
	};
	class OTK_M_Chestrig_VSR2: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_vsr2_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\VSR2_co.paa"};
	};
	class OTK_L_Chestrig_Flora1: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_flora1_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\flora1_co.paa"};
	};
	class OTK_M_Chestrig_Flora1: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_flora1_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\flora1_co.paa"};
	};
	class OTK_L_Chestrig_EMR1: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr1_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr1_co.paa"};
	};
	class OTK_M_Chestrig_EMR1: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr1_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr1_co.paa"};
	};
	class OTK_L_Chestrig_EMR3: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr3_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr3_co.paa"};
	};
	class OTK_M_Chestrig_EMR3: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_emr3_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\emr3_co.paa"};
	};
	class OTK_L_Chestrig_TTSKO: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_ttsko_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\ttsko_co.paa"};
	};
	class OTK_M_Chestrig_TTSKO: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_ttsko_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\ttsko_co.paa"};
	};
	class OTK_L_Chestrig_Classic3: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic3_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic3_co.paa"};
	};
	class OTK_M_Chestrig_Classic3: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic3_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic3_co.paa"};
	};
	class OTK_L_Chestrig_Classic4: OTK_L_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic4_1";
		picture = "\otk_modul_chest\med\icons\icoS.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic4_co.paa"};
	};
	class OTK_M_Chestrig_Classic4: OTK_M_Chestrig_Khaki1
	{
		author = "$STR_OTK_author";
		displayName = "$STR_OTK_classic4_2";
		picture = "\otk_modul_chest\med\icons\icoF.paa";
		hiddenSelectionsTextures[] = {"otk_modul_chest\med\data\classic4_co.paa"};
	};
};