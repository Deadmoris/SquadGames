class CfgPatches {
	class sg_rhs_AFRF_fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_02", "A3_Air_F_Heli_Light_02", "A3_Air_F_Beta_Heli_Attack_02", "rhs_c_a2port_air", "rhs_c_heavyweapons", "rhs_main", "rhs_decals", "rhs_optics", "rhs_c_troops", "rhs_c_btr", "A3_Armor_F", "A3_Armor_F_Beta", "A3_armor_f_beta_APC_Tracked_02", "A3_Soft_F", "rhs_c_radars", "A3_CargoPoses_F", "A3_Armor_F_T100K", "rhs_aps", "A3_Anims_F_Config_Sdr","rhs_c_weapons","rhs_c_a2port_armor","rhs_c_t72", "rhs_c_bmd", "rhs_c_bmp", "rhs_c_bmp3", "rhs_c_sprut", "rhs_c_tanks","rhssaf_c_weapons", "rhsgref_c_weapons", "tu_atgm"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateLaser;
class SensorTemplateNV;
class vdisp_lasersensor_Left;
class vdisp_lasersensor_Right;
class vdisp_Radar_mh6_Left;
class vdisp_Radar_mh6_Right;


class DefaultVehicleSystemsDisplayManagerLeft
{
	class Components
	{
		delete CrewDisplay;
	};
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class Components
	{
		delete CrewDisplay;
	};
};


class pzn_vdisp_default_Left
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
class pzn_vdisp_default_Right
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


class pzn_vdisp_Sling_Left
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left = 1;
	defaultDisplay = "EmptyDisplay";
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
class pzn_vdisp_Sling_Right
{
	componentType = "VehicleSystemsDisplayManager";
	x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right = 1;	
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



class pzn_vdisp_Radar_Left
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




class pzn_vdisp_Radar_Right
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



class pzn_vdisp_RadarSling_Left
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
class pzn_vdisp_RadarSling_Right
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

class pzn_vdisp_Radar_zsu23_Left
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

class pzn_vdisp_Radar_zsu23_Right
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

class vdisp_Radar_mi28_Left
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
			range[] = {7000,5000,2000};     //accepts an integer or an array of available ranges (submode)
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

class vdisp_Radar_mi28_Right
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
			range[] = {7000,5000,2000};     //accepts an integer or an array of available ranges (submode)
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

class cfgAmmo
{
	class MissileBase;
	class M_Titan_AT;
	
	class rhs_ammo_atgmCore_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
	
	class rhs_ammo_atgmBase_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
    class rhs_ammo_3bm_base;
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 440;
		typicalSpeed = 1800;
		caliber = 9.07407;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 465;
		typicalSpeed = 1800;
		caliber = 10.3704;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 490;
		typicalSpeed = 1780;
		caliber = 11.6105;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1760;
		caliber = 10.9848;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 450;
		typicalSpeed = 1760;
		caliber = 14.3939;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1720;
		caliber = 15.8915;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 16.8627;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 21.1765;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 500;
		caliber = 19.2157;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 520;
		typicalSpeed = 1750;
		caliber = 24.7619;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 26.7059;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 30.5882;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 27.0588;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 33.6842;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 31.2281;
	};
	class Sh_125mm_HE;
	class rhs_ammo_of_base : Sh_125mm_HE
	{
		timeToLive = 360;
		deflecting = 0;
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
	};
	class rhs_ammo_3of_base: rhs_ammo_of_base //повышаем сплеш осколочных у N72,80,90
	{
		hit = 350;
		indirectHit = 130;
		indirectHitRange = 40;
	};
	class B_30mm_AP;
	
	class rhs_ammo_30x165mm_base : B_30mm_AP {
		indirectHit = 5;
		indirectHitRange = 0.12;
	};
	
	class B_30mm_HE;	// External class reference
	
	class rhs_ammo_3uor6 : B_30mm_HE { // Старые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};
	
	class rhs_ammo_3uof8 : rhs_ammo_3uor6 { // Новые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};

	class B_35mm_AA;	// External class reference
	
	class RHS_ammo_23mm_AA : B_35mm_AA { // ЗУ
	    indirectHit = 6;
		indirectHitRange = 2.5;		
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime = 8;
	};

	class rhs_ammo_ofz_23x115mm : RHS_ammo_23mm_AA // ЗУ ОФЗ
	{
		indirectHit = 6;
		indirectHitRange = 2.5;		
	};
	
	class rhs_ammo_ofzt_23x115mm : rhs_ammo_ofz_23x115mm // ЗУ ОФЗТ
	{
		indirectHit = 6;
		indirectHitRange = 2;		
	};
	class B_762x51_Ball; // external
	class rhs_B_762x54_7N14_Ball : B_762x51_Ball // подвяжем норм калибр к СВД и зададим калибр для пробития ~10-15мм бронестали как и ИРЛ
	{
		caliber = 1;
	};
	class BulletBase;
	class B_338_Ball:BulletBase 
	{
		hit=19
	};	
	class rhs_ammo_Sidewinder_AA : MissileBase {
		airLock = 2;
		missileLockCone = 30;
	};
	class rhs_ammo_3bk12_penetrator;	
	
	class rhs_ammo_9m112_penetrator : rhs_ammo_3bk12_penetrator {
		caliber = 40; //(600/((15*1000)/1000))
	};
	
	class rhs_ammo_9m112m_penetrator : rhs_ammo_9m112_penetrator {
		caliber = 56; //(840/((15*1000)/1000))
	};
	
	class rhs_ammo_9m113 : rhs_ammo_atgmBase_base {
		// ais_ce_penetrators[] = {"rhs_ammo_heat_tandem", "rhs_ammo_9m113_penetrator"};
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	
	class rhs_ammo_9m113_penetrator : rhs_ammo_9m112_penetrator {
		caliber = 53; //(800/((15*1000)/1000))
	};
	
	class rhs_ammo_9m117 : rhs_ammo_atgmCore_base {
		// ais_ce_penetrators[] = {"rhs_ammo_heat_tandem", "rhs_ammo_9m117_penetrator"};
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	
	class rhs_ammo_9m117_penetrator : rhs_ammo_9m112_penetrator {
		caliber = 53; // (800/((15*1000)/1000))
	};
	
	class rhs_ammo_9m118 : rhs_ammo_9m117 {
		// ais_ce_penetrators[] = {"rhs_ammo_9m118_penetrator"};
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	
	class rhs_ammo_9m118_penetrator : rhs_ammo_9m112_penetrator {
		caliber = 43;  //(650/((15*1000)/1000))
	};
	
	
	class rhs_ammo_9m119 : rhs_ammo_atgmCore_base {
		// ais_ce_penetrators[] = {"rhs_ammo_heat_tandem", "rhs_ammo_9m119_penetrator"};
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	
	class rhs_ammo_9m119_penetrator : rhs_ammo_9m112_penetrator {
		hit = 250;
		caliber = 57; //(850/((15*1000)/1000))
	};
	
	class rhs_ammo_9m119m : rhs_ammo_9m119 {
		// ais_ce_penetrators[] = {"rhs_ammo_heat_tandem", "rhs_ammo_9m119m_penetrator"};
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	
	class rhs_ammo_9m119m_penetrator : rhs_ammo_9m112_penetrator {
		caliber = 60; //(900/((15*1000)/1000))
	};
	
	class rhs_ammo_9m128 : rhs_ammo_atgmCore_base {
		// ais_ce_penetrators[] = {"rhs_ammo_heat_tandem", "rhs_ammo_9m128_penetrator"};
		maxControlRange = 5000;	// max range for manual control, 0 = no control (passive weapon)
	};
	
	class rhs_ammo_9m128_penetrator : rhs_ammo_9m112_penetrator {
		hit = 250;
		caliber = 53; //(800/((15*1000)/1000))
	};
	
	class rhs_ammo_9m120 : rhs_ammo_atgmBase_base {
		indirectHit = 25;
		indirectHitRange = 3.4;
	};
	//меняем дальность стрельбы ПТРК Метис
	/* class rhs_ammo_9m115: rhs_ammo_9m119
	{
		maxControlRange = 600; //=1000m
	};
	class rhs_ammo_9m131: rhs_ammo_9m115
	{
		maxControlRange = 1350; //=1500m
	};
	class rhs_ammo_9m131m: rhs_ammo_9m131
	{
		maxControlRange = 2100; //=2000m
	}; */
	class rhs_ammo_9m131m;
	class rhs_ammo_9m131f: rhs_ammo_9m131m
	{
		// maxControlRange = 2100; //=2000m
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};
	//Меняем дальность стрельбы ПТРК Конкурс
	class tu_ammo_9m113: rhs_ammo_9m113
	{
		timeToLive = 26;
		maxControlRange = 4000; //=4000m
	};
	//Меняем дальность стрельбы ПТРК Корнет
	class rhs_ammo_9m133: rhs_ammo_atgmBase_base
	{
		// maxControlRange = 5300; //=5500m
		timetolive = 45;
	};
	//Меняем дальность стрельбы ПТРК Фагот
	class tu_ammo_9m111m: rhs_ammo_9m113
	{
		maxControlRange = 2500; //=2500m	
	};
	class R_80mm_HE;	// External class reference
	
	class rhs_ammo_s8 : R_80mm_HE {
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 8;
		// submunitionAmmo = "";
		warheadName = "HEAT";
	};
	
	class rhs_ammo_s8DF : rhs_ammo_s8 {
		indirectHit = 55;
		indirectHitRange = 10;
		warheadName = "HE";
	};
	
	class rhs_ammo_s8t : rhs_ammo_s8 {
		indirectHitRange = 6;
		warheadName = "TandemHEAT";
	};
	class rhs_ammo_3ubr8;
	
	class tu_rhs_ammo_gsh30 : rhs_ammo_3ubr8 {
		hit = 100;
		indirectHit = 8;
		indirectHitRange = 2.3;
	};
	class rhs_ammo_127x107mm;
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm
	{
		//http://www.bratishka.ru/archiv/2012/06/2012_6_7.php
		//http://militera.lib.ru/manuals/nastav_kpvt/index.html
		ACE_bulletMass = 64;
		ACE_bulletLength = 158;
		ACE_caliber = 14.5;
		hit = 42; //по формуле sqrt(mass/2)*speed/5 и увеличено на 20%, как у М2
		indirectHit = 2;
		indirectHitRange = 0.2;
		//caliber = "(56/((15*988)/1000))"; //на 300 метров пробивает 20мм под углом 20 градусов с вероятностью 80%, 
		caliber = 3.2;
		tracerScale = 1.5;
		tracerStartTime = 0.075;
		tracerEndTime = 2.5;
	};
	class SubmunitionBase;
	class rhs_ammo_127x108mm_x5: SubmunitionBase
	{
		submunitionConeType[] = {"randomcenter",2};
	};
	class rhs_ammo_127x108mm_1SLT_x5: rhs_ammo_127x108mm_x5
	{
		submunitionConeType[] = {"randomcenter",2};
	};
	class rhs_ammo_bm_base;
	class rhs_ammo_bk_base : rhs_ammo_bm_base
	{
		deflecting = 0;
	};
	class rhs_ammo_20mm_AP;
	class rhs_ammo_20x139mm_AP: rhs_ammo_20mm_AP
	{
		allowagainstinfantry = 1;
		airLock = 1;
		irLock = 0;
		artilleryLock = 0;
		autoSeekTarget = 0;
		laserLock = 1;
	};
	class rhs_ammo_20x139mm_HE: rhs_ammo_20x139mm_AP
	{
		allowagainstinfantry = 1;
		airLock = 1;
		irLock = 0;
		artilleryLock = 0;
		autoSeekTarget = 0;
		laserLock = 1;
	};

	class rhs_B_762x54_Ball : B_762x51_Ball
	{
		caliber = 0.93;
	};
};


class cfgWeapons
{
	class CMFlareLauncher;
	class rhs_weap_CMFlareLauncher : CMFlareLauncher {
		modes[] = {"Single", "Burst", "FullAuto", "AIBurst"};
	};
	class rhs_weap_d81;
	class rhs_weap_2a70: rhs_weap_d81
	{
		modes[] = {"player","close","short","medium","far"};
		//ballisticsComputer = "2+16";
		//maxZeroing = 5000;
		//autoReload = 0;

	};
	class gatling_30mm;	// External class reference
	
	class rhs_weap_yakB : gatling_30mm {
		canLock = 0;	
		class manual : Mode_FullAuto {
			dispersion = 0.006;
		};
	};
	class RHS_weap_GSh30;
	class RHS_Weap_GSh301 : RHS_weap_GSh30 {
		canLock = 0;
		magazines[] = {"rhs_mag_gsh30_ofzt_750","rhs_mag_gsh30_ofzt_250","rhs_mag_gsh30_bt_750","rhs_mag_gsh30_bt_250","tu_rhs_mag_gsh30_ofzt_180","rhs_mag_gsh30_bt_150", "rhs_mag_gsh30_mixed_150"};
	};
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher{};
	class GP25_Base: UGL_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundClosure[] = {};
				begin1[] = {"rhsafrf\addons\rhs_sounds\ugl\GP-25_1",2.25,1,200};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ugl\GP-25_2",2.25,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F{};
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class M203_GL: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundClosure[] = {};
					begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1.8,1,200};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1.8,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
		class M320_GL: M203_GL
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundClosure[] = {};
					begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1.8,1,200};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1.8,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
	};

	class CannonCore;
	class RHS_weap_AZP23: CannonCore
	{
	    weaponLockSystem = 8;
		class manual: CannonCore
		{
			dispersion = 0.01;
		};
	};
	class rhs_weap_M197: gatling_30mm
	{
		class manual;
	};
	class rhs_weap_gi2: rhs_weap_M197
	{
		dispersion = 0.008;
		canLock = 2;
		class HE: rhs_weap_M197
		{
			class manual: manual
			{
				dispersion = 0.008;
			};
			dispersion = 0.008;
			canLock = 2;
		};
		class AP: rhs_weap_M197
		{
			class manual: manual
			{
				dispersion = 0.008;
			};
			dispersion = 0.008;
			canLock = 2;
		};
	};
	/* class CannonCore;
	class RHS_weap_AZP23: CannonCore
	{
		ballisticsComputer = 1;
	}; */
	
	class autocannon_30mm_CTWS;
	class rhs_weap_2a42_base: autocannon_30mm_CTWS
	{
		magazineReloadTime = 2;
	};
	class RHS_Weap_GSh23L: RHS_weap_GSh30
	{
		ballisticsComputer = 0;
		canLock = 0;
	};
};
class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle 
	{
		class NewTurret;
		class HitPoints;
		class Sounds;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};
	class Air;	// External class reference
	class Plane : Air {
		class EventHandlers;	// External class reference
	};
	
	class Plane_Base_F : Plane {
		class Components;
	};
	
	class Plane_CAS_02_base_F;	// External class reference
	
	class O_Plane_CAS_02_F : Plane_CAS_02_base_F {
		class EventHandlers;	// External class reference
		class components;
	};
	class Helicopter : Air {
		class Turrets;	// External class reference
	};
	
	class Helicopter_Base_F : Helicopter {
		class Turrets : Turrets {
			class MainTurret;	// External class reference
		};
		class Eventhandlers;	// External class reference
		class ViewOptics;	// External class reference
	};
	class Helicopter_Base_H : Helicopter_Base_F 
	{
		class Components;
		
		class Turrets : Turrets {
			class CopilotTurret;	// External class reference
		};
	};
	
	class Heli_Transport_02_base_F : Helicopter_Base_H 
	{
		class Components;
		};
	class Heli_Light_02_base_F : Helicopter_Base_H {
		class Components;
		class Turrets : Turrets {
			class CopilotTurret;	// External class reference
			class MainTurret;	// External class reference
		};
	};
	
	class Heli_Attack_02_base_F : Helicopter_Base_F 
	{
		class Components;
		class AnimationSources;
	};
	class RHS_Mi24_base : Heli_Attack_02_base_F {
		altFullForce = 1400; //Статический потолок
		altNoForce = 4950; //Практический потолок
		/* class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        }; */
		weapons[]=
		{
			"CMFlareLauncher",
			"rhs_weap_gsh30"
		};
		magazines[]=
		{
			"rhs_mag_gsh30_ofzt_750",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radarType = 8;
		radarTargetSize=1;
		visualTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Sling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Sling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete CrewDisplay;
				};
			};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				ace_fcs_Enabled = 0;
				class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Sling_Left {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete CrewDisplay;
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Sling_Right {
				defaultDisplay="EmptyDisplay";
				class Components: components
				{
				delete CrewDisplay;
				};
			};
		};
			
			};
		};
	};
	class RHS_Mi24V_Base: RHS_Mi24_base
	{
		weapons[]=
		{
			"CMFlareLauncher",
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_yakB",
					"tu_FakeWeapon"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_1SLT_1470",
					"FakeMagazine"
				};
		    };	// fakeweapon это трекер tu_atgm, он нужен для работы отображения куда смотрит стрелок (пилоту), а также отображения и работы ПР	
	    };
    };
	class RHS_Mi24D_Base: RHS_Mi24V_Base
	{
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rhs_weap_yakB",
					"rhs_weap_2K8_launcher",
					"tu_FakeWeapon"
				};
				magazines[]=
				{
					"rhs_mag_127x108mm_1SLT_1470",
					"FakeMagazine"
				};
			};
		};
    };		
	
	class RHS_Mi24V_VVS_Base: RHS_Mi24V_base {};
	class tu_mi24VP_base:  RHS_Mi24V_VVS_Base
	{
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		side = 0;
		displayName = "Mi-24VP";
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi24V_vvs.paa";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine"};
		class AnimationSources: AnimationSources
		{
			class Gatling_1
			{
				source = "revolving";
				weapon = "RHS_Weap_GSh23L";
			};
			class muzzle_rot_hmg
			{
				weapon = "RHS_Weap_GSh23L";
				source = "ammorandom";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"RHS_Weap_GSh23L","tu_FakeWeapon"};
				magazines[] = {"rhs_mag_upk23_mixed","FakeMagazine"};
			};
		};		
	};
	class tu_mi24vp_vv: tu_mi24VP_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		faction = "rhs_faction_vv";
	};
	class tu_mi24vp_vvs: tu_mi24VP_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		faction = "rhs_faction_vvs";
	};
	class tu_mi24vp_vdv: tu_mi24VP_base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		faction = "rhs_faction_vdv";
	};
	class rhsgref_cdf_Mi35: RHS_Mi24V_VVS_Base
	{
		class Components;
	};
	class rhsgref_mi24g_base: rhsgref_cdf_Mi35
	{
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
			db+10,
			1
		};
    };
	class tu_rhsgref_mi24g_base: rhsgref_mi24g_base
	{
	    class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_default_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_default_Right {};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "RHS_RscOptics_Heli_Attack_01_gunner";
			class Components: Components
			{
				class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mh6_Left {};
				class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mh6_Right {};
			};
		 };
	   };
	};
	
	class rhsgref_mi24g_CAS: tu_rhsgref_mi24g_base {};
	
	class RHS_Mi8_base : Heli_Light_02_base_F {
		altFullForce = 1900; //Статический потолок
		altNoForce = 4500; //Практический потолок
		weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radarType = 0;
		radarTargetSize=1;
		LockDetectionSystem = 0;
		incomingMissileDetectionSystem = 8;
		driverCanEject = 1;
		gunnerCanSee = 2+4+8+16;
		driverCanSee = 2+4+8+16;
		class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Sling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
						delete CrewDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Sling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
						delete CrewDisplay;
					};
				};
		        };
		class Turrets : Turrets {
			class CopilotTurret : CopilotTurret {
				canEject = 1;
				class Components: Components
		        {
			    class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Sling_Left {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
						delete CrewDisplay;
					};
				};
			    class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Sling_Right {
					defaultDisplay="EmptyDisplay";
					class Components: components
				    {
						delete CrewDisplay;
					};
				};
		        };
			};
		};
	};
	class rhs_mi28_base: Heli_Attack_02_base_F
	{
		altFullForce = 3700; //Статический потолок
		altNoForce = 5700; //Практический потолок
		radartype = 4;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
			db+10,
			1
		};
	};
	class rhs_mi28n_base: rhs_mi28_base
	{
		class Components;
	};
	class tu_rhs_mi28n_base: rhs_mi28n_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
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
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 90;
						angleRangeVertical = 50;
						minTrackableSpeed = 7.5;
					};	
					class ActiveRadarSensorComponent_Air: SensorTemplateActiveRadar
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
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 30;
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
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				ace_fcs_Enabled = 0;
				
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
				};
			};
		};
	};
	
	class RHS_Ka52_base: Heli_Attack_02_base_F
	{
		altFullForce = 3600; //Статический потолок
		altNoForce = 5500; //Практический потолок
		weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		radartype = 4;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
		soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
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
	class tu_RHS_Ka52_base: RHS_Ka52_base
	{
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
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
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 60;
						minTrackableSpeed = 7.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
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
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minTrackableATL = 20;
						angleRangeHorizontal = 360;
						angleRangeVertical = 60;
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
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				ace_fcs_Enabled = 0;
				
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
				};
			};
		};
	};
	class rhs_mi28n_S13_base: tu_rhs_mi28n_base {};
	class rhs_mi28n_vvsc: tu_rhs_mi28n_base {};
	
	class rhs_mi28n_vvs: tu_rhs_mi28n_base 
	{
		class AnimationSources;
		class radome_hide;
		class Components;
		class Turrets;
		class MainTurret;
	};
    class tu_rhs_mi28n_vvs: rhs_mi28n_vvs
	{
		displayName="$STR_MI28N_nowarning";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	class RHS_Ka52_vvsc: tu_RHS_Ka52_base {};
	
	class RHS_Ka52Black_base: RHS_Ka52_base
	{
	class Components;
    };
	class RHS_Ka52_vvs: RHS_Ka52Black_base
	{
	    class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
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
							minRange = 6000;
							maxRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 60;
						minTrackableSpeed = 7.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
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
						typeRecognitionDistance = 0;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minTrackableATL = 20;
						angleRangeHorizontal = 360;
						angleRangeVertical = 60;
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
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
		};
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				ace_fcs_Enabled = 0;
				
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: vdisp_Radar_mi28_Left {};
			        class VehicleSystemsDisplayManagerComponentRight: vdisp_Radar_mi28_Right {};
				};
			};
		};
	};	
	class rhs_mi8amt_base : rhs_mi8_base {};
	class tu_RHS_Ka52_vvs: RHS_Ka52_vvs
	{
		displayName="$STR_KA52_nowarning";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	class tu_rhs_mi28n_vvs_noradar: rhs_mi28n_vvs
	{
		displayName="$STR_MI28N_noradar_nowarning";
		radarType = 8;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		class AnimationSources: AnimationSources {
		class radome_hide: radome_hide 
		{
				initPhase=1;
		};
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
	
	class tu_rhs_mi28n_vvs_noradar2: rhs_mi28n_vvs
	{
		displayName="$STR_MI28N_noradara";
		class AnimationSources: AnimationSources {
		class radome_hide: radome_hide 
		{
				initPhase=1;
		};
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
	
	class rhs_mig29s_base: Plane_Base_F {
		attenuationEffectType = "HeliAttenuation";
		
	    weapons[]=
		{
			"rhs_weap_MASTERSAFE",
			"CMFlareLauncher",
			"rhs_weap_GSh301"
		};
		magazines[]=
		{
			"rhs_mag_gsh30_mixed_150",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
	    soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
			db+10,
			1
		};
	};
	
	class tu_rhs_mig29s_base: rhs_mig29s_base {
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
				    delete IRSensorComponent;
					class ActiveRadarSensorComponent_Air: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 10000;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						aimDown = 0;
						minTrackableATL = 20;
					};
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
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_Right {};
		};
	};
	
    class rhs_mig29s_vvs: tu_rhs_mig29s_base {};
	
	class rhs_mig29sm_base: rhs_mig29s_base {
		class Components;
	};
	
	class tu_rhs_mig29sm_base: rhs_mig29sm_base {
	    LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
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
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 10000;
							maxRange = 10000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 10000;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						angleRangeHorizontal = 120;
						angleRangeVertical = 120;
						aimDown = 0;
						minTrackableATL = 20;
					};
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
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_Right {};
		};
	};
	
	class rhs_mig29sm_vvs: tu_rhs_mig29sm_base {};

    class tu_rhs_mig29s_vvs: rhs_mig29sm_vvs {
		displayname = "$STR_mig29k";
	};
	
	 class tu_rhs_mig29s_vvs_nowarning: tu_rhs_mig29s_vvs {
		displayname = "$STR_mig29k_nowarn";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
	};
	
	class RHS_su25_base : O_Plane_CAS_02_F {
		displayname = "$STR_RHS_SU25_Name";
		radarType = 0;
		radarTargetSize=1;
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = 8;
		weapons[] = {"CMFlareLauncher","rhs_weap_klen_ps","rhs_weap_GSh302"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","rhs_lasermag","rhs_mag_gsh30_bt_250"};
		soundLocked[]=
		{
			"\sg_rhs_AFRF_fix\Untitled.ogg",
			db+12,
			1
		};
		soundIncommingMissile[]=
		{
			"\sg_rhs_AFRF_fix\SPOIR.ogg",
			db+10,
			1
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
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
			class VehicleSystemsDisplayManagerComponentLeft: vdisp_lasersensor_Left {};
			class VehicleSystemsDisplayManagerComponentRight: vdisp_lasersensor_Right {};
		};
	};	
	
	class RHS_Su25_VVS_Base : RHS_Su25_base {};
	
	class RHS_Su25SM_vvs : RHS_Su25_VVS_Base {
		displayname = "$STR_RHS_SU25_Name";
	};
	
	class TU_RHS_Su25SM_vvs : RHS_Su25_VVS_Base {
		displayName = "$STR_RHS_SU25SM_Name";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
	};
	
	class RHS_Su25SM_KH29_vvs : RHS_Su25SM_vvs {
		scope = 2;
	};
	
	class RHS_Su25SM_vvsc : RHS_Su25SM_vvs {};
	
	class TU_RHS_Su25SM_vvsc : RHS_Su25SM_vvs {
		displayName = "$STR_RHS_SU25SM_Name";
		LockDetectionSystem = 8;
		incomingMissileDetectionSystem = "8 + 16";
	};
	
	class RHS_Su25SM_KH29_vvsc : RHS_Su25SM_vvsc {
		scope = 2;
	};
	class O_Heli_Light_02_unarmed_F;
	class rhs_ka60_grey: O_Heli_Light_02_unarmed_F
	{
		class PilotCamera
        {
            class OpticsIn
            {
                delete Wide;
            };
        };
	};
	class rhs_a3t72tank_base: Tank_F
	{
		radarType = 8;
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
		};
		class ViewPilot: ViewPilot
		{
			visionMode[] = {"Normal","NVG"};
		};
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				visionMode[] = {"Normal","NVG"};
			};
		};
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponT72_FCS";
				soundServo[] = {"sg_sound_file\soundTurret\soundServo.ogg",0.562341,1,30}; //звуки поворота башни
				soundServoVertical[] = {"sg_sound_file\soundTurret\soundServoVertical.ogg",0.562341,1,30};
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponSosnaU_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t90_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t90a_tv: rhs_t90_tv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponPlissa_t90_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_tank_base: Tank_F
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
				soundServoVertical[] = {"sg_sound_file\soundTurret\soundServoVertical.ogg",0.562341,1,30};
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80b: rhs_tank_base
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80bv: rhs_t80b
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80a: rhs_t80bv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80u_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80u: rhs_t80a
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80u_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80uk: rhs_t80u
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponAgava_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class  rhs_t80ue1: rhs_t80a
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponPlissa_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        }; 
	};
	class rhs_t80um: rhs_t80u
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponAgava_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        }; 
	};/*
	class rhs_bmp1tank_base: Tank_F
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas";    
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmp_base: rhs_bmp1tank_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas"; 
				class Turrets{};   
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas";  
				class Turrets{};   
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};*/
	class rhs_bmp1tank_base: Tank_f {};
	class rhs_bmp_base: rhs_bmp1tank_base {};
	class rhs_bmp1_vdv: rhs_bmp_base {};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		radarType = 8;
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				 turretInfoType = "sg_RHS_RscWeaponBPK42_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_bmd_base: Tank_F
	{
		driverWeaponsInfoType = "sg_compas";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret: MainTurret
			{
				turretInfoType = "sg_compas";
			};
			class CommanderOptics: NewTurret 
            {
                turretInfoType = "sg_compas";      
            };
        };  
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		driverWeaponsInfoType = "sg_compas";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_compas";    
            };
			class CommanderOptics1: CommanderOptics
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		driverWeaponsInfoType = "sg_compas";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponBPK42_FCS";
                class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_bmd2: rhs_bmd2_base {};
	class rhs_bmd2m: rhs_bmd2
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";      
            };
        };  
	};
	class rhs_a3spruttank_base: Tank_f 
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponSprutSD_FCS";
				soundServo[] = {"sg_sound_file\soundTurret\soundServo.ogg",0.562341,1,30}; //звуки поворота башни
				soundServoVertical[] = {"sg_sound_file\soundTurret\soundServoVertical.ogg",0.562341,1,30};
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeapon1k13_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmd4_vdv: rhs_a3spruttank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponESSA_commander_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3tank_base: Tank_f
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		radarType = 8;
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeapon1k13_bmp3_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3_msv: rhs_bmp3tank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeapon1k13_bmp3_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3m_msv: rhs_bmp3tank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        }; 
	};
	class rhs_zsutank_base: rhs_a3t72tank_base
	{
		irtarget = 1;
		irScanGround = 0;		
		ace_fcs_Enabled = 0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
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
						aimDown = 0;
						angleRangeHorizontal = 75;
						angleRangeVertical = 60;
						minSpeedThreshold = -1e10; //минимальная скорость распознования
						maxSpeedThreshold = 333,33; //максимальная скорость распознования (м/с)
						minTrackableATL= 10; //минимальная высота распознования
						maxTrackableATL= 1e10; //максимальная высота распознования (нету лимита)
						minTrackableSpeed = -166,67; //минимальная скорость захвата
						maxTrackableSpeed = 166,67; //максимальная скорость захвата цели
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{	
				gunnerForceoptics = 1;
				ace_fcs_Enabled = 0;
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
					class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						
						gunnerForceoptics = 1;
						class Components: Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
							class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
						};
					};
				};
			};
		};
	};
	class rhs_zsu234_aa: rhs_zsutank_base
	{
		irScanGround = 0;		
		ace_fcs_Enabled = 0;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
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
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						aimDown = 0;
						minSpeedThreshold = 0;
						maxSpeedThreshold = 0;
						minTrackableATL= 10;
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
			class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{	
				ace_fcs_Enabled = 0;
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
					class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components: Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_zsu23_Left {};
							class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_zsu23_Right {};
						};
					};
				};
			};
		};
	};
};