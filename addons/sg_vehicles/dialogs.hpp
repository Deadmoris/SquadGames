class ExplodeDistance_dialog {
	
	idd = 1411;
	movingenable = true;
	
	class Controls 
	{
	

class RscFrame_1800: RscFrame
{
	idc = 1800;
	x = 0.539375 * safezoneW + safezoneX;
	y = 0.598 * safezoneH + safezoneY;
	w = 0.21 * safezoneW;
	h = 0.238 * safezoneH;
	sizeEx = -10 * GUI_GRID_H;
};

class IGUIBack_2200: IGUIBack
{
	idc = 2200;
	x = 0.539375 * safezoneW + safezoneX;
	y = 0.598 * safezoneH + safezoneY;
	w = 0.21 * safezoneW;
	h = 0.238 * safezoneH;
};

class RscSlider_1900: RscSlider
{
	idc = 19349;
	x = 0.545937 * safezoneW + safezoneX;
	y = 0.668 * safezoneH + safezoneY;
	w = 0.196875 * safezoneW;
	h = 0.056 * safezoneH;
};
class RscText_1001: RscText
{
	idc = 1001;
	text = "200"; //--- ToDo: Localize;
	x = 0.545937 * safezoneW + safezoneX;
	y = 0.626 * safezoneH + safezoneY;
	w = 0.02625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscText_1002: RscText
{
	idc = 1002;
	text = "2000"; //--- ToDo: Localize;
	x = 0.71 * safezoneW + safezoneX;
	y = 0.626 * safezoneH + safezoneY;
	w = 0.0328125 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscText_1000: RscText
{
	idc = 1000;
	text = "1000"; //--- ToDo: Localize;
	x = 0.624687 * safezoneW + safezoneX;
	y = 0.626 * safezoneH + safezoneY;
	w = 0.0328125 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscText_1003: RscText
{
	idc = 1003;
	text = $STR_DIALOG_NAME; //--- ToDo: Localize;
	x = 0.585312 * safezoneW + safezoneX;
	y = 0.598 * safezoneH + safezoneY;
	w = 0.111562 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1600: RscButton
{
	idc = 1600;
	text = $STR_DIALOG_CANCEL; //--- ToDo: Localize;
	x = 0.5525 * safezoneW + safezoneX;
	y = 0.752 * safezoneH + safezoneY;
	w = 0.0459375 * safezoneW;
	h = 0.042 * safezoneH;
	action = "closeDialog 0;";
};
class RscButton_1601: RscButton
{
	idc = 1601;
	text = $STR_DIALOG_CONFIRM; //--- ToDo: Localize;
	x = 0.690312 * safezoneW + safezoneX;
	y = 0.752 * safezoneH + safezoneY;
	w = 0.0459375 * safezoneW;
	h = 0.042 * safezoneH;
	action = "closeDialog 0; _= [(vehicle player), (sliderPosition 19349)] execvm 'sg_vehicles\scripts\setNewExplodeDistance.sqf'";
};
		
		
		
		
		
		
		
		
		
		
		
	};

};