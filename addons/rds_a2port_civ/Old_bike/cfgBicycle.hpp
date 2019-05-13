
	class RDS_Old_bike_base: Car_f
	{
		dlc = "RDS_CIV_PACK";
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 0;
		tBody = 0;
		scope = 0;
		weapons[] = {"RDS_BikeHorn"};
		model = "\rds_a2port_civ\Old_bike\old_bike";
		displayName = "Old bike";
		class Library
		{
			libTextDesc = "Everyone knows what a bike is. But it looks like this particular bike knows a lot too.";
		};
		vehicleClass = "Car";
		rarityUrban = -1;
		class DestructionEffects {};
		picture = "\rds_a2port_civ\data\ico\oldbike_pic_ca.paa";
		Icon = "\rds_a2port_civ\data\map_ico\Icon_MMT_CA.paa";

		driverLeftHandAnimName 	= "volant";
		driverRightHandAnimName = "volant";
		driverLeftLegAnimName 	= "slapka_leva";
		driverRightLegAnimName = "slapka_prava";
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

		#include "sounds.hpp"
		#include "physX_bike.hpp"

		unitInfoType = "RDS_RscUnitInfoBike";

		mapSize = 3;
		isBicycle = 1;
		extCameraPosition[] = {0,0,-3};
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = 51;
				name = "karoserie";
				visual = "";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.3;
				material = 51;
				name = "palivo";
				passThrough = 0;
			};
			class HitFWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_1_damper";
				visual = "wheel_1";
				passThrough = 0;
			};
			class HitBWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_2_damper";
				visual = "wheel_2";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class Hit_wheel_1
			{
				source = "Hit";
				hitpoint = "HitFWheel";
				raw = 1;
			};
			class Hit_wheel_2: Hit_wheel_1
			{
				hitpoint = "HitBWheel";
			};
			class pedaly
			{
				animPeriod = 0.7;
				source = "user";
				initPhase = 0;
			};
		};
		threat[] = {0,0,0};
		armor = 5;
		driverAction = "RDS_Bike_Driver";
		driverInAction = "RDS_Bike_Driver";
		RDS_TurnAnimLeft = "RDS_Bike_Driver_Left";
		RDS_TurnAnimRight = "RDS_Bike_Driver_Right";
		transportSoldier = 0;
		cargoAction[] = {};
		secondaryExplosion = 0;
		//leftDustEffect = "NoDust";
		//rightDustEffect = "NoDust";
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors {
			class Light_1
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="Light_1_Start";
				direction="Light_1_End";
				hitpoint="light";
				selection="Light_5";
				size=1;
				innerAngle=30;
				outerAngle=170;
				coneFadeCoef=10;
				intensity=.2;
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
			class Light_2: Light_1
			{
				position="Light_2_Start";
				direction="Light_2_End";
			};
			class Light_3: Light_1
			{
				position="Light_3_Start";
				direction="Light_3_End";
			};
			class Light_4: Light_1
			{
				position="Light_4_Start";
				direction="Light_4_End";
			};
			class Light_5: Light_1
			{
				position="Light_5_Start";
				direction="Light_5_End";
			};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"rds_a2port_civ\Old_bike\data\old_bike_co.paa","rds_a2port_civ\Old_bike\data\old_bike_alfa_co.paa"};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				engine = "_this spawn rds_fnc_pedals";
			};
		};
		class Turrets {

		};
	};
	class RDS_Old_bike_Civ_base: RDS_Old_bike_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "RDS_Citizen_random";
		faction="rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_Old_bike_Civ_01: RDS_Old_bike_Civ_base
	{
		EdPrev(RDS_Old_bike_Civ_01)
		scope = 2;
		AUTHOR_MACRO
	};