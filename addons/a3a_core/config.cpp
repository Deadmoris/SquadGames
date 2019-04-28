class CfgPatches
{
   class A3A_Core
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={ "A3_UI_F", "A3A_Modules", "Extended_Eventhandlers", "tu_platform" };
		requiredVersion=1.38;
		version = "1.42";
		versionStr = "1.42";
		versionAr[] = {1,4,2};
		author = "Blender";
		authorUrl = "http://www.arma3.ru";
   };
};

#include "Dialogs\BaseClasses.h" // INIT RSC BASE CLASSES
#include "Dialogs\Dialogs.hpp"

class CfgDebriefing
{  
	class A3A_End_1
	{
		title = "Mission Ended";
		pictureBackground = "\A3A_Core\Resources\a3a_end_1.paa";
	};
};

class Extended_PreInit_EventHandlers {
	class A3A_Core {
		serverInit = "if ((getNumber (missionConfigFile >> 'atrium_version')) >= 14) exitWith { [] execVM '\A3A_Core\server_init.sqf' };";
	};
};

class Extended_PostInit_EventHandlers {
	class A3A_Core {
		clientInit = "if ((getNumber (missionConfigFile >> 'atrium_version')) >= 14) exitWith { _this execVM '\A3A_Core\client_init.sqf' };";
	};
};


class RscTitles {
	#include "Dialogs\RscTitles.hpp"
};

#include "CfgFunctions.hpp"