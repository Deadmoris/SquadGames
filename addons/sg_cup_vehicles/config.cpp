////////////////////////////////////////////////////////////////////
//DeRap: cup_trackedvehicles_core\config.bin
//Produced from mikero's Dos Tools Dll version 6.34
//'now' is Thu Mar 28 20:17:07 2019 : 'file' last modified on Thu Mar 28 08:14:39 2019
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(5 Enums)
enum {
	StabilizedInAxesNone = 0,
	StabilizedInAxisX = 1,
	StabilizedInAxisY = 2,
	StabilizedInAxesBoth = 3,
	StabilizedInAxesXYZ = 4
};

class CfgPatches
{
	class sg_cup_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Data_F","A3_Armor_F","A3_Characters_F","A3_Cargoposes_F","rhs_c_heavyweapons","rhsusf_c_heavyweapons"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_T55_Gunner_EP1 = "CUP_T55_Gunner_EP1";
		CUP_T55_Commander_EP1 = "CUP_T55_Commander_EP1";
		CUP_T55_Driver_EP1 = "CUP_T55_Driver_EP1";
		CUP_T55_DriverOut_EP1 = "CUP_T55_DriverOut_EP1";
		CUP_T72_GunnerOut = "CUP_T72_GunnerOut";
		CUP_M2A2_Commander_Edit = "CUP_M2A2_Commander_Edit";		
		CUP_M113_Driver_EP1 = "CUP_M113_Driver_EP1";
		CUP_AAV_Driver = "CUP_AAV_Driver";
		CUP_AAV_Gunner = "CUP_AAV_Gunner";
		CUP_AAV_Commander = "CUP_AAV_Commander";
		CUP_AAV_Driver_OUT = "CUP_AAV_Driver_OUT";
		CUP_AAV_Gunner_OUT = "CUP_AAV_Gunner_OUT_settlein";
		CUP_AAV_Commander_OUT = "CUP_AAV_Commander_OUT_settlein";
		CUP_AAV_Cargo01 = "CUP_AAV_Cargo01";
		CUP_AAV_Cargo02 = "CUP_AAV_Cargo02";
		CUP_AAV_Cargo03 = "CUP_AAV_Cargo03";
		CUP_AAV_Cargo04 = "CUP_AAV_Cargo04";
		CUP_LAV25_Driver = "CUP_LAV25_Driver";
		CUP_LAV25_Gunner = "CUP_LAV25_Gunner";
		CUP_LAV25_Commander = "CUP_LAV25_Commander_out";
		CUP_LAV25_Driver_out = "CUP_LAV25_Driver_out";
		CUP_LAV25_Gunner_out = "CUP_LAV25_Gunner_out";
		CUP_LAV25_Commander_out = "CUP_LAV25_Commander_out";
		CUP_LAV25_Commander_out_mg = "CUP_LAV25_Commander_out_mg";
		CUP_LAV25_commander_out_C2_mg = "CUP_LAV25_commander_out_C2_mg";
		CUP_LAV25_Gunner2 = "CUP_LAV25_Gunner2";
		CUP_ArmoredSUV_Gunner_PMC = "CUP_ArmoredSUV_Gunner_PMC";
		CUP_ArmoredSUV_GunnerIn_PMC = "CUP_ArmoredSUV_GunnerIn_PMC";
		suv_cargo_front_left_side = "suv_cargo_front_left_side";
		suv_cargo_front_right_side = "suv_cargo_front_right_side";
		suv_cargo_back_side = "suv_cargo_back_side";
		CUP_Datsun_Driver = "CUP_Datsun_Driver";
		CUP_Datsun_Cargo01 = "CUP_Datsun_Cargo01";
		CUP_Datsun_Cargo02 = "CUP_Datsun_Cargo02";
		CUP_Datsun_Cargo03 = "CUP_Datsun_Cargo03";
		CUP_Datsun_Gunner01 = "CUP_Datsun_Gunner01";
		CUP_V3S_Driver = "CUP_V3S_Driver";
		
		CUP_RHIB_Driver = "CUP_RHIB_Driver";
		CUP_RHIB_Gunner = "CUP_RHIB_Gunner";
		CUP_RHIB_Cargo = "CUP_RHIB_Cargo";
		
		
		SG_T34_Driver = "SG_T34_Driver";
		
		
		
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		
		class SG_T34_Driver: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\sg_t34_driver.rtm";
			connectTo[] = {"SG_KIA_T34_Driver",1};
			speed = 1e+010;
		};
		class SG_KIA_T34_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\sg_kia_t34_driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"unconscious",0.1};
		};
		
		
		
		class CUP_T55_Driver_EP1: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\T55_Driver";
			connectTo[] = {"CUP_T55_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class CUP_T55_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\T55_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"unconscious",0.1};
		};
		class CUP_T55_DriverOut_EP1: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\T55_DriverOut";
			connectTo[] = {"CUP_T55_KIA_DriverOut_EP1",1};
			speed = 1e+010;
		};
		class CUP_T55_KIA_DriverOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\T55_KIA_DriverOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"unconscious",0.1};
		};
		class CUP_T55_Gunner_EP1: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\T55_Gunner";
			connectTo[] = {"CUP_T55_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class CUP_T55_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\T55_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"unconscious",0.1};
		};
		class CUP_T55_Commander_EP1: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\T55_Commander";
			connectTo[] = {"CUP_T55_KIA_Commander_EP1",1};
			speed = 1e+010;
		};
		class CUP_T55_KIA_Commander_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\T55_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"unconscious",0.1};
		};
		class CUP_KIA_T72_GunnerOut: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_T72_GunnerOut.rtm";
			connectTo[] = {"Unconscious",0.1};
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
		};
		class CUP_T72_GunnerOut: Crew
		{
			file = "\sg_cup_vehicles\data\anim\T72_GunnerOut.rtm";
			interpolateTo[] = {"CUP_KIA_T72_GunnerOut",1};
		};
		class CUP_M2A2_Commander_Edit: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\M2A2_Commander_Edit";
			connectTo[] = {"CUP_M2A2_KIA_CommanderOut_EP1",1};
			speed = 1e+010;
		};
		class CUP_M113_Driver_EP1: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\CUP_M113_Driver";
			interpolateTo[] = {"CUP_M113_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class CUP_M113_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\Data\Anim\CUP_M113_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_KIA_AAV_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Driver: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Driver.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Driver",1};
		};
		class CUP_KIA_AAV_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Gunner: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Gunner.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Gunner",1};
		};
		class CUP_KIA_AAV_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Commander: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Commander.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Commander",1};
		};
		class CUP_KIA_AAV_Driver_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Driver_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Driver_OUT: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Driver_OUT.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Driver_OUT",1};
		};
		class CUP_KIA_AAV_Gunner_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Gunner_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Gunner_Out_settlein: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Gunner_OUT_settlein.rtm";
			speed = 0.5;
			looped = 0;
			connectTo[] = {"CUP_AAV_Gunner_Out",0.1};
			interpolateTo[] = {"CUP_KIA_AAV_Gunner_Out",1};
			variantsPlayer[] = {"CUP_AAV_Gunner_Out",1};
			variantAfter[] = {1.5,1.5,1.5};
			useIdles = 0;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_AAV_Gunner_OUT: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Gunner_OUT.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Gunner_OUT",1};
		};
		class CUP_KIA_AAV_Commander_OUT: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\KIA_AAV_Commander_OUT.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CUP_AAV_Commander_Out_settlein: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Commander_OUT_settlein.rtm";
			speed = 0.5;
			looped = 0;
			connectTo[] = {"CUP_AAV_Commander_Out",0.1};
			interpolateTo[] = {"CUP_KIA_AAV_Commander_Out",1};
			variantsPlayer[] = {"CUP_AAV_Commander_Out",1};
			variantAfter[] = {1.5,1.5,1.5};
			useIdles = 0;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_AAV_Commander_OUT: Crew
		{
			file = "\sg_cup_vehicles\data\anim\AAV_Commander_OUT.rtm";
			interpolateTo[] = {"CUP_KIA_AAV_Commander_OUT",1};
		};
		class CUP_AAV_Cargo01: Crew
		{
			file = "\sg_cup_vehicles\data\anim\OutCargoLB.rtm";
			interpolateTo[] = {"KIA_passenger_apc_narrow_generic01",1};
		};
		class CUP_AAV_Cargo02: Crew
		{
			file = "\sg_cup_vehicles\data\anim\OutCargoLF.rtm";
			interpolateTo[] = {"KIA_passenger_apc_narrow_generic01",1};
		};
		class CUP_AAV_Cargo03: Crew
		{
			file = "\sg_cup_vehicles\data\anim\OutCargoRB.rtm";
			interpolateTo[] = {"KIA_passenger_apc_narrow_generic01",1};
		};
		class CUP_AAV_Cargo04: Crew
		{
			file = "\sg_cup_vehicles\data\anim\OutCargoRF.rtm";
			interpolateTo[] = {"KIA_passenger_apc_narrow_generic01",1};
		};
		class CUP_KIA_LAV25_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\DATA\anim\kia_lav25_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_LAV25_Driver: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_driver.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_Driver",1};
		};
		class CUP_LAV25_Driver_out: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_driver_turnout.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_Driver",1};
		};
		class CUP_KIA_LAV25_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\DATA\anim\kia_lav25_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_LAV25_Gunner: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_Gunner.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_Gunner",1};
		};
		class CUP_LAV25_Gunner_out: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_gunner_turnout.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_Gunner",1};
		};
		class CUP_KIA_LAV25_Gunner2: CUP_KIA_LAV25_Gunner
		{
			file = "\sg_cup_vehicles\Data\Anim\KIA_Abrams_CommanderOut.rtm";
		};
		class CUP_LAV25_Gunner2: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\Abrams_CommanderOut.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_Gunner2",1};
		};
		class CUP_KIA_LAV25_commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\DATA\anim\kia_lav25_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_LAV25_commander: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_commander.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_commander",1};
		};
		class CUP_LAV25_commander_out: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_commander_turnout.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_commander",1};
		};
		class CUP_LAV25_commander_out_mg: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_commander_turnout_m240.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_commander",1};
		};
		class CUP_LAV25_commander_out_C2_mg: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\lav25_commander_turnout_c2_m240.rtm";
			interpolateTo[] = {"CUP_KIA_LAV25_commander",1};
		};
		class CUP_ArmoredSUV_Gunner_PMC: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\SUVmatildaTurnOutPose.rtm";
			interpolateTo[] = {"CUP_ArmoredSUV_KIA_Gunner_PMC",1};
			speed = 1e+010;
		};
		class suv_cargo_front_left_side: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\suv_cargo_front_left_side.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = 1e+010;
		};
		class suv_cargo_front_right_side: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\suv_cargo_front_right_side.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = 1e+010;
		};
		class suv_cargo_back_side: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\suv_cargo_back_side.rtm";
			interpolateTo[] = {"Unconscious",1};
			speed = 1e+010;
		};
		class CUP_ArmoredSUV_GunnerIn_PMC: CUP_ArmoredSUV_Gunner_PMC
		{
			file = "\sg_cup_vehicles\data\Anim\SUVmatildaTurnInPose.rtm";
		};
		class CUP_ArmoredSUV_KIA_Gunner_PMC: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\Anim\SUVmatildaDeath.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_ArmoredSUV_GunnerTurnIn_PMC: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\SUVmatildaTurnIn.rtm";
			interpolateTo[] = {"CUP_ArmoredSUV_KIA_Gunner_PMC",1};
			connectTo[] = {"CUP_ArmoredSUV_GunnerIn_PMC",0.1};
			speed = 0.5;
			looped = 0;
		};
		class CUP_ArmoredSUV_GunnerTurnOut_PMC: Crew
		{
			file = "\sg_cup_vehicles\data\Anim\SUVmatildaTurnOut.rtm";
			interpolateTo[] = {"CUP_ArmoredSUV_KIA_Gunner_PMC",1};
			connectTo[] = {"CUP_ArmoredSUV_Gunner_PMC",0.1};
			speed = 0.5;
			looped = 0;
		};
		class CUP_KIA_Datsun_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "sg_cup_vehicles\data\anim\KIA_Datsun_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_Datsun_Driver: Crew
		{
			file = "sg_cup_vehicles\data\anim\Datsun_Driver.rtm";
			interpolateTo[] = {"CUP_KIA_Datsun_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_KIA_Datsun_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "sg_cup_vehicles\data\anim\KIA_Datsun_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_Datsun_Cargo01: Crew
		{
			file = "sg_cup_vehicles\data\anim\Datsun_Cargo01.rtm";
			interpolateTo[] = {"CUP_KIA_Datsun_Cargo01",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_KIA_Datsun_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "sg_cup_vehicles\data\anim\KIA_Datsun_Cargo02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_Datsun_Cargo02: Crew
		{
			file = "sg_cup_vehicles\data\anim\Datsun_Cargo02.rtm";
			interpolateTo[] = {"CUP_KIA_Datsun_Cargo02",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_KIA_Datsun_Cargo03: DefaultDie
		{
			actions = "DeadActions";
			file = "sg_cup_vehicles\data\anim\KIA_Datsun_Cargo03.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_Datsun_Cargo03: Crew
		{
			file = "sg_cup_vehicles\data\anim\Datsun_Cargo03.rtm";
			interpolateTo[] = {"CUP_KIA_Datsun_Cargo03",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_KIA_Datsun_Gunner01: DefaultDie
		{
			actions = "DeadActions";
			file = "sg_cup_vehicles\data\anim\KIA_Datsun_gunner01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_Datsun_Gunner01: Crew
		{
			file = "sg_cup_vehicles\data\anim\Datsun_Gunner01.rtm";
			interpolateTo[] = {"CUP_KIA_Datsun_Gunner01",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			useIdles = 0;
		};
		class CUP_KIA_V3S_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_cup_vehicles\data\anim\V3S_KIA_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class CUP_V3S_Driver: Crew
		{
			file = "\sg_cup_vehicles\data\anim\V3S_Driver.rtm";
			interpolateTo[] = {"CUP_KIA_V3S_Driver",1};
		};
		
		class CUP_KIA_RHIB_Driver: DefaultDie
		{
			file = "\sg_cup_vehicles\Data\Anim\KIA_RHIB_Driver.rtm";
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_RHIB_Driver: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\RHIB_Driver.rtm";
			interpolateTo[] = {"CUP_KIA_RHIB_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_RHIB_Gunner: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\RHIB_Gunner.rtm";
			interpolateTo[] = {"CUP_KIA_RHIB_Cargo",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_KIA_RHIB_Cargo: DefaultDie
		{
			file = "\sg_cup_vehicles\Data\Anim\KIA_RHIB_Cargo.rtm";
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class CUP_RHIB_Cargo: Crew
		{
			file = "\sg_cup_vehicles\Data\Anim\RHIB_Cargo.rtm";
			interpolateTo[] = {"CUP_KIA_RHIB_Cargo",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
	};
};

class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		CUP_AAV_Driver = "";
		CUP_AAV_Gunner = "";
		CUP_AAV_Commander = "";
		CUP_AAV_Driver_OUT = "";
		CUP_AAV_Gunner_OUT = "";
		CUP_AAV_Commander_OUT = "";
		CUP_AAV_Cargo01 = "crew";
		CUP_AAV_Cargo02 = "crew";
		CUP_AAV_Cargo03 = "crew";
		CUP_AAV_Cargo04 = "crew";
	};
};

class RscUnitInfo;
class RscControlsGroup;
class VScrollbar;
class HScrollbar;
class RscPicture;
class RscText;
class RscControlsGroupNoScrollbars;
class RscInGameUI
{
	
	class CUP_RscOptics_commander_NBECO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "----";
					x = "4.75 *   (0.01875 * SafezoneH)";
					y = "9.6 *   (0.025 * SafezoneH)";
					w = "8 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					idc = 202;
					colorText[] = {0.706,0.0745,0.0196,1};
					text = "MAX ZERO";
					y = "10.8 *   (0.025 * SafezoneH)";
				};
				class CA_LasedRange: RscText
				{
					idc = 198;
					style = 2;
					sizeEx = "0.040*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "2456";
					x = "21.15 *   (0.01875 * SafezoneH)";
					y = "30.1 *   (0.025 * SafezoneH)";
					w = "11 *   (0.01875 * SafezoneH)";
					h = "2 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "FLIR";
					x = "44 *   (0.01875 * SafezoneH)";
					y = "29.2 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	
	class RscWeaponCUP_T55_FCS: RscUnitInfo
	{
		idd = 300;
		onLoad = "if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this call CUP_fnc_sight_T55";
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
				class CUP_Sight: RscPicture
				{
					idc = 1;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_gun_cross.paa";
					x = "14.95 * (0.01875 * Safezoneh)";
					y = "-0.0455 * (0.025 * SafezoneH)";
					w = "25.5 *   (0.01875 * SafezoneH)";
					h = "25.5 *   (0.025 * SafezoneH)";
				};
				class CUP_SightBar: RscPicture
				{
					idc = 2;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706,0.0745,0.0196,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\sightBar.paa";
					x = "10. * (0.01875 * SafezoneH)";
					y = "4.56 * (0.025 * SafezoneH)";
					w = "35.5 *   (0.01875 * SafezoneH)";
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
			};
		};
	};
	class CUP_RscOptics_driver_CO: RscUnitInfo
	{
		idd = 300;
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
					x = "39 *   (0.01875 * SafezoneH)";
					y = "33 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.028*SafezoneH";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					x = "9.04 *   (0.01875 * SafezoneH)";
					y = "0.0 *   (0.025 * SafezoneH)";
					w = "35.18 *   (0.01875 * SafezoneH)";
					h = "2 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "2.25 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	
	class CUP_RscOptics_gunner_TNBECO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "----";
					x = "4.75 *   (0.01875 * SafezoneH)";
					y = "9.6 *   (0.025 * SafezoneH)";
					w = "8 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					idc = 202;
					colorText[] = {0.706,0.0745,0.0196,1};
					text = "MAX ZERO";
					y = "10.8 *   (0.025 * SafezoneH)";
				};
				class CA_LasedRange: RscText
				{
					idc = 198;
					style = 2;
					sizeEx = "0.040*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "2456";
					x = "21.15 *   (0.01875 * SafezoneH)";
					y = "30.1 *   (0.025 * SafezoneH)";
					w = "11 *   (0.01875 * SafezoneH)";
					h = "2 *   (0.025 * SafezoneH)";
				};
				class CA_FireSolutionValid: CA_LasedRange
				{
					idc = 200;
					text = "         RDY";
				};
				class CA_GunLayingDelay: CA_LasedRange
				{
					idc = 204;
					text = "LAY         ";
					blinkingPeriod = 0.5;
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "FLIR";
					x = "44 *   (0.01875 * SafezoneH)";
					y = "29.2 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_FlirMode: RscText
				{
					idc = 153;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "BHOT";
					x = "47.5 *   (0.01875 * SafezoneH)";
					y = "29.2 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	
	class CUP_RscOptics_gunner_CO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	
	class CUP_RscOptics_commander_CO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class CUP_RscOptics_gunner_NECO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "----";
					x = "4.75 *   (0.01875 * SafezoneH)";
					y = "9.6 *   (0.025 * SafezoneH)";
					w = "8 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					idc = 202;
					colorText[] = {0.706,0.0745,0.0196,1};
					text = "MAX ZERO";
					y = "10.8 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "FLIR";
					x = "44 *   (0.01875 * SafezoneH)";
					y = "29.2 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class CUP_RscOptics_commander_ECO: RscUnitInfo
	{
		idd = 300;
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
					color[] = {0.709,0.972,0.384,1};
					x = "5.25 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 *   (0.01875 * SafezoneH)";
					y = "3.5 *   (0.025 * SafezoneH)";
					w = "27.18 *   (0.01875 * SafezoneH)";
					h = "1 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 *   (0.01875 * SafezoneH)";
					y = "3.0 *   (0.025 * SafezoneH)";
					w = "0.5 *   (0.01875 * SafezoneH)";
					h = "0.5 *   (0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "1.75 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_OpticsPitch: RscText
				{
					idc = 182;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "----";
					x = "4.75 *   (0.01875 * SafezoneH)";
					y = "9.6 *   (0.025 * SafezoneH)";
					w = "8 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class TextOpticsPitch: CA_OpticsPitch
				{
					idc = 1008;
					text = "EL:     ";
				};
				class CA_MaxElevERR: CA_OpticsPitch
				{
					idc = 202;
					colorText[] = {0.706,0.0745,0.0196,1};
					text = "MAX ZERO";
					y = "10.8 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
	class CUP_RscOptics_driver_NCO: RscUnitInfo
	{
		idd = 300;
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
					x = "39 *   (0.01875 * SafezoneH)";
					y = "33 *   (0.025 * SafezoneH)";
					w = "6 *   (0.01875 * SafezoneH)";
					h = "6 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.028*SafezoneH";
					style = 1;
					color[] = {0.95,0.95,0.95,1};
					x = "9.04 *   (0.01875 * SafezoneH)";
					y = "0.0 *   (0.025 * SafezoneH)";
					w = "35.18 *   (0.01875 * SafezoneH)";
					h = "2 *   (0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.95,0.95,0.95,1};
					text = "015";
					x = "25.15 *   (0.01875 * SafezoneH)";
					y = "2.25 *   (0.025 * SafezoneH)";
					w = "3 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
				class CA_VisionMode: RscText
				{
					idc = 152;
					style = 0;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.95,0.95,0.95,1};
					text = "FLIR";
					x = "45 *   (0.01875 * SafezoneH)";
					y = "34 *   (0.025 * SafezoneH)";
					w = "4.5 *   (0.01875 * SafezoneH)";
					h = "1.2 *   (0.025 * SafezoneH)";
				};
			};
		};
	};
};

class cfgFunctions
{
	class CUP
	{
		class functions
		{
			class sight_t55
			{
				file = "\sg_cup_vehicles\functions\RDS_sight_T55.sqf";
				description = "FCS for T55";
			};
		};
		class TrackedVehicles_Core
		{
			class AAV_TurnOutFFV
			{
				description = "Animates cargo hatches on the AAV for FFV slots";
				file = "\sg_cup_vehicles\functions\fnc_AAV_TurnOutFFV.sqf";
				recompile = 0;
			};
			class moveAAV
			{
				description = "Workaround to move AAVs in water";
				file = "\sg_cup_vehicles\functions\fnc_moveAAV.sqf";
				recompile = 0;
			};
			class setVehicleVelocity
			{
				description = "Set a vehicles forward or backward velocity relative to its direction";
				file = "\sg_cup_vehicles\functions\fnc_setVehicleVelocity.sqf";
				recompile = 0;
			};
			class rotateVehicle
			{
				description = "Rotates a vehicle while moving";
				file = "\sg_cup_vehicles\functions\fnc_rotateVehicle.sqf";
				recompile = 0;
			};
		};
	};
};








class CfgAmmo
{
	class ShellBase;
	class ammo_Penetrator_Base;
	class CUP_P_3UBK9_HEAT: ammo_Penetrator_Base
	{
		caliber = 25.3333;
		warheadName = "HEAT";
		hit = 350;
	};	
	class CUP_Sh_3UBK9_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 2.5;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_3UBK9_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 1075;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"sg_cup_vehicles\data\sound\shorter.wss",2,1,500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};
	class CUP_Sh_3UOF10_HEFRAG: CUP_Sh_3UBK9_HEAT
	{
		hit = 300;
		indirectHit = 60;
		indirectHitRange = 12.5;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		typicalSpeed = 900;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
	class CUP_Sh_UBK367_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_3UBK9_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 792;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"sg_cup_vehicles\data\sound\shorter.wss",2,1,500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};	
	class CUP_Sh_UO367_HEFRAG: CUP_Sh_UBK367_HEAT
	{
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 12;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		typicalSpeed = 792;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class CUP_20Rnd_100mmHEAT_D10: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_100mm_HEAT";
		ammo = "CUP_Sh_3UBK9_HEAT";
		count = 20;
		initSpeed = 1045;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_100mm_HEAT";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class CUP_15Rnd_100mmHEFRAG_D10: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_100mm_HE";
		ammo = "CUP_Sh_3UOF10_HEFRAG";
		count = 15;
		initSpeed = 900;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_100mm_HE";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.5,3};
	};
	class CUP_40Rnd_85mmHEAT_D5: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_85mm_HEAT";
		ammo = "CUP_Sh_UBK367_HEAT";
		count = 40;
		initSpeed = 792;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_85mm_HEAT";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
	class CUP_20Rnd_85mmHEFRAG_D5: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_85mm_HE";
		ammo = "CUP_Sh_UO367_HEFRAG";
		count = 20;
		initSpeed = 792;
		maxLeadSpeed = 100;
		nameSound = "heat";
		displayNameShort = "$STR_85mm_HE";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0.3,2};
	};
	class rhs_mag_762x54mm_100;
	class sg_mag_762x54mm_63: rhs_mag_762x54mm_100
	{
		displayName = "$STR_SG_DT_MAG";
		displayNameShort = "$STR_SG_DT_MAG_SHORT";
		count = 63;
		tracersEvery = 3;
	};
};


class CfgSoundShaders
{
	class CUP_autocannon_0m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\0m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\0m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\0m_3",1}};
		volume = 2.412;
		range = 50;
		rangeCurve[] = {{0,1},{50,0}};
	};
	class CUP_autocannon_50m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\50m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\50m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\50m_3",1}};
		volume = 1.6252;
		range = 150;
		rangeCurve[] = {{0,0},{50,1},{150,0}};
	};
	class CUP_autocannon_150m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\150m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\150m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\150m_3",1}};
		volume = 1.464;
		range = 550;
		rangeCurve[] = {{0,0},{50,0},{150,1},{550,0}};
	};
	class CUP_autocannon_550m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\550m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\550m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\550m_3",1}};
		volume = 0.823;
		range = 1000;
		rangeCurve[] = {{0,0},{150,0},{550,1},{1000,0}};
	};
	class CUP_autocannon_1000m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\1000m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\1000m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\1000m_3",1}};
		volume = "(0.34-(interior*0.34))";
		range = 1800;
		rangeCurve[] = {{0,0},{550,0},{1000,1},{1800,0}};
	};
	class CUP_autocannon_1800m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\1800m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\1800m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\1800m_3",1}};
		volume = "(0.35-(interior*0.35))";
		range = 3900;
		rangeCurve[] = {{0,0},{1000,0},{1800,1},{3900,0}};
	};
	class CUP_autocannon_Meadows_0m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Meadows_0m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Meadows_0m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Meadows_0m_3",1}};
		volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 350;
		rangeCurve[] = {{0,1},{350,0}};
		limitation = 1;
	};
	class CUP_autocannon_Meadows_350m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Meadows_350m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Meadows_350m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Meadows_350m_3",1}};
		volume = "5.45*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 3700;
		rangeCurve[] = {{0,0},{350,1},{3700,0}};
		limitation = 1;
	};
	class CUP_autocannon_Houses_0m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Houses_0m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Houses_0m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Houses_0m_3",1}};
		volume = "5.45*((1-interior/1.4)*houses/3)";
		range = 350;
		rangeCurve[] = {{0,1},{350,0}};
		limitation = 1;
	};
	class CUP_autocannon_Houses_350m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Houses_350m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Houses_350m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Houses_350m_3",1}};
		volume = "5.45*((1-interior/1.4)*houses/3)";
		range = 3700;
		rangeCurve[] = {{0,0},{350,1},{3700,0}};
		limitation = 1;
	};
	class CUP_autocannon_Trees_0m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\forest_0m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\forest_0m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\forest_0m_3",1}};
		volume = "5.45*((1-interior/1.4)*trees/3)";
		range = 350;
		rangeCurve[] = {{0,1},{350,0}};
		limitation = 1;
	};
	class CUP_autocannon_Trees_350m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\forest_350m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\forest_350m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\forest_350m_3",1}};
		volume = "5.45*((1-interior/1.4)*trees/3)";
		range = 3700;
		rangeCurve[] = {{0,0},{350,1},{3700,0}};
		limitation = 1;
	};
	class CUP_autocannon_Forest_0m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Forest_0m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Forest_0m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Forest_0m_3",1}};
		volume = "5.45*((1-interior/1.4)*Forest/3)";
		range = 350;
		rangeCurve[] = {{0,1},{350,0}};
		limitation = 1;
	};
	class CUP_autocannon_Forest_350m_SoundShader
	{
		samples[] = {{"\sg_cup_vehicles\data\sound\autocannon\Forest_350m_1",1},{"\sg_cup_vehicles\data\sound\autocannon\Forest_350m_2",1},{"\sg_cup_vehicles\data\sound\autocannon\Forest_350m_3",1}};
		volume = "5.45*(1.4*((1-interior/1.4)*forest/3))";
		range = 3700;
		rangeCurve[] = {{0,0},{350,1},{3700,0}};
		limitation = 1;
	};
};

class CfgSoundCurves
{
	class CUP_miniCannonSoundCurve
	{
		points[] = {{0.0,1},{0.001,0.97},{0.005,0.92},{0.1,0.8775},{0.2,0.7996},{0.4,0.6133},{0.6,0.5215},{0.8,0.3768},{0.9,0.2368},{1.0,0}};
	};
	class CUP_cannonSoundCurve
	{
		points[] = {{0.0,1},{0.001,0.97},{0.005,0.96},{0.1,0.9475},{0.2,0.8796},{0.4,0.6833},{0.6,0.6215},{0.8,0.4968},{0.9,0.3368},{1.0,0}};
	};
};

class cfgDistanceFilters
{
	class CUP_defaultDistanceFilter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 150;
		qFactor = 1;
		innerRange = 400;
		range = 2600;
		powerFactor = 32;
	};
};

class CfgSound3DProcessors
{
	class CUP_Cannon_3DProcessingType
	{
		type = "panner";
		innerRange = 100;
		range = 100;
		rangeCurve = "InverseSquare2Curve";
	};
};

class CfgSoundSets
{
	class CUP_autocannon_Shot_SoundSet
	{
		soundShaders[] = {
			"CUP_autocannon_0m_SoundShader",
			"CUP_autocannon_50m_SoundShader",
			"CUP_autocannon_150m_SoundShader",
			"CUP_autocannon_550m_SoundShader",
			"CUP_autocannon_1000m_SoundShader",
			"CUP_autocannon_1800m_SoundShader"
			};
		volumeFactor = 1.25;
		volumeCurve = "CUP_miniCannonSoundCurve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "CUP_defaultDistanceFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	class CUP_autocannon_Tail_SoundSet
	{
		soundShaders[] = {
			"CUP_autocannon_Meadows_0m_SoundShader",
			"CUP_autocannon_Meadows_350m_SoundShader",
			"CUP_autocannon_Houses_0m_SoundShader",
			"CUP_autocannon_Houses_350m_SoundShader",
			"CUP_autocannon_Trees_0m_SoundShader",
			"CUP_autocannon_Trees_350m_SoundShader",
			"CUP_autocannon_Forest_0m_SoundShader",
			"CUP_autocannon_Forest_350m_SoundShader"
			};
		volumeFactor = 1;
		volumeCurve = "CUP_cannonSoundCurve";
		sound3DProcessingType = "CUP_Cannon_3DProcessingType";
		soundShadersLimit = 2;
		distanceFilter = "CUP_defaultDistanceFilter";
		frequencyRandomizer = 0.1;
		occlusionFactor = 0.3;
		obstructionFactor = 0;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class cfgWeapons
{
	class cannon_125mm;
	class CUP_Vacannon_D10: cannon_125mm
	{
		scope = 1;
		displayName = "$STR_CUP_DN_D10";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		cursorSize = 1;
		class StandardSound
		{
			soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
		};
		magazines[] = {"CUP_20Rnd_100mmHEAT_D10","CUP_15Rnd_100mmHEFRAG_D10"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 8;
		magazineReloadTime = 8;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = 2;
	};
	class CUP_Vacannon_D5_T34: cannon_125mm
	{
		scope = 1;
		displayName = "$STR_SG_CUP_D5";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		cursorSize = 1;
		class StandardSound
		{
			soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
		};
		magazines[] = {"CUP_40Rnd_85mmHEAT_D5","CUP_20Rnd_85mmHEFRAG_D5"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 8;
		magazineReloadTime = 6;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = 2;
	};
	
	class MGun;
	class rhs_weap_pkt;
	class SG_PKT: rhs_weap_pkt
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
		};	
	};
	
	class SG_PKT_open: rhs_weap_pkt
	{
		displayName = "$STR_SG_PKT_open";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
			class SecondEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class ThirdEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunEject";
			};
		};	
	};
	
	class SG_DT: rhs_weap_pkt
	{
		displayName = "$STR_SG_DT";
		magazines[] = {"sg_mag_762x54mm_63"};
		aiDispersionCoefY = 15;
		aiDispersionCoefX = 20;
		initSpeed = 0;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "pkt_coax";
				directionName = "pkt_coax_dir";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_SG_DT";
			autoFire = 1;
			reloadTime = 0.075;
			dispersion = 0.00125;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 4;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};
	};
	class SG_DT_2: SG_DT
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
		};
	};
	
	class RHS_M2_M1117;
	class SG_M2: RHS_M2_M1117
	{
		class GunParticles
		{
			class FirstEffect
			{
				positionName = "machinegun_start";
				directionName = "machinegun_end";
				effectName = "MachineGunCloud";
			};
		};
	};
	
	class RHS_MK19;
	class SG_MK19_veh: RHS_MK19
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "gmg_start";
				directionName = "gmg_end";
				effectName = "GrenadeLauncherCloud";
			};
			class effect2
			{
				positionName = "gmg_eject_pos";
				directionName = "gmg_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
	};
	
	class RHS_weap_M242BC;
	class SG_M242_veh: RHS_weap_M242BC
	{	
		class GunParticles
		{
			class Effect1
			{
				effectName = "AutoCannonFired";
				positionName = "m242_beg";
				directionName = "m242_end";
			};
			class Effect2
			{
				positionName = "m242_eject_pos";
				directionName = "m242_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
	};
	
	class rhs_weap_m240_bradley_coax;
	class SG_M240_coax: rhs_weap_m240_bradley_coax
	{	
		class gunParticles
		{
			class effect1
			{
				positionName = "m240_veh_eject_pos";
				directionName = "m240_veh_eject_dir";
				effectName = "RHS_HeavyGunCartridge1";
			};
			class effect2
			{
				positionName = "m240_veh_end";
				directionName = "m240_veh_beg";
				effectName = "MachineGun1";
			};
			class effect3
			{
				positionName = "m240_veh_eject_dir";
				directionName = "m240_veh_eject_pos";
				effectName = "MachineGunEject";
			};		
		};
	};
	
	class SG_M240_veh: SG_M240_coax
	{
		class gunParticles
		{
			class effect1
			{
				positionName = "m240_veh3_eject_pos";
				directionName = "m240_veh3_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "m240_veh3_end";
				directionName = "m240_veh3_beg";
				effectName = "MachineGun1";
			};
			class effect3
			{
				positionName = "m240_veh3_eject_dir";
				directionName = "m240_veh3_eject_pos";
				effectName = "MachineGunEject";
			};
		};
		muzzlePos = "usti hlavne3";
		muzzleEnd = "konec hlavne3";
	};
	
	class rhs_weap_m134_minigun_1;
	class SG_M134: rhs_weap_m134_minigun_1
	{
		magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
		displayName = "M134";
		class gunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "muzzle_1";
				directionName = "chamber_1";
			};
			class RHSUSF_BarrelRefract
			{
				positionName = "muzzle_1";
				directionName = "muzzle_1";
				effectName = "RHSUSF_BarrelRefractHeavy";
			};
		};	
	};
	
};






class RCWSOptics;
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class FDustEffects_none{};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class NewTurret;
		class CargoTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
		class ViewPilot;
		class Eventhandlers;
		class AnimationSources;
	};
	class Wheeled_APC_F: Car_F
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class AnimationSources;
		class EventHandlers;
	};
	
	
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics;
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
		class Periscope;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class SG_T34_Base: Tank_F  //Двигатель Т-34-85
	{
		scope = 1;
		author = "$STR_SG_CUP";
		displayName = "T-34-85";
		simulation = "tankX";
		maxSpeed=55;
		enginePower = 370;
		engineMOI = 10;
		minOmega = 63;
		maxOmega = 209;
		peakTorque = 2157;
		
		class ViewOptics: ViewOptics
		{
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
		};	
		
		torqueCurve[] = {
		{__EVAL(600/1800),__EVAL(1200/2157)},
		{__EVAL(800/1800),__EVAL(1700/2157)},
		{__EVAL(1100/1800),__EVAL(2157/2157)},
		{__EVAL(1200/1800),__EVAL(2157/2157)},
		{__EVAL(1300/1800),__EVAL(2060/2157)},
		{__EVAL(1500/1800),__EVAL(1970/2157)},
		{__EVAL(1700/1800),__EVAL(1750/2157)},
		{__EVAL(2000/1800),__EVAL(0/2157)}
		};
		
		thrustDelay = 0.0;
		engineBrakeCoef	 = 0.9;
		clutchStrength = 180.0;
		fuelCapacity = 520;
		brakeIdleSpeed = 1.78;
		latency = 1;
		tankTurnForce = 0.75e6;
		tankTurnForceAngMinSpd	= 0.70;	
		tankTurnForceAngSpd		= 0.92;	
		idleRpm = 600;
		redRpm = 1800;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5,0.15,0.95,0.98,0.95,0.96,0.96999997};
		
		accelAidForceCoef = 0;
		accelAidForceYOffset	= 0;	
		accelAidForceSpd = 0;
		
		enableGPS = 0;
		
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-7,"N",0,"D1",5.57,"D2",2.6,"D3",1.855,"D4",1.215,"D5",1};
			TransmissionRatios[] = {"High",20};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 25.1;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 40000;
				sprungMass = 4000.0;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1.0;
				dampingRateInAir = 8030.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.15;
				maxCompression = 0.15;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		model = "\sg_cup_vehicles\CUP_T34";
		picture = "\sg_cup_vehicles\data\Ico\picture_t34_ca.paa";
		Icon = "\sg_cup_vehicles\data\Ico\icon_t34_ca.paa";
		mapSize = 10;
		driverAction = "SG_T34_Driver";
		driverInAction = "SG_T34_Driver";
		destrType = "DestructDefault";
		driverWeaponsInfoType = "CUP_RscOptics_driver_CO";
		visionMode[] = {"Normal"};
		armor = 215;
		armorStructural = 2.5;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.99;
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneControlActions[] = {"all"};
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhonePosition[] = {0,0,0};
		acre_infantryPhoneIntercom[] = {"all"};
		
		

		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				masterPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set";
				shortName = "Radio";
				componentname = "ACRE_VRC64";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.6;
				material = -1;
				name = "telo";
				armorComponent = "hit_hull";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.24;
				explosionShielding = 0.009;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.45;
				material = -1;
				name = "motor";
				armorComponent = "hit_engine";
				passThrough = "0,2";
				minimalHit = 0.139;
				explosionShielding = 0.015;
				radius = 0.27;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_trackL";
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_trackR";
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
		};
		threat[] = {0.4,0.4,0};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo05"};
		hiddenselectionstextures[] = {"\sg_cup_vehicles\Data\T34_Body01_CO.paa","\sg_cup_vehicles\Data\T34_Body02_CO.paa","\sg_cup_vehicles\Data\T34_Turret_CO.paa","\sg_cup_vehicles\Data\T34_Wheels_CO.paa","\sg_cup_vehicles\Data\T34_Body03_CO.paa"};
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
			minAngleX = -5;
			maxAngleX = 5;
			initAngleY = 0;
			minAngleY = -15;
			maxAngleY = 15;
			//initFov = 0.3;
			//minFov = 0.98;
			//maxFov = 0.3;
			
		};
		accuracy = 0.2;
		forceHideDriver = 0;
		driverForceOptics = 1;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				LODTurnedOut = 1;
				maxHorizontalRotSpeed = 0.34;
				maxVerticalRotSpeed = 0.1;
				gunnerAction = "CUP_T72_GunnerOut";
				gunnerInAction = "CUP_T55_Gunner_EP1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				weapons[] = {"CUP_Vacannon_D5_T34","SG_DT"};
				selectionFireAnim = "zasleh";
				magazines[] = {"CUP_40Rnd_85mmHEAT_D5","CUP_20Rnd_85mmHEFRAG_D5",
				
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63"
				
				};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				stabilizedInAxes = 0;
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				turretInfoType = "CUP_RscOptics_gunner_CO";
				minElev = -6;
				maxElev = 14;
				initElev = 0;
				ace_fcs_enabled = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal"};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initanglex = 0;
						initangley = 0;
						initfov = "0.7/ 4";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.7/4";
						minanglex = -30;
						minangley = -100;
						minfov = "0.7/4";
						gunnerOpticsModel = "\sg_cup_vehicles\2Dscope_t34";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType = "CUP_RscOptics_commander_CO";
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_2";
						LODTurnedOut = 1;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						weapons[] = {};
						magazines[] = {};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "CUP_M2A2_Commander_Edit";
						gunnerInAction = "CUP_M2A2_Commander_Edit";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						stabilizedInAxes = 2;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						forceNVG = 0;
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
						startEngine = 0;
						memoryPointGunnerOutOptics = "CommanderViewOut2";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_2";
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						commanding = 2;
						gunnerOutOpticsModel = "";
						class OpticsIn: OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = "0.7/1.5";
								minFov = "0.7/1.5";
								maxFov = "0.7/1.5";
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
								gunnerOutOpticsModel = "";
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 2;
						material = -1;
						name = "vez";
						visual = "vez";
						armorComponent = "hit_main_turret";
						passThrough = 0;
						minimalHit = 0.14;
						explosionShielding = 0.001;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						armorComponent = "hit_main_gun";
						visual = "";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
			};
			class FrontGunner: MainTurret
			{
				gunnerName = "$STR_SG_Radist";
				gunBeg = "FrontGunner_muzzle";
				gunEnd = "FrontGunner_chamber";
				body = "FrontGunnerTurret";
				gun = "FrontGunnerGun";
				animationSourceBody = "FrontGunnerTurret";
				animationSourceGun = "FrontGunnerGun";
				memoryPointGun = "FrontGunner_muzzle";
				memoryPointGunnerOptics = "FrontGunnerview";
				discreteDistance[] = {100,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscWeaponZeroing";
				primaryGunner = 0;
				commanding = -1;
				ace_fcs_enabled = 0;
				class Turrets{};
				proxyIndex = 2;
				weapons[] = {"SG_DT_2"};
				selectionFireAnim = "zasleh1";
				magazines[] = {
					
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63",
				"sg_mag_762x54mm_63"
				
				};
				startEngine = 0;
				stabilizedInAxes = 0;
				minElev = -16;
				maxElev = 16;
				initElev = 0;
				minTurn = -16;
				maxTurn = 16;
				initTurn = 0;
				forceHideGunner = 1;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initanglex = 0;
						initangley = 0;
						initfov = "0.35";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.35";
						minanglex = -30;
						minangley = -100;
						minfov = "0.35";
						gunnerOpticsModel = "\sg_cup_vehicles\dt_sight";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				commanding = -2;
				gunnerName = "$STR_PASSANGER_F_L";
				gunnerCompartments = "Compartment2";
				gunnerUsesPilotView = 0;
				gunnerAction = "passenger_bench_1";
				primaryGunner = 0;
				isCopilot = 0;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				caneject = 1;
				weapons[] = {};
				magazines[] = {};
				gunnerForceOptics = 0;
				startEngine = 0;
				ejectDeadGunner = 1;
				isPersonTurret = 1;
				canHideGunner = 0;
				minElev = -20;
				maxElev = 35;
				initElev = 0;
				minTurn = -75;
				maxTurn = 75;
				initTurn = 0;
				class dynamicViewLimits{};
				class ViewPilot: ViewPilot
				{
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 0;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -170;
					maxAngleY = 170;
				};
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_M_L";
				proxyIndex = 2;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_T_L";
				proxyIndex = 3;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_R_L";
				proxyIndex = 4;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo rear dir";
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_F_R";
				proxyIndex = 5;
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
			class CargoTurret_06: CargoTurret_05
			{
				gunnerName = "$STR_PASSANGER_M_R";
				proxyIndex = 6;
			};
			class CargoTurret_07: CargoTurret_05
			{
				gunnerName = "$STR_PASSANGER_T_R";
				proxyIndex = 7;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			};
			class CargoTurret_08: CargoTurret_05
			{
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 8;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo rear dir";
			};
		};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",1.0,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",1.0,1.0,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1.0,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1.0,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1.0,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1.0,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",0.56234133,1,160};
				frequency = "0.95 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",0.7943282,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",0.8912509,1,260};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",1.0,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",1.1220185,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",1.2589254,1,320};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",1.0,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",1.1220185,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",1.2589254,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",1.4125376,1,340};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",1.7782794,1,360};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",1.9952624,1,380};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",3.1622777,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",3.1622777,1.0,250};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\T34_body01.rvmat","sg_cup_vehicles\Data\T34_body01_damage.rvmat","sg_cup_vehicles\Data\T34_body01_destruct.rvmat","sg_cup_vehicles\Data\T34_body02.rvmat","sg_cup_vehicles\Data\T34_body02_damage.rvmat","sg_cup_vehicles\Data\T34_body02_destruct.rvmat","sg_cup_vehicles\Data\T34_Turret.rvmat","sg_cup_vehicles\Data\T34_Turret_damage.rvmat","sg_cup_vehicles\Data\T34_Turret_destruct.rvmat","sg_cup_vehicles\Data\T34_Wheels.rvmat","sg_cup_vehicles\Data\T34_Wheels_damage.rvmat","sg_cup_vehicles\Data\T34_Wheels_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				//weapon = "CUP_Vacannon_D10";
				weapon = "CUP_Vacannon_D5_T34";
			};
			class HatchC
			{
				source = "door";
				animPeriod = 0.8;
			};
			class HatchG: HatchC{};
			class HatchD: HatchC{};
		};
		class textureSources
		{
			class TKA
			{
				displayName = "Takistani Army";
				author = "$STR_SG_CUP";
				textures[] = {"\sg_cup_vehicles\Data\T34_Body01_IND_CO.paa","\sg_cup_vehicles\Data\T34_Body02_IND_CO.paa","\sg_cup_vehicles\Data\T34_Turret_IND_CO.paa","\sg_cup_vehicles\Data\T34_Wheels_IND_CO.paa","\sg_cup_vehicles\Data\T34_Body03_IND_CO.paa"};
				factions[] = {};
			};
			class NAPA
			{
				displayName = "NAPA";
				author = "$STR_SG_CUP";
				textures[] = {"\sg_cup_vehicles\Data\T34_Body01_CO.paa","\sg_cup_vehicles\Data\T34_Body02_CO.paa","\sg_cup_vehicles\Data\T34_Turret_CO.paa","\sg_cup_vehicles\Data\T34_Wheels_CO.paa","\sg_cup_vehicles\Data\T34_Body03_CO.paa"};
				factions[] = {};
			};
			class TKG
			{
				displayName = "Takistani Guerilla";
				author = "$STR_SG_CUP";
				textures[] = {"\sg_cup_vehicles\Data\T34_Body01_CO.paa","\sg_cup_vehicles\Data\T34_Body02_CO.paa","\sg_cup_vehicles\Data\T34_Turret_CO.paa","\sg_cup_vehicles\Data\T34_Wheels_CO.paa","\sg_cup_vehicles\Data\T34_Body03_CO.paa"};
				factions[] = {};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[] = {190,130,95};
				ambient[] = {0.07,0.07,0.07,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 1;
			};
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class CommanderLight: LeftLight
			{
				position = "COM svetlo";
				direction = "konec COM svetla";
				hitpoint = "COM svetlo";
				selection = "COM svetlo";
			};
		};
		aggregateReflectors[] = {{"CommanderLight"},{"LeftLight"},{"RightLight"}};
		ace_refuel_fuelCapacity = 810;
		maximumLoad = 2500;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};		
	};
	class SG_I_T34: SG_T34_Base
	{
		scope = 2;
		side = 2;
		accuracy = 0.3;
		faction = "IND_G_F";
		crew = "I_G_soldier_F";
		typicalCargo[] = {"I_G_soldier_F"};
		author = "$STR_SG_CUP";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_I_T34_NAPA.jpg";		
	};
	class SG_O_T34: SG_T34_Base
	{
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		typicalCargo[] = {"O_Soldier_F"};
		author = "$STR_SG_CUP";
		hiddenselectionstextures[] = {"\sg_cup_vehicles\Data\T34_Body01_IND_CO.paa","\sg_cup_vehicles\Data\T34_Body02_IND_CO.paa","\sg_cup_vehicles\Data\T34_Turret_IND_CO.paa","\sg_cup_vehicles\Data\T34_Wheels_IND_CO.paa","\sg_cup_vehicles\Data\T34_Body03_IND_CO.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_O_T34_TKA.jpg";
	};
	
	
	
	class SG_T55_Base: Tank_F  //Двигатель Т-55
	{
		expansion = 3;
		displayName = "T-55";
		model = "\sg_cup_vehicles\CUP_T55.p3d";
		picture = "\sg_cup_vehicles\Data\UI\Picture_t55_CA.paa";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_t55_CA.paa";
		mapSize = 10;
		driverForceOptics = 1;
		driverAction = "CUP_M113_Driver_EP1";
		driverInAction = "CUP_T55_Driver_EP1";
		forceNVG = 1;
		tracksSpeed = 0.25;
		driverWeaponsInfoType = "CUP_RscOptics_driver_CO";
		simulation = "tankX";
		enginePower = 209;
		maxOmega = 209.44;
		peakTorque = 1176;
		torqueCurve[] = {{"(000/2000)",0},{"(600/2000)","(1700/2245)"},{"(800/2000)","(1950/2245)"},{"(1200/2000)","(2150/2245)"},{"(1400/2000)","(2245/2245)"},{"(1600/2000)","(1675/2245)"},{"(2000/2000)","(1200/2245)"},{"(3000/2000)",0}};
		thrustDelay = 0.6;
		clutchStrength = 80.0;
		fuelCapacity = 520;
		brakeIdleSpeed = 1.78;
		latency = 1.1;
		tankTurnForce = 330000;
		idleRpm = 500;
		redRpm = 1200;
		engineLosses = 25;
		transmissionLosses = 15;
		changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95,0.75};
		normalSpeedForwardCoef = 0.7;
		class complexGearbox
		{
			GearboxRatios[] = {"R2",-15.0,"N",0,"D1",1.25,"D2",1.2,"D3",1.15,"D4",1.05,"D5",0.95};  //деф. задней передачи -7
			TransmissionRatios[] = {"High",11.8};
			gearBoxMode = "auto";
			moveOffGear = 0;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.6;
		};
		class Wheels
		{
			class L2
			{
				wheelBrakeFrictionCoef = 0.01;
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 27.6;
				latStiffX = 24;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 4000.0;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1.0;
				dampingRateInAir = 7295.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		scope = 0;
		accuracy = 0.8;
		armor = 360;
		armorStructural = 3.5;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.995;
		damageResistance = 0.00843;
		destrType = "DestructDefault";
		cost = 1500000;
		acre_hasInfantryPhone = 1;
		acre_infantryPhoneControlActions[] = {"all"};
		acre_infantryPhoneDisableRinging = 0;
		acre_infantryPhonePosition[] = {0,0,0};
		acre_infantryPhoneIntercom[] = {"all"};
		
				
		class ViewOptics: ViewOptics
		{
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
		};	
		
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {};
				masterPositions[] = {};
				numLimitedPositions = 0;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set";
				shortName = "Radio";
				componentname = "ACRE_VRC64";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC77";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.6;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.24;
				explosionShielding = 0.009;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.45;
				material = -1;
				name = "motor";
				passThrough = 0;
				minimalHit = 0.139;
				explosionShielding = 0.015;
				radius = 0.27;
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.25;
				material = -1;
				name = "pas_L";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.25;
				material = -1;
				name = "pas_P";
				passThrough = 0;
				minimalHit = 0.25;
				explosionShielding = 0.02;
				radius = 0.3;
			};
		};
		maxSpeed = 48;
		supplyRadius = 5;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectTankBack";
			};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"db-85",1};
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",1.0,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",1.0,1.0,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1.0,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1.0,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1.0,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1.0,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",0.56234133,1,160};
				frequency = "0.95 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",0.7943282,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",0.8912509,1,260};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",1.0,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",1.1220185,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",1.2589254,1,320};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",1.0,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",1.1220185,1,280};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",1.2589254,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",1.4125376,1,340};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",1.7782794,1,360};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",1.9952624,1,380};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(500/ 2300),(650/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(100/ 2300),(400/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(610/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(600/ 2300),(1100/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(550/ 2300),(700/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(760/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(770/ 2300),(1400/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(720/ 2300),(1060/ 2300)]) * ((rpm/ 2300) factor[(1400/ 2300),(1180/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1150/ 2300),(1700/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1130/ 2300),(1370/ 2300)]) * ((rpm/ 2300) factor[(1700/ 2300),(1500/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1500/ 2300),(2100/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1460/ 2300),(1670/ 2300)]) * ((rpm/ 2300) factor[(2100/ 2300),(1800/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1800/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1750/ 2300),(2050/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",3.1622777,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",3.1622777,1.0,250};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-0) max 0)/ 95),(((-10) max 10)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-25) max 25)/ 95),(((-15) max 15)/ 95)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-20) max 20)/ 95),(((-35) max 35)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-55) max 55)/ 95),(((-40) max 40)/ 95)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-45) max 45)/ 95),(((-55) max 55)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-70) max 70)/ 95),(((-60) max 60)/ 95)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 95) factor[(((-65) max 65)/ 95),(((-70) max 70)/ 95)]) * ((((-speed*3.6) max speed*3.6)/ 95) factor[(((-85) max 85)/ 95),(((-80) max 80)/ 95)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 95) factor[(((-80) max 80)/ 95),(((-90) max 90)/ 95)])";
			};
		};
		radarType = 4;
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				isPersonTurret = 1;
				LODTurnedOut = 1;
				gunnerAction = "passenger_bench_1";
				gunnerInAction = "CUP_T55_Gunner_EP1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				weapons[] = {"CUP_Vacannon_D10","SG_PKT"};
				selectionFireAnim = "zasleh";
				magazines[] = {
					"CUP_20Rnd_100mmHEAT_D10",
					"CUP_15Rnd_100mmHEFRAG_D10",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250"
					};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				stabilizedInAxes = 0;
				maxHorizontalRotSpeed = 0.33;
				maxVerticalRotSpeed = 0.1;
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
				visionMode[] = {"Normal","NVG"};
				turretInfoType = "CUP_RscOptics_gunner_NECO";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				ace_fcs_enabled = 0;
				minElev = -3;
				maxElev = 18;
				initElev = 0;
				minOutElev = -20;
				maxOutElev = 70;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG"};
				};
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466666;
						minFov = 0.466666;
						maxFov = 0.466666;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG"};
						thermalMode[] = {4,5};
						gunnerOpticsModel = "\sg_cup_vehicles\optika_t72_gunner.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						gunnerOpticsModel = "\sg_cup_vehicles\optika_t72_gunner.p3d";
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						turretInfoType = "CUP_RscOptics_commander_ECO";
						isPersonTurret = 1;
						LODTurnedOut = 1;
						weapons[] = {};
						magazines[] = {};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "passenger_bench_1";
						gunnerInAction = "CUP_T55_Commander_EP1";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						stabilizedInAxes = 2;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						minOutElev = -40;
						maxOutElev = 70;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						forceNVG = 1;
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
						startEngine = 0;
						memoryPointGunnerOutOptics = "CommanderViewOut";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_2";
						gunnerOutOpticsModel = "";
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						commanding = 2;
						viewGunnerInExternal = 0;
						class OpticsIn
						{
							class Wide
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = 0.155;
								minFov = 0.034;
								maxFov = 0.155;
								gunnerOpticsModel = "\sg_cup_vehicles\TPK1";
								visionMode[] = {"Normal","NVG"};
								thermalMode[] = {4,5};
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 2;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.3;
						explosionShielding = 0.001;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "zbran";
						visual = "";
						passThrough = 0;
						minimalHit = 0.13;
						explosionShielding = 0.001;
						radius = 0.25;
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				commanding = -2;
				gunnerName = "$STR_PASSANGER_T_L";
				gunnerCompartments = "Compartment2";
				gunnerUsesPilotView = 0;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				primaryGunner = 0;
				isCopilot = 0;
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				caneject = 1;
				weapons[] = {};
				magazines[] = {};
				gunnerForceOptics = 0;
				startEngine = 0;
				ejectDeadGunner = 1;
				isPersonTurret = 1;
				canHideGunner = 0;
				minElev = -20;
				maxElev = 35;
				initElev = 0;
				minTurn = -75;
				maxTurn = 75;
				initTurn = 0;
				class dynamicViewLimits{};
				class ViewPilot: ViewPilot
				{
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 0;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -170;
					maxAngleY = 170;
				};
				soundAttenuationTurret = "";
				disableSoundAttenuation = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_T_R";
				proxyIndex = 2;
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "$STR_PASSANGER_F_L";
				proxyIndex = 3;
				gunnerAction = "passenger_flatground_2";
				minTurn = -25;
				maxTurn = 75;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_PASSANGER_F_R";
				proxyIndex = 4;
				gunnerAction = "passenger_flatground_2";
				minTurn = -75;
				maxTurn = 25;
			};
			class CargoTurret_05: CargoTurret_03
			{
				gunnerName = "$STR_PASSANGER_R_L";
				proxyIndex = 5;
				minTurn = -75;
				maxTurn = 75;
			};
			class CargoTurret_06: CargoTurret_04
			{
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 6;
				minTurn = -75;
				maxTurn = 75;
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "CUP_Vacannon_D10";
			};
			class muzzle_hide_main
			{
				source = "reload";
				weapon = "SG_PKT";
			};
			class muzzle_rot_main
			{
				source = "ammorandom";
				weapon = "SG_PKT";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\t55_body_co","\sg_cup_vehicles\data\t55_tower_co"};
		class textureSources
		{
			class olive
			{
				displayName = "Olive";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_olive_co.paa","\sg_cup_vehicles\data\t55_tower_olive_co.paa"};
				factions[] = {};
			};
			class CHDKZ
			{
				displayName = "CHDKZ";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_CHDKZ_co.paa","\sg_cup_vehicles\data\t55_tower_CHDKZ_co.paa"};
				factions[] = {};
			};
			class TKA
			{
				displayName = "Takistani Army";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_co.paa","\sg_cup_vehicles\data\t55_tower_co.paa"};
				factions[] = {};
			};
			class TKG
			{
				displayName = "Takistani Guerilla";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_TKG_co.paa","\sg_cup_vehicles\data\t55_tower_TKG_co.paa"};
				factions[] = {};
			};
			class SLA
			{
				displayName = "Sahrani Liberation Army";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_sla_co.paa","\sg_cup_vehicles\data\t55_tower_sla_co.paa"};
				factions[] = {};
			};
			class CSAT
			{
				displayName = "CSAT";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_csat_co.paa","\sg_cup_vehicles\data\t55_tower_csat_co.paa"};
				factions[] = {};
			};
			class CSAT_T
			{
				displayName = "CSAT Tropical";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\t55_body_csat_t_co.paa","\sg_cup_vehicles\data\t55_tower_csat_t_co.paa"};
				factions[] = {};
			};
		};
		type = 1;
		threat[] = {0.4,0.4,0.0};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\t55_body.rvmat","sg_cup_vehicles\data\t55_body_damage.rvmat","sg_cup_vehicles\data\t55_body_destruct.rvmat","sg_cup_vehicles\data\t55_tower.rvmat","sg_cup_vehicles\data\t55_tower_damage.rvmat","sg_cup_vehicles\data\t55_tower_destruct.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		class Reflectors
		{
			class LeftLight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 60;
				intensity = 1000;
				outerAngle = 90;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
				useFlare = 1;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 60;
					hardLimitStart = 30;
					linear = 0;
					quadratic = 0.25;
					start = 1.0;
				};
			};
			class RightLight: LeftLight
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class CommanderLight: LeftLight
			{
				position = "COM svetlo";
				direction = "konec COM svetla";
				hitpoint = "COM svetlo";
				selection = "COM svetlo";
			};
		};
		aggregateReflectors[] = {{"CommanderLight"},{"LeftLight"},{"RightLight"}};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_T55";
		};
		ace_refuel_fuelCapacity = 960;
		maximumLoad = 2500;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};		
	};

	class SG_T55: SG_T55_Base
	{
		author = "$STR_CUP_AUTHOR_STRING";
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_crew_F"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\t55_body_csat_co","\sg_cup_vehicles\data\t55_tower_csat_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_O_T55_CSAT.jpg";
	};
	
	
	class SG_AAV_Base: Tank_F
	{
		displayName = "AAVP7/A1";
		expansion = 3;
		vehicleClass = "Armored";
		editorSubcategory = "EdSubcat_APCs";
		author = "$STR_CUP_AUTHOR_STRING";
		model = "\sg_cup_vehicles\CUP_AAV.p3d";
		icon = "\sg_cup_vehicles\data\UI\icomap_aav_ca.paa";
		picture = "\sg_cup_vehicles\data\UI\pic_aav_ca.paa";
		mapSize = 9;
		destrType = "DestructDefault";
		accuracy = 0.7;
		threat[] = {1,1,0.3};
		cost = 4000000;
		armor = 160;
		armorStructural = 2.5;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.995;
		damageResistance = 0.01168;
		canFloat = 1;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.07;
		waterLeakiness = 2.5;
		waterSpeedFactor = 0.5;
		waterAngularDampingCoef = 5.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 0.5;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		engineShiftY = 0.1;
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		
		
		class ViewOptics: ViewOptics
		{
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
		};	
		
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Alpha";
				shortName = "Set-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Bravo";
				shortName = "Set-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		cargoAction[] = {"passenger_low01"};
		hideWeaponsCargo = 1;
		transportSoldier = 10;
		cargoProxyIndexes[] = {1,2,6,9,10,11,12,14};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		driverAction = "CUP_AAV_Driver_OUT";
		driverInAction = "CUP_AAV_Driver";
		forceHideDriver = 0;
		LODTurnedIn = 1000;
		LODTurnedOut = 1;
		viewDriverInExternal = 1;
		supplyRadius = 3;
		driverForceOptics = 0;
		commanderUsesPilotView = 1;
		driverWeaponsInfoType = "CUP_RscOptics_driver_CO";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		fireDustEffect = "FDustEffects_none";
		memoryPointTrack1L = "Track LL";
		memoryPointTrack1R = "Track LR";
		memoryPointTrack2L = "Track RL";
		memoryPointTrack2R = "Track RR";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1,20};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_start",0.630957,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start",0.794328,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_stop",0.630957,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_stop",0.794328,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm1",0.794328,1,200};
				frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm2",0.891251,1,240};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm3",1.12202,1,280};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm4",1.25893,1,320};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm5",1.41254,1,360};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm6",1.58489,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_rpm7",1.77828,1,440};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1",1.12202,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2",1.41254,1,200};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3",1.77828,1,230};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4",1.99526,1,290};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5",1.77828,1,350};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6",2.23872,1,400};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7",2.51189,1,450};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2",0.354813,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3",0.398107,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6",0.562341,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2",0.398107,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4",0.446684,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5",0.501187,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6",0.562341,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7",0.630957,1};
				frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.501187,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.891251,1,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_01",0.398107,1,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_02",0.446684,1,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_03",0.501187,1,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_04",0.562341,1,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_hard_05",0.562341,1,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_01",0.316228,1,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_02",0.354813,1,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_03",0.398107,1,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_04",0.446684,1,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_ext_treads_soft_05",0.501187,1,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_01",0.251189,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_02",0.281838,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_03",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_hard_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_01",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_02",0.316228,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_03",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_04",0.354813,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\v2_int_treads_soft_05",0.398107,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
			};
		};
		maxSpeed = 72;
		numberPhysicalWheels = 16;
		simulation = "tankX";
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		thrustDelay = 0;
		clutchStrength = 90;
		fuelCapacity = 1885;
		brakeIdleSpeed = 1.78;
		tankTurnForce = 397700;
		wheelCircumference = 2.15;
		torqueCurve[] = {{"(800/2600)","(860/1660)"},{"(1000/2600)","(1420/1660)"},{"(1200/2600)","(1660/1660)"},{"(1400/2600)","(1570/1660)"},{"(1700/2600)","(1510/1660)"},{"(2000/2600)","(1450/1660)"},{"(2350/2600)","(1400/1660)"},{"(2877/2600)","(0/1660)"}};
		maxOmega = 272.27;
		enginePower = 447;
		peakTorque = 1660;
		idleRPM = 800;
		redRPM = 2600;
		engineLosses = 25;
		transmissionLosses = 15;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.2,"N",0,"D1",4.2,"D2",3.05,"D3",1.92,"D4",1.4};
			TransmissionRatios[] = {"High",10.15};
			AmphibiousRatios[] = {"R1",-20,"N",0,"D1",10};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.0,0.85,0.85,0.85,0.85};
		switchTime = 0.1;
		latency = 1.0;
		class Wheels
		{
			class L2
			{
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping = 75.0;
				steering = 0;
				side = "left";
				weight = 150;
				mass = 150;
				MOI = 35.8;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 10000;
				sprungMass = 2425.0;
				springStrength = 60625;
				springDamperRate = 9700;
				dampingRate = 1.0;
				dampingRateInAir = 8400.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.18;
				maxCompression = 0.18;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				sprungMass = 1500.0;
				springStrength = 37500;
				springDamperRate = 7500;
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		viewDriverShadow = 1;
		viewGunnerShadow = 1;
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		selectionBrakeLights = "light_brake";
		selectionBackLights = "lights_back";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		cargoCompartments[] = {"Compartment3"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "CUP_RscOptics_gunner_TNBECO";
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				weapons[] = {"SG_M2","SG_MK19_veh"};
				magazines[] = {
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag",
				"rhs_mag_200rnd_127x99_mag_Tracer_Red",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19",
				"RHS_96Rnd_40mm_MK19_M1001",
				"RHS_96Rnd_40mm_MK19_M430I",
				"RHS_96Rnd_40mm_MK19_M430I"
				};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				outGunnerMayFire = 0;
				gunnerForceOptics = 1;
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Gunner";
				forceHideGunner = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				ispersonturret = 1;
				minOutElev = -30;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				memoryPointGun = "machinegun";
				selectionFireAnim = "muzzleFlashHMG";
				gunBeg = "gmg_start";
				gunEnd = "gmg_end";
				gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				ace_fcs_enabled = 0;
				class Turrets{};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class OpticsIn
				{
					class Periscope: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466666;
						minFov = 0.466666;
						maxFov = 0.466666;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
					};
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "sg_cup_vehicles\optika_stryker_gunner.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "main_turret";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.2;
						explosionShielding = 0.09;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "main_gun";
						visual = "main_gun";
						passThrough = 0;
						minimalHit = 0.2;
						explosionShielding = 0.09;
						radius = 0.25;
					};
				};
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CommanderTurret: NewTurret
			{
				turretInfoType = "CUP_RscOptics_commander_ECO";
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_SG_Commander";
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerForceOptics = 0;
				body = "ObsTurret";
				gun = "ObsGun";
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Commander";
				ispersonturret = 1;
				minOutElev = -20;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				soundServo[] = {"","db-50",1.0};
				gunBeg = "";
				gunEnd = "";
				commanding = 2;
				gunnerOpticsModel = "\sg_cup_vehicles\2Dscope_com2";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "optics_commander";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceHatch = "hatchCommander";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
				outGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
				};
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 3;
				gunnerName = "$STR_PASSANGER_F_R";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "CargoGunner_1";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_low01";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -80;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				memoryPointsGetInGunner = "pos frontright";
				memoryPointsGetInGunnerDir = "pos frontright dir";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				gunnerCompartments = "Compartment3";
			};
			class CargoGunner_2: CargoGunner_1
			{
				proxyIndex = 13;
				gunnerName = "$STR_PASSANGER_M_R";
				animationSourceHatch = "CargoGunner_2";
				memoryPointsGetInGunner = "pos midright";
				memoryPointsGetInGunnerDir = "pos midright dir";
			};
			class CargoGunner_3: CargoGunner_1
			{
				proxyIndex = 5;
				gunnerName = "Back Right FFV";
				animationSourceHatch = "CargoGunner_3";
				memoryPointsGetInGunner = "pos backright";
				memoryPointsGetInGunnerDir = "pos backright dir";
			};
			class CargoGunner_4: CargoGunner_1
			{
				proxyIndex = 7;
				gunnerName = "$STR_PASSANGER_F_L";
				animationSourceHatch = "CargoGunner_4";
				memoryPointsGetInGunner = "pos frontleft";
				memoryPointsGetInGunnerDir = "pos frontleft dir";
			};
			class CargoGunner_5: CargoGunner_1
			{
				proxyIndex = 4;
				gunnerName = "$STR_PASSANGER_M_L";
				animationSourceHatch = "CargoGunner_5";
				memoryPointsGetInGunner = "pos midleft";
				memoryPointsGetInGunnerDir = "pos midleft dir";
			};
			class CargoGunner_6: CargoGunner_1
			{
				proxyIndex = 8;
				gunnerName = "Back Left FFV";
				animationSourceHatch = "CargoGunner_6";
				memoryPointsGetInGunner = "pos backleft";
				memoryPointsGetInGunnerDir = "pos backleft dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class plate_front
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class turbine_cover_left: plate_front{};
			class turbine_cover_right: plate_front{};
			class muzzle_rot_GMG
			{
				source = "ammorandom";
				weapon = "SG_MK19_veh";
			};
			class muzzle_hide_GMG
			{
				source = "reload";
				weapon = "SG_MK19_veh";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "SG_M2";
			};
			class CargoHatch_Right: plate_front
			{
				animPeriod = 1;
			};
			class CargoHatch_Left: plate_front
			{
				animPeriod = 1;
			};
			class Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Equipment)";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				author = "CUP_AUTHOR_STRING";
			};
			class Hide_Bags_Deployment: Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Bags)";
			};
		};
		class textureSources
		{
			class Woodland
			{
				displayName = "Woodland";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
				factions[] = {};
			};
			class RACS
			{
				displayName = "RACS";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"sg_cup_vehicles\data\aav_ext_racs_co.paa","sg_cup_vehicles\data\aav_ext2_racs_co.paa"};
				factions[] = {};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			class CUP_TrackedVehicles_AAV
			{
				init = "_scr = _this execVM '\sg_cup_vehicles\scripts\init.sqf'";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\aav_ext.rvmat","sg_cup_vehicles\data\aav_ext_damage.rvmat","sg_cup_vehicles\data\aav_ext_destruct.rvmat","sg_cup_vehicles\data\aav_ext2.rvmat","sg_cup_vehicles\data\aav_ext2_damage.rvmat","sg_cup_vehicles\data\aav_ext2_destruct.rvmat","sg_cup_vehicles\data\aav_tracks.rvmat","sg_cup_vehicles\data\aav_tracks_damage.rvmat","sg_cup_vehicles\data\aav_tracks_destruct.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				passThrough = 1;
				minimalHit = 0.3;
				explosionShielding = 0.009;
				radius = 0.25;
				visual = "zbytek";
			};
			class HitLTrack: HitLTrack
			{
				armor = 0.3;
				material = -1;
				armorComponent = "HitTrackL";
				name = "hit_trackL_point";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitRTrack: HitRTrack
			{
				armor = 0.3;
				material = -1;
				armorComponent = "HitTrackR";
				name = "hit_trackR_point";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 0.7;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.2;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.3;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
		};
		class Library
		{
			libTextDesc = "";
		};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		ace_refuel_fuelCapacity = 647;
		maximumLoad = 5000;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_B_AAV_USMC: SG_AAV_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.7;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 1;
		crew = "rhsusf_army_ucp_crewman";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_AAV_USMC.jpg";
	};
	class SG_B_AAV_Unarmed_USMC: SG_AAV_Base
	{
		displayName = "AAVC7/A1 (Command)";
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.7;
		threat[] = {0.5,0.5,0.1};
		author = "$STR_CUP_AUTHOR_STRING";
		side = 1;
		crew = "rhsusf_army_ucp_crewman";
		faction = "rhs_faction_usmc_wd";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		model = "\sg_cup_vehicles\CUP_aav_unarmed.p3d";
		picture = "\sg_cup_vehicles\data\UI\pic_aavun_ca.paa";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\aav_ext_co.paa","sg_cup_vehicles\data\aav_ext2_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_AAV_USMC.jpg";
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"crew"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
			class Intercom_2
			{
				displayName = "Passenger Intercom";
				shortName = "Pax";
				allowedPositions[] = {"crew",{"cargo","all"}};
				disabledPositions[] = {};
				limitedPositions[] = {};
				masterPositions[] = {"commander"};
				numLimitedPositions = 0;
				connectedByDefault = 0;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Crew Alpha";
				shortName = "Crw-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Crew Bravo";
				shortName = "Crw-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_3
			{
				displayName = "Radio Set - Pax Alpha";
				shortName = "Pax-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"cargo","all"}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_4
			{
				displayName = "Radio Set - Pax Bravo";
				shortName = "Pax-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"cargo","all"}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_5
			{
				displayName = "Radio Set - Pax Charlie";
				shortName = "Pax-C";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"cargo","all"}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_6
			{
				displayName = "Radio Set - Pax Delta";
				shortName = "Pax-D";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"cargo","all"}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: CommanderTurret
			{
				proxyType = "CPGunner";
				proxyIndex = 1;
				gunnerName = "Gunner";
				primaryGunner = 1;
				primaryObserver = 0;
				gunnerForceOptics = 0;
				body = "mainturret";
				gun = "maingun";
				animationSourceBody = "mainturret";
				animationSourceGun = "maingun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "CUP_AAV_Commander";
				ispersonturret = 1;
				minOutElev = -20;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				soundServo[] = {"","db-50",1.0};
				gunBeg = "";
				gunEnd = "";
				commanding = 2;
				gunnerOpticsModel = "\sg_cup_vehicles\2Dscope_com2";
				gunnerOpticsColor[] = {1,1,1,1};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "gunnerview";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceHatch = "hatchGunner";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				LODTurnedIn = 1100;
				LODTurnedOut = 1;
				weapons[] = {};
				magazines[] = {};
				outGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.466;
					minFov = 0.466;
					maxFov = 0.466;
				};
				startEngine = 0;
				stabilizedInAxes = 0;
			};
			class CommanderTurret: CommanderTurret{};
			class CargoGunner_1: CargoGunner_1{};
			class CargoGunner_2: CargoGunner_2{};
			class CargoGunner_3: CargoGunner_3{};
			class CargoGunner_4: CargoGunner_4{};
			class CargoGunner_5: CargoGunner_5{};
			class CargoGunner_6: CargoGunner_6{};
		};
	};
	
	
		
	
	
	
	
	
	
	class SG_LAV25_Base: Wheeled_APC_F
	{
		expansion = 3;
		scope = 0;
		model = "\sg_cup_vehicles\CUP_LAV25.p3d";
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25";
		};
		vehicleClass = "Armored";
		picture = "\sg_cup_vehicles\Data\UI\Picture_LAV25_CA.paa";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_LAV25_CA.paa";
		mapSize = 7;
		radarType = 8;
		armorLights = 0.1;
		armor = 120;
		armorStructural = 2;
		crewCrashProtection = 0.15;
		crewExplosionProtection = 0.9995;
		unitInfoType = "RscUnitInfoTank";
		hideProxyInCombat = 1;
		threat[] = {0.5,0.5,0.5};
		damageResistance = 0.00719;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","gunner","commander"};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Alpha";
				shortName = "Set-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Bravo";
				shortName = "Set-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
		};
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "zbytek";
				visual = "zbytek";
				minimalHit = 0.2;
				passThrough = 0;
				explosionShielding = 0.009;
			};
			class HitEngine
			{
				armor = 0.7;
				material = -1;
				name = "motor";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "zbytek";
				passThrough = 0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.7;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\lavalfa.rvmat","sg_cup_vehicles\Data\lavalfa_damage.rvmat","sg_cup_vehicles\Data\lavalfa_destruct.rvmat","sg_cup_vehicles\Data\lavbody.rvmat","sg_cup_vehicles\Data\lavbody_damage.rvmat","sg_cup_vehicles\Data\lavbody_destruct.rvmat","sg_cup_vehicles\Data\lavbody2.rvmat","sg_cup_vehicles\Data\lavbody2_damage.rvmat","sg_cup_vehicles\Data\lavbody2_destruct.rvmat","sg_cup_vehicles\Data\lav_glass_green.rvmat","sg_cup_vehicles\Data\lav_glass_green_damage.rvmat","sg_cup_vehicles\Data\lav_glass_green_destruct.rvmat","sg_cup_vehicles\Data\lav_glass_red.rvmat","sg_cup_vehicles\Data\lav_glass_red_damage.rvmat","sg_cup_vehicles\Data\lav_glass_red_destruct.rvmat","sg_cup_vehicles\Data\lav_hq.rvmat","sg_cup_vehicles\Data\lav_hq_damage.rvmat","sg_cup_vehicles\Data\lav_hq_destruct.rvmat","sg_cup_vehicles\Data\lav_int_0.rvmat","sg_cup_vehicles\Data\lav_int_0_damage.rvmat","sg_cup_vehicles\Data\lav_int_0_destruct.rvmat","sg_cup_vehicles\Data\lav_int_1.rvmat","sg_cup_vehicles\Data\lav_int_1_damage.rvmat","sg_cup_vehicles\Data\lav_int_1_destruct.rvmat","sg_cup_vehicles\Data\lav_int_2.rvmat","sg_cup_vehicles\Data\lav_int_2_damage.rvmat","sg_cup_vehicles\Data\lav_int_2_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","camoAlfa"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		attenuationEffectType = "TankAttenuation";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		soundGear[] = {"","db-85",1};
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out","db0",1,50};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start","db0",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start","db0",1.0,300};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop","db0",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop","db0",1.0,300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08","db-3",1,150};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09","db-3",1,150};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10","db-3",1,150};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11","db-3",1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1.0,1,150};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1.0,1,150};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1.0,1,150};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1.0,1,150};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1.0,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03","db0",1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03","db0",1.0,350};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",0.35481337,1,200};
				frequency = "0.95 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",0.39810717,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",0.4466836,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",0.5011872,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",0.56234133,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",0.63095737,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",0.70794576,1,300};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",0.56234133,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",0.63095737,1,200};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",0.63095737,1,230};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",0.70794576,1,250};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",0.70794576,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",1.0,1,350};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",1.1220185,1,400};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",0.31622776,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",0.35481337,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(10/ 2300),(200/ 2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(10/ 2300),(200/ 2300)]) * ((rpm/ 2300) factor[(500/ 2300),(425/ 2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",0.39810717,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(430/ 2300),(730/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(430/ 2300),(510/ 2300)]) * ((rpm/ 2300) factor[(730/ 2300),(620/ 2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(630/ 2300),(1000/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(600/ 2300),(720/ 2300)]) * ((rpm/ 2300) factor[(1100/ 2300),(840/ 2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",0.4466836,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(850/ 2300),(1300/ 2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(800/ 2300),(1000/ 2300)]) * ((rpm/ 2300) factor[(1300/ 2300),(1100/ 2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",0.5011872,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1100/ 2300),(1600/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1100/ 2300),(1270/ 2300)]) * ((rpm/ 2300) factor[(1550/ 2300),(1380/ 2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",0.56234133,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1400/ 2300),(2000/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2300) factor[(1380/ 2300),(1500/ 2300)]) * ((rpm/ 2300) factor[(2000/ 2300),(1700/ 2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",0.63095737,1};
				frequency = "0.8 + ((rpm/ 2300) factor[(1700/ 2300),(2300/ 2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2300) factor[(1600/ 2300),(2100/ 2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		driverWeaponsInfoType = "CUP_RscOptics_driver_NCO";
		waterLeakiness = 2.5;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.4;
		enableGPS = 1;
		commanderCanSee = 31;
		gunnerCanSee = 30;
		driverCanSee = 31;
		forceHideDriver = 0;
		gunnerHasFlares = 1;
		weapons[] = {"TruckHorn3"};
		magazines[] = {};
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointdriverOptics = "driverview";
		class ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SG_M242_veh","SG_M240_coax"};
				magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS"};
				soundServo[] = {"A3\sounds_f\dummysound","db-35",1.0,15};
				minElev = -8;
				maxElev = 50;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "CUP_LAV25_Gunner_out";
				gunnerInAction = "CUP_LAV25_Gunner";
				personTurretAction = "vehicle_turnout_2";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				forceHideGunner = 0;
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
				turretInfoType = "CUP_RscOptics_gunner_TNBECO";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 3;
				ispersonturret = 1;
				minOutElev = -70;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				proxyType = "CPGunner";
				proxyIndex = 1;
				ace_fcs_enabled = 1;
				ace_fcs_minDistance = 200;
				ace_fcs_maxDistance = 6000;
				ace_fcs_distanceInterval = 5;
				gunnerOutOpticsModel = "";
				memoryPointGun = "machinegun";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				particlesdir = "muzzle_1";
				particlespos = "chamber_1";
				missileBeg = "muzzle_1";
				missileEnd = "chamber_1";
				body = "MainTurret";
				gun = "MainGun";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				gunnerForceOptics = 1;
				outGunnerMayFire = 0;
				startEngine = 1;
				primaryGunner = 1;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics
				{
					visionMode[] = {"Normal","TI"};
					thermalMode[] = {2,3};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.05;
					maxFov = 0.2;
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
					};
					class Narrow: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_lav_7";
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "otocvez";
						visual = "otocvez";
						passThrough = 1;
					};
				};
				selectionFireAnim = "zasleh_1";
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						gunnerOpticsShowCursor = 0;
						animationSourceHatch = "hatchCommander";
						soundServo[] = {"","db-50",1.0};
						startEngine = 0;
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						lodturnedin = 1;
						lodturnedout = 1;
						gunBeg = "";
						gunEnd = "";
						minElev = -4;
						maxElev = 20;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						commanding = 2;
						viewGunnerInExternal = 0;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
						gunnerOutOpticsModel = "";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						memoryPointGunnerOutOptics = "commander_weapon_view";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						class ViewGunner
						{
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.025;
							maxFov = 0.3;
						};
						gunnerInAction = "CUP_LAV25_Commander";
						gunnerAction = "CUP_LAV25_Commander_out";
						personTurretAction = "vehicle_turnout_2";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						outGunnerMayFire = 1;
						InGunnerMayFire = 1;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						ispersonturret = 1;
						minOutElev = -70;
						maxOutElev = 40;
						initOutElev = 0;
						minOutTurn = -90;
						maxOutTurn = 90;
						initOutTurn = 0;
						turretInfoType = "CUP_RscOptics_commander_NBECO";
						stabilizedInAxes = 3;
					};
				};
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 5;
				gunnerName = "Rear Hatch Left (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatchleft";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic02";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -60;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargoleft";
				memoryPointsGetInGunnerDir = "pos cargoleft dir";
			};
			class CargoGunner_2: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 6;
				gunnerName = "Rear Hatch Right (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatchright";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -100;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1000;
				LODOpticsIn = 1000;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargoright";
				memoryPointsGetInGunnerDir = "pos cargoright dir";
			};
		};
		crew = "rhsusf_army_ucp_crewman";
		hideWeaponsCargo = 1;
		transportSoldier = 4;
		cargoProxyIndexes[] = {1,2,3,4,5,6};
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		DriverAction = "CUP_LAV25_Driver_OUT";
		driverInAction = "CUP_LAV25_Driver_OUT";
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic01","passenger_apc_narrow_generic03","passenger_apc_generic03","passenger_apc_generic02","passenger_generic01_foldhands","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02"};
		viewCargoShadow = 1;
		viewCargoShadowDiff = 0.05;
		viewDriverShadowDiff = 0.05;
		viewGunnerShadowDiff = 0.05;
		transportAmmo = 100;
		supplyRadius = 1.7;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 90;
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				coneFadeCoef = 10;
				dayLight = 0;
				flareSize = 1;
				innerAngle = 100;
				intensity = 1000;
				outerAngle = 140;
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
				useFlare = 1;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 60;
					hardLimitStart = 30;
					linear = 0;
					quadratic = 0.25;
					start = 1.0;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		selectionBrakeLights = "zadni svetlo";
		selectionBackLights = "lights_rear";
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
		};
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		numberPhysicalWheels = 8;
		simulation = "carX";
		maxSpeed = 100;
		wheelCircumference = 3.277;
		dampersBumpCoef = 5;
		brakeIdleSpeed = 1.78;
		terrainCoef = 0.8;
		turnCoef = 3.0;
		canFloat = 1;
		waterresistance = 0.5;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.015;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2.0;
		engineShiftY = 1.05;
		fuelCapacity = 300;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		torqueCurve[] = {{"(550/2500)","(0/770)"},{"(1000/2500)","(498/770)"},{"(1250/2500)","(635/770)"},{"(1500/2500)","(746/770)"},{"(1800/2500)","(770/770)"},{"(2000/2500)","(743/770)"},{"(2250/2500)","(712/770)"},{"(2764/2500)","(0/770)"}};
		maxOmega = 261.8;
		enginePower = 205;
		peakTorque = 770;
		idleRPM = 550;
		redRPM = 2500;
		thrustDelay = 0.35;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",8.05,"D2",3.58,"D3",2.09,"D4",1.39,"D5",1.0};
			TransmissionRatios[] = {"High",3.04};
			AmphibiousRatios[] = {"R1",-10,"N",0,"D1",20};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.5,0.0,0.9,0.9,0.9,0.9,0.9};
		switchTime = 0.35;
		latency = 1.4;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35.0;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		class wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 100;
				MOI = 60;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1600;
				springStrength = 80000;
				springDamperRate = 18000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class L4: L1
			{
				boneName = "wheel_1_4_damper";
				steering = 0;
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
				suspForceAppPointOffset = "wheel_1_4_axis";
				tireForceAppPointOffset = "wheel_1_4_axis";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;
			};
			class R4: R1
			{
				boneName = "wheel_2_4_damper";
				steering = 0;
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
				suspForceAppPointOffset = "wheel_2_4_axis";
				tireForceAppPointOffset = "wheel_2_4_axis";
				maxHandBrakeTorque = 300000;
			};
		};
		class AnimationSources: AnimationSources
		{
			class front_panel_anim
			{
				source = "user";
				animperiod = 2;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLF2Wheel
			{
				source = "Hit";
				hitpoint = "HitLBWheel";
				raw = 1;
			};
			class HitLMWheel
			{
				source = "Hit";
				hitpoint = "HitLMWheel";
				raw = 1;
			};
			class HitLBWheel
			{
				source = "Hit";
				hitpoint = "HitLF2Wheel";
				raw = 1;
			};
			class HitRFWheel
			{
				source = "Hit";
				hitpoint = "HitRFWheel";
				raw = 1;
			};
			class HitRF2Wheel
			{
				source = "Hit";
				hitpoint = "HitRBWheel";
				raw = 1;
			};
			class HitRMWheel
			{
				source = "Hit";
				hitpoint = "HitRMWheel";
				raw = 1;
			};
			class HitRBWheel
			{
				source = "Hit";
				hitpoint = "HitRF2Wheel";
				raw = 1;
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				source = "ammorandom";
				weapon = "SG_M240_coax";
			};
			class muzzle_rot_CUP_M242_W
			{
				source = "ammorandom";
				weapon = "SG_M242_veh";
			};
			class muzzle_hide_CUP_M242_W
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
		};
		class textureSources
		{
			class NATO_woodland
			{
				displayName = "NATO 3-tone Woodland";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
				factions[] = {};
			};
			class desert
			{
				displayName = "Desert";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_desert_co.paa","\sg_cup_vehicles\data\lavbody2_desert_co.paa","\sg_cup_vehicles\data\lav_hq_desert_co.paa","\sg_cup_vehicles\data\lavalfa_desert_ca.paa"};
				factions[] = {};
			};
			class green
			{
				displayName = "Olive Green";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_green_co.paa","\sg_cup_vehicles\data\lavbody2_green_co.paa","\sg_cup_vehicles\data\lav_hq_green_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
				factions[] = {};
			};
			class RACS
			{
				displayName = "RACS";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\lavbody_RACS_co.paa","\sg_cup_vehicles\data\lavbody2_RACS_co.paa","\sg_cup_vehicles\data\lav_hq_RACS_co.paa","\sg_cup_vehicles\data\lavalfa_desert_ca.paa"};
				factions[] = {};
			};
		};
		class EventHandlers: DefaultEventhandlers
		{
			init = "_this execVM ""\sg_cup_vehicles\scripts\init.sqf""";
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 8;
		ace_refuel_fuelCapacity = 269;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
		maximumLoad = 5000;
	};
	class SG_B_LAV25_USMC: SG_LAV25_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "rhs_faction_usmc_wd";
		displayName = "LAV-25A1";
		author = "$STR_CUP_AUTHOR_STRING";
		cargoCompartments[] = {"Compartment3"};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Body)";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				author = "CUP_AUTHOR_STRING";
			};
			class Hide_Turret_Deployment: Hide_Deployment
			{
				DisplayName = "Hide Deployment Gear (Turret)";
			};
			class Hide_Antenna
			{
				DisplayName = "Hide Antenna (front)";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				author = "CUP_AUTHOR_STRING";
			};
		};
		animationList[] = {"Hide_Deployment",0,"Hide_Turret_Deployment",0,"Hide_Antenna",0};
		AGM_FCSEnabled = 1;
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25_USMC.jpg";
	};
	class SG_B_LAV25M240_USMC: SG_B_LAV25_USMC
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		model = "\sg_cup_vehicles\cup_lav25m240.p3d";
		faction = "rhs_faction_usmc_wd";
		displayName = "LAV-25A1 (M240)";
		author = "$STR_CUP_AUTHOR_STRING";
		cargoCompartments[] = {"Compartment3"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "SG_M242_veh";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M240_veh";
			};
			class muzzle_rot_CUP_M240_veh3_W
			{
				source = "ammorandom";
				weapon = "SG_M240_veh";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = {"SG_M240_veh","SmokeLauncher"};
						magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
						minElev = -10;
						maxElev = 20;
						initElev = 0;
						minTurn = -60;
						maxTurn = 60;
						initTurn = 0;
						gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerForceOptics = 1;
						gunnerOutForceOptics = 0;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "$STR_SG_Commander";
						viewGunnerInExternal = 0;
						animationSourceHatch = "hatchCommander";
						body = "obsTurret";
						gun = "obsGun";
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						class ViewGunner
						{
							visionMode[] = {"Normal","NVG","TI"};
							thermalMode[] = {2,3};
							initAngleX = 5;
							minAngleX = -65;
							maxAngleX = 85;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						gunnerInAction = "CUP_LAV25_Commander";
						stabilizedInAxes = 3;
						LODTurnedIn = "View_Gunner";
						LODTurnedOut = 1;
						ispersonturret = 0;
						minOutElev = -20;
						maxOutElev = 20;
						initOutElev = 0;
						minOutTurn = -60;
						maxOutTurn = 60;
						initOutTurn = 0;
						gunnerLeftHandAnimName = "OtocHlaven_Shake";
						gunnerRightHandAnimName = "OtocHlaven_Shake";
						memoryPointGunnerOutOptics = "comgunview";
						memoryPointGunnerOptics = "commanderview";
						gunnerOutOpticsModel = "\sg_cup_vehicles\proxies\optika_empty";
						gunnerAction = "CUP_LAV25_Commander_out_mg";
						selectionFireAnim = "zasleh_2";
						InGunnerMayFire = 1;
						outGunnerMayFire = 1;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsShowCursor = 0;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
						discreteDistanceInitIndex = 2;
						turretInfoType = "RscWeaponRangeZeroing";
						primaryGunner = 0;
						primaryObserver = 1;
					};
				};
			};
			class CargoGunner_1: CargoGunner_1{};
			class CargoGunner_2: CargoGunner_2{};
		};
		AGM_FCSEnabled = 1;
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25M240_USMC.jpg";
	};

	class SG_B_LAV25_HQ_USMC: SG_B_LAV25_USMC
	{
		scope = 2;
		scopeCurator = 2;
		model = "\sg_cup_vehicles\cup_lav_hq.p3d";
		displayName = "LAV-C2";
		author = "$STR_CUP_AUTHOR_STRING";
		picture = "\sg_cup_vehicles\data\UI\Picture_LAV25_CA.paa";
		Icon = "\sg_cup_vehicles\data\UI\Icon_lav25_hq_CA.paa";
		hideProxyInCombat = 1;
		enableManualFire = 0;
		class Library
		{
			libTextDesc = "$STR_LIB_LAV25_HQ";
		};
		driverCompartments = "Compartment2";
		cargoCompartments[] = {"Compartment3"};
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName = "Crew Intercom";
				shortName = "Crew";
				allowedPositions[] = {"driver","gunner","commander",{"cargo",0}};
				disabledPositions[] = {};
				limitedPositions[] = {{"cargo","all"},{"turret","all"}};
				masterPositions[] = {"commander"};
				numLimitedPositions = 1;
				connectedByDefault = 1;
			};
			class Intercom_2
			{
				displayName = "Passenger Intercom";
				shortName = "Psngr";
				allowedPositions[] = {"crew",{"cargo","all"}};
				disabledPositions[] = {};
				limitedPositions[] = {};
				masterPositions[] = {"commander"};
				numLimitedPositions = 0;
				connectedByDefault = 0;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName = "Radio Set - Crew Alpha";
				shortName = "Crw-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_2
			{
				displayName = "Radio Set - Crew Bravo";
				shortName = "Crw-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {"commander"};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"intercom_1"};
			};
			class Rack_3
			{
				displayName = "Radio Set - Pax Alpha";
				shortName = "Pax-A";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_4
			{
				displayName = "Radio Set - Pax Bravo";
				shortName = "Pax-B";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_5
			{
				displayName = "Radio Set - Pax Charlie";
				shortName = "Pax-C";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{1}},{"cargo",0}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_6
			{
				displayName = "Radio Set - Pax Delta";
				shortName = "Pax-D";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}},{"cargo",0}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_7
			{
				displayName = "Radio Set - Pax Echo";
				shortName = "Pax-E";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
			class Rack_8
			{
				displayName = "Radio Set - Pax Foxtrot";
				shortName = "Pax-E";
				componentname = "ACRE_VRC103";
				allowedPositions[] = {{"turret",{2}}};
				disabledPositions[] = {{"turnedout","all"}};
				defaultComponents[] = {};
				mountedRadio = "ACRE_PRC117F";
				isRadioRemovable = 0;
				intercom[] = {"none"};
			};
		};
		class Turrets: Turrets
		{
			class CommanderOptics: NewTurret
			{
				weapons[] = {"SG_M240_veh","SmokeLauncher"};
				magazines[] = {"rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","rhs_mag_762x51_M240_200","SmokeLauncherMag"};
				minElev = -20;
				maxElev = 20;
				initElev = 0;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				minOutElev = -20;
				maxOutElev = 20;
				initOutElev = 0;
				minOutTurn = -90;
				maxOutTurn = 90;
				initOutTurn = 0;
				gunnerLeftHandAnimName = "OtocHlaven_Shake";
				gunnerRightHandAnimName = "OtocHlaven_Shake";
				memoryPointGunnerOutOptics = "gunnerview";
				memoryPointGunnerOptics = "comgunviewin";
				gunnerOutOpticsModel = "\sg_cup_vehicles\proxies\optika_empty";
				memoryPointGun = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "ComTurret";
				gun = "ComGun";
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_SG_Commander";
				primaryGunner = 1;
				primaryObserver = 1;
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				gunnerCompartments = "Compartment2";
				animationSourceHatch = "hatchGunner";
				gunnerAction = "CUP_LAV25_commander_out_C2_mg";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				selectionFireAnim = "zasleh_2";
				InGunnerMayFire = 0;
				outGunnerMayFire = 1;
				gunnerOpticsShowCursor = 0;
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class ViewGunner
				{
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				gunnerInAction = "CUP_LAV25_Commander";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.35;
					maxFov = 0.9;
					visionMode[] = {"Normal","TI","NVG"};
					thermalMode[] = {0,1};
				};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscWeaponRangeZeroing";
			};
			class CargoGunner_1: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPCargo";
				proxyIndex = 2;
				gunnerName = "Communication Operator Front (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				animationSourceHatch = "hatch1";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -80;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOpticsModel = "";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "";
				gunnerOpticsEffect[] = {};
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = 1200;
				LODOpticsIn = 1200;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos gunner1";
				memoryPointsGetInGunnerDir = "pos gunner1 dir";
			};
			class CargoGunner_2: CargoGunner_1
			{
				proxyIndex = 3;
				gunnerName = "Communication Operator Rear (FFV)";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				animationSourceHatch = "hatch2";
			};
			class CargoGunner_3: NewTurret
			{
				weapons[] = {};
				magazines[] = {};
				proxyType = "CPGunner";
				proxyIndex = 2;
				gunnerName = "Battalion Commander (FFV)";
				primaryGunner = 0;
				primaryObserver = 0;
				gunnerOpticsShowCursor = 0;
				animationSourceHatch = "hatch3";
				soundServo[] = {"","db-50",1.0};
				startEngine = 0;
				hideWeaponsGunner = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "vehicle_turnout_2";
				gunnerInAction = "passenger_apc_narrow_generic01";
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				memoryPointGunnerOptics = "Battalionview";
				gunnerOpticsModel = "\sg_cup_vehicles\2dscope_com1";
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				class ViewGunner
				{
					visionMode[] = {"Normal","NVG","TI"};
					thermalMode[] = {2,3};
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				ispersonturret = 1;
				dontCreateAI = 1;
				minOutElev = -10;
				maxOutElev = 40;
				initOutElev = 0;
				minOutTurn = -80;
				maxOutTurn = 80;
				initOutTurn = 0;
				minElev = -15;
				maxElev = 50;
				initElev = 0;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				commanding = -1;
				viewGunnerInExternal = 0;
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				stabilizedInAxes = 0;
				LODTurnedOut = -1;
				LODTurnedIn = -1;
				LODOpticsIn = -1;
				LODOpticsOut = -1;
				gunnerCompartments = "Compartment3";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
			};
		};
		class AnimationSources: AnimationSources
		{
			class Antena1
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena2
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Antena3
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M240_veh";
			};
			class muzzle_rot_CUP_M240_veh_W
			{
				source = "ammorandom";
				weapon = "SG_M240_veh";
			};
		};
		class UserActions
		{
			class ExtendAnt
			{
				displayName = "Extend Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" == 0);";
				statement = "ext = [this,7] execvm ""sg_cup_vehicles\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
			class RetractAnt
			{
				displayName = "Retract Antenna";
				position = "driverview";
				showWindow = 0;
				radius = 8;
				priority = 5;
				condition = "(player == commander this) AND (this animationPhase ""antena1"" > 1);;";
				statement = "ret = [this,0] execvm ""sg_cup_vehicles\scripts\ext_ant.sqf""";
				onlyforplayer = 1;
			};
		};
		hideWeaponsCargo = 1;
		transportSoldier = 1;
		cargoAction[] = {"passenger_apc_narrow_generic01"};
		typicalCargo[] = {};
		threat[] = {0.5,0.0,0.2};
		irScanGround = 1;
		irScanRangeMax = 0;
		irScanRangeMin = 0;
		irScanToEyeFactor = 1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","camoAlfa"};
		hiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\lavbody_co.paa","\sg_cup_vehicles\data\lavbody2_co.paa","\sg_cup_vehicles\data\lav_hq_co.paa","\sg_cup_vehicles\data\lavalfa_ca.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_LAV25_HQ_USMC.jpg";
	};
	
	
		class SG_SUV_Base: Car_F
	{
		model = "\sg_cup_vehicles\CUP_suv.p3d";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_suv_CA.paa";
		Picture = "\sg_cup_vehicles\Data\UI\Picture_suv_CA.paa";
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		displayName = "SUV";
		hiddenSelections[] = {"camo"};
		terrainCoef = 1.5;
		turnCoef = 2.5;
		precision = 10;
		brakeDistance = 3.0;
		acceleration = 15;
		fireResistance = 5;
		armor = 30;
		cost = 50000;
		transportMaxBackpacks = 3;
		hideWeaponsCargo = 1;
		transportSoldier = 5;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		maxFordingDepth = 0.0;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks{};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				viewGunnerInExternal = 1;
				minElev = -30;
				maxElev = 45;
				initElev = 0;
				soundServo[] = {"db-40",1.0};
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"SG_M134"};
				magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				gunnerAction = "CUP_ArmoredSUV_Gunner_PMC";
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.35;
					maxFov = 0.9;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				disableSoundAttenuation = 1;
				soundAttenuationTurret = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "suv_cargo_front_left_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external1L";
				memoryPointsGetInGunnerDir = "pos external1L dir";
				gunnerName = "Passenger (Hold Front Left)";
				proxyIndex = 7;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external2L";
				memoryPointsGetInGunnerDir = "pos external2L dir";
				gunnerName = "Passenger (Hold Middle Left)";
				proxyIndex = 8;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external3L";
				memoryPointsGetInGunnerDir = "pos external3L dir";
				gunnerName = "Passenger (Hold Back Left)";
				proxyIndex = 9;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_06: CargoTurret
			{
				gunnerAction = "suv_cargo_front_right_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external1R";
				memoryPointsGetInGunnerDir = "pos external1R dir";
				gunnerName = "Passenger (Hold Front Right)";
				proxyIndex = 12;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_07: CargoTurret_06
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external2R";
				memoryPointsGetInGunnerDir = "pos external2R dir";
				gunnerName = "Passenger (Hold Middle Right)";
				proxyIndex = 11;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_08: CargoTurret_07
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external3R";
				memoryPointsGetInGunnerDir = "pos external3R dir";
				gunnerName = "Passenger (Hold Back Right)";
				proxyIndex = 10;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
		};
		driverAction = "Driver_low01";
		cargoAction[] = {"passenger_low01","passenger_generic01_leanleft","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_low01"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1,40};
		soundDammage[] = {"","db-5",1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start","db-8",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start","db-7",1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop","db-8",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop","db-7",1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01","db-3",1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02","db-3",1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03","db-3",1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04","db-3",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01","db-3",1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02","db-3",1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03","db-3",1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04","db-3",1,200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05","db-3",1,200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06","db-3",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01","db-3",1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02","db-3",1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03","db-3",1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04","db-3",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle","db-13",1,150};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*1";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm","db-11",1,200};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm","db-9",1,240};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm","db-8",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm","db-7",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm","db-6",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm","db-5",1,420};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*camPos*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*1";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust","db-4",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust","db-3",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust","db-2",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust","db0",1,400};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust","db2",1,450};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle","db-15",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*1";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm","db-14",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm","db-12",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm","db-11",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm","db-10",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm","db-6",1};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust","db-10",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*1";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust","db-8",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust","db-7",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust","db-6",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust","db-4",1};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip0_pos";
					pointDirection = "pip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip1_pos";
					pointDirection = "pip1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class FrontCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "pip2_pos";
					pointDirection = "pip2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 200;
		fuelCapacity = 45;
		wheelCircumference = 2.805;
		antiRollbarForceCoef = 1.9;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 150;
		idleRpm = 400;
		redRpm = 3500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)"};
			TransmissionRatios[] = {"High",7};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 2;
		};
		simulation = "carx";
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 150;
		maxOmega = 450;
		peakTorque = 425;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(0/3500)","(0/425)"},{"(500/3500)","(200/425)"},{"(1500/3500)","(405/425)"},{"(2000/3500)","(425/425)"},{"(2500/3500)","(350/425)"},{"(3000/3500)","(300/425)"},{"(6000/3500)","(0/425)"}};
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.31;
		latency = 1.5;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 30;
				MOI = 6;
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateInAir = 0.8;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.05;
				sprungMass = 400;
				springStrength = 14400;
				springDamperRate = "1920*2";
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{0,1.75},{0.5,1.35},{1,1.2}};
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
				frictionVsSlipGraph[] = {{0,2},{0.5,1.53},{1,1.36}};
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
				frictionVsSlipGraph[] = {{0,2.3},{0.5,2.1},{1,2.0}};
			};
		};
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\suv_body.rvmat","sg_cup_vehicles\data\suv_body_damage.rvmat","sg_cup_vehicles\data\suv_body_destruct.rvmat","sg_cup_vehicles\data\suv_chrom.rvmat","sg_cup_vehicles\data\suv_chrom_damage.rvmat","sg_cup_vehicles\data\suv_chrom_destruct.rvmat","sg_cup_vehicles\data\suv_glass.rvmat","sg_cup_vehicles\data\suv_glass_damage.rvmat","sg_cup_vehicles\data\suv_glass_damage.rvmat","sg_cup_vehicles\data\suv_glass_in.rvmat","sg_cup_vehicles\data\suv_glass_in_damage.rvmat","sg_cup_vehicles\data\suv_glass_in_damage.rvmat"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {2550,1930,1320};
				ambient[] = {8,6,4};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				hitpoint = "Light_L2";
				selection = "Light_L2";
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				hitpoint = "Light_R2";
				selection = "Light_R2";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
		ace_refuel_fuelCapacity = 60;
	};
	class SG_SUV_Armored_Base: SG_SUV_Base
	{
		model = "\sg_cup_vehicles\CUP_SUV_Armored.p3d";
		Icon = "\sg_cup_vehicles\Data\UI\Icon_suv_minigun_pmc.paa";
		Picture = "\sg_cup_vehicles\Data\UI\Picture_suv_minigun_pmc_CA.paa";
		displayName = "Armored SUV";
		transportSoldier = 3;
		transportMaxBackpacks = 5000;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		armor = 90;
		cost = 100000;
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\suv_armored_body.rvmat","sg_cup_vehicles\data\suv_armored_body_damage.rvmat","sg_cup_vehicles\data\suv_armored_body_destruct.rvmat","sg_cup_vehicles\data\suv_armored_chrom.rvmat","sg_cup_vehicles\data\suv_armored_chrom_damage.rvmat","sg_cup_vehicles\data\suv_armored_chrom_destruct.rvmat","sg_cup_vehicles\data\suv_armored_glass.rvmat","sg_cup_vehicles\data\suv_armored_glass_damage.rvmat","sg_cup_vehicles\data\suv_armored_glass_damage.rvmat","sg_cup_vehicles\data\suv_armored_glass_in.rvmat","sg_cup_vehicles\data\suv_armored_glass_in_damage.rvmat","sg_cup_vehicles\data\suv_armored_glass_in_damage.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class Revolving
			{
				source = "revolving";
				weapon = "SG_M134";
			};
			class HideGun_01
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1.2;
			};
			class HideGun_02: HideGun_01{};
			class HideGun_03: HideGun_01{};
			class HideGun_04: HideGun_01{};
			class CloseCover1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 0.7;
			};
			class CloseCover2: CloseCover1{};
		};
		class Eventhandlers: Eventhandlers
		{
			getIn = "_hndl = _this execvm ""\sg_cup_vehicles\scripts\onEnter.sqf"";";
			seatSwitched = "_hndl = _this execvm ""\sg_cup_vehicles\scripts\onSeatSwitch.sqf"";";
		};
		class UserActions
		{
			class turnIn
			{
				displayName = "$STR_ACTION_TURNIN";
				displayNameDefault = "$STR_ACTION_TURNIN";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				priority = 0.95;
				shortcut = "TurnIn";
				showWindow = 0;
				condition = "this animationPhase 'HideGun_01' == 0 && {gunner this == call CBA_fnc_currentUnit}";
				statement = "[this,'turnIn'] execvm ""\sg_cup_vehicles\scripts\gunnerTurn.sqf""";
			};
			class turnOut
			{
				displayName = "$STR_ACTION_TURNOUT";
				displayNameDefault = "$STR_ACTION_TURNOUT";
				position = "action";
				radius = 10;
				onlyForPlayer = 1;
				priority = 0.6;
				shortcut = "TurnOut";
				showWindow = 0;
				condition = "this animationPhase 'CloseCover1' == 1 && {gunner this == call CBA_fnc_currentUnit}";
				statement = "[this,'turnOut'] execvm ""\sg_cup_vehicles\scripts\gunnerTurn.sqf""";
			};
		};
	};
	class SG_SUV_Unarmed_Base: SG_SUV_Base
	{
		class AnimationSources: AnimationSources
		{
			class rear_window_source
			{
				source = "door";
				initPhase = 0;
				animPeriod = 1;
			};
		};
		class CargoTurret;
		class UserActions
		{
			class OpenRdoor
			{
				displayName = "Open Rear Window";
				displayNameDefault = "";
				position = "axis_window";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""rear_window_source"" < 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""rear_window_source"",1];";
			};
			class CloseRdoor
			{
				displayName = "Close Rear Window";
				displayNameDefault = "";
				position = "axis_window";
				radius = 3.7;
				onlyForplayer = 0;
				priority = 0;
				condition = "this doorPhase ""rear_window_source"" > 0.5 AND ((this getCargoIndex player) isEqualTo 0)";
				statement = "this animateDoor [""rear_window_source"",0];";
			};
		};
		transportSoldier = 5;
		class Turrets
		{
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "suv_cargo_front_left_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external1L";
				memoryPointsGetInGunnerDir = "pos external1L dir";
				gunnerName = "Passenger (Hold Front Left)";
				proxyIndex = 7;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external2L";
				memoryPointsGetInGunnerDir = "pos external2L dir";
				gunnerName = "Passenger (Hold Middle Left)";
				proxyIndex = 8;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_05: CargoTurret_04
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment5";
				memoryPointsGetInGunner = "pos external3L";
				memoryPointsGetInGunnerDir = "pos external3L dir";
				gunnerName = "Passenger (Hold Back Left)";
				proxyIndex = 9;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_06: CargoTurret
			{
				gunnerAction = "suv_cargo_front_right_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external1R";
				memoryPointsGetInGunnerDir = "pos external1R dir";
				gunnerName = "Passenger (Hold Front Right)";
				proxyIndex = 12;
				maxElev = 65;
				minElev = -10;
				maxTurn = 105;
				minTurn = 50;
				isPersonTurret = 0;
				ejectDeadGunner = 1;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_07: CargoTurret_06
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external2R";
				memoryPointsGetInGunnerDir = "pos external2R dir";
				gunnerName = "Passenger (Hold Middle Right)";
				proxyIndex = 11;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_08: CargoTurret_07
			{
				gunnerAction = "suv_cargo_back_side";
				gunnerCompartments = "Compartment6";
				memoryPointsGetInGunner = "pos external3R";
				memoryPointsGetInGunnerDir = "pos external3R dir";
				gunnerName = "Passenger (Hold Back Right)";
				proxyIndex = 10;
				maxTurn = 105;
				minTurn = 50;
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				class dynamicViewLimits{};
			};
			class CargoTurret_09: CargoTurret
			{
				minElev = -10;
				maxElev = 18;
				maxTurn = -10;
				minTurn = -110;
				gunnerAction = "passenger_boat_4";
				gunnerName = "Passenger (Rear Seat)";
				proxyIndex = 13;
				isPersonTurret = 1;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo dir rear";
				memoryPointGunnerOptics = "";
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "";
				enabledByAnimationSource = "rear_window_source";
				usepip = 0;
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				commanding = -2;
			};
		};
	};
	class SG_C_SUV: SG_SUV_Unarmed_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SUV";
		crew = "C_man_1";
		typicalCargo[] = {"C_man_1"};
		side = 3;
		faction = "CIV_F";
		HiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\suv_body_bluewhite_co.paa"};
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_C_SUV_CIV.jpg";
		maximumLoad = 2500;
		class textureSources
		{
			class Black
			{
				displayName = "Black";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\suv_body_co.paa"};
				factions[] = {};
			};
			class CIV
			{
				displayName = "Civilan";
				author = "$STR_CUP_AUTHOR_STRING";
				textures[] = {"\sg_cup_vehicles\data\suv_body_bluewhite_co.paa"};
				factions[] = {};
			};
		};
	};
	
	class SG_I_SUV_Armored: SG_SUV_Armored_Base
	{
		scope = 2;
		scopeCurator = 2;
		crew = "I_G_soldier_F";
		typicalCargo[] = {"I_G_soldier_F"};
		side = 2;
		faction = "IND_G_F";
		HiddenSelectionsTextures[] = {"\sg_cup_vehicles\data\suv_armored_body_co.paa"};
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_I_SUV_Armored_ION.jpg";
		maximumLoad = 2500;
	};
	
	
	
	
	class SG_Datsun_Base: Car_F
	{
		scope = 0;
		displayName = "Datsun 620 Pickup (PK)";
		picture = "\sg_cup_vehicles\data\UI\datsun_pk_ca.paa";
		Icon = "\sg_cup_vehicles\data\UI\icomap_datsun_pk_ca.paa";
		mapSize = 5;
		model = "\sg_cup_vehicles\CUP_datsun_PK.p3d";
		steerAheadPlan = 0.15;
		insideSoundCoef = 0.1;
		outsideSoundFilter = 0;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door","db-5",1,40};
		soundDammage[] = {"","db-5",1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_start","db-8",1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_start","db-7",1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop","db-8",1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop","db-7",1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01","db-3",1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02","db-3",1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03","db-3",1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04","db-3",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01","db-3",1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02","db-3",1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03","db-3",1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04","db-3",1,200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05","db-3",1,200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06","db-3",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01","db-3",1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02","db-3",1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03","db-3",1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04","db-3",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle","db-13",1,150};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm","db-11",1,200};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm","db-9",1,240};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm","db-8",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm","db-7",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm","db-6",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*camPos*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm","db-5",1,420};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*camPos*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_idle_exhaust","db-6",1,200};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_1400rpm_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2000rpm_exhaust","db-4",1,280};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_2600rpm_exhaust","db-3",1,320};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3200rpm_exhaust","db-2",1,360};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_3600rpm_exhaust","db0",1,400};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_4000rpm_exhaust","db2",1,450};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle","db-15",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm","db-14",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm","db-12",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm","db-11",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm","db-10",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm","db-6",1};
				frequency = "0.95 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_idle_exhaust","db-10",1};
				frequency = "0.9 + ((rpm/7000) factor[(400/7000),(1150/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(400/7000),(700/7000)])* ((rpm/7000) factor[(1100/7000),(900/7000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_1000rpm_exhaust","db-9",1};
				frequency = "0.8 + ((rpm/7000) factor[(900/7000),(2100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(870/7000),(1100/7000)])* ((rpm/7000) factor[(2100/7000),(1300/7000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2000rpm_exhaust","db-8",1};
				frequency = "0.8 + ((rpm/7000) factor[(1300/7000),(3100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(1250/7000),(2050/7000)])* ((rpm/7000) factor[(3100/7000),(2300/7000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_2600rpm_exhaust","db-7",1};
				frequency = "0.8 + ((rpm/7000) factor[(2200/7000),(4100/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(2250/7000),(3050/7000)])* ((rpm/7000) factor[(4100/7000),(3300/7000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_3200rpm_exhaust","db-6",1};
				frequency = "0.8 + ((rpm/7000) factor[(3300/7000),(4900/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(3250/7000),(4050/7000)])* ((rpm/7000) factor[(4870/7000),(4200/7000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_4000rpm_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/7000) factor[(4200/7000),(6200/7000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/7000) factor[(4150/7000),(4800/7000)])* ((rpm/7000) factor[(6150/7000),(5150/7000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_5000rpm_exhaust","db-4",1};
				frequency = "0.9 + ((rpm/7000) factor[(5100/7000),(7000/7000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/7000) factor[(5100/7000),(6100/7000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		normalSpeedForwardCoef = 0.85;
		slowSpeedForwardCoef = 0.65;
		turnCoef = 3.5;
		terrainCoef = 0.5;
		simulation = "carx";
		dampersBumpCoef = 3;
		precision = 9;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		maxSpeed = 140;
		fuelCapacity = 45;
		fuelConsumptionRate = 1.5;
		wheelCircumference = 2.2;
		brakeIdleSpeed = 0.0;
		canFloat = 0;
		waterLeakiness = 500;
		waterSpeedFactor = 0.5;
		maxFordingDepth = -2.0;
		waterResistance = 0.5;
		waterDamageEngine = 2.9;
		waterAngularDampingCoef = 10.0;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.35;
		engineShiftY = 0.3;
		engineShiftZ = -3.0;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.62,"N",0,"D1",5.392,"D2",3.446,"D3",1.915,"D4",1.0,"D5",0.512};
			TransmissionRatios[] = {"High",6.81};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.95,0.0,0.95,0.95,0.95,0.95};
		switchTime = 0.55;
		latency = 2.0;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 35;
		transmissionLosses = 3;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 1.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(600/6000)","(85/155)"},{"(1500/6000)","(138/155)"},{"(2750/6000)","(155/155)"},{"(3500/6000)","(151/155)"},{"(4500/6000)","(149/155)"},{"(5500/6000)","(145/155)"},{"(6500/6000)","(120/155)"},{"(8505/6000)","(0/155)"}};
		maxOmega = 628.32;
		enginePower = 84;
		peakTorque = 255;
		idleRPM = 600;
		redRPM = 6000;
		engineLosses = 5;
		thrustDelay = 1.0;
		engineBrakeCoef = 0.2;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0.5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 2.0;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 270;
				springStrength = 54000;
				springDamperRate = 3055;
				longitudinalStiffnessPerUnitGravity = 540;
				latStiffX = 20;
				latStiffY = 50;
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
				maxHandBrakeTorque = 8000;
				maxBrakeTorque = 1100;
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
			class RR: LR
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 8000;
			};
		};
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks{};
		hideWeaponsCargo = 1;
		transportSoldier = 1;
		driverAction = "Driver_high01";
		cargoAction[] = {"CUP_Datsun_Cargo01"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class AnimationSources: AnimationSources
		{
			class hideGrille
			{
				displayName = "Hide front grille...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 5;
			};
			class hideRoof
			{
				displayName = "Hide Roof...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 20;
			};
			class hideSpareTire
			{
				displayName = "Hide Spare Tire...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 5;
			};
			class hideRollBar
			{
				displayName = "Hide Roll Bar...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 10;
			};
			class hideRearDoor
			{
				displayName = "Hide Rear Door...";
				author = "$STR_CUP_AUTHOR_STRING";
				source = "user";
				animPeriod = 1e-006;
				initPhase = 0;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {0,1};
				forceAnimatePhase = 0;
				forceAnimate[] = {};
				mass = 20;
			};
		};
		class textureSources
		{
			class blueRed
			{
				displayname = "BlueRed";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class blue
			{
				displayName = "Blue";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class striped
			{
				displayName = "Striped";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup4_civ_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBeigeWoodland
			{
				displayName = "Green/Beige Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBrownBeigeWoodland
			{
				displayName = "Green/Brown/Beige Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class redStarWoodland
			{
				displayName = "Red Star Woodland";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup3_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBlackBeigeDesert
			{
				displayName = "Green/Black/Beige Desert Striped";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup1_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBlackBeigeDesertDot
			{
				displayName = "Green/Black/Beige Desert Dots";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup2_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class greenBeigeDesert
			{
				displayName = "Green/Beige Desert Dots";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup3_eins_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
			class desert
			{
				displayName = "Desert Sand";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"sg_cup_vehicles\Data\datsun_trup4_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
				factions[] = {};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner 2";
				memoryPointsGetInGunnerDir = "pos gunner dir 2";
				gunnerName = "$STR_PASSANGER_R_L";
				proxyIndex = 3;
				maxElev = 80;
				minElev = -25;
				maxTurn = 45;
				minTurn = -80;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_bench_1";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerName = "$STR_PASSANGER_R_R";
				proxyIndex = 2;
				maxElev = 80;
				minElev = -25;
				maxTurn = 80;
				minTurn = -45;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup_damage.rvmat","sg_cup_vehicles\Data\datsun_trup_destruct.rvmat","sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier_damage.rvmat","sg_cup_vehicles\Data\datsun_interier_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup_b.rvmat","sg_cup_vehicles\Data\datsun_trup_b_damage.rvmat","sg_cup_vehicles\Data\datsun_trup_b_destruct.rvmat","a3\data_f\glass_veh_int.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadL03: LightCarHeadL01
			{
				position = "LightCarHeadL03";
				direction = "LightCarHeadL03_end";
				FlareSize = 0.5;
				hitpoint = "Light_L2";
				selection = "Light_L2";
				innerAngle = 75;
				outerAngle = 130;
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				FlareSize = 0.5;
			};
			class LightCarHeadR03: LightCarHeadR01
			{
				position = "LightCarHeadR03";
				direction = "LightCarHeadR03_end";
				FlareSize = 0.5;
				hitpoint = "Light_R2";
				selection = "Light_R2";
				innerAngle = 75;
				outerAngle = 130;
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadL02","LightCarHeadL03"},{"LightCarHeadR01","LightCarHeadR02","LightCarHeadR03"}};
		armorLights = 0.1;
		selectionBreakLights = "break_light";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffect";
			};
		};
		memoryPointTrackFLL = "tyreTrack_1_1l";
		memoryPointTrackFLR = "tyreTrack_1_1r";
		memoryPointTrackBLL = "tyreTrack_1_2l";
		memoryPointTrackBLR = "tyreTrack_1_2r";
		memoryPointTrackFRL = "tyreTrack_2_1l";
		memoryPointTrackFRR = "tyreTrack_2_1r";
		memoryPointTrackBRL = "tyreTrack_2_2l";
		memoryPointTrackBRR = "tyreTrack_2_2r";
		dustFrontLeftPos = "dustFrontLeft";
		dustFrontRightPos = "dustFrontRight";
		dustBackLeftPos = "dustBackLeft";
		dustBackRightPos = "dustBackRight";
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip0_pos";
					pointDirection = "pip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip1_pos";
					pointDirection = "pip1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class CenterMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "pip2_pos";
					pointDirection = "pip2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 6;
		ace_refuel_fuelCapacity = 45;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_Datsun_PK_Base: SG_Datsun_Base
	{
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_PKT_open";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_PKT_open";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_PKT_open";
			};
			class muzzle_rot_PKT
			{
				source = "ammorandom";
				weapon = "SG_PKT_open";
			};
			class hideGrille: hideGrille{};
			class hideRearDoor{};
			class hideRoof{};
			class hideSpareTire{};
			class hideRollBar{};
		};
		class textureSource: textureSources{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				soundServo[] = {};
				stabilizedInAxes = 0;
				weapons[] = {"SG_PKT_open"};
				magazines[] = {"rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100","rhs_mag_762x54mm_100"};
				gunnerAction = "CUP_Datsun_Gunner01";
				gunnerInAction = "CUP_Datsun_Gunner01";
				ejectDeadGunner = 1;
				minElev = -18;
				maxElev = 40;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				gunnerCompartments = "Compartment2";
				memoryPointGunnerOptics = "eye";
				memoryPointGunnerOutOptics = "eye";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerLeftHandAnimName = "otochlaven";
				gunnerRightHandAnimName = "otochlaven";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				disableSoundAttenuation = 1;
				class ViewGunner
				{
					initFov = 1;
					minFov = 0.25;
					maxFov = 1.4;
					visionMode[] = {"Normal"};
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class ViewOptics: ViewGunner{};
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
		hiddenSelections[] = {"Camo","Roof"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup1_co.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
	};
	class SG_Datsun_civil_Base: SG_Datsun_Base
	{
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier.rvmat","sg_cup_vehicles\Data\datsun_interier_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup.rvmat","sg_cup_vehicles\Data\datsun_trup_destruct.rvmat","sg_cup_vehicles\Data\datsun_trup2.rvmat","sg_cup_vehicles\Data\datsun_trup2_damage.rvmat","sg_cup_vehicles\Data\datsun_trup2_destruct.rvmat","sg_cup_vehicles\Data\coyota_armed.rvmat","sg_cup_vehicles\Data\coyota_armed_damage.rvmat","sg_cup_vehicles\Data\coyota_armed_destruct.rvmat","sg_cup_vehicles\Data\datsun_addons4.rvmat","sg_cup_vehicles\Data\datsun_addons4_damage.rvmat","sg_cup_vehicles\Data\datsun_addons4_destruct.rvmat","a3\data_f\glass_veh.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_int.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\glass_veh_damage.rvmat","a3\data_f\default.rvmat","a3\data_f\default.rvmat","a3\data_f\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo","Roof"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup1_co.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		model = "\sg_cup_vehicles\CUP_datsun_civil.p3d";
		picture = "\sg_cup_vehicles\data\UI\datsun1_civil_1_open_ca.paa";
		Icon = "\sg_cup_vehicles\data\UI\icomap_datsun_ca.paa";
		class AnimationSources: AnimationSources
		{
			class hideGrille: hideGrille{};
			class hideRoof: hideRoof{};
			class hideRollBar: hideRollBar{};
			class hideSpareTire: hideSpareTire{};
			class hideRearDoor: hideRearDoor{};
		};
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
			class CargoTurret_03: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos gunner 3";
				memoryPointsGetInGunnerDir = "pos gunner dir 3";
				gunnerName = "$STR_PASSANGER_R";
				proxyIndex = 4;
				maxElev = 80;
				minElev = -10;
				maxTurn = 105;
				minTurn = -85;
				isPersonTurret = 1;
				ejectDeadGunner = 1;
				LODTurnedIn = -1;
				LODTurnedOut = -1;
			};
		};
	};
	
	class SG_I_Datsun_PK: SG_Datsun_PK_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		scope = 2;
		scopeCurator = 2;
		animationList[] = {"hideGrille",0.5};
		textureList[] = {"greenBeigeWoodland",1,"greenBrownBeigeWoodland",1,"redStarWoodland",1};
		displayName = "Datsun 620 Pickup (PK)";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_I_Datsun_PK.jpg";
		maximumLoad = 2500;
	};
	
	class SG_C_Datsun: SG_Datsun_civil_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 3;
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
		scope = 2;
		scopeCurator = 2;
		displayName = "Datsun 620 Pickup";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5,"hideSpareTire",0.5,"hideRollBar",0.5};
		textureList[] = {"blueRed",1,"blue",1,"striped",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		features = "Randomization: Yes, 3 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];      <br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 2)      <br />Camo selections: 2 - the body, covered roof      <br />Script door sources: None      <br />Script animations: hideGrille, hideRoof, hideSpareTire, hideRollBar, hideRearDoor      <br />Firing from vehicles: Positions 2 to 3      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: 1 to 3";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_C_Datsun.jpg";
		maximumLoad = 2500;
	};
	class SG_C_Datsun_4seat: SG_Datsun_civil_Base
	{
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 3;
		crew = "C_man_1";
		faction = "CIV_F";
		typicalCargo[] = {"C_man_1"};
		scope = 2;
		scopeCurator = 2;
		displayName = "Datsun 620 Pickup (5 seats)";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\datsun_trup2_CO.paa","sg_cup_vehicles\Data\datsun_addons4_co.paa"};
		animationList[] = {"hideGrille",0.5,"hideRearDoor",0.5,"hideSpareTire",0.5,"hideRollBar",0.5,"hideRearDoor",1};
		textureList[] = {"blueRed",1,"blue",1,"striped",1};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		features = "Randomization: Yes, 3 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];      <br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 2)      <br />Camo selections: 2 - the body, covered roof      <br />Script door sources: None      <br />Script animations: hideGrille, hideRoof, hideSpareTire, hideRollBar, hideRearDoor      <br />Firing from vehicles: Positions 2 to 3      <br />Slingload: Slingloadable      <br />Cargo proxy indexes: 1 to 3";
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_C_Datsun_4seat.jpg";
		maximumLoad = 2500;
	};
	
	class SG_V3S_Open_Base: Car_F
	{
		scope = 0;
		model = "\sg_cup_vehicles\cup_v3s_open.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_transport_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_transport_CA.paa";
		mapSize = 8;
		displayName = "Praga V3S";
		unitInfoType = "UnitInfoCar";
		soundAttenuationCargo[] = {1,1,0.3};
		armor = 50;
		cost = 50000;
		transportMaxBackpacks = 6;
		hideWeaponsCargo = 1;
		transportSoldier = 13;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		crewCrashProtection = 0.25;
		vehicleClass = "Car";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "shift";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";
		weapons[] = {"Truckhorn3"};
		class Turrets{};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Guerilla";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co"};
				factions[] = {};
			};
			class NAPA
			{
				DisplayName = "NAPA";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_co","sg_cup_vehicles\Data\v3s_intkor_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
				factions[] = {};
			};
			class TKC
			{
				DisplayName = "Takistani Civilian";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_eciv_co","sg_cup_vehicles\Data\v3s_intkor_eciv_co","sg_cup_vehicles\Data\v3s_koloint02_eciv_co"};
				factions[] = {};
			};
		};
		driverAction = "CUP_V3S_Driver";
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks{};
		insideSoundCoef = 0.2;
		soundGear[]={"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",2,1};
		soundGetIn[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-getout",db0, 9};
		soundGetOut[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-getout",db+6, 25};
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-start", db-2, 1.0};
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-start", db+3, 1.0, 200};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-stop", db-2, 1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-stop", db+3, 1.0, 200};
		
		
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-idle","db+2",1,150};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-acceleration","db+1",1,200};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-low","db-1",1,240};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-2",1,280};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-3",1,320};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-4",1,360};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-5",1,420};
				frequency = "0.95 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.15";
				volume = "engineOn*camPos*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class IdleThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust","db-4",1,200};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust","db-6",1,280};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-7",1,320};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-8",1,360};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-10",1,400};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-8",1,450};
				frequency = "0.9 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle","db-2",1};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration","db-2",1};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.95 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust","db0",1};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db-1",1};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db-2",1};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-6",1};
				frequency = "0.9 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class RainIn
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db-7",1};
				frequency = 1;
				volume = "rain*(1-camPos)";
			};
			class RainExt
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db-7",1};
				frequency = 1;
				volume = "rain*camPos";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-2",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-4",1.0};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		memoryPointsGetInCargo[] = {"pos codriver","pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos codriver dir","pos cargo dir"};
		driverDoor = "";
		cargoDoors[] = {};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment2","Compartment2","Compartment2","Compartment2"};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
			};
		};
		cargoAction[] = {"passenger_apc_narrow_generic01","passenger_apc_narrow_generic03still","passenger_apc_narrow_generic03","passenger_generic01_leanright","passenger_apc_generic01","passenger_apc_generic01","passenger_apc_generic03","passenger_apc_narrow_generic01","passenger_generic01_leanleft","passenger_apc_generic03","passenger_apc_narrow_generic02","passenger_apc_generic02","passenger_apc_generic01","passenger_generic01_foldhands","passenger_apc_generic04"};
		getInAction = "GetInMantis";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMantis","GetInMantis","GetInHemttBack"};
		cargoGetOutAction[] = {"GetOutMedium","GetOutMedium","GetOutHighZamak"};
		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";
		dustFrontLeftPos = "stopa PLL";
		dustFrontRightPos = "stopa PPP";
		dustBackLeftPos = "stopa ZLL";
		dustBackRightPos = "stopa ZPP";
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\auta_skla.rvmat","sg_cup_vehicles\data\auta_skla_damage.rvmat","sg_cup_vehicles\data\auta_skla_damage.rvmat","sg_cup_vehicles\data\auta_skla_in.rvmat","sg_cup_vehicles\data\auta_skla_in_damage.rvmat","sg_cup_vehicles\data\auta_skla_in_damage.rvmat","sg_cup_vehicles\data\v3s_intkor.rvmat","sg_cup_vehicles\data\v3s_intkor_damage.rvmat","sg_cup_vehicles\data\v3s_intkor_destruct.rvmat","sg_cup_vehicles\data\v3s_kabpar.rvmat","sg_cup_vehicles\data\v3s_kabpar_damage.rvmat","sg_cup_vehicles\data\v3s_kabpar_destruct.rvmat","sg_cup_vehicles\data\v3s_koloint02.rvmat","sg_cup_vehicles\data\v3s_koloint02_damage.rvmat","sg_cup_vehicles\data\v3s_koloint02_destruct.rvmat","sg_cup_vehicles\data\v3s_reammo_IND.rvmat","sg_cup_vehicles\data\v3s_reammo_IND_damage.rvmat","sg_cup_vehicles\data\v3s_reammo_IND_destruct.rvmat","sg_cup_vehicles\data\v3s_refuel_IND.rvmat","sg_cup_vehicles\data\v3s_refuel_IND_damage.rvmat","sg_cup_vehicles\data\v3s_refuel_IND_destruct.rvmat","sg_cup_vehicles\data\v3s_repair_IND.rvmat","sg_cup_vehicles\data\v3s_repair_IND_damage.rvmat","sg_cup_vehicles\data\v3s_repair_IND_destruct.rvmat"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk 1 start";
				direction = "vyfuk 1 konec";
				effect = "ExhaustEffectHTruck";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 50;
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
		};
		aggregateReflectors[] = {};
		armorLights = 0.05;
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip_0_pos";
					pointDirection = "pip_0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip_1_pos";
					pointDirection = "pip_1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		thrustDelay = 1.5;
		brakeIdleSpeed = 0.87;
		maxSpeed = 60;
		fuelCapacity = 45;
		wheelCircumference = 2.689;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		idleRpm = 850;
		redRpm = 3500;
		engineLosses = 30;
		transmissionLosses = 1000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.8,"N",0,"D1",5.37,"D2",2.573,"D3",1.491,"D4",1.132,"D5",0.845};
			TransmissionRatios[] = {"High",4.137};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.3;
		differentialType = "all_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 25;
		enginePower = 170;
		maxOmega = 360;
		peakTorque = 550;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0},{0.278,0.5},{0.35,0.75},{0.461,1},{0.6,0.95},{0.7,0.85},{0.95,0.75},{1,0.3}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.41;
		latency = 2;
		class Wheels
		{
			class LF
			{
				width = "0.2";
				steering = 1;
				side = "left";
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 50;
				MOI = 20;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 12500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				MaxDroop = 0.15;
				sprungMass = 812;
				springStrength = 52477;
				springDamperRate = 20154;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
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
				maxHandBrakeTorque = 20000;
				sprungMass = 406;
				springStrength = 26238;
				springDamperRate = 10077;
			};
			class LR2: LR
			{
				boneName = "wheel_1_3_damper";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
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
				maxHandBrakeTorque = 20000;
				sprungMass = 406;
				springStrength = 26238;
				springDamperRate = 10077;
			};
			class RR2: RR
			{
				boneName = "wheel_2_3_damper";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
			};
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 13;
		ace_refuel_fuelCapacity = 120;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_V3S_Covered_Base: SG_V3S_Open_Base
	{
		scope = 0;
		model = "\sg_cup_vehicles\cup_v3s_transport.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_transport_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_transport_CA.paa";
		DisplayName = "Praga V3S (Covered)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_reammo_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_reammo_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
				factions[] = {};
			};
			class TKC
			{
				DisplayName = "Takistan Civs";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_eciv_co","sg_cup_vehicles\Data\v3s_intkor_eciv_co","sg_cup_vehicles\Data\v3s_koloint02_eciv_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
				factions[] = {};
			};
		};
	};
	
	
	
	class SG_V3S_Refuel_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_refuel.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_refuel_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_refuel_CA.paa";
		DisplayName = "Praga V3S (Refuel)";
		transportFuel = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_EGUE_co","sg_cup_vehicles\Data\v3s_intkor_EGUE_co","sg_cup_vehicles\Data\v3s_koloint02_EGUE_co","sg_cup_vehicles\Data\v3s_refuel_EGUE_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_refuel_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_refuel_egue_co"};
				factions[] = {};
			};
		};
	};
	class SG_V3S_Repair_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_repair.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_repair_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_repair_CA.paa";
		DisplayName = "Praga V3S (Repair)";
		transportRepair = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
				factions[] = {};
			};
		};
	};
	class SG_V3S_Rearm_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_repair.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_repair_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_repair_CA.paa";
		DisplayName = "Praga V3S (Rearm)";
		transportAmmo = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
				factions[] = {};
			};
		};
	};
	
	
	
	
	
	
	
	
	class SG_I_V3S_Open: SG_V3S_Open_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Open_TKG.jpg";
		maximumLoad = 5000;
	};
	class SG_I_V3S_Covered: SG_V3S_Covered_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Covered_TKG.jpg";
		maximumLoad = 5000;
	};
	class SG_I_V3S_Refuel: SG_V3S_Refuel_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_refuel_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Refuel_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_I_V3S_Repair: SG_V3S_Repair_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Repair_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_I_V3S_Rearm: SG_V3S_Rearm_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Repair_TKG.jpg";
		maximumLoad = 2500;
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class Ship;
	class Ship_F: Ship
	{
		class ViewPilot;
		class AnimationSources;
		class Eventhandlers;
		class Turrets;
		class NewTurret;
	};
	class SG_RHIB_Base: Ship_F
	{
		
		bn_csw_loading_style = 1;
				
		ace_interaction_canPush = 1;
		vehicleClass = "Ship";
		simulation = "shipx";
		model = "\sg_cup_vehicles\CUP_RHIB.p3d";
		picture = "\sg_cup_vehicles\Data\UI\rhib_ca.paa";
		icon = "\sg_cup_vehicles\Data\UI\icomap_rhib_ca.paa";
		accuracy = 0.5;
		mapsize = 8;
		unitInfoType = "UnitInfoShip";
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 0;
		soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start","db-5",1.0};
		soundEngineOnExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start","db-5",1.0,300};
		soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop","db-5",1.0};
		soundEngineOffExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop","db-5",1.0,300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01","db0",1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02","db0",1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03","db0",1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04","db0",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01","db0",1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02","db0",1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03","db0",1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04","db0",1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05","db0",1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06","db0",1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01","db0",1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02","db0",1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03","db0",1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04","db0",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_idle","db-7",1.0,300};
				frequency = "0.95 + ((rpm/1000) factor[(100/1000),(250/1000)])*0.15";
				volume = "engineOn*(((rpm/1000) factor[(100/1000),(150/1000)])* ((rpm/1000) factor[(270/1000),(200/1000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_1","db-4",1.0,350};
				frequency = "0.85 + ((rpm/1000) factor[(200/1000),(370/1000)])*0.2";
				volume = "engineOn*(((rpm/1000) factor[(190/1000),(250/1000)])* ((rpm/1000) factor[(380/1000),(280/1000)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_3","db-2",1.0,380};
				frequency = "0.85 + ((rpm/1000) factor[(280/1000),(480/1000)])*0.2";
				volume = "engineOn*(((rpm/1000) factor[(250/1000),(350/1000)])* ((rpm/1000) factor[(480/1000),(390/1000)]))";
			};
			class EngineMaxOut2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_4","db-1",1.0,440};
				frequency = "0.86 + ((rpm/1000) factor[(380/1000),(580/1000)])*0.2";
				volume = "engineOn*(((rpm/1000) factor[(370/1000),(440/1000)])* ((rpm/1000) factor[(585/1000),(495/1000)]))";
			};
			class EngineMaxOut3
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_5","db0",1.0,500};
				frequency = "0.85 + ((rpm/1000) factor[(490/1000),(800/1000)])*0.2";
				volume = "engineOn*(((rpm/1000) factor[(460/1000),(550/1000)])* ((rpm/1000) factor[(780/1000),(620/1000)]))";
			};
			class EngineMaxOut4
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_6","db2",1.0,550};
				frequency = "0.85 + ((rpm/1000) factor[(650/1000),(1000/1000)])*0.2";
				volume = "engineOn*((rpm/1000) factor[(600/1000),(800/1000)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1","db-3",1.0,150};
				frequency = "1";
				volume = "(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed","db-2",1.0,250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed","db0",1.0,350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
		};
		maxSpeed = 80;
		overSpeedBrakeCoef = 0.8;
		enginePower = 500;
		engineShiftY = 0.4;
		waterLeakiness = 1.0;
		turnCoef = 0.2;
		thrustDelay = 2;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2.0;
		waterAngularDampingCoef = 1.2;
		waterResistanceCoef = 0.01;
		rudderForceCoef = 0.1;
		rudderForceCoefAtMaxSpeed = 0.003;
		idleRpm = 200;
		redRpm = 1200;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.782,"N",0,"D1",2.0,"D2",1.85,"D3",1.75};
			TransmissionRatios[] = {"High",1.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		driverAction = "CUP_RHIB_Driver";
		cargoAction[] = {"CUP_RHIB_Cargo"};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMedium"};
		cargoGetOutAction[] = {"GetOutMedium"};
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerHasFlares = 0;
		enableGPS = 1;
		transportSoldier = 10;
		typicalCargo[] = {};
		supplyRadius = 3;
		hiddenSelections[] = {"camo"};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_M2";
			};
			class muzzle_rot_HMG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
			class muzzle_hide_HMG
			{
				source = "reload";
				weapon = "BN_RHS_M2";
			};
		};
		armor = 200;
		leftEngineEffect = "LEngEffectsSmall";
		rightEngineEffect = "REngEffectsSmall";
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		brakeDistance = 3;
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = 60;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
					class HitGun
					{
						armor = 0.6;
						material = 60;
						name = "zbran";
						visual = "zbran";
						passThrough = 1;
					};
				};
				stabilizedInAxes = 0;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerAction = "gunner_standup01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 0;
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag"};
				gunnerName = "$STR_FRONT_GUNNER";
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics = 0;
				startEngine = 0;
				commanding = 2;
				primaryGunner = 1;
				primaryObserver = 1;
				gunnerLeftHandAnimName = "OtocHlaven_shake";
				gunnerRightHandAnimName = "OtocHlaven_shake";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "pos_light_still_white";
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};
			class RedStill
			{
				name = "pos_light_still_red";
				color[] = {0.8,0.0,0.0};
				ambient[] = {0.08,0.0,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};
			class GreenStill
			{
				name = "pos_light_still_green";
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				intensity = 75;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.04;
				activeLight = 0;
				blinking = 0;
				dayLight = 0;
				useFlare = 1;
			};
		};
		hideProxyInCombat = 0;
		driverLeftHandAnimName = "drivingWheel";
		driverRightHandAnimName = "throttle";
		class Library
		{
			libTextDesc = "RHIB";
		};
		extCameraPosition[] = {0,4.0,-14.0};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_cup_vehicles\Data\rhib.rvmat",
				"sg_cup_vehicles\Data\rhib.rvmat",
				"sg_cup_vehicles\Data\rhib_destruct.rvmat",
				
				"sg_cup_vehicles\Data\rhib_dash.rvmat",
				"sg_cup_vehicles\Data\rhib_dash.rvmat",
				"sg_cup_vehicles\Data\rhib_dash_destruct.rvmat"
				
				};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 6;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_RHIB2Turret_Base: SG_RHIB_Base
	{
		vehicleClass = "Ship";
		model = "\sg_cup_vehicles\CUP_RHIB_gunboat.p3d";
		picture = "\sg_cup_vehicles\Data\UI\rhib_ca.paa";
		icon = "\sg_cup_vehicles\Data\UI\icomap_gunboat_ca.paa";
		mapSize = 8;
		transportSoldier = 7;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret{};
			class BackTurret: MainTurret
			{
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				animationSourceHatch = "";
				stabilizedInAxes = 0;
				proxyIndex = 2;
				gunnerName = "$STR_REAR_GUNNER";
				commanding = -2;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				minElev = -50;
				maxElev = 25;
				initElev = -5;
				minTurn = 120;
				maxTurn = 240;
				initTurn = 180;
				weapons[] = {"BN_RHS_MK19"};
				magazines[] = {"RHS_48Rnd_40mm_MK19"};
				gunBeg = "gmg_start";
				gunEnd = "gmg_end";
				gunnerLeftHandAnimName = "otochlaven_1";
				gunnerRightHandAnimName = "otochlaven_1";
				primaryGunner = 0;
				primaryObserver = 0;
				memoryPointGun = "kulas_1";
				memoryPointGunnerOptics = "gunnerview_1";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_GMG
			{
				source = "ammorandom";
				weapon = "BN_RHS_MK19";
			};
			class muzzle_hide_GMG
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
		};
	};
	class SG_B_RHIB_USMC: SG_RHIB_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		vehicleClass = "Ship";
		displayName = "RHIB";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\rhib_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_RHIB_USMC.jpg";
		class TransportWeapons
		{};
		class TransportMagazines
		{};
		maximumLoad = 2500;
		class TransportItems
		{};
		class TransportBackpacks
		{};
	};
	class SG_B_RHIB2Turret_USMC: SG_RHIB2Turret_Base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "rhs_faction_usmc_wd";
		crew = "rhsusf_usmc_marpat_wd_rifleman_m4";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
		
		
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		vehicleClass = "Ship";
		displayName = "RHIB (Mk19)";
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\data\rhib_co.paa"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_B_RHIB2Turret_USMC.jpg";
		class TransportWeapons
		{};
		class TransportMagazines
		{};
		maximumLoad = 2500;
		class TransportItems
		{};
		class TransportBackpacks
		{};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};
