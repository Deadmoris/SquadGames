
class RscPicture;
class RscControlsGroup;

class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};

	class RDS_RscUnitInfoCar: RscUnitInfo
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RDS_fnc_migacze";
		controls[] = {"RDS_Car_handler","WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel"};

		class RDS_Car_handler: RscPicture {idc=54319;};
	};
	class RDS_RscUnitInfoBike: RscUnitInfo
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RDS_fnc_handsignals";
		controls[] = {"RDS_Bike_handler","WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel"};

		class RDS_Bike_handler: RscPicture {idc=54329;};
	};
	class rds_rscOptics_janta: RscWeaponZeroing
	{
		idd = 300;
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RDS_fnc_handler_janta;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			idc = 170;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,0,0,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,0,0,0};
				height = 0.001;
			};
			class Controls
			{
				class RHS_pso_handler: RscPicture {idc=9978;};
			};
		};
	};
	class rds_rscOptics_lts1: rds_rscOptics_janta
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RDS_fnc_handler_lts1;";
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls
			{
				class RHS_pso_handler: RscPicture {idc=9977;};
			};
		};
	};
};