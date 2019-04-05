class CfgPatches
{
	class tu_colt
	{
		units[] = {};
		weapons[] = {"tu_colt_scope", "tu_colt_anpvs4"};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhsusf_c_weapons"};
	};
};
class asdg_OpticRail;
class asdg_MuzzleSlot_556;
class CowsSlot;
class PointerSlot;
class MuzzleSlot;
class rhs_western_rifle_scopes_slot_long;
class rhs_western_rifle_muzzle_slot;
class tu_colt_OpticRail: asdg_OpticRail
{
	class compatibleItems
	{
		tu_colt_scope = 1;
		tu_colt_anpvs4 = 1;
		tu_colt_scope_old = 1;
		tu_colt_anpvs4_old = 1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class tu_colt_scope: ItemCore
	{
		weaponInfoType = "rhs_rscOptics_acc_pso1";
		scope = 2;
		author = "ACE2 Team";
		displayName = "Colt 4x20 Scope";
		picture = "\tu_colt\cscope_ca.paa";
		model = "\tu_colt\coltscope.p3d";
		descriptionShort = "Marksman Scope<br/>Magnification: 4x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 8;
			optics = 1;
			modelOptics = "\tu_colt\optics_colt4x";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = "0.25/4";
					opticsZoomMax = "0.25/4";
					opticsZoomInit = "0.25/4";
					discreteDistance[] = {100,200,300,400,500};
					discreteDistanceInitIndex = 2;
					memoryPointCamera = "opticview";
					visionMode[] = {"Normal"};
					distanceZoomMin = 100;
					distanceZoomMax = 500;
				};
				class cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
		inertia = 0.1;
	};
	class tu_colt_scope_old: tu_colt_scope
	{
		scope = 1;
		scopeArsenal = 0;
		model = "\tu_colt\coltscope_old.p3d";
	};
	class tu_colt_anpvs4: ItemCore
	{
		weaponInfoType = "rhs_rscOptics_acc_pso11";
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "AN/PVS4 (Colt mount)";
		picture = "\tu_colt\anpvs4_ui_ca.paa";
		model = "\tu_colt\coltpvs4.p3d";
		descriptionShort = "Night Vision Sight<br/>Magnification: 3.6x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 10;
			optics = 1;
			modelOptics = "\tu_colt\RH_anpvs4_optic";
			class OpticsModes
			{
				class pvs4
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = "0.25/3.6";
					opticsZoomMax = "0.25/3.6";
					opticsZoomInit = "0.25/3.6";
					discreteDistance[] = {100,200,300,400,500};
					discreteDistanceInitIndex = 2;
					memoryPointCamera = "opticview";
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 500;
				};
				class cqb
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
		inertia = 0.2;
	};
	class tu_colt_anpvs4_old: tu_colt_anpvs4
	{
		scope = 1;
		scopeArsenal = 0;
		model = "\tu_colt\coltpvs4_old.p3d";
	};
	
	class rhs_weap_m16a4;
	class tu_m16a2_ris: rhs_weap_m16a4
	{
		scope = 2;
		scopeArsenal = 2;
		author = "GSTAVO";
		displayName = "M16A2 (RIS)";
		model = "\tu_colt\gst_m16a2_ris.p3d";
		baseWeapon = "tu_m16a2_ris";
		picture = "\tu_colt\m16a2_x_ca.paa";
		discreteDistanceInitIndex = 1;
		discreteDistance[] = {25,100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
		class WeaponSlotsInfo
		{
			mass = 74.8;
			class MuzzleSlot: rhs_western_rifle_muzzle_slot{};
			class CowsSlot: rhs_western_rifle_scopes_slot_long{};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class UnderBarrelSlot {};
			class GripodSlot {};
		};
	};
	class tu_m16a2: tu_m16a2_ris
	{
		rhs_pso1m2_type = "tu_colt_scope";
		rhs_pso1m21_type = "tu_colt_anpvs4";
		author = "GSTAVO";
		displayName = "M16A2";
		model = "\tu_colt\gst_m16a2.p3d";
		baseWeapon = "tu_m16a2";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: rhs_western_rifle_muzzle_slot{};
			class CowsSlot: tu_colt_OpticRail{};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class UnderBarrelSlot {};
			class GripodSlot {};
		};
		class Single;
		class Burst;
	};
	class rhs_weap_m16a4_carryhandle_M203;
	class tu_m16a2_gl_ris: rhs_weap_m16a4_carryhandle_M203
	{
		scope = 2;
		scopeArsenal = 2;
		author = "GSTAVO";
		displayName = "M16A2 (RIS/M203)";
		picture = "\tu_colt\m16a2gl_x_ca.paa";
		model = "\tu_colt\gst_m16a2_gl_ris.p3d";
		baseWeapon = "tu_m16a2_gl_ris";
		discreteDistanceInitIndex = 1;
		discreteDistance[] = {25,100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600"};
		class WeaponSlotsInfo
		{
			mass = 104.72;
			class MuzzleSlot: rhs_western_rifle_muzzle_slot{};
			class CowsSlot: rhs_western_rifle_scopes_slot_long{};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class UnderBarrelSlot {};
			class GripodSlot {};
		};
	};
	class tu_m16a2_gl: tu_m16a2_gl_ris
	{
		rhs_pso1m2_type = "tu_colt_scope";
		rhs_pso1m21_type = "tu_colt_anpvs4";
		author = "GSTAVO";
		displayName = "M16A2 (M203)";
		model = "\tu_colt\gst_m16a2_gl.p3d";
		baseWeapon = "tu_m16a2_gl";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: rhs_western_rifle_muzzle_slot{};
			class CowsSlot: tu_colt_OpticRail{};
			class PointerSlot: PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			};
			class UnderBarrelSlot {};
			class GripodSlot {};
		};
		class M203_GL;
		class SAFE;
	};
};