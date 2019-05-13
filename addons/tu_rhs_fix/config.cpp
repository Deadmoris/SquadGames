#include "BIS_AddonInfo.hpp"
#include "addon.hpp"
class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_weapons", "ace_common"};
	};
};

class CfgFunctions
{
	class ADDON
	{
		class ADDON
		{
			class fold {};
			class canFold {};
			class dismountNpz {};
			class canDismountNpz {};
		};
	};
	class RHS
	{
		tag = "RHS";
		class functions{
			class fold_AK
			{
				file = Q(FILE(empty.sqf));
			};
			class fold_PP
			{
				file = Q(FILE(empty.sqf));
			};			
			class acc_npz_handler
			{
				file = Q(FILE(empty.sqf));
			};
		};
	};	
};


class CfgVehicles {
    class Man;

    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class GVAR(Fold) {
                    displayName ="$STR_TU_FoldUnfoldWeapon";
                    condition = Q(call FUNC(canFold));
                    exceptions[] = {"isNotInside", "isNotSwimming", "isNotUnconscious", "isNotOnLadder", "isNotDragging", "isNotCarrying", "isNotSurrendering", "isNotHandcuffed"};
                    statement = Q(call FUNC(fold));
                    showDisabled = 0;
                    priority = 5;
                };
                class GVAR(Npz) {
                    displayName ="$STR_TU_DismountNpz";
                    condition = Q(call FUNC(canDismountNpz));
                    exceptions[] = {"isNotInside", "isNotSwimming", "isNotUnconscious", "isNotOnLadder", "isNotDragging", "isNotCarrying", "isNotSurrendering", "isNotHandcuffed"};
                    statement = Q(call FUNC(dismountNpz));
                    showDisabled = 0;
                    priority = 6;
                };
            };
        };
	};
};


class CfgWeapons
{
	//// ФИКС РУКИ НА ПКМе ////
	class rhs_pkp_base;
	class rhs_weap_pkp: rhs_pkp_base
	{
		class WeaponSlotsInfo;
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkp.rtm"};
	};
};