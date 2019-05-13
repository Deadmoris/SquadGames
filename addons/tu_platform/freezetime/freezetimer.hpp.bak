class GVAR(freeze_timer) {
	idd = 411512;
	duration = 30*60;
	name = "Platform Freeze Timer";
	onLoad = "uiNamespace setVariable ['tu_platform_timer_display', _this select 0]";
	onUnload = "uiNamespace setVariable ['tu_platform_timer_display', nil]";
	controls[]= { TimeText };
	class TimeText: RscText
	{
			style=2;
			idc=412001;
			text="WAITING";
			x="16 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 				(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
			y="0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		safezoneY";
			w="8 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
			h="1.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[]={0,0,0,0.75};
			sizeEx="1.0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
};