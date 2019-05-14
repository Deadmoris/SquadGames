////////////////////////////////////////////////////////////////////
//DeRap: cup_trackedvehicles_core\config.bin
//Produced from mikero""s Dos Tools Dll version 6.34
//""now"" is Thu Mar 28 20:17:07 2019 : ""file"" last modified on Thu Mar 28 08:14:39 2019
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
	class sg_vtn_vehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"bn_csw_load"};
	};
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class ViewOptics;
class ViewGunner;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgMovesBasic
{
	class Default;
	class StandBase: Default{};
	class DefaultDie;
	class ManActions
	{
		UAZ_Driver_v0 = "UAZ_Driver_v0";
		UAZDriverZalez = "UAZDriverZalez";
		UAZDriverVilez = "UAZDriverVilez";
		UAZ_Cargo01 = "UAZ_Cargo01";
		UAZ_Cargo01_zalez = "UAZ_Cargo01_zalez";
		UAZ_Cargo01_vilez = "UAZ_Cargo01_vilez";
		UAZ_Cargo01_V1 = "UAZ_Cargo01_V1";
		UAZ_Cargo01_V2 = "UAZ_Cargo01_V2";
		UAZ_Cargo02 = "UAZ_Cargo02";
		UAZ_Cargo02_zalez = "UAZ_Cargo02_zalez";
		UAZ_Cargo02_vilez = "UAZ_Cargo02_vilez";
		UAZ_Cargo03 = "UAZ_Cargo03";
		UAZ_Cargo03_zalez = "UAZ_Cargo03_zalez";
		UAZ_Cargo03_vilez = "UAZ_Cargo03_vilez";
		UAZ_Cargo04_V1 = "UAZ_Cargo04_V1";
		UAZ_Cargo04_V2 = "UAZ_Cargo04_V2";
		UAZ_Cargo04 = "UAZ_Cargo04";
		UAZ_Cargo04_zalez = "UAZ_Cargo04_zalez";
		UAZ_Cargo04_vilez = "UAZ_Cargo04_vilez";
		UAZ_Cargo05 = "UAZ_Cargo05";
		UAZ_Cargo05_zalez = "UAZ_Cargo05_zalez";
		UAZ_Cargo05_vilez = "UAZ_Cargo05_vilez";
		UAZ_Cargo06 = "UAZ_Cargo06";
		UAZ_Cargo06_zalez = "UAZ_Cargo06_zalez";
		UAZ_Cargo06_vilez = "UAZ_Cargo06_vilez";
		KIA_UAZ_Driver = "KIA_UAZ_Driver";
		KIA_UAZ_Cargo01 = "KIA_UAZ_Cargo01";
		KIA_UAZ_Cargo02 = "KIA_UAZ_Cargo02";
		KIA_UAZ_Cargo03 = "KIA_UAZ_Cargo03";
		KIA_UAZ_Cargo04 = "KIA_UAZ_Cargo04";
		KIA_UAZ_Cargo05 = "KIA_UAZ_Cargo03";
		KIA_UAZ_Cargo06 = "KIA_UAZ_Cargo04";
		UAZ_Gunner = "UAZ_Gunner";
		UAZ_GunnerPKM = "UAZ_GunnerPKM";
		LAV25_Driver = "LAV25_Driver";
		LAV25_Gunner = "LAV25_Gunner";
		LAV25_Commander = "LAV25_Commander";
		LAV25_Driver_out = "LAV25_Driver_out";
		LAV25_Gunner_out = "LAV25_Gunner_out";
		LAV25_Commander_out = "LAV25_Commander_out";
		Stryker_Cargo01 = "Stryker_Cargo01";
		Stryker_Cargo01_V5 = "Stryker_Cargo01_V5";
		Stryker_Cargo01_V6 = "Stryker_Cargo01_V6";
	};
	class Actions
	{
		class CargoActions;
		class LAV25DriverActions: CargoActions
		{
			Die = "KIA_LAV25_Driver";
			Unconscious = "KIA_LAV25_Driver";
		};
		class LAV25GunnerActions: CargoActions
		{
			Die = "KIA_LAV25_Gunner";
			Unconscious = "KIA_LAV25_Gunner";
		};
		class LAV25CommanderActions: CargoActions
		{
			Die = "KIA_LAV25_commander";
			Unconscious = "KIA_LAV25_commander";
		};
		class LAV25CargoActions: CargoActions
		{
			Die = "KIA_Stryker_Cargo01";
			Unconscious = "KIA_Stryker_Cargo01";
		};
	};
};






class CfgMovesMaleSdr: cfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMstpSrasWrflDnon;
		class PreciseCrew: Crew
		{
			head = "headNo";
		};
		class KIA_UAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vtn_vehicles\anim\uaz_driver_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class UAZ_Driver_v0: Crew
		{
			file = "\sg_vtn_vehicles\anim\uaz_driver_v0.rtm";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			interpolateTo[] = {"KIA_UAZ_Driver",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		class KIA_UAZ_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vtn_vehicles\anim\uaz_gunner_kia.rtm";
			speed = 1;
			looped = "false";
			terminal = "true";
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class UAZ_Gunner: Crew
		{
			file = "\sg_vtn_vehicles\anim\uaz_gunner_nsvs.rtm";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			interpolateTo[] = {"KIA_UAZ_Gunner",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		class UAZ_GunnerPKM: Crew
		{
			file = "\sg_vtn_vehicles\anim\uaz_gunner_pkm.rtm";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			interpolateTo[] = {"KIA_UAZ_Gunner",1};
			leftHandIKCurve[] = {0.5};
			rightHandIKCurve[] = {0.5};
		};
		class UAZDriverZalez: PreciseCrew
		{
			file = "\sg_vtn_vehicles\anim\uaz_driver_zalez.rtm";
			speed = 0.3;
			soundOverride = "Walk";
			canPullTrigger = 0;
			ConnectTo[] = {"UAZ_Driver_v0",1};
			InterpolateTo[] = {"KIA_UAZ_Driver",1};
			headBobMode = 4;
			headBobStrength = -0.8;
		};
		class UAZDriverVilez: PreciseCrew
		{
			variantsPlayer[] = {};
			file = "\sg_vtn_vehicles\anim\uaz_driver_vilez.rtm";
			speed = 0.8;
			looped = 0;
			soundOverride = "Walk";
			disableWeapons = 1;
			leaningFactorEnd = 0;
			canPullTrigger = 0;
			minPlayTime = 0.95;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			interpolateTo[] = {"Unconscious",0.1};
			headBobMode = 4;
			headBobStrength = -0.8;
		};
		class KIA_UAZ_Cargo01: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo01_kia.rtm";
		};
		class UAZ_Cargo01: Crew
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo01_V0.rtm";
			disableWeapons = 0;
			disableWeaponsLong = 0;
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1,"UAZ_Cargo01_V1",0.1,"UAZ_Cargo01_V2",0.1};
			equivalentTo = "UAZ_Cargo01";
			variantsAI[] = {"UAZ_Cargo01",0.6,"UAZ_Cargo01_V1",0.2,"UAZ_Cargo01_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo01_V1: UAZ_Cargo01
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo01_V2: UAZ_Cargo01
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo01_Zalez: UAZDriverZalez
		{
			speed = 0.3;
			file = "\sg_vtn_vehicles\anim\uaz_cargo01_zalez.rtm";
			ConnectTo[] = {"UAZ_Cargo01",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo01",1};
		};
		class UAZ_Cargo01_Vilez: UAZDriverVilez
		{
			speed = 0.5;
			file = "\sg_vtn_vehicles\anim\uaz_cargo01_vilez.rtm";
		};
		class KIA_UAZ_Cargo02: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo02_kia.rtm";
		};
		class UAZ_Cargo02: Crew
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo02",0.1};
			connectTo[] = {"UAZ_Cargo02",0.1,"UAZ_Cargo02_V1",0.1,"UAZ_Cargo02_V2",0.1};
			equivalentTo = "UAZ_Cargo02";
			variantsAI[] = {"UAZ_Cargo02",0.6,"UAZ_Cargo02_V1",0.2,"UAZ_Cargo02_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo02_V1: UAZ_Cargo02
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo02_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo02",0.1};
			connectTo[] = {"UAZ_Cargo02",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo02_V2: UAZ_Cargo02
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo02",0.1};
			connectTo[] = {"UAZ_Cargo02",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo02_Zalez: UAZ_Cargo01_Zalez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo02_zalez.rtm";
			ConnectTo[] = {"UAZ_Cargo02",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo02",1};
		};
		class UAZ_Cargo02_Vilez: UAZ_Cargo01_Vilez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo02_vilez.rtm";
			speed = 1.5;
		};
		class KIA_UAZ_Cargo03: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo03_kia.rtm";
		};
		class UAZ_Cargo03: UAZ_Cargo02
		{
			interpolateTo[] = {"KIA_UAZ_Cargo03",0.1};
			connectTo[] = {"UAZ_Cargo03",0.1,"UAZ_Cargo03_V1",0.1,"UAZ_Cargo03_V2",0.1};
			equivalentTo = "UAZ_Cargo03";
			variantsAI[] = {"UAZ_Cargo03",0.6,"UAZ_Cargo03_V1",0.2,"UAZ_Cargo03_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo03_V1: UAZ_Cargo02_V1
		{
			interpolateTo[] = {"KIA_UAZ_Cargo03",0.1};
			connectTo[] = {"UAZ_Cargo03",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo03_V2: UAZ_Cargo02_V2
		{
			interpolateTo[] = {"KIA_UAZ_Cargo03",0.1};
			connectTo[] = {"UAZ_Cargo03",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo03_Zalez: UAZ_Cargo02_Zalez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo03_zalez.rtm";
			ConnectTo[] = {"UAZ_Cargo03",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo03",1};
		};
		class UAZ_Cargo03_Vilez: UAZ_Cargo02_Vilez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo03_vilez.rtm";
			speed = 1.5;
			interpolateTo[] = {"KIA_UAZ_Cargo03",0.01};
		};
		class KIA_UAZ_Cargo04: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo04_kia.rtm";
		};
		class UAZ_Cargo04: Crew
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo04_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo04",0.1};
			connectTo[] = {"UAZ_Cargo04",0.1,"UAZ_Cargo04_V1",0.1,"UAZ_Cargo04_V2",0.1};
			equivalentTo = "UAZ_Cargo04";
			variantsAI[] = {"UAZ_Cargo04",0.6,"UAZ_Cargo04_V1",0.2,"UAZ_Cargo04_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo04_V1: UAZ_Cargo04
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo04_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo04",0.1};
			connectTo[] = {"UAZ_Cargo04",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo04_V2: UAZ_Cargo04
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo04_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo04",0.1};
			connectTo[] = {"UAZ_Cargo04",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo04_Zalez: UAZ_Cargo03_Zalez
		{
			speed = 0.5;
			file = "\sg_vtn_vehicles\anim\uaz_cargo04_zalez.rtm";
			ConnectTo[] = {"UAZ_Cargo04",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo04",1};
		};
		class UAZ_Cargo04_Vilez: UAZ_Cargo03_Vilez
		{
			file = "\sg_vtn_vehicles\anim\uaz_Cargo04_vilez.rtm";
			speed = 1.5;
		};
		class KIA_UAZ_Cargo05: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo05_kia.rtm";
		};
		class UAZ_Cargo05: Crew
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo05_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo05",0.1};
			connectTo[] = {"UAZ_Cargo05",0.1,"UAZ_Cargo05_V1",0.1,"UAZ_Cargo05_V2",0.1};
			equivalentTo = "UAZ_Cargo04";
			variantsAI[] = {"UAZ_Cargo05",0.6,"UAZ_Cargo05_V1",0.2,"UAZ_Cargo05_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo05_V1: UAZ_Cargo05
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo05_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo05",0.1};
			connectTo[] = {"UAZ_Cargo05",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo05_V2: UAZ_Cargo05
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo05_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo05",0.1};
			connectTo[] = {"UAZ_Cargo05",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo05_Zalez: UAZ_Cargo04_Zalez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo05_zalez.rtm";
			speed = 0.3;
			ConnectTo[] = {"UAZ_Cargo05",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo05",1};
		};
		class UAZ_Cargo05_Vilez: UAZ_Cargo04_Vilez
		{
			file = "\sg_vtn_vehicles\anim\uaz_Cargo05_vilez.rtm";
			speed = 0.5;
		};
		class KIA_UAZ_Cargo06: KIA_UAZ_Driver
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo04_kia.rtm";
		};
		class UAZ_Cargo06: Crew
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo04_v0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo06",0.1};
			connectTo[] = {"UAZ_Cargo04",0.1,"UAZ_Cargo04_V1",0.1,"UAZ_Cargo04_V2",0.1};
			equivalentTo = "UAZ_Cargo04";
			variantsAI[] = {"UAZ_Cargo04",0.6,"UAZ_Cargo04_V1",0.2,"UAZ_Cargo04_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo06_V1: UAZ_Cargo06
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo04_v1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo06",0.1};
			connectTo[] = {"UAZ_Cargo06",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo06_V2: UAZ_Cargo06
		{
			file = "\sg_vtn_vehicles\anim\UAZ_Cargo04_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo06",0.1};
			connectTo[] = {"UAZ_Cargo06",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class UAZ_Cargo06_Zalez: UAZ_Cargo05_Zalez
		{
			file = "\sg_vtn_vehicles\anim\uaz_cargo06_zalez.rtm";
			ConnectTo[] = {"UAZ_Cargo06",1};
			InterpolateTo[] = {"KIA_UAZ_Cargo06",1};
		};
		class UAZ_Cargo06_Vilez: UAZ_Cargo05_Vilez
		{
			file = "\sg_vtn_vehicles\anim\uaz_Cargo06_vilez.rtm";
		};
		class KIA_LAV25_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vtn_vehicles\anim\kia_lav25_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Driver: Crew
		{
			actions = "LAV25DriverActions";
			file = "\sg_vtn_vehicles\Anim\lav25_driver.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class LAV25_Driver_out: Crew
		{
			actions = "LAV25DriverActions";
			file = "sg_vtn_vehicles\Anim\lav25_driver_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class KIA_LAV25_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vtn_vehicles\anim\kia_lav25_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Gunner: Crew
		{
			actions = "LAV25GunnerActions";
			file = "\sg_vtn_vehicles\Anim\lav25_Gunner.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class LAV25_Gunner_out: Crew
		{
			actions = "LAV25GunnerActions";
			file = "\sg_vtn_vehicles\Anim\lav25_gunner_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class KIA_LAV25_commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\sg_vtn_vehicles\anim\kia_lav25_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_commander: Crew
		{
			actions = "LAV25CommanderActions";
			file = "\sg_vtn_vehicles\Anim\lav25_commander.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class LAV25_commander_out: Crew
		{
			actions = "LAV25CommanderActions";
			file = "\sg_vtn_vehicles\Anim\lav25_commander_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class KIA_Stryker_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\sg_vtn_vehicles\Anim\KIA_Stryker_Cargo01.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class Stryker_Cargo01: Crew
		{
			actions = "LAV25CargoActions";
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			equivalentTo = "Stryker_Cargo01";
			variantsAI[] = {"Stryker_Cargo01",0.6,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Stryker_Cargo01_V1: Stryker_Cargo01
		{
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class Stryker_Cargo01_V2: Stryker_Cargo01
		{
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class Stryker_Cargo01_V3: Stryker_Cargo01
		{
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V4: Stryker_Cargo01
		{
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V4.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V5: Crew
		{
			actions = "LAV25CargoActions";
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V5.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
		};
		class Stryker_Cargo01_V6: Crew
		{
			actions = "LAV25CargoActions";
			file = "\sg_vtn_vehicles\Anim\Stryker_Cargo01_V6.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
		};
	};
};

class cfgWeapons 
{
	class BN_rhs_weap_kord;
	class SG_VTN_kord: BN_rhs_weap_kord
	{
		class GunParticles
		{
			class effect1
			{
				directionname = "nabojnicestart1";
				effectname = "MachineGunCartridge2";
				positionname = "nabojniceend1";
			};
			class effect2
			{
				directionname = "V1";
				effectname = "MachineGunCloud";
				positionname = "V2";
			};
			class effect3
			{
				directionname = "V2";
				effectname = "MachineGunCloud";
				positionname = "V1";
			};
		};
	};
	
	class BN_RHS_PKM;	
	class SG_VTN_pkm: BN_RHS_PKM
	{
		class GunParticles
		{
			class effect1
			{
				directionname = "konec hlavne";
				effectname = "MachineGunCloud";
				positionname = "usti hlavne";
			};
			class SecondEffect
			{
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
				effectName = "MachineGunCartridge2";
			};
		};
	};
	
	class RHS_weap_M242BC;
	class VTN_M242_veh: RHS_weap_M242BC
	{	
		class GunParticles
		{
			class Effect1
			{
				positionName = "Cloud3";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect2
			{
				positionName = "Cloud2";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect3
			{
				positionName = "Cloud1";
				directionName = "Cloud";
				effectName = "MachineGunCloud";
			};
			class Effect4
			{
				positionName = "Cloud3";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class Effect5
			{
				positionName = "Cloud2";
				directionName = "Cloud";
				effectName = "MachineGun1";
			};
			class SecondEffect1
			{
				positionName = "nabojnicestart1";
				directionName = "nabojniceend1";
				effectname = "MachineGunEject";
			};
			class Effect6
			{
				positionName = "Cloud1";
				directionName = "Cloud";
				effectName = "MachineGunCloud";
			};
			class Shell
			{
				positionName = "shell_eject_pos";
				directionName = "shell_eject_dir";
				effectName = "RHS_HeavyGunCartridge1";
			};
		};
	};
	
	
	class rhs_weap_m240_bradley_coax;
	class VTN_M240_coax: rhs_weap_m240_bradley_coax
	{	
		class GunParticles
		{
			class SecondEffect
			{
				positionName = "nabojnicestart2";
				directionName = "nabojniceend2";
				effectName = "MachineGunEject1";
			};
			class SecondEffect1
			{
				positionName = "nabojnicestart1";
				directionName = "nabojniceend1";
				effectname = "MachineGunCartridge2";
			};
			class effect1
			{
				positionName = "usti hlavne1";
				directionName = "konec hlavne1";
				effectName = "MachineGunCloud";
			};
		};
	};
	
	
	
	
	
	
	
	
	
	
};



























class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Turrets;
		class MainTurret;
		class NewTurret;
		class AnimationSources;
		class HitPoints;
		class ViewPilot;
		class ViewOptics;
	};
	class Car_F: Car
	{
		class Turrets;
		class HitPoints: HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class Eventhandlers;
		class ViewOptics;
		class Sounds;
		class NewTurret;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class APC_Wheeled_01_base_F: Wheeled_APC_F{};
	
	class VTN_UAZ469_BASE: Car_F
	{
		
		class EventHandlers: DefaultEventhandlers
		{
			class VTN
			{
				init = "(_this select 0) call compile preprocessFileLineNumbers ""sg_vtn_vehicles\scripts\init.sqf"";";
			};
		};
		
		
		class VTN_EEH_INIT
		{
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
		};
		
		
		
		bn_csw_loading_style = 1;
		
		
		
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 118;
		fuelCapacity = 78;
		wheelCircumference = 3.924;
		antiRollbarForceCoef = 1.9;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 60;
		idleRpm = 725;
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
		dampersBumpCoef = 3;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 55.16;
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
				mass = 20;
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
				sprungMass = 413;
				springStrength = 25000;
				springDamperRate = 1651;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 180;
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
				frictionVsSlipGraph[] = {{0,2.3},{0.5,2.1},{1,2}};
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		LODTurnedIn = 1;
		LODTurnedOut = 1;
		driverUsesPilotView = 0;
		gunnerUsesPilotView = 0;
		mapSize = 4;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_BASE";
		displayName = "$STR_DN_VTN_UAZ3151";
		viewDriverShadow = 1;
		viewCargoShadow = 1;
		vtn_additionalcontrol = 1;
		class Library
		{
			libTextDesc = "";
		};
		model = "sg_vtn_vehicles\uaz.p3d";
		picture = "\sg_vtn_vehicles\ico\ico_uaz_tent_ca";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_tent_ca";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";	
		
		transportSoldier = 4;
		crewVulnerable = 1;
		crewCrashProtection = 1;
		crewExplosionProtection = 1;
		fuelExplosionPower = 0;
		armor = 100;
		terrainCoef = 4.1;
		cost = 500000;
		threat[] = {0.8,0.6,0.3};
		driverDoor = "Door_1_1";
		cargoDoors[] = {"Door_2_1","Door_1_2","Door_2_2"};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 0.85;
				innerAngle = 30;
				outerAngle = 40;
				coneFadeCoef = 7;
				intensity = 3;
				brightness = 5;
				useFlare = 0;
				flareSize = 1;
				flareMaxDistance = 2500;
				dayLight = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 40;
					hardLimitEnd = 75;
				};
			};
			class Right: Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
				size = 0.85;
				innerAngle = 30;
				outerAngle = 40;
				coneFadeCoef = 7;
				intensity = 30;
				brightness = 10;
				useFlare = 0;
				flareSize = 1.25;
				flareMaxDistance = 4000;
				dayLight = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 150;
					hardLimitEnd = 200;
				};
			};
			class Right2: Right
			{
				position = "light_R_flare";
				outerAngle = 175;
				useFlare = 1;
				flareSize = 1.25;
				flareMaxDistance = 4000;
				dayLight = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				outerAngle = 175;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 2500;
				dayLight = 1;
			};
			class Left3: Left
			{
				innerAngle = 55;
				outerAngle = 140;
				coneFadeCoef = 7;
				intensity = 1;
				brightness = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 10;
					hardLimitEnd = 25;
				};
			};
			class Right3: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
				innerAngle = 55;
				outerAngle = 140;
				coneFadeCoef = 7;
				intensity = 1;
				brightness = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 10;
					hardLimitEnd = 25;
				};
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectOffroad";
			};
			class Exhaust2
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vtn_vehicles\data\uaz_skla_lob.rvmat",
				"a3\data_f\glass_veh_damage.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat",
				
				"sg_vtn_vehicles\data\uaz_skla.rvmat",
				"a3\data_f\glass_veh_damage.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat",
				
				"sg_vtn_vehicles\data\uaz_skla_in.rvmat",
				"a3\data_f\glass_veh_damage.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat",
				
				"sg_vtn_vehicles\data\uaz_poverh_metal.rvmat",
				"sg_vtn_vehicles\data\uaz_poverh_metal_damage.rvmat",
				"sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat",
				
				"sg_vtn_vehicles\data\uaz_main_metal.rvmat",
				"sg_vtn_vehicles\data\uaz_main_metal_damage.rvmat",
				"sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat",
				
				"sg_vtn_vehicles\data\uaz_br_metal.rvmat",
				"sg_vtn_vehicles\data\uaz_br_damage.rvmat",
				"sg_vtn_vehicles\data\uaz_br_destruct.rvmat",
				
				"sg_vtn_vehicles\data\uaz_other_metal.rvmat",
				"sg_vtn_vehicles\data\uaz_other_metal_damage.rvmat",
				"sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\platenumber_rf_mi.rvmat",
				"sg_vtn_vehicles\data\reg_znak\platenumber_rf_mi.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn0.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn0.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn01.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn01.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn02.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn02.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn03.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn03.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn04.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn04.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn05.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn05.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn06.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn06.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn07.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn07.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				
				"sg_vtn_vehicles\data\reg_znak\rn08.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn08.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat",
				
				"sg_vtn_vehicles\data\reg_znak\rn09.rvmat",
				"sg_vtn_vehicles\data\reg_znak\rn09.rvmat",
				"a3\data_f\Destruct\default_destruct_exterior.rvmat"
			};
		};
		class AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HideTent
			{
				displayName = "$STR_UAZ_AnimationSources_HideTent";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				mass = -20;
			};
			class maskirovka
			{
				displayName = "$STR_DN_VTN_CAR_SMU13";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -0.5;
			};
			class HideDoor_1_1v: HideTent
			{
				displayName = "$STR_UAZ_AnimationSources_HideWindow_FrontLeft";
				selection = "Door_1_1v";
			};
			class HideDoor_1_2v: HideDoor_1_1v
			{
				displayName = "$STR_UAZ_AnimationSources_HideWindow_FrontRight";
				selection = "Door_1_2v";
			};
			class HideDoor_2_1v: HideDoor_1_2v
			{
				displayName = "$STR_UAZ_AnimationSources_HideWindow_RearLeft";
				selection = "Door_2_1v";
			};
			class HideDoor_2_2v: HideDoor_2_1v
			{
				displayName = "$STR_UAZ_AnimationSources_HideWindow_RearRight";
				selection = "Door_2_2v";
			};
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Door_1_1
			{
				source = "user";
				type = "rotation";
				animPeriod = 0.5;
				selection = "Door_1_1";
				axis = "axis_Door_1_1";
				angle0 = 0;
				angle1 = "rad -90";
				memory = 1;
				minValue = 0;
				maxValue = 1;
			};
			class Door_2_1: Door_1_1
			{
				selection = "Door_2_1";
				axis = "axis_Door_2_1";
			};
			class Door_1_2: Door_2_1
			{
				selection = "Door_1_2";
				axis = "axis_Door_1_2";
				angle1 = "rad 80";
			};
			class Door_2_2: Door_1_2
			{
				selection = "Door_2_2";
				axis = "axis_Door_2_2";
			};
			class Front_window: Door_2_2
			{
				displayName = "$STR_SLOJIT_OKNO";
				selection = "front_window";
				axis = "front_window_axis";
			};
			class Hood: Door_2_2
			{
				selection = "hood";
				axis = "axis_hood";
				angle0 = 0;
				angle1 = "rad 80";
			};
			class Door_3_1: Door_1_2
			{
				selection = "Door_3_1";
				axis = "axis_Door_3_1";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
		};
		class SimpleObject
		{
			animate[] = {{"HideTent",0},{"maskirovka",1},{"HideDoor_1_1v",0},{"HideDoor_1_2v",0},{"HideDoor_2_1v",0},{"HideDoor_2_2v",0},{"Front_window",0}};
		};
		class UserActions
		{
			class KapotOtkrit
			{
				displayName = "$STR_OTKR_KAPOT";
				position = "hood_ruchka";
				showwindow = 0;
				radius = 0.9;
				onlyForPlayer = "false";
				condition = "(this animationPhase ""hood"" < 0.1) && (this animationPhase ""Front_window"" < 0.1) && (!(player in (crew this)))";
				statement = "this animate [""hood"", 1]";
			};
			class KapotZakrit: KapotOtkrit
			{
				displayName = "$STR_ZAKR_KAPOT";
				condition = "(this animationPhase ""hood"" > 0.9) && (!(player in (crew this)))";
				statement = "this animate [""hood"", 0]";
			};
			class ZakritDver_1_1
			{
				displayName = "$STR_ZAKR_DVER";
				displayNameDefault = "<img image=""\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa"" size=""2.5"" shadow=""true"" />";
				priority = 1.5;
				textToolTip = "$STR_ZAKR_DVER";
				position = "door_1_1_ruchka";
				radius = 0.9;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "(this animationPhase ""Door_1_1"" > 0.5) && (player == player)";
				statement = "this animate [""Door_1_1"", 0]";
			};
			class ZakritDver_1_2: ZakritDver_1_1
			{
				position = "door_1_2_ruchka";
				condition = "(this animationPhase ""Door_1_2"" > 0.5) && (player == player)";
				statement = "this animate [""Door_1_2"", 0]";
			};
			class ZakritDver_2_1: ZakritDver_1_2
			{
				position = "door_2_1_ruchka";
				condition = "(this animationPhase ""Door_2_1"" > 0.5) && (player == player)";
				statement = "this animate [""Door_2_1"", 0]";
			};
			class ZakritDver_2_2: ZakritDver_2_1
			{
				position = "door_2_2_ruchka";
				condition = "(this animationPhase ""Door_2_2"" > 0.5) && (player == player)";
				statement = "this animate [""Door_2_2"", 0]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.05;
				explosionShielding = 0.15;
				minimalHit = 0.25;
				name = "glass1";
				convexComponent = "glass1";
				passThrough = 1;
				radius = 0.001;
				visual = "glass1";
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.025;
				explosionShielding = 0.15;
				name = "Glass2";
				convexComponent = "glass2";
				visual = "glass2";
				radius = 0.01;
				passThrough = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.025;
				name = "Glass3";
				convexComponent = "glass3";
				visual = "glass3";
				passThrough = 1;
				explosionShielding = 0.15;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.025;
				name = "Glass4";
				convexComponent = "glass4";
				visual = "glass4";
				passThrough = 1;
				explosionShielding = 0.15;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.025;
				name = "Glass5";
				convexComponent = "glass5";
				visual = "glass5";
				passThrough = 1;
				explosionShielding = 0.15;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.025;
				name = "Glass6";
				convexComponent = "glass6";
				visual = "glass6";
				passThrough = 1;
				explosionShielding = 0.15;
			};
			class HitGlass7: HitGlass6
			{
				armor = 0.05;
				explosionShielding = 0.15;
				minimalHit = 0.3;
				name = "glass7";
				convexComponent = "glass7";
				passThrough = 1;
				radius = 0.001;
				visual = "glass7";
			};
			class HitLFWheel: HitLFWheel
			{
				minimalHit = 0.05;
				armor = 0.155;
				name = "wheel_1_1_steering";
				passThrough = 0;
				radius = 0.11;
			};
			class HitLF2Wheel: HitLBWheel
			{
				minimalHit = 0.05;
				armor = 0.155;
				name = "wheel_1_2_steering";
				passThrough = 0;
				radius = 0.11;
			};
			class HitRFWheel: HitRFWheel
			{
				minimalHit = 0.05;
				armor = 0.155;
				name = "wheel_2_1_steering";
				passThrough = 0;
				radius = 0.11;
			};
			class HitRF2Wheel: HitRBWheel
			{
				minimalHit = 0.05;
				armor = 0.155;
				name = "wheel_2_2_steering";
				passThrough = 0;
				radius = 0.11;
			};
			class HitBody: HitBody
			{
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.5;
				minimalHit = 0.15;
				explosionShielding = 1;
				radius = 0.45;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				minimalHit = 0.015;
				name = "motor";
				passThrough = 0;
				radius = 0.01;
				visual = "";
				explosionShielding = 0.25;
			};
			class HitFuel
			{
				armor = 1.5;
				material = -1;
				minimalHit = 0.015;
				name = "palivo";
				visual = "";
				passThrough = 0.5;
				explosionShielding = 0.05;
			};
		};
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		driverAction = "UAZ_Driver_v0";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "pedal_gear";
		driverRightLegAnimName = "pedalG";
		driverLeftLegAnimName = "pedalS";
		getInAction = "UAZDriverZalez";
		getOutAction = "UAZDriverVilez";
		preciseGetInout = 1;
		usePreciseGetInAction = 1;
		memoryPointsGetInDriverPrecise = "pos_driver_dir";
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";
		cargoIsCoDriver = 0;
		cargoPreciseGetInOut[] = {1,1,1,1};
		cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo03","UAZ_Cargo04"};
		cargoGetInAction[] = {"UAZ_Cargo01_Zalez","UAZ_Cargo02_Zalez","UAZ_Cargo03_Zalez","UAZ_Cargo04_Zalez"};
		cargoGetOutAction[] = {"UAZ_Cargo01_Vilez","UAZ_Cargo02_Vilez","UAZ_Cargo03_Vilez","UAZ_Cargo04_Vilez"};
		memoryPointsGetInCargo[] = {"pos_cargo01","pos_cargo02","pos_cargo03","pos_cargo04"};
		memoryPointsGetInCargoDir[] = {"pos_cargo01_dir","pos_cargo02_dir","pos_cargo03_dir","pos_cargo04_dir"};
		memoryPointsGetInCargoPrecise[] = {"pos_cargo01","pos_cargo02","pos_cargo03","pos_cargo04"};
		cargoProxyIndexes[] = {1,2,3,4};
		getInProxyOrder[] = {1,2,3,4};
		class Turrets: Turrets{};
		commanderCanSee = 31;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = "false";
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment1","Compartment1"};
		turnCoef = 2;
		precision = 15;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.562341,1,40};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.354813,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.707946,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.354813,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.707946,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle",1.5848932,1,150};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_acceleration",1.4125376,1,200};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1",1.4125376,1,240};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",1.2589254,1,280};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",1.2589254,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",1.1220185,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1",1.1220185,1,420};
				frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
				volume = "engineOn*camPos*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class IdleThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust",1.2589254,1,200};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",1.1220185,1,250};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust",1.1220185,1,280};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",1.1220185,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",1.1220185,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",1.0,1,400};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust",1.2589254,1,450};
				frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle",1.2589254,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_acceleration",1.4125376,1};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1",1.4125376,1};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1",1.2589254,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1",1.2589254,1};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1",1.2589254,1};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1",1.2589254,1};
				frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust",1.2589254,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust",1.4125376,1};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust",1.2589254,1};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust",1.2589254,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust",1.1220185,1};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust",1.1220185,1};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust",1.1220185,1};
				frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class RainIn
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",1.4125376,1};
				frequency = 1;
				volume = "rain*(1-camPos)";
			};
			class RainExt
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss",1.4125376,1};
				frequency = 1;
				volume = "rain*camPos";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",1.1220185,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.0,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.4125376,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.4125376,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.4125376,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.4125376,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",1.1220185,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",1.1220185,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",1.1220185,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",1.0,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",3.1622777,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		
		
		
		
		/*class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.398107,1,150};
				frequency = "0.95 + ((rpm/4500) factor[(800/4500),(1400/4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/4500) factor[(600/4500),(1100/4500)]) * ((rpm/4500) factor[(1800/4500),(1300/4500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.446684,1,250};
				frequency = "0.9 + ((rpm/4500) factor[(1400/4500),(2100/4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/4500) factor[(1400/4500),(1800/4500)]) * ((rpm/4500) factor[(2300/4500),(2000/4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.562341,1,300};
				frequency = "0.9 + ((rpm/4500) factor[(2100/4500),(2800/4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/4500) factor[(1900/4500),(2300/4500)]) * ((rpm/4500) factor[(3000/4500),(2500/4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.707946,1,350};
				frequency = "0.9 + ((rpm/4500) factor[(2800/4500),(3600/4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/4500) factor[(2500/4500),(3100/4500)]) * ((rpm/4500) factor[(4500/4500),(3700/4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400};
				frequency = "0.95 + ((rpm/4500) factor[(3600/4500),(4500/4500)])*0.1";
				volume = "engineOn*camPos*((rpm/4500) factor[(3800/4500),(4500/4500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.562341,1,200};
				frequency = "0.95 + ((rpm/4500) factor[(800/4500),(1400/4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(600/4500),(1100/4500)]) * ((rpm/4500) factor[(1800/4500),(1300/4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.707946,1,350};
				frequency = "0.9 + ((rpm/4500) factor[(1400/4500),(2100/4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(1400/4500),(1800/4500)]) * ((rpm/4500) factor[(2300/4500),(2000/4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.891251,1,400};
				frequency = "0.9 + ((rpm/4500) factor[(2100/4500),(2800/4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(1900/4500),(2300/4500)]) * ((rpm/4500) factor[(3000/4500),(2500/4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.122018,1,425};
				frequency = "0.9 + ((rpm/4500) factor[(2800/4500),(3600/4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(2500/4500),(3100/4500)]) * ((rpm/4500) factor[(4500/4500),(3700/4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.258925,1,450};
				frequency = "0.95 + ((rpm/4500) factor[(3600/4500),(4500/4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4500) factor[(3800/4500),(4500/4500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.251189,1};
				frequency = "0.95 + ((rpm/4500) factor[(800/4500),(1400/4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/4500) factor[(600/4500),(1100/4500)]) * ((rpm/4500) factor[(1800/4500),(1300/4500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.316228,1};
				frequency = "0.9 + ((rpm/4500) factor[(1400/4500),(2100/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4500) factor[(1400/4500),(1800/4500)]) * ((rpm/4500) factor[(2300/4500),(2000/4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.398107,1};
				frequency = "0.9 + ((rpm/4500) factor[(2100/4500),(2800/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4500) factor[(1900/4500),(2300/4500)]) * ((rpm/4500) factor[(3000/4500),(2500/4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.501187,1};
				frequency = "0.9 + ((rpm/4500) factor[(2800/4500),(3600/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4500) factor[(2500/4500),(3100/4500)]) * ((rpm/4500) factor[(4500/4500),(3700/4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.630957,1};
				frequency = "0.95 + ((rpm/4500) factor[(3600/4500),(4500/4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/4500) factor[(3800/4500),(4500/4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.354813,1};
				frequency = "0.95 + ((rpm/4500) factor[(800/4500),(1400/4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(600/4500),(1100/4500)]) * ((rpm/4500) factor[(1800/4500),(1300/4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.446684,1};
				frequency = "0.9 + ((rpm/4500) factor[(1400/4500),(2100/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(1400/4500),(1800/4500)]) * ((rpm/4500) factor[(2300/4500),(2000/4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.562341,1};
				frequency = "0.9 + ((rpm/4500) factor[(2100/4500),(2800/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(1900/4500),(2300/4500)]) * ((rpm/4500) factor[(3000/4500),(2500/4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.707946,1};
				frequency = "0.9 + ((rpm/4500) factor[(2800/4500),(3600/4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4500) factor[(2500/4500),(3100/4500)]) * ((rpm/4500) factor[(4500/4500),(3700/4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.794328,1};
				frequency = "0.95 + ((rpm/4500) factor[(3600/4500),(4500/4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4500) factor[(3800/4500),(4500/4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.562341,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.707946,1,60};
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
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.316228,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.316228,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};*/
		
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
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
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		supplyRadius = 2;
		maximumLoad = 10416.842;
		transportMaxWeapons = 100;
		transportMaxMagazines = 2000;
		transportMaxBackpacks = 100;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		class transportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		hiddenSelections[] = {"camo01","camo2","camo3","rn1","rn2","rn3","rn4"};
		hiddenSelectionsTextures[] = {
			"sg_vtn_vehicles\data\uaz_poverh_co.paa",
			"sg_vtn_vehicles\data\vtn_empty.paa",
			"sg_vtn_vehicles\data\vtn_empty.paa",
			
			"sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
		class textureSources
		{
			class Standard
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_camo_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class Desert
			{
				displayName = "$STR_DN_VTN_UAZ_SAND";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_desert_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class DesertCamo
			{
				displayName = "$STR_DN_VTN_UAZ_SAND_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_desert1_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class TIASF
			{
				displayName = "$STR_DN_VTN_MILFOR_TIASF";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_sf_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class CIV
			{
				displayName = "$STR_DN_VTN_UAZ_BLUE";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_gr_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			textureList[] = {"Standard",1,"Woodland",1,"Desert",1,"DesertCamo",1,"TIASF",1,"CIV",1};
		};
	};
	class VTN_UAZ3151: VTN_UAZ469_BASE
	{
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ3151_EMR";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz3151_emr_preview.paa";
		scope = 2;		
		side = 2;	
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		class VTN_EEH_INIT
		{
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
			regnumbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\number_reg.sqs"";";
		};
		hiddenSelections[] = {"camo01","camo2","camo3","rn1","rn2","rn3","rn4"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","\sg_vtn_vehicles\data\vtn_empty.paa","\sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
	};
	
	/*
	
	class VTN_UAZ3151_OPEN_BASE: VTN_UAZ469_BASE
	{
		forceInGarage = 0;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ3151_OPEN_BASE";
		scope = 0;
		side = 0;
		displayName = "$STR_DN_VTN_UAZ3151_OPEN";
		picture = "\sg_vtn_vehicles\ico\ico_uaz_open_ca.paa";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_open_ca.paa";
		attenuationEffectType = "OpenCarAttenuation";
		transportSoldier = 6;
		cargoIsCoDriver = 0;
		cargoPreciseGetInOut[] = {1,1,1,1,1,1};
		cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo03","UAZ_Cargo04","UAZ_Cargo05","UAZ_Cargo06"};
		cargoGetInAction[] = {"UAZ_Cargo01_Zalez","UAZ_Cargo02_Zalez","UAZ_Cargo03_Zalez","UAZ_Cargo04_Zalez","UAZ_Cargo05_Zalez","UAZ_Cargo06_Zalez"};
		cargoGetOutAction[] = {"UAZ_Cargo01_Vilez","UAZ_Cargo02_Vilez","UAZ_Cargo03_Vilez","UAZ_Cargo04_Vilez","UAZ_Cargo05_Vilez","UAZ_Cargo06_Vilez"};
		memoryPointsGetInCargo[] = {"pos_cargo01","pos_cargo02","pos_cargo03","pos_cargo04","pos_cargo05","pos_cargo06"};
		memoryPointsGetInCargoDir[] = {"pos_cargo01_dir","pos_cargo02_dir","pos_cargo03_dir","pos_cargo04_dir","pos_cargo05_dir","pos_cargo06_dir"};
		memoryPointsGetInCargoPrecise[] = {"pos_cargo01","pos_cargo02","pos_cargo03","pos_cargo04","pos_cargo05","pos_cargo06"};
		cargoProxyIndexes[] = {1,2,3,4,5,6};
		getInProxyOrder[] = {1,2,3,4,5,6};
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		class AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HideTent
			{
				displayName = "$STR_UAZ_AnimationSources_HideTent";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				mass = -20;
			};
			class maskirovka
			{
				displayName = "$STR_DN_VTN_CAR_SMU13";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -0.5;
			};
			class HideDoor_1_1v: HideTent
			{
				displayName = "$STR_UAZ_AnimationSources_HideWindows";
				selection = "Door_1_1v";
			};
			class HideDoor_1_2v: HideDoor_1_1v
			{
				selection = "Door_1_2v";
			};
			class HideDoor_2_1v: HideDoor_1_2v
			{
				selection = "Door_2_1v";
			};
			class HideDoor_2_2v: HideDoor_2_1v
			{
				selection = "Door_2_2v";
			};
			class Door_1_1
			{
				source = "user";
				type = "rotation";
				animPeriod = 0.5;
				selection = "Door_1_1";
				axis = "axis_Door_1_1";
				angle0 = 0;
				angle1 = "rad -90";
				memory = 1;
				minValue = 0;
				maxValue = 1;
			};
			class Door_2_1: Door_1_1
			{
				selection = "Door_2_1";
				axis = "axis_Door_2_1";
			};
			class Door_1_2: Door_2_1
			{
				selection = "Door_1_2";
				axis = "axis_Door_1_2";
				angle1 = "rad 80";
			};
			class Door_2_2: Door_1_2
			{
				selection = "Door_2_2";
				axis = "axis_Door_2_2";
			};
			class Front_window: Door_2_2
			{
				displayName = "$STR_SLOJIT_OKNO";
				selection = "front_window";
				axis = "front_window_axis";
				initPhase = 1;
			};
			class Hood: Door_2_2
			{
				selection = "hood";
				axis = "axis_hood";
				angle0 = 0;
				angle1 = "rad 80";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
			class HitGlass5: HitGlass1
			{
				hitpoint = "HitGlass5";
			};
			class HitGlass6: HitGlass1
			{
				hitpoint = "HitGlass6";
			};
			class HitGlass7: HitGlass1
			{
				hitpoint = "HitGlass7";
			};
		};
		class SimpleObject
		{
			animate[] = {{"HideTent",1},{"maskirovka",1},{"HideDoor_1_1v",1},{"HideDoor_1_2v",1},{"HideDoor_2_1v",1},{"HideDoor_2_1v",1},{"Front_window",1}};
		};
		class UserActions: UserActions
		{
			class SlojitOkno
			{
				displayName = "$STR_SLOJIT_OKNO";
				position = "front_window_axis";
				showwindow = 0;
				radius = 3.5;
				onlyForPlayer = "false";
				condition = "(this animationPhase ""Front_window"" < 0.1) && (this animationPhase ""hood"" < 0.1) && (player == driver this)";
				statement = "this animate [""Front_window"", 1]";
			};
			class PodnatOkno: SlojitOkno
			{
				displayName = "$STR_PODNAT_OKNO";
				condition = "(this animationPhase ""Front_window"" > 0.9) && (player == driver this)";
				statement = "this animate [""Front_window"", 0]";
			};
		};
	};
	
	class VTN_UAZ3151_OPEN: VTN_UAZ3151_OPEN_BASE
	{
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ3151_OPEN_EMR";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz3151_open_emr_preview.paa";
		scope = 2;
		side = 0;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		class VTN_EEH_INIT
		{
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
			regnumbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\number_reg.sqs"";";
		};
		hiddenSelections[] = {"camo01","camo2","camo3","rn1","rn2","rn3","rn4"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
	};
	
	*/
	
	
	class VTN_UAZ469_KORD_BASE: VTN_UAZ469_BASE
	{
		scope = 0;
		side = 2;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_KORD_BASE";
		displayName = "$STR_DN_VTN_UAZ469_KORD";
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		maxSpeed = 108;
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		
		model = "sg_vtn_vehicles\uaz_kord.p3d";
		
		picture = "\sg_vtn_vehicles\ico\ico_uaz_open_ca.paa";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_open_ca.paa";
		attenuationEffectType = "OpenCarAttenuation";
		transportSoldier = 0;
		driverCompartments = "Compartment1";
		class Damage
		{
			tex[] = {};
			mat[] = {
				"sg_vtn_vehicles\data\uaz_skla_lob.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla_in.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_br_metal.rvmat","sg_vtn_vehicles\data\uaz_br_damage.rvmat","sg_vtn_vehicles\data\uaz_br_destruct.rvmat","sg_vtn_vehicles\data\uaz_main_metal.rvmat","sg_vtn_vehicles\data\uaz_main_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_other_metal.rvmat","sg_vtn_vehicles\data\uaz_other_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat"};
		};
		cargoIsCoDriver = 0;
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4,5};
		cargoPreciseGetInOut[] = {1,1,1,1,1};
		class CargoTurret;
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HideTent
			{
				displayName = "";
				animPeriod = 0;
				initPhase = 0;
				source = "";
			};
			class maskirovka
			{
				displayName = "$STR_DN_VTN_CAR_SMU13";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -0.5;
			};
			class Door_3_1: Door_1_2
			{
				selection = "Door_3_1";
				axis = "axis_Door_3_1";
			};
			class HideDoor_1_1v: HideTent
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_1_2v: HideDoor_1_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_1v: HideDoor_1_2v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_2v: HideDoor_2_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class Front_window: Door_2_2
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_VTN_kord";
			};
			class trigger1
			{
				source = "trigger";
				weapon = "SG_VTN_kord";
			};
			class cover1
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class cover2
			{
				source = "reload";
				weapon = "SG_VTN_kord";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_VTN_kord";
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "SG_VTN_kord";
			};
			class Barrel_recoil
			{
				source = "Reload";
				weapon = "SG_VTN_kord";
			};
			class shield
			{
				displayName = "";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				mass = 0;
			};
			class shield1
			{
				displayName = "";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				mass = 0;
			};
		};
		class SimpleObject
		{
			animate[] = {{"maskirovka",1}};
		};
		hiddenSelections[] = {"camo01","camo2","camo3","rn1","rn2","rn3","rn4"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
		class textureSources
		{
			class Standard
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_camo_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class Desert
			{
				displayName = "$STR_DN_VTN_UAZ_SAND";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_desert_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class DesertCamo
			{
				displayName = "$STR_DN_VTN_UAZ_SAND_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_desert1_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class TIASF
			{
				displayName = "$STR_DN_VTN_MILFOR_TIASF";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_sf_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			class CIV
			{
				displayName = "$STR_DN_VTN_UAZ_BLUE";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\uaz_poverh_gr_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
			};
			textureList[] = {"Standard",1,"Woodland",1,"Desert",1,"DesertCamo",1,"TIASF",1,"CIV",1};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"SG_VTN_kord"};
				magazines[] = {"rhs_mag_127x108mm_50"};
				memoryPointGunnerOptics = "eye";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscOptics_Offroad_01";
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				gunnerCompartments = "Compartment1";
				minElev = -14;
				maxElev = 14;
				initElev = 7;
				minTurn = -14;
				maxTurn = 14;
				gunnerAction = "UAZ_Gunner";
				gunnerinAction = "UAZ_Cargo01_Zalez";
				gunnerHasFlares = 1;
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				attenuationEffectType = "OpenCarAttenuation";
				insideSoundCoef = 1;
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsModel = "";
				viewGunnerInExternal = 1;
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				gunnerLeftLegAnimName = "leg_L";
				gunnerRightLegAnimName = "leg_R";
				gunnerOutOpticsEffect[] = {};
				gunnerForceOptics = 0;
				class ViewOptics: RCWSOptics
				{
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo01";
				memoryPointsGetInGunnerDir = "pos_cargo01_dir";
				gunnerGetInAction = "UAZ_Cargo01_Zalez";
				gunnerGetOutAction = "UAZ_Cargo01_Vilez";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_1";
				gunnerCompartments = "Compartment1";
				maxElev = 60;
				minElev = -15;
				maxTurn = 75;
				minTurn = -75;
				proxyIndex = 1;
				selectionFireAnim = "";
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "Door_3_1";
				usepip = 0;
				gunnerInAction = "passenger_apc_narrow_generic02";
				preciseGetInout = 1;
				startEngine = 0;
				commanding = -1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_4";
				gunnerAction = "passenger_inside_2";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 2;
				maxElev = 23;
				maxTurn = 45;
				minTurn = -85;
				minElev = -35;
			};
			class CargoTurret_03: CargoTurret
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_5";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment1";
				memoryPointsGetInGunner = "pos_cargo04";
				memoryPointsGetInGunnerDir = "pos_cargo04_dir";
				proxyIndex = 3;
				maxElev = 23;
				maxTurn = 85;
				minTurn = 45;
				minElev = -35;
			};
		};
		class UserActions
		{
			class ZakritDver_1_1
			{
				displayName = "$STR_ZAKR_DVER";
				displayNameDefault = "<img image=""\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa"" size=""2.5"" shadow=""true"" />";
				priority = 1.5;
				textToolTip = "$STR_ZAKR_DVER";
				position = "door_1_1_ruchka";
				radius = 0.9;
				radiusView = 0.2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "(this animationPhase ""Door_1_1"" > 0.5) && (player == player)";
				statement = "this animate [""Door_1_1"", 0]";
			};
			class ZakritDver_1_2: ZakritDver_1_1
			{
				position = "door_1_2_ruchka";
				condition = "(this animationPhase ""Door_1_2"" > 0.5) && (player == player)";
				statement = "this animate [""Door_1_2"", 0]";
			};
		};
	};
	
	class VTN_UAZ469_KORD: VTN_UAZ469_KORD_BASE
	{
		scope = 2;
		side = 2;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_KORD_EMR_RU";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz469_kord_emr_ru_preview.paa";
		
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		
		class VTN_EEH_INIT
		{
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
			regnumbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\number_reg.sqs"";";
		};
		hiddenSelections[] = {"camo01","camo2","camo3","rn1","rn2","rn3","rn4"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\reg_znak\rn01_ca.paa","sg_vtn_vehicles\data\reg_znak\rn02_ca.paa","sg_vtn_vehicles\data\reg_znak\rn03_ca.paa","sg_vtn_vehicles\data\reg_znak\rn04_ca.paa"};
		class TransportMagazines
		{
			class _xx_rhs_mag_127x108mm_50
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 5;
			};
		};
	};
	
	
	
	
	
	class VTN_UAZ469_NSVS: VTN_UAZ469_BASE
	{
		forceInGarage = 1;
		scope = 2;
		side = 2;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_NSVS_FLR";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz469_nsvs_ins_ru_preview.paa";
		displayName = "$STR_DN_VTN_UAZ469_NSVS";
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		maxSpeed = 108;
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		model = "sg_vtn_vehicles\uaz_nsvs.p3d";
		picture = "\sg_vtn_vehicles\ico\ico_uaz_open_ca.paa";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_open_ca.paa";
		attenuationEffectType = "OpenCarAttenuation";
		transportSoldier = 0;
		driverCompartments = "Compartment1";
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_vtn_vehicles\data\uaz_skla_lob.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla_in.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_br_metal.rvmat","sg_vtn_vehicles\data\uaz_br_damage.rvmat","sg_vtn_vehicles\data\uaz_br_destruct.rvmat","sg_vtn_vehicles\data\uaz_main_metal.rvmat","sg_vtn_vehicles\data\uaz_main_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_other_metal.rvmat","sg_vtn_vehicles\data\uaz_other_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat"};
		};
		cargoIsCoDriver = 0;
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4,5};
		cargoPreciseGetInOut[] = {1,1,1,1,1};
		class CargoTurret;
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HideTent
			{
				displayName = "";
				animPeriod = 0;
				initPhase = 0;
				source = "";
			};
			class HideDoor_1_1v: HideTent
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_1_2v: HideDoor_1_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_1v: HideDoor_1_2v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_2v: HideDoor_2_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class Front_window: Door_2_2
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class Door_3_1: Door_1_2
			{
				selection = "Door_3_1";
				axis = "axis_Door_3_1";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_nsv";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_rhs_weap_nsv";
			};
			class trigger1
			{
				source = "trigger";
				weapon = "BN_rhs_weap_nsv";
			};
			class cover1
			{
				source = "reload";
				weapon = "BN_rhs_weap_nsv";
			};
			class cover2
			{
				source = "reload";
				weapon = "BN_rhs_weap_nsv";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_rhs_weap_nsv";
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "BN_rhs_weap_nsv";
			};
			class Barrel_recoil
			{
				source = "Reload";
				weapon = "BN_rhs_weap_nsv";
			};
			class shield
			{
				displayName = "$STR_DN_SHIELD";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -20;
			};
			class shield1
			{
				displayName = "$STR_DN_SHIELD_MG";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -20;
			};
		};
		class SimpleObject
		{
			animate[] = {{"shield",1},{"shield1",1}};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"BN_rhs_weap_nsv"};
				magazines[] = {"rhs_mag_127x108mm_50"};
				memoryPointGunnerOptics = "eye";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscOptics_Offroad_01";
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				gunnerCompartments = "Compartment2";
				minElev = -5;
				maxElev = 15;
				initElev = 7;
				minTurn = -14;
				maxTurn = 14;
				gunnerAction = "UAZ_Gunner";
				gunnerinAction = "UAZ_Cargo01_Zalez";
				gunnerHasFlares = 1;
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos_cargo06";
				memoryPointsGetInGunnerDir = "pos_cargo06_dir";
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				attenuationEffectType = "OpenCarAttenuation";
				insideSoundCoef = 1;
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsModel = "";
				viewGunnerInExternal = 1;
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				gunnerLeftLegAnimName = "leg_L";
				gunnerRightLegAnimName = "leg_R";
				gunnerOutOpticsEffect[] = {};
				gunnerForceOptics = 0;
				class ViewOptics: RCWSOptics
				{
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo01";
				memoryPointsGetInGunnerDir = "pos_cargo01_dir";
				gunnerGetInAction = "UAZ_Cargo01_Zalez";
				gunnerGetOutAction = "UAZ_Cargo01_Vilez";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_1";
				gunnerCompartments = "Compartment1";
				maxElev = 11;
				minElev = -20;
				maxTurn = -35;
				minTurn = -75;
				proxyIndex = 1;
				selectionFireAnim = "";
				isPersonTurret = 1;
				ejectDeadGunner = 0;
				enabledByAnimationSource = "Door_3_1";
				usepip = 0;
				gunnerInAction = "passenger_apc_narrow_generic02";
				preciseGetInout = 1;
				startEngine = 0;
				commanding = -1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo02";
				memoryPointsGetInGunnerDir = "pos_cargo02_dir";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				proxyIndex = 2;
				maxElev = 23;
				minElev = -35;
				maxTurn = 75;
				minTurn = -45;
				selectionFireAnim = "";
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_3";
				memoryPointsGetInGunner = "pos_cargo03";
				memoryPointsGetInGunnerDir = "pos_cargo03_dir";
				gunnerCompartments = "Compartment2";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				proxyIndex = 3;
				maxElev = 23;
				minElev = -35;
				maxTurn = 55;
				minTurn = -65;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_4";
				gunnerAction = "passenger_inside_2";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo04";
				memoryPointsGetInGunnerDir = "pos_cargo04_dir";
				proxyIndex = 4;
				maxElev = 23;
				maxTurn = 85;
				minTurn = 45;
				minElev = -35;
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_5";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_inside_2";
				gunnerCompartments = "Compartment2";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 5;
				maxElev = 23;
				maxTurn = 45;
				minTurn = -85;
				minElev = -35;
			};
		};
		class VTN_EEH_INIT
		{
			parts_init = "(_this select 0) animate [""Door_3_1"", 0]";
			numbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\logotype.sqs"";";
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
			regnumbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\number_reg.sqs"";";
		};
		hiddenSelections[] = {"n1","camo01","rn1","rn2","rn3","rn4","platenumber"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
		class textureSources
		{
			class Standard
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_camo_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class Desert
			{
				displayName = "$STR_DN_VTN_UAZ_SAND";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_desert_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class DesertCamo
			{
				displayName = "$STR_DN_VTN_UAZ_SAND_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_desert1_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class TIASF
			{
				displayName = "$STR_DN_VTN_MILFOR_TIASF";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_sf_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class CIV
			{
				displayName = "$STR_DN_VTN_UAZ_BLUE";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_gr_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			textureList[] = {"Standard",1,"Woodland",1,"Desert",1,"DesertCamo",1,"TIASF",1,"CIV",1};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_127x108mm_50
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 3;
			};
		};
		class TransportWeapons{};
	};
	
	class VTN_UAZ469_PKMS: VTN_UAZ469_NSVS
	{
		forceInGarage = 1;
		scope = 2;
		side = 2;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_PKM_FLR";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz469_pkms_ins_ru_preview.paa";
		displayName = "$STR_DN_VTN_UAZ469_PKM";
		
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		
		model = "sg_vtn_vehicles\uaz_PKM.p3d";
		picture = "\sg_vtn_vehicles\ico\ico_uaz_open_ca.paa";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_open_ca.paa";
		attenuationEffectType = "OpenCarAttenuation";
		transportSoldier = 0;
		driverCompartments = "Compartment1";
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		cargoIsCoDriver = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_vtn_vehicles\data\uaz_skla_lob.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla_in.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_br_metal.rvmat","sg_vtn_vehicles\data\uaz_br_damage.rvmat","sg_vtn_vehicles\data\uaz_br_destruct.rvmat","sg_vtn_vehicles\data\uaz_main_metal.rvmat","sg_vtn_vehicles\data\uaz_main_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_other_metal.rvmat","sg_vtn_vehicles\data\uaz_other_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat"};
		};
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4,5};
		cargoPreciseGetInOut[] = {1,1,1,1,1};
		class CargoTurret;
		class VTN_EEH_INIT
		{
			parts_init = "(_this select 0) animate [""Door_3_1"", 0]";
			numbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\logotype.sqs"";";
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
		};
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class ReloadAnim
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
			class Door_3_1: Door_1_2
			{
				selection = "Door_3_1";
				axis = "axis_Door_3_1";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "SG_VTN_pkm";
			};
			class trigger1
			{
				source = "trigger";
				weapon = "SG_VTN_pkm";
			};
			class cover1
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
			class cover2
			{
				source = "reload";
				weapon = "SG_VTN_pkm";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "SG_VTN_pkm";
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "SG_VTN_pkm";
			};
			class Barrel_recoil
			{
				source = "Reload";
				weapon = "SG_VTN_pkm";
			};
			class shield
			{
				displayName = "";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				mass = 0;
			};
			class shield1
			{
				displayName = "$STR_DN_SHIELD_MG";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -20;
			};
		};
		class SimpleObject
		{
			animate[] = {{"shield1",1}};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"SG_VTN_pkm"};
				magazines[] = {"rhs_mag_762x54mm_250"};
				turretInfoType = "RscOptics_Offroad_01";
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				gunnerCompartments = "Compartment1";
				minElev = -10;
				maxElev = 15;
				initElev = 45;
				minTurn = -16;
				maxTurn = 16;
				gunnerAction = "UAZ_GunnerPKM";
				gunnerinAction = "UAZ_Cargo01_Zalez";
				gunnerHasFlares = 1;
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos_cargo06";
				memoryPointsGetInGunnerDir = "pos_cargo06_dir";
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				memoryPointGunnerOptics = "eye";
				castGunnerShadow = 1;
				attenuationEffectType = "OpenCarAttenuation";
				insideSoundCoef = 1;
				gunnerOpticsEffect[] = {};
				gunnerOutOpticsModel = "";
				viewGunnerInExternal = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				gunnerLeftLegAnimName = "leg_L";
				gunnerRightLegAnimName = "leg_R";
				gunnerOutOpticsEffect[] = {};
				gunnerForceOptics = 0;
				class ViewOptics: RCWSOptics
				{
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo01";
				memoryPointsGetInGunnerDir = "pos_cargo01_dir";
				gunnerGetInAction = "UAZ_Cargo01_Zalez";
				gunnerGetOutAction = "UAZ_Cargo01_Vilez";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_1";
				gunnerCompartments = "Compartment1";
				maxElev = 11;
				minElev = -20;
				maxTurn = -35;
				minTurn = -75;
				proxyIndex = 1;
				isPersonTurret = 1;
				selectionFireAnim = "";
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerInAction = "passenger_apc_narrow_generic02";
				preciseGetInout = 1;
				startEngine = 0;
				commanding = -1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_2";
				memoryPointsGetInGunner = "pos_cargo02";
				memoryPointsGetInGunnerDir = "pos_cargo02_dir";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerCompartments = "Compartment1";
				proxyIndex = 2;
				maxElev = 23;
				minElev = -35;
				maxTurn = 75;
				minTurn = -45;
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_3";
				memoryPointsGetInGunner = "pos_cargo03";
				memoryPointsGetInGunnerDir = "pos_cargo03_dir";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				proxyIndex = 3;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				minElev = -35;
				maxTurn = 55;
				minTurn = -65;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_4";
				gunnerAction = "passenger_inside_2";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos_cargo04";
				memoryPointsGetInGunnerDir = "pos_cargo04_dir";
				proxyIndex = 4;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				maxTurn = 85;
				minTurn = 45;
				minElev = -35;
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_5";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 5;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				maxTurn = 45;
				minTurn = -85;
				minElev = -35;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_762x54mm_250
			{
				magazine = "rhs_mag_762x54mm_250";
				count = 4;
			};
		};
		class TransportWeapons
		{};
	};
	class VTN_UAZ469_UNARMED: VTN_UAZ469_BASE
	{
		forceInGarage = 1;
		scope = 2;
		side = 2;
		author = "VTN MOD";
		DLC = "VTN";
		_generalMacro = "VTN_UAZ469_INS_UNARMED";
		editorPreview = "\sg_vtn_vehicles\ico\vtn_uaz469_ins_unarmed_preview.paa";
		displayName = "$STR_DN_VTN_UAZ469_INS_UNARMED";
		
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		
		model = "sg_vtn_vehicles\uaz_no.p3d";
		picture = "\sg_vtn_vehicles\ico\ico_uaz_open_ca.paa";
		Icon = "\sg_vtn_vehicles\ico\map_ico_uaz_open_ca.paa";
		attenuationEffectType = "OpenCarAttenuation";
		transportSoldier = 0;
		driverCompartments = "Compartment1";
		cargoProxyIndexes[] = {};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8};
		cargoPreciseGetInOut[] = {1,1,1,1,1,1,1,1};
		vehicleClass = "Car";
		editorSubcategory = "EdSubcat_Cars";
		hiddenSelections[] = {"n1","camo01","rn1","rn2","rn3","rn4","platenumber"};
		hiddenSelectionsTextures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
		class textureSources
		{
			class Standard
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_UAZ_GREEN_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_camo_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class Desert
			{
				displayName = "$STR_DN_VTN_UAZ_SAND";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_desert_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class DesertCamo
			{
				displayName = "$STR_DN_VTN_UAZ_SAND_CAMO";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_desert1_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class TIASF
			{
				displayName = "$STR_DN_VTN_MILFOR_TIASF";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_sf_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			class CIV
			{
				displayName = "$STR_DN_VTN_UAZ_BLUE";
				author = "VTN MOD";
				textures[] = {"sg_vtn_vehicles\data\n1\n1_ca.paa","sg_vtn_vehicles\data\uaz_poverh_gr_co.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa","sg_vtn_vehicles\data\vtn_empty.paa"};
			};
			textureList[] = {"Standard",1,"Woodland",1,"Desert",1,"DesertCamo",1,"TIASF",1,"CIV",1};
		};
		cargoIsCoDriver = 0;
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_vtn_vehicles\data\uaz_skla_lob.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_skla_in.rvmat","a3\data_f\glass_veh_damage.rvmat","A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_br_metal.rvmat","sg_vtn_vehicles\data\uaz_br_damage.rvmat","sg_vtn_vehicles\data\uaz_br_destruct.rvmat","sg_vtn_vehicles\data\uaz_main_metal.rvmat","sg_vtn_vehicles\data\uaz_main_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat","sg_vtn_vehicles\data\uaz_other_metal.rvmat","sg_vtn_vehicles\data\uaz_other_metal_damage.rvmat","sg_vtn_vehicles\data\uaz_poverh_metal_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HideTent
			{
				displayName = "";
				animPeriod = 0;
				initPhase = 0;
				source = "";
			};
			class Front_window: Door_2_2
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_1_1v: HideTent
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_1_2v: HideDoor_1_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_1v: HideDoor_1_2v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class HideDoor_2_2v: HideDoor_2_1v
			{
				displayName = "";
				selection = "";
				axis = "";
			};
			class Door_3_1: Door_1_2
			{
				selection = "Door_3_1";
				axis = "axis_Door_3_1";
			};
			class shield
			{
				displayName = "";
				source = "user";
				animPeriod = 0;
				initPhase = 0;
				mass = 0;
			};
			class shield1
			{
				displayName = "";
				source = "user";
				animPeriod = 0;
				initPhase = 1;
				mass = 0;
			};
		};
		class VTN_EEH_INIT
		{
			parts_init = "(_this select 0) animate [""Door_3_1"", 0]";
			numbers_init = "[_this select 0] exec ""\sg_vtn_vehicles\scripts\logotype.sqs"";";
			//audiofx_init = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\x_init.sqf"";";
			doors_preinit = "_this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\uaz_init.sqf"";";
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo01";
				memoryPointsGetInGunnerDir = "pos_cargo01_dir";
				gunnerGetInAction = "UAZ_Cargo01_Zalez";
				gunnerGetOutAction = "UAZ_Cargo01_Vilez";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_1";
				gunnerCompartments = "Compartment1";
				maxElev = 11;
				minElev = -20;
				maxTurn = -35;
				minTurn = -65;
				proxyIndex = 1;
				isPersonTurret = 1;
				selectionFireAnim = "";
				ejectDeadGunner = 0;
				usepip = 0;
				gunnerInAction = "passenger_apc_narrow_generic02";
				preciseGetInout = 1;
				startEngine = 0;
				commanding = -1;
			};
			class CargoTurret_02: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_2";
				memoryPointsGetInGunner = "pos_cargo02";
				memoryPointsGetInGunnerDir = "pos_cargo02_dir";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerCompartments = "Compartment1";
				proxyIndex = 2;
				maxElev = 23;
				minElev = -35;
				maxTurn = 75;
				minTurn = -45;
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_DN_VTN_GUNNERPOS_3";
				memoryPointsGetInGunner = "pos_cargo03";
				memoryPointsGetInGunnerDir = "pos_cargo03_dir";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				proxyIndex = 3;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				minElev = -35;
				maxTurn = 55;
				minTurn = -65;
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_4";
				gunnerAction = "passenger_inside_2";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos_cargo04";
				memoryPointsGetInGunnerDir = "pos_cargo04_dir";
				proxyIndex = 4;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				maxTurn = 85;
				minTurn = 45;
				minElev = -35;
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_5";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_inside_2";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 5;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				maxTurn = 45;
				minTurn = -85;
				minElev = -35;
			};
			class CargoTurret_06: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_6";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 6;
				gunnerCompartments = "Compartment1";
				maxElev = 43;
				maxTurn = 65;
				minTurn = -65;
				minElev = -35;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
			};
			class CargoTurret_07: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_7";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 7;
				gunnerCompartments = "Compartment1";
				maxElev = 43;
				maxTurn = 45;
				minTurn = -95;
				minElev = -35;
				allowLauncherIn = 0;
				allowLauncherOut = 1;
			};
			class CargoTurret_08: CargoTurret_02
			{
				gunnerName = "$STR_DN_VTN_GUNNERPOS_8";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				gunnerAction = "passenger_SDV";
				memoryPointsGetInGunner = "pos_cargo05";
				memoryPointsGetInGunnerDir = "pos_cargo05_dir";
				proxyIndex = 8;
				gunnerCompartments = "Compartment1";
				maxElev = 23;
				maxTurn = 45;
				minTurn = -85;
				minElev = -35;
			};
		};
	};
	/*class VTN_UAZ469_INS_UNSARMED: VTN_UAZ469_INS_UNARMED
	{
		forceInGarage = 0;
		scope = 1;
	};*/
	
	
	
	class SG_LAV25_VTN_BASE: APC_Wheeled_01_base_F
	{
		scope = 0;
		author = "VTN MOD";
		normalSpeedForwardCoef = 0.6;
		slowSpeedForwardCoef = 0.45;
		numberPhysicalWheels = 8;
		simulation = "carX";
		maxSpeed = 100;
		wheelCircumference = 3.277;
		dampersBumpCoef = 5;
		brakeIdleSpeed = 1.78;
		terrainCoef = 0.8;
		turnCoef = 3;
		canFloat = 1;
		waterresistance = 5;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.225;
		waterAngularDampingCoef = 10;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 2;
		engineShiftY = 1.05;
		fuelCapacity = 300;
		rudderForceCoef = 1.5;
		rudderForceCoefAtMaxSpeed = 0.3;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		torqueCurve[] = {{"(550/2500)","(0/770)"},{"(1000/2500)","(498/770)"},{"(1250/2500)","(635/770)"},{"(1500/2500)","(746/770)"},{"(1800/2500)","(770/770)"},{"(2000/2500)","(743/770)"},{"(2250/2500)","(712/770)"},{"(2764/2500)","(0/770)"}};
		maxOmega = 268.8;
		enginePower = 275;
		peakTorque = 770;
		idleRPM = 550;
		redRPM = 2500;
		thrustDelay = 0.35;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",8.05,"D2",3.58,"D3",2.09,"D4",1.39,"D5",1};
			TransmissionRatios[] = {"High",3.04};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		changeGearMinEffectivity[] = {0.5,0,0.9,0.9,0.9,0.9,0.9};
		switchTime = 0.35;
		latency = 1.4;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 35;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 15;
		antiRollbarSpeedMax = 65;
		
		armorWheels = 0.05;
		crewVulnerable = 1;
		insideSoundCoef = 0.9;
		outsideSoundFilter = 0;
		radarType = 0;
		driverCanSee = "2+4";
		gunnerCanSee = "2+4";
		commanderCanSee = "2+4";
		showCrewAim = 0;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment1","Compartment1"};
		mapsize = 7;
		DriverAction = "LAV25_Driver_out";
		DriverInAction = "LAV25_Driver";
		CargoAction[] = {"Stryker_Cargo01"};
		hideWeaponsCargo = 0;
		class Library
		{
			libtextdesc = "";
		};
		maximumLoad = 50000;
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		transportMaxBackpacks = 20;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportBackpacks{};
		class TransportItems{};
		
		
		
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
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 13000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.2;
				mMaxDroop = 0.2;
				sprungMass = 1500;
				springStrength = 70000;
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
		transportSoldier = 4;
		getInRadius = 0.85;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		viewDriverInExternal = 1;
		DriverForceOptics = 0;
		hideWeaponsDriver = 1;
		LODDriverOpticsIn = 1000;
		canHidedriver = 1;
		driverOpticsModel = "\sg_vtn_vehicles\data\Driver_opt";
		memoryPointSupply = "InventoryPoint";
		supplyRadius = 0.555;
		cargoProxyIndexes[] = {1,2,3,4};
		getInProxyOrder[] = {1,2,3,4,5,6};
		LODTurnedIn = 1100;
		LODTurnedOut = 1;
		LODDriverTurnedOut = 1;
		unitInfoType = "RscUnitInfo";
		class MFD{};
		class Components
		{
			class AICarSteeringComponent
			{
				steeringPIDWeights[] = {2.9,0.1,0.2};
				speedPIDWeights[] = {0.7,0.2,0};
				convoyPIDWeights[] = {1,0.01,0.01};
				doRemapSpeed = 1;
				remapSpeedRange[] = {30,70};
				remapSpeedScalar[] = {1,0.35};
				doPredictForward = 1;
				predictForwardRange[] = {1,20};
				steerAheadSaturation[] = {0.01,0.4};
				speedPredictionMethod = 2;
				wheelAngleCoef = 0.7;
				forwardAngleCoef = 0.7;
				steeringAngleCoef = 1;
				differenceAngleCoef = 0.4;
				stuckMaxTime = 3;
				allowOvertaking = 1;
				allowDrifting = 0;
				allowCollisionAvoidance = 1;
				maxWheelAngleDiff = 0.2616;
				minSpeedToKeep = 0.1;
				commandTurnFactor = 1;
			};
			class TransportCountermeasuresComponent{};
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -50;
			maxAngleX = 50;
			initAngleY = 0;
			minAngleY = -140;
			maxAngleY = 140;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {};
		};
		class Viewcargo
		{
			initAngleX = 0;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -140;
			maxAngleY = 140;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {};
		};
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = "0.75";
			minFov = "0.75";
			maxFov = "0.75";
			visionMode[] = {"Normal","NVG"};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components{};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components{};
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minOutElev = -30;
						maxOutElev = 60;
						initOutElev = 0;
						minOutTurn = -100;
						maxOutTurn = 100;
						initOutTurn = 0;
						gunBeg = "usti hlavne";
						gunEnd = "konec hlavne";
						body = "MainTurret";
						gun = "MainGun";
						minElev = -40;
						maxElev = 40;
						initElev = 0;
						minTurn = -100;
						maxTurn = 100;
						initTurn = 0;
						primaryGunner = 0;
						primaryObserver = 1;
						class ViewGunner
						{
							initAngleX = 0;
							minAngleX = -40;
							maxAngleX = 40;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal"};
						};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal","NVG"};
						};
						startEngine = 0;
						LODTurnedIn = 1000;
						LODTurnedOut = 1;
						hideWeaponsCommander = 0;
						gunnerCompartments = "Compartment1";
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag","SmokeLauncherMag"};
						soundServo[] = {"A3\sounds_f\dummysound",0.01,1,30};
						soundServoVertical[] = {"A3\sounds_f\dummysound",0.01,1,30};
						soundElevation[] = {"A3\sounds_f\dummysound",0.01,1,30};
						gunnerInAction = "LAV25_Commander";
						gunnerAction = "Commander_MBT_01_cannon_F_out";
						personTurretAction = "vehicle_turnout_2";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerOpticsModel = "";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						hideWeaponsgunner = 1;
						class OpticsIn
						{
							class m36th_day_7x
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 7";
								minFov = "0.46 / 7";
								maxFov = "0.46 / 7";
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_2_5X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 2.5";
								minFov = "0.46 / 2.5";
								maxFov = "0.46 / 2.5";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_wf";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_10X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 10";
								minFov = "0.46 / 10";
								maxFov = "0.46 / 10";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_20X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 20";
								minFov = "0.46 / 20";
								maxFov = "0.46 / 20";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
								gunnerOpticsEffect[] = {};
							};
						};
						turretInfoType = "RscWeaponZeroing";
						isPersonTurret = 1;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						gunnerForceOptics = 0;
					};
				};
				memoryPointGun = "Usti hlavne1";
				//turretInfoType = "RscWeaponZeroing";
				turretInfoType = "CUP_RscOptics_gunner_TNBECO";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "MainTurret";
				gun = "MainGun";
				hideWeaponsgunner = 1;
				isPersonTurret = 0;
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				weapons[] = {"VTN_M242_veh","VTN_M240_coax"};
				magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS"};
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				soundElevation[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				minElev = -5;
				initElev = 0;
				maxElev = 30;
				minOutElev = -30;
				maxOutElev = 60;
				minOutTurn = -110;
				maxOutTurn = 110;
				initOutTurn = 0;
				gunnerCompartments = "Compartment1";
				LODTurnedIn = 1000;
				LODTurnedOut = 1;
				gunnerAction = "LAV25_Gunner_out";
				personTurretAction = "vehicle_turnout_2";
				gunnerInAction = "LAV25_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				animationSourceStickX = "turret_control_x";
				animationSourceStickY = "turret_control_y";
				gunnerRightHandAnimName = "turret_control";
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				maxHorizontalRotSpeed = 0.6;
				maxVerticalRotSpeed = 0.13;
				startEngine = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {"Normal"};
				};
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "";
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				class OpticsIn
				{
					class m36th_day_7x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 7";
						minFov = "0.46 / 7";
						maxFov = "0.46 / 7";
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_2_5X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 2.5";
						minFov = "0.46 / 2.5";
						maxFov = "0.46 / 2.5";
						thermalmode[] = {0,1};
						visionMode[] = {"TI"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_wf";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_10X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 10";
						minFov = "0.46 / 10";
						maxFov = "0.46 / 10";
						thermalmode[] = {0,1};
						visionMode[] = {"TI"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_20X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 20";
						minFov = "0.46 / 20";
						maxFov = "0.46 / 20";
						thermalmode[] = {0,1};
						visionMode[] = {"TI"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
						gunnerOpticsEffect[] = {};
					};
				};
			};

			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerinAction = "Stryker_Cargo01_V6";
				animationSourceHatch = "Door1";
				isPersonTurret = 1;
				enabledByAnimationSource = "Door1";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo rr";
				memoryPointsGetInGunnerDir = "pos cargo rr dir";
				gunnerName = "$STR_DN_LAV25_RIGHT_BOARD_GUNNER";
				gunnerCompartments = "Compartment1";
				gunnerDoor = "Door1";
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				canHideGunner = 1;
				forceHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				proxyIndex = 6;
				class TurnOut
				{
					limitsArrayTop[] = {{3.5373,-1.3438}};
					limitsArrayBottom[] = {{-55.8132,-78.701},{-55.695,-42.9749},{-20.5349,-8.1766},{-18.5114,7.3282},{-19.9175,18.9012},{-20.0625,26.8051},{-19.9485,37.7768},{-34.0815,67.2254},{-48.6922,80.0348},{-47.6331,90.4505}};
				};
				inGunnerMayFire = 0;
				class dynamicViewLimits{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "vehicle_passenger_stand_2";
				gunnerinAction = "Stryker_Cargo01_V6";
				animationSourceHatch = "Door2";
				isPersonTurret = 1;
				enabledByAnimationSource = "Door2";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo lr";
				memoryPointsGetInGunnerDir = "pos cargo lr dir";
				gunnerName = "$STR_DN_LAV25_LEFT_BOARD_GUNNER";
				gunnerCompartments = "Compartment1";
				gunnerDoor = "Door2";
				allowLauncherIn = 0;
				allowLauncherOut = 1;
				canHideGunner = 1;
				forceHideGunner = 0;
				LODTurnedIn = 1200;
				LODTurnedOut = 1;
				proxyIndex = 5;
				inGunnerMayFire = 0;
				class dynamicViewLimits{};
			};
			
			
		};
		class AnimationSources: AnimationSources
		{
			class Proxy
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class Backpack
			{
				displayName = "Br";
				source = "user";
				animPeriod = 0.01;
				initPhase = 1;
				mass = -20;
			};
			class Br
			{
				displayName = "$STR_DN_LAV25_CARGO_SPTA";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class Br1
			{
				displayName = "$STR_DN_LAV25_CARGO_SUPPLY";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class tabl
			{
				displayName = "$STR_DN_LAV25_CARGO_CIP";
				source = "user";
				animPeriod = 1;
				initPhase = 0;
				mass = -20;
			};
			class ammo_belt
			{
				source = "Reload";
				weapon = "VTN_M240_coax";
			};
			class muzzle_rot
			{
				source = "ammorandom";
				weapon = "VTN_M242_veh";
			};
			class muzzle_hide
			{
				source = "reload";
				weapon = "VTN_M242_veh";
			};
			class plate_front
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class turbine_cover
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Doors1
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class Doors2
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2
			{
				source = "Hit";
				hitpoint = "HitGlass2";
				raw = 1;
			};
			class HitGlass3
			{
				source = "Hit";
				hitpoint = "HitGlass3";
				raw = 1;
			};
			class HitGlass4
			{
				source = "Hit";
				hitpoint = "HitGlass4";
				raw = 1;
			};
			class HitGlass5
			{
				source = "Hit";
				hitpoint = "HitGlass5";
				raw = 1;
			};
			class HitGlass6
			{
				source = "Hit";
				hitpoint = "HitGlass6";
				raw = 1;
			};
			class HitGlass7
			{
				source = "Hit";
				hitpoint = "HitGlass7";
				raw = 1;
			};
			class HitGlass8
			{
				source = "Hit";
				hitpoint = "HitGlass8";
				raw = 1;
			};
			class HitGlass9
			{
				source = "Hit";
				hitpoint = "HitGlass9";
				raw = 1;
			};
			class HitGlass10
			{
				source = "Hit";
				hitpoint = "HitGlass10";
				raw = 1;
			};
			class HitGlass11
			{
				source = "Hit";
				hitpoint = "HitGlass11";
				raw = 1;
			};
			class HitGlass12
			{
				source = "Hit";
				hitpoint = "HitGlass12";
				raw = 1;
			};
			class HitGlass13
			{
				source = "Hit";
				hitpoint = "HitGlass13";
				raw = 1;
			};
			class HitGlass14
			{
				source = "Hit";
				hitpoint = "HitGlass14";
				raw = 1;
			};
			class HitGlass15
			{
				source = "Hit";
				hitpoint = "HitGlass15";
				raw = 1;
			};
			class HitGlass16
			{
				source = "Hit";
				hitpoint = "HitGlass16";
				raw = 1;
			};
			class HitGlass17
			{
				source = "Hit";
				hitpoint = "HitGlass17";
				raw = 1;
			};
			class HitGlass18
			{
				source = "Hit";
				hitpoint = "HitGlass18";
				raw = 1;
			};
			class HitGlass19
			{
				source = "Hit";
				hitpoint = "HitGlass19";
				raw = 1;
			};
			class HitGlass20
			{
				source = "Hit";
				hitpoint = "HitGlass20";
				raw = 1;
			};
			class HitGlass21
			{
				source = "Hit";
				hitpoint = "HitGlass21";
				raw = 1;
			};
			class showBags
			{
				displayName = "";
			};
			class showCamonetHull
			{
				displayName = "";
			};
			class showCamonetCannon
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class showCamonetTurret
			{
				displayName = "";
			};
			class showSLATHull
			{
				displayName = "";
			};
			class showSLATTurret
			{
				displayName = "";
			};
		};
		explosionEffect = "FuelExplosion";
		secondaryExplosion = -1;
		fuelExplosionPower = 1;
		damageTexDelay = 0;
		engineEffectSpeed = 5;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		
		
		
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) call compile preprocessFileLineNumbers ""sg_vtn_vehicles\scripts\init.sqf"";";
		};
		class VTN_EEH_INIT
		{
			av_init = "[_this select 0,_this select 1] exec ""\sg_vtn_vehicles\scripts\num.sqs"";";
			functions_init = " _this spawn compile preprocessFile ""\sg_vtn_vehicles\scripts\functions_init.sqf"";";
			//vtn_core_at_init = "[(_this select 0)] spawn compile preprocessFile ""vtn_core_at\scripts\vehicle\init.sqf"";";
		};
		
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectAMV";
			};
			class Exhaust2
			{
				position = "vyfuk2 start";
				direction = "vyfuk2 konec";
				effect = "ExhaustEffectTankBack";
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 0.5;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.015;
				explosionShielding = 0.2;
				radius = 0.4;
			};
			class HitFuel
			{
				armor = 1.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.015;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitLFWheelDir
			{
				visual = "wheel_1_1_hide";
				armor = 0.25;
				minimalHit = 0;
				material = -1;
				name = "";
				armorComponent = "wheel_1_1_hide";
				passThrough = 0;
				explosionShielding = 0;
				radius = 0.2;
			};
			class HitLFWheel: HitLFWheelDir
			{
				armor = 0.25;
				minimalHit = 0.05;
				name = "wheel_1_1_steering";
				armorComponent = "";
				explosionShielding = 10;
				depends = "HitLFWheelDir - 0.25";
			};
			class HitLF2WheelDir: HitLFWheelDir
			{
				visual = "wheel_1_2_hide";
				armorComponent = "wheel_1_2_hide";
			};
			class HitLF2Wheel: HitLFWheel
			{
				name = "wheel_1_2_steering";
				depends = "HitLF2WheelDir - 0.25";
			};
			class HitLMWheelDir: HitLFWheelDir
			{
				visual = "wheel_1_3_hide";
				armorComponent = "wheel_1_3_hide";
			};
			class HitLMWheel: HitLFWheel
			{
				name = "wheel_1_3_steering";
				depends = "HitLMWheelDir - 0.25";
			};
			class HitLBWheelDir: HitLFWheelDir
			{
				visual = "wheel_1_4_hide";
				armorComponent = "wheel_1_4_hide";
			};
			class HitLBWheel: HitLFWheel
			{
				name = "wheel_1_4_steering";
				depends = "HitLBWheelDir - 0.25";
			};
			class HitRFWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
			};
			class HitRFWheel: HitLFWheel
			{
				name = "wheel_2_1_steering";
				depends = "HitRFWheelDir - 0.25";
			};
			class HitRF2WheelDir: HitLFWheelDir
			{
				visual = "wheel_2_2_hide";
				armorComponent = "wheel_2_2_hide";
			};
			class HitRF2Wheel: HitLFWheel
			{
				name = "wheel_2_2_steering";
				depends = "HitRF2WheelDir - 0.25";
			};
			class HitRMWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_3_hide";
				armorComponent = "wheel_2_3_hide";
			};
			class HitRMWheel: HitLFWheel
			{
				name = "wheel_2_3_steering";
				depends = "HitRMWheelDir - 0.25";
			};
			class HitRBWheelDir: HitLFWheelDir
			{
				visual = "wheel_2_4_hide";
				armorComponent = "wheel_2_4_hide";
			};
			class HitRBWheel: HitLFWheel
			{
				name = "wheel_2_4_steering";
				depends = "HitRBWheelDir - 0.25";
			};
			class HitGlass1
			{
				visual = "glass1";
				name = "glass1";
				armorComponent = "glass1";
				material = -1;
				armor = 0.015;
				minimalHit = 0.5;
				explosionShielding = 0.1;
				passThrough = 1;
				radius = 0.001;
			};
			class HitGlass2: HitGlass1
			{
				visual = "glass2";
				name = "glass2";
				armorComponent = "glass2";
			};
			class HitGlass3: HitGlass1
			{
				visual = "glass3";
				name = "glass3";
				armorComponent = "glass3";
			};
			class HitGlass4: HitGlass1
			{
				visual = "glass4";
				name = "glass4";
				armorComponent = "glass4";
			};
			class HitGlass5: HitGlass1
			{
				visual = "glass5";
				name = "glass5";
				armorComponent = "glass5";
			};
			class HitGlass6: HitGlass1
			{
				visual = "glass6";
				name = "glass6";
				armorComponent = "glass6";
			};
			class HitGlass7: HitGlass1
			{
				visual = "glass7";
				name = "glass7";
				armorComponent = "glass7";
			};
			class HitGlass8: HitGlass1
			{
				visual = "glass8";
				name = "glass8";
				armorComponent = "glass8";
			};
			class HitGlass9: HitGlass1
			{
				visual = "glass9";
				name = "glass9";
				armorComponent = "glass9";
			};
			class HitGlass10: HitGlass1
			{
				visual = "glass10";
				name = "glass10";
				armorComponent = "glass10";
			};
			class HitGlass11: HitGlass1
			{
				visual = "glass11";
				name = "glass11";
				armorComponent = "glass11";
			};
			class HitGlass12: HitGlass1
			{
				visual = "glass12";
				name = "glass12";
				armorComponent = "glass12";
			};
			class HitGlass13: HitGlass1
			{
				visual = "glass13";
				name = "glass13";
				armorComponent = "glass13";
			};
			class HitGlass14: HitGlass1
			{
				visual = "glass14";
				name = "glass14";
				armorComponent = "glass14";
			};
			class HitGlass15: HitGlass1
			{
				visual = "glass15";
				name = "glass15";
				armorComponent = "glass15";
			};
			class HitGlass16: HitGlass1
			{
				visual = "glass16";
				name = "glass16";
				armorComponent = "glass16";
			};
			class HitGlass17: HitGlass1
			{
				visual = "glass17";
				name = "glass17";
				armorComponent = "glass17";
			};
			class HitGlass18: HitGlass1
			{
				visual = "glass18";
				name = "glass18";
				armorComponent = "glass18";
			};
			class HitGlass19: HitGlass1
			{
				visual = "glass19";
				name = "glass19";
				armorComponent = "glass19";
			};
			class HitGlass20: HitGlass1
			{
				visual = "glass20";
				name = "glass20";
				armorComponent = "glass20";
			};
			class HitGlass21: HitGlass1
			{
				visual = "glass21";
				name = "glass21";
				armorComponent = "glass21";
			};
		};
		class Damage
		{
			tex[] = {"sg_vtn_vehicles\data\lav_int_2_ca.paa","sg_vtn_vehicles\data\lavalfa_destruct_ca.paa","sg_vtn_vehicles\data\lavalfa_ca.paa","sg_vtn_vehicles\data\lavalfa_destruct_ca.paa"};
			mat[] = {"sg_vtn_vehicles\data\steklo.rvmat","A3\data_f\Glass_veh_armored_damage.rvmat","A3\data_f\Glass_veh_armored_damage.rvmat","sg_vtn_vehicles\data\lavalfa.rvmat","sg_vtn_vehicles\data\lavalfa_damage.rvmat","sg_vtn_vehicles\data\lavalfa_destruct.rvmat","sg_vtn_vehicles\data\lavalfa_p.rvmat","sg_vtn_vehicles\data\lavalfa_damage.rvmat","sg_vtn_vehicles\data\lavalfa_destruct.rvmat","sg_vtn_vehicles\data\lavbody.rvmat","sg_vtn_vehicles\data\lavbody_damage.rvmat","sg_vtn_vehicles\data\lavbody_destruct.rvmat","sg_vtn_vehicles\data\lavbody_camo.rvmat","sg_vtn_vehicles\data\lavbody_damage.rvmat","sg_vtn_vehicles\data\lavbody_destruct.rvmat","sg_vtn_vehicles\data\lavbody_des.rvmat","sg_vtn_vehicles\data\lavbody_damage.rvmat","sg_vtn_vehicles\data\lavbody_destruct.rvmat","sg_vtn_vehicles\data\lavbody2.rvmat","sg_vtn_vehicles\data\lavbody2_damage.rvmat","sg_vtn_vehicles\data\lavbody2_destruct.rvmat","sg_vtn_vehicles\data\lavbody2_camo.rvmat","sg_vtn_vehicles\data\lavbody2_damage.rvmat","sg_vtn_vehicles\data\lavbody2_destruct.rvmat","sg_vtn_vehicles\data\lavbody2_des.rvmat","sg_vtn_vehicles\data\lavbody2_damage.rvmat","sg_vtn_vehicles\data\lavbody2_destruct.rvmat"};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
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
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		class RenderTargets
		{
			class Mirror_L
			{
				renderTarget = "rendertarget1";
				class Camera1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class Mirror_R
			{
				renderTarget = "rendertarget2";
				class Camera2
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display1
			{
				renderTarget = "rendertarget3";
				class CameraView3
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display2
			{
				renderTarget = "rendertarget4";
				class CameraView3
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display3
			{
				renderTarget = "rendertarget5";
				class CameraView3
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display4
			{
				renderTarget = "rendertarget6";
				class CameraView3
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
			class display5
			{
				renderTarget = "rendertarget7";
				class CameraView3
				{
					pointPosition = "PIP6_pos";
					pointDirection = "PIP6_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.1;
				};
			};
		};
		memoryPointTrackFLL = "Stopa PLL";
		memoryPointTrackFLR = "Stopa PLP";
		memoryPointTrackBLL = "Stopa ZLL";
		memoryPointTrackBLR = "Stopa ZLP";
		memoryPointTrackFRL = "Stopa PPL";
		memoryPointTrackFRR = "Stopa PPP";
		memoryPointTrackBRL = "Stopa ZPL";
		memoryPointTrackBRR = "Stopa ZPP";
		tf_hasLRradio = 1;
		tf_hasLRradio_api = "true";
		tf_RadioType_api = "tf_rt1523g";
		
		
		hiddenselections[] = {"Camo1","Camo2","z1","Camo3"};
		hiddenselectionstextures[] = {
			"sg_vtn_vehicles\data\lavbody_camo_co.paa",
			"sg_vtn_vehicles\data\lavbody2_camo_co.paa",
			"sg_vtn_vehicles\data\znaki\z01_ca.paa",
			"sg_vtn_vehicles\data\lavalfa_co.paa"
		};
		
		class textureSources
		{
			class Desert
			{
				displayName = "$STR_DN_VTN_LAV25_CAMO_SAND";
				author = "VTN MOD";
				textures[] = {
					"sg_vtn_vehicles\data\lavbody_des_co.paa",
					"sg_vtn_vehicles\data\lavbody2_des_co.paa",
					"sg_vtn_vehicles\data\znaki\z01_ca.paa",
					"sg_vtn_vehicles\data\lavalfa_des_ca.paa"
				};
				materials[] = {
					"sg_vtn_vehicles\data\lavbody_des.rvmat",
					"sg_vtn_vehicles\data\lavbody2_des.rvmat",
					"",
					"sg_vtn_vehicles\data\lavalfa.rvmat"
				};
			};
			class Green
			{
				displayName = "$STR_DN_VTN_LAV25_GREEN";
				author = "VTN MOD";
				textures[] = {
					"sg_vtn_vehicles\data\lavbody_co.paa",
					"sg_vtn_vehicles\data\lavbody2_co.paa",
					"sg_vtn_vehicles\data\znaki\z01_ca.paa",
					"sg_vtn_vehicles\data\lavalfa_co.paa"
				};
				materials[] = {
					"sg_vtn_vehicles\data\lavbody.rvmat",
					"sg_vtn_vehicles\data\lavbody2.rvmat",
					"",
					"sg_vtn_vehicles\data\lavalfa.rvmat"
				};
			};
			class Woodland
			{
				displayName = "$STR_DN_VTN_LAV25_CAMO_WOODLAND";
				author = "VTN MOD";
				textures[] = {
					"sg_vtn_vehicles\data\lavbody_camo_co.paa",
					"sg_vtn_vehicles\data\lavbody2_camo_co.paa",
					"sg_vtn_vehicles\data\znaki\z01_ca.paa",
					"sg_vtn_vehicles\data\lavalfa_co.paa"
				};
				materials[] = {
					"sg_vtn_vehicles\data\lavbody_camo.rvmat",
					"sg_vtn_vehicles\data\lavbody2_camo.rvmat",
					"",
					"sg_vtn_vehicles\data\lavalfa.rvmat"
				};
			};
			textureList[] = {"Desert",1,"Camo",1,"Woodland",1};
		};
		
		driverRightLegAnimName = "pedalG";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		
		smokeLauncherGrenadePos = "basic_damper_destruct_axis";
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 10;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 82;
		
		editorPreview = "\sg_vtn_vehicles\ico\vtn_lav25a1_wdl_preview.paa";
		model = "sg_vtn_vehicles\LAV25";
		icon = "sg_vtn_vehicles\ico\icon_lav25_ca.paa";
		picture = "sg_vtn_vehicles\ico\picture_lav25_ca.paa";
		
		side = 1;
		faction = "rhs_faction_usmc_wd";
		crew = "rhsusf_army_ucp_crewman";
		typicalCargo[] = {"rhsusf_usmc_marpat_wd_rifleman_m4"};
	};
	
	class SG_LAV25A2: SG_LAV25_VTN_BASE
	{
		faction = "rhs_faction_usmc_wd";
		scope = 2;
		displayname = "$STR_DN_VTN_LAV25A2";
		armor = 400;
		armorStructural = 4;
		driverWeaponsInfoType = "RscOptics_MBT_01_driver"; //компас для водилы с положение орудия
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components{};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class Components{};
						class ViewGunner
						{
							initAngleX = 0;
							minAngleX = -40;
							maxAngleX = 40;
							initAngleY = 0;
							minAngleY = -150;
							maxAngleY = 150;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal"};
						};
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = "0.75";
							minFov = "0.75";
							maxFov = "0.75";
							visionMode[] = {"Normal","NVG"};
						};
						class OpticsIn
						{
							class m36th_day_7x
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 7";
								minFov = "0.46 / 7";
								maxFov = "0.46 / 7";
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_2_5X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 2.5";
								minFov = "0.46 / 2.5";
								maxFov = "0.46 / 2.5";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_wf";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_10X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 10";
								minFov = "0.46 / 10";
								maxFov = "0.46 / 10";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
								gunnerOpticsEffect[] = {};
							};
							class ITSS_20X
							{
								initAngleX = 0;
								minAngleX = -30;
								maxAngleX = 30;
								initAngleY = 0;
								minAngleY = -100;
								maxAngleY = 100;
								initFov = "0.46 / 20";
								minFov = "0.46 / 20";
								maxFov = "0.46 / 20";
								thermalmode[] = {0,1};
								visionMode[] = {"TI"};
								gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
								gunnerOpticsEffect[] = {};
							};
						};
						turretInfoType = "RscWeaponZeroing";
						isPersonTurret = 1;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						gunnerForceOptics = 0;
					};
				};
				turretInfoType = "sg_FCS_ACE_hud_gunner";
				weapons[] = {"VTN_M242_veh","VTN_M240_coax"};
				magazines[] = {"rhs_mag_1100Rnd_762x51_M240","rhs_mag_1100Rnd_762x51_M240","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_230Rnd_25mm_M242_HEI","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS","rhs_mag_70Rnd_25mm_M242_APFSDS"};
				soundServo[] = {"sg_sound_file\soundTurret\apc_hor_1.ogg",0.562341,1,30};
				soundServoVertical[] = {"sg_sound_file\soundTurret\apc_ver_1.ogg",0.562341,1,30};
				soundElevation[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",1,1,30};
				maxElev = 59.5; //максимальный угол подъема орудия
				minElev = -9.5; //минимальный угол
				maxHorizontalRotSpeed = 1.2; //60грд в секунду
				maxVerticalRotSpeed = 0.4; 
				startEngine = 0;
				lockWhenDriverOut = 1; //Пушка блокируется, когда водитель вылез на ружу
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -120;
					maxAngleY = 120;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {"Normal"};
				};
				ace_fcs_enabled = 1;
				ace_fcs_minDistance = 200;
				ace_fcs_maxDistance = 3000;
				ace_fcs_distanceInterval = 25;
				stabilizedInAxes = "3";
				discreteDistance[] = {100};
				discreteDistanceInitIndex = 0;
				gunnerOpticsModel = "";
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.5;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.2;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.4;
						radius = 0.25;
					};
				};
				memoryPointGunnerOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				class OpticsIn
				{
					class m36th_day_7x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						visionMode[] = {"Normal","NVG","TI"};
						gunnerOpticsModel = "\sg_vtn_vehicles\2Dscope_LAV_7.p3d";
						gunnerOpticsEffect[] = {};
						thermalMode[] = {2,3};
					};
					class ITSS_2_5X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.0357;
						minFov = 0.0357;
						maxFov = 0.0357;
						thermalMode[] = {2,3};
						visionMode[] = {"Normal","NVG","TI"};
						gunnerOpticsModel = "\sg_vtn_vehicles\2Dscope_LAV_7.p3d";
						gunnerOpticsEffect[] = {};
					};
					delete ITSS_10X;
					delete ITSS_20X;
				};
			};
		};
	};
	
	
	class SG_LAV25A1: SG_LAV25A2
	{
		displayname = "$STR_DN_VTN_LAV25A1";
		armor = 200;
		armorStructural = 2;
		faction = "rhs_faction_usmc_wd";
		scopeArsenal = 2;
		scope = 2;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Components{};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class OpticsIn
						{
							class OpticsIn
				{
					class m36th_day_7x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.234;
						minFov = 0.234;
						maxFov = 0.234;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
						gunnerOpticsEffect[] = {};
						thermalMode[] = {2,3};
					};
					class ITSS_2_5X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.0357;
						minFov = 0.0357;
						maxFov = 0.0357;
						thermalMode[] = {2,3};
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
						gunnerOpticsEffect[] = {};
					};
					delete ITSS_10X;
					delete ITSS_20X;
				};
						};
						turretInfoType = "RscWeaponZeroing";
						isPersonTurret = 1;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
						inGunnerMayFire = 1;
						outGunnerMayFire = 0;
						gunnerForceOptics = 0;
					};
				};
				turretInfoType = "RscWeaponZeroing";
			
			
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.75";
					minFov = "0.75";
					maxFov = "0.75";
					visionMode[] = {"Normal","NVG"};
				};
				
				class OpticsIn
				{
					class m36th_day_7x
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 7";
						minFov = "0.46 / 7";
						maxFov = "0.46 / 7";
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\m36th_day";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_2_5X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 2.5";
						minFov = "0.46 / 2.5";
						maxFov = "0.46 / 2.5";
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_wf";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_10X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 10";
						minFov = "0.46 / 10";
						maxFov = "0.46 / 10";
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
						gunnerOpticsEffect[] = {};
					};
					class ITSS_20X
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "0.46 / 20";
						minFov = "0.46 / 20";
						maxFov = "0.46 / 20";
						visionMode[] = {"NVG"};
						gunnerOpticsModel = "\sg_vtn_vehicles\data\itss_nf";
						gunnerOpticsEffect[] = {};
					};
				};
			};

			class CargoTurret_01: CargoTurret_01 {};
			class CargoTurret_02: CargoTurret_02 {};
			
			
		};
		
		
		
		
		
		
		
		
		
		
		
		
		
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
};















