
#define SPEED_STATIC 1e10

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RDS_Ikarus_Driver = "RDS_Ikarus_Driver";
		RDS_Ikarus_Cargo = "RDS_Ikarus_Cargo";
		RDS_Golf_Driver = "RDS_Golf_Driver";
		RDS_Golf_Cargo01 = "RDS_Golf_Cargo01";
		RDS_Golf_Cargo02 = "RDS_Golf_Cargo02";
		RDS_Golf_Cargo03 = "RDS_Golf_Cargo03";
		RDS_S1203_cargo = "RDS_S1203_cargo";
		RDS_S1203_cargo01 = "RDS_S1203_cargo01";
		RDS_S1203_cargo02 = "RDS_S1203_cargo02";
		RDS_S1203_cargo03 = "RDS_S1203_cargo03";
		RDS_S1203_driver = "RDS_S1203_driver";
		RDS_volha_driver = "RDS_volha_driver";
		RDS_volha_cargo02 = "RDS_volha_cargo02";
		RDS_volha_cargo01 = "RDS_volha_cargo01";
		RDS_volha_cargo = "RDS_volha_cargo";
		RDS_Tractor_Driver = "RDS_Tractor_Driver";
		RDS_Motorcycle_Driver = "RDS_Motorcycle_Driver";
		RDS_MMT_Driver = "RDS_MMT_Driver";
		RDS_Bike_Driver = "RDS_Bike_Driver";
		RDS_Bike_Driver_Right = "RDS_Bike_Driver_Right";
		RDS_Bike_Driver_End = "RDS_Bike_Driver_Right_End";
		RDS_passenger_Motorcycle="RDS_passenger_flatground_3_Idle";
		RDS_LyingWounded = "RDS_LyingWounded";

	};
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions;

		class rds_passenger_flatground_3Actions: FFV_BaseActions
		{
			upDegree="ManPosCombat";
			stop="rds_passenger_flatground_3_Aim";
			stopRelaxed="rds_passenger_flatground_3_Aim";
			default="rds_passenger_flatground_3_Aim";
			Stand="rds_passenger_flatground_3_Idle";
			HandGunOn="rds_passenger_flatground_3_Aim_Pistol";
			PrimaryWeapon="rds_passenger_flatground_3_Aim";
			Binoculars="rds_passenger_flatground_3_Aim_Binoc";
			die="rds_passenger_flatground_3_Die";
			Unconscious="rds_passenger_flatground_3_Die";
			civil="rds_passenger_flatground_3_Idle_Unarmed";
			Obstructed="rds_passenger_flatground_3_Obstructed";
		};
		class rds_passenger_flatground_3IdleUnarmedActions: FFV_BaseActions
		{
			upDegree="ManPosNoWeapon";
			stop="rds_passenger_flatground_3_Idle_Unarmed";
			stopRelaxed="rds_passenger_flatground_3_Idle_Unarmed";
			default="rds_passenger_flatground_3_Idle_Unarmed";
			Stand="rds_passenger_flatground_3_Idle_Unarmed";
			HandGunOn="rds_passenger_flatground_3_Aim_Pistol";
			PrimaryWeapon="rds_passenger_flatground_3_Aim";
			Binoculars="rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
			civil="rds_passenger_flatground_3_Idle_Unarmed";
			throwGrenade[]=
			{
				"GestureThrowGrenadeUna",
				"Gesture"
			};
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rds_passenger_flatground_3DeadActions: FFV_BaseActions
		{
			stop="rds_passenger_flatground_3_Die";
			default="rds_passenger_flatground_3_Die";
			die="rds_passenger_flatground_3_Die";
			Unconscious="rds_passenger_flatground_3_Die";
		};
		class rds_passenger_flatground_3DeadPistolActions: FFV_BaseActions
		{
			stop="rds_passenger_flatground_3_Die_Pistol";
			default="rds_passenger_flatground_3_Die_Pistol";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
		};
		class rds_passenger_flatground_3PistolActions: rds_passenger_flatground_3Actions
		{
			upDegree="ManPosHandGunStand";
			stop="rds_passenger_flatground_3_Aim_Pistol";
			stopRelaxed="rds_passenger_flatground_3_Aim_Pistol";
			default="rds_passenger_flatground_3_Aim_Pistol";
			Binoculars="rds_passenger_flatground_3_Aim_Pistol_Binoc";
			throwGrenade[]=
			{
				"GestureThrowGrenadePistol",
				"Gesture"
			};
			Stand="rds_passenger_flatground_3_Idle_Pistol";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
			Obstructed="rds_passenger_flatground_3_Obstructed_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3BinocActions: rds_passenger_flatground_3Actions
		{
			binocOn="";
			upDegree="ManPosBinocStand";
			stop="rds_passenger_flatground_3_Aim_Binoc";
			stopRelaxed="rds_passenger_flatground_3_Aim_Binoc";
			default="rds_passenger_flatground_3_Aim_Binoc";
		};
		class rds_passenger_flatground_3BinocPistolActions: rds_passenger_flatground_3BinocActions
		{
			stop="rds_passenger_flatground_3_Aim_Pistol_Binoc";
			stopRelaxed="rds_passenger_flatground_3_Aim_Pistol_Binoc";
			default="rds_passenger_flatground_3_Aim_Pistol_Binoc";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3BinocUnarmedActions: rds_passenger_flatground_3BinocActions
		{
			stop="rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			stopRelaxed="rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			default="rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rds_passenger_flatground_3IdleActions: rds_passenger_flatground_3Actions
		{
			upDegree="ManPosStand";
			stop="rds_passenger_flatground_3_Idle";
			stopRelaxed="rds_passenger_flatground_3_Idle";
			default="rds_passenger_flatground_3_Idle";
			Combat="rds_passenger_flatground_3_Aim";
			fireNotPossible="rds_passenger_flatground_3_Aim";
			PlayerStand="rds_passenger_flatground_3_Aim";
		};
		class rds_passenger_flatground_3IdlePistolActions: rds_passenger_flatground_3Actions
		{
			Stand="rds_passenger_flatground_3_Idle_Pistol";
			upDegree="ManPosHandGunStand";
			stop="rds_passenger_flatground_3_Idle_Pistol";
			stopRelaxed="rds_passenger_flatground_3_Idle_Pistol";
			default="rds_passenger_flatground_3_Idle_Pistol";
			Combat="rds_passenger_flatground_3_Aim_Pistol";
			fireNotPossible="rds_passenger_flatground_3_Aim_Pistol";
			PlayerStand="rds_passenger_flatground_3_Aim_Pistol";
			die="rds_passenger_flatground_3_Die_Pistol";
			Unconscious="rds_passenger_flatground_3_Die_Pistol";
			GetOutLow="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV="AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3ObstructedActions: rds_passenger_flatground_3Actions
		{
			stop="rds_passenger_flatground_3_Obstructed";
			stopRelaxed="rds_passenger_flatground_3_Obstructed";
			default="rds_passenger_flatground_3_Obstructed";
			Combat="rds_passenger_flatground_3_Aim";
			fireNotPossible="rds_passenger_flatground_3_Obstructed";
			PlayerStand="rds_passenger_flatground_3_Obstructed";
		};
		class rds_passenger_flatground_3ObstructedPistolActions: rds_passenger_flatground_3PistolActions
		{
			Stand="rds_passenger_flatground_3_Obstructed_Pistol";
			stop="rds_passenger_flatground_3_Obstructed_Pistol";
			stopRelaxed="rds_passenger_flatground_3_Obstructed_Pistol";
			default="rds_passenger_flatground_3_Obstructed_Pistol";
			Combat="rds_passenger_flatground_3_Aim_Pistol";
			fireNotPossible="rds_passenger_flatground_3_Obstructed_Pistol";
			PlayerStand="rds_passenger_flatground_3_Obstructed_Pistol";
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		#include "cfgFFV03.hpp"
		class RDS_Ikarus_Driver: Crew
		{
			file = "\rds_a2port_civ\Ikarus\Data\Anim\Ikarus_driver.rtm";
			interpolateTo[] = {"RDS_KIA_Ikarus_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = true;
			leftHandIKEnd = true;
		};
		class RDS_KIA_Ikarus_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\Ikarus\Data\Anim\KIA_Ikarus_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RDS_Ikarus_Cargo: Crew
		{
			file = "\rds_a2port_civ\Ikarus\Data\Anim\Ikarus_cargo.rtm";
			interpolateTo[] = {"RDS_KIA_Ikarus_Cargo",1};
		};
		class RDS_KIA_Ikarus_Cargo: RDS_KIA_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Ikarus\Data\Anim\KIA_Ikarus_Cargo.rtm";
		};


		class RDS_Golf_Driver: RDS_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Data\Anim\Golf_driver.rtm";
			interpolateTo[] = {"RDS_KIA_Golf_Driver",1};
		};
		class RDS_KIA_Golf_Driver: RDS_KIA_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Data\Anim\KIA_Golf_driver.rtm";
		};
		class RDS_Golf_Cargo01: Crew
		{
			file = "\rds_a2port_civ\Data\Anim\Golf_cargo1.rtm";
			interpolateTo[] = {"RDS_KIA_Golf_Cargo01",1};
		};
		class RDS_KIA_Golf_Cargo01: RDS_KIA_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Data\Anim\KIA_Golf_cargo1.rtm";
		};
		class RDS_Golf_Cargo02: Crew
		{
			file = "\rds_a2port_civ\Data\Anim\Golf_cargo2.rtm";
			interpolateTo[] = {"RDS_KIA_Golf_Cargo02",1};
		};
		class RDS_KIA_Golf_Cargo02: RDS_KIA_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Data\Anim\KIA_Golf_cargo2.rtm";
		};
		class RDS_Golf_Cargo03: Crew
		{
			file = "\rds_a2port_civ\Data\Anim\Golf_cargo3.rtm";
			interpolateTo[] = {"RDS_KIA_Golf_Cargo03",1};
		};
		class RDS_KIA_Golf_Cargo03: RDS_KIA_Ikarus_Driver
		{
			file = "\rds_a2port_civ\Data\Anim\KIA_Golf_cargo3.rtm";
		};

		class RDS_Tractor_Driver: Crew
		{
			file = "\rds_a2port_civ\Data\Anim\tractor_driver.rtm";
			interpolateTo[] = {"KIA_Truck_driver",1};
		};
//s1203


		class RDS_S1203_cargo: Crew
		{
			file = "\rds_a2port_civ\data\Anim\S1203_cargo01";
			interpolateTo[] = {"RDS_S1203_KIA_cargo",1};
			speed = 1e+010;
		};
		class RDS_S1203_KIA_cargo: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\Anim\S1203_KIA_cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_S1203_cargo01: Crew
		{
			file = "\rds_a2port_civ\data\Anim\S1203_cargo02";
			interpolateTo[] = {"RDS_S1203_KIA_cargo01",1};
			speed = 1e+010;
		};
		class RDS_S1203_KIA_cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\Anim\S1203_KIA_cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_S1203_cargo02: Crew
		{
			file = "\rds_a2port_civ\data\Anim\S1203_cargo03";
			interpolateTo[] = {"RDS_S1203_KIA_cargo02",1};
			speed = 1e+010;
		};
		class RDS_S1203_KIA_cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\Anim\S1203_KIA_cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_S1203_cargo03: Crew
		{
			file = "\rds_a2port_civ\data\Anim\S1203_KIA_Cargo04";
			interpolateTo[] = {"RDS_S1203_KIA_cargo03",1};
			speed = 1e+010;
		};
		class RDS_S1203_KIA_cargo03: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\Anim\S1203_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_S1203_driver: RDS_Ikarus_Driver
		{
			file = "\rds_a2port_civ\data\Anim\S1203_driver";
			interpolateTo[] = {"RDS_S1203_KIA_driver",1};
			speed = 1e+010;
		};
		class RDS_S1203_KIA_driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\Anim\S1203_KIA_driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
//gaz24

		class RDS_volha_cargo: Crew
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo";
			interpolateTo[] = {"RDS_volha_KIA_cargo",1};
			speed = 1e+010;
		};
		class RDS_volha_KIA_cargo: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\anim\volha_KIA_cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_volha_cargo01: Crew
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_cargo01",0.1,"RDS_volha_cargo01_V1",0.1,"RDS_volha_cargo01_V2",0.1,"RDS_volha_cargo01_V3",0.1};
			equivalentTo = "RDS_volha_cargo01";
			variantsAI[] = {"RDS_volha_cargo01",0.6,"RDS_volha_cargo01_V1",0.1,"RDS_volha_cargo01_V2",0.15,"RDS_volha_cargo01_V3",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RDS_volha_cargo01_v1: RDS_volha_cargo01
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01_v1";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo01_v2: RDS_volha_cargo01
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01_v2";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo01_v3: RDS_volha_cargo01
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01_v3";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo01_v4: RDS_volha_cargo01
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01_v4";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo01_v5: RDS_volha_cargo01
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo01_v5";
			interpolateTo[] = {"RDS_volha_KIA_cargo01",1};
			connectTo[] = {"RDS_volha_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_KIA_cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\anim\volha_KIA_cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_volha_cargo02: Crew
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_cargo02",0.1,"RDS_volha_cargo02_V1",0.1,"RDS_volha_cargo02_V2",0.1,"RDS_volha_cargo02_V3",0.1};
			equivalentTo = "RDS_volha_cargo02";
			variantsAI[] = {"RDS_volha_cargo02",0.6,"RDS_volha_cargo02_V1",0.1,"RDS_volha_cargo02_V2",0.15,"RDS_volha_cargo02_V3",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class RDS_volha_cargo02_v1: RDS_volha_cargo02
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02_v1";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_Cargo02",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo02_v2: RDS_volha_cargo02
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02_v2";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_Cargo02",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo02_v3: RDS_volha_cargo02
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02_v3";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_Cargo02",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo02_v4: RDS_volha_cargo02
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02_v4";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_Cargo02",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class RDS_volha_cargo02_v5: RDS_volha_cargo02
		{
			file = "\rds_a2port_civ\data\anim\volha_cargo02_v5";
			interpolateTo[] = {"RDS_volha_KIA_cargo02",1};
			connectTo[] = {"RDS_volha_Cargo02",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};

		class RDS_volha_KIA_cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\anim\volha_KIA_cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class RDS_volha_driver: Crew
		{
			file = "\rds_a2port_civ\data\anim\volha_driver";
			interpolateTo[] = {"RDS_volha_KIA_Driver",1};
			speed = 1e+010;
		};
		class RDS_volha_KIA_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\data\anim\volha_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
//TT650

		class RDS_Motorcycle_Driver: Crew
		{
			interpolateTo[] = {"RDS_Motorcycle_Dead",1,"RDS_Motorcycle_Driver_Right",1,"RDS_Motorcycle_Driver_Right_End",1,"RDS_Motorcycle_Driver_Left",1,"RDS_Motorcycle_Driver_Left_End",1};
			file = "rds_a2port_civ\data\anim\TT650_Driver.rtm";
			connectTo[] = {"RDS_Bike_Dead",1};
		};
		class RDS_Motorcycle_Driver_Right: RDS_Motorcycle_Driver
		{
			file = "rds_a2port_civ\data\anim\TT650_Driver_Right.rtm";
			interpolateTo[] = {"RDS_Motorcycle_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			rightHandIKCurve[] = {0};
		};
		class RDS_Motorcycle_Driver_Right_End: RDS_Motorcycle_Driver_Right
		{
			file = "rds_a2port_civ\data\anim\TT650_Driver_Right_End.rtm";
			interpolateFrom[] = {"RDS_Motorcycle_Driver_Right",1};
			interpolateTo[] = {"RDS_Motorcycle_Driver",1};
			rightHandIKCurve[] = {0,0,1,1};
		};
		class RDS_Motorcycle_Driver_Left: RDS_Motorcycle_Driver
		{
			file = "rds_a2port_civ\data\anim\TT650_Driver_Left.rtm";
			interpolateTo[] = {"RDS_Motorcycle_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {0};
		};
		class RDS_Motorcycle_Driver_Left_End: RDS_Motorcycle_Driver_Left
		{
			file = "rds_a2port_civ\data\anim\TT650_Driver_Left_End.rtm";
			interpolateFrom[] = {"RDS_Motorcycle_Driver_Left",1};
			interpolateTo[] = {"RDS_Motorcycle_Driver",1};
			leftHandIKCurve[] = {0,0,1,1};
		};

		class RDS_Motorcycle_Cargo: Crew
		{
			interpolateTo[] = {"RDS_Motorcycle_Dead",1};
			file = "rds_a2port_civ\data\anim\TT650_Cargo.rtm";
			connectTo[] = {"RDS_Motorcycle_Cargo_Dead",1};
		};
		class RDS_Motorcycle_Dead: DefaultDie
		{
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
			actions = "DeadActions";
			file = "rds_a2port_civ\data\anim\KIA_TT650_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class RDS_Motorcycle_Cargo_Dead: RDS_Motorcycle_Dead
		{
			file = "rds_a2port_civ\data\anim\KIA_TT650_Cargo.rtm";
		};

		class RDS_MMT_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "rds_a2port_civ\data\anim\MMT_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class RDS_MMT_Driver: Crew
		{
			interpolateTo[] = {"RDS_MMT_Dead",1,"RDS_MMT_Driver_Right",1,"RDS_MMT_Driver_Right_End",1,"RDS_MMT_Driver_Left",1,"RDS_MMT_Driver_Left_End",1};
			file = "rds_a2port_civ\data\anim\MMT_Driver.rtm";
			connectTo[] = {"RDS_MMT_Dead",1};
		};
		class RDS_MMT_Driver_Right: RDS_MMT_Driver
		{
			file = "rds_a2port_civ\data\anim\MMT_Driver_Right.rtm";
			interpolateTo[] = {"RDS_MMT_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			rightHandIKCurve[] = {0};
		};
		class RDS_MMT_Driver_Right_End: RDS_MMT_Driver_Right
		{
			file = "rds_a2port_civ\data\anim\MMT_Driver_Right_End.rtm";
			interpolateFrom[] = {"RDS_MMT_Driver_Right",1};
			interpolateTo[] = {"RDS_MMT_Driver",1};
			rightHandIKCurve[] = {0,0,1,1};
		};
		class RDS_MMT_Driver_Left: RDS_MMT_Driver
		{
			file = "rds_a2port_civ\data\anim\MMT_Driver_Left.rtm";
			interpolateTo[] = {"RDS_MMT_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {0};
		};
		class RDS_MMT_Driver_Left_End: RDS_MMT_Driver_Left
		{
			file = "rds_a2port_civ\data\anim\MMT_Driver_Left_End.rtm";
			interpolateFrom[] = {"RDS_MMT_Driver_Left",1};
			interpolateTo[] = {"RDS_MMT_Driver",1};
			leftHandIKCurve[] = {0,0,1,1};
		};

		class RDS_Bike_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "rds_a2port_civ\data\anim\MMT_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class RDS_Bike_Driver: Crew
		{
			interpolateTo[] = {"RDS_Bike_Dead",1,"RDS_Bike_Driver_Right",1,"RDS_Bike_Driver_Right_End",1,"RDS_Bike_Driver_Left",1,"RDS_Bike_Driver_Left_End",1};
			file = "rds_a2port_civ\data\anim\Bike_Driver.rtm";
			connectTo[] = {"RDS_Bike_Dead",1};
		};
		class RDS_Bike_Driver_Right: RDS_Bike_Driver
		{
			file = "rds_a2port_civ\data\anim\Bike_Driver_Right.rtm";
			interpolateTo[] = {"RDS_Bike_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {0};
		};
		class RDS_Bike_Driver_Right_End: RDS_Bike_Driver_Right
		{
			file = "rds_a2port_civ\data\anim\Bike_Driver_Right_End.rtm";
			interpolateFrom[] = {"RDS_Bike_Driver_Right",1};
			interpolateTo[] = {"RDS_Bike_Driver",1};
			rightHandIKCurve[] = {0,0,1,1};
		};
		class RDS_Bike_Driver_Left: RDS_Bike_Driver
		{
			file = "rds_a2port_civ\data\anim\Bike_Driver_Left.rtm";
			interpolateTo[] = {"RDS_Bike_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {0};
		};
		class RDS_Bike_Driver_Left_End: RDS_Bike_Driver_Left
		{
			file = "rds_a2port_civ\data\anim\Bike_Driver_Left_End.rtm";
			interpolateFrom[] = {"RDS_Bike_Driver_Left",1};
			interpolateTo[] = {"RDS_Bike_Driver",1};
			leftHandIKCurve[] = {0,0,1,1};
		};

//a3 fix

		class KIA_Truck_Driver: DefaultDie
		{
			actions="DeadActions";
			speed=0.5;
			looped=0;
			terminal=1;
			file="A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Driver.rtm";
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class KIA_Truck_Cargo01: KIA_Truck_Driver
		{
			file="A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo02: KIA_Truck_Driver
		{
			file="A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo03: KIA_Truck_Driver
		{
			file="A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo04: KIA_Truck_Driver
		{
			file="A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class Acts_LyingWounded_loop;
		class RDS_LyingWounded: Acts_LyingWounded_loop
		{
			actions = "CargoActions";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\geom_empty.p3d";
			variantsPlayer[] = {"RDS_LyingWounded_loop1",0.33,"RDS_LyingWounded_loop2",0.33,"RDS_LyingWounded_loop3",0.34};
			equivalentTo = "RDS_LyingWounded";
		};
		class RDS_LyingWounded_loop1: RDS_LyingWounded
		{
			file = "\a3\Anims_F_EPA\data\Anim\sdr\cts\Custom\A_m01-02\Acts_LyingWounded01.rtm";
			speed = 0.04;
			looped = 0;
			ConnectTo[] = {"RDS_LyingWounded",0.0001};
			InterpolateTo[] = {"RDS_LyingWounded",0.0001};
		};
		class RDS_LyingWounded_loop2: RDS_LyingWounded
		{
			file = "\a3\Anims_F_EPA\data\Anim\sdr\cts\Custom\A_m01-02\Acts_LyingWounded02.rtm";
			speed = 0.0342;
			looped = 0;
			ConnectTo[] = {"RDS_LyingWounded",0.0001};
			InterpolateTo[] = {"RDS_LyingWounded",0.0001};
		};
		class RDS_LyingWounded_loop3: RDS_LyingWounded
		{
			file = "\a3\Anims_F_EPA\data\Anim\sdr\cts\Custom\A_m01-02\Acts_LyingWounded03.rtm";
			looped = 0;
			speed = 0.0405;
			ConnectTo[] = {"RDS_LyingWounded",0.0001};
			InterpolateTo[] = {"RDS_LyingWounded",0.0001};
		};


	};
};