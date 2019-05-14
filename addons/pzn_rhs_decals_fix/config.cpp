class CfgPatches
{
	class pzn_rhs_decals_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"rhs_c_a2port_air","rhs_c_a2port_armor","rhs_decals","rhsusf_decals","rhs_main","rhs_c_heavyweapons","rhsusf_c_heavyweapons","rhsusf_c_weapons","rhsusf_c_hmmwv","rhs_c_tanks","rhsusf_c_m1a1","rhsusf_sounds","rhs_sounds","rhs_optics"};
	};
};


/* class CfgVehicles {
	class rhsusf_hmmwe_base;
	class rhsusf_m998_w_2dr: rhsusf_hmmwe_base
	{
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
					fov = 0.35;
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
					fov = 0.35;
				};
			};
		};
	};
};	 */

class Mode_SemiAuto;
class CfgWeapons {
	
	class GrenadeLauncher;
	class UGL_F: GrenadeLauncher{};
	class GP25_Base: UGL_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundClosure[] = {};
				begin1[] = {"rhsafrf\addons\rhs_sounds\ugl\GP-25_1",2.25,1,200};
				begin2[] = {"rhsafrf\addons\rhs_sounds\ugl\GP-25_2",2.25,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
		};
	};
	
	class Rifle_Base_F;
	class arifle_MX_Base_F: Rifle_Base_F{};
	
	class rhs_weap_m4_Base: arifle_MX_Base_F
	{
		class M203_GL: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundClosure[] = {};
					begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1.8,1,200};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1.8,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
		class M320_GL: M203_GL
		{
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					soundClosure[] = {};
					begin1[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1.8,1,200};
					begin2[] = {"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1.8,1,200};
					soundBegin[] = {"begin1",0.5,"begin2",0.5};
				};
			};
		};
	};
	
	
};


class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class decals
		{
			// class drawSymbol
			// {
			// 	file = "\pzn_rhs_decals_fix\RU_drawSymbol.sqf";
			// 	description = "function for drawing symbols";
			// 	recompile = 1;
			// };
			// class drawNumber
			// {
			// 	file = "\pzn_rhs_decals_fix\RU_drawNumber.sqf";
			// 	description = "function for drawing number";
			// 	recompile = 1;
			// };
			class randomNum
			{
				file = "\pzn_rhs_decals_fix\functions\getRandomNumber.sqf";
				description = "generate a random number using a mission-specific seed";
				recompile = 1;
			};
		};
		/* class WeaponsEH
		{
			class saclosGuide
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
			class saclosGuide2
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_saclosGuide2.sqf";
				description = "SACLOS для вертушек";
			};
		};  */
		class SPO15_functions
		{
			class rwr_spo15
			{
				file = "\rwr_15_stn\rhs_rwr2_spo15.sqf";
				description = "SPO-15 Beryeza main handler";
			};
			class rwr_spo15_eh
			{
				file = "\rwr_15_stn\rhs_rwr2_spo15_eh.sqf";
				description = "SPO-15 Incoming Missile EH";
			};
		};
		class functions
		{
			/* class saclosGuide
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
			class saclosGuide2
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_saclosGuide2.sqf";
				description = "SACLOS guidanceдля вертушек";
			}; */
            class t72_init
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_t72_init.sqf";
				description = "Initialization script for T-72";
			};
			class t80_init
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_tank_init.sqf";
				description = "Initialization script for T-80";
			};
			/* class sight_9s475
			{
				file = "\pzn_rhs_decals_fix\functions\RHS_sight_9s475.sqf";
				description = "FCS for Mi-24 missle launcher";
			}; */
			/*class rF_t72
			{
				file = "\pzn_rhs_decals_fix\functions\RHS_rF_t72.sqf";
				description = "FCS for T72";
				recompile = 0;
			};
			 class retread
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_retread.sqf";
				description = "Retreading function for wheeled vehicles";
				recompile = 1;
			};*/
			/* class wheelDamaged
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_wheelDamaged.sqf";
				description = "Retreading EH for wheel damage";
				recompile = 1;
			};
			class mi24_shake
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_mi24_shake.sqf";
				description = "Camera shake for Mi-24 cannon fire";
				recompile = 1;
			}; */
			class mi24_camo
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_mi24_camo.sqf";
				description = "Random Camo script for Mi-24";
				recompile = 1;
			};
			class rwr_air
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description = "RWR system for generic planes";
				recompile = 1;
			}; 
			class rwr_mi24
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description = "RWR system for Mi-24";
				recompile = 1;
			};
			class rwr_mi28
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description="RWR system for Mi-28";
				recompile = 1;
			};
			class zsu_shake
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description="Camera shake for ZSU cannon fire";
				recompile = 1;
			};
			class engineStartupDelay
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description = "Engine startup delay";
			};
			class dynamicObjectDrawing
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description="Dynamic Object Drawing";
			};
			class dynamicObjectDrawing_loop
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description="Dynamic Object Drawing - main loop";
			};
			/* class c130_doors
			{
				file = "\pzn_rhs_decals_fix\functions\c130_doors.sqf";
				description = "C130 doors open/closed state handling";
			}; */
			/*class cruiseMissile_launch
			{
				file = "\pzn_rhs_decals_fix\functions\launch.sqf";
				description = "Cruise missile launch";
			}; 
			class hitPart
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_hitPart.sqf";
				description = "Advanced CE penetration simulation for warheads and vehicles";
			};
			 class saclosGuide
			{
				file = "\pzn_rhs_decals_fix\functions\launch.sqf";
				description = "Advanced CE penetration simulation for warheads and vehicles";
			}; */
		};
	};
	class RHSUSF
	{
		tag = "RHSUSF";
		class decals
		{
			class drawSymbol
			{
				file = "\pzn_rhs_decals_fix\US_drawSymbol.sqf";
				description = "function for drawing symbols";
				recompile = 1;
			};
			class drawNumber
			{
				file = "\pzn_rhs_decals_fix\US_drawNumber.sqf";
				description = "function for drawing number";
				recompile = 1;
			};
		};
		class functions
		{
            /* class hitPart
			{
				file = "\pzn_rhs_decals_fix\functions\rhs_hitPart.sqf";
				description = "Advanced CE penetration simulation for warheads and vehicles";
			}; */
			class announcer
			{
				file = "\pzn_rhs_decals_fix\functions\empty.sqf";
				description="Announcer handler";
			};
			class incomingMissile
			{
				file = "\pzn_rhs_decals_fix\functions\launch.sqf";
				description = "incoming missile voice announcer";
			};
		};	
	};
	class tu
	{
		class functions
		{
			class Afterburner_Init
			{
					file = "\pzn_rhs_decals_fix\functions\Afterburner_Init_su34.sqf";
					description = "Afterburner";
			};
			class Afterburner_Activate
			{
					file = "\pzn_rhs_decals_fix\functions\Afterburner_Activate_su34.sqf";
					description = "Afterburner";
			};
			class Afterburner_Interface
			{
					file = "\pzn_rhs_decals_fix\functions\Afterburner_Interface_su34.sqf";
					description = "Afterburner";
			};
		};
	};
};
/* class cfgweapons {
	
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class rhs_weap_optic_smaw: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			weaponInfoType = "rhs_rscOptics_smaw";
			// discreteDistance[] = {50,100,150,200,250,300,350,400,450,500};
			// discreteDistanceInitIndex = 0;
			discreteDistanceCameraPoint[] = {"eye","eye","eye","eye","eye","eye","eye","eye","eye","eye"};
			cameraDir = "look2";
		};
	};
}; */