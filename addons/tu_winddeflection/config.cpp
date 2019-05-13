#include "addon.hpp"

class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "ace_common", "rhsusf_c_weapons" };
	};
};
class CfgFunctions {
    class ADDON 
    {
        class Functions 
		{
            file = Q(ADDON);			
			class postInit {
				preInit = 0;
				postInit = 1;
			};
			class preInit {
				//preInit = 1;
				postInit = 0;
			};			
			class handleFired {};
			class updateTrajectoryPFH {};
        };
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = Q(call FUNC(preInit));
    };
};


// class CfgAmmo
// {
// 	class RocketBase;
// 	class rhs_ammo_rpgShell_base;

// 	class rhs_ammo_M136_rocket: RocketBase
// 	{
// 		airFriction = 0.2;
// 		sideAirFriction = 0.1;
// 	};

// 	class rhs_rpg7v2_pg7vl;
// 	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
// 	{
// 		sideAirFriction = 0.05;
// 	};

// 	class rhs_ammo_og9v: rhs_ammo_rpgShell_base
// 	{
// 		sideAirFriction = 0.05;
// 	};

// 	// class rhs_ammo_pg9v: rhs_ammo_rpgShell_base
// 	// {
// 	// 	sideAirFriction = 0.1;
// 	// };

// };

// class CfgWeapons {
// 	class Launcher_Base_F;
// 	class rhs_weap_M136:Launcher_Base_F
// 	{
// 		dispersion = 0.0015;
// 		inertia = 3.35;
// 	};
// };