class CfgPatches
{
	class rupal_lobby_fix
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
		author[]=
		{
			"ruPaladin"
		};
	};
};
class RscActiveText;
class RscStandardDisplay;
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	class controls
	{
		class CA_B_West: RscActiveText
		{
			text="$STR_ruPal_Lobby_Blufor";
			textHeight=0.34200001;
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="7 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_East: CA_B_West
		{
			text="$STR_ruPal_Lobby_Opfor";
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.1)";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="1.08 * 8.7 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Guerrila: CA_B_West
		{
			text="$STR_ruPal_Lobby_Independent";
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="1.16 * 10.4 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Civilian: CA_B_West
		{
			text="$STR_ruPal_Lobby_Civilian";
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="1.24 * 12.1 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Virtual: CA_B_West
		{
			text="$STR_ruPal_Lobby_Virtual";
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="1.32 * 13.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		class CA_B_Logic: CA_B_West
		{
			text="$STR_ruPal_Lobby_Zeus";
			sizeEx="(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.8)";
			x="0.4 * 1.45 *      (   ((safezoneW / safezoneH) min 1.2) / 40) +   (SafezoneX)";
			y="1.32 * 13.8 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) +   (safezoneY)";
			w="1.6 * 3 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.6 * 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
