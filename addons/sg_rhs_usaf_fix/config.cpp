class CfgPatches {
	class sg_rhs_USAF_fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_01", "A3_Air_F_EPB_Heli_Light_03", "A3_CargoPoses_F", "rhsusf_c_troops", "rhsusf_c_heavyweapons", "RHS_US_A2_AirImport", "A3_Armor_F_EPB_APC_tracked_03", "RHS_US_A2Port_Armor", "A3_Soft_F_MRAP_01", "rhsusf_vehicles", "rhsusf_c_hmmwv","rhsusf_c_ch53","rhsusf_c_weapons","rhs_c_weapons","A3_Ui_F", "A3_Data_F","A3_Functions_F","A3_UiFonts_F", "rhsusf_optics","A3_Sounds_F_Vehicles","rhsusf_c_m1117","rhsusf_c_melb", "rhs_c_weapons", "rhsgref_c_air","rhsusf_c_airweapons","rhsusf_c_m1a1","rhsusf_c_m1a2", "tu_atgm"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SensorTemplateActiveRadar; 
class SensorTemplateLaser;
class SensorTemplatePassiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateNV;
class pzn_vdisp_default_Left;
class pzn_vdisp_default_Right;
class pzn_vdisp_Sling_Left;
class pzn_vdisp_Sling_Right;
class pzn_vdisp_Radar_Left;
class pzn_vdisp_Radar_Right;
class pzn_vdisp_RadarSling_Left;
class pzn_vdisp_RadarSling_Right;
class pzn_vdisp_SensorSling_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "SlingLoadDisplay";
	class Components
	{
		class SlingLoadDisplay
		{
			componentType = "SlingLoadDisplayComponent";
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};
class pzn_vdisp_Sensor_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};


class pzn_vdisp_Sensor_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "SlingLoadDisplay";
	class Components
	{
		class SlingLoadDisplay
		{
			componentType = "SlingLoadDisplayComponent";
		};
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {8000,4000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+64+128+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};
class pzn_vdisp_SensorSling_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SlingLoadDisplay
		{
			componentType = "SlingLoadDisplayComponent";
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};
class vdisp_Radar_gepard_Left // вариант-1
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};
class vdisp_Radar_gepard_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+16+32+256; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_Radar_ah64d_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_Radar_ah64d_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class pzn_vdisp_5km_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class pzn_vdisp_5km_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_lasersensor_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {7000,5000,3000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_lasersensor_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {7000,5000,3000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_Radar_mh6_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class SlingLoadDisplay
        {
            componentType = "SlingLoadDisplayComponent";
        };
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class vdisp_Radar_mh6_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
		};
		class SlingLoadDisplay
        {
            componentType = "SlingLoadDisplayComponent";
        };
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class pzn_vdisp_defaultblue_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
	class Components
	{
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};
class pzn_vdisp_defaultblue_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
	defaultDisplay = "MinimapDisplay";
	class Components
	{
		class EmptyDisplay
		{
			componentType = "EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType = "MinimapDisplayComponent";
		};
		
	};
};

class cfgAmmo
{
	class MissileBase;
    class M_Titan_AT;
	/*
    class rhs_ammo_TOW_AT : M_Titan_AT {
		indirectHit = 20;
		indirectHitRange = 3.8;
	};
	class rhs_ammo_TOWB_AT;
	class rhs_ammo_TOW2_AT : rhs_ammo_TOWB_AT {
		indirectHit = 20;
		indirectHitRange = 3.8;
	}; 
    class rhs_ammo_m72a7_rocket;
	class rhs_ammo_m72a3_rocket: rhs_ammo_m72a7_rocket {
		ace_frag_skip = 1;
		submunitionAmmo = "rhs_rpg18_penetrator";
		indirectHit = 10;
		indirectHitRange = 1;
	};
    class Sh_120mm_APFSDS;
    class rhs_ammo_M829: Sh_120mm_APFSDS
    {
        submunitionAmmo = "";
        hit = 440;
		typicalSpeed = 1670;
		caliber = 24.3912;
    };
    class rhs_ammo_M829A1: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 465;
		typicalSpeed = 1575;
		caliber = 27.3862;
    };
    class rhs_ammo_M829A2: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 490;
		typicalSpeed = 1680;
		caliber = 30.5159;
    };
    class rhs_ammo_M829A3: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 550;
		typicalSpeed = 2050;
		caliber = 34.8124;
    };
    class rhs_ammo_M830: Sh_120mm_APFSDS
    {
        submunitionAmmo = "";
        caliber = 40;
        hit = 440;
		typicalSpeed = 1670;
    };
    class rhs_ammo_M830A1: rhs_ammo_M830
    {
        submunitionAmmo = "";
        caliber = 30;
        hit = 465;
		typicalSpeed = 1575;
    };
    class  Sh_120mm_HE;
    class rhs_ammo_M1069: Sh_120mm_HE //повышаем сплеш осколочных у абрамса
    {
        hit = 350;
        indirectHit = 130;
		indirectHitRange = 40;
		deflecting = 0;
    };
	class rhs_ammo_M1147: rhs_ammo_M1069{};
	class rhs_ammo_M416: rhs_ammo_M1069
	{
		deflecting = 0;
	};
	class rhs_ammo_M1028: rhs_ammo_M1069
	{
		deflecting = 0;
	};
	class B_127x99_Ball;
	class B_127x99_SLAP;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		caliber = 2.5;
		hit = 30;
	};
	
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball {
		hit = 35;
		caliber = 2.8;
	};
	class rhs_ammo_127x99_Ball:B_127x99_Ball
	{
		caliber = 2.6;		
	};

	class rhs_ammo_127x99_SLAP: B_127x99_SLAP
	{
		caliber = 3.4;
	};
	*/
	class M_Scalpel_AT: MissileBase
	{
		class Components;
	};
    class ACE_Hellfire_AGM114K: M_Scalpel_AT {
		// ais_ce_penetrators[] = {"rhs_ammo_Hellfire_AT_penetrator"};
		submunitionAmmo = "rhs_ammo_Hellfire_AT_penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitialOffset[] = {0,0,-0.2};
		submunitionParentSpeedCoef = 0;
		submunitionInitSpeed = 1000;
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		model="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape="\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
		hit = 400;
		indirectHit = 35;
		indirectHitRange = 8;
		maxControlRange = 8000;
		maneuvrability = 12;
		class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 38;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};

	class Missile_AGM_02_F;
	class rhs_ammo_Hellfire_AT: Missile_AGM_02_F {};
	class RHS_ammo_AGM_114L: rhs_ammo_Hellfire_AT
	{
		class ace_missileguidance {
            enabled = 0;
		};
	};
	class RHS_ammo_AGM_114K: M_Scalpel_AT
	{
		maneuvrability = 12;
		
		model = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K_fly";
		proxyShape = "\rhsusf\addons\rhsusf_airweapons\proxyammo\rhsusf_m_AGM114K";
		indirectHit = 35;
		indirectHitRange = 8;
		cost = 250;
		airLock = 0;
		muzzleEffect = "";
		effectsMissileInit = "MissileDAR1";
		effectsMissile = "missile1";
		whistleDist = 8;
		aiAmmoUsageFlags = "64+128 + 512";
		missileLockMaxDistance = 6000;
		missileLockMinDistance = 400;
		missileLockMaxSpeed = 55;
		missileLockCone = 30;
		missileKeepLockedCone = 60;
		missileManualControlCone = 120;
		lockSeekRadius = 100;
		weaponType = "missileAA";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						angleRangeHorizontal = 30;
						angleRangeVertical = 50;
						typeRecognitionDistance = -1;
						maxGroundNoiseDistance = 0;
						maxFogSeeThrough = 0.3;
						allowsMarking = 1;
					};
				};
			};
		};

        irLock = 0;
        laserLock = 0;
        manualControl = 0;
        maxSpeed = 450;

        thrustTime = 3; // motor burn 2-3 sec
        thrust = 250;
        timeToLive = 70;

        ace_rearm_caliber = 178;

        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH", "LIDAR", "SARH", "Optic", "Thermal", "GPS", "SACLOS", "MCLOS" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 38;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "hellfire";
            attackProfiles[] = {"hellfire", "hellfire_hi", "hellfire_lo"};
        };
	};
	class RHS_ammo_AGM_114M: RHS_ammo_AGM_114K
	{
		class ace_missileguidance: ace_missileguidance {};
	};
	class RHS_ammo_AGM_114N: RHS_ammo_AGM_114M
	{
		class ace_missileguidance: ace_missileguidance {};
	};
	class RHS_Ammo_DAGR: MissileBase
	{
		irLock = 0;
		airLock = 0;
		manualControl = 0;
		laserLock = 0;
		canLock = 0;
		maneuvrability = 10;
		thrustTime = 1.1;
		thrust = 825;
		weaponLockSystem = 0;
		
        class ace_missileguidance {
            enabled = 1;

            minDeflection = 0.0005;      // Minium flap deflection for guidance
            maxDeflection = 0.01;       // Maximum flap deflection for guidance
            incDeflection = 0.0005;      // The incrmeent in which deflection adjusts.

            canVanillaLock = 0;          // Can this default vanilla lock? Only applicable to non-cadet mode

            // Guidance type for munitions
            defaultSeekerType = "SALH";
            seekerTypes[] = { "SALH" };

            defaultSeekerLockMode = "LOAL";
            seekerLockModes[] = { "LOAL", "LOBL" };

            seekLastTargetPos = 1;      // seek last target position [if seeker loses LOS of target, continue to last known pos]
            seekerAngle = 38;           // Angle in front of the missile which can be searched
            seekerAccuracy = 1;         // seeker accuracy multiplier

            seekerMinRange = 1;
            seekerMaxRange = 5000;      // Range from the missile which the seeker can visually search

            // Attack profile type selection
            defaultAttackProfile = "JAV_DIR";
            attackProfiles[] = {"JAV_DIR"};
        };
	};
	class B_30mm_APFSDS;
	class B_30mm_APFSDS_Tracer_Red : B_30mm_APFSDS {
		//hit = 90;
		//caliber = 4;
	};
	
	class  B_40mm_APFSDS : B_30mm_APFSDS {
		//hit = 100;
		//caliber = 5;
	};
	class B_20mm;
	class rhs_ammo_20mm_AP: B_20mm
	{
		allowagainstinfantry = 1;
		airLock = 1;
		irLock = 0;
		artilleryLock = 0;
		autoSeekTarget = 0;
		laserLock = 1;
		//indirectHit = 6;
		//indirectHitRange = 1.8;
	};

	class B_30mm_HE;
	class rhs_ammo_30x113mm_M789_HEDP: B_30mm_HE
	{
		airLock = 1;
		irLock = 0;
		artilleryLock = 0;
		laserLock = 1;
		autoSeekTarget = 1;
	//	indirectHit = 7;
	//	indirectHitRange = 2.1;		
	};
	class RHS_ammo_M792_HEI : B_30mm_HE {
		//indirectHit = 8;
		//indirectHitRange = 1.9;
		tracerEndTime = 3.3;
	};
	class RHS_ammo_M919_APFSDS : B_30mm_APFSDS {
		tracerEndTime = 2;
	};
};

class cfgMagazines
{
	class VehicleMagazine;	// External class reference
	
	class rhsusf_20Rnd_762x51_m118_special_Mag;

	class rhs_mag_Sidewinder;
	class rhs_mag_Sidewinder_heli: rhs_mag_Sidewinder {
		ammo = "rhs_ammo_Sidewinder_AA";	
	};
	class rhs_mag_Sidewinder_heli_2: rhs_mag_Sidewinder_heli {
		ammo = "rhs_ammo_Sidewinder_AA";
	};
	
	class rhsusf_20Rnd_762x51_m62_Mag: rhsusf_20Rnd_762x51_m118_special_Mag
	{
		tracersEvery = 1;
	};
	
	class TU_1Rnd_Empty : VehicleMagazine {
		ammo = "TU_Ammo_Empty";
		count = 1;
	};
	
	class TU_2Rnd_Empty : TU_1Rnd_Empty {
		count = 2;
	};
	
	class TU_4Rnd_Empty : TU_1Rnd_Empty {
		count = 4;
	};
	
	class TU_8Rnd_Empty : TU_1Rnd_Empty {
		count = 8;
	};

	class rhs_mag_30x113mm_M789_HEDP_1200 : VehicleMagazine {
		tracersEvery = 1;
	};
	
	class rhs_mag_M197_750 : VehicleMagazine {
		tracersEvery = 1;
	};
	
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	
	class rhs_mag_1000Rnd_30x173 : 1000Rnd_Gatling_30mm_Plane_CAS_01_F {
		tracersEvery = 1;
	};
	class CA_LauncherMagazine;
	class rhs_mag_smaw_HEAA: CA_LauncherMagazine {
		mass = 99.216; //4,5 kg
	};

	class rhs_mag_smaw_HEDP: CA_LauncherMagazine {
		mass = 92.6; //4,2 kg		
	};
};

class cfgVehicles
{
    class Land;
	class LandVehicle: Land
	{
		class Turrets;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
		class Components;
        class ViewOptics;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class Tank_F: Tank {};
	class Air;	// External class reference
	
	class Helicopter : Air {
		class Turrets;	// External class reference
	};
	
	class Helicopter_Base_F : Helicopter {
		class Turrets : Turrets {
			class MainTurret;	// External class reference
		};
		class Components;
		class CargoTurret;	// External class reference
	};
	
	class Heli_Attack_01_base_F : Helicopter_Base_F {
		class Eventhandlers;
		class Components;
		class Sounds;	// External class reference
	};
	
	class Helicopter_Base_H : Helicopter_Base_F {
		class Turrets : Turrets {
			class CopilotTurret;	// External class reference
		};
		class Components;
		class SoundsExt;	// External class reference
	};
	
	class Heli_Transport_01_base_F : Helicopter_Base_H {
		class Sounds;	// External class reference
		class Components;
		class SoundsExt : SoundsExt {
			class Sounds;	// External class reference
		};
	};
	
	class Heli_Transport_02_base_F : Helicopter_Base_H {
		};
	
	class Heli_Transport_03_base_F : Helicopter_Base_H {
		};
	
	class Heli_Light_03_base_F : Helicopter_Base_F {
		};
	
	class Plane : Air {};
	
	class Plane_Base_F : Plane {
		class NewTurret;	// External class reference
		
		class Turrets {};
	};
	
	class Plane_CAS_01_base_F : Plane_Base_F {
		class Components;
	};
	
	class rhsusf_CH53E_USMC: Helicopter_Base_H	{
		weapons[]=
		{
			"CMFlareLauncher",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		driverCanEject = 1;
		radarTargetSize=1;
		class Components: Components
		{
			delete SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
				    delete CrewDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
				    delete CrewDisplay;
					};
				};
		        };
			};
		};
		radarType = 0;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Eventhandlers;
	};
	class TU_rhsusf_CH53E_USMC: rhsusf_CH53E_USMC	{
		scope = 2;
		displayName = "CH-53E no IMS";
		radarType = 0;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Eventhandlers: Eventhandlers
		{
			class tu_eventhandlers 
			{
				init = "_this call compile preProcessFile '\rhsusf\addons\rhsusf_c_ch53\scripts\rhs_ch53_init.sqf';";
			};
		};
	};
	class RHS_AH64_base : Heli_Attack_01_base_F {
		altFullForce = 4000; //Статический потолок
		altNoForce = 6000; //Практический потолок
		LockDetectionSystem = 8;
		radarTargetSize=1;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	class RHS_C130J_Base: Plane_Base_F {
		class Components;
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	class RHS_C130J: RHS_C130J_Base {
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"300Rnd_CMFlare_Chaff_Magazine"
		};
	    radarType = 0;
	    radarTargetSize=1;
	    LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			delete SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_default_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_default_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
		};
	};
	class RHS_AH64D : RHS_AH64_base {
		radarType = 4;
		driverCanEject = 1;
		weapons[]=
		{
			"rhs_weap_mastersafe",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete IRSensorComponent;
					delete VisualSensorComponent;
					delete PassiveRadarSensorComponent;
					class ActiveRadarSensorComponent_Ground: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 0;
							maxRange = 0;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 40;
						aimDown = 0;
						minTrackableSpeed = 7.5;
					};
					class ActiveRadarSensorComponent_Air: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 40;
						minTrackableATL = 20;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						AnimDirection =  "mainTurret";
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
						/* animDirection="TADSElev"; */
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_ah64d_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
			};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_ah64d_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
		};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				canEject = 1;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_ah64d_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
			};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_ah64d_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {6000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+2+4+8+16+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
		};
				};
			};
		};
	};
	
	class RHS_AH64D_noradar : RHS_AH64D {
		radarType = 8;
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {}; 
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete IRSensorComponent;
			        delete VisualSensorComponent;
			        delete PassiveRadarSensorComponent;
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						AnimDirection = "mainTurret";
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {}; 
		};
	};
	
	class TU_RHS_AH64A : RHS_AH64D_noradar {
		scope = 2;
		displayName = "AH-64A";
		radarType = 8;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_AH64D_noradar_GS;
	class TU_RHS_AH64A_GS : RHS_AH64D_noradar_GS {
		scope = 1;
		displayName = "AH-64A (Ground-Suppression)";
		radarType = 8;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_AH64D_noradar_CS;
	class TU_RHS_AH64A_CS : RHS_AH64D_noradar_CS {
		scope = 1;
		displayName = "AH-64A (Close-Support)";
		radarType = 8;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
		
	class RHS_AH1Z_base : Heli_Attack_01_base_F {
		altFullForce = 3600; //Статический потолок
		altNoForce = 5500; //Практический потолок
		ace_fcs_Enabled = 0;
		radarTargetSize=1;
		radarType = 8;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components;
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};	
	
	class RHS_AH1Z : RHS_AH1Z_base {
		driverCanEject = 1;
		weapons[] = {"rhs_weap_mastersafe", "CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		radarType = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components                   
		{
			class SensorsManagerComponent
			{
			    class Components
				{
					delete IRSensorComponent;
					delete VisualSensorComponent;
					delete PassiveRadarSensorComponent;
				class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						AnimDirection =  "mainTurret";
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
				};
				};
			}; 
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		    {
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024;
			resource="RscCustomInfoSensors";
		    };
			};
			};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		    {
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024;
			resource="RscCustomInfoSensors";
		    };
			};
			};                                                                                        
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {
						defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		    {
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024;
			resource="RscCustomInfoSensors";
		    };
			};
					};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {
						defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		    {
			componentType = "SensorsDisplayComponent";
			range[] = {5000,2000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024;
			resource="RscCustomInfoSensors";
		    };
			};
					};
				};
			};
		};
	};
	
	class TU_RHS_AH1W : RHS_AH1Z {
		displayName = "AH-1W";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				canEject = 1;
			};
		};
	};
	
	class RHS_AH1Z_GS;
	class TU_RHS_AH1W_GS : RHS_AH1Z_GS {
		displayName = "AH-1W (Ground-Suppression)";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_AH1Z_CS;
	class TU_RHS_AH1W_CS : RHS_AH1Z_CS {
		displayName = "AH-1W (Close-Support)";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class BWA3_Tiger_base: Helicopter_Base_F {
		radarType = 8;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						AnimDirection =  "mainTurret";
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 50;
						angleRangeVertical = 50;
					};
				};
			};
				class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {};
			    class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {};
				};
			};
		};
	};
	
	class RHS_CH_47F_base : Heli_Transport_02_base_F {
		altFullForce = 3215; //Статический потолок
		altNoForce = 6735; //Практический потолок
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		driverCanEject = 1;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	};
	
	class RHS_CH_47F : RHS_CH_47F_base {
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		class Components: Components
		{
			delete SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
		};
		
		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
		        };
			};			
			
			class MainTurret : MainTurret {
				gunnerCompartments = "Compartment1";
				canEject = 1;
			};
			
			class RightDoorGun : MainTurret {
				gunnerCompartments = "Compartment1";
				canEject = 1;
			};
		};
		
		class UserActions {
			class VehicleParadrop {
				condition = "(count (attachedObjects this) > 0) AND ('man' countType (attachedObjects this) == 0) AND Alive(this)";
				displayName = "Paradrop cargo";
				onlyforplayer = 1;
				position = "pos driver";
				radius = 15;
				shortcut = "";
				showwindow = 0;
				statement = "[this] spawn rhs_fnc_vehPara";
			};
			delete CloseCargoDoor;
			delete LevelRamp;
			delete MoveInside;
			delete OpenCargoDoor;
		};
	};
		
	class RHS_CH_47F_light : RHS_CH_47F {};
	
	class RHS_UH60_Base : Heli_Transport_01_base_F {
		altFullForce = 3170; //Статический потолок
		altNoForce = 5790; //Практический потолок
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		driverCanEject = 1;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	};
	
	class RHS_UH60M_base : RHS_UH60_Base {
		driverCanEject = 1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			delete SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				delete CrewDisplay;
				};
			};
		};
	};
	
	class RHS_UH60M_US_base : RHS_UH60M_base {};
	
	class RHS_UH60M : RHS_UH60M_US_base {
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};	
		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
		        };
			};
			
			class MainTurret : MainTurret {
				canEject = 1;
			};
			
			class RightDoorGun : MainTurret {
				canEject = 1;
			};
		};
		class UserActions {
			class OpenCargoDoor {
				condition = "this doorPhase 'doorRB' == 0 and (alive this) and ({player == _x} count [this turretUnit [3], this turretUnit [4]] > 0);";
			};
			
			class CloseCargoDoor : OpenCargoDoor {
				condition = "this doorPhase 'doorRB' > 0 and (alive this) and ({player == _x} count [this turretUnit [3], this turretUnit [4]] > 0);";
			};
			
			class OpenCargoLDoor : OpenCargoDoor {
				condition = "this doorPhase 'doorLB' == 0 and (alive this) and ({player == _x} count [this turretUnit [5], this turretUnit [6]] > 0);";
			};
			
			class CloseCargoLDoor : OpenCargoDoor {
				condition = "this doorPhase 'doorLB' > 0 and (alive this) and ({player == _x} count [this turretUnit [5], this turretUnit [6]] > 0);";
			};
		};
	};
	
	class RHS_UH60M_MEV : RHS_UH60M {
		class UserActions {
			class OpenCargoDoor {
				displayName = "Open right cargo door";
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				condition = "this doorPhase 'doorRB' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
				onlyforplayer = 1;
			};
			
			class CloseCargoDoor : OpenCargoDoor {
				displayName = "Close right cargo door";
				condition = "this doorPhase 'doorRB' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
			};
			
			class OpenCargoLDoor : OpenCargoDoor {
				displayName = "Open left cargo door";
				condition = "this doorPhase 'doorLB' == 0 and (alive this) and player in this;";
				statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
				onlyforplayer = 1;
			};
			
			class CloseCargoLDoor : OpenCargoDoor {
				displayName = "Close left cargo door";
				condition = "this doorPhase 'doorLB' > 0 and (alive this) and player in this;";
				statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
			};
		};
	};
	
	class RHS_UH60M_MEV2 : RHS_UH60M_MEV {
		class Turrets : Turrets {
			class CargoTurret_01 : CargoTurret {
				gunnerCompartments = "Compartment4";
			};
		};
		class UserActions {
			class OpenCargoDoor {
				displayName = "Open right cargo door";
				position = "pos driver";
				radius = 15;
				showwindow = 0;
				condition = "this doorPhase 'doorRB' == 0 and (alive this) and ({player == _x} count [this turretUnit [1], this turretUnit [2]] > 0);";
				statement = "this animateDoor ['doorRB', 1];this animate ['doorHandler_R',1]";
				onlyforplayer = 1;
			};
			
			class CloseCargoDoor : OpenCargoDoor {
				displayName = "Close right cargo door";
				condition = "this doorPhase 'doorRB' > 0 and (alive this) and ({player == _x} count [this turretUnit [1], this turretUnit [2]] > 0);";
				statement = "this animateDoor ['doorRB', 0];this animate ['doorHandler_R',0];";
			};
			
			class OpenCargoLDoor : OpenCargoDoor {
				displayName = "Open left cargo door";
				condition = "this doorPhase 'doorLB' == 0 and (alive this) and ({player == _x} count [this turretUnit [3], this turretUnit [4]] > 0);";
				statement = "this animateDoor ['doorLB', 1];this animate ['doorHandler_L',1];";
				onlyforplayer = 1;
			};
			
			class CloseCargoLDoor : OpenCargoDoor {
				displayName = "Close left cargo door";
				condition = "this doorPhase 'doorLB' > 0 and (alive this) and ({player == _x} count [this turretUnit [3], this turretUnit [4]] > 0);";
				statement = "this animateDoor ['doorLB', 0];this animate ['doorHandler_L',0];";
			};
		};
	};
	
	class RHS_UH1_Base: Heli_Light_03_base_F {
		altFullForce = 1980; //Статический потолок
		altNoForce = 6100; //Практический потолок
		driverCanEject = 1;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	};	
	
	class RHS_UH1Y_base: RHS_UH1_Base {
		driverCanEject = 1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	};
	
	class RHS_UH1Y_US_base: RHS_UH1Y_base {
		class Turrets: Turrets {
			class CopilotTurret: MainTurret {};
		};		
	};
	
	class RHS_UH1Y: RHS_UH1Y_US_base {
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		class Components: Components
		{
			delete SensorsManagerComponent;
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete SensorDisplay;
				};
			};
		};
		class Turrets: Turrets {			
			class CopilotTurret: CopilotTurret
			{
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
						delete CrewDisplay;
					    delete SensorDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					    delete CrewDisplay;
					    delete SensorDisplay;
					};
				};
		        };
			};
			
			class MainTurret: MainTurret {
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
		        };
			};
			
			class RightDoorGun: MainTurret {
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_SensorSling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_SensorSling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
					delete SensorDisplay;
					};
				};
		        };
			};
		};
	};
	
	class TU_RHS_UH1N: RHS_UH1Y {
		displayName = "UH-1N (MG)";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_UH1Y_FFAR: RHS_UH1Y {};
	
	class TU_RHS_UH1N_FFAR : RHS_UH1Y_FFAR {
		displayName = "UH-1N";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_UH1Y_UNARMED: RHS_UH1Y_FFAR {};
	
	class TU_RHS_UH1N_UNARMED : RHS_UH1Y_UNARMED {
		displayName = "UH-1N (Unarmed)";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class TU_RHS_UH1N_MED: RHS_UH1Y_UNARMED {
		displayName = "UH-1N Dustoff";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		attendant = 1;
		hiddenSelections[] = {"camo1","camo2","rn1","rn2","rn3","rn4","tn1","tn2","tn3","tn4","tn5","tn6","dn1","dn2","dn3","dn4","dn5","dn6","dn7","dn8","dn9","dn10","dn11","dn12","zn1","zn2","zn3"};
		hiddenSelectionsTextures[] = {"sg_rhs_usaf_fix\uh1y_extmed_co.paa","rhsusf\addons\rhsusf_a2port_air2\uh1y\data\uh1y_int_co.paa"};
	};
		
	class RHS_A10: Plane_CAS_01_base_F {
		displayName = "A-10C";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		radarTargetSize=1;
		radarType = 0;
		weapons[] = {"rhs_weap_MASTERSAFE","RHS_weap_gau8","CMFlareLauncher"};
		magazines[] = {"rhs_mag_1150Rnd_30x173_mixed","168Rnd_CMFlare_Chaff_Magazine"};
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete VisualSensorComponent;
					delete PassiveRadarSensorComponent;
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 7000;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						aimDown = 0;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_lasersensor_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {7000,5000,3000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
			};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_lasersensor_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				class SensorDisplay
		{
			componentType = "SensorsDisplayComponent";
			range[] = {7000,5000,3000};     //accepts an integer or an array of available ranges (submode)
			showTargetTypes = 1+4+8+32+128+256+1024; // 1 - Sensor sectors, 2 - Threats, 4 - Marked tgt symbol, 8 - Own detection, 16 - Remote detection, 32 - Active detection, 64 - Passive detection, 128 - Ground tgts, 256 - Air tgts, 512 - Men, 1024 - Special (laser, NV)
			resource="RscCustomInfoSensors";
		};
			};
		};
		};
	};

	class RHS_A10_AT: RHS_A10
	{
		displayName = "A-10C (AT)";
	};
	
	class TU_RHS_A10A : RHS_A10 {
		displayName = "A-10A no IMS";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class Plane_Fighter_03_base_F;
	
	class RHS_L159_base: Plane_Fighter_03_base_F
	{
	class Components;
	};
	
	class tu_RHS_L159_base: RHS_L159_base
	{
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	    class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent_Air: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						aimDown = 0;
						minTrackableATL = 20;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						class AirTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 5000;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 5000;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 90;
						aimDown = 0;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_5km_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_5km_Right {};
		};
	};	
	
	class rhs_l159_CDF: tu_RHS_L159_base {};
	
	class RHS_L39_base: tu_RHS_L159_base {};
	
	class tu_RHS_L39_base: RHS_L39_base
	{
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_usaf_fix\VulcanLock.ogg",
			db+10,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_usaf_fix\TunguskaLock.ogg",
			db+10,
			1
		};
	    class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					delete ActiveRadarSensorComponent_Air;
					delete LaserSensorComponent;
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_default_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_default_Right {};
		};
	};	
	
	class rhs_l39_cdf: tu_RHS_L39_base {};
    class MBT_01_base_F : Tank_F {};
    class rhsusf_m1a1tank_base : MBT_01_base_F
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        class Turrets: Turrets 
        {
            class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscWeaponM1_FCS"; //добавляем компасы на абрамс
				soundServo[] = {"sg_sound_file\soundTurret\soundServo.ogg",0.562341,1,30};//звуки поворота башни
				soundServoVertical[] = {"sg_sound_file\soundTurret\soundServoVertical.ogg",0.562341,1,30};
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        turretInfoType = "sg_m1a1_commander";
                    };
                    class Loader: CommanderOptics
					{
						turretInfoType = "sg_compas";
						gunnerForceoptics = 1;
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = 0.75;
								minFov = 0.25;
								maxFov = 1.1;
								visionMode[] = {};
							};
						};
					};
                };       	
            };
        };   
    }; 
    class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base //Добавляем базовый класс для танков модели М1А2, так как базовая модель на М1А1 на них не распростроняется
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "sg_RHS_RscWeaponM1_FCS";
				soundServo[] = {"sg_sound_file\soundTurret\soundServo.ogg",0.562341,1,30};//звуки поворота башни
				soundServoVertical[] = {"sg_sound_file\soundTurret\soundServoVertical.ogg",0.562341,1,30};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
						gunnerForceoptics = 1;
						turretInfoType = "sg_m1a1_commander";
						class ViewOptics;
					};
					class Loader: CommanderOptics
					{
						gunnerForceoptics = 1;
						turretInfoType = "sg_compas";
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = 0.75;
								minFov = 0.25;
								maxFov = 1.1;
								visionMode[] = {};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
					};
				};	
			};
		};
	};
    class APC_Tracked_02_base_F: Tank_F {};   
    class rhsusf_m113tank_base: APC_Tracked_02_base_F
    {
        DriverForceOptics = 1;
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
    };
    class APC_Tracked_03_base_F : Tank_F {}; 
    class RHS_M2A2_Base : APC_Tracked_03_base_F 
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        radartype = 8;
		irtarget = 0;
        class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscODS_ISU";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_m2a2_commander_hud";
                    };
                };        
            };
        };        
    };   
    class RHS_M2A2: RHS_M2A2_Base {};
    class RHS_M2A3: RHS_M2A2
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscIBAS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscCIV";
                    };
                };        
            };
        };  
    };
};

class cfgWeapons
{
	class Missile_AGM_02_Plane_CAS_01_F;
	class rhs_weap_HellfireLauncher: Missile_AGM_02_Plane_CAS_01_F
	{
		class TopDown;
		class Direct;
	};
	class rhs_weap_AGM114L_Launcher: rhs_weap_HellfireLauncher
	{
        ace_hellfire_enabled = 0; // show attack profile / lock on hud
        ace_laser_canSelect = 0; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 0;
	};
    class RocketPods;
    class rhs_weap_AGM114K_Launcher: RocketPods {        
        autoFire = 0;
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
        soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1,1.1,700};
        nameSound = "MissileLauncher";
        sounds[] = {"StandardSound"};        
        class StandardSound {
            begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.12202,1.3,1000};
            soundBegin[] = {"begin1",1};
            soundsetshot[] = {"RocketsMedium_Shot_SoundSet"};
        };
        cursor = "EmptyCursor";
        cursorAim = "missile";
        showAimCursorInternal = 0;
		
        ace_hellfire_enabled = 1; // show attack profile / lock on hud
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        ace_laser_showHud = 1;
		muzzles[] = {"this"};		
		displayName = "AGM-114K Hellfire II";
		magazines[] = {"rhs_mag_agm114K_4","rhs_mag_agm114K_2","rhs_mag_agm114K"};
    };
	class rhs_weap_AGM114M_Launcher: rhs_weap_AGM114K_Launcher
	{
		muzzles[] = {"this"};
		displayName = "AGM-114M Hellfire II";
		magazines[] = {"rhs_mag_agm114M_4","rhs_mag_agm114M_2","rhs_mag_agm114M"};
	};
	class RHS_weap_AGM114N_Launcher: rhs_weap_AGM114K_Launcher
	{
		muzzles[] = {"this"};
		displayName = "AGM-114N Hellfire II";
		magazines[] = {"rhs_mag_agm114N_4","rhs_mag_agm114N_2","rhs_mag_agm114N"};
	};
	class rhs_weap_DAGR_Launcher: rhs_weap_HellfireLauncher
	{
        ace_hellfire_enabled = 0; // show attack profile / lock on hud
		ace_laser_showHud = 1;
        ace_laser_canSelect = 1; // can ace_laser lock (allows switching laser code)
        canLock = 0;
        weaponLockSystem = 0;
        lockingTargetSound[] = {"",0,1};
        lockedTargetSound[] = {"",0,1};
	};
	
	class gatling_30mm;
	
	class rhs_weap_M197 : gatling_30mm {
		cursorAim="";
	};
	
	class rhs_weap_M230 : rhs_weap_M197 {
		cursorAim="";
	};
	class rhs_weap_FFARLauncher: RocketPods
	{
		class Burst: RocketPods
		{
			dispersion = 0.026;
		};
	};
};