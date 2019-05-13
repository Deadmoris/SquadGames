#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class zade_boc {
		units[] = {"zade_boc_moduleDisable", "zade_boc_moduleAdd", "zade_boc_moduleOnChest"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"a3_ui_f", "A3_Modules_F", "ace_main", "ace_common"};
		version = 1.2;
		author = "DerZade";
	};
};

class CfgVehicles {
	class Logic;	// External class reference
	
	class Module_F : Logic {
		class ArgumentsBaseUnits {
			class Units;	// External class reference
		};
		
		class ModuleDescription {
			class AnyBrain;	// External class reference
		};
	};
	
	class zade_boc_moduleDisable : Module_F {
		scope = 2;
		displayName = "$STR_zade_boc_moduleDisable_disp";
		icon = "zade_boc\data\moduleDisable.paa";
		category = "zade_boc";
		function = "zade_boc_fnc_moduleDisable";
		functionPriority = 0;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;
		author = "DerZade";
		
		class Arguments : ArgumentsBaseUnits {};
		
		class ModuleDescription : ModuleDescription {
			description = "$STR_zade_boc_moduleDisable_desc";
		};
	};
	
	class zade_boc_moduleAdd : Module_F {
		scope = 2;
		displayName = "$STR_zade_boc_moduleAdd_disp";
		icon = "zade_boc\data\moduleAdd.paa";
		category = "zade_boc";
		function = "zade_boc_fnc_moduleAdd";
		functionPriority = 0;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		is3DEN = 0;
		author = "DerZade";
		
		class Arguments : ArgumentsBaseUnits {
			class Units : Units {};
			
			class classname {
				displayName = "Chestpack classname";
				description = "Classname of the disered chestpack";
				typeName = STRING;
				defaultValue = "B_Carryall_cbr";
			};
			
			class items {
				displayName = "Chestpack items";
				description = "Items (includes mags, weapons, ...) which should be contained in the chestpack. Items sperated by a ','. Item can either be just a classname (for a single) or an array [classname,amount].";
				typeName = STRING;
				defaultValue = "[""FirstAidKit"",3], ""hgun_P07_F"", [""16Rnd_9x21_Mag"",2]";
			};
			
			class mags {
				displayName = "Chestpack magazines";
				description = "Just for adding partially loaded mags. Mags seperated by a ','. Syntax of single mag.: [magazine, ammo count]";
				typeName = STRING;
				defaultValue = "[""30Rnd_65x39_caseless_mag"",20], [""30Rnd_65x39_caseless_mag_Tracer"",10]";
			};
			
			class code {
				displayName = "Additional code";
				description = "Any addition code to modify the chestpack. '_this' referes to the chestpack itself.";
				typeName = STRING;
				defaultValue = "_this setObjectTextureGlobal [0, ""#(rgb,8,8,3)color(0,0,1,1)""];";
			};
		};
		
		class ModuleDescription : ModuleDescription {
			sync[] = {"AnyPerson1", "AnyPerson2"};
			description = "$STR_zade_boc_moduleAdd_desc";
			
			class AnyPerson1 {
				description = "Short description";
				displayName = "Any BLUFOR unit";
				icon = "iconMan";
				side = 1;
			};
			
			class AnyPerson2 : AnyPerson1 {};
		};
	};
	
	class zade_boc_moduleOnChest : Module_F {
		scope = 2;
		displayName = "$STR_zade_boc_moduleOnChest_disp";
		icon = "zade_boc\data\moduleOnChest.paa";
		category = "zade_boc";
		function = "zade_boc_fnc_moduleOnChest";
		functionPriority = 0;
		isGlobal = 0;
		isTriggerActivated = 1;
		isDisposable = 0;
		is3DEN = 0;
		author = "DerZade";
		
		class Arguments : ArgumentsBaseUnits {
			class Units : Units {};
			
			class classname {
				displayName = "Backpack classname";
				description = "Classname of the backpack which should be added after putting the backpack on chest.";
				typeName = STRING;
				defaultValue = "B_Parachute";
			};
			
			class delay {
				displayName = "Delay";
				description = "";
				typeName = NUMBER;
				defaultValue = 0;
			};
		};
		
		class ModuleDescription : ModuleDescription {
			sync[] = {"AnyPerson1", "AnyPerson2"};
			description = "$STR_zade_boc_moduleOnChest_desc";
			
			class AnyPerson1 {
				description = "Short description";
				displayName = "Any BLUFOR unit";
				icon = "iconMan";
				side = 1;
			};
			
			class AnyPerson2 : AnyPerson1 {};
		};
	};
	class Man;	// External class reference
	
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class zade_boc_onChest {
					displayName = "$STR_zade_boc_OnChest";
					condition = "!(missionNamespace getVariable ['zade_boc_disabled',false]) && !(backpack _player isEqualTo '') && ([_player] call zade_boc_fnc_chestpack isEqualTo '')";
					exceptions[] = {"isNotInside"};
					statement = "[_player] call zade_boc_fnc_actionOnChest";
					showDisabled = 0;
					priority = 2.5;
					icon = "\zade_boc\data\actions\onchest_ca.paa";
				};
				
				class zade_boc_onBack : zade_boc_onChest {
					displayName = "$STR_zade_boc_OnBack";
					condition = "!(missionNamespace getVariable ['zade_boc_disabled',false]) && (backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '')";
					statement = "[_player] call zade_boc_fnc_actionOnBack";
					icon = "\zade_boc\data\actions\onback_ca.paa";
				};
				
				class zade_boc_swap : zade_boc_onChest {
					displayName = "$STR_zade_boc_swap";
					condition = "!(missionNamespace getVariable ['zade_boc_disabled',false]) && !(backpack _player isEqualTo '') && !([_player] call zade_boc_fnc_chestpack isEqualTo '')";
					statement = "[_player] call zade_boc_fnc_actionSwap";
					icon = "\zade_boc\data\actions\swap_ca.paa";
				};
			};
		};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;	// External class reference
	
	class zade_boc : NO_CATEGORY {
		displayName = "BackpackOnChest";
		priority = 2;
		side = 7;
	};
};

class CfgFunctions {
	class zade_boc {
		tag = "zade_boc";
		
		class commands {
			file = "\zade_boc\functions\commands";
			
			class addChestpack {};
			
			class addItemToChestpack {};
			
			class addMagToChestpack {};
			
			class canAddItemToChestpack {};
			
			class Chestpack {};
			
			class ChestpackContainer {};
			
			class ChestpackItems {};
			
			class ChestpackMagazines {};
			
			class clearAllItemsFromChestpack {};
			
			class loadChestpack {};
			
			class removeChestpack {};
			
			class removeItemFromChestpack {};
			
			class removeMagFromChestpack {};
		};
		
		class utility {
			file = "\zade_boc\functions\utility";
			
			class actionOnBack {};
			
			class actionOnChest {};
			
			class actionSwap {};
			
			class backpackMagazines {};
			
			class copyRadioSettings {};
			
			class EHAnimDone {};
			
			class EHGetIn {};
			
			class EHGetOut {};
			
			class EHHandleDisconnect {};
			
			class EHKilled {};
			
			class moduleAdd {};
			
			class moduleOnChest {};
			
			class moduleDisable {};
			
			class pasteRadioSettings {};
		};
		
		class arsenal {
			file = "\zade_boc\functions\arsenal";
			
			class arsenalOpened {};
			
			class arsenal_onButtonClick {};
			
			class arsenal_updateUI {};
			
			class arsenal_postInit {
				postInit = 1;
			};
		};
	};
};

class cfgMods {
	author = 76561198097950783;
	timepacked = 1490887372;
};
