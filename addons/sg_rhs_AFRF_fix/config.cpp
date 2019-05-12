class CfgPatches {
	class sg_rhs_AFRF_fix {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"A3_Air_F", "A3_Air_F_Beta", "A3_Air_F_EPC_Plane_CAS_02", "A3_Air_F_Heli_Light_02", "A3_Air_F_Beta_Heli_Attack_02", "rhs_c_a2port_air", "rhs_c_heavyweapons", "rhs_main", "rhs_decals", "rhs_optics", "rhs_c_troops", "rhs_c_btr", "A3_Armor_F", "A3_Armor_F_Beta", "A3_armor_f_beta_APC_Tracked_02", "A3_Soft_F", "rhs_c_radars", "A3_CargoPoses_F", "A3_Armor_F_T100K", "rhs_aps", "A3_Anims_F_Config_Sdr","rhs_c_weapons","rhs_c_a2port_armor","rhs_c_t72", "rhs_c_bmd", "rhs_c_bmp", "rhs_c_bmp3", "rhs_c_sprut", "rhs_c_tanks","rhssaf_c_weapons", "rhsgref_c_weapons"};
		version = 1.0;
		magazines[] = {};
		ammo[] = {};
	};
};

class cfgAmmo
{
	class M_Titan_AT;
	
	class rhs_ammo_atgmCore_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
	
	class rhs_ammo_atgmBase_base : M_Titan_AT {
		indirectHit = 25; 
		indirectHitRange = 3.1;
	};
    class rhs_ammo_3bm_base;
	class rhs_ammo_3bm9: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 440;
		typicalSpeed = 1800;
		caliber = 9.07407;
	};
	class rhs_ammo_3bm12: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 465;
		typicalSpeed = 1800;
		caliber = 10.3704;
	};
	class rhs_ammo_3bm15: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 490;
		typicalSpeed = 1780;
		caliber = 11.6105;
	};
	class rhs_ammo_3bm17: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1760;
		caliber = 10.9848;
	};
	class rhs_ammo_3bm22: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 450;
		typicalSpeed = 1760;
		caliber = 14.3939;
	};
	class rhs_ammo_3bm26: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		typicalSpeed = 1720;
		caliber = 15.8915;
	};
	class rhs_ammo_3bm29: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 16.8627;
	};
	class rhs_ammo_3bm32: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 480;
		caliber = 21.1765;
	};
	class rhs_ammo_3bm42: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 500;
		caliber = 19.2157;
	};
	class rhs_ammo_3bm42m: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 520;
		typicalSpeed = 1750;
		caliber = 24.7619;
	};
	class rhs_ammo_3bm46: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 26.7059;
	};
	class rhs_ammo_3bm59: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 30.5882;
	};
	class rhs_ammo_3bm60: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 1700;
		caliber = 27.0588;
	};
	class rhs_ammo_3bm69: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 33.6842;
	};
	class rhs_ammo_3bm70: rhs_ammo_3bm_base
	{
		submunitionAmmo = "";
		hit = 550;
		typicalSpeed = 2050;
		caliber = 31.2281;
	};
	class rhs_ammo_of_base;
	class rhs_ammo_3of_base: rhs_ammo_of_base //повышаем сплеш осколочных у N72,80,90
	{
		hit = 350;
		indirectHit = 130;
		indirectHitRange = 40;
	};
	class B_30mm_AP;
	
	class rhs_ammo_30x165mm_base : B_30mm_AP {
		indirectHit = 5;
		indirectHitRange = 0.12;
	};
	
	class B_30mm_HE;	// External class reference
	
	class rhs_ammo_3uor6 : B_30mm_HE { // Старые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};
	
	class rhs_ammo_3uof8 : rhs_ammo_3uor6 { // Новые фугасы на БМП-2
		indirectHit = 8;
		indirectHitRange = 4;
	};

	class B_35mm_AA;	// External class reference
	
	class RHS_ammo_23mm_AA : B_35mm_AA { // ЗУ
	    indirectHit = 6;
		indirectHitRange = 2.5;		
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerEndTime = 8;
	};

	class rhs_ammo_ofz_23x115mm : RHS_ammo_23mm_AA // ЗУ ОФЗ
	{
		indirectHit = 6;
		indirectHitRange = 2.5;		
	};
	
	class rhs_ammo_ofzt_23x115mm : rhs_ammo_ofz_23x115mm // ЗУ ОФЗТ
	{
		indirectHit = 6;
		indirectHitRange = 2;		
	};
	class B_762x51_Ball; // external
	class rhs_B_762x54_7N14_Ball : B_762x51_Ball // подвяжем норм калибр к СВД и зададим калибр для пробития ~10-15мм бронестали как и ИРЛ
	{
		caliber = 1;
	};
	
	class rhs_ammo_127x107mm; 
	class rhs_ammo_145x115mm: rhs_ammo_127x107mm 
	{ 
		ACE_bulletMass = 64; 
		ACE_bulletLength = 158; 
		ACE_caliber = 14.5; 
		hit = 40
		indirectHit = 2; 
		indirectHitRange = 0.2; 
		caliber = 3.2; 
		tracerScale = 1.5; 
		tracerStartTime = 0.075; 
		tracerEndTime = 2.5; 
	};
	class BulletBase;
	class B_338_Ball:BulletBase 
	{
		hit=19
	};	
};

class cfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle 
	{
		class NewTurret;
		class HitPoints;
		class Sounds;
		class CommanderOptics;
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
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
		class Components;
	};
	class rhs_a3t72tank_base: Tank_F
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponT72_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t72bd_tv: rhs_a3t72tank_base
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponSosnaU_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t90_tv: rhs_t72bd_tv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t90_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t90a_tv: rhs_t90_tv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponPlissa_t90_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_tank_base: Tank_F
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80b: rhs_tank_base
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80bv: rhs_t80b
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80a: rhs_t80bv
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80u_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80u: rhs_t80a
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_rhs_gui_optic_t80u_rangefinder";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_t80uk: rhs_t80u
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponAgava_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class  rhs_t80ue1: rhs_t80a
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponPlissa_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        }; 
	};
	class rhs_t80um: rhs_t80u
	{
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponAgava_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        }; 
	};/*
	class rhs_bmp1tank_base: Tank_F
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas";    
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmp_base: rhs_bmp1tank_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas"; 
				class Turrets{};   
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmp1_vdv: rhs_bmp_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
                turretInfoType = "sg_compas";  
				class Turrets{};   
            };
			class Com_BMP1: NewTurret
			{
				turretInfoType = "sg_compas";
			};
        };  
	};*/
	class rhs_bmp1tank_base: Tank_f {};
	class rhs_bmp_base: rhs_bmp1tank_base {};
	class rhs_bmp1_vdv: rhs_bmp_base {};
	class rhs_bmp2e_vdv: rhs_bmp1_vdv
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				 turretInfoType = "sg_RHS_RscWeaponBPK42_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_bmd_base: Tank_F
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret: MainTurret
			{
				turretInfoType = "sg_compas";
			};
			class CommanderOptics: NewTurret 
            {
                turretInfoType = "sg_compas";      
            };
        };  
	};
	class rhs_bmd1_base: rhs_bmd_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_compas";    
            };
			class CommanderOptics1: CommanderOptics
			{
				turretInfoType = "sg_compas";
			};
        };  
	};
	class rhs_bmd2_base: rhs_bmd_base
	{
		driverWeaponsInfoType = "sg_compas";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponBPK42_FCS";
                class Turrets: Turrets
				{
					class Launcher: CommanderOptics
					{	
                        turretInfoType = "sg_compas";
                    };
                };        
            };
        };  
	};
	class rhs_bmd2: rhs_bmd2_base {};
	class rhs_bmd2m: rhs_bmd2
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";      
            };
        };  
	};
	class rhs_a3spruttank_base: Tank_f 
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponSprutSD_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeapon1k13_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmd4_vdv: rhs_a3spruttank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponESSA_commander_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3tank_base: Tank_f
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeapon1k13_bmp3_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3_msv: rhs_bmp3tank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeapon1k13_bmp3_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        };  
	};
	class rhs_bmp3m_msv: rhs_bmp3tank_base
	{
		driverWeaponsInfoType = "RscOptics_MBT_01_Driver";
		class Turrets: Turrets 
        {
			class MainTurret : MainTurret 
            {
				turretInfoType = "sg_RHS_RscWeaponESSA_FCS";
                class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	
                        turretInfoType = "sg_RHS_RscWeaponTKN3_FCS";
                    };
                };        
            };
        }; 
	};
};