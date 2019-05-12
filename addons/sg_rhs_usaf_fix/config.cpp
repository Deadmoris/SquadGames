class CfgPatches {
	class sg_rhs_USAF_fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_01", "A3_Air_F_EPB_Heli_Light_03", "A3_CargoPoses_F", "rhsusf_c_troops", "rhsusf_c_heavyweapons", "RHS_US_A2_AirImport", "A3_Armor_F_EPB_APC_tracked_03", "RHS_US_A2Port_Armor", "A3_Soft_F_MRAP_01", "rhsusf_vehicles", "rhsusf_c_hmmwv","rhsusf_c_ch53","rhsusf_c_weapons","rhs_c_weapons","A3_Ui_F", "A3_Data_F","A3_Functions_F","A3_UiFonts_F", "rhsusf_optics","A3_Sounds_F_Vehicles","rhsusf_c_m1117","rhsusf_c_melb", "rhs_c_weapons", "rhsgref_c_air","rhsusf_c_airweapons","rhsusf_c_m1a1","rhsusf_c_m1a2"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};


class cfgAmmo
{
    class M_Titan_AT;
    class rhs_ammo_TOW_AT : M_Titan_AT {
		indirectHit = 20;
		indirectHitRange = 3.8;
	};
	class rhs_ammo_TOWB_AT;
	class rhs_ammo_TOW2_AT : rhs_ammo_TOWB_AT {
		indirectHit = 20;
		indirectHitRange = 3.8;
	}; 
    class rhs_ammo_m72a7_rocket;
	class rhs_ammo_m72a3_rocket: rhs_ammo_m72a7_rocket {
		ace_frag_skip = 1;
		submunitionAmmo = "rhs_rpg18_penetrator";
		indirectHit = 10;
		indirectHitRange = 1;
	};
    class Sh_120mm_APFSDS;
    class rhs_ammo_M829: Sh_120mm_APFSDS
    {
        submunitionAmmo = "";
        hit = 440;
		typicalSpeed = 1670;
		caliber = 24.3912;
    };
    class rhs_ammo_M829A1: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 465;
		typicalSpeed = 1575;
		caliber = 27.3862;
    };
    class rhs_ammo_M829A2: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 490;
		typicalSpeed = 1680;
		caliber = 30.5159;
    };
    class rhs_ammo_M829A3: rhs_ammo_M829
    {
        submunitionAmmo = "";
        hit = 550;
		typicalSpeed = 2050;
		caliber = 34.8124;
    };
    class rhs_ammo_M830: Sh_120mm_APFSDS
    {
        submunitionAmmo = "";
        caliber = 40;
        hit = 440;
		typicalSpeed = 1670;
    };
    class rhs_ammo_M830A1: rhs_ammo_M830
    {
        submunitionAmmo = "";
        caliber = 30;
        hit = 465;
		typicalSpeed = 1575;
    };
    class  Sh_120mm_HE;
    class rhs_ammo_M1069: Sh_120mm_HE //повышаем сплеш осколочных у абрамса
    {
        hit = 350;
        indirectHit = 130;
		indirectHitRange = 40;
    };
	class B_127x99_Ball;
	class B_127x99_SLAP;
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		caliber = 2.5;
		hit = 30;
	};
	
	class rhsusf_ammo_127x99_mk211 : rhsusf_ammo_127x99_M33_Ball {
		hit = 35;
		caliber = 2.8;
	};
	class rhs_ammo_127x99_Ball:B_127x99_Ball
	{
		caliber = 2.6;		
	};

	class rhs_ammo_127x99_SLAP: B_127x99_SLAP
	{
		caliber = 3.4;
	};
};

class cfgVehicles
{
    class Land;
	class LandVehicle: Land
	{
		class Turrets;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
		class Components;
        class ViewOptics;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	class Tank_F: Tank {};
    class MBT_01_base_F : Tank_F {};
    class rhsusf_m1a1tank_base : MBT_01_base_F
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        class Turrets: Turrets 
        {
            class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscWeaponM1_FCS"; //добавляем компасы на абрамс
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        turretInfoType = "sg_m1a1_commander";
                    };
                    class Loader: CommanderOptics
					{
						turretInfoType = "sg_compas";
						gunnerForceoptics = 1;
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = 0.75;
								minFov = 0.25;
								maxFov = 1.1;
								visionMode[] = {};
							};
						};
					};
                };       	
            };
        };   
    }; 
    class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base //Добавляем базовый класс для танков модели М1А2, так как базовая модель на М1А1 на них не распростроняется
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "sg_RHS_RscWeaponM1_FCS";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
						gunnerForceoptics = 1;
						turretInfoType = "sg_m1a1_commander";
						class ViewOptics;
					};
					class Loader: CommanderOptics
					{
						gunnerForceoptics = 1;
						turretInfoType = "sg_compas";
						class OpticsIn
						{
							class Periscope: ViewOptics
							{
								initFov = 0.75;
								minFov = 0.25;
								maxFov = 1.1;
								visionMode[] = {};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
							};
						};
					};
				};	
			};
		};
	};
    class APC_Tracked_02_base_F: Tank_F {};   
    class rhsusf_m113tank_base: APC_Tracked_02_base_F
    {
        DriverForceOptics = 1;
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
    };
    class APC_Tracked_03_base_F : Tank_F {}; 
    class RHS_M2A2_Base : APC_Tracked_03_base_F 
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        radartype = 8;
		irtarget = 0;
        class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscODS_ISU";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_m2a2_commander_hud";
                    };
                };        
            };
        };        
    };   
    class RHS_M2A2: RHS_M2A2_Base {};
    class RHS_M2A3: RHS_M2A2
    {
        driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
        class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_RHS_RscIBAS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscCIV";
                    };
                };        
            };
        };  
    };
};