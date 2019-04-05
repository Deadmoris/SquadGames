class GVAR(RscButton2): GVAR(RscButton) {
	style = 0;
	colorBackground[] = {0, 0, 0, 0.5};
	colorShadow[] = {0, 0, 0, 0.5};
	font = "PuristaMedium";
	sizeEx = 0.028;
	shadow = 0;
	colorFocused[] = {0.3254, 0.3254, 0.3254, 1};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
};

class GVAR(POPUP_UI)
{
	idd = 1351;
	movingEnable = 1;
	duration = 1e+011;
	name = "TUPOPUP_name";
	onLoad = "uiNamespace setVariable ['GVAR(POPUP_UI)', _this select 0];";
	onUnLoad = "uiNamespace setVariable ['GVAR(POPUP_UI)', nil]";
	controlsBackground[] = {GVAR(popback)};
	objects[] = {};
	controls[] = {
		GVAR(poptext),
		GVAR(popb1),
		GVAR(popb2),
		GVAR(popb3),
		GVAR(popb4),
		GVAR(popb5),
		GVAR(popb6),
		GVAR(popb7),
		GVAR(popb8),
		GVAR(popb9)
	};
	class GVAR(popback): GVAR(IGUIBack)
	{
		idc = 1700;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.532995 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
		colorBackground[] = {0.34, 0.5882, 0.2392, 0.8};
	};
	class GVAR(poptext): GVAR(RscText)
	{
		idc = 1701;
		text = "$STR_TU_Menu";
		font = "PuristaMedium";
		sizeEx = 0.03;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.532995 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb1): GVAR(RscButton2)
	{
		idc = 1702;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.555591 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb2): GVAR(RscButton2)
	{
		idc = 1703;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.578188 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb3): GVAR(RscButton2)
	{
		idc = 1704;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.600784 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb4): GVAR(RscButton2)
	{
		idc = 1705;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.623381 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb5): GVAR(RscButton2)
	{
		idc = 1706;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.645977 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb6): GVAR(RscButton2)
	{
		idc = 1707;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.668574 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb7): GVAR(RscButton2)
	{
		idc = 1708;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.69117 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
	class GVAR(popb8): GVAR(RscButton2)
	{
		idc = 1709;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.7137375 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0230965 * safezoneH;
	};
	class GVAR(popb9): GVAR(RscButton2)
	{
		idc = 1710;
		x = 0.51375 * safezoneW + safezoneX;
		y = 0.736363 * safezoneH + safezoneY;
		w = 0.130625 * safezoneW;
		h = 0.0225965 * safezoneH;
	};
};

