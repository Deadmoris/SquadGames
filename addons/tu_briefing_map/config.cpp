class CfgPatches
{
  class tu_briefing_map
  {
    units[] = {};
    weapons[] = {"tu_briefing_map"};
    requiredVersion = 0.1;
	requiredAddons[] = {"A3_Data_F","A3_UI_F"};
	author = "[OMCB]Kaban";
  };
};

class cfgWeapons
{
	class itemMap;
	class tu_briefing_map: itemMap
	{
		access = 0;
		displayName = "Карта для брифинга";
	};
};

class CfgFunctions
{
	class tu_briefing_map
	{
		class Init_functions
		{
			file = "\a3\tu_briefing_map";
			class postInit{postInit = 1;};
		};
	};
};