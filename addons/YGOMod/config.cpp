////////////////////////////////////////////////////////////////////
//DeRap: YGOMod\config.bin
//Produced from mikero's Dos Tools Dll version 6.34
//'now' is Wed May 08 17:26:26 2019 : 'file' last modified on Fri Oct 27 08:45:34 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class YGO_Mod
	{
		units[] = {"VJ_Grenadier","VJ_Machinegunner","VJ_Marksman","VJ_Rifleman","VJ_Engineer","VJ_Medic","VJ_Unarmed","VJ_Rifleman_AKMS","VJ_Rifleman_AKM","VJ_Rifleman_M92","VJ_Officer","VJ_Unarmed_2","SP_Machinegunner","SP_Rifleman_M81","SP_Rifleman_Beanie","SP_Sharpshooter","SP_Rifleman_RPG","SP_Grenadier","SP_Medic","SP_Marksman","SP_Engineer","SP_Unarmed","SP_Grenadier","SP_Rifleman_M81_RPG","SP_Rifleman_M81","SP_Rifleman_M81_Beanie","SP_Unarmed_M81","SP_Rifleman","SP_Unarmed_Insg","SP_Unarmed_Oakleaf_Insg"};
		author = "Dropkiwi";
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFactionClasses
{
	class Yugoslav_Faction
	{
		displayName = "$STR_Yugoslav_Forces";
		author = "Dropkiwi";
		priority = 4;
		side = 2;
		icon = "YGOMod\Data\icon.paa";
	};
};
class cfgVehicleClasses
{
	class YGO_Infantry
	{
		displayName = "$STR_Yugoslav_Forces";
		side = 2;
	};
};
class CfgGroups
{
	class Indep
	{
		class Yugoslav_Faction
		{
			name = "$STR_Yugoslav_Forces";
			class YGO
			{
				name = "$STR_YGO_Infantry";
				class YGOPlatoon
				{
					name = "$STR_YGO_Platoon";
					side = 2;
					faction = "Yugoslav_Faction";
					class Unit0
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKM";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "SP_Machinegunner";
						rank = "SERGEANT";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "SERGEANT";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "SP_Rifleman_M81";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKM";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "SP_Machinegunner";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "CORPORAL";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "SP_Rifleman_M81";
						rank = "CORPORAL";
						position[] = {25,-25,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "SP_Medic";
						rank = "CORPORAL";
						position[] = {-25,-25,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "VJ_Marksman";
						rank = "CORPORAL";
						position[] = {30,-30,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "VJ_Machinegunner";
						rank = "CORPORAL";
						position[] = {-30,-30,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "VJ_Rifleman";
						rank = "CORPORAL";
						position[] = {35,-35,0};
					};
					class Unit14
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "CORPORAL";
						position[] = {-35,-35,0};
					};
					class Unit15
					{
						side = 2;
						vehicle = "SP_Rifleman_Beanie";
						rank = "CORPORAL";
						position[] = {40,-40,0};
					};
					class Unit16
					{
						side = 2;
						vehicle = "VJ_Marksman";
						rank = "PRIVATE";
						position[] = {-40,-40,0};
					};
					class Unit17
					{
						side = 2;
						vehicle = "VJ_Machinegunner";
						rank = "PRIVATE";
						position[] = {45,-45,0};
					};
					class Unit18
					{
						side = 2;
						vehicle = "VJ_Engineer";
						rank = "PRIVATE";
						position[] = {-45,-45,0};
					};
					class Unit19
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "PRIVATE";
						position[] = {50,-50,0};
					};
					class Unit20
					{
						side = 2;
						vehicle = "SP_Marksman";
						rank = "PRIVATE";
						position[] = {-50,-50,0};
					};
					class Unit21
					{
						side = 2;
						vehicle = "VJ_Medic";
						rank = "PRIVATE";
						position[] = {-55,-55,0};
					};
					class Unit22
					{
						side = 2;
						vehicle = "VJ_Rifleman_M92";
						rank = "PRIVATE";
						position[] = {60,-60,0};
					};
					class Unit23
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKM";
						rank = "PRIVATE";
						position[] = {-60,-60,0};
					};
					class Unit24
					{
						side = 2;
						vehicle = "VJ_Machinegunner";
						rank = "PRIVATE";
						position[] = {-65,-65,0};
					};
				};
				class YGOPatrol
				{
					name = "$STR_YGO_Patrool";
					side = 2;
					faction = "Yugoslav_Faction";
					class PatrolUnit0
					{
						side = 2;
						vehicle = "VJ_Machinegunner";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class PatrolUnit1
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class PatrolUnit2
					{
						side = 2;
						vehicle = "SP_Machinegunner";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class PatrolUnit3
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "CORPORAL";
						position[] = {10,-10,0};
					};
					class PatrolUnit4
					{
						side = 2;
						vehicle = "SP_Rifleman_M81";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class PatrolUnit5
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKM";
						rank = "CORPORAL";
						position[] = {15,-15,0};
					};
					class PatrolUnit6
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class PatrolUnit7
					{
						side = 2;
						vehicle = "SP_Machinegunner";
						rank = "CORPORAL";
						position[] = {20,-20,0};
					};
					class PatrolUnit8
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class PatrolUnit9
					{
						side = 2;
						vehicle = "SP_Rifleman_M81";
						rank = "PRIVATE";
						position[] = {25,-25,0};
					};
					class PatrolUnit10
					{
						side = 2;
						vehicle = "SP_Medic";
						rank = "PRIVATE";
						position[] = {-25,-25,0};
					};
					class PatrolUnit11
					{
						side = 2;
						vehicle = "VJ_Engineer";
						rank = "PRIVATE";
						position[] = {30,-30,0};
					};
					class PatrolUnit12
					{
						side = 2;
						vehicle = "VJ_Machinegunner";
						rank = "PRIVATE";
						position[] = {-30,-30,0};
					};
					class PatrolUnit13
					{
						side = 2;
						vehicle = "VJ_Rifleman";
						rank = "PRIVATE";
						position[] = {35,-35,0};
					};
					class PatrolUnit14
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "PRIVATE";
						position[] = {-35,-35,0};
					};
					class PatrolUnit15
					{
						side = 2;
						vehicle = "SP_Rifleman_Beanie";
						rank = "PRIVATE";
						position[] = {40,-40,0};
					};
				};
				class YGOSquad
				{
					name = "$STR_YGO_Squad";
					side = 2;
					faction = "Yugoslav_Faction";
					class SUnit0
					{
						side = 2;
						vehicle = "VJ_Rifleman_M92";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class SUnit1
					{
						side = 2;
						vehicle = "VJ_Rifleman_AKMS";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class SUnit2
					{
						side = 2;
						vehicle = "SP_Rifleman_Beanie";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class SUnit3
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class SUnit4
					{
						side = 2;
						vehicle = "SP_Medic";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
				};
				class YGOFireteam
				{
					name = "$STR_YGO_Fireteam";
					side = 2;
					faction = "Yugoslav_Faction";
					class FireteamUnit0
					{
						side = 2;
						vehicle = "VJ_Rifleman";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class FireteamUnit1
					{
						side = 2;
						vehicle = "VJ_Grenadier";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class FireteamUnit2
					{
						side = 2;
						vehicle = "SP_Rifleman_RPG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class FireteamUnit3
					{
						side = 2;
						vehicle = "VJ_Marksman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgEditorSubcategories
{
	class EdSubcat_YGOArmy
	{
		displayName = "$STR_Yugoslav_Army";
	};
	class EdSubcat_SP
	{
		displayName = "$STR_Serbian_Police";
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class VJ_Unarmed: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_unarmed.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_D_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF_D.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Beret"};
	};
	class VJ_Unarmed_2: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_unarmed_2.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Beret"};
	};
	class VJ_Rifleman: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Rifleman.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Rifleman";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m70b3n"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m70b3n"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_m67","rhs_mag_m67"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit","VJ_Holster","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","FirstAidKit","VJ_Holster","YGO_Beret"};
	};
	class VJ_Rifleman_AKMS: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Rifleman_AKMS.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Rifleman_AKMS";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_akms"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_akms"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit"};
	};
	class VJ_Rifleman_M92: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Rifleman_M92.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Rifleman_M92";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_D_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m92"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m92"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
	};
	class VJ_Rifleman_AKM: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Rifleman_AKM.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Rifleman_AKM";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_akm"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_akm"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
	};
	class VJ_Machinegunner: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Machinegunner.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		scopeCurator = 2;
		role = "MachineGunner";
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Machinegunner";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_pkp"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_pkp"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","SmokeShell"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Bandana_M81"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Bandana_M81"};
	};
	class VJ_Grenadier: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Grenadier.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Grenadier";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Grenadier";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m70b3n_pbg40"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m70b3n_pbg40"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_mag_m67","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret"};
	};
	class VJ_Marksman: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Marksman.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Marksman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Marksman";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m76"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m76"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","rhs_beanie_green"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","rhs_beanie_green"};
	};
	class VJ_Officer: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Officer.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Officer";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_D_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhsusf_weap_m1911a1"};
		respawnWeapons[] = {"Throw","Put","rhsusf_weap_m1911a1"};
		magazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
		respawnMagazines[] = {"rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP""rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret_Black","G_Aviator"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","YGO_Beret_Black","G_Aviator"};
	};
	class VJ_Engineer: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Engineer.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Sapper";
		backpack = "YGO_Engineer_Pack";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Engineer";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_D_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m70ab2"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m70ab2"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Bandana_M81"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Bandana_M81"};
	};
	class VJ_Medic: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\VJ_Medic.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "CombatLifeSaver";
		backpack = "YGO_Medic_Pack";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_VJ_Medic";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_YGOArmy";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "VJ_OKLF_D_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\VJ_OKLF.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak105"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak105"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK""rhs_30Rnd_545x39_AK""rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_m67"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Beanie_Black","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","VJ_Holster","FirstAidKit","Beanie_Black","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	};
	class SP_Unarmed: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Unarmed.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Tigerstripe"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Tigerstripe"};
	};
	class SP_Unarmed_M81: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Unarmed_M81.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_M81_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniformM81.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black"};
	};
	class SP_Unarmed_Oakleaf_Insg: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Unarmed_Oakleaf_Insg.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Oak_Insg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform3.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Oakleaf"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Oakleaf"};
	};
	class SP_Unarmed_Insg: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Unarmed_Insg.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Unarmed";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Unarmed";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Insg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform4.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Basic"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Cap_Basic"};
	};
	class SP_Rifleman: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak103_1"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak103_1"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgo","SmokeShell"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_mag_rgo","SmokeShell"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Cap_Basic","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Cap_Basic","FirstAidKit","FirstAidKit"};
	};
	class SP_Rifleman_Beanie: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman_Beanie.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman_Beanie";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Oak";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform2.paa"};
		weapons[] = {"Throw","Put","rhs_weap_akms"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_akms"};
		magazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		respawnMagazines[] = {"rhs_mag_m67","rhs_mag_m67","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","Beanie_Black","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","Beanie_Black","FirstAidKit"};
	};
	class SP_Rifleman_M81: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman_M81.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman_M81";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_M81_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniformM81.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak74m_2mag"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak74m_2mag"};
		magazines[] = {"rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_45Rnd_545X39_7N6_AK","rhs_mag_m67"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Helmet_6B27M_Wood","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","YGO_Helmet_6B27M_Wood","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
	};
	class SP_Rifleman_M81_Beanie: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman_M81_Beanie.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Rifleman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman_M81_Beanie";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_M81_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniformM81.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak74m"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak74m"};
		magazines[] = {"rhs_mag_f1","rhs_mag_f1","rhs_mag_f1","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		respawnMagazines[] = {"rhs_mag_f1","rhs_mag_f1","rhs_mag_f1","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
	};
	class SP_Rifleman_RPG: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman_RPG.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "MissileSpecialist";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman_RPG";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak103_1","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak103_1","rhs_weap_rpg26"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_rpg26_mag"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_rpg26_mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Blue","YGO_Helmet_M1_TB","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Blue","YGO_Helmet_M1_TB","FirstAidKit","FirstAidKit"};
	};
	class SP_Rifleman_M81_RPG: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Rifleman_M81_RPG.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "MissileSpecialist";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Rifleman_M81_RPG";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_M81_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniformM81.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak103_1","rhs_weap_rpg26"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak103_1","rhs_weap_rpg26"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_rpg26_mag"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_rpg26_mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black","YGO_Helmet_6B27M_Wood","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","Beanie_Black","YGO_Helmet_6B27M_Wood","SP_Vest_M99_Beige","FirstAidKit","FirstAidKit"};
	};
	class SP_Engineer: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Engineer.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Sapper";
		backpack = "YGO_Engineer_Pack";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Engineer";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak105"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak105"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_f1","rhs_mag_f1","rhs_mag_f1"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_f1","rhs_mag_f1","rhs_mag_f1"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Helmet_6B27M","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Helmet_6B27M","FirstAidKit","FirstAidKit"};
	};
	class SP_Marksman: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Marksman.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Marksman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Marksman";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Oak_Insg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m76"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m76"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_f1","rhs_mag_f1"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhs_mag_f1","rhs_mag_f1"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99","YGO_Cap_Oakleaf","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99","YGO_Cap_Oakleaf","FirstAidKit","FirstAidKit"};
	};
	class SP_Medic: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Medic.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "CombatLifeSaver";
		backpack = "YGO_Medic_Pack";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Medic";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_aks74_2"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_aks74_2"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Helmet_M1","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Helmet_M1","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit","FirstAidKit"};
	};
	class SP_Machinegunner: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Machinegunner.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "MachineGunner";
		backpack = "YGO_LMG_Pack";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Machinegunner";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Insg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_m84"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_m84"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_f1","rhs_mag_f1","rhs_mag_f1"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_mag_f1","rhs_mag_f1","rhs_mag_f1"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99","YGO_Helmet_6B27M"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99","YGO_Helmet_6B27M"};
	};
	class SP_Grenadier: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Grenadier.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Grenadier";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Grenadier";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_ak103_gp25"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_ak103_gp25"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99_Beige","YGO_Cap_Tigerstripe","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_M99_Beige","YGO_Cap_Tigerstripe","FirstAidKit"};
	};
	class SP_Sharpshooter: B_Soldier_F
	{
		editorPreview = "YGOMod\Icons\SP_Sharpshooter.paa";
		author = "Dropkiwi";
		_generalMacro = "SoldierGB";
		dlc = "RHS_SAF";
		scope = 2;
		side = 2;
		role = "Marksman";
		scopeCurator = 2;
		vehicleClass = "YGO_Infantry";
		displayName = "$STR_SP_Sharpshooter";
		identityTypes[] = {"LanguageGRE_F","Head_Euro"};
		genericNames = "SerbianMen";
		editorSubCategory = "EdSubcat_SP";
		faction = "Yugoslav_Faction";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		uniformClass = "SP_Camo_Oak_Insg";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"YGOMod\Data\SPUniform.paa"};
		weapons[] = {"Throw","Put","rhs_weap_svdp_pso1"};
		respawnWeapons[] = {"Throw","Put","rhs_weap_svdp_pso1"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","Beanie_Black","FirstAidKit"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","SP_Vest_Black","YGO_Cap_Tigerstripe","FirstAidKit"};
	};
	class B_AssaultPack_Base;
	class YGO_Medic_Pack: B_AssaultPack_Base
	{
		author = "Dropkiwi";
		scope = 1;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs";
		displayName = "$STR_VJ_Medic_Pack";
		maximumLoad = 100;
		mass = 20;
		hiddenSelectionsTextures[] = {"YGOMod\Data\BackpackMedic.paa"};
		class TransportItems
		{
			class _xx_MediKit
			{
				name = "MediKit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
	class YGO_Engineer_Pack: B_AssaultPack_Base
	{
		author = "Dropkiwi";
		scope = 1;
		model = "\rhsafrf\addons\rhs_infantry\gear\backpacks\rhs_assault_umtbs_engineer";
		displayName = "$STR_VJ_Engineer_Pack";
		maximumLoad = 100;
		mass = 20;
		hiddenSelectionsTextures[] = {"YGOMod\Data\BackpackMedic.paa"};
		class TransportItems
		{
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
		};
	};
	class YGO_LMG_Pack: B_AssaultPack_Base
	{
		author = "Dropkiwi";
		scope = 1;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "$STR_VJ_Machinegunner_Backpack";
		mass = 20;
		hiddenselectionstextures[] = {"\rhssaf\addons\rhssaf_t_gear_a3\data\backpack_rhssaf_fast_smb_co.paa"};
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR
			{
				magazine = "rhs_100Rnd_762x54mmR";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 3;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
		};
	};
	class FlagCarrierCore;
	class FlagCarrier;
	class Flag_Serbian: FlagCarrier
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "$STR_Flag_Serbian";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'YGOMod\Data\flag_serbian_co.paa'";
		};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VJ_OKLF_D_Camo: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_VJ_OKLF_D_Camo";
		picture = "\YGOMod\Icons\Icon2.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "VJ_Unarmed";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class VJ_OKLF_Camo: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_VJ_OKLF_D_Camo";
		picture = "\YGOMod\Icons\Icon1.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "VJ_Unarmed_2";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SP_Camo: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Camo";
		picture = "\YGOMod\Icons\Icon5.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "SP_Unarmed";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SP_Camo_Oak: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Camo_Oak";
		picture = "\YGOMod\Icons\Icon7.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "SP_Rifleman_Beanie";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SP_Camo_Oak_Insg: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Camo_Oak_Insg";
		picture = "\YGOMod\Icons\Icon6.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "SP_Unarmed_Oakleaf_Insg";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SP_Camo_Insg: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Camo_Insg";
		picture = "\YGOMod\Icons\Icon4.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "SP_Unarmed_Insg";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class SP_M81_Camo: Uniform_Base
	{
		scope = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_M81_Camo";
		picture = "\YGOMod\Icons\Icon3.paa";
		model = "\rhssaf\addons\rhssaf_m_uniform_m10\rhssaf_uniform_m10_summer";
		class ItemInfo: UniformItem
		{
			uniformClass = "SP_Rifleman_M81";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class HeadgearItem;
	class YGO_Beret: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_VJ_Beret_Infantry";
		picture = "\YGOMod\Icons\HeadgearIcon1.paa";
		icon = "\YGOMod\Icons\HeadgearIcon1.paa";
		model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\VJ_Beret.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 100;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class YGO_Beret_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_VJ_Beret_Black";
		picture = "\YGOMod\Icons\HeadgearIcon9.paa";
		icon = "\YGOMod\Icons\HeadgearIcon9.paa";
		model = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\VJ_Beret_Black.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 100;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_beret\rhssaf_beret";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class YGO_Helmet_6B27M: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_YGO_Helmet_6B27M";
		picture = "\YGOMod\Icons\HeadgearIcon2.paa";
		icon = "\YGOMod\Icons\HeadgearIcon2.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\6B27.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_green";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"Camo1"};
		};
	};
	class YGO_Helmet_6B27M_Wood: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_YGO_Helmet_6B27M_Wood";
		picture = "\YGOMod\Icons\HeadgearIcon3.paa";
		icon = "\YGOMod\Icons\HeadgearIcon3.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\6B27.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"Camo1"};
		};
	};
	class YGO_Helmet_M1: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_YGO_Helmet_M1";
		picture = "\YGOMod\Icons\HeadgearIcon4.paa";
		icon = "\YGOMod\Icons\HeadgearIcon4.paa";
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\M1.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"Camo"};
		};
	};
	class YGO_Helmet_M1_TB: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		author = "Dropkiwi";
		displayName = "$STR_YGO_Helmet_M1_TB";
		picture = "\YGOMod\Icons\HeadgearIcon5.paa";
		icon = "\YGOMod\Icons\HeadgearIcon5.paa";
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\M1TigerBlue.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\M1_strapdown";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.8;
			hiddenSelections[] = {"Camo"};
		};
	};
	class Beanie_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_Beanie_Black";
		picture = "\YGOMod\Icons\HeadgearIcon10.paa";
		icon = "\YGOMod\Data\icon.paa";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_beanie";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\beanieSPBlack.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_beanie";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"Camo1"};
		};
	};
	class Bandana_M81: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_Bandana_M81";
		picture = "\YGOMod\Icons\HeadgearIcon11.paa";
		icon = "\YGOMod\Data\icon.paa";
		model = "\A3\Characters_F\Civil\headgear_c_bandana1";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\bandana_m81.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\Civil\headgear_c_bandana1";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class YGO_Cap_Tigerstripe: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_YGO_Cap_Tigerstripe";
		picture = "\YGOMod\Icons\HeadgearIcon8.paa";
		icon = "\YGOMod\Icons\HeadgearIcon8.paa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\CapPolicija.paa"};
		hiddenSelectionsMaterials[] = {"YGOMod\Data\policijakapa.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo1"};
		};
	};
	class YGO_Cap_Oakleaf: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_YGO_Cap_Oakleaf";
		picture = "\YGOMod\Icons\HeadgearIcon7.paa";
		icon = "\YGOMod\Icons\HeadgearIcon7.paa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\patrolcap_oak.paa"};
		hiddenSelectionsMaterials[] = {"YGOMod\Data\policijakapa.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo1"};
		};
	};
	class YGO_Cap_Basic: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "$STR_YGO_Cap_Basic";
		picture = "\YGOMod\Icons\HeadgearIcon6.paa";
		icon = "\YGOMod\Icons\HeadgearIcon6.paa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\patrolcap_basic.paa"};
		hiddenSelectionsMaterials[] = {"YGOMod\Data\policijakapa.rvmat"};
		class ItemInfo: HeadgearItem
		{
			mass = 20;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\rhsusf_patrolcap";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo1"};
		};
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class SP_Vest_Black: Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Vest_Black";
		picture = "\YGOMod\Icons\VestIcon3.paa";
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\SPVestBlack.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
			containerClass = "Supply120";
			mass = 40;
			armor = "1";
			passThrough = 0.8;
			hiddenSelections[] = {"MD98"};
		};
	};
	class VJ_Holster: Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "RHS";
		displayName = "$STR_VJ_Holster";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_holster_ca.paa";
		model = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
		hiddenSelections[] = {"camo"};
		class ItemInfo: VestItem
		{
			uniformModel = "rhsafrf\addons\rhs_infantry\gear\vests\rhs_pistol_holster";
			containerClass = "Supply120";
			mass = 10;
			armor = "0";
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class SP_Vest_Blue: Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Vest_Blue";
		picture = "\YGOMod\Icons\VestIcon4.paa";
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\SPVestBlue.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_gen2";
			containerClass = "Supply120";
			mass = 40;
			armor = "1";
			passThrough = 0.8;
			hiddenSelections[] = {"MD98"};
		};
	};
	class SP_Vest_M99: Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Vest_M99";
		picture = "\YGOMod\Icons\VestIcon1.paa";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\SPVest2.paa","\YGOMod\Data\SPVest2_pouches.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 80;
			armor = "1";
			passThrough = 0.7;
			hiddenSelections[] = {"camo","pouches"};
		};
	};
	class SP_Vest_M99_Beige: Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		author = "Dropkiwi";
		displayName = "$STR_SP_Vest_M99";
		picture = "\YGOMod\Icons\VestIcon2.paa";
		model = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
		hiddenSelections[] = {"camo","pouches"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\SPVest3.paa","\YGOMod\Data\SPVest2_pouches.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m99\rhssaf_md99_rifleman";
			containerClass = "Supply120";
			mass = 80;
			armor = "1";
			passThrough = 0.7;
			hiddenSelections[] = {"camo","pouches"};
		};
	};
	class SP_Vest_Tactical: Vest_Camo_Base
	{
		scope = 2;
		author = "Dropkiwi";
		scopeArsenal = 2;
		displayName = "$STR_SP_Vest_Tactical";
		picture = "\YGOMod\Icons\VestIcon5.paa";
		model = "A3\Characters_F\Common\equip_tacticalvest";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\YGOMod\Data\SPVest4.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
			containerClass = "Supply120";
			mass = 80;
			armor = "2";
			passThrough = 0.5;
			hiddenSelections[] = {"camo"};
		};
	};
};
class cfgMods
{
	author = "Dropkiwi";
	timepacked = "1509122734";
};
