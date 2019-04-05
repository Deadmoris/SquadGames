#define StabilizedInAxesNone 0
#define StabilizedInAxisX 1
#define StabilizedInAxisY 2
#define StabilizedInAxesBoth 3


class CfgPatches
{
	class A3RU_RHS_Patch
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = {
			rhs_c_a2port_armor,
			rhs_c_btr,
			rhs_c_bmp,
			rhs_c_bmd,
			rhs_optics,
			rhs_c_heavyweapons
		};
		author = "lolkij";
		authorUrl = "http://www.arma3.ru";
		version = "0.2";
		versionAr[] = {0, 2};
		versionStr = "0.2";
	};
};

class RscEdit;
class RscOpticsValue;
class RscOpticsText;
class RscIGUIText;
class RscIGUIValue;
class RscText;
class RscPicture;
class HScrollbar;
class VScrollbar;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscInGameUI
{
	class RscUnitInfo;
	class RHS_RscWeaponBPK42_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_BMP2";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "53.5 *   (0.01875 * SafezoneH)";
			h = "40 *   (0.025 * SafezoneH)";
			class controls
			{
				class RDS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\data\rhs_bpk_1_42_sight.paa";
					x = "13.4 * (0.01875 * Safezoneh)";
					y = "3.66 * (0.025 * SafezoneH)";
					w = "25.5 *   (0.01875 * SafezoneH)";
					h = "25.5 *   (0.025 * SafezoneH)";
				};
				class RDS_SightBar: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_bar.paa";
					x = "14.3 * (0.01875 * SafezoneH)";
					y = "7.26 * (0.025 * SafezoneH)";
					w = "25.5 *   (0.01875 * SafezoneH)";
					h = "25.5 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 *   (0.01875 * SafezoneH)";
					y = "19.6 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_ControlNumber: CA_OpticsZoom
				{
					idc = 1000;
					text = "RHS_BPK42";
				};
			};
		};
	};
};

#include "CfgFunctions.hpp"


class CfgVehicles {
	class Air;
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewOptics;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class EventHandlers;
		
		class AnimationSources;
		class ACE_Actions 
		{
            class ACE_MainActions;
		};
	};
	class StaticMGWeapon: StaticWeapon { };
	class Car: LandVehicle {
		class NewTurret;
		class ViewPilot;
		class ViewOptics;
	};
	class Car_F: Car {
		class AnimationSources;
		class HitPoints {
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Turrets {
			class MainTurret: Newturret {
				class HitPoints;
				class ViewOptics: ViewOptics {};
				class ViewGunner: ViewOptics {};
			};
		};
	};
	class Wheeled_APC_F: Car_F 
	{
        class NewTurret;
		class Turrets 
		{
            class MainTurret : NewTurret 
			{
                class ViewOptics;
                class Turrets 
				{
                  class CommanderOptics; 
                };
            };
        };
		class AnimationSources;
		class EventHandlers;
		class CommanderOptics;
    };
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
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
	};
	class APC_Tracked_02_base_F: Tank_F {};
	#include "CfgVehicles.hpp"

};