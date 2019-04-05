#include "addon.hpp"
class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_hearing", "ace_nightvision", "ace_spectator", "ace_repair", "ace_frag", "ace_explosives"};
	};
};


class CfgFunctions
{
 	/* class GVAR(hearing)
	 {
		class hearing
		{
			file = "tu_ace_fix\hearing";
			class postInit {
				preInit = 0;
				postInit = 1;
			};
			class preInit {
				//preInit = 1; 
				postInit = 0;
			};
		};
	};

 	class ACE(hearing)
	 {
		class hearing
		{
			file = "tu_ace_fix\hearing";
			class isInBuilding {};
			class getLoudnessWithCache {};
		};
	}; */
 	class GVAR(nightvision)
	 {
		class nightvision
		{
			file = "tu_ace_fix\nightvision";
			class preInit {
				//preInit = 1;
				postInit = 0;
			};
		};
	};
 	class GVAR(trenches)
	 {
		class trenches
		{
			file = "tu_ace_fix\trenches";
			class preInit {
				//preInit = 1;
				postInit = 0;
			};
		};
	};
};

class Extended_PostInit_EventHandlers {   
	ACEOVERRIDE(frag,fn_postInit.sqf)
};


class Extended_PreInit_EventHandlers {
    /* class GVAR(hearing) {
        init = Q(call FUNC2(GVAR(hearing),preInit));
    }; */    
	class GVAR(nightvision) {
        init = Q(call FUNC2(GVAR(nightvision),preInit));
    };
	class GVAR(trenches) {
        init = Q(call FUNC2(GVAR(trenches),preInit));
    };
	
};

class Extended_PreStart_EventHandlers {
	ACEOVERRIDE(hearing,fn_preStart.sqf)
	ACEOVERRIDE(movement,fn_preStart.sqf)
	ACEOVERRIDE(dragging,fn_preStart.sqf)
	ACEOVERRIDE(nightvision,fn_preStart.sqf)
	ACEOVERRIDE(maptools,fn_preStart.sqf)
	ACEOVERRIDE(spectator,fn_preStart.sqf)
	ACEOVERRIDE(common,fn_preStart.sqf)
	ACEOVERRIDE(trenches,fn_preStart.sqf)
	ACEOVERRIDE(cargo,fn_preStart.sqf)
	ACEOVERRIDE(frag,fn_preStart.sqf)
	ACEOVERRIDE(repair,fn_preStart.sqf)
	ACEOVERRIDE(interact_menu,fn_preStart.sqf)
	// ACEOVERRIDE(explosives,fn_preStart.sqf)
};


/* class CfgAmmo {
	class B_65x39_Caseless;
	#include "frag\frag.cpp"
}; */

class CfgMagazines {
    class CA_Magazine;
    class ATMine_Range_Mag: CA_Magazine {
        class ACE_Triggers {
            SupportedTriggers[] = {"PressurePlate"};
            class PressurePlate {
                digDistance = 0;
            };
        };
    };
};

#include "repair\repair.cpp"
