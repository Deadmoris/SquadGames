////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Sun Jun 18 20:21:41 2017 : 'file' last modified on Sat Sep 17 12:53:30 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=5
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4
};

//Class rds_a2port_civ : config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class rds_A2_Civilians
	{
		units[] = {"RDS_Ikarus_Civ_01","RDS_Ikarus_Civ_02","RDS_Lada_Civ_01","RDS_Lada_Civ_02","RDS_Lada_Civ_03","RDS_Lada_Civ_04","RDS_Lada_Civ_05","RDS_S1203_Civ_01","RDS_S1203_Civ_02","RDS_S1203_Civ_03","RDS_Gaz24_Civ_01","RDS_Gaz24_Civ_02","RDS_Gaz24_Civ_03","RDS_Golf4_Civ_01","RDS_Octavia_Civ_01","RDS_Zetor6945_Base","RDS_Old_bike_Civ_01","RDS_JAWA353_Civ_01","RDS_TT650_Civ_01","rds_latarka_janta_mapa","rds_latarka_lts1_white_mapa","rds_latarka_lts1_red_mapa","rds_latarka_lts1_green_mapa","rds_latarka_lts1_omni_mapa","RDS_Sparewheel_lada","RDS_Sparewheel_s1203","RDS_Sparewheel_golf4","RDS_Sparewheel_octavia","RDS_Sparewheel_gaz24","RDS_Sparewheel_ikarus","Item_rds_car_FirstAidKit","Item_rds_car_warning_triangle_to11","Item_rds_weap_latarka_janta","Item_rds_weap_latarka_lts1","RDS_Hatchback_01_F","RDS_SUV_01_F","RDS_Van_01_transport_F","RDS_Van_01_fuel_F","RDS_Van_01_box_F","RDS_Lada_Wreck","RDS_MMT_Civ_01"};
		weapons[] = {"rds_car_FirstAidKit","rds_car_warning_triangle_to11","rds_acc_switch","rds_weap_latarka_janta","rds_weap_latarka_lts1","rds_weap_latarka_lts1_red","rds_weap_latarka_lts1_green","rds_weap_latarka_lts1_vertical"};
		requiredVersion = 1.54;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_beta","A3_Weapons_F_Acc","A3_Structures_F_EPA_Items_Electronics","A3_Structures_F_EPC","A3_Soft_F","A3_Soft_F_TruckHeavy","A3_CargoPoses_F","A3_CargoPoses_F_Heli"};
		name = "RDS Civilian Pack Cars";
		author = "reyhard";
		url = "https://forums.bistudio.com/topic/170165-rds-a2-civilian-pack/";
		magazines[] = {"rds_dummy_mag"};
		ammo[] = {"rds_ammo_car_FirstAidKit_proxy","rds_ammo_car_warning_triangle_to11_proxy","rds_ammo_Sparewheel_lada_proxy","rds_ammo_Sparewheel_golf4_proxy","rds_ammo_Sparewheel_octavia_proxy","rds_ammo_Sparewheel_s1203_proxy","rds_ammo_Sparewheel_ikarus_proxy","rds_ammo_Sparewheel_gaz24_proxy","rds_ammo_empty_proxy"};
	};
};
class CfgFactionClasses
{
	access = 1;
	class rds_rus_civ
	{
		displayName = "Russians";
		icon = "\rds_a2port_civ\faction_rus.paa";
		author = "reyhard";
		priority = 2;
		side = 3;
	};
};
class PointerSlot;
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
		RDS_passenger_Motorcycle = "RDS_passenger_flatground_3_Idle";
		RDS_LyingWounded = "RDS_LyingWounded";
	};
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions;
		class rds_passenger_flatground_3Actions: FFV_BaseActions
		{
			upDegree = "ManPosCombat";
			stop = "rds_passenger_flatground_3_Aim";
			stopRelaxed = "rds_passenger_flatground_3_Aim";
			default = "rds_passenger_flatground_3_Aim";
			Stand = "rds_passenger_flatground_3_Idle";
			HandGunOn = "rds_passenger_flatground_3_Aim_Pistol";
			PrimaryWeapon = "rds_passenger_flatground_3_Aim";
			Binoculars = "rds_passenger_flatground_3_Aim_Binoc";
			die = "rds_passenger_flatground_3_Die";
			Unconscious = "rds_passenger_flatground_3_Die";
			civil = "rds_passenger_flatground_3_Idle_Unarmed";
			Obstructed = "rds_passenger_flatground_3_Obstructed";
		};
		class rds_passenger_flatground_3IdleUnarmedActions: FFV_BaseActions
		{
			upDegree = "ManPosNoWeapon";
			stop = "rds_passenger_flatground_3_Idle_Unarmed";
			stopRelaxed = "rds_passenger_flatground_3_Idle_Unarmed";
			default = "rds_passenger_flatground_3_Idle_Unarmed";
			Stand = "rds_passenger_flatground_3_Idle_Unarmed";
			HandGunOn = "rds_passenger_flatground_3_Aim_Pistol";
			PrimaryWeapon = "rds_passenger_flatground_3_Aim";
			Binoculars = "rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
			civil = "rds_passenger_flatground_3_Idle_Unarmed";
			throwGrenade[] = {"GestureThrowGrenadeUna","Gesture"};
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rds_passenger_flatground_3DeadActions: FFV_BaseActions
		{
			stop = "rds_passenger_flatground_3_Die";
			default = "rds_passenger_flatground_3_Die";
			die = "rds_passenger_flatground_3_Die";
			Unconscious = "rds_passenger_flatground_3_Die";
		};
		class rds_passenger_flatground_3DeadPistolActions: FFV_BaseActions
		{
			stop = "rds_passenger_flatground_3_Die_Pistol";
			default = "rds_passenger_flatground_3_Die_Pistol";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
		};
		class rds_passenger_flatground_3PistolActions: rds_passenger_flatground_3Actions
		{
			upDegree = "ManPosHandGunStand";
			stop = "rds_passenger_flatground_3_Aim_Pistol";
			stopRelaxed = "rds_passenger_flatground_3_Aim_Pistol";
			default = "rds_passenger_flatground_3_Aim_Pistol";
			Binoculars = "rds_passenger_flatground_3_Aim_Pistol_Binoc";
			throwGrenade[] = {"GestureThrowGrenadePistol","Gesture"};
			Stand = "rds_passenger_flatground_3_Idle_Pistol";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
			Obstructed = "rds_passenger_flatground_3_Obstructed_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3BinocActions: rds_passenger_flatground_3Actions
		{
			binocOn = "";
			upDegree = "ManPosBinocStand";
			stop = "rds_passenger_flatground_3_Aim_Binoc";
			stopRelaxed = "rds_passenger_flatground_3_Aim_Binoc";
			default = "rds_passenger_flatground_3_Aim_Binoc";
		};
		class rds_passenger_flatground_3BinocPistolActions: rds_passenger_flatground_3BinocActions
		{
			stop = "rds_passenger_flatground_3_Aim_Pistol_Binoc";
			stopRelaxed = "rds_passenger_flatground_3_Aim_Pistol_Binoc";
			default = "rds_passenger_flatground_3_Aim_Pistol_Binoc";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3BinocUnarmedActions: rds_passenger_flatground_3BinocActions
		{
			stop = "rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			stopRelaxed = "rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			default = "rds_passenger_flatground_3_Aim_Unarmed_Binoc";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon_getOutHigh";
		};
		class rds_passenger_flatground_3IdleActions: rds_passenger_flatground_3Actions
		{
			upDegree = "ManPosStand";
			stop = "rds_passenger_flatground_3_Idle";
			stopRelaxed = "rds_passenger_flatground_3_Idle";
			default = "rds_passenger_flatground_3_Idle";
			Combat = "rds_passenger_flatground_3_Aim";
			fireNotPossible = "rds_passenger_flatground_3_Aim";
			PlayerStand = "rds_passenger_flatground_3_Aim";
		};
		class rds_passenger_flatground_3IdlePistolActions: rds_passenger_flatground_3Actions
		{
			Stand = "rds_passenger_flatground_3_Idle_Pistol";
			upDegree = "ManPosHandGunStand";
			stop = "rds_passenger_flatground_3_Idle_Pistol";
			stopRelaxed = "rds_passenger_flatground_3_Idle_Pistol";
			default = "rds_passenger_flatground_3_Idle_Pistol";
			Combat = "rds_passenger_flatground_3_Aim_Pistol";
			fireNotPossible = "rds_passenger_flatground_3_Aim_Pistol";
			PlayerStand = "rds_passenger_flatground_3_Aim_Pistol";
			die = "rds_passenger_flatground_3_Die_Pistol";
			Unconscious = "rds_passenger_flatground_3_Die_Pistol";
			GetOutLow = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutLow";
			GetOutMedium = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutMedium";
			GetOutHigh = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
			GetOutHighZamak = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighZamak";
			GetOutHighHemtt = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHighHemtt";
			GetOutSDV = "AcrgPknlMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon_getOutHigh";
		};
		class rds_passenger_flatground_3ObstructedActions: rds_passenger_flatground_3Actions
		{
			stop = "rds_passenger_flatground_3_Obstructed";
			stopRelaxed = "rds_passenger_flatground_3_Obstructed";
			default = "rds_passenger_flatground_3_Obstructed";
			Combat = "rds_passenger_flatground_3_Aim";
			fireNotPossible = "rds_passenger_flatground_3_Obstructed";
			PlayerStand = "rds_passenger_flatground_3_Obstructed";
		};
		class rds_passenger_flatground_3ObstructedPistolActions: rds_passenger_flatground_3PistolActions
		{
			Stand = "rds_passenger_flatground_3_Obstructed_Pistol";
			stop = "rds_passenger_flatground_3_Obstructed_Pistol";
			stopRelaxed = "rds_passenger_flatground_3_Obstructed_Pistol";
			default = "rds_passenger_flatground_3_Obstructed_Pistol";
			Combat = "rds_passenger_flatground_3_Aim_Pistol";
			fireNotPossible = "rds_passenger_flatground_3_Obstructed_Pistol";
			PlayerStand = "rds_passenger_flatground_3_Obstructed_Pistol";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon;
		class AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end;
		class AmovPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWrflDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWrflDnon_end;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWlnrDnon_end;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSrasWpstDnon_end;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWlnrDnon_end;
		class AmovPercMstpSrasWlnrDnon_AmovPercMstpSnonWnonDnon;
		class AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWlnrDnon;
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon;
		class AmovPercMstpSrasWlnrDnon_AwopPercMstpSoptWbinDnon_end;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon;
		class AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWlnrDnon_end;
		class ReloadRPG;
		class cargo_marksman;
		class cargo_base;
		class cargo_base_idle;
		class cargo_basepistol;
		class cargo_base_idle_pistol;
		class cargo_basebinoc;
		class rds_passenger_flatground_3_Aim: cargo_base
		{
			actions = "rds_passenger_flatground_3Actions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim.rtm";
			speed = 100000;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_ToBinoc",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Idle",0.1,"rds_passenger_flatground_3_toObstructed",0.1,"rds_passenger_flatground_3_Aim_ToPistol",0.1,"rds_passenger_flatground_3_Idle_Unarmed",0.2,"rds_passenger_flatground_3_Die",0.1};
			variantsAI[] = {"rds_passenger_flatground_3_Aim_Idling",1};
			variantsPlayer[] = {"rds_passenger_flatground_3_Aim_Idling",1};
		};
		class rds_passenger_flatground_3_Obstructed: cargo_base_idle
		{
			actions = "rds_passenger_flatground_3ObstructedActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rds_passenger_flatground_3_fromObstructed",0.1,"rds_passenger_flatground_3_Die",0.1};
		};
		class rds_passenger_flatground_3_fromObstructed: cargo_base_idle
		{
			actions = "rds_passenger_flatground_3ObstructedActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_fromobstructed.rtm";
			speed = -0.15;
			looped = 0;
			weaponLowered = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "##NAME##_toObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim",0.1};
		};
		class rds_passenger_flatground_3_toObstructed: cargo_base_idle
		{
			actions = "rds_passenger_flatground_3ObstructedActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			weaponObstructed = 1;
			looped = 0;
			leftHandIKCurve[] = {1};
			interpolationRestart = 1;
			reverse = "##NAME##_fromObstructed";
			minplaytime = 0.95;
			ConnectTo[] = {"rds_passenger_flatground_3_Obstructed",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Obstructed",0.1};
		};
		class rds_passenger_flatground_3_Aim_Idling: rds_passenger_flatground_3_Aim
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim1.rtm";
			speed = -8;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim",0.1};
		};
		class rds_passenger_flatground_3_Idle: cargo_base_idle
		{
			actions = "rds_passenger_flatground_3IdleActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idle.rtm";
			speed = 100000;
			aiming = "aimingDefault";
			aimingBody = "aimingNo";
			leftHandIKCurve[] = {1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim",0.1,"rds_passenger_flatground_3_Aim_ToPistol",0.1,"rds_passenger_flatground_3_Idle_Unarmed",0.2,"rds_passenger_flatground_3_Die",0.1};
			variantsAI[] = {"rds_passenger_flatground_3_Idle_Idling",1};
			variantsPlayer[] = {"rds_passenger_flatground_3_Idle_Idling",1};
		};
		class rds_passenger_flatground_3_Idle_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idle1.rtm";
			speed = -11;
			ConnectTo[] = {"rds_passenger_flatground_3_Idle",0.1};
		};
		class rds_passenger_flatground_3_Aim_Pistol: cargo_basepistol
		{
			actions = "rds_passenger_flatground_3PistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			speed = 100000;
			variantsAI[] = {"rds_passenger_flatground_3_Aim_Pistol_Idling",1};
			variantsPlayer[] = {"rds_passenger_flatground_3_Aim_Pistol_Idling",1};
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol_ToBinoc",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_FromPistol",0.1,"rds_passenger_flatground_3_Idle_Pistol",0.2,"rds_passenger_flatground_3_toObstructed_Pistol",0.2,"rds_passenger_flatground_3_Idle_Unarmed",0.2,"rds_passenger_flatground_3_Die_Pistol",0.5};
		};
		class rds_passenger_flatground_3_Aim_Pistol_Idling: rds_passenger_flatground_3_Aim_Pistol
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol1.rtm";
			speed = -8;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1};
		};
		class rds_passenger_flatground_3_Idle_Pistol: cargo_base_idle_pistol
		{
			actions = "rds_passenger_flatground_3IdlePistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idlepistol.rtm";
			speed = 100000;
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1,"rds_passenger_flatground_3_Aim_FromPistol",0.1,"rds_passenger_flatground_3_Idle_Unarmed",0.1,"rds_passenger_flatground_3_Die_Pistol",0.1};
			variantsAI[] = {"rds_passenger_flatground_3_Idle_Pistol_Idling",1};
			variantsPlayer[] = {"rds_passenger_flatground_3_Idle_Pistol_Idling",1};
		};
		class rds_passenger_flatground_3_Idle_Pistol_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idlepistol1.rtm";
			speed = -10;
			ConnectTo[] = {"rds_passenger_flatground_3_Idle_Pistol",0.1};
		};
		class rds_passenger_flatground_3_Obstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rds_passenger_flatground_3ObstructedPistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_obstructed.rtm";
			speed = 1e+010;
			weaponLowered = 0;
			weaponObstructed = 1;
			interpolationRestart = 1;
			InterpolateTo[] = {"rds_passenger_flatground_3_fromObstructed_Pistol",0.1,"rds_passenger_flatground_3_Die",0.1};
		};
		class rds_passenger_flatground_3_fromObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rds_passenger_flatground_3ObstructedPistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_fromobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			reverse = "##NAME##_toObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1};
		};
		class rds_passenger_flatground_3_toObstructed_Pistol: cargo_base_idle_pistol
		{
			actions = "rds_passenger_flatground_3ObstructedPistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_toobstructed.rtm";
			speed = -0.15;
			weaponLowered = 0;
			interpolationRestart = 1;
			looped = 0;
			weaponObstructed = 1;
			reverse = "##NAME##_fromObstructed_Pistol";
			minplaytime = 0.95;
			ConnectTo[] = {"rds_passenger_flatground_3_Obstructed_Pistol",0.1};
			InterpolateTo[] = {"rds_passenger_flatground_3_Obstructed_Pistol",0.1};
		};
		class rds_passenger_flatground_3_Aim_ToPistol: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon
		{
			actions = "rds_passenger_flatground_3PistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimtopistol.rtm";
			speed = 2;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_ToPistol_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_ToPistol_End: AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon_end
		{
			actions = "rds_passenger_flatground_3PistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimtopistol_end.rtm";
			speed = 1.875;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_FromPistol: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon
		{
			actions = "rds_passenger_flatground_3PistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimFrompistol.rtm";
			speed = 2.307692;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_FromPistol_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_FromPistol_End: AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon_end
		{
			actions = "rds_passenger_flatground_3Actions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimfrompistol_end.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = 2;
			leftHandIKCurve[] = {0,0,0.5,1};
			ConnectTo[] = {"rds_passenger_flatground_3_Aim",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Binoc: cargo_basebinoc
		{
			actions = "rds_passenger_flatground_3BinocActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_Binoc.rtm";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			speed = -8;
			rightHandIKCurve[] = {0};
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_FromBinoc",0.1,"rds_passenger_flatground_3_Die",0.1};
		};
		class rds_passenger_flatground_3_Aim_Pistol_Binoc: cargo_basebinoc
		{
			actions = "rds_passenger_flatground_3BinocPistolActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 1;
			speed = -8;
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_Pistol_FromBinoc",0.1,"rds_passenger_flatground_3_Die_Pistol",0.1};
		};
		class rds_passenger_flatground_3_Aim_ToBinoc: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rds_passenger_flatground_3BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_ToBinoc.rtm";
			speed = 1.578947;
			leftHandIKCurve[] = {0,1,0.15,0};
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_ToBinoc_End: AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rds_passenger_flatground_3BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_ToBinoc_end.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon
		{
			actions = "rds_passenger_flatground_3BinocActions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_frombinoc.rtm";
			speed = 1.578947;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWrflDnon_end
		{
			actions = "rds_passenger_flatground_3Actions";
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aim_frombinoc_end.rtm";
			speed = 1.764706;
			leftHandIKCurve[] = {0,0,0.5,1};
			ConnectTo[] = {"rds_passenger_flatground_3_Aim",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Pistol_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rds_passenger_flatground_3BinocActions";
			showHandGun = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_ToBinoc.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Pistol_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rds_passenger_flatground_3BinocActions";
			showHandGun = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_ToBinoc_end.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Pistol_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rds_passenger_flatground_3BinocActions";
			showHandGun = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_frombinoc.rtm";
			speed = 1.578947;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Pistol_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rds_passenger_flatground_3Actions";
			showHandGun = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimpistol_frombinoc_end.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Pistol",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Idle_Unarmed: cargo_base_idle
		{
			actions = "rds_passenger_flatground_3IdleUnarmedActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idleunarmed.rtm";
			speed = 100000;
			aiming = "aimingNo";
			aimingBody = "aimingNo";
			weaponIK = 0;
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_FromPistol_End",0.1,"rds_passenger_flatground_3_Aim_ToPistol_End",0.1,"rds_passenger_flatground_3_Aim_Unarmed_ToBinoc",0.1,"rds_passenger_flatground_3_Die_Pistol",0.1};
			variantsAI[] = {"rds_passenger_flatground_3_Idle_Unarmed_Idling",1};
			variantsPlayer[] = {"rds_passenger_flatground_3_Idle_Unarmed_Idling",1};
		};
		class rds_passenger_flatground_3_Idle_Unarmed_Idling: rds_passenger_flatground_3_Idle
		{
			variantsPlayer[] = {};
			headBobStrength = 0;
			soundEnabled = 1;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3idleunarmed1.rtm";
			speed = -10;
			ConnectTo[] = {"rds_passenger_flatground_3_Idle_Unarmed",0.1};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_Binoc: cargo_basebinoc
		{
			actions = "rds_passenger_flatground_3BinocUnarmedActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_Binoc.rtm";
			aiming = "aimingRifleSlingDefault";
			aimingBody = "aimingUpRifleSlingDefault";
			showHandGun = 0;
			speed = -8;
			InterpolateTo[] = {"rds_passenger_flatground_3_Aim_Unarmed_FromBinoc",0.1,"rds_passenger_flatground_3_Die_Pistol",0.1};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_ToBinoc: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon
		{
			actions = "rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun = 0;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_ToBinoc.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Unarmed_ToBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_ToBinoc_End: AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon_end
		{
			actions = "rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun = 0;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_ToBinoc_end.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Unarmed_Binoc",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_FromBinoc: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon
		{
			actions = "rds_passenger_flatground_3BinocUnarmedActions";
			showHandGun = 0;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_frombinoc.rtm";
			speed = 1.578947;
			ConnectTo[] = {"rds_passenger_flatground_3_Aim_Unarmed_FromBinoc_End",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Aim_Unarmed_FromBinoc_End: AwopPercMstpSoptWbinDnon_AmovPercMstpSrasWpstDnon_end
		{
			actions = "rds_passenger_flatground_3IdleUnarmedActions";
			showHandGun = 0;
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3aimUnarmed_frombinoc_end.rtm";
			speed = 1.764706;
			ConnectTo[] = {"rds_passenger_flatground_3_Idle_Unarmed",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Die: DefaultDie
		{
			actions = "rds_passenger_flatground_3DeadActions";
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3die.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			ragdoll = 1;
			ConnectTo[] = {"Unconscious",0.1};
			InterpolateTo[] = {};
		};
		class rds_passenger_flatground_3_Die_Pistol: rds_passenger_flatground_3_Die
		{
			file = "\rds_a2port_civ\data\anim\ffv_motor\passenger_flatground_3diepistol.rtm";
			actions = "rds_passenger_flatground_3DeadPistolActions";
			showHandGun = 1;
		};
		class RDS_Ikarus_Driver: Crew
		{
			file = "\rds_a2port_civ\Ikarus\Data\Anim\Ikarus_driver.rtm";
			interpolateTo[] = {"RDS_KIA_Ikarus_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
		};
		class RDS_KIA_Ikarus_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\rds_a2port_civ\Ikarus\Data\Anim\KIA_Ikarus_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
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
			looped = 0;
			interpolationSpeed = 1;
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
			looped = 0;
			interpolationSpeed = 1;
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
			looped = 0;
			interpolationSpeed = 1;
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
			looped = 0;
			interpolationSpeed = 1;
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
			looped = 0;
			interpolationSpeed = 1;
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
			looped = 0;
			interpolationSpeed = 1;
			leftHandIKCurve[] = {0};
		};
		class RDS_Bike_Driver_Left_End: RDS_Bike_Driver_Left
		{
			file = "rds_a2port_civ\data\anim\Bike_Driver_Left_End.rtm";
			interpolateFrom[] = {"RDS_Bike_Driver_Left",1};
			interpolateTo[] = {"RDS_Bike_Driver",1};
			leftHandIKCurve[] = {0,0,1,1};
		};
		class KIA_Truck_Driver: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Driver.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class KIA_Truck_Cargo01: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo02: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo03: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
		};
		class KIA_Truck_Cargo04: KIA_Truck_Driver
		{
			file = "A3\soft_f_beta\Truck_02\data\Anim\KIA_Truck_02_Cargo04.rtm";
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
class CfgFunctions
{
	class RDS
	{
		recompile = 1;
		tag = "RDS";
		class functions
		{
			recompile = 1;
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
class CfgAnimationSourceSounds
{
	class RDS_Lada_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorOpen
		{
			loop = 0;
			terminate = 1;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"\rds_a2port_civ\data\sounds\lada_door.wss","db+10",1,60};
			sound1[] = {"\rds_a2port_civ\data\sounds\lada_door.wss","db+10",1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class Close
		{
			loop = 0;
			terminate = 1;
			trigger = "(1 - direction) * (phase factor[0.4,0.01])";
			sound0[] = {"\rds_a2port_civ\data\sounds\door_close.ogg","db+10",1,60};
			sound1[] = {"\rds_a2port_civ\data\sounds\door_close.ogg","db+10",1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
	};
	class RDS_Golf_Door
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak1",1,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak2",1,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak3",1,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericDoors\squeak4",1,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class DoorOpen
		{
			loop = 0;
			terminate = 1;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"\rds_a2port_civ\data\sounds\GOLF\int\int-golf-getout.wss","db+10",1,60};
			sound1[] = {"\rds_a2port_civ\data\sounds\GOLF\int\int-golf-getout.wss","db+10",1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
		class Close
		{
			loop = 0;
			terminate = 1;
			trigger = "(1 - direction) * (phase factor[0.4,0.01])";
			sound0[] = {"\rds_a2port_civ\data\sounds\door_close.ogg","db+10",1,60};
			sound1[] = {"\rds_a2port_civ\data\sounds\door_close.ogg","db+10",1,60};
			sound[] = {"sound0",0.5,"sound1",0.5};
		};
	};
	class RDS_Trunk
	{
		class DoorMovement
		{
			loop = 1;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_1",2,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_2",2,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_3",2,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_4",2,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction";
			sound0[] = {"\rds_a2port_civ\data\sounds\trunk_open_1.ogg","db+12",1,40};
			sound1[] = {"\rds_a2port_civ\data\sounds\trunk_open_2.ogg","db+12",1,40};
			sound2[] = {"\rds_a2port_civ\data\sounds\trunk_open_3.ogg","db+12",1,40};
			sound3[] = {"\rds_a2port_civ\data\sounds\trunk_open_4.ogg","db+12",1,40};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction)* (phase factor[0.2,0.09])";
			sound0[] = {"\rds_a2port_civ\data\sounds\trunk_close_1.ogg","db+12",1,40};
			sound1[] = {"\rds_a2port_civ\data\sounds\trunk_close_2.ogg","db+12",1,40};
			sound2[] = {"\rds_a2port_civ\data\sounds\trunk_close_3.ogg","db+12",1,40};
			sound[] = {"sound0",0.33,"sound1",0.33,"sound2",0.33};
		};
	};
	class RDS_Tractor_Door
	{
		class DoorMovement
		{
			loop = 1;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_1",2,1,20};
			sound1[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_2",2,1,20};
			sound2[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_3",2,1,20};
			sound3[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsSqueak_4",2,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction * (phase factor[0.01,0.02])";
			sound0[] = {"A3\Sounds_F\environment\structures\doors\GenericBigDoors\GenericBigDoorsKnob",2,1,20};
			sound[] = {"sound0",1};
		};
		class DoorMovementDone
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction) * (phase factor[0.1,0.09])";
			sound0[] = {"A3\Sounds_F\sfx\doors\GateDoors\GateSlam",3,1,20};
			sound[] = {"sound0",1};
		};
	};
	class RDS_Tractor_Cover
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_1",3,1,20};
			sound1[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_2",3,1,20};
			sound2[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_3",3,1,20};
			sound3[] = {"A3\Sounds_F\sfx\doors\FenceGateDoors\fenceGateSqueak_4",3,1,20};
			sound[] = {"sound0",0.25,"sound1",0.25,"sound2",0.25,"sound3",0.25};
		};
	};
	class RDS_Ikarus_Door1
	{
		class OpenTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "direction";
			sound0[] = {"\rds_a2port_civ\data\sounds\d1opn_r","db+12",1,40};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 0;
			terminate = 0;
			trigger = "(1 - direction)";
			sound0[] = {"\rds_a2port_civ\data\sounds\d1cls_r","db+12",1,40};
			sound[] = {"sound0",1};
		};
	};
	class RDS_Ikarus_Door2: RDS_Ikarus_Door1
	{
		class OpenTheDoor: OpenTheDoor
		{
			sound0[] = {"\rds_a2port_civ\data\sounds\d2opn_r","db+12",1,40};
		};
		class SlamTheDoor: SlamTheDoor
		{
			sound0[] = {"\rds_a2port_civ\data\sounds\d3cls_r","db+12",1,40};
		};
	};
	class RDS_Ikarus_Door3: RDS_Ikarus_Door1
	{
		class OpenTheDoor: OpenTheDoor
		{
			sound0[] = {"\rds_a2port_civ\data\sounds\d3opn_r","db+12",1,40};
		};
		class SlamTheDoor: SlamTheDoor
		{
			sound0[] = {"\rds_a2port_civ\data\sounds\d3cls_r","db+12",1,40};
		};
	};
	class RDS_Blinker
	{
		class OpenTheDoor
		{
			loop = 1;
			terminate = 0;
			trigger = "direction";
			sound0[] = {"\rds_a2port_civ\data\sounds\blinker_on.ogg","db-1",1,40};
			sound[] = {"sound0",1};
		};
		class SlamTheDoor
		{
			loop = 1;
			terminate = 0;
			trigger = "(1 - direction)";
			sound0[] = {"\rds_a2port_civ\data\sounds\blinker_off.ogg","db-1",1,40};
			sound[] = {"sound0",1};
		};
	};
	class RDS_Gearbox
	{
		class GearMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rds_a2port_civ\data\Gear_Change","db+26",1,60};
			sound[] = {"sound0",1};
		};
	};
	class RDS_Wipers
	{
		class DoorMovement
		{
			loop = 0;
			terminate = 1;
			trigger = "(phase factor[0.05,0.10]) * (phase factor[0.95,0.9])";
			sound0[] = {"\rds_a2port_civ\data\wipers.wss","db+8",1,60};
			sound[] = {"sound0",1};
		};
	};
};
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
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RDS_fnc_migacze";
		controls[] = {"RDS_Car_handler","WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel"};
		class RDS_Car_handler: RscPicture
		{
			idc = 54319;
		};
	};
	class RDS_RscUnitInfoBike: RscUnitInfo
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RDS_fnc_handsignals";
		controls[] = {"RDS_Bike_handler","WeaponInfoControlsGroupRight","CA_BackgroundVehicle","CA_BackgroundVehicleTitle","CA_BackgroundVehicleTitleDark","CA_BackgroundFuel","CA_Vehicle","CA_VehicleRole","CA_HitZones","CA_VehicleTogglesBackground","CA_VehicleToggles","CA_SpeedBackground","CA_SpeedUnits","CA_Speed","CA_ValueFuel"};
		class RDS_Bike_handler: RscPicture
		{
			idc = 54329;
		};
	};
	class rds_rscOptics_janta: RscWeaponZeroing
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RDS_fnc_handler_janta;";
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			x = "0 *   (0.01875 * SafezoneH) +   (SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 *   (0.025 * SafezoneH) +   (SafezoneY)";
			w = "53.5 *   (0.01875 * SafezoneH)";
			h = "40 *   (0.025 * SafezoneH)";
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
				class RHS_pso_handler: RscPicture
				{
					idc = 9978;
				};
			};
		};
	};
	class rds_rscOptics_lts1: rds_rscOptics_janta
	{
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call RDS_fnc_handler_lts1;";
		class CA_IGUI_elements_group: CA_IGUI_elements_group
		{
			class Controls
			{
				class RHS_pso_handler: RscPicture
				{
					idc = 9977;
				};
			};
		};
	};
};
class cfgAmmo
{
	class MissileBase;
	class rds_ammo_car_FirstAidKit_proxy: MissileBase
	{
		hit = 0;
		cost = 0;
		maverickweapon = 1;
		maverickWeaponIndexOffset = 10;
		proxyShape = "\rds_a2port_civ\items\rds_apteczka_proxy";
	};
	class rds_ammo_car_warning_triangle_to11_proxy: rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset = 20;
		proxyShape = "\rds_a2port_civ\items\rds_to11_pudelko";
	};
	class rds_ammo_Sparewheel_lada_proxy: rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset = 30;
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_lada_proxy";
	};
	class rds_ammo_Sparewheel_golf4_proxy: rds_ammo_Sparewheel_lada_proxy
	{
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_golf4_proxy";
	};
	class rds_ammo_Sparewheel_octavia_proxy: rds_ammo_Sparewheel_lada_proxy
	{
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_octavia_proxy";
	};
	class rds_ammo_Sparewheel_s1203_proxy: rds_ammo_Sparewheel_lada_proxy
	{
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_s1203_proxy";
	};
	class rds_ammo_Sparewheel_ikarus_proxy: rds_ammo_Sparewheel_lada_proxy
	{
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_ikarus_proxy";
	};
	class rds_ammo_Sparewheel_gaz24_proxy: rds_ammo_Sparewheel_lada_proxy
	{
		proxyShape = "\rds_a2port_civ\sparewheels\rds_spare_gaz24_proxy";
	};
	class rds_ammo_empty_proxy: rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset = 100;
		proxyShape = "\A3\weapons_f\empty.p3d";
	};
};
class cfgMagazines
{
	class VehicleMagazine;
	class rds_car_FirstAidKit_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_car_FirstAidKit_proxy";
		count = 1;
	};
	class rds_car_warning_triangle_to11_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_car_warning_triangle_to11_proxy";
		count = 1;
	};
	class rds_Sparewheel_lada_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_lada_proxy";
		count = 1;
	};
	class rds_Sparewheel_golf4_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_golf4_proxy";
		count = 1;
	};
	class rds_Sparewheel_octavia_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_octavia_proxy";
		count = 1;
	};
	class rds_Sparewheel_s1203_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_s1203_proxy";
		count = 1;
	};
	class rds_Sparewheel_ikarus_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_ikarus_proxy";
		count = 1;
	};
	class rds_Sparewheel_gaz24_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_Sparewheel_gaz24_proxy";
		count = 1;
	};
	class rds_empty_proxy: VehicleMagazine
	{
		ammo = "rds_ammo_empty_proxy";
		count = 1;
	};
	class UGL_FlareGreen_F;
	class rds_dummy_mag: UGL_FlareGreen_F
	{
		allowedSlots[] = {};
		scopeArsenal = 0;
		scope = 1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryFirstAidKitItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryFinsItem_Base_F;
	class BikeHorn;
	class RDS_BikeHorn: BikeHorn
	{
		drySound[] = {"rds_a2port_civ\data\sounds\BikeHorn",2,1,200};
	};
	class rds_car_FirstAidKit: ItemCore
	{
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Car First Aid Kit";
		picture = "\rds_a2port_civ\items\pic\pic_apteczka.paa";
		model = "\rds_a2port_civ\items\rds_apteczka";
		descriptionShort = "Use to treat heavy wounds.<br/>Usable on: Self, Others";
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass = 12;
		};
	};
	class rds_car_warning_triangle_to11: ItemCore
	{
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Warning Triangle TO-11";
		picture = "\rds_a2port_civ\items\pic\pic_trojkat_to11.paa";
		model = "\rds_a2port_civ\items\rds_to11";
		descriptionShort = "Place 30-100 m behind the car. On highways distance increase to 200m";
		class ItemInfo: InventoryFinsItem_Base_F
		{
			mass = 12;
			type = 301;
			class Pointer{};
			class FlashLight{};
		};
	};
	class acc_flashlight;
	class rds_acc_switch: acc_flashlight
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		scope = 2;
		displayName = "Switch";
		descriptionShort = "Switch";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\A3\Weapons_f\empty";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 2;
			class Pointer{};
			class FlashLight{};
		};
		inertia = 0.0;
	};
	class Pistol_Base_F;
	class rds_weap_latarka_janta: Pistol_Base_F
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		scope = 2;
		magazines[] = {"rds_dummy_mag"};
		displayname = "Flashlight 'Janta'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Handheld flashlight";
		model = "\rds_a2port_civ\items\rds_latarka_janta";
		picture = "\rds_a2port_civ\items\pic\rds_janta_pic.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_janta.rtm"};
		optics = 0;
		weaponInfoType = "rds_rscOptics_janta";
		class FlashLight
		{
			color[] = {180,150,120};
			ambient[] = {9,7.5,6};
			intensity = 23;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"",1.03514,1,10};
			soundClosure[] = {"closure1",1};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
			soundBegin[] = {"begin1",1};
		};
		class GunParticles{};
		class WeaponSlotsInfo
		{
			mass = 27;
			holsterScale = 0;
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"rds_acc_switch"};
			};
		};
	};
	class rds_weap_latarka_lts1: rds_weap_latarka_janta
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayname = "Flashlight 'LTS-1'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Touristic flashlight 'LTS-1'";
		weaponInfoType = "rds_rscOptics_lts1";
		model = "\rds_a2port_civ\items\rds_latarka_lts1";
		picture = "\rds_a2port_civ\items\pic\rds_lts1_pic.paa";
		class FlashLight
		{
			color[] = {98,83,42};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_lts1.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 18;
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1_red";
	};
	class rds_weap_latarka_lts1_red: rds_weap_latarka_lts1
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		scope = 1;
		scopeArsenal = 0;
		displayname = "Flashlight 'LTS-1 (Red)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_red";
		class FlashLight
		{
			color[] = {98,15,0.7};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1_green";
	};
	class rds_weap_latarka_lts1_green: rds_weap_latarka_lts1_red
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayname = "Flashlight 'LTS-1 (Green)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_green";
		class FlashLight
		{
			color[] = {7,71,0};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1_vertical";
	};
	class rds_weap_latarka_lts1_vertical: rds_weap_latarka_lts1_red
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayname = "Flashlight 'LTS-1 (Vertical)'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Touristic flashlight 'LTS-1  (Vertical)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_Vertical";
		handAnim[] = {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_lts1_vertical.rtm"};
		class FlashLight
		{
			color[] = {9.9,7.3,1};
			ambient[] = {9.9,7.3,1};
			intensity = 15;
			size = 1;
			innerAngle = 300;
			outerAngle = 360;
			coneFadeCoef = 2.5;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.05;
				constant = 0;
				linear = 0;
				quadratic = 0;
				hardLimitStart = 0.02;
				hardLimitEnd = 8;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1";
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class Proxyrds_apteczka_proxy: ProxyWeapon
	{
		model = "\rds_a2port_civ\items\rds_apteczka_proxy";
		simulation = "maverickweapon";
	};
	class Proxyrds_spare_lada_proxy: ProxyWeapon
	{
		model = "\rds_a2port_civ\sparewheels\rds_spare_lada_proxy";
		simulation = "maverickweapon";
	};
	class Proxyrds_to11_pudelko: Proxyrds_spare_lada_proxy
	{
		model = "\rds_a2port_civ\items\rds_to11_pudelko";
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgMods
{
	class Mod_Base;
	class RDS_CIV_PACK: Mod_Base
	{
		author = "reyhard";
		picture = "rds_a2port_civ\mod.paa";
		logo = "rds_a2port_civ\mod.paa";
		logoOver = "rds_a2port_civ\mod.paa";
		logoSmall = "rds_a2port_civ\mod.paa";
		dlcColor[] = {0,0,0,1};
		fieldManualTopicAndHint[] = {};
		hideName = 1;
		hidePicture = 0;
		tooltip = "RDS Civilian Pack";
		tooltipOwned = "RDS Civilian Pack";
		name = "RDS Civilian Pack";
		overview = "Civilian pack containing upgraded A2 assests";
		action = "https://forums.bistudio.com/topic/170165-rds-a2-civilian-pack/";
		dir = "@RDS";
	};
};
class CfgVehicles
{
	class Wreck_base_F;
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Bicycle;
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitEngine;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F{};
	class Truck_F: Car_F
	{
		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class AnimationSources;
	};
	class RDS_Base_Car: Car_F
	{
		getInRadius = 0.5;
	};
	class RDS_Base_Truck: Truck_F{};
	class RDS_Ikarus_Base: Truck_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Ikarus_Base.paa";
		model = "\rds_a2port_civ\Ikarus\ikarus.p3d";
		icon = "\rds_a2port_civ\data\map_ico\icomap_Bus_CA.paa";
		picture = "\rds_a2port_civ\data\ico\ikarus_pic_ca.paa";
		mapsize = 11;
		displayName = "Ikarus 260.03";
		hiddenselections[] = {"Camo1","Camo2","Camo3"};
		hiddenselectionstextures[] = {"\rds_a2port_civ\Ikarus\data\bus_exterior_co.paa","\rds_a2port_civ\ikarus\data\bus_interior_co.paa","\rds_a2port_civ\ikarus\data\bus_windows_ca.paa"};
		driveraction = "RDS_Ikarus_Driver";
		attenuationEffectType = "OpenCarAttenuation";
		armor = 32;
		cost = 50000;
		transportMaxBackpacks = 6;
		transportSoldier = 23;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		driverRightLegAnimName = "pedalR";
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\d1cls_r","db+5",1,69};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\d1opn_r","db+5",1,55};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\Ikarus_Start","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\Ikarus_Start","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\Ikarus_Stop","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\Ikarus_Stop","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_Idle","db+4",1,150};
				frequency = "0.9 + ((rpm/2200) factor[(200/2200),(650/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(750/2200),(700/2200)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_900_Ex","db+2",1,200};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1400/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(670/2200),(800/2200)])* ((rpm/2200) factor[(1400/2200),(1300/2200)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1400_Ex","db+2",1,240};
				frequency = "0.8 + ((rpm/2200) factor[(1200/2200),(1600/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1300/2200),(1350/2200)])* ((rpm/2200) factor[(1650/2200),(1550/2200)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1700_Ex","db+2",1,280};
				frequency = "0.8 + ((rpm/2200) factor[(1300/2200),(1700/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1600/2200),(1650/2200)])* ((rpm/2200) factor[(1800/2200),(1750/2200)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1850_Ex","db+2",1,320};
				frequency = "0.8 + ((rpm/2200) factor[(1700/2200),(1950/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1750/2200),(1800/2200)])* ((rpm/2200) factor[(1950/2200),(1920/2200)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1950_Ex","db+2",1,360};
				frequency = "0.8 + ((rpm/2200) factor[(1800/2200),(2000/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1920/2200),(1940/2200)])* ((rpm/2200) factor[(2050/2200),(2020/2200)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_2000","db+2",1,420};
				frequency = "0.95 + ((rpm/2200) factor[(1950/2200),(2400/2200)])*0.15";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1990/2200),(2050/2200)])* ((rpm/2200) factor[(2250/2200),(2200/2200)]))";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_Idle","db+3",1,200};
				frequency = "0.9 + ((rpm/2200) factor[(200/2200),(650/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(750/2200),(700/2200)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_900_Ex","db+2",1,250};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1400/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(670/2200),(800/2200)])* ((rpm/2200) factor[(1400/2200),(1300/2200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1400_Ex","db+2",1,280};
				frequency = "0.8 + ((rpm/2200) factor[(1200/2200),(1600/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1300/2200),(1350/2200)])* ((rpm/2200) factor[(1650/2200),(1550/2200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1700_Ex","db+2",1,320};
				frequency = "0.8 + ((rpm/2200) factor[(1300/2200),(1700/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1600/2200),(1650/2200)])* ((rpm/2200) factor[(1800/2200),(1750/2200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1850_Ex","db+2",1,360};
				frequency = "0.8 + ((rpm/2200) factor[(1700/2200),(1950/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1750/2200),(1800/2200)])* ((rpm/2200) factor[(1950/2200),(1920/2200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1950_Ex","db+0",1,400};
				frequency = "0.8 + ((rpm/2200) factor[(1800/2200),(2000/2200)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1920/2200),(1940/2200)])* ((rpm/2200) factor[(2050/2200),(2020/2200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_2000_Ex","db+2",1,450};
				frequency = "0.9 + ((rpm/2200) factor[(1950/2200),(2400/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1990/2200),(2050/2200)])* ((rpm/2200) factor[(2250/2200),(2200/2200)]))";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_Idle","db+2",1};
				frequency = "0.9 + ((rpm/2200) factor[(200/2200),(650/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(750/2200),(700/2200)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_900","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1400/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(670/2200),(800/2200)])* ((rpm/2200) factor[(1400/2200),(1300/2200)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1400","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1200/2200),(1600/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1300/2200),(1350/2200)])* ((rpm/2200) factor[(1650/2200),(1550/2200)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1700","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1300/2200),(1700/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1600/2200),(1650/2200)])* ((rpm/2200) factor[(1800/2200),(1750/2200)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1850","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1700/2200),(1950/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1750/2200),(1800/2200)])* ((rpm/2200) factor[(1950/2200),(1920/2200)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1950","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1800/2200),(2000/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1920/2200),(1940/2200)])* ((rpm/2200) factor[(2050/2200),(2020/2200)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_2000","db+3",1};
				frequency = "0.95 + ((rpm/2200) factor[(1950/2200),(2400/2200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1990/2200),(2050/2200)])* ((rpm/2200) factor[(2250/2200),(2200/2200)]))";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_900","db+2",1};
				frequency = "0.9 + ((rpm/2200) factor[(200/2200),(650/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(750/2200),(700/2200)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1400","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1400/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(670/2200),(800/2200)])* ((rpm/2200) factor[(1400/2200),(1300/2200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1700","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1200/2200),(1600/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1300/2200),(1350/2200)])* ((rpm/2200) factor[(1650/2200),(1550/2200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1850","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1300/2200),(1700/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1600/2200),(1650/2200)])* ((rpm/2200) factor[(1800/2200),(1750/2200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_1950","db+3",1};
				frequency = "0.8 + ((rpm/2200) factor[(1700/2200),(1950/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1750/2200),(1800/2200)])* ((rpm/2200) factor[(1950/2200),(1920/2200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_2000","db+2",1};
				frequency = "0.8 + ((rpm/2200) factor[(1800/2200),(2000/2200)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1920/2200),(1940/2200)])* ((rpm/2200) factor[(2050/2200),(2020/2200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_2000","db+2",1};
				frequency = "0.9 + ((rpm/2200) factor[(1950/2200),(2400/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1990/2200),(2050/2200)])* ((rpm/2200) factor[(2250/2200),(2200/2200)]))";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+3",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"rds_a2port_civ\data\sounds\Ikarus_Noise_In","db+3",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"rds_a2port_civ\data\sounds\ikarus_breaking","db+10",1};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"rds_a2port_civ\data\sounds\ikarus_breaking","db+10",1};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class Turrets{};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		unitInfoType = "RDS_RscUnitInfoCar";
		cargoaction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo02","Truck_Cargo02","Truck_Cargo03","Truck_Cargo03","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Truck_Cargo04","Ikarus_Cargo","Ikarus_Cargo","Ikarus_Cargo","Ikarus_Cargo"};
		memoryPointsGetInCargo[] = {"pos cargo1","pos cargo","pos cargo1","pos cargo","pos cargo2","pos cargo1","pos cargo1","pos cargo1","pos cargo2","pos cargo2","pos cargo","pos cargo","pos cargo2","pos cargo","pos cargo2","pos cargo1","pos cargo","pos cargo","pos cargo","pos cargo","pos cargo1","pos cargo2","pos cargo2"};
		memoryPointsGetInCargoDir[] = {"pos cargo1 dir","pos cargo dir","pos cargo1 dir","pos cargo dir","pos cargo2 dir","pos cargo1 dir","pos cargo1 dir","pos cargo1 dir","pos cargo2 dir","pos cargo2 dir","pos cargo dir","pos cargo dir","pos cargo2 dir","pos cargo dir","pos cargo2 dir","pos cargo1 dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo dir","pos cargo1 dir","pos cargo2 dir","pos cargo2 dir"};
		driverDoor = "Doors_1";
		cargoDoors[] = {"Doors_2","Doors_1","Doors_2","Doors_1","Doors_3","Doors_2","Doors_2","Doors_2","Doors_3","Doors_3","Doors_1","Doors_1","Doors_3","Doors_1","Doors_3","Doors_2","Doors_1","Doors_1","Doors_1","Doors_1","Doors_2","Doors_1","Doors_1","Doors_2","Doors_3","Doors_2","Doors_3","Doors_3"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class cargolights_hide: lights_hide{};
			class Doors_1
			{
				source = "door";
				animPeriod = 1.7;
				sound = "RDS_Ikarus_Door1";
				soundPosition = "pos cargo dir";
			};
			class Doors_2: Doors_1
			{
				sound = "RDS_Ikarus_Door1";
				soundPosition = "pos cargo1 dir";
			};
			class Doors_3: Doors_1
			{
				sound = "RDS_Ikarus_Door2";
				soundPosition = "pos cargo2 dir";
			};
			class blinker_L: Doors_1
			{
				sound = "RDS_Blinker";
				soundPosition = "blinker_sound";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Doors";
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "(player == driver this) && (this animationPhase 'door_1' < 0.5)";
				statement = "[vehicle player,1] call rds_fnc_ikarusDoors";
				onlyForPlayer = 1;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Doors";
				condition = "(player == driver this) && (this animationPhase 'door_1' > 0.5)";
				statement = "[vehicle player,0] call rds_fnc_ikarusDoors";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
			class cargolights_toggle: lights_toggle
			{
				shortcut = "";
				displayName = "Toggle passanger comparment lights";
				statement = "this animate ['cargolights_hide',abs((this animationPhase 'cargolights_hide')-1)]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitFuel
			{
				armor = 2.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 2.0;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.07;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
		};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class Damage
		{
			mat[] = {"rds_a2port_civ\Ikarus\Data\Bus_exterior.rvmat","rds_a2port_civ\Ikarus\Data\Bus_exterior_damage.rvmat","rds_a2port_civ\Ikarus\Data\Bus_exterior_destruct.rvmat","rds_a2port_civ\Ikarus\Data\Bus_interior.rvmat","rds_a2port_civ\Ikarus\Data\Bus_interior_damage.rvmat","rds_a2port_civ\Ikarus\Data\Bus_interior_destruct.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows_damage.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows_damage.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows_in.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows_in_damage.rvmat","rds_a2port_civ\Ikarus\Data\Bus_windows_in_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 1.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cargo_light_1: cabin
			{
				color[] = {800,900,750};
				position = "cargo_light_1";
				direction = "cargo_light_1_dir";
				hitpoint = "cargo_light_1";
				selection = "cargo_light_1";
				intensity = 71;
				useFlare = 0;
				coneFadeCoef = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 70;
					hardLimitStart = 2;
					hardLimitEnd = 3;
				};
			};
			class cargo_light_2: cargo_light_1
			{
				position = "cargo_light_2";
				direction = "cargo_light_2_dir";
				hitpoint = "cargo_light_2";
				selection = "cargo_light_2";
			};
			class cargo_light_3: cargo_light_1
			{
				position = "cargo_light_3";
				direction = "cargo_light_3_dir";
				hitpoint = "cargo_light_3";
				selection = "cargo_light_3";
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirrorSmall
			{
				renderTarget = "rendertarget3";
				class CameraView1
				{
					pointPosition = "m4p";
					pointDirection = "m4d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "Brigadertrans";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Ikarus\data\bus_exterior_co.paa","\rds_a2port_civ\ikarus\data\bus_interior_co.paa","\rds_a2port_civ\ikarus\data\bus_windows_ca.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class Desert: standard
			{
				displayName = "Khan Mohad (TK)";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Ikarus\data\bus_exterior_eciv_co.paa","\rds_a2port_civ\ikarus\data\bus_interior_eciv_co.paa","\rds_a2port_civ\ikarus\data\bus_windows_eciv_ca.paa"};
			};
		};
		textureList[] = {"standard",1,"Desert",0};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_lock_cargo
			{
				displayName = "Driver door control";
				tooltip = "Define if passangers are able to get in/out on their own. If true, driver needs to open doors to allow passanger movement";
				property = "rds_lock_cargo";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value,true];_this lockCargo _value";
				defaultValue = 0;
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Doors_1
			{
				displayName = "Open 1st doors";
				property = "Doors_1";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Doors_2: Doors_1
			{
				displayName = "Open 2nd doors";
				property = "Doors_2";
			};
			class Doors_3: Doors_1
			{
				displayName = "Open 3rd doors";
				property = "Doors_3";
			};
			class cargolights_hide: Doors_1
			{
				displayName = "Turn off cargo lights";
				tooltip = "Disable light in passenger comparment";
				property = "cargolights_hide";
				expression = "_this animate ['%s',_value,true]";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				dammaged = "_this call rds_fnc_fuelLeak;";
				getIn = "_this call rds_fnc_ikarusDoors_handler";
				getOut = "_this call rds_fnc_ikarusDoors_handler";
			};
		};
		normalSpeedForwardCoef = 0.7;
		enginePower = 142;
		maxOmega = 230.38;
		peakTorque = 696;
		idleRPM = 600;
		redRpm = 2200;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 80;
		fuelCapacity = 78;
		wheelCircumference = 3.233;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-6.009,"N",0,"D1",5.81,"D2",2.98,"D3",1.992,"D4",1.438,"D5",1.0};
			TransmissionRatios[] = {"High",5.194};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 2;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 20;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/2200","0/696"},{"581/2200","452/696"},{"1001/2200","621/696"},{"1300/2200","696/696"},{"1599/2200","691/696"},{"1901/2200","675/696"},{"2101/2200","654/696"},{"2299/2200","0/696"}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				width = "0.45";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 50;
				MOI = 12.7;
				dampingRate = 0.1;
				maxBrakeTorque = 4500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 1985.5;
				springStrength = 85025;
				springDamperRate = 8700;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 12.5;
				latStiffY = 180.0;
				frictionVsSlipGraph[] = {{0,1.2},{0.5,1.13},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
			};
		};
	};
	class RDS_Ikarus_Civ_Base: RDS_Ikarus_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Ikarus_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_Ikarus_Civ_01: RDS_Ikarus_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Ikarus_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_Ikarus_Civ_02: RDS_Ikarus_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Ikarus_Civ_02.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Ikarus 260.03 (TK)";
		hiddenselectionstextures[] = {"\rds_a2port_civ\Ikarus\data\bus_exterior_eciv_co.paa","\rds_a2port_civ\ikarus\data\bus_interior_eciv_co.paa","\rds_a2port_civ\ikarus\data\bus_windows_eciv_ca.paa"};
	};
	class RDS_Lada_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Base.paa";
		model = "\rds_a2port_civ\Lada\Lada";
		icon = "\rds_a2port_civ\data\map_ico\icon_skoda_ca.paa";
		picture = "\rds_a2port_civ\data\ico\vaz2103_pic_ca.paa";
		mapsize = 5;
		displayName = "VAZ-2103";
		driveraction = "RDS_Golf_Driver";
		getInRadius = 1.5;
		attenuationEffectType = "OpenCarAttenuation";
		armor = 22;
		cost = 10000;
		transportMaxBackpacks = 6;
		transportSoldier = 3;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverRightLegAnimName = "pedalR";
		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\lada_door","db+10",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\lada_door","db+10",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\lada_int_start","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\lada_ext_start","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\lada_int_stop","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\lada_ext_stop","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+6",1,150};
				frequency = "0.9 + ((rpm/6000) factor[(200/6000),(1150/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(200/6000),(500/6000)])* ((rpm/6000) factor[(900/6000),(700/6000)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+6",1,200};
				frequency = "0.8 + ((rpm/6000) factor[(900/6000),(2100/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(870/6000),(1100/6000)])* ((rpm/6000) factor[(2100/6000),(1300/6000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+6",1,240};
				frequency = "0.8 + ((rpm/6000) factor[(1300/6000),(3100/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(1250/6000),(2050/6000)])* ((rpm/6000) factor[(3100/6000),(2300/6000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+6",1,280};
				frequency = "0.8 + ((rpm/6000) factor[(2200/6000),(4100/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(2250/6000),(3050/6000)])* ((rpm/6000) factor[(4100/6000),(3300/6000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+6",1,320};
				frequency = "0.8 + ((rpm/6000) factor[(3300/6000),(4900/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(3250/6000),(4050/6000)])* ((rpm/6000) factor[(4870/6000),(4200/6000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+6",1,360};
				frequency = "0.8 + ((rpm/6000) factor[(4200/6000),(6200/6000)])*0.2";
				volume = "engineOn*camPos*(((rpm/6000) factor[(4150/6000),(4800/6000)])* ((rpm/6000) factor[(6150/6000),(5150/6000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+6",1,420};
				frequency = "0.95 + ((rpm/6000) factor[(5100/6000),(6900/6000)])*0.15";
				volume = "engineOn*camPos*((rpm/6000) factor[(5100/6000),(6100/6000)])";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+5",1,200};
				frequency = "0.9 + ((rpm/6000) factor[(200/6000),(1150/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(200/6000),(500/6000)])* ((rpm/6000) factor[(900/6000),(700/6000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+5",1,250};
				frequency = "0.8 + ((rpm/6000) factor[(900/6000),(2100/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(870/6000),(1100/6000)])* ((rpm/6000) factor[(2100/6000),(1300/6000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+4",1,280};
				frequency = "0.8 + ((rpm/6000) factor[(1300/6000),(3100/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(1250/6000),(2050/6000)])* ((rpm/6000) factor[(3100/6000),(2300/6000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+3",1,320};
				frequency = "0.8 + ((rpm/6000) factor[(2200/6000),(4100/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(2250/6000),(3050/6000)])* ((rpm/6000) factor[(4100/6000),(3300/6000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+2",1,360};
				frequency = "0.8 + ((rpm/6000) factor[(3300/6000),(4900/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(3250/6000),(4050/6000)])* ((rpm/6000) factor[(4870/6000),(4200/6000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db0",1,400};
				frequency = "0.8 + ((rpm/6000) factor[(4200/6000),(6200/6000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(4150/6000),(4800/6000)])* ((rpm/6000) factor[(6150/6000),(5150/6000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db2",1,450};
				frequency = "0.9 + ((rpm/6000) factor[(5100/6000),(6900/6000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6000) factor[(5100/6000),(6100/6000)])";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_Idle","db+3",1};
				frequency = "0.9 + ((rpm/6000) factor[(200/6000),(1150/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(200/6000),(500/6000)])* ((rpm/6000) factor[(900/6000),(700/6000)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(900/6000),(2100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(870/6000),(1100/6000)])* ((rpm/6000) factor[(2100/6000),(1300/6000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(1300/6000),(3100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(1250/6000),(2050/6000)])* ((rpm/6000) factor[(3100/6000),(2300/6000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(2200/6000),(4100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(2250/6000),(3050/6000)])* ((rpm/6000) factor[(4100/6000),(3300/6000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(3300/6000),(4900/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(3250/6000),(4050/6000)])* ((rpm/6000) factor[(4870/6000),(4200/6000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(4200/6000),(6200/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/6000) factor[(4150/6000),(4800/6000)])* ((rpm/6000) factor[(6150/6000),(5150/6000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.95 + ((rpm/6000) factor[(5100/6000),(6900/6000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/6000) factor[(5100/6000),(6100/6000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+3",1};
				frequency = "0.9 + ((rpm/6000) factor[(200/6000),(1150/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(200/6000),(500/6000)])* ((rpm/6000) factor[(900/6000),(700/6000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(900/6000),(2100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(870/6000),(1100/6000)])* ((rpm/6000) factor[(2100/6000),(1300/6000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(1300/6000),(3100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(1250/6000),(2050/6000)])* ((rpm/6000) factor[(3100/6000),(2300/6000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(2200/6000),(4100/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(2250/6000),(3050/6000)])* ((rpm/6000) factor[(4100/6000),(3300/6000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(3300/6000),(4900/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(3250/6000),(4050/6000)])* ((rpm/6000) factor[(4870/6000),(4200/6000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.8 + ((rpm/6000) factor[(4200/6000),(6200/6000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6000) factor[(4150/6000),(4800/6000)])* ((rpm/6000) factor[(6150/6000),(5150/6000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.9 + ((rpm/6000) factor[(5100/6000),(6900/6000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6000) factor[(5100/6000),(6100/6000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+4",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+2",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class Turrets{};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		cargoaction[] = {"RDS_Golf_Cargo01","RDS_Golf_Cargo02","RDS_Golf_Cargo02"};
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4"};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class Door_LF
			{
				source = "door";
				animPeriod = 1.0;
				sound = "RDS_Lada_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition = "door_1_2_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_2_2_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_1_axis";
			};
			class Trunk: Door_LF
			{
				sound = "RDS_Trunk";
				soundPosition = "tailgate_axis";
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Trunk";
				position = "pos cargo dir 4";
				radius = 1;
				showWindow = 0;
				condition = "(this animationPhase 'trunk' < 0.5)";
				statement = "this animateDoor ['trunk',1]";
				onlyForPlayer = 0;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Trunk";
				condition = "(this animationPhase 'trunk' > 0.5)";
				statement = "this animateDoor ['trunk',0]";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare
			{
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values
				{
					class Random
					{
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled
					{
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled
					{
						name = "Never";
						default = 2;
						value = 2;
					};
				};
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Left blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Door_LF
			{
				displayName = "Open front left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF
			{
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class Door_LB: Door_LF
			{
				displayName = "Open rear left door";
				property = "Door_LB";
			};
			class Door_RB: Door_LF
			{
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Trunk: Door_LF
			{
				displayName = "Open trunk";
				property = "Trunk";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				dammaged = "_this call rds_fnc_fuelLeak;";
				containerOpened = " (_this + [0,'trunk']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'trunk']) call rds_fnc_containerActions";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.675;
				passThrough = 0.3;
				radius = 0.2;
			};
			class HitFuel
			{
				armor = 0.8;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 1.5;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
		};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class Damage
		{
			mat[] = {"rds_a2port_civ\Lada\Data\Lada_chrome.rvmat","rds_a2port_civ\Lada\Data\Lada_chrome.rvmat","rds_a2port_civ\Lada\Data\Lada_chrome_destruct.rvmat","rds_a2port_civ\Lada\Data\Lada_glass.rvmat","rds_a2port_civ\Lada\Data\Lada_glass_damage.rvmat","rds_a2port_civ\Lada\Data\Lada_glass_damage.rvmat","rds_a2port_civ\Lada\Data\Lada_glass_in.rvmat","rds_a2port_civ\Lada\Data\Lada_glass_in_damage.rvmat","rds_a2port_civ\Lada\Data\Lada_glass_in_damage.rvmat","rds_a2port_civ\Lada\Data\Lada_mat.rvmat","rds_a2port_civ\Lada\Data\Lada_mat_damage.rvmat","rds_a2port_civ\Lada\Data\Lada_mat_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 5;
				intensity = 2.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		normalSpeedForwardCoef = 0.95;
		enginePower = 56.7;
		maxOmega = 628.32;
		peakTorque = 106;
		idleRPM = 600;
		redRpm = 6000;
		terrainCoef = 1.05;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 156;
		fuelCapacity = 50;
		wheelCircumference = 1.866;
		antiRollbarForceCoef = 10.0;
		antiRollbarForceLimit = 40.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 180;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.85};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.87,"N",0,"D1",3.85,"D2",2.3,"D3",1.49,"D4",1.0};
			TransmissionRatios[] = {"High",3.994};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 85;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/6000","0/106"},{"798/6000","89/106"},{"1398/6000","92/106"},{"2298/6000","98/106"},{"3402/6000","106/106"},{"4902/6000","103/106"},{"5598/6000","95/106"},{"6300/6000","0/106"}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				width = "0.05";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 17;
				MOI = 19.0;
				dampingRate = 0.1;
				maxBrakeTorque = 1200;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 185.5;
				springStrength = 45025;
				springDamperRate = 4700;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 18.2;
				latStiffY = 160.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 2000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 2000;
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "White";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\Lada\Data\lada_white_co.paa","rds_a2port_civ\Lada\Data\lada_glass_ca.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class Red: standard
			{
				displayName = "Red";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\Lada\Data\lada_red_co.paa","rds_a2port_civ\Lada\Data\lada_glass_ca.paa"};
			};
			class Green: standard
			{
				displayName = "Green";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\Lada\Data\lada_eciv1_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV1_CA.paa"};
			};
			class Decorated: standard
			{
				displayName = "Decorated";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\Lada\Data\lada_eciv2_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV2_CA.paa"};
			};
		};
		textureList[] = {"standard",1,"Red",0,"Green",0,"Decorated",0};
		hiddenselections[] = {"Camo1","Camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_white_co.paa","rds_a2port_civ\Lada\Data\lada_glass_ca.paa"};
	};
	class RDS_Lada_Civ_Base: RDS_Lada_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_Lada_Civ_01: RDS_Lada_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_Lada_Civ_02: RDS_Lada_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_02.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "VAZ-2103 (Red)";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\Lada_red_CO.paa","rds_a2port_civ\Lada\Data\lada_glass_ca.paa"};
	};
	class RDS_Lada_Civ_03: RDS_Lada_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_03.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "VAZ-2103 (Green)";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_eciv1_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV1_CA.paa"};
	};
	class RDS_Lada_Civ_04: RDS_Lada_Civ_03
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_04.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "VAZ-2103 (Decorated)";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_eciv2_co.paa","rds_a2port_civ\Lada\Data\Lada_glass_ECIV2_CA.paa"};
	};
	class RDS_Lada_Civ_05: RDS_Lada_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Civ_05.paa";
		crew = "C_man_1";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "VAZ-2103 (Militia)";
		model = "\rds_a2port_civ\Lada\Lada_LM";
		picture = "\rds_a2port_civ\data\ico\vaz2103_police_pic_ca.paa";
		hiddenselectionstextures[] = {"rds_a2port_civ\Lada\Data\lada_lm_co.paa"};
		class Reflectors: Reflectors
		{
			class Left: LSvetla{};
			class Right: RSvetla{};
			class Right2: Right2{};
			class Left2: Left2{};
			class Long_Left: Long_Left{};
			class Long_Right: Long_Right{};
			class Long_Right2: Long_Right2{};
			class Long_Left2: Long_Left2{};
			class cabin: cabin{};
			class Majak1
			{
				color[] = {0.1,0.25,0.8};
				ambient[] = {0.001,0.00025,2e-005};
				intensity = 10000;
				size = 1;
				innerAngle = 125;
				outerAngle = 175;
				coneFadeCoef = 10;
				direction = "majak ligth 1 end";
				position = "majak ligth 1 start";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 50;
				selection = "majak";
				hitpoint = "";
				activeLight = 1;
				dayLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 15;
					quadratic = 7;
					hardLimitStart = 7;
					hardLimitEnd = 10;
				};
			};
			class Majak2: Majak1
			{
				direction = "majak ligth 2 end";
				hitpoint = "";
				position = "majak ligth 2 start";
				selection = "";
			};
		};
		aggregateReflectors[] = {{"Left","Right"},{"Long_Left2","Long_Right2"}};
		class textureSources
		{
			class standard
			{
				displayName = "Police";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Lada\data\lada_lm_co.paa"};
				factions[] = {"rds_rus_civ"};
			};
		};
		textureList[] = {"standard",1};
		class UserActions: UserActions
		{
			class Syrena
			{
				displayName = "Siren toggle";
				position = "pos driver";
				radius = 3;
				showWindow = 0;
				condition = "player == driver this";
				statement = "[this] spawn rds_fnc_syrena";
				onlyForPlayer = 1;
				shortcut = "TactToggle";
			};
			class Syrena_dzwiek: Syrena
			{
				displayName = "Siren toggle sound";
				condition = "player == driver this && this getVariable ['rds_siren',false]";
				statement = "this setVariable ['rds_siren_sound',not(this getVariable ['rds_siren_sound',false]),true] ";
				shortcut = "binocular";
			};
		};
		class AnimationSources: AnimationSources
		{
			class majak_hide: longlights_hide
			{
				initPhase = 1;
			};
			class siren_handler
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
				mass = 1;
				displayName = "turn on siren";
				onPhaseChanged = "_this spawn rds_fnc_syrena";
			};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rds_random_spare: rds_random_spare{};
			class rds_blinkers: rds_blinkers{};
			class Door_LF: Door_LF{};
			class Door_RF: Door_RF{};
			class Door_LB: Door_LB{};
			class Door_RB: Door_RB{};
			class Trunk: Trunk{};
			class rds_siren
			{
				displayName = "Turn on siren";
				property = "rds_siren";
				control = "CheckboxNumber";
				expression = "[_this,_value] spawn rds_fnc_syrena";
				defaultValue = -1;
			};
			class rds_siren_sound: rds_siren
			{
				displayName = "Turn off siren sound";
				property = "rds_siren_sound";
				control = "Checkbox";
				defaultValue = 0;
				expression = "_this setVariable ['rds_siren_sound',not(_value),true]";
			};
		};
	};
	class RDS_Lada_Wreck: Wreck_base_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Lada_Wreck.paa";
		_generalmacro = "RDS_Lada_Wreck";
		author = "Bohemia Interactive";
		displayname = "VAZ-2103 Wreck";
		icon = "iconObject_2x5";
		mapsize = 4.91;
		model = "\rds_a2port_civ\Lada\Lada_wrecked";
		scope = 2;
	};
	class RDS_S1203_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_S1203_Base.paa";
		model = "\rds_a2port_civ\S1203\S1203";
		icon = "\rds_a2port_civ\data\map_ico\icon_S1203_ca.paa";
		picture = "\rds_a2port_civ\data\ico\s1203_pic_ca.paa";
		mapsize = 6;
		displayName = "Skoda 1203";
		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;
		getInRadius = 1.5;
		driveraction = "RDS_S1203_driver";
		attenuationEffectType = "OpenCarAttenuation";
		armor = 22;
		cost = 10000;
		wheelDamageRadiusCoef = 0.89;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		driverRightLegAnimName = "pedalR";
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\lada_door","db+10",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\lada_door","db+10",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\lada_int_start","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\lada_ext_start","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\lada_int_stop","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\lada_ext_stop","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+11",1,150};
				frequency = "0.9 + ((rpm/5000) factor[(200/5000),(1150/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(200/5000),(500/5000)])* ((rpm/5000) factor[(950/5000),(700/5000)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+12",1,200};
				frequency = "0.8 + ((rpm/5000) factor[(900/5000),(1600/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(870/5000),(1000/5000)])* ((rpm/5000) factor[(1400/5000),(1300/5000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+11",1,240};
				frequency = "0.8 + ((rpm/5000) factor[(1300/5000),(2400/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(1250/5000),(1450/5000)])* ((rpm/5000) factor[(2400/5000),(2300/5000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+10",1,280};
				frequency = "0.8 + ((rpm/5000) factor[(2000/5000),(3700/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(2050/5000),(2350/5000)])* ((rpm/5000) factor[(3800/5000),(3500/5000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+9",1,320};
				frequency = "0.8 + ((rpm/5000) factor[(3000/5000),(4000/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(3050/5000),(3150/5000)])* ((rpm/5000) factor[(3870/5000),(3700/5000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+8",1,360};
				frequency = "0.8 + ((rpm/5000) factor[(3900/5000),(4500/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(3650/5000),(3800/5000)])* ((rpm/5000) factor[(4650/5000),(4350/5000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+8",1,420};
				frequency = "0.95 + ((rpm/5000) factor[(4100/5000),(5400/5000)])*0.15";
				volume = "engineOn*camPos*((rpm/5000) factor[(4200/5000),(5000/5000)])";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+6",1,200};
				frequency = "0.9 + ((rpm/5000) factor[(200/5000),(1150/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(200/5000),(500/5000)])* ((rpm/5000) factor[(950/5000),(700/5000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+5",1,250};
				frequency = "0.8 + ((rpm/5000) factor[(900/5000),(1600/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(870/5000),(1000/5000)])* ((rpm/5000) factor[(1400/5000),(1300/5000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+4",1,280};
				frequency = "0.8 + ((rpm/5000) factor[(1300/5000),(2400/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(1250/5000),(1450/5000)])* ((rpm/5000) factor[(2400/5000),(2300/5000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+3",1,320};
				frequency = "0.8 + ((rpm/5000) factor[(2000/5000),(3700/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(2050/5000),(2350/5000)])* ((rpm/5000) factor[(3800/5000),(3500/5000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+2",1,360};
				frequency = "0.8 + ((rpm/5000) factor[(3000/5000),(4000/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(3050/5000),(3150/5000)])* ((rpm/5000) factor[(3870/5000),(3700/5000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+0",1,400};
				frequency = "0.8 + ((rpm/5000) factor[(3900/5000),(4500/5000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(3650/5000),(3800/5000)])* ((rpm/5000) factor[(4650/5000),(4350/5000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+2",1,450};
				frequency = "0.9 + ((rpm/5000) factor[(4100/5000),(5400/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/5000) factor[(4200/5000),(5000/5000)])";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_Idle","db+2",1};
				frequency = "0.9 + ((rpm/5000) factor[(200/5000),(1150/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(200/5000),(500/5000)])* ((rpm/5000) factor[(950/5000),(700/5000)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(900/5000),(1600/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(870/5000),(1000/5000)])* ((rpm/5000) factor[(1400/5000),(1300/5000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(1300/5000),(2400/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(1250/5000),(1450/5000)])* ((rpm/5000) factor[(2400/5000),(2300/5000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(2000/5000),(3700/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(2050/5000),(2350/5000)])* ((rpm/5000) factor[(3800/5000),(3500/5000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(3000/5000),(4000/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(3050/5000),(3150/5000)])* ((rpm/5000) factor[(3870/5000),(3700/5000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(3900/5000),(4500/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(3650/5000),(3800/5000)])* ((rpm/5000) factor[(4650/5000),(4350/5000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.95 + ((rpm/5000) factor[(4100/5000),(5400/5000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/5000) factor[(4200/5000),(5000/5000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+2",1};
				frequency = "0.9 + ((rpm/5000) factor[(200/5000),(1150/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(200/5000),(500/5000)])* ((rpm/5000) factor[(950/5000),(700/5000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(900/5000),(1600/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(870/5000),(1000/5000)])* ((rpm/5000) factor[(1400/5000),(1300/5000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(1300/5000),(2400/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(1250/5000),(1450/5000)])* ((rpm/5000) factor[(2400/5000),(2300/5000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(2000/5000),(3700/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(2050/5000),(2350/5000)])* ((rpm/5000) factor[(3800/5000),(3500/5000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(3000/5000),(4000/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(3050/5000),(3150/5000)])* ((rpm/5000) factor[(3870/5000),(3700/5000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+2",1};
				frequency = "0.8 + ((rpm/5000) factor[(3900/5000),(4500/5000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(3650/5000),(3800/5000)])* ((rpm/5000) factor[(4650/5000),(4350/5000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+3",1};
				frequency = "0.9 + ((rpm/5000) factor[(4100/5000),(5400/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/5000) factor[(4200/5000),(5000/5000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+2",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+2",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+2",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+2",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+4",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db+3",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db+3",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		transportMaxBackpacks = 6;
		transportSoldier = 3;
		cargoProxyIndexes[] = {1,2,3};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor = "Door_RC";
				gunnerAction = "passenger_flatground_2";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				memoryPointsGetInGunner = "pos cargo 4";
				memoryPointsGetInGunnerDir = "pos cargo dir 4";
				gunnerName = "Passenger (Left Seat)";
				gunnerCompartments = "Compartment3";
				proxyIndex = 4;
				lodTurnedIn = 1;
				lodTurnedOut = 1;
				maxElev = 18;
				minElev = -29;
				maxTurn = 20;
				minTurn = -30;
				isPersonTurret = 1;
				enabledByAnimationSource = "Door_RC";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_3";
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo 5";
				memoryPointsGetInGunnerDir = "pos cargo dir 5";
				proxyIndex = 5;
				maxTurn = 25;
				minTurn = -25;
				minElev = -29;
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = 0;
			};
			class Carrier
			{
				cargoBayDimensions[] = {"bbox_1_1_pos","bbox_1_2_pos"};
				disableHeightLimit = 0;
				maxLoadMass = 5000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
		};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		cargoaction[] = {"RDS_S1203_Cargo","RDS_S1203_Cargo02","RDS_S1203_Cargo01","RDS_S1203_cargo03"};
		hiddenselections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 3","pos cargo 3","pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 3","pos cargo dir 3","pos cargo dir 4"};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_RB","Door_RB","Door_RC"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment3"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class Door_LF
			{
				source = "door";
				animPeriod = 1.0;
				sound = "RDS_Lada_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_2_2_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_1_axis";
			};
			class Door_RC: Door_LF
			{
				sound = "RDS_Trunk";
				soundPosition = "door_3_1_axis";
			};
			class HitGlass1;
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
			class HitGlass8: HitGlass1
			{
				hitpoint = "HitGlass8";
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Trunk";
				position = "pos cargo dir 5";
				radius = 4;
				showWindow = 0;
				condition = "(this animationPhase 'BackDoor1' < 0.5)";
				statement = "this animateDoor ['Door_RC',1]";
				onlyForPlayer = 0;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Trunk";
				condition = "(this animationPhase 'BackDoor1' > 0.5)";
				statement = "this animateDoor ['Door_RC',0]";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare
			{
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values
				{
					class Random
					{
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled
					{
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled
					{
						name = "Never";
						default = 2;
						value = 2;
					};
				};
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Door_LF
			{
				displayName = "Open front left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF
			{
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class Door_RB: Door_LF
			{
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Door_RC: Door_LF
			{
				displayName = "Open trunk";
				property = "Door_RC";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				dammaged = "_this call rds_fnc_fuelLeak;";
				containerOpened = " (_this + [0,'Door_RC']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'Door_RC']) call rds_fnc_containerActions";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass7: HitGlass6
			{
				name = "glass7";
				visual = "glass7";
			};
			class HitGlass8: HitGlass6
			{
				name = "glass8";
				visual = "glass8";
			};
		};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class Damage
		{
			mat[] = {"rds_a2port_civ\S1203\Data\s1203_mat.rvmat","rds_a2port_civ\S1203\Data\s1203_mat_damage.rvmat","rds_a2port_civ\S1203\Data\s1203_mat_destruct.rvmat","rds_a2port_civ\S1203\Data\s1203_glass.rvmat","rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat","rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat","rds_a2port_civ\S1203\Data\s1203_glass_in.rvmat","rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat","rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 5;
				intensity = 2.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		normalSpeedForwardCoef = 0.9;
		enginePower = 37.5;
		maxOmega = 523.6;
		peakTorque = 88;
		idleRPM = 600;
		redRpm = 5000;
		terrainCoef = 1.1;
		turnCoef = 2.0;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 115;
		fuelCapacity = 50;
		wheelCircumference = 2.02;
		antiRollbarForceCoef = 13.6;
		antiRollbarForceLimit = 40.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 90;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.61,"N",0,"D1",4.27,"D2",2.46,"D3",1.51,"D4",1.0};
			TransmissionRatios[] = {"High",3.994};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 45;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/5000","0/88"},{"800/5000","57/88"},{"1400/5000","70/88"},{"2300/5000","81/88"},{"3000/5000","88/88"},{"3900/5000","85/88"},{"4600/5000","77/88"},{"5250/5000","0/88"}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				width = "0.05";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 23;
				MOI = 51.0;
				dampingRate = 0.1;
				maxBrakeTorque = 2200;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 245.5;
				springStrength = 42025;
				springDamperRate = 5400;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 11.5;
				latStiffY = 45.0;
				frictionVsSlipGraph[] = {{0,1.11},{0.5,1.1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 2000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 2000;
			};
		};
	};
	class RDS_S1203_Civ_Base: RDS_S1203_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_S1203_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_S1203_Civ_01: RDS_S1203_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_S1203_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class standard
			{
				displayName = "Blue";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class green: standard
			{
				displayName = "Green";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_green_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
			};
			class orange: standard
			{
				displayName = "Orange";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_orange_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
			};
			class silver: standard
			{
				displayName = "Silver";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_silver_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
			};
			class red: standard
			{
				displayName = "Red";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_red_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
			};
			class white: standard
			{
				displayName = "White";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_white_co.paa","rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};
			};
		};
		textureList[] = {"standard",0.16,"green",0.16,"orange",0.16,"silver",0.16,"red",0.16,"white",0.16};
	};
	class RDS_S1203_Civ_02: RDS_S1203_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_S1203_Civ_02.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Skoda 1203 (Ambulance)";
		model = "\rds_a2port_civ\S1203\S1203_ambulance";
		picture = "\rds_a2port_civ\data\ico\s1203_ambulance_pic_ca.paa";
		hiddenselections[] = {"camo1","camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_eur_co.paa","rds_a2port_civ\S1203\data\s1203_glass3_eur_ca.paa"};
		cargoaction[] = {"RDS_S1203_Cargo","RDS_LyingWounded","RDS_LyingWounded"};
		transportSoldier = 3;
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 4"};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_RC"};
		class Reflectors: Reflectors
		{
			class Left: LSvetla{};
			class Right: RSvetla{};
			class Right2: Right2{};
			class Left2: Left2{};
			class Long_Left: Long_Left{};
			class Long_Right: Long_Right{};
			class Long_Right2: Long_Right2{};
			class Long_Left2: Long_Left2{};
			class cabin: cabin{};
			class Majak1
			{
				color[] = {0.1,0.25,0.8};
				ambient[] = {0.001,0.00025,2e-005};
				intensity = 10000;
				size = 1;
				innerAngle = 125;
				outerAngle = 175;
				coneFadeCoef = 10;
				direction = "majak ligth 1 end";
				position = "majak ligth 1 start";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 50;
				selection = "majak";
				hitpoint = "";
				activeLight = 1;
				dayLight = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 15;
					quadratic = 7;
					hardLimitStart = 7;
					hardLimitEnd = 10;
				};
			};
			class Majak2: Majak1
			{
				direction = "majak ligth 2 end";
				hitpoint = "";
				position = "majak ligth 2 start";
				selection = "";
			};
		};
		aggregateReflectors[] = {{"Left","Right"},{"Long_Left2","Long_Right2"}};
		class UserActions: UserActions
		{
			class Syrena
			{
				displayName = "Siren toggle";
				position = "pos driver";
				radius = 3;
				showWindow = 0;
				condition = "player == driver this";
				statement = "[this] spawn rds_fnc_syrena";
				onlyForPlayer = 1;
				shortcut = "TactToggle";
			};
			class Syrena_dzwiek: Syrena
			{
				displayName = "Siren toggle sound";
				condition = "player == driver this && this getVariable ['rds_siren',false]";
				statement = "this setVariable ['rds_siren_sound',not(this getVariable ['rds_siren_sound',false]),true] ";
				shortcut = "binocular";
			};
		};
		class AnimationSources: AnimationSources
		{
			class majak_hide: longlights_hide
			{
				initPhase = 1;
			};
			class siren_handler
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
				mass = 1;
				displayName = "turn on siren";
				onPhaseChanged = "_this spawn rds_fnc_syrena";
			};
		};
		class Attributes: Attributes
		{
			class ObjectTexture: ObjectTexture{};
			class rds_random_spare: rds_random_spare{};
			class Door_LF: Door_LF{};
			class Door_RF: Door_RF{};
			class Door_RB: Door_RB{};
			class Door_RC: Door_RC{};
			class rds_blinkers: rds_blinkers{};
			class rds_siren
			{
				displayName = "Turn on siren";
				property = "rds_siren";
				control = "CheckboxNumber";
				expression = "[_this,_value] spawn rds_fnc_syrena";
				defaultValue = -1;
			};
			class rds_siren_sound: rds_siren
			{
				displayName = "Turn off siren sound";
				property = "rds_siren_sound";
				control = "Checkbox";
				defaultValue = 0;
				expression = "_this setVariable ['rds_siren_sound',not(_value),true]";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "European";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_eur_co.paa","rds_a2port_civ\S1203\data\s1203_glass3_eur_ca.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class TK: standard
			{
				displayName = "Takistan";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_co.paa","rds_a2port_civ\S1203\data\s1203_glass3_ca.paa"};
			};
		};
		textureList[] = {"standard",0.5,"TK",0.5};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 2;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
	};
	class RDS_S1203_Civ_03: RDS_S1203_Civ_02
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_S1203_Civ_03.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Skoda 1203 (Ambulance/TK)";
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_co.paa","rds_a2port_civ\S1203\data\s1203_glass3_ca.paa"};
	};
	class RDS_Gaz24_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Gaz24_Base.paa";
		model = "\rds_a2port_civ\volha\volha";
		icon = "\rds_a2port_civ\data\map_ico\icon_volha_ca.paa";
		picture = "\rds_a2port_civ\data\ico\gaz24_pic_ca.paa";
		mapsize = 5;
		displayName = "GAZ-24";
		getInRadius = 1.5;
		driveraction = "RDS_Volha_Driver";
		attenuationEffectType = "OpenCarAttenuation";
		armor = 22;
		cost = 10000;
		transportMaxBackpacks = 6;
		transportSoldier = 4;
		wheelDamageRadiusCoef = 0.89;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "gear";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";
		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		afmax = 200;
		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\lada_door","db+1",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\lada_door","db+1",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\lada_int_start","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\lada_ext_start","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\lada_int_stop","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\lada_ext_stop","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+6",1,150};
				frequency = "0.9 + ((rpm/4900) factor[(284/4900),(817/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(284/4900),(497/4900)])* ((rpm/4900) factor[(781/4900),(639/4900)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+6",1,200};
				frequency = "0.8 + ((rpm/4900) factor[(639/4900),(1491/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(618/4900),(781/4900)])* ((rpm/4900) factor[(1491/4900),(923/4900)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+6",1,240};
				frequency = "0.8 + ((rpm/4900) factor[(923/4900),(2201/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(888/4900),(1456/4900)])* ((rpm/4900) factor[(2201/4900),(1633/4900)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+6",1,280};
				frequency = "0.8 + ((rpm/4900) factor[(1598/4900),(2166/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(1598/4900),(2166/4900)])* ((rpm/4900) factor[(2912/4900),(2343/4900)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+6",1,320};
				frequency = "0.8 + ((rpm/4900) factor[(2343/4900),(3480/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(2308/4900),(2876/4900)])* ((rpm/4900) factor[(3458/4900),(2983/4900)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+6",1,360};
				frequency = "0.8 + ((rpm/4900) factor[(2983/4900),(4403/4900)])*0.2";
				volume = "engineOn*camPos*(((rpm/4900) factor[(2947/4900),(3409/4900)])* ((rpm/4900) factor[(4367/4900),(3657/4900)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+6",1,420};
				frequency = "0.95 + ((rpm/4900) factor[(3622/4900),(4900/4900)])*0.15";
				volume = "engineOn*camPos*((rpm/4900) factor[(3622/4900),(4432/4900)])";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_Idle","db+5",1,200};
				frequency = "0.9 + ((rpm/4900) factor[(284/4900),(817/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(284/4900),(497/4900)])* ((rpm/4900) factor[(781/4900),(639/4900)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_acceleration","db+5",1,250};
				frequency = "0.8 + ((rpm/4900) factor[(639/4900),(1491/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(618/4900),(781/4900)])* ((rpm/4900) factor[(1491/4900),(923/4900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+4",1,280};
				frequency = "0.8 + ((rpm/4900) factor[(923/4900),(2201/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(888/4900),(1456/4900)])* ((rpm/4900) factor[(2201/4900),(1633/4900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_low","db+3",1,320};
				frequency = "0.8 + ((rpm/4900) factor[(1598/4900),(2166/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(1598/4900),(2166/4900)])* ((rpm/4900) factor[(2912/4900),(2343/4900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_mid","db+2",1,360};
				frequency = "0.8 + ((rpm/4900) factor[(2343/4900),(3480/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(2308/4900),(2876/4900)])* ((rpm/4900) factor[(3458/4900),(2983/4900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+0",1,400};
				frequency = "0.8 + ((rpm/4900) factor[(2983/4900),(4403/4900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(2947/4900),(3409/4900)])* ((rpm/4900) factor[(4367/4900),(3657/4900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_ext_high","db+2",1,450};
				frequency = "0.9 + ((rpm/4900) factor[(3622/4900),(4900/4900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4900) factor[(3622/4900),(4432/4900)])";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_Idle","db+3",1};
				frequency = "0.9 + ((rpm/4900) factor[(284/4900),(817/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(284/4900),(497/4900)])* ((rpm/4900) factor[(781/4900),(639/4900)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(639/4900),(1491/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(618/4900),(781/4900)])* ((rpm/4900) factor[(1491/4900),(923/4900)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(923/4900),(2201/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(888/4900),(1456/4900)])* ((rpm/4900) factor[(2201/4900),(1633/4900)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(1598/4900),(2166/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(1598/4900),(2166/4900)])* ((rpm/4900) factor[(2912/4900),(2343/4900)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(2343/4900),(3480/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(2308/4900),(2876/4900)])* ((rpm/4900) factor[(3458/4900),(2983/4900)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(2983/4900),(4403/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4900) factor[(2947/4900),(3409/4900)])* ((rpm/4900) factor[(4367/4900),(3657/4900)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+1",1};
				frequency = "0.95 + ((rpm/4900) factor[(3622/4900),(4900/4900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/4900) factor[(3622/4900),(4432/4900)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_acceleration","db+4",1};
				frequency = "0.9 + ((rpm/4900) factor[(284/4900),(817/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(284/4900),(497/4900)])* ((rpm/4900) factor[(781/4900),(639/4900)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(639/4900),(1491/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(618/4900),(781/4900)])* ((rpm/4900) factor[(1491/4900),(923/4900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_low","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(923/4900),(2201/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(888/4900),(1456/4900)])* ((rpm/4900) factor[(2201/4900),(1633/4900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(1598/4900),(2166/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(1598/4900),(2166/4900)])* ((rpm/4900) factor[(2912/4900),(2343/4900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_mid","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(2343/4900),(3480/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(2308/4900),(2876/4900)])* ((rpm/4900) factor[(3458/4900),(2983/4900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+1",1};
				frequency = "0.8 + ((rpm/4900) factor[(2983/4900),(4403/4900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4900) factor[(2947/4900),(3409/4900)])* ((rpm/4900) factor[(4367/4900),(3657/4900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\lada_int_high","db+1",1};
				frequency = "0.9 + ((rpm/4900) factor[(3622/4900),(4900/4900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4900) factor[(3622/4900),(4432/4900)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+4",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+2",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class Turrets{};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		unitInfoType = "RDS_RscUnitInfoCar";
		cargoaction[] = {"RDS_Volha_Cargo","RDS_Volha_Cargo02","RDS_Volha_Cargo01","RDS_Golf_Cargo03"};
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4"};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB","Trunk"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment3"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class Door_LF
			{
				source = "door";
				animPeriod = 1.0;
				sound = "RDS_Lada_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition = "door_1_2_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_2_2_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_1_axis";
			};
			class Trunk: Door_LF
			{
				sound = "RDS_Trunk";
				soundPosition = "tailgate_axis";
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Trunk";
				position = "trunk_action";
				radius = 1;
				showWindow = 0;
				condition = "(this animationPhase 'trunk' < 0.5)";
				statement = "this animateDoor ['trunk',1]";
				onlyForPlayer = 0;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Trunk";
				condition = "(this animationPhase 'trunk' > 0.5)";
				statement = "this animateDoor ['trunk',0]";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare
			{
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values
				{
					class Random
					{
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled
					{
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled
					{
						name = "Never";
						default = 2;
						value = 2;
					};
				};
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Door_LF
			{
				displayName = "Open front left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF
			{
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class Door_LB: Door_LF
			{
				displayName = "Open rear left door";
				property = "Door_LB";
			};
			class Door_RB: Door_LF
			{
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Trunk: Door_LF
			{
				displayName = "Open trunk";
				property = "Trunk";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				dammaged = "_this call rds_fnc_fuelLeak;";
				containerOpened = "(_this + [0,'trunk']) call rds_fnc_containerActions";
				containerClosed = "(_this + [1,'trunk']) call rds_fnc_containerActions";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
		};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class Damage
		{
			mat[] = {"rds_a2port_civ\Volha\Data\Volha_ECIV.rvmat","rds_a2port_civ\Volha\Data\Volha_ECIV_damage.rvmat","rds_a2port_civ\Volha\Data\Volha_ECIV_destruct.rvmat","rds_a2port_civ\Volha\Data\Volha_Glass_ECIV.rvmat","rds_a2port_civ\Volha\Data\Volha_Glass_ECIV_damage.rvmat","rds_a2port_civ\Volha\Data\Volha_Glass_ECIV_destruct.rvmat","rds_a2port_civ\Volha\Data\Volha_Chrome_ECIV.rvmat","rds_a2port_civ\Volha\Data\Volha_Chrome_ECIV_damage.rvmat","rds_a2port_civ\Volha\Data\Volha_Chrome_ECIV_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 5;
				intensity = 2.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		enginePower = 69.9;
		maxOmega = 513.13;
		peakTorque = 186.3;
		idleRPM = 600;
		redRpm = 4900;
		terrainCoef = 1.3;
		turnCoef = 2.0;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 156;
		fuelCapacity = 50;
		wheelCircumference = 2.04;
		antiRollbarForceCoef = 10.0;
		antiRollbarForceLimit = 40.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 180;
		changeGearMinEffectivity[] = {0.95,0.15,0.85,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.54,"N",0,"D1",3.5,"D2",2.26,"D3",1.45,"D4",1.0};
			TransmissionRatios[] = {"High",4.1};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 85;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/4900","0/186"},{"799/4900","139/186"},{"1401/4900","162/186"},{"2298/4900","186/186"},{"3401/4900","175/186"},{"3900/4900","166/186"},{"4498/4900","147/186"},{"4998/4900","0/186"}};
		latency = 1;
		class Wheels
		{
			class LF
			{
				width = "0.1";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 17;
				MOI = 14.0;
				dampingRate = 0.1;
				maxBrakeTorque = 1300;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.5;
				mMaxDroop = 0.5;
				sprungMass = 345.5;
				springStrength = 45025;
				springDamperRate = 4700;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 12.2;
				latStiffY = 100.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 2000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 2000;
			};
		};
		hiddenselections[] = {"Camo1"};
		hiddenselectionstextures[] = {"rds_a2port_civ\volha\Data\Volha_ECIV_CO.paa"};
		class textureSources
		{
			class standard
			{
				displayName = "Grey";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\volha\Data\Volha_Gray_ECIV_CO.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class Black: standard
			{
				displayName = "Black";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\volha\Data\Volha_Black_ECIV_CO.paa"};
			};
			class Blue: standard
			{
				displayName = "Blue";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\volha\Data\Volha_ECIV_CO.paa"};
			};
		};
		textureList[] = {"standard",0.33,"Black",0.33,"Blue",0.33};
	};
	class RDS_Gaz24_Civ_Base: RDS_Gaz24_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Gaz24_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_Gaz24_Civ_01: RDS_Gaz24_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Gaz24_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "GAZ-24 (Blue)";
	};
	class RDS_Gaz24_Civ_02: RDS_Gaz24_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Gaz24_Civ_02.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "GAZ-24 (Grey)";
		hiddenselectionstextures[] = {"rds_a2port_civ\volha\Data\Volha_Gray_ECIV_CO.paa"};
	};
	class RDS_Gaz24_Civ_03: RDS_Gaz24_Civ_01
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Gaz24_Civ_03.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "GAZ-24 (Black)";
		hiddenselectionstextures[] = {"rds_a2port_civ\volha\Data\Volha_Black_ECIV_CO.paa"};
	};
	class RDS_Golf4_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Golf4_Base.paa";
		model = "\rds_a2port_civ\VWGOLF\vwgolf";
		icon = "\rds_a2port_civ\data\map_ico\icon_VWGolf_ca.paa";
		picture = "\rds_a2port_civ\data\ico\golf4_pic_ca.paa";
		mapsize = 5;
		displayName = "Golf IV 1.9 TDI";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_co.paa"};
		driveraction = "RDS_Golf_Driver";
		getInRadius = 1.5;
		attenuationEffectType = "OpenCarAttenuation";
		armor = 22;
		cost = 10000;
		transportMaxBackpacks = 6;
		transportSoldier = 4;
		wheelDamageRadiusCoef = 0.89;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "gear";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";
		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";
		afmax = 200;
		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-getout","db+10",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-getout","db+10",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-start-1","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-start-1","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-stop-1","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-stop-1","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-Idle-1","db+6",1,150};
				frequency = "0.9 + ((rpm/2200) factor[(267/2200),(767/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(900/2200),(801/2200)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-low-1","db+6",1,200};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1300/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(801/2200),(833/2200)])* ((rpm/2200) factor[(1100/2200),(967/2200)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-1","db+6",1,240};
				frequency = "0.8 + ((rpm/2200) factor[(967/2200),(1767/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(833/2200),(1267/2200)])* ((rpm/2200) factor[(1767/2200),(1433/2200)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-2","db+6",1,280};
				frequency = "0.8 + ((rpm/2200) factor[(1400/2200),(2533/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(1400/2200),(2033/2200)])* ((rpm/2200) factor[(2733/2200),(2200/2200)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-2","db+6",1,320};
				frequency = "0.8 + ((rpm/2200) factor[(2200/2200),(3267/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(2167/2200),(2700/2200)])* ((rpm/2200) factor[(3247/2200),(2800/2200)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-2","db+6",1,360};
				frequency = "0.8 + ((rpm/2200) factor[(2800/2200),(4133/2200)])*0.2";
				volume = "engineOn*camPos*(((rpm/2200) factor[(2767/2200),(3200/2200)])* ((rpm/2200) factor[(3200/2200),(2533/2200)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-3","db+6",1,420};
				frequency = "0.95 + ((rpm/2200) factor[(3400/2200),(4600/2200)])*0.15";
				volume = "engineOn*camPos*(((rpm/2200) factor[(2500/2200),(3067/2200)])* ((rpm/2200) factor[(4700/2200),(4533/2200)]))";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-Idle-1","db+6",1,200};
				frequency = "0.9 + ((rpm/2200) factor[(267/2200),(767/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(900/2200),(801/2200)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-acce-1","db+5",1,250};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1300/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(801/2200),(833/2200)])* ((rpm/2200) factor[(1100/2200),(967/2200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-low-1","db+4",1,280};
				frequency = "0.8 + ((rpm/2200) factor[(967/2200),(1767/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(833/2200),(1267/2200)])* ((rpm/2200) factor[(1767/2200),(1433/2200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-1","db+3",1,320};
				frequency = "0.8 + ((rpm/2200) factor[(1400/2200),(2533/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1400/2200),(2033/2200)])* ((rpm/2200) factor[(2733/2200),(2200/2200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-2","db+2",1,360};
				frequency = "0.8 + ((rpm/2200) factor[(2200/2200),(3267/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2167/2200),(2700/2200)])* ((rpm/2200) factor[(3247/2200),(2800/2200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-2","db+0",1,400};
				frequency = "0.8 + ((rpm/2200) factor[(2800/2200),(4133/2200)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2767/2200),(3200/2200)])* ((rpm/2200) factor[(3200/2200),(2533/2200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-high-3","db+2",1,450};
				frequency = "0.9 + ((rpm/2200) factor[(3400/2200),(4600/2200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2500/2200),(3067/2200)])* ((rpm/2200) factor[(4700/2200),(4533/2200)]))";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-Idle-1","db+2",1};
				frequency = "0.9 + ((rpm/2200) factor[(267/2200),(767/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(900/2200),(801/2200)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-low-1","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1300/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(801/2200),(833/2200)])* ((rpm/2200) factor[(1100/2200),(967/2200)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-1","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(967/2200),(1767/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(833/2200),(1267/2200)])* ((rpm/2200) factor[(1767/2200),(1433/2200)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(1400/2200),(2533/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(1400/2200),(2033/2200)])* ((rpm/2200) factor[(2733/2200),(2200/2200)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(2200/2200),(3267/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(2167/2200),(2700/2200)])* ((rpm/2200) factor[(3247/2200),(2800/2200)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(2800/2200),(4133/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(2767/2200),(3200/2200)])* ((rpm/2200) factor[(3200/2200),(2533/2200)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-3","db-1",1};
				frequency = "0.95 + ((rpm/2200) factor[(3400/2200),(4600/2200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/2200) factor[(2500/2200),(3067/2200)])* ((rpm/2200) factor[(4700/2200),(4533/2200)]))";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-acce-1","db+2",1};
				frequency = "0.9 + ((rpm/2200) factor[(267/2200),(767/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(200/2200),(500/2200)])* ((rpm/2200) factor[(900/2200),(801/2200)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-low-1","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(600/2200),(1300/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(801/2200),(833/2200)])* ((rpm/2200) factor[(1100/2200),(967/2200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-1","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(967/2200),(1767/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(833/2200),(1267/2200)])* ((rpm/2200) factor[(1767/2200),(1433/2200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(1400/2200),(2533/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(1400/2200),(2033/2200)])* ((rpm/2200) factor[(2733/2200),(2200/2200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(2200/2200),(3267/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2167/2200),(2700/2200)])* ((rpm/2200) factor[(3247/2200),(2800/2200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-2","db-1",1};
				frequency = "0.8 + ((rpm/2200) factor[(2800/2200),(4133/2200)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2767/2200),(3200/2200)])* ((rpm/2200) factor[(3200/2200),(2533/2200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-high-3","db-1",1};
				frequency = "0.9 + ((rpm/2200) factor[(3400/2200),(4600/2200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2200) factor[(2500/2200),(3067/2200)])* ((rpm/2200) factor[(4700/2200),(4533/2200)]))";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+4",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+2",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+1",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+1",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class Turrets{};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		cargoaction[] = {"RDS_Golf_Cargo01","RDS_Golf_Cargo02","RDS_Golf_Cargo02","RDS_Golf_Cargo03"};
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3","pos cargo dir 4"};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB","Trunk"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment3"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class Door_LF
			{
				source = "door";
				animPeriod = 1.0;
				sound = "RDS_Golf_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_LB: Door_LF
			{
				soundPosition = "door_1_2_axis";
			};
			class Door_RB: Door_LF
			{
				soundPosition = "door_2_2_axis";
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_2_1_axis";
			};
			class Trunk: Door_LF
			{
				sound = "RDS_Trunk";
				soundPosition = "trunk_axis";
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Trunk";
				position = "trunk_action";
				radius = 1;
				showWindow = 0;
				condition = "(this animationPhase 'trunk' < 0.5)";
				statement = "this animateDoor ['trunk',1]";
				onlyForPlayer = 0;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Trunk";
				condition = "(this animationPhase 'trunk' > 0.5)";
				statement = "this animateDoor ['trunk',0]";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
		};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class Damage
		{
			mat[] = {"rds_a2port_civ\VWGOLF\Data\VWgolf_body.rvmat","rds_a2port_civ\VWGOLF\Data\vwgolf_body_damage.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_body_destruct.rvmat","rds_a2port_civ\VWGOLF\Data\VWGolf_carriage.rvmat","rds_a2port_civ\VWGOLF\Data\VWGolf_carriage.rvmat","rds_a2port_civ\VWGOLF\Data\VWGolf_carriage_destruct.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier2.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier2.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier2_destruct.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_interier_destruct.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_damage.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_damage.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat","rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat","rds_a2port_civ\VWGOLF\Data\vwgolf_wheels.rvmat","rds_a2port_civ\VWGOLF\Data\vwgolf_wheels.rvmat","rds_a2port_civ\VWGOLF\Data\vwgolf_wheels_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 5;
				intensity = 3.5;
				useFlare = 0;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		enginePower = 81;
		maxOmega = 481.71;
		peakTorque = 240;
		idleRPM = 800;
		redRpm = 4600;
		terrainCoef = 6.5;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 216;
		fuelCapacity = 50;
		wheelCircumference = 2.04;
		latency = 1;
		switchTime = 0.31;
		antiRollbarForceCoef = 10.0;
		antiRollbarForceLimit = 40.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 180;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.778,"N",0,"D1",3.778,"D2",2.118,"D3",1.36,"D4",0.971,"D5",0.756};
			TransmissionRatios[] = {"High",3.389};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.5;
		differentialType = "front_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 85;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/4600","0/240"},{"800/4600","199/240"},{"1799/4600","240/240"},{"2401/4600","240/240"},{"3399/4600","209/240"},{"3901/4600","194/240"},{"4149/4600","187/240"},{"4901/4600","30/240"}};
		class Wheels
		{
			class LF
			{
				width = "0.1";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 13;
				MOI = 14.0;
				dampingRate = 0.1;
				maxBrakeTorque = 1900;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.1;
				sprungMass = 345.5;
				springStrength = 45025;
				springDamperRate = 4700;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 2.2;
				latStiffY = 18.0;
				frictionVsSlipGraph[] = {{0,1.61},{0.5,1.41},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "Red";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_co.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class Black: standard
			{
				displayName = "Black";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_black_co.paa"};
			};
			class Blue: standard
			{
				displayName = "Blue";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_blue_co.paa"};
			};
			class Yellow: standard
			{
				displayName = "Yellow";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_yellow_co.paa"};
			};
			class White: standard
			{
				displayName = "White";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_white_co.paa"};
			};
		};
		textureList[] = {"standard",0.2,"Black",0.2,"Blue",0.2,"Yellow",0.2,"White",0.2};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare
			{
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values
				{
					class Random
					{
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled
					{
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled
					{
						name = "Never";
						default = 2;
						value = 2;
					};
				};
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Door_LF
			{
				displayName = "Open front left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF
			{
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class Door_LB: Door_LF
			{
				displayName = "Open rear left door";
				property = "Door_LB";
			};
			class Door_RB: Door_LF
			{
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Trunk: Door_LF
			{
				displayName = "Open trunk";
				property = "Trunk";
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), '', [], false] call bis_fnc_initVehicle;};";
			class RDS_Civ_EH
			{
				EPEContactStart = "_this call rds_fnc_carAlarm_detect";
				hit = "_this call rds_fnc_carAlarm_detect;";
				dammaged = "_this call rds_fnc_fuelLeak;";
				firedNear = "_this call rds_fnc_carAlarm_detect2";
				containerOpened = " (_this + [0,'trunk']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'trunk']) call rds_fnc_containerActions";
			};
		};
	};
	class RDS_Golf4_Civ_Base: RDS_Golf4_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Golf4_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_Golf4_Civ_01: RDS_Golf4_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Golf4_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_Octavia_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Octavia_Base.paa";
		model = "\rds_a2port_civ\Octavia\Octavia_ACR";
		icon = "\rds_a2port_civ\data\map_ico\icon_Octavia_ca.paa";
		picture = "\rds_a2port_civ\data\ico\octavia_pic_ca.paa";
		mapsize = 5;
		displayName = "Skoda Octavia II 2.0 TDI";
		HiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\Octavia\Data\car_body_co.paa","\rds_a2port_civ\Octavia\Data\car_body_m_co.paa"};
		getInRadius = 1.5;
		driverAction = "driver_offroad01";
		attenuationEffectType = "OpenCarAttenuation";
		armor = 22;
		cost = 10000;
		transportMaxBackpacks = 6;
		transportSoldier = 3;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		driverRightLegAnimName = "pedalR";
		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";
		afmax = 200;
		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;
		soundAttenuationCargo[] = {0.5};
		insideSoundCoef = 1;
		soundGetIn[] = {"rds_a2port_civ\data\sounds\GOLF\int\int-golf-getout","db+10",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\GOLF\ext\ext-golf-getout","db+10",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_start","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_start","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_stop","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_stop","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_idle","db+8",1,150};
				frequency = "0.9 + ((rpm/5000) factor[(467/5000),(867/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(200/5000),(300/5000)])* ((rpm/5000) factor[(900/5000),(840/5000)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_mid1","db+9",1,200};
				frequency = "0.8 + ((rpm/5000) factor[(820/5000),(1300/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(850/5000),(863/5000)])* ((rpm/5000) factor[(2500/5000),(1767/5000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_mid2","db+8",1,240};
				frequency = "0.8 + ((rpm/5000) factor[(2067/5000),(2467/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(1233/5000),(1467/5000)])* ((rpm/5000) factor[(3567/5000),(2633/5000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_mid3","db+8",1,280};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(2400/5000),(2833/5000)])* ((rpm/5000) factor[(4733/5000),(4400/5000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_high","db+8",1,280};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*camPos*(((rpm/5000) factor[(4100/5000),(4633/5000)])* ((rpm/5000) factor[(5733/5000),(5400/5000)]))";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_idle","db+6",1,200};
				frequency = "0.9 + ((rpm/5000) factor[(467/5000),(867/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(200/5000),(300/5000)])* ((rpm/5000) factor[(900/5000),(840/5000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_acce1","db+5",1,250};
				frequency = "0.8 + ((rpm/5000) factor[(820/5000),(1300/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(850/5000),(863/5000)])* ((rpm/5000) factor[(2500/5000),(1767/5000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_mid2","db+4",1,280};
				frequency = "0.8 + ((rpm/5000) factor[(2067/5000),(2467/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(1233/5000),(1467/5000)])* ((rpm/5000) factor[(3567/5000),(2633/5000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_mid3","db+3",1,320};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(2400/5000),(2833/5000)])* ((rpm/5000) factor[(4733/5000),(4400/5000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_ext_high","db+3",1,320};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(4100/5000),(4633/5000)])* ((rpm/5000) factor[(5733/5000),(5400/5000)]))";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_idle","db+6",1};
				frequency = "0.9 + ((rpm/5000) factor[(467/5000),(867/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(200/5000),(300/5000)])* ((rpm/5000) factor[(900/5000),(840/5000)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_mid1","db+5",1};
				frequency = "0.8 + ((rpm/5000) factor[(820/5000),(1300/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(850/5000),(863/5000)])* ((rpm/5000) factor[(2500/5000),(1767/5000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_mid2","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(2067/5000),(2467/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(1233/5000),(1467/5000)])* ((rpm/5000) factor[(3567/5000),(2633/5000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_mid3","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(2400/5000),(2833/5000)])* ((rpm/5000) factor[(4733/5000),(4400/5000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_high","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/5000) factor[(4100/5000),(4633/5000)])* ((rpm/5000) factor[(5733/5000),(5400/5000)]))";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_idle","db+6",1};
				frequency = "0.9 + ((rpm/5000) factor[(467/5000),(867/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(200/5000),(300/5000)])* ((rpm/5000) factor[(900/5000),(840/5000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_acce1","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(820/5000),(1300/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(850/5000),(863/5000)])* ((rpm/5000) factor[(2500/5000),(1767/5000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_mid2","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(2067/5000),(2467/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(1233/5000),(1467/5000)])* ((rpm/5000) factor[(3567/5000),(2633/5000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_mid3","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(2400/5000),(2833/5000)])* ((rpm/5000) factor[(4733/5000),(4400/5000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\Skoda\skoda_int_high","db+4",1};
				frequency = "0.8 + ((rpm/5000) factor[(3400/5000),(4433/5000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/5000) factor[(4100/5000),(4633/5000)])* ((rpm/5000) factor[(5733/5000),(5400/5000)]))";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+4",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+0",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+1",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+2",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class Turrets{};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class TransportItems
		{
			class _xx_rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[] = {"rds_empty_proxy","rds_car_FirstAidKit_proxy","rds_car_warning_triangle_to11_proxy"};
		cargoaction[] = {"RDS_Golf_Cargo01","RDS_Golf_Cargo02","RDS_Golf_Cargo02","RDS_Golf_Cargo03"};
		memorypointsgetincargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3"};
		memorypointsgetincargodir[] = {"pos cargo dir 1","pos cargo dir 2","pos cargo dir 3"};
		driverDoor = "Door_LF";
		cargoDoors[] = {};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment3"};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class lights_hide: longlights_hide
			{
				initPhase = 0;
			};
			class cabinlights_hide: longlights_hide{};
			class Trunk
			{
				source = "door";
				animPeriod = 1.0;
				sound = "RDS_Trunk";
				soundPosition = "trunk_axis";
			};
			class blinker_L: Trunk
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.975;
				passThrough = 0.3;
				radius = 0.13;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.15;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.15;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.15;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.15;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.15;
				radius = 0.2;
			};
		};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
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
		class UserActions
		{
			class openDoors
			{
				displayName = "Open Trunk";
				position = "pos cargo dir 4";
				radius = 1;
				showWindow = 0;
				condition = "(this animationPhase 'trunk' < 0.5)";
				statement = "this animateDoor ['trunk',1]";
				onlyForPlayer = 0;
			};
			class closeDoors: openDoors
			{
				displayName = "Close Trunk";
				condition = "(this animationPhase 'trunk' > 0.5)";
				statement = "this animateDoor ['trunk',0]";
			};
			class lights_toggle
			{
				displayName = "Toggle short/long lights";
				position = "";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName = "Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
		};
		class Damage
		{
			mat[] = {"rds_a2port_civ\Octavia\Data\car_body1.rvmat","rds_a2port_civ\Octavia\Data\car_body1_damage.rvmat","rds_a2port_civ\Octavia\Data\car_body1_destruct.rvmat","rds_a2port_civ\Octavia\Data\car_body.rvmat","rds_a2port_civ\Octavia\Data\car_body_damage.rvmat","rds_a2port_civ\Octavia\Data\car_body_destruct.rvmat","rds_a2port_civ\Octavia\Data\car_chrom.rvmat","rds_a2port_civ\Octavia\Data\car_chrom_damage.rvmat","rds_a2port_civ\Octavia\Data\car_chrom_destruct.rvmat","rds_a2port_civ\Octavia\Data\car_interier.rvmat","rds_a2port_civ\Octavia\Data\car_interier_damage.rvmat","rds_a2port_civ\Octavia\Data\car_interier_destruct.rvmat","A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 5;
				intensity = 3.5;
				useFlare = 0;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare = 1;
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[] = {800,900,650};
				ambient[] = {5,5,5};
				position = "Light_L_Long";
				direction = "Light_L_Long_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position = "Light_R_Long";
				direction = "Light_R_Long_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare = 1;
				position = "light_R_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare = 1;
				position = "light_L_Long_flare";
				innerAngle = 50;
				outerAngle = 179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[] = {800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
		};
		aggregateReflectors[] = {{"LSvetla","RSvetla"},{"Long_Left2","Long_Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class BackMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "m3p";
					pointDirection = "m3d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		class textureSources
		{
			class standard
			{
				displayName = "White";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Octavia\Data\car_body_co.paa","\rds_a2port_civ\Octavia\Data\car_body_m_co.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class Black: standard
			{
				displayName = "Black";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Octavia\Data\car_body_black_co.paa","\rds_a2port_civ\Octavia\Data\car_body_m_black_co.paa"};
			};
			class Blue: standard
			{
				displayName = "Blue";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Octavia\Data\car_body_blue_co.paa","\rds_a2port_civ\Octavia\Data\car_body_m_blue_co.paa"};
			};
			class Yellow: standard
			{
				displayName = "Yellow";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\Octavia\Data\car_body_yellow_co.paa","\rds_a2port_civ\Octavia\Data\car_body_m_yellow_co.paa"};
			};
		};
		textureList[] = {"standard",0.25,"Black",0.25,"Blue",0.25,"Yellow",0.25};
		enginePower = 125;
		maxOmega = 523.6;
		peakTorque = 350;
		idleRPM = 800;
		redRpm = 5000;
		terrainCoef = 6.5;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 216;
		fuelCapacity = 50;
		wheelCircumference = 2.135;
		latency = 1;
		switchTime = 0.31;
		antiRollbarForceCoef = 10.0;
		antiRollbarForceLimit = 40.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 180;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.55,"N",0,"D1",3.77,"D2",1.96,"D3",1.26,"D4",0.87,"D5",0.86,"D6",0.72};
			TransmissionRatios[] = {"High",3.45};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.5;
		differentialType = "front_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 85;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/5000","0/350"},{"800/5000","262/350"},{"1750/5000","350/350"},{"2750/5000","350/350"},{"3400/5000","329/350"},{"3900/5000","298/350"},{"4200/5000","284/350"},{"5300/5000","0/350"}};
		class Wheels
		{
			class LF
			{
				width = "0.1";
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 13;
				MOI = 14.0;
				dampingRate = 0.1;
				maxBrakeTorque = 2900;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = -0.2;
				sprungMass = 345.5;
				springStrength = 45025;
				springDamperRate = 4700;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 31.2;
				latStiffY = 180.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare
			{
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values
				{
					class Random
					{
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled
					{
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled
					{
						name = "Never";
						default = 2;
						value = 2;
					};
				};
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Trunk
			{
				displayName = "Open trunk";
				property = "Trunk";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			class RDS_Civ_EH
			{
				EPEContactStart = "_this call rds_fnc_carAlarm_detect";
				hit = "_this call rds_fnc_carAlarm_detect";
				dammaged = "_this call rds_fnc_fuelLeak;";
				firedNear = "_this call rds_fnc_carAlarm_detect2";
				containerOpened = " (_this + [0,'trunk']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'trunk']) call rds_fnc_containerActions";
			};
		};
	};
	class RDS_Octavia_Civ_Base: RDS_Octavia_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Octavia_Civ_Base.paa";
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		side = 3;
	};
	class RDS_Octavia_Civ_01: RDS_Octavia_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Octavia_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_Zetor6945_Base: Car_F
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Zetor6945_Base.paa";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		TextPlural = "Tractors";
		TextSingular = "Tractor";
		nameSound = "veh_Tractor";
		scope = 2;
		faction = "rds_rus_civ";
		side = 3;
		model = "\rds_a2port_civ\tractor\tractor_2.p3d";
		picture = "\rds_a2port_civ\data\ico\zetor_pic_ca.paa";
		Icon = "\rds_a2port_civ\data\map_ico\icomap_traktor_CA.paa";
		mapSize = 6;
		class Damage
		{
			tex[] = {};
			mat[] = {"rds_a2port_civ\Tractor\data\traktor_2.rvmat","rds_a2port_civ\Tractor\data\traktor_2_damage.rvmat","rds_a2port_civ\Tractor\data\traktor_2_destruct.rvmat","rds_a2port_civ\Tractor\data\traktor_2_skla.rvmat","rds_a2port_civ\Tractor\data\traktor_2_skla_destruct.rvmat","rds_a2port_civ\Tractor\data\traktor_2_skla_destruct.rvmat"};
		};
		typicalCargo[] = {"rds_Villager"};
		crew = "C_man_1";
		displayName = "Tractor";
		driverAction = "RDS_Tractor_Driver";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "gear_stick";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		castDriverShadow = 1;
		unitInfoType = "RDS_RscUnitInfoCar";
		class Library
		{
			libTextDesc = "Agricultural tractor.";
		};
		driverDoor = "Door_RF";
		cargoDoors[] = {"Door_RF","Door_LF"};
		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source = "door";
				sound = "RDS_Tractor_Door";
				soundPosition = "door_1_1_axis";
				animPeriod = 1.0;
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_1_2_axis";
			};
			class gearbox: Door_LF
			{
				sound = "RDS_Gearbox";
				soundPosition = "gear_stick_axis";
				animPeriod = 0.8;
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod = 0.35;
			};
			class blinker_R: blinker_L{};
			class blinker_switch: blinker_L
			{
				source = "user";
				animPeriod = 0.2;
			};
			class light_cover1
			{
				source = "user";
				sound = "RDS_Tractor_Cover";
				soundPosition = "light_cover1_axis";
				animPeriod = 0.5;
			};
			class light_cover2: light_cover1
			{
				soundPosition = "light_cover2_axis";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 2.575;
				passThrough = 0.3;
				radius = 0.18;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 2.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 2.575;
				passThrough = 0.3;
				radius = 0.18;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 2.975;
				passThrough = 0.3;
				radius = 0.23;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0.2;
				radius = 0.1;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "SmallWreckSmoke";
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = "SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = "FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = "WeaponWreckSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.05;
				radius = 0.2;
			};
		};
		hasGunner = 0;
		class Turrets{};
		class Reflectors
		{
			class Left
			{
				color[] = {900,800,800,1};
				ambient[] = {100,100,100,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {{"LSvetla"},{"RSvetla"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectTractor";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
		};
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
		rarityUrban = 0.2;
		insideSoundCoef = 0;
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"rds_a2port_civ\data\sounds\lada_door","db+3",1,9};
		soundGetOut[] = {"rds_a2port_civ\data\sounds\lada_door","db+3",1,25};
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-start-1","db+15",1.0};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-start-1","db+15",1.0,200};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-stop-1","db+15",1.0};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-stop-1","db+15",1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-Idle-4","db+11",1,150};
				frequency = "0.9 + ((rpm/2500) factor[(200/2500),(700/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(200/2500),(500/2500)])* ((rpm/2500) factor[(620/2500),(600/2500)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-acce-1","db+12",1,200};
				frequency = "0.8 + ((rpm/2500) factor[(650/2500),(1000/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(600/2500),(650/2500)])* ((rpm/2500) factor[(920/2500),(850/2500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-4","db+11",1,240};
				frequency = "0.8 + ((rpm/2500) factor[(900/2500),(1400/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(900/2500),(950/2500)])* ((rpm/2500) factor[(1400/2500),(1300/2500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-3","db+10",1,280};
				frequency = "0.8 + ((rpm/2500) factor[(1300/2500),(1600/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(1350/2500),(1450/2500)])* ((rpm/2500) factor[(1650/2500),(1500/2500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-1","db+9",1,320};
				frequency = "0.8 + ((rpm/2500) factor[(1500/2500),(1800/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(1550/2500),(1650/2500)])* ((rpm/2500) factor[(1870/2500),(1700/2500)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-2","db+8",1,360};
				frequency = "0.8 + ((rpm/2500) factor[(1700/2500),(2200/2500)])*0.2";
				volume = "engineOn*camPos*(((rpm/2500) factor[(1750/2500),(1800/2500)])* ((rpm/2500) factor[(2250/2500),(1950/2500)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-2a","db+8",1,420};
				frequency = "0.95 + ((rpm/2500) factor[(2100/2500),(2600/2500)])*0.15";
				volume = "engineOn*camPos*((rpm/2500) factor[(2000/2500),(2700/2500)])";
			};
			class IdleThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-Idle-5","db+6",1,200};
				frequency = "0.9 + ((rpm/2500) factor[(200/2500),(700/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(200/2500),(500/2500)])* ((rpm/2500) factor[(620/2500),(600/2500)]))";
			};
			class EngineThrust
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-acce-1","db+5",1,250};
				frequency = "0.8 + ((rpm/2500) factor[(650/2500),(1000/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(600/2500),(650/2500)])* ((rpm/2500) factor[(920/2500),(850/2500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+4",1,280};
				frequency = "0.8 + ((rpm/2500) factor[(900/2500),(1400/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(900/2500),(950/2500)])* ((rpm/2500) factor[(1400/2500),(1300/2500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+3",1,320};
				frequency = "0.8 + ((rpm/2500) factor[(1300/2500),(1600/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1350/2500),(1450/2500)])* ((rpm/2500) factor[(1650/2500),(1500/2500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+2",1,360};
				frequency = "0.8 + ((rpm/2500) factor[(1500/2500),(1800/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1550/2500),(1650/2500)])* ((rpm/2500) factor[(1870/2500),(1700/2500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-1","db0",1,400};
				frequency = "0.8 + ((rpm/2500) factor[(1700/2500),(2200/2500)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1750/2500),(1800/2500)])* ((rpm/2500) factor[(2250/2500),(1950/2500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-1","db2",1,450};
				frequency = "0.9 + ((rpm/2500) factor[(2100/2500),(2600/2500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2500) factor[(2000/2500),(2700/2500)])";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-Idle-4","db+9",1};
				frequency = "0.9 + ((rpm/2500) factor[(200/2500),(700/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(200/2500),(500/2500)])* ((rpm/2500) factor[(620/2500),(600/2500)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-acce-1","db+10",1};
				frequency = "0.8 + ((rpm/2500) factor[(650/2500),(1000/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(600/2500),(650/2500)])* ((rpm/2500) factor[(920/2500),(850/2500)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-4","db+9",1};
				frequency = "0.8 + ((rpm/2500) factor[(900/2500),(1400/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(900/2500),(950/2500)])* ((rpm/2500) factor[(1400/2500),(1300/2500)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-3","db+9",1};
				frequency = "0.8 + ((rpm/2500) factor[(1300/2500),(1600/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(1350/2500),(1450/2500)])* ((rpm/2500) factor[(1650/2500),(1500/2500)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-3","db+8",1};
				frequency = "0.8 + ((rpm/2500) factor[(1500/2500),(1800/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(1550/2500),(1650/2500)])* ((rpm/2500) factor[(1870/2500),(1700/2500)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-2","db+8",1};
				frequency = "0.8 + ((rpm/2500) factor[(1700/2500),(2200/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2500) factor[(1750/2500),(1800/2500)])* ((rpm/2500) factor[(2250/2500),(1950/2500)]))";
			};
			class Engine5_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-2a","db+6",1};
				frequency = "0.95 + ((rpm/2500) factor[(2100/2500),(2600/2500)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/2500) factor[(2000/2500),(2700/2500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-idle-5","db+9",1};
				frequency = "0.9 + ((rpm/2500) factor[(200/2500),(700/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(200/2500),(500/2500)])* ((rpm/2500) factor[(620/2500),(600/2500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+9",1};
				frequency = "0.8 + ((rpm/2500) factor[(650/2500),(1000/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(600/2500),(650/2500)])* ((rpm/2500) factor[(920/2500),(850/2500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-3","db+8",1};
				frequency = "0.8 + ((rpm/2500) factor[(900/2500),(1400/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(900/2500),(950/2500)])* ((rpm/2500) factor[(1400/2500),(1300/2500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+7",1};
				frequency = "0.8 + ((rpm/2500) factor[(1300/2500),(1600/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1350/2500),(1450/2500)])* ((rpm/2500) factor[(1650/2500),(1500/2500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-low-2","db+6",1};
				frequency = "0.8 + ((rpm/2500) factor[(1500/2500),(1800/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1550/2500),(1650/2500)])* ((rpm/2500) factor[(1870/2500),(1700/2500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-1","db+5",1};
				frequency = "0.8 + ((rpm/2500) factor[(1700/2500),(2200/2500)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2500) factor[(1750/2500),(1800/2500)])* ((rpm/2500) factor[(2250/2500),(1950/2500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\tractor\ext-tractor-high-1","db+4",1};
				frequency = "0.9 + ((rpm/2500) factor[(2100/2500),(2600/2500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2500) factor[(2000/2500),(2700/2500)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db+6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db+8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db+6",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+12",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db+3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db+3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db+10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db+10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		slowSpeedForwardCoef = 0.5;
		normalSpeedForwardCoef = 0.55;
		enginePower = 47.5;
		maxOmega = 261.8;
		peakTorque = 210;
		idleRPM = 600;
		redRpm = 2500;
		turnCoef = 2.0;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 25;
		fuelCapacity = 50;
		terrainCoef = 1;
		wheelCircumference = 3.768;
		antiRollbarForceCoef = 0.0;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.61,"N",0,"D1",2.27,"D2",1.86,"D3",1.21,"D4",1.0};
			TransmissionRatios[] = {"High",18.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_limited";
		frontRearSplit = 0.6;
		frontBias = 0.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 45;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"0/2460","0/210"},{"401/2460","157/210"},{"704/2460","183/210"},{"1154/2460","200/210"},{"1501/2460","210/210"},{"2199/2460","204/210"},{"2283/2460","157/210"},{"2809/2460","0/210"}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				side = "left";
				width = "0.05";
				steering = 1;
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 23;
				MOI = 4.1;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 1200;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.24;
				mMaxDroop = 0.24;
				sprungMass = 845.5;
				springStrength = 42025;
				springDamperRate = 5400;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 11.5;
				latStiffY = 25.0;
				frictionVsSlipGraph[] = {{0,1.11},{0.5,1.1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 2000;
				MOI = 3.1;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 2000;
				MOI = 3.1;
			};
		};
		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_blinkers
			{
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				defaultValue = -1;
				typeName = "Number";
				class values
				{
					class blinker
					{
						name = "Turned off";
						value = -1;
					};
					class blinker0
					{
						name = "Left blinker on";
						value = 0;
					};
					class blinker1
					{
						name = "Right blinker on";
						value = 1;
					};
					class blinker2
					{
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Door_LF
			{
				displayName = "Open left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF
			{
				displayName = "Open right door";
				property = "Door_RF";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				engine = "if(_this select 1)then{_this call RDS_fnc_gearSound};";
				dammaged = "_this call rds_fnc_fuelLeak;";
			};
		};
	};
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
		driverLeftHandAnimName = "volant";
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
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class Light_Main
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 1;
				radius = 0.15;
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_1_1_steering";
				armor = 0.175;
				passThrough = 0.3;
				radius = 0.1;
			};
			class HitLF2Wheel: HitRF2Wheel
			{
				name = "wheel_2_1_steering";
				armor = 0.175;
				passThrough = 0.3;
				radius = 0.1;
			};
			class HitFuel
			{
				armor = 4.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				radius = 0.1;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
				radius = 0.15;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = "WeaponWreckSmoke";
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
		outsideSoundFilter = 0;
		attenuationEffectType = "OpenCarAttenuation";
		soundEngineOnInt[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-start-1",0.354813,1};
		soundEngineOnExt[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-start-1",0.354813,1,280};
		soundEngineOffInt[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-stop-1",0.354813,1};
		soundEngineOffExt[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-stop-1",0.354813,1,280};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",1,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",1,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",1,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1",1,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2",1,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3",1,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",1,1,200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",1,1,200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",1,1,200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",1,1,200};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-idle-2","0.2+0.223872",1,200};
				frequency = 1;
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-low-2","0.2+0.398107",1,350};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-low-2","0.2+0.398107",1,350};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2","0.2+0.398107",1,450};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2","0.2+0.398107",1,450};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-high-2","0.2+0.398107",1,450};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)])*0.2";
				volume = "engineOn*camPos*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.562341,1,150};
				frequency = 1;
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.630957,1,200};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.707946,1,250};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.794328,1,300};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.891251,1,350};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1,1,400};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class Idle_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-idle-2","0.2+0.316228",1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-low-2","0.2+0.562341",1};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-low-2","0.2+0.562341",1};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2","0.2+0.562341",1};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2","0.2+0.562341",1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-high-2","0.2+0.562341",1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust_Int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",0.562341,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust_Int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",0.630957,1};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",0.707946,1};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",0.794328,1};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",0.891251,1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",1,1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.891251,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 15])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.501187,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.562341,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.501187,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\int\int-tt650-acce-3",0.562341,1};
				limit = "0.2";
				expression = "(engineOn*(1-camPos))*thrust";
			};
			class AccelerationOut
			{
				sound[] = {"rds_a2port_civ\data\sounds\motorcycles\ext\ext-tt650-acce-3",0.562341,1,300};
				limit = "0.2";
				expression = "(engineOn*camPos)*thrust";
			};
		};
		normalSpeedForwardCoef = 0.9;
		enginePower = 25;
		maxOmega = 210;
		peakTorque = 280;
		idleRpm = 600;
		redRpm = 2000;
		terrainCoef = 1.1;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 120;
		fuelCapacity = 50;
		turnCoef = 3.5;
		wheelCircumference = 2.202;
		antiRollbarForceCoef = 0.7;
		antiRollbarForceLimit = 0.8;
		antiRollbarSpeedMin = 2;
		antiRollbarSpeedMax = 20;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-1.351,"N",0,"D1",2.081,"D2",1.057,"D3",0.63,"D4",0.3};
			TransmissionRatios[] = {"High",4};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_open";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 45;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.15;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "right";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 10.3;
				dampingRate = 0.1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 500;
				maxBrakeTorque = 1000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.26;
				mMaxDroop = 0.03;
				sprungMass = 150;
				springStrength = 95000;
				springDamperRate = 3500;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 1.7;
				latStiffY = 16.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class RF: LF
			{
				steering = 0;
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "left";
			};
			class LR: LF
			{
				steering = 0;
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
			class RR: RF
			{
				steering = 0;
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
		};
		class CargoTurret;
		class Turrets
		{
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
			mat[] = {"rds_a2port_civ\Old_moto\Data\Old_moto.rvmat","rds_a2port_civ\Old_moto\Data\Old_moto_damage.rvmat","rds_a2port_civ\Old_moto\Data\Old_moto_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\Old_moto\data\old_moto_co.paa","rds_a2port_civ\Old_moto\data\old_moto_alfa_co.paa"};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				dammaged = "_this call rds_fnc_fuelLeak;";
			};
		};
	};
	class RDS_JAWA353_Civ_Base: RDS_JAWA353_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_JAWA353_Civ_01: RDS_JAWA353_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_JAWA353_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_tt650_base: RDS_Jawa353_base
	{
		model = "\rds_a2port_civ\TT650\TT650";
		picture = "\rds_a2port_civ\data\ico\tt650_pic_ca.paa";
		displayName = "Yamaha TT-650";
		weapons[] = {"MiniCarHorn"};
		normalSpeedForwardCoef = 0.9;
		enginePower = 25;
		maxOmega = 210;
		peakTorque = 280;
		idleRpm = 600;
		redRpm = 2000;
		terrainCoef = 1.1;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 120;
		fuelCapacity = 50;
		turnCoef = 3.5;
		wheelCircumference = 2.202;
		antiRollbarForceCoef = 0.7;
		antiRollbarForceLimit = 0.8;
		antiRollbarSpeedMin = 2;
		antiRollbarSpeedMax = 20;
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-1.351,"N",0,"D1",2.081,"D2",1.057,"D3",0.63,"D4",0.3};
			TransmissionRatios[] = {"High",4};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_open";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 45;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.15;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0.6},{0.2,0.65},{0.3,0.8},{0.7,0.95},{0.8,1},{0.9,0.95},{1,0.5}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "right";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 10.3;
				dampingRate = 0.1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 500;
				maxBrakeTorque = 1000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.26;
				mMaxDroop = 0.03;
				sprungMass = 150;
				springStrength = 95000;
				springDamperRate = 3500;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 1.7;
				latStiffY = 16.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class RF: LF
			{
				steering = 0;
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "left";
			};
			class LR: LF
			{
				steering = 0;
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
			class RR: RF
			{
				steering = 0;
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "m1p";
					pointDirection = "m1d";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.5;
				};
			};
			class RightMirror: LeftMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1: CameraView1
				{
					pointPosition = "m2p";
					pointDirection = "m2d";
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"rds_a2port_civ\TT650\Data\yam650_01.rvmat","rds_a2port_civ\TT650\Data\yam650_damage.rvmat","rds_a2port_civ\TT650\Data\yam650_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\TT650\Data\yam650_co.paa"};
		class textureSources
		{
			class standard
			{
				displayName = "Blue";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\TT650\Data\yam650_co.paa"};
				factions[] = {"rds_rus_civ"};
			};
			class green: standard
			{
				displayName = "Sport";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\TT650\Data\yam650_skin1_co.paa"};
			};
			class orange: standard
			{
				displayName = "Rusty";
				author = "RDS (BIS A2 Port)";
				dlc = "RDS_CIV_PACK";
				textures[] = {"\rds_a2port_civ\TT650\Data\tt650_eciv_co.paa"};
			};
		};
		textureList[] = {"standard",0.16,"green",0.16,"orange",0.16};
	};
	class RDS_tt650_Civ_Base: RDS_tt650_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_tt650_Civ_01: RDS_tt650_Civ_Base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_tt650_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
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
		class DestructionEffects{};
		picture = "\rds_a2port_civ\data\ico\oldbike_pic_ca.paa";
		Icon = "\rds_a2port_civ\data\map_ico\Icon_MMT_CA.paa";
		driverLeftHandAnimName = "volant";
		driverRightHandAnimName = "volant";
		driverLeftLegAnimName = "slapka_leva";
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
		outsideSoundFilter = 0;
		soundGear[] = {"",0.000562341,1};
		SoundGetIn[] = {"",0.0177828,1};
		SoundGetOut[] = {"",0.0177828,1};
		soundEngineOnInt[] = {"",0.354813,1};
		soundEngineOnExt[] = {"",0.354813,1};
		soundEngineOffInt[] = {"",0.354813,1};
		soundEngineOffExt[] = {"",0.354813,1};
		buildCrash0[] = {"rds_a2port_civ\data\sounds\crash_bicycle_01",0.707946,1,40};
		buildCrash1[] = {"rds_a2port_civ\data\sounds\crash_bicycle_02",0.707946,1,40};
		buildCrash2[] = {"rds_a2port_civ\data\sounds\crash_bicycle_03",0.707946,1,40};
		buildCrash3[] = {"rds_a2port_civ\data\sounds\crash_bicycle_04",0.707946,1,40};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",1,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",1,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",1,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"rds_a2port_civ\data\sounds\crash_bicycle_06",0.707946,1,40};
		ArmorCrash1[] = {"rds_a2port_civ\data\sounds\crash_bicycle_05",0.707946,1,40};
		ArmorCrash2[] = {"rds_a2port_civ\data\sounds\crash_bicycle_04",0.707946,1,40};
		ArmorCrash3[] = {"rds_a2port_civ\data\sounds\crash_bicycle_03",0.707946,1,40};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"",0.562341,1};
				limit = "0.2";
				expression = "(engineOn*(1-camPos))*thrust";
			};
			class AccelerationOut
			{
				sound[] = {"",0.562341,1};
				limit = "0.2";
				expression = "(engineOn*camPos)*thrust";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\low1","3.9+0.177828",1,35};
				frequency = "1";
				volume = "camPos*(thrust factor[0, 0.4])*((((speed*10) max -1) min 0)+1)";
			};
			class EngineHighOut
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\high1","3.9+0.177828",1,50};
				frequency = "1";
				volume = "camPos*engineOn*(thrust factor[0.4, 0.9])*((((speed*10) max -1) min 0)+1)";
			};
			class IdleOut
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\idle","3.9+0.377828",1,35};
				frequency = "1";
				volume = "camPos*engineOn*(speed factor[0.00, 0.9])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.891251,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.036)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\low1","1.9+0.316228",1};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(thrust factor[0, 0.4])*((((speed*10) max -1) min 0)+1)";
			};
			class EngineHighIn
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\high1","1.9+0.316228",1};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(thrust factor[0.4, 0.9])*((((speed*10) max -1) min 0)+1)";
			};
			class IdleIn
			{
				sound[] = {"rds_a2port_civ\data\sounds\MMT\idle","1.9+0.316228",1};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(speed factor[0.0, 0.9])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",0.562341,1};
				frequency = "1";
				volume = "(damper0 max 0.03)*(thrust factor[0, 18])*(1-camPos)";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.630957,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.501187,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		soundEngine[] = {"",1,1};
		soundEnviron[] = {"",1,1};
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.6;
		enginePower = 1;
		maxOmega = 63;
		peakTorque = 98;
		idleRpm = 60;
		redRpm = 200;
		terrainCoef = 1.1;
		precision = 10;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 36;
		fuelCapacity = 99999;
		turnCoef = 2;
		wheelCircumference = 2.28;
		antiRollbarForceCoef = 0.7;
		antiRollbarForceLimit = 0.8;
		antiRollbarSpeedMin = 2;
		antiRollbarSpeedMax = 20;
		changeGearMinEffectivity[] = {0.95,0.15,0.95};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-111.351,"N",0,"D1",1.081};
			TransmissionRatios[] = {"High",2};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 4;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 3.5;
		centreBias = 3.3;
		clutchStrength = 45;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.15;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0.0},{0.2,0.25},{0.3,0.4},{0.7,0.65},{0.8,1},{0.9,0.95},{1,0.25}};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "right";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 3.3;
				dampingRate = 1.1;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 500;
				maxBrakeTorque = 301;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.0;
				mMaxDroop = 0.0;
				sprungMass = 150;
				springStrength = 95000;
				springDamperRate = 3500;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 1.7;
				latStiffY = 16.0;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class RF: LF
			{
				steering = 0;
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				side = "left";
			};
			class LR: LF
			{
				steering = 0;
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
				maxCompression = 0.1;
				mMaxDroop = 0.1;
			};
			class RR: RF
			{
				steering = 0;
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				latStiffY = 180;
				sprungMass = 20;
				springStrength = 10;
				springDamperRate = 1350;
				maxCompression = 0.1;
				mMaxDroop = 0.1;
			};
		};
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
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors
		{
			class Light_1
			{
				color[] = {800,900,650};
				ambient[] = {2,2,2};
				position = "Light_1_Start";
				direction = "Light_1_End";
				hitpoint = "light";
				selection = "Light_5";
				size = 1;
				innerAngle = 30;
				outerAngle = 170;
				coneFadeCoef = 10;
				intensity = 0.2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_Start";
				direction = "Light_2_End";
			};
			class Light_3: Light_1
			{
				position = "Light_3_Start";
				direction = "Light_3_End";
			};
			class Light_4: Light_1
			{
				position = "Light_4_Start";
				direction = "Light_4_End";
			};
			class Light_5: Light_1
			{
				position = "Light_5_Start";
				direction = "Light_5_End";
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
		class Turrets{};
	};
	class RDS_Old_bike_Civ_base: RDS_Old_bike_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_Old_bike_Civ_01: RDS_Old_bike_Civ_base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_Old_bike_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class RDS_MMT_base: RDS_Old_bike_base
	{
		model = "\rds_a2port_civ\mmt\mmt";
		picture = "\rds_a2port_civ\data\ico\mmt_pic_ca.paa";
		displayName = "Mountain bike";
		class Library
		{
			libTextDesc = "The US army mountain bike. Can be used for personal transportation, for messengers, or for scouting missions.";
		};
		class AnimationSources: AnimationSources
		{
			class pack
			{
				animPeriod = 0.7;
				source = "user";
				initPhase = 0;
				displayName = "Pack";
				onPhaseChanged = "";
				mass = 0.1;
			};
		};
		maxSpeed = 40;
		peakTorque = 108;
		driverAction = "RDS_MMT_Driver";
		driverInAction = "RDS_MMT_Driver";
		RDS_TurnAnimLeft = "RDS_MMT_Driver_Left";
		RDS_TurnAnimRight = "RDS_MMT_Driver_Right";
		class Reflectors{};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"rds_a2port_civ\MMT\data\mmt_01_co.paa"};
	};
	class RDS_MMT_Civ_base: RDS_MMT_base
	{
		side = 3;
		accuracy = 0.5;
		crew = "C_man_1";
		faction = "rds_rus_civ";
		typicalCargo[] = {"rds_rus_civ"};
		rarityUrban = 0.5;
	};
	class RDS_MMT_Civ_01: RDS_MMT_Civ_base
	{
		editorPreview = "rds_a2port_civ\EditorPreview\RDS_MMT_Civ_01.paa";
		scope = 2;
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
	};
	class C_Hatchback_01_F;
	class C_SUV_01_F;
	class C_Van_01_transport_F;
	class C_Van_01_fuel_F;
	class C_Van_01_box_F;
	class RDS_Hatchback_01_F: C_Hatchback_01_F
	{
		crew = "C_man_1";
		faction = "rds_rus_civ";
	};
	class RDS_SUV_01_F: C_SUV_01_F
	{
		crew = "C_man_1";
		faction = "rds_rus_civ";
	};
	class RDS_Van_01_transport_F: C_Van_01_transport_F
	{
		crew = "C_man_1";
		faction = "rds_rus_civ";
	};
	class RDS_Van_01_fuel_F: C_Van_01_fuel_F
	{
		crew = "C_man_1";
		faction = "rds_rus_civ";
	};
	class RDS_Van_01_box_F: C_Van_01_box_F
	{
		crew = "C_man_1";
		faction = "rds_rus_civ";
	};
	class Bag_Base;
	class RDS_Sparewheel_lada: Bag_Base
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		scope = 2;
		displayName = "Vaz-2103 Spare wheel";
		mass = 922;
		isbackpack = 1;
		reversed = 0;
		model = "\rds_a2port_civ\sparewheels\rds_spare_lada.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_lada.paa";
		maximumLoad = 0;
		class UserActions
		{
			class SpareWheel
			{
				displayName = "Use spare wheel";
				priority = 0;
				shortcut = "";
				condition = "! ((objectParent this) iskindOf 'car')";
				statement = "[this,'RDS_Lada_Base'] spawn rds_fnc_spareWheel";
				displayNameDefault = "";
				position = "";
				radius = 2;
				onlyforplayer = 1;
			};
		};
	};
	class RDS_Sparewheel_s1203: RDS_Sparewheel_lada
	{
		displayName = "s1203 Spare wheel";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		model = "\rds_a2port_civ\sparewheels\rds_spare_s1203.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_s1203.paa";
		class UserActions: UserActions
		{
			class SpareWheel: SpareWheel
			{
				statement = "[this,'RDS_S1203_Base'] spawn rds_fnc_spareWheel";
			};
		};
	};
	class RDS_Sparewheel_golf4: RDS_Sparewheel_lada
	{
		displayName = "Golf-4 Spare wheel";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		model = "\rds_a2port_civ\sparewheels\rds_spare_golf4.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_golf4.paa";
		class UserActions: UserActions
		{
			class SpareWheel: SpareWheel
			{
				statement = "[this,'RDS_Golf4_Base'] spawn rds_fnc_spareWheel";
			};
		};
	};
	class RDS_Sparewheel_octavia: RDS_Sparewheel_lada
	{
		displayName = "Octavia II Spare wheel";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		model = "\rds_a2port_civ\sparewheels\rds_spare_octavia.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_octavia.paa";
		class UserActions: UserActions
		{
			class SpareWheel: SpareWheel
			{
				statement = "[this,'RDS_Octavia_Base'] spawn rds_fnc_spareWheel";
			};
		};
	};
	class RDS_Sparewheel_gaz24: RDS_Sparewheel_lada
	{
		displayName = "Gaz-24 Spare wheel";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		model = "\rds_a2port_civ\sparewheels\rds_spare_gaz24.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_gaz24.paa";
		class UserActions: UserActions
		{
			class SpareWheel: SpareWheel
			{
				statement = "[this,'RDS_Gaz24_Base'] spawn rds_fnc_spareWheel";
			};
		};
	};
	class RDS_Sparewheel_ikarus: RDS_Sparewheel_lada
	{
		displayName = "Ikarus Spare wheel";
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		model = "\rds_a2port_civ\sparewheels\rds_spare_ikarus.p3d";
		picture = "\rds_a2port_civ\sparewheels\pictures\rds_sparewheel_ikarus.paa";
		class UserActions: UserActions
		{
			class SpareWheel: SpareWheel
			{
				statement = "[this,'RDS_Ikarus_Base'] spawn rds_fnc_spareWheel";
			};
		};
	};
	class Item_Base_F;
	class Item_rds_car_FirstAidKit: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Car First Aid Kit";
		author = "$STR_RHSUSF_AUTHOR_FULL";
		vehicleClass = "Items";
		editorSubcategory = "EdSubcat_InventoryItems";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class rds_car_FirstAidKit
			{
				name = "rds_car_FirstAidKit";
				count = 1;
			};
		};
	};
	class Item_rds_car_warning_triangle_to11: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Warning Triangle TO-11";
		author = "$STR_RHSUSF_AUTHOR_FULL";
		vehicleClass = "Items";
		editorSubcategory = "EdSubcat_InventoryItems";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class rds_car_warning_triangle_to11
			{
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
	};
	class Item_rds_weap_latarka_janta: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Flashlight 'Janta'";
		author = "$STR_RHSUSF_AUTHOR_FULL";
		vehicleClass = "Items";
		editorSubcategory = "EdSubcat_InventoryItems";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class rds_weap_latarka_janta
			{
				name = "rds_weap_latarka_janta";
				count = 1;
			};
		};
	};
	class Item_rds_weap_latarka_lts1: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Flashlight 'LTS-1'";
		author = "$STR_RHSUSF_AUTHOR_FULL";
		vehicleClass = "Items";
		editorSubcategory = "EdSubcat_InventoryItems";
		model = "\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class rds_weap_latarka_lts1
			{
				name = "rds_weap_latarka_lts1";
				count = 1;
			};
		};
	};
	class Lamps_base_F;
	class rds_latarka_janta_mapa: Lamps_base_F
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		scope = 2;
		scopeCurator = 2;
		mapSize = 0.89;
		_generalMacro = "Land_rds_latarka_janta";
		editorPreview = "\rds_a2port_civ\items\pic\rds_janta_pic.paa";
		displayName = "Flashlight 'Janta' [On]";
		model = "\rds_a2port_civ\items\map\rds_latarka_janta_mapa.p3d";
		icon = "iconObject_1x1";
		editorCategory = "EdCat_Things";
		editorSubcategory = "EdSubcat_Office";
		vehicleClass = "Small_items";
		destrType = "destructEngine";
		aggregateReflectors[] = {{"Light_1"}};
		class Reflectors
		{
			class Light_1
			{
				color[] = {180,150,120};
				ambient[] = {9,7.5,6};
				intensity = 23;
				size = 1;
				innerAngle = 20;
				outerAngle = 120;
				coneFadeCoef = 55;
				position = "flashlight_pos";
				direction = "flashlight_dir";
				hitpoint = "flashlight";
				selection = "light";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
		class UserActions
		{
			class takeItem
			{
				displayName = "Take flashlight";
				position = "";
				radius = 2;
				showWindow = 1;
				condition = "alive this";
				statement = "[this, 'rds_weap_latarka_janta'] call rds_fnc_addItem";
				onlyForPlayer = 1;
			};
		};
	};
	class rds_latarka_lts1_white_mapa: rds_latarka_janta_mapa
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Flashlight 'LTS-1' (White) [On]";
		model = "\rds_a2port_civ\items\map\rds_latarka_lts1_mapa.p3d";
		editorPreview = "\rds_a2port_civ\items\pic\rds_lts1_pic.paa";
		class Reflectors
		{
			class Light_1
			{
				color[] = {98,83,42};
				ambient[] = {9,7.5,6};
				intensity = 16;
				size = 1;
				innerAngle = 20;
				outerAngle = 120;
				coneFadeCoef = 55;
				position = "flashlight_pos";
				direction = "flashlight_dir";
				hitpoint = "flashlight";
				selection = "light";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
		class UserActions: UserActions
		{
			class takeItem: takeItem
			{
				statement = "[this, 'rds_weap_latarka_lts1'] call rds_fnc_addItem";
			};
		};
	};
	class rds_latarka_lts1_red_mapa: rds_latarka_lts1_white_mapa
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Flashlight 'LTS-1' (Red) [On]";
		class Reflectors
		{
			class Light_1
			{
				color[] = {98,15,0.7};
				ambient[] = {9,7.5,6};
				intensity = 16;
				size = 1;
				innerAngle = 20;
				outerAngle = 120;
				coneFadeCoef = 55;
				position = "flashlight_pos";
				direction = "flashlight_dir";
				hitpoint = "flashlight";
				selection = "light";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
	};
	class rds_latarka_lts1_green_mapa: rds_latarka_lts1_white_mapa
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Flashlight 'LTS-1' (Green) [On]";
		class Reflectors
		{
			class Light_1
			{
				color[] = {7,71,0};
				ambient[] = {9,7.5,6};
				intensity = 16;
				size = 1;
				innerAngle = 20;
				outerAngle = 120;
				coneFadeCoef = 55;
				position = "flashlight_pos";
				direction = "flashlight_dir";
				hitpoint = "flashlight";
				selection = "light";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0.5;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 20;
					hardLimitEnd = 30;
				};
			};
		};
	};
	class rds_latarka_lts1_omni_mapa: rds_latarka_lts1_white_mapa
	{
		author = "RDS (BIS A2 Port)";
		dlc = "RDS_CIV_PACK";
		displayName = "Flashlight 'LTS-1' (Omni) [On]";
		model = "\rds_a2port_civ\items\map\rds_latarka_lts1_omni_mapa.p3d";
		class Reflectors
		{
			class Light_1
			{
				color[] = {9.9,7.3,1};
				ambient[] = {9.9,7.3,1};
				intensity = 15;
				size = 1;
				innerAngle = 300;
				outerAngle = 360;
				coneFadeCoef = 2.5;
				position = "flashlight_pos";
				direction = "flashlight_dir";
				hitpoint = "flashlight";
				selection = "light";
				useFlare = 1;
				flareSize = 0.4;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0.05;
					constant = 0;
					linear = 0;
					quadratic = 0;
					hardLimitStart = 0.02;
					hardLimitEnd = 8;
				};
			};
		};
	};
};
//};
