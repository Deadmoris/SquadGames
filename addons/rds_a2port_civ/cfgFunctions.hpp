
class CfgFunctions
{
	class RDS
	{
		recompile=1;
		tag = "RDS";
		class functions
		{
			recompile=1;
			class ikarusDoors
			{
				file = "\rds_a2port_civ\Ikarus\Ikarus_Doors.sqf";
				description = "Doors sounds for Ikarus";
			};
			class ikarusDoors_handler
			{
				file = "\rds_a2port_civ\Ikarus\Ikarus_Doors_handler.sqf";
				description = "Doors handler for Ikarus";
			};
			class gearSound
			{
				file = "\rds_a2port_civ\scripts\gearSound.sqf";
				description = "Changing gears checker";
			};
			class fuelLeak
			{
				file = "\rds_a2port_civ\scripts\fuelLeak.sqf";
				description = "Fuel leak after hit";
			};
			class wipers
			{
				file = "\rds_a2port_civ\scripts\wipers.sqf";
				description = "Generic wipers function";
			};
			class carAlarm
			{
				file = "\rds_a2port_civ\scripts\rds_carAlarm.sqf";
				description = "Car Alarm";
			};
			class carAlarm_detect
			{
				file = "\rds_a2port_civ\scripts\rds_carAlarm_detect.sqf";
				description = "Car Alarm - damage detection";
			};
			class carAlarm_detect2
			{
				file = "\rds_a2port_civ\scripts\rds_carAlarm_detect2.sqf";
				description = "Car Alarm - damage detection";
			};
			class handsignals
			{
				file = "\rds_a2port_civ\scripts\rds_handsignals.sqf";
				description = "Car Alarm - damage detection";
			};
			class containerActions
			{
				file = "\rds_a2port_civ\scripts\containerActions.sqf";
				description = "Open/close trunk on inventory access";
			};
			class syrena
			{
				file = "\rds_a2port_civ\scripts\syrena.sqf";
				description = "Emergency siren toggle";
			};
			class migacze
			{
				file = "\rds_a2port_civ\scripts\migacze.sqf";
				description = "Emergency siren toggle";
			};
			class migacze_eden
			{
				file = "\rds_a2port_civ\scripts\rds_migacze_eden.sqf";
				description = "Emergency siren toggle [eden]";
			};
			class pedals
			{
				file = "\rds_a2port_civ\scripts\rds_pedals.sqf";
				description = "Czlowiek sobie pedaluje";
			};
			class spareWheel
			{
				file = "\rds_a2port_civ\scripts\spareWheel.sqf";
				description = "Spare wheel handler";
			};
			class random_spareWheel
			{
				file = "\rds_a2port_civ\scripts\randomSpareWheel.sqf";
				description = "Random spare wheel adding";
			};
			class carLightToggle
			{
				file = "\rds_a2port_civ\scripts\rhs_lightToggle.sqf";
				description = "Car Light Toggle";
			};
			class doorHandler
			{
				file = "\rds_a2port_civ\scripts\rhs_doorhandler.sqf";
				description = "Car Light Toggle";
			};
			class handler_janta
			{
				file = "\rds_a2port_civ\scripts\rds_handler_janta.sqf";
				description = "Car Light Toggle";
			};
			class handler_lts1
			{
				file = "\rds_a2port_civ\scripts\rds_handler_lts1.sqf";
				description = "Car Light Toggle";
			};
			class addItem
			{
				file = "\rds_a2port_civ\scripts\rds_addItem.sqf";
				description = "Add ground object to inventory";
			};
		};
	};
};

