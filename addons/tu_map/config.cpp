class CfgPatches
{
  class tu_map
  {
    units[] = {};
    weapons[] = {};
    requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_UI_F"};
		author = "[GG]hitman";
  };
};

class CfgFunctions
{
	class tu_map
	{
		class Init
		{
			file = "tu_map";
			class postInit{postInit = 1;};
		};
	};
};
