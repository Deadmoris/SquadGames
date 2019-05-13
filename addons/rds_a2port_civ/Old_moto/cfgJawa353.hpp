
	class RDS_JAWA353_base: Car_F
	{
		scope = 0;
		dlc = "RDS_CIV_PACK";

		model = "\rds_a2port_civ\Old_moto\Old_moto";
		icon = "\rds_a2port_civ\data\map_ico\Icon_TT650_M1030_CA.paa";
		picture = "\rds_a2port_civ\data\ico\jawa353_pic_ca.paa";
		mapSize = 3;
		displayName = "Jawa 353";
		vehicleClass = "Car";
		weapons[] = {"MiniCarHorn"};
		transportSoldier = 0;
		threat[] = {0,0,0};
		DriverAction = "RDS_Motorcycle_Driver";
		unitInfoType = "RDS_RscUnitInfoBike";
		CargoAction[] = {};
		extCameraPosition[] = {0,0,-3};
		driverLeftHandAnimName 	= "volant";
		driverRightHandAnimName = "volant";
		ejectDeadDriver = 1;

		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";
		dustFrontLeftPos = "Stopa PPL";
		dustFrontRightPos = "Stopa PPP";
		dustBackLeftPos = "Stopa ZPL";
		dustBackRightPos = "Stopa ZPP";

		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class Light_Main
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=0.85;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				name="karoserie";
				visual="camo1";
				passThrough=1;
				radius=0.15;
			};
			class HitRFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=0.175;
				passThrough=0.3;
				radius=0.1;
			};
			class HitLF2Wheel: HitRF2Wheel
			{
				name="wheel_2_1_steering";
				armor=0.175;
				passThrough=0.3;
				radius=0.1;
			};
			class HitFuel
			{
				armor=4.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
				radius=0.1;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				visual="motor";
				passThrough=0.2;
				radius=0.15;
				class DestructionEffects {
					ammoExplosionEffect = "";

					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = WeaponWreckSmoke;
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						position = "engine_smoke2";
					};
				};
			};
		};

		#include "sounds.hpp"
		#include "physX_jawa353.hpp"
		class CargoTurret;
		class Turrets {
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "RDS_passenger_Motorcycle";
				gunnerCompartments = "Comparment2";
				memoryPointsGetInGunner = "pos Cargo";
				memoryPointsGetInGunnerDir = "pos Cargo dir";
				gunnerName = "Passenger";
				proxyIndex = 1;
				maxElev = 60;
				minElev = -50;
				maxTurn = 90;
				minTurn = -90;
				isPersonTurret = 1;
			};
		};

		armor = 30;
		class Damage
		{
			tex[] = {};
			mat[] = {
				"rds_a2port_civ\Old_moto\Data\Old_moto.rvmat",
				"rds_a2port_civ\Old_moto\Data\Old_moto_damage.rvmat",
				"rds_a2port_civ\Old_moto\Data\Old_moto_destruct.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\Old_moto\data\old_moto_co.paa","rds_a2port_civ\Old_moto\data\old_moto_alfa_co.paa"};
		class EventHandlers: EventHandlers
		{
			//init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			class RDS_Civ_EH
			{
				dammaged		= "_this call rds_fnc_fuelLeak;";
			};
		};
	};
	class RDS_JAWA353_Civ_Base: RDS_JAWA353_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "RDS_woodlander_random";
		faction="rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_JAWA353_Civ_01: RDS_JAWA353_Civ_Base
	{
		EdPrev(RDS_JAWA353_Civ_01)
		scope = 2;
		AUTHOR_MACRO
	};