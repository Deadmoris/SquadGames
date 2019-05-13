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
		requiredAddons[] = {"A3_Weapons_F","A3_Data_F","A3_Armor_F","A3_Characters_F","A3_Cargoposes_F","rhs_c_heavyweapons","rhsusf_c_heavyweapons","sg_hud_display"};
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
	class sg
	{
		class functions
		{
			class sight_t55
			{
				file = "\sg_cup_vehicles\scripts\RHS_sight_t55.sqf";
				description = "FCS for BMP-2";
			};
		};
	};
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

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "cfgWeapons.hpp"
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
		
		class ViewOptics;
		class ViewCargo;
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints;
			};
		};
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
		class ACE_SelfActions;
	};
	
	#include "CfgVehicles_t34.hpp"
	#include "CfgVehicles_t55.hpp"
	#include "CfgVehicles_AAV.hpp"
	#include "CfgVehicles_LAV25.hpp"
	#include "CfgVehicles_SUV.hpp"
	#include "CfgVehicles_Datsun.hpp"	
	#include "CfgVehicles_V3S.hpp"
	
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
