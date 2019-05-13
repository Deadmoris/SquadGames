#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class no_units_tab
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.01;
		requiredAddons[] = {"A3_Ui_F"};
		version = "1.0";
	};
};

class Extended_PostInit_EventHandlers  {

	class no_units_tab  {
		clientInit = "call ('\no_units_tab\XEH_postClientInit.sqf' call SLX_XEH_COMPILE)";
	};
};

class CfgDiary {
	class FixedPages {
		class Units {
			type = "";
			displayName = "";
			shortcuts[] = {};
			showEmpty = 0;
			indexTitle = "";
			indexIcon = "";
			recordTitle = "";
			text = "";
			skill = "";
			picture = "";
		};
		delete Statistics;
		/* class Statistics
		{
			displayName = "";
			shortcuts[] = {};
			indexTitle = "";
			indexIcon = "";
			showEmpty = 1;
			recordTitle = "";
			text = "";
			killsOnce = "";
			kills = "";
			casualtiesPlayerTotalOnce = "";
			casualtiesPlayerTotal = "";
			casualtiesPlayerOnce = "";
			casualtiesPlayer = "";
			casualtiesOnce = "";
			casualties = "";
		}; */
	};
};
