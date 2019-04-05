#include "addon.hpp"
class CfgPatches
{
	class ADDON
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_UI_F", "ace_common", "ace_spectator", "CSSA3"};
	};
};

class CfgFunctions
{
	class ADDON
	{
		class initFunctions
		{
			file = Q(ADDON);
			class preInit {
				//preInit = 1;
				postInit = 0;
			};
			class postInit {
				preInit = 0;
				postInit = 1;
			};
			class clientStats {
				preInit = 0;
				postInit = 1;
			};
			class killedList {
				preInit = 0;
				postInit = 1;
			};
		};

		class hardfreeze {
			file = Q(FILE(hardfreeze));
			class hardfreeze {};
			class pause {};
		};

		class freezetime {
			file = Q(FILE(freezetime));
			class freezeTimer {};
			class freezeTime {};
		};

		class menu {
			file = Q(FILE(menu));
			class menu_addItem {};
			class menu_removeItem {};
			class menu_show {};
		};

		class viewDistance {
			file = Q(FILE(viewDistance));
			class viewDistance_change {};			
			class viewDistance_set {};			
			class viewDistance_CheckSet {};			
			class viewDistance_init {
				postInit = 1;
			};	
		};	
		class volumeControl {
			file = Q(FILE(volumeControl));
			class changeSoundVolume {};			
			class muteSoundVolume {};			
			class setSoundVolume {};			
			class volumeControl_init {
				postInit = 1;
			};	
		};				
		class common {
			file = Q(FILE(common));
			class hint {};			
			class disableAi {};			
		};

		class feedback {
			file = Q(FILE(feedback));
			class HandlerFeedback {};			
			class HandlerBroadcast {};			
			class HandlerMessageReceived {};
		};
		class compass {
			file = Q(FILE(compass));
			class checkMapCompasPosition {};			
			class rescaleMapCompass {};			
		};

		class spectator {
			file = Q(FILE(spectator));
			class spectator_init {};			
			class isAdmin {};			
		};

	};
};


#include "BaseClasses.h" // INIT RSC BASE CLASSES
#include "BaseRsc.hpp" // INIT RSC BASE CLASSES
#include "menu\Dialogs.hpp"
#include "feedback\feedback.cpp"
#include "Dialogs\no_gamma.cpp"
#include "Dialogs\logo.cpp"
#include "compass\compass.hpp"

class RscTitles {
	#include "freezetime\freezetimer.hpp"
};

class CfgSounds
{
	sounds[] = {};
	class GVAR(game_started)
	{
		name = "Game Started";
		// filename, volume, pitch
		sound[] = {"\tu_platform\freezetime\game_started.wss", 1, 1};
		// subtitle delay in seconds, subtitle text 
		titles[] = {};
	};
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = Q(call FUNC(preInit));
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = Q(call FUNC(disableAi));
        };
    };
};

class Extended_Local_EventHandlers {
    class CAManBase {
        class ADDON {
            local = Q(call FUNC(disableAi));
        };
    };
};

class Extended_Respawn_EventHandlers {
    class CAManBase {
        class ADDON {
            respawn = Q(call FUNC(disableAi));
        };
    };
};

class CfgRespawnTemplates
{
	class Spectator
	{
		onPlayerKilled = "";
		onPlayerRespawn = QFUNC(spectator_init);
	};
	class Seagull
	{
		onPlayerRespawn = QFUNC(spectator_init);
	};
};