class CfgPatches
{
	class sg_hud_display
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Ui_F", "A3_Data_F","A3_Functions_F","A3_UiFonts_F", "rhsusf_optics", "rhsusf_main","rhs_optics"};
		author = "Kartaviy";
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
class ScrollBar;
class RscControlsGroup;


class RscInGameUI
{
    class RscUnitInfo;	
	class sg_compas: RscUnitInfo //Обычный горизонтальный компас
	{
		idd = 300;
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class sg_compas2: RscUnitInfo //Обычный горизонтальный компас + зероинг
	{
		idd = 300;
		controls[] = {"CA_IGUI_elements_group", "CA_Distance"};
		class CA_DistanceText: RscOpticsText
				{
					idc = -1;
					style = 2;
					colorText[] = {1,0,0,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = 0;
					y = "(SafezoneY+SafezoneH) - 0.05";
					w = 1;
					h = 0.05;
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 198;
					style = 2;
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					x = 0;
					y = "(SafezoneY+SafezoneH) - 0.195";
					w = 1;
					h = 0.05;
				};
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
	class sg_RHS_RscWeaponM1_FCS: RscUnitInfo //Добавляем новый худ для стрелка М1А1
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_rF_M1";
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
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					color[] = {0.95,0.95,0.95,1};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					sizeEx = "0.038*SafezoneH";
					font = "PuristaSemibold";
					text = "4.5";
					x = "43.85 *   (0.01875 * SafezoneH)";
					y = "19.6 *   (0.025 * SafezoneH)";
					w = "0*   (0.01875 * SafezoneH)";
					h = "0 *   (0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 2;
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					x = 0;
					y = "(SafezoneY+SafezoneH) - 0.195";
					w = 0;
					h = 0;
				};
				class RangeDigit1: RscPicture
				{
					idc = 1;
					x = "24.5 * (0.01875 * Safezoneh)";
					y = "36.7 * (0.025 * SafezoneH)";
					w = "1.5 * (0.01875 * SafezoneH)";
					h = "1.5 * (0.025 * SafezoneH)";
					text = "";
					colorBackground[] = {0,0,0,0};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					colorText[] = {1,1,1,1};
					font = "PuristaSemibold";
					sizeEx = 0;
					waitForLoad = 0;
				};
				class RangeDigit2: RangeDigit1
				{
					idc = 2;
					x = "25.5 * (0.01875 * Safezoneh)";
				};
				class RangeDigit3: RangeDigit1
				{
					idc = 3;
					x = "26.5 * (0.01875 * Safezoneh)";
				};
				class RangeDigit4: RangeDigit1
				{
					idc = 4;
					x = "27.5 * (0.01875 * Safezoneh)";
				};
				class Ready: RangeDigit1
				{
					idc = 5;
					x = "23.7 * (0.01875 * Safezoneh)";
					y = "35.8 * (0.025 * SafezoneH)";
					w = "0.8 * (0.01875 * SafezoneH)";
					h = "0.8* (0.025 * SafezoneH)";
				};
				class Multiple: RangeDigit1
				{
					idc = 6;
					x = "24.95 * (0.01875 * Safezoneh)";
					y = "35.3 * (0.025 * SafezoneH)";
					w = "3.8 * (0.01875 * SafezoneH)";
					h = "1.8* (0.025 * SafezoneH)";
				};
				class Fault: RangeDigit1
				{
					idc = 7;
					x = "29 * (0.01875 * Safezoneh)";
					y = "35.9 * (0.025 * SafezoneH)";
					w = "1.2 * (0.01875 * SafezoneH)";
					h = "1.2* (0.025 * SafezoneH)";
				};
			};
		};
	};
	class sg_m1a1_commander: RscUnitInfo //Добавляем новый худ на командира М1А1.
	{
		idd = 300;
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret2.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_m2a2_commander_hud //Добавляем худ на командира в бредли
	{
		idd = 300;
		controls[] = {"CA_Distance", "CA_IGUI_elements_group"};
		class CA_Distance: RscText
				{
					idc = 198;
					style = 0;
					sizeEx = "0.028 * SafezoneH";
					font = "PuristaSemibold";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "25.25 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
					y = "30 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
					w = "3.6 * 		(0.01875 * SafezoneH)";
					h = "1.3 * 		(0.025 * SafezoneH)";
				};
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
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					text = "4.5";
					x = "43.85 *   (0.01875 * SafezoneH)";
					y = "19.6 *   (0.025 * SafezoneH)";
					w = "0*   (0.01875 * SafezoneH)";
					h = "0 *   (0.025 * SafezoneH)";
				};
			};	
		};
	};
    class sg_RHS_RscODS_ISU: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_ODS_ISU_handler";
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
                class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsText
				{
					idc = 198;
					style = 2;
					sizeEx = "0.075*SafezoneH";
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 0;
					font = "rhsusf_digital_font";
					text = "- - - -";
					x = "23.25 *   		(0.01875 * SafezoneH)";
					y = "35 *   		(0.025 * SafezoneH)";
					w = "7 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: RscText
				{
					idc = 154;
					w = "0 * 		(0.01875 * SafezoneH)";
					h = "0 * 		(0.025 * SafezoneH)";
				};
				class Indicator_HE: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\HE_co.paa";
					x = "19.25 * 			(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class Indicator_TOW: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.2941,0.2941,0.2941,0.65};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\TOW_co.paa";
					x = "21.25 * 			(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class Indecator_762: RscPicture
				{
					idc = 3;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.2941,0.2941,0.2941,0.65};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\762_co.paa";
					x = "30.25 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class Indicator_AP: RscPicture
				{
					idc = 4;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.2941,0.2941,0.2941,0.65};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\rhsusf\addons\rhsusf_optics\data\tex\ISU\AP_co.paa";
					x = "32.25 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};
				class Reticle: RscPicture
				{
					idc = 5;
					style = "0x30 + 0x800";
					sizeEx = "0.028*SafezoneH";
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "a3\weapons_f\reticle\data\optics_gunner_mtb_01_ca.paa";
					x = "14.65 * 		(0.01875 * SafezoneH)";
					y = "8 * 		(0.025 * SafezoneH)";
					w = "24 * 		(0.01875 * SafezoneH)";
					h = "24 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_RHS_RscIBAS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_handler";
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 198;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "2456";
					x = "27* 		(0.01875 * SafezoneH)";
					y = "33.5 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class FireSolutionValid: RscPicture
				{
					idc = 200;
					text = "rhsusf\addons\rhsusf_optics\data\tex\rhs_ibas_lase_bar.paa";
					textSize = "0.02*SafezoneH";
					x = "27.15 * 		(0.01875 * SafezoneH)";
					y = "32.8 * 		(0.025 * SafezoneH)";
					w = "1.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {1,1,1,1};
					x = "33.1 * 		(0.01875 * SafezoneH)";
					y = "29 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class TextSightType: RscText
				{
					idc = 1008;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "IBAS";
					x = "7* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextRefreshRate: RscText
				{
					idc = 154;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "60HZ";
					x = "47* 		(0.01875 * SafezoneH)";
					y = "2.5 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextSightMode: RscText
				{
					idc = 3;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "TV";
					x = "8.75* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "1.25 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextWeapon: RscText
				{
					idc = 4;
					style = 160;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "HE";
					x = "23* 		(0.01875 * SafezoneH)";
					y = "33.5 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextLowAmmo: RscText
				{
					idc = 5;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "";
					x = "30* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_RHS_RscCIV: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this spawn RHSUSF_fnc_IBAS_CIV_handler";
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscText
				{
					idc = 198;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "2456";
					x = "26.5* 		(0.01875 * SafezoneH)";
					y = "35.5 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {1,1,1,1};
					x = "33.1 * 		(0.01875 * SafezoneH)";
					y = "31 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "rhsusf\addons\rhsusf_optics\data\tex\turretindicatorhull_bradley.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret_RWS.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret_RWS.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class TextSightType: RscText
				{
					idc = 1008;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "CIV";
					x = "7* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "2.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextSightType2: RscText
				{
					idc = 1008;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "CIV";
					x = "26* 		(0.01875 * SafezoneH)";
					y = "33 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextRefreshRate: RscText
				{
					idc = 154;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "60HZ";
					x = "47* 		(0.01875 * SafezoneH)";
					y = "2.5 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextSightMode: RscText
				{
					idc = 3;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "TV";
					x = "8.75* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "1.25 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextWeapon: RscText
				{
					idc = 4;
					style = 160;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "HE";
					x = "23.75* 		(0.01875 * SafezoneH)";
					y = "35.5 * 		(0.025 * SafezoneH)";
					w = "2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextLowAmmo: RscText
				{
					idc = 5;
					style = 0;
					sizeEx = "0.02*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "rhsusf_digital_font_var";
					text = "";
					x = "30* 		(0.01875 * SafezoneH)";
					y = "36.5 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_RHS_RscWeaponESSA_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_ESSA";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					font = "PuristaLight";
					sizeEx = "0.018*SafezoneH";
					x = "28.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1.0};
					shadow = 0;
					font = "PuristaMedium";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
					x = "9.15 *   (0.01875 * Safezoneh)";
					y = "4.5 *   (0.025 * SafezoneH)";
					w = "35 *   (0.01875 * SafezoneH)";
					h = "35 *   (0.025 * SafezoneH)";
				};
				class RHS_SSU_ReadyText: RscEdit
				{
					idc = 6;
					sizeEx = "0.018*SafezoneH";
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					colorSelection[] = {0,0,0,1};
					font = "PuristaMedium";
					text = "ССУ ВКЛ";
					style = 2;
					shadow = 0;
					type = 0;
					x = "12.14 *   (0.01875 * SafezoneH)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "2.7 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_ModeText: RHS_SSU_ReadyText
				{
					idc = 5;
					x = "35.14 *   (0.01875 * SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "ОСН";
				};
				class RHS_AutoTrackerText: RHS_SSU_ReadyText
				{
					idc = 21;
					x = "35.14 *   (0.01875 * SafezoneH)";
					y = "11.84 *   (0.025 *    SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "АСЦ";
				};
				class RHS_AutoTrackerMode: RHS_AutoTrackerText
				{
					idc = 22;
					y = "13.14 *   (0.025 * SafezoneH)";
					text = "ВЫКЛ";
				};
				class RHS_Gun_ReadyText: RHS_ModeText
				{
					idc = 2;
					x = "16.14 *   (0.01875 * SafezoneH)";
					text = "ГОТ";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "Б";
					font = "PuristaMedium";
					x = "21.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "1.2 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "----";
					font = "PuristaMedium";
					w = "3.5 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_RHS_RscWeaponESSA_commander_FCS: sg_RHS_RscWeaponESSA_FCS
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_ESSA_commander";
        idd = 300;
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
    class sg_RHS_RscWeapon1k13_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_sprut";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "16.98 *   (0.01875 * Safezoneh)";
					y = "-3.75 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					type = 13;
					size = "0.039*SafezoneH";
					shadow = 1;
					x = "25.16 *   (0.01875 * Safezoneh)";
					y = "3.45 *   (0.025 * SafezoneH)";
					w = "2.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
					class Attributes
					{
						font = "rhs_digital_font";
						color = "#ff0000";
						align = "center";
						shadow = "false";
					};
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
	};
    class sg_RHS_RscWeaponSprutSD_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sprutsd";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\a3\weapons_f\acc\data\collimdot_red_ca.paa";
					x = "25.85 *   (0.01875 * Safezoneh)";
					y = "19.27 *   (0.025 * SafezoneH)";
					w = "1.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "16.98 *   (0.01875 * Safezoneh)";
					y = "-3.75 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					x = "26.18 *   (0.01875 * Safezoneh)";
					y = "3.45 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight: RscPicture
				{
					idc = 5;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "rhs_digital_font";
					colorText[] = {0.5,1,1,0};
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
					x = "12.08 *   (0.01875 * Safezoneh)";
					y = "5.55 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight_Moving: RHS_NightSight
				{
					idc = 6;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
    class sg_RHS_RscWeaponTKN3_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call RHS_fnc_sight_TKN3";
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
                 class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 154;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class RHS_ControlNumber: CA_OpticsZoom
				{
					idc = 1000;
					text = "RHS_TKN3";
				};
			};
		};
	};
	class sg_RHS_RscWeapon1k13_bmp3_FCS: sg_RHS_RscWeapon1k13_FCS
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1k13_3s_bmp3";
	};
    class sg_RHS_RscWeaponBPK42_FCS: RscUnitInfo
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
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class RDS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_bpk_1_42_sight.paa";
					x = "13.4 *   (0.01875 * Safezoneh)";
					y = "3.66 *   (0.025 * SafezoneH)";
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
					x = "14.3 *   (0.01875 * SafezoneH)";
					y = "7.26 *   (0.025 * SafezoneH)";
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
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
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
    class sg_RHS_RscWeaponT72_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_rF_t72";
		controls[] = {"CA_Distance","CA_IGUI_elements_group","CA_OpticsZoom"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc = 258;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\rhsafrf\addons\rhs_t72\data\RF\TPD_K1_lasermark_6x.paa";
					x = "26.4 *   (0.01875 * Safezoneh)";
					y = "19.85 *   (0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
			};
		};
		class CA_Distance: RscOpticsValue
		{
			idc = 151;
			style = 2;
			colorText[] = {1,0.15,0.15,0.65};
			shadow = 0;
			font = "EtelkaMonospacePro";
			x = 0;
			y = "(SafezoneY+SafezoneH) - 0.195";
			w = 0;
			h = 0;
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
			};
		};
	};
    class sg_RHS_RscWeaponSosnaU_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_sosnaU";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					font = "PuristaLight";
					sizeEx = "0.018*SafezoneH";
					x = "28.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1.0};
					shadow = 0;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
					x = "9.15 *   (0.01875 * Safezoneh)";
					y = "4.5 *   (0.025 * SafezoneH)";
					w = "35 *   (0.01875 * SafezoneH)";
					h = "35 *   (0.025 * SafezoneH)";
				};
				class RHS_SSU_ReadyText: RscEdit
				{
					idc = 6;
					sizeEx = "0.018*SafezoneH";
					colorBackground[] = {0,0,0,1};
					colorText[] = {1,1,1,1.0};
					colorSelection[] = {0,0,0,1};
					text = "ССУ ВКЛ";
					font = "PuristaMedium";
					style = 2;
					shadow = 0;
					type = 0;
					x = "12.14 *   (0.01875 * SafezoneH)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "2.7 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_AutoTrackerText: RHS_SSU_ReadyText
				{
					idc = 21;
					x = "35.14 *   (0.01875 * SafezoneH)";
					y = "11.84 *   (0.025 *    SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "АСЦ";
				};
				class RHS_AutoTrackerMode: RHS_AutoTrackerText
				{
					idc = 22;
					y = "13.14 *   (0.025 * SafezoneH)";
					text = "ВЫКЛ";
				};
				class RHS_ModeText: RHS_SSU_ReadyText
				{
					idc = 5;
					x = "35.14 *   (0.01875 * SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "ОСН";
				};
				class RHS_Gun_ReadyText: RHS_ModeText
				{
					idc = 2;
					x = "16.14 *   (0.01875 * SafezoneH)";
					text = "ГОТ";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "Б";
					font = "PuristaMedium";
					x = "21.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "1.2 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "----";
					font = "PuristaMedium";
					w = "3.5 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
    class sg_rhs_gui_optic_t80_rangefinder: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_1G42";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "18.65 *   (0.01875 * Safezoneh)";
					y = "30.45 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
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
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "rhs_digital_font";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42_moving_ca.paa";
					x = "10.32 *   (0.01875 * Safezoneh)";
					y = "-3.95 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_ReadyLight: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42_readylight_ca.paa";
					x = "18.75 *   (0.01875 * SafezoneH)";
					y = "34.00 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					x = "21.85 *   (0.01875 * Safezoneh)";
					y = "36 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight: RHS_Sight
				{
					idc = 5;
					colorText[] = {0.5,1,1,0};
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
					x = "12.08 *   (0.01875 * Safezoneh)";
					y = "5.55 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight_Moving: RHS_NightSight
				{
					idc = 6;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
	class sg_rhs_gui_optic_t80u_rangefinder: sg_rhs_gui_optic_t80_rangefinder
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'RHS_T80B_Recoil'] call RHS_fnc_sight_1G46";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls: Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "17.65 *   (0.01875 * Safezoneh)";
					y = "30.45 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
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
					x = "43.85 * 		(0.01875 * SafezoneH)";
					y = "19.6 * 		(0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "rhs_digital_font";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
					x = "10.32 *   (0.01875 * Safezoneh)";
					y = "-3.95 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_ReadyLight: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
					x = "17.65 *   (0.01875 * SafezoneH)";
					y = "36.00 *   (0.025 * SafezoneH)";
					w = "1.7 *   (0.01875 * SafezoneH)";
					h = "1.7 *   (0.025 * SafezoneH)";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					x = "21.65 *   (0.01875 * Safezoneh)";
					y = "36 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight: RHS_Sight
				{
					idc = 5;
					colorText[] = {0.5,1,1,0};
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_b_static.paa";
					x = "12.08 *   (0.01875 * Safezoneh)";
					y = "5.55 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_NightSight_Moving: RHS_NightSight
				{
					idc = 6;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g42n_moving.paa";
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
	class sg_rhs_gui_optic_t90_rangefinder: sg_rhs_gui_optic_t80u_rangefinder
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'Recoil'] call RHS_fnc_sight_1G46";
	};
    class sg_RHS_RscWeaponAgava_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RHS_fnc_sight_agava2";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "17.65 *   (0.01875 * Safezoneh)";
					y = "30.45 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "rhs_digital_font";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
					x = "10.32 *   (0.01875 * Safezoneh)";
					y = "-3.95 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_ReadyLight: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
					x = "17.65 *   (0.01875 * SafezoneH)";
					y = "36.00 *   (0.025 * SafezoneH)";
					w = "1.7 *   (0.01875 * SafezoneH)";
					h = "1.7 *   (0.025 * SafezoneH)";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					x = "21.65 *   (0.01875 * Safezoneh)";
					y = "36 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_agava_static: RscPicture
				{
					idc = 5;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,0.8};
					shadow = 0;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_agava_static.paa";
					x = "16.14 *   (0.01875 * Safezoneh)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "20 *   (0.01875 * SafezoneH)";
					h = "20 *   (0.025 * SafezoneH)";
				};
				class RHS_Ammo_agava: CA_Distance
				{
					idc = 6;
					text = "Б";
					font = "rhs_digital_font_var";
					sizeEx = "0.022*SafezoneH";
					colorText[] = {1,1,1,0.8};
					x = "21.14 *   (0.01875 * Safezoneh)";
					y = "12.44 *   (0.025 * SafezoneH)";
					w = "1.2 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_Gun_ReadyText_agava: RHS_Ammo_agava
				{
					idc = 7;
					x = "17.24 *   (0.01875 * SafezoneH)";
					w = "4 *   (0.01875 * SafezoneH)";
					text = "ГОТ";
				};
				class RHS_Distance_agava: CA_Distance
				{
					idc = 8;
					text = "----";
					x = "18.14 *   (0.01875 * Safezoneh)";
					y = "13.54 *   (0.025 * SafezoneH)";
					w = "3.5 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					sizeEx = "0.028*SafezoneH";
					font = "rhs_digital_font_var";
					colorText[] = {1,1,1,0.8};
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
    class sg_RHS_RscWeaponPlissa_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'RHS_T80B_Recoil'] call RHS_fnc_sight_plissa";
		controls[] = {"CA_OpticsZoom","CA_IGUI_elements_group"};
		class CA_OpticsZoom: RscText
		{
			idc = 180;
			style = 1;
			colorText[] = {0.706,0.0745,0.0196,1};
			sizeEx = "0.038*SafezoneH";
			shadow = 0;
			font = "EtelkaMonospacePro";
			text = "4.5";
			x = "43.85 * 		(0.01875 * SafezoneH)";
			y = "19.6 * 		(0.025 * SafezoneH)";
			w = "0* 		(0.01875 * SafezoneH)";
			h = "0 * 		(0.025 * SafezoneH)";
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
                class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageObsTurret = "#(rgb,8,8,3)color(0,0,0,0)";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 151;
					style = 1;
					shadow = 0;
					colorText[] = {1,0,0,1.0};
					font = "rhs_digital_font";
					sizeEx = "0.039*SafezoneH";
					x = "17.65 *   (0.01875 * Safezoneh)";
					y = "30.45 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
				class CA_OpticsMode: CA_OpticsZoom
				{
					idc = 154;
				};
				class RHS_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "rhs_digital_font";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_moving_ca.paa";
					x = "10.32 *   (0.01875 * Safezoneh)";
					y = "-3.95 *   (0.025 * SafezoneH)";
					w = "29 *   (0.01875 * SafezoneH)";
					h = "29 *   (0.025 * SafezoneH)";
				};
				class RHS_ReadyLight: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_1g46_readylight_ca.paa";
					x = "17.65 *   (0.01875 * SafezoneH)";
					y = "36.00 *   (0.025 * SafezoneH)";
					w = "1.7 *   (0.01875 * SafezoneH)";
					h = "1.7 *   (0.025 * SafezoneH)";
				};
				class RHS_Ammo: CA_Distance
				{
					idc = 3;
					text = "$";
					x = "21.65 *   (0.01875 * Safezoneh)";
					y = "36 *   (0.025 * SafezoneH)";
					w = "1.9 *   (0.01875 * SafezoneH)";
					h = "1.9 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance: CA_Distance
				{
					idc = 4;
					text = "$$$$";
					w = "12.9 *   (0.01875 * SafezoneH)";
					h = "12.9 *   (0.025 * SafezoneH)";
				};
				class RHS_plissa_static: RscPicture
				{
					idc = 5;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {1,1,1,1.0};
					shadow = 0;
					text = "rhsafrf\addons\rhs_optics\vehicles\data\rhs_essa_wide.paa";
					x = "9.15 *   (0.01875 * Safezoneh)";
					y = "4.75 *   (0.025 * SafezoneH)";
					w = "35 *   (0.01875 * SafezoneH)";
					h = "35 *   (0.025 * SafezoneH)";
				};
				class RHS_SSU_ReadyText: RscEdit
				{
					idc = 6;
					sizeEx = "0.018*SafezoneH";
					colorBackground[] = {0,0,0,0};
					colorText[] = {1,1,1,1.0};
					colorSelection[] = {0,0,0,1};
					font = "rhs_digital_font_var";
					text = "ССУ ВКЛ";
					style = 2;
					shadow = 0;
					type = 0;
					x = "12.14 *   (0.01875 * SafezoneH)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "2.7 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_ModeText: RHS_SSU_ReadyText
				{
					idc = 7;
					x = "35.14 *   (0.01875 * SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "ОСН";
				};
				class RHS_Gun_ReadyText_plissa: RHS_ModeText
				{
					idc = 8;
					x = "17.24 *   (0.01875 * SafezoneH)";
					text = "ГОТ";
				};
				class RHS_AutoTrackerText: RHS_SSU_ReadyText
				{
					idc = 21;
					x = "35.14 *   (0.01875 * SafezoneH)";
					y = "11.84 *   (0.025 *    SafezoneH)";
					w = "1.6 *   (0.01875 * SafezoneH)";
					text = "АСЦ";
				};
				class RHS_AutoTrackerMode: RHS_AutoTrackerText
				{
					idc = 22;
					y = "13.14 *   (0.025 * SafezoneH)";
					text = "ВЫКЛ";
				};
				class RHS_ammo_plissa: CA_Distance
				{
					idc = 9;
					text = "Б";
					font = "rhs_digital_font_var";
					colorText[] = {1,1,1,0.8};
					sizeEx = "0.018*SafezoneH";
					x = "21.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "1.0 *   (0.01875 * SafezoneH)";
					h = "1.0 *   (0.025 * SafezoneH)";
				};
				class RHS_Distance_plissa: CA_Distance
				{
					idc = 10;
					text = "----";
					x = "28.14 *   (0.01875 * Safezoneh)";
					y = "30.14 *   (0.025 * SafezoneH)";
					w = "2.0 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					font = "rhs_digital_font_var";
					sizeEx = "0.018*SafezoneH";
					colorText[] = {1,1,1,0.8};
				};
			};
		};
		class Objects
		{
			class AmmoSelector_bgr
			{
				idc = 311;
				type = 82;
				x = "0.535152-safezoneX";
				y = "0.140276+safezoneY";
				z = 0.1;
				scale = 0.15;
				direction[] = {0,0,-1};
				up[] = {0,1,0};
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_bg_1g42.p3d";
				xBack = 0.5;
				yBack = 0.5;
				zBack = 0;
				inBack = 0;
				enableZoom = 0;
				zoomDuration = 4.001;
			};
			class AmmoSelector: AmmoSelector_bgr
			{
				idc = 312;
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_1g42.p3d";
			};
			class AutoloaderSelector: AmmoSelector_bgr
			{
				idc = 313;
				x = "0.335152-safezoneX";
				model = "rhsafrf\addons\rhs_optics\vehicles\kompas\switch_autoloader_on.p3d";
			};
		};
	};
	class sg_RHS_RscWeaponPlissa_t90_FCS: sg_RHS_RscWeaponPlissa_FCS
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); [_this select 0,'Recoil'] call RHS_fnc_sight_plissa";
	};
	class sg_RscWeapont55_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call sg_fnc_sight_t55";
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
					colorText[] = {0,0,0,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\sg_cup_vehicles\data\t55_ret_w.paa";
					x = "14 * (0.01875 * Safezoneh)";
					y = "6.25 * (0.025 * SafezoneH)";
					w = "25.5 *   (0.01875 * SafezoneH)";
					h = "25.5 *   (0.025 * SafezoneH)";
				};
				class RDS_SightBar: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0,0,0,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\sg_cup_vehicles\data\t55_mark_w.paa";
					x = "14.3 * (0.01875 * SafezoneH)";
					y = "6.26 * (0.025 * SafezoneH)";
					w = "25.5 *   (0.01875 * SafezoneH)";
					h = "25.5 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0,0,0,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "43.85 *   (0.01875 * SafezoneH)";
					y = "19.6 *   (0.025 * SafezoneH)";
					w = "0";
					h = "0";
				};
			};
		};
	};
	class sg_FCS_ACE_hud_gunner: RscUnitInfo //Худ стрелка с системой FCS от ACE3 для LAV25
	{
		idd = 300;
		controls[] = {"CA_DistanceText","CA_Distance", "CA_IGUI_elements_group"};
		class CA_DistanceText: RscOpticsText
				{
					idc = -1;
					style = 2;
					colorText[] = {1,0,0,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = 0;
					y = "(SafezoneY+SafezoneH) - 0.05";
					w = 1;
					h = 0.05;
				};
				class CA_Distance: RscOpticsValue
				{
					idc = 198;
					style = 2;
					colorText[] = {1,0.15,0.15,0.65};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					x = 0;
					y = "(SafezoneY+SafezoneH) - 0.195";
					w = 1;
					h = 0.05;
				};
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
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "PuristaSemibold";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.95,0.95,0.95,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RscText
				{
					idc = 180;
					style = 1;
					colorText[] = {0.706,0.0745,0.0196,1};
					sizeEx = "0.038*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "PuristaSemibold";
					text = "4.5";
					x = "43.85 *   (0.01875 * SafezoneH)";
					y = "19.6 *   (0.025 * SafezoneH)";
					w = "0*   (0.01875 * SafezoneH)";
					h = "0 *   (0.025 * SafezoneH)";
				};
			};	
		};
	};
};