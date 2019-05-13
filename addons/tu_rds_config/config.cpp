class CfgPatches {
	class tu_rds_config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"rds_A2_Civilians"};
	};
};

class cfgVehicles {
	class Car_F;
	class RDS_Ikarus_Base;
	class RDS_Ikarus_Civ_Base: RDS_Ikarus_Base
	{
		terrainCoef = 1.6;
		enginePower = 108;
		peakTorque = 522;
		maxSpeed = 80;
		transportSoldier = 19;
	};
	class RDS_Lada_Base: Car_F
	{
		terrainCoef = 1.6;
		enginePower = 78;
		peakTorque = 159;
		maxSpeed = 140;
	};
	/*class Wreck_base_F;
	class RDS_Lada_Wreck: Wreck_base_F
	{
		terrainCoef = 1.6;
		enginePower = 100;
		peakTorque = 253;
		maxSpeed = 100;
	};*/
	class RDS_S1203_Base: Car_F
	{
		terrainCoef = 1.6;
		enginePower = 52;
		peakTorque = 132;
		maxSpeed = 80;
	};
	class RDS_S1203_Civ_Base: RDS_S1203_Base {
		class Turrets;
	};
	class RDS_S1203_Civ_02: RDS_S1203_Civ_Base {
		class Turrets: Turrets {
			delete CargoTurret_02;
			delete CargoTurret_01;
		};
	};
	class RDS_Gaz24_Base: Car_F
	{
		terrainCoef = 1.6;
		enginePower = 70;
		peakTorque = 175;
		maxSpeed = 120;
	};
	class RDS_Golf4_Base: Car_F
	{
		terrainCoef = 1.6;
		enginePower = 66;
		peakTorque = 210;
		maxSpeed = 160;
	};
	class RDS_Octavia_Base: Car_F
	{
		terrainCoef = 1.6;
		enginePower = 100;
		peakTorque = 320;
		maxSpeed = 180;
	};
	class RDS_Zetor6945_Base: Car_F
	{
		terrainCoef = 1.6;
	};
};