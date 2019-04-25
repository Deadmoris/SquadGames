	class AllVehicles;
	class Ship: AllVehicles
	{
		class NewTurret;
		class ACE_SelfActions;
	};
	class Ship_F: Ship
	{
		class Turrets
		{
			class MainTurret: NewTurret	{};
			// class ViewOptics;
		};
		class ACE_SelfActions: ACE_SelfActions
		{
			class BN_CSW_Load_New {
				displayName = "Зарядить...";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1} && {count ([_target] call bn_csw_fnc_add_subactions) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "[_target] call bn_csw_fnc_add_subactions";
			};
			class BN_CSW_Unload {
				displayName = "Разрядить";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "0 = [vehicle _player, _player] spawn bn_csw_fnc_unload;";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
			};
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = 1;
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
	};
	class Car: LandVehicle
	{
		class NewTurret;
		class ACE_SelfActions;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret	{};
			// class ViewOptics;
		};
		class ACE_SelfActions: ACE_SelfActions {
			class BN_CSW_Load_New {
				displayName = "Зарядить...";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1} && {count ([_target] call bn_csw_fnc_add_subactions) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "[_target] call bn_csw_fnc_add_subactions";
			};
			class BN_CSW_Unload {
				displayName = "Разрядить";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "0 = [vehicle _player, _player] spawn bn_csw_fnc_unload;";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
			};
			class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = 1;
					statement = "";
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
		};
	};
	class Truck_F: Car_F
	{
		class Turrets;
	};
	class RHS_Ural_BaseTurret: Truck_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class RHS_Ural_Zu23_Base: RHS_Ural_BaseTurret
	{
		bn_csw_loading_style = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_ZU23"};
				magazines[] = {"BN_40Rnd_23mm","BN_40Rnd_23mm"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "BN_ZU23";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
		};
	};
	class rhs_truck: Truck_F
	{
		class Turrets;
	};
	class rhs_gaz66_vmf: rhs_truck
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
	};
	class rhs_gaz66_zu23_base: rhs_gaz66_vmf
	{
		bn_csw_loading_style = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_ZU23"};
				magazines[] = {"BN_40Rnd_23mm","BN_40Rnd_23mm"};
				gunnerOpticsModel="\sg_sights_fix\data\model\rhs_pzu5.p3d";
				gunnerOutOpticsModel="\sg_sights_fix\data\model\rhs_pzu5.p3d";
				gunnerOpticsEffect[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur2"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_source
			{
				source = "reload";
				weapon = "BN_ZU23";
			};
			class fire_anim: muzzle_source
			{
				source = "revolving";
			};
			class muzzleHMG_ROT: muzzle_source
			{
				source = "ammorandom";
			};
		};
	};
	
	class Offroad_01_base_F: Car_F {};// i have no idea what i'm doing
	// bow, wow
	class RHS_UAZ_Base: Offroad_01_base_F //bark, bark
	{
		class AnimationSources;
	};
	class RHS_UAZ_DShKM_Base: RHS_UAZ_Base
	{		
		bn_csw_loading_style = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700};
				discreteDistanceInitIndex = 0;
				weapons[] = {"BN_rhs_weap_DSHKM"};
				magazines[] = {"rhs_mag_127x108mm_50"};
				class ViewOptics;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_rhs_weap_DSHKM";
			};
			class ReloadMagazine: ReloadAnim
			{
				source = "reloadmagazine";
			};
			class Revolving: ReloadAnim
			{
				source = "revolving";
			};
			class muzzle_rot_MG: ReloadAnim
			{
				source = "ammorandom";
			};
		};
		class TransportMagazines {
			class _xx_spg_mag_he
			{
				magazine = "rhs_mag_127x108mm_50";
				count = 6;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
	};
	
	
	class RHS_UAZ_AGS30_Base: RHS_UAZ_DShKM_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"BN_RHS_weap_AGS30"};
				magazines[] = {"RHS_mag_VOG30_30"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_weap_AGS30";
			};
			class muzzle_rot_MG: ReloadMagazine
			{
				source = "ammorandom";
			};
		};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "RHS_mag_VOG30_30";
				count = 4;
			};
		};
	};
	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base
	{
		bn_csw_loading_style = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Sight: ViewOptics
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_kum_scope.p3d";
					};
					class HE: Sight
					{
						gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pgok9_of_scope.p3d";
					};
				};
				weapons[] = {"BN_rhs_weap_SPG9"};
				magazines[] = {"BN_rhs_mag_pg9v"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reloadmagazine";
				weapon = "BN_rhs_weap_SPG9";
			};
		};
		class TransportMagazines {
			class _xx_spg_mag_at
			{
				magazine = "BN_rhs_mag_pg9v";
				count = 6;
			};
			class _xx_spg_mag_he
			{
				magazine = "BN_rhs_mag_og9v";
				count = 6;
			};
		}; 
	};

	class rhsusf_m998_w_4dr_fulltop;		 
	class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
	{
		class AnimationSources;
		class Turrets;
		class MainTurret;
	};	
	class rhsusf_m1025_w_m2: rhsusf_m1025_w
	{
		bn_csw_loading_style = 1;
		class AnimationSources: AnimationSources
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
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
		};

		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerCompartments = "Compartment1";
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;				
			};
		};
		
		class TransportMagazines {
			class bn_m2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag";
				count = 9;
			};
		};
		class TransportItems {
			class _xx_earplugs
			{
				name = "ACE_EarPlugs";
				count = 2;
			};
		};
	};	
	class rhsusf_m1025_w_mk19: rhsusf_m1025_w_m2
	{
		bn_csw_loading_style = 1;
		class Turrets: Turrets
		{
			class M2_Turret: M2_Turret
			{
				weapons[] = {"BN_RHS_MK19"};
				magazines[] = {"RHS_48Rnd_40mm_MK19"};
				discreteDistance[] = {300, 400, 500, 600, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500};
				discreteDistanceInitIndex = 2;		
			};
		};
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_MK19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_MK19";
			};
		};
		class TransportMagazines {
		class bn_mk19_car_mags {
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 4;
			};
		};
	};
	
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
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
	};
	class MBT_01_base_F: Tank_F
	{
		class EventHandlers;
		class ACE_SelfActions;
	};
	class APC_Tracked_02_base_F: Tank_F
	{
		class Turrets;
		class ACE_SelfActions;		
	};
	
	class rhsusf_m113tank_base: APC_Tracked_02_base_F
	{
		class AnimationSources;
		class Turrets: Turrets {
			class MainTurret;
		};
		bn_csw_loading_style = 1;
		class ACE_SelfActions: ACE_SelfActions {
			class BN_CSW_Load_New {
				displayName = "Зарядить...";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1} && {count ([_target] call bn_csw_fnc_add_subactions) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "[_target] call bn_csw_fnc_add_subactions";
			};
			class BN_CSW_Unload {
				displayName = "Разрядить";
				distance = 2;
				condition = "_player == gunner (vehicle _player) && {(getNumber (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_style')) == 1}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "0 = [vehicle _player, _player] spawn bn_csw_fnc_unload;";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
			};
		};
	};
	
	class rhsusf_m113_usarmy: rhsusf_m113tank_base {
		class Turrets: Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"BN_RHS_M2","rhsusf_weap_M259"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8"};
			};
		};
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot_main
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
			class muzzle_hide_main
			{
				source = "reload";
				weapon = "BN_RHS_M2";
			};
		};
	};
	
	class rhsusf_m113_usarmy_supply: rhsusf_m113_usarmy {
		class Turrets: Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"BN_RHS_M2","rhsusf_weap_M259"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8"};
			};
		};		
	};
	
	class rhsusf_m113_usarmy_MK19: rhsusf_m113tank_base {
		class Turrets: Turrets {
			class MainTurret : MainTurret {
				weapons[] = {"BN_RHS_MK19","rhsusf_weap_M259"};
				magazines[] = {"RHS_48Rnd_40mm_MK19","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8","rhsusf_mag_L8A3_8"};
				discreteDistance[] = {300, 400, 500, 600, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500};
				discreteDistanceInitIndex = 2;
			};
		};
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 4;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_MK19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_MK19";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class muzzle_rot_hmg
			{
				source = "ammorandom";
				weapon = "BN_RHS_MK19";
			};
		};
	};
	
	class MRAP_01_base_F: Car_F {};
	class rhsusf_rg33_base: MRAP_01_base_F {
		class AnimationSources;
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	
	class rhsusf_rg33_m2_d: rhsusf_rg33_base {
		class Turrets : Turrets {
			class M2_Turret : MainTurret {
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;	
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
		};		
	};
	
	class rhsusf_RG33L_base: MRAP_01_base_F {
		class AnimationSources;
		class Turrets : Turrets {
			class MainTurret;
		};
	};
	
	class rhsusf_M1232_M2_usarmy_d: rhsusf_RG33L_base {
		class Turrets : Turrets {
			class M2_Turret : MainTurret {
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				startEngine = 0;
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
		};		
	};

	class rhsusf_M1232_MK19_usarmy_d: rhsusf_M1232_M2_usarmy_d {
		class Turrets : Turrets {
			class M2_Turret : M2_Turret {
				weapons[] = {"BN_RHS_MK19"};
				magazines[] = {"RHS_48Rnd_40mm_MK19"};
				discreteDistance[] = {300, 400, 500, 600, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500};
				discreteDistanceInitIndex = 2;
				startEngine = 0;
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 4;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_MK19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_MK19";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_MK19";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
		};
	};
	
	class rhsusf_M1237_M2_usarmy_d: rhsusf_RG33L_base {
		class Turrets : Turrets {
			class M2_Turret : MainTurret {
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				startEngine = 0;
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
		};
	};
	
	class rhsusf_M1237_MK19_usarmy_d: rhsusf_M1237_M2_usarmy_d {
		class Turrets : Turrets {
			class M2_Turret : M2_Turret {
				weapons[] = {"BN_RHS_MK19"};
				magazines[] = {"RHS_48Rnd_40mm_MK19"};
				discreteDistance[] = {300, 400, 500, 600, 700, 750, 800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500};
				discreteDistanceInitIndex = 2;
				startEngine = 0;
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "RHS_48Rnd_40mm_MK19";
				count = 4;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "BN_RHS_MK19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "BN_RHS_MK19";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_MK19";
			};
			class belt_rotation
			{
				source = "reload";
				weapon = "BN_RHS_MK19";
			};
		};	
	};
	
	class rhsusf_fmtv_base: Truck_F {};
	class rhsusf_M1078A1P2_B_wd_fmtv_usarmy: rhsusf_fmtv_base {
		class AnimationSources;
		class Turrets: Turrets {
			class MainTurret;
		};
	};
	
	class rhsusf_M1078A1P2_B_M2_wd_fmtv_usarmy: rhsusf_M1078A1P2_B_wd_fmtv_usarmy {
		class Turrets : Turrets {
			class M2_Turret : MainTurret {
				weapons[] = {"BN_RHS_M2"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red"};
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				startEngine = 0;
			};
		};
		bn_csw_loading_style = 1;
		class TransportMagazines {
			class bn_mk2_car_mags {
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
		};
		class AnimationSources: AnimationSources
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
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "BN_RHS_M2";
			};
		};
	};
	
	// class LandVehicle;
	class rhsusf_m1a1tank_base: MBT_01_base_F
	{
	    maximumLoad = 8000;
		class ACE_SelfActions: ACE_SelfActions {
			class BN_CSW_Load_loader {
				displayName = "Зарядить...";
				distance = 2;
				condition = "(!isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_loader) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_loader";
			};
			class BN_CSW_Load_loader_turnedout {
				displayName = "Зарядить (снаружи)...";
				distance = 2;
				condition = "(isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders_turnedout'))} && {count (_target call bn_csw_fnc_add_subactions_loader_turnedout) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_loader_turnedout";
			};
			/* class BN_CSW_Load_unloader {
				displayName = "Разядить...";
				distance = 2;
				condition = "(!isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_unloader) > 0}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_unloader";
			};
			class BN_CSW_Load_unloader_turnedout {
				displayName = "Разрядить (снаружи)...";
				distance = 2;
				condition = "(isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_unloader_turnedout) > 0}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_unloader_turnedout";
			}; */
		};
		transportMaxMagazines = 400;
		bn_csw_loading_loaders[] = {{0,1}};
		bn_csw_loading_loaders_turnedout[] = {{0,1},{0,0}};
		bn_csw_loading_loaderturrets[] = {{{0}}};
		bn_csw_loading_loaderturrets_turnedout[] = {{{0,1}},{{0,0}}};
		bn_csw_loading_loaderguns[] = {{{"rhs_weap_m256","rhs_weap_m240_abrams_coax"}}};
		bn_csw_loading_loaderguns_turnedout[] = {{{"rhs_weap_m240_abrams"}},{{"RHS_M2_Abrams_Commander"}}};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"rhs_mag_762x51_M240_1200","rhs_laserfcsmag","rhs_laserfcsmag"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_12"};
					};
					class Loader: CommanderOptics
					{
						magazines[] = {"rhs_mag_762x51_M240_200"};
					};
				};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A1
			{
				magazine = "rhs_mag_M829A1";
				count = 27;
			};
			class _xx_rhs_mag_M830
			{
				magazine = "rhs_mag_M830";
				count = 8;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	class rhsusf_m1a1fep_d: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"rhs_weap_m256"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_762x51_M240_1200","rhs_laserfcsmag","rhs_laserfcsmag"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_16","rhsusf_mag_duke"};
					};
					class Loader: Loader
					{
						magazines[] = {"rhs_mag_762x51_M240_200"};
					};
				};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A2
			{
				magazine = "rhs_mag_M829A2";
				count = 23;
			};
			class _xx_rhs_mag_M830A1
			{
				magazine = "rhs_mag_M830A1";
				count = 8;
			};
			class _xx_rhs_mag_M1028
			{
				magazine = "rhs_mag_M1028";
				count = 4;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	class rhsusf_m1a1hc_wd: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"rhs_weap_m256"};
				magazines[] = {"rhs_mag_762x51_M240_1200","rhs_laserfcsmag","rhs_laserfcsmag"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_16"};
					};
					class Loader: Loader
					{
						magazines[] = {"rhs_mag_762x51_M240_200"};
					};
				};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A1
			{
				magazine = "rhs_mag_M829A1";
				count = 23;
			};
			class _xx_rhs_mag_M830A1
			{
				magazine = "rhs_mag_M830";
				count = 8;
			};
			class _xx_rhs_mag_M1028
			{
				magazine = "rhs_mag_M1028";
				count = 4;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	class rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"rhs_weap_m256"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_762x51_M240_1200","rhs_laserfcsmag","rhs_laserfcsmag"};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhsusf_mag_L8A3_12"};
					};
					class Loader: Loader
					{
						magazines[] = {"rhs_mag_762x51_M240_200"};
					};
				};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A2
			{
				magazine = "rhs_mag_M829A2";
				count = 23;
			};
			class _xx_rhs_mag_M830A1
			{
				magazine = "rhs_mag_M830A1";
				count = 8;
			};
			class _xx_rhs_mag_M1028
			{
				magazine = "rhs_mag_M1028";
				count = 4;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	class rhsusf_m1a2tank_base: rhsusf_m1a1tank_base
	{
		bn_csw_loading_loaders[] = {{0,1}};
		bn_csw_loading_loaders_turnedout[] = {{0,1},{0,2}};
		bn_csw_loading_loaderturrets[] = {{{0}}};
		bn_csw_loading_loaderturrets_turnedout[] = {{{0,1}},{{0,2}}};
		bn_csw_loading_loaderguns[] = {{{"rhs_weap_m256","rhs_weap_m240_abrams_coax"}}};
		bn_csw_loading_loaderguns_turnedout[] = {{{"rhs_weap_m240_abrams"}},{{"RHS_M2_Abrams_Commander"}}};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"rhs_weap_m256"};
				magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_762x51_M240_1200","rhs_laserfcsmag","rhs_laserfcsmag"};
				class Turrets: Turrets
				{
					class Loader: CommanderOptics
					{
						magazines[] = {"rhs_mag_762x51_M240_200"};
					};
					class CommanderMG: CommanderOptics
					{
						magazines[] = {"rhs_mag_100rnd_127x99_mag_Tracer_Red"};
					};
				};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A3
			{
				magazine = "rhs_mag_M829A3";
				count = 23;
			};
			class _xx_rhs_mag_M830A1
			{
				magazine = "rhs_mag_M830A1";
				count = 8;
			};
			class _xx_rhs_mag_M1028
			{
				magazine = "rhs_mag_M1028";
				count = 4;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	
	class rhsusf_m1a2sep1tuskid_usarmy: rhsusf_m1a2tank_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				// weapons[] = {"rhs_weap_m256"};
				magazines[] = {"rhs_mag_762x51_M240_1200","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_laserfcsmag","rhs_laserfcsmag"};
			};
		};
		class TransportMagazines {
			class _xx_rhs_mag_M829A3
			{
				magazine = "rhs_mag_M829A3";
				count = 23;
			};
			class _xx_rhs_mag_M830A1
			{
				magazine = "rhs_mag_M830A1";
				count = 8;
			};
			class _xx_rhs_mag_M1028
			{
				magazine = "rhs_mag_M1028";
				count = 4;
			};
			class _xx_rhs_mag_762x51_M240_1200
			{
				magazine = "rhs_mag_762x51_M240_1200";
				count = 8;
			};
			class _xx_rhs_mag_100rnd_127x99_mag_Tracer_Red
			{
				magazine = "rhs_mag_100rnd_127x99_mag_Tracer_Red";
				count = 9;
			};
			class _xx_rhs_mag_762x51_M240_200
			{
				magazine = "rhs_mag_762x51_M240_200";
				count = 2;
			};
		}; 
	};
	
	class MBT_01_arty_base_F: MBT_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class rhsusf_m109tank_base: MBT_01_arty_base_F
	{
		class ACE_SelfActions: ACE_SelfActions {
			class BN_CSW_Load_loader {
				displayName = "Зарядить...";
				distance = 2;
				condition = "(!isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_loader) > 0}";
				icon = "\bn_csw_load\data\ui\load.paa";
				statement = "";
				showDisabled = 0;
				priority = 5;
				hotkey = "L";
				position = [0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_loader";
			};
			/* class BN_CSW_Load_unloader {
				displayName = "Разядить...";
				distance = 2;
				condition = "(!isturnedout _player) && {((assignedVehicleRole _player) select 1) in (getarray (configFile >> 'CfgVehicles' >> typeOf (vehicle _player) >> 'bn_csw_loading_loaders'))} && {count (_target call bn_csw_fnc_add_subactions_unloader) > 0}";
				icon = "\bn_csw_load\data\ui\unload.paa";
				statement = "";
				showDisabled = 0;
				priority = 5.1;
				hotkey = "U";
				position = [-0.1,0,0];
				enableInside = 1;
				insertChildren = "_target call bn_csw_fnc_add_subactions_unloader";
			}; */
		};
		bn_csw_loading_loaders[] = {{0,0}};
		bn_csw_loading_loaderturrets[] = {{{0}}};
		bn_csw_loading_loaderguns[] = {{{"rhs_weap_m284"}}};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {};
			};
		};
		class TransportMagazines {
			class _xx_pzn_1Rnd_155mm_Mo_shells
			{
				magazine = "pzn_1Rnd_155mm_Mo_shells";
				count = 32;
			};
			class _xx_pzn_1Rnd_155mm_Mo_guided 
			{
				magazine = "pzn_1Rnd_155mm_Mo_guided";
				count = 4;
			};
			class _xx_pzn_1Rnd_155mm_Mo_mine
			{
				magazine = "pzn_1Rnd_155mm_Mo_mine";
				count = 6;
			};
			class _xx_pzn_1Rnd_155mm_Mo_Cluster
			{
				magazine = "pzn_1Rnd_155mm_Mo_Cluster";
				count = 2;
			};
			class _xx_pzn_1Rnd_155mm_Mo_smoke
			{
				magazine = "pzn_1Rnd_155mm_Mo_smoke";
				count = 6;
			};
			class _xx_pzn_1Rnd_155mm_Mo_LG
			{
				magazine = "pzn_1Rnd_155mm_Mo_LG";
				count = 2;
			};
			class _xx_pzn_1Rnd_155mm_Mo_AT_mine
			{
				magazine = "pzn_1Rnd_155mm_Mo_AT_mine";
				count = 6;
			};
		}; 
	};