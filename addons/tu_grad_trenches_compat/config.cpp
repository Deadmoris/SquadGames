#include "addon.hpp"

class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = { "ace_trenches", "grad_trenches_functions", "tu_platform" };
	};
};

class CfgFunctions {
	class ADDON {
		class initFunctions {
			file = Q(ADDON);
			class preInit {
				preInit = 1;
			};
		};

	};
};

class CfgWorldsTextures {
    class Chernarus_winter {
        surfaceTextureBasePath = "chernarus_winter\data";
        filePrefix = "co.paa";
    };


    class WL_Rosche {
        surfaceTextureBasePath = "WL\WL_Rosche\data";
        filePrefix = "co.paa";
    };
};