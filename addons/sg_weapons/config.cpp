class CfgPatches
{
	class sg_weapons
	{
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		requiredVersion = 0.01;
		requiredAddons[] = {"rhsgref_c_weapons","hlcweapons_core","rhs_c_weapons","hlcweapons_aks"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class BaseSoundModetype;
class MuzzleSlot;
class UnderBarrelSlot;





class cfgAmmo 
{
	class rhs_ammo_762x51_M80_Ball;
	class sg_ammo_762x63_Ball: rhs_ammo_762x51_M80_Ball
	{
		hit = 11;
		cost = 1.2;
		airLock = 1;
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.0009324;
		typicalspeed = 820;
	};
};	
	
	






class CfgMagazines
{
	class CA_Magazine;
	class SG_35Rnd_762x25: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_LIB_MN_PPSH41_MAG";
		descriptionShort = "$STR_LIB_DSS_35RND_PPSH41";
		initSpeed = 490;
		ammo = "rhs_ammo_762x25_Ball";
		count = 35;
		picture = "\sg_weapons\data\M_PPSh41m_ca.paa";
		model = "\sg_weapons\IF_PPSh41_M_Mag.p3d";
		mass = 4.76;
	};
	class SG_71Rnd_762x25: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_LIB_MN_PPSH41_DRUM";
		descriptionShort = "$STR_LIB_DSS_71RND_PPSH41";
		initSpeed = 490;
		ammo = "rhs_ammo_762x25_Ball";
		count = 71;
		picture = "\sg_weapons\data\M_PPSh41d_ca.paa";
		type = "2 * 256";
		model = "\sg_weapons\IF_PPSh41_D_Mag.p3d";
		mass = 9.21;
	};
	
	
	class sg_thompsonmag_30: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M1A1_MAG_NAME";
		model = "\sg_weapons\uns_m1a1_thompson_mag30.p3d";
		picture = "\sg_weapons\data\m_thompson.paa";
		ammo = "rhs_ammo_45ACP_MHP";
		mass = 8;
		count = 30;
		initSpeed = 282;
		descriptionShort = "$STR_M1A1_MAG_DESCRIPTION";
	};

	class sg_32Rnd_uzi: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "rhs_ammo_9x19_FMJ";
		displayName = "$STR_UZI_MAG_NAME";
		model = "\sg_weapons\uns_uzi_mag.p3d";
		initSpeed = 320;
		picture = "\sg_weapons\data\m_uzi.paa";
		descriptionShort = "$STR_UZI_MAG_DESCRIPTION";
	};
	
	
	class sg_rpd_mag: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "rhs_B_762x39_Ball";
		tracersEvery = 4;
		displayName = "$STR_RPD_MAG_NAME";
		model = "\sg_weapons\uns_rpd_drum_mag.p3d";
		picture = "\sg_weapons\data\m_rpd.paa";
		count = 100;
		type = "2*256";
		initSpeed = 745;
		mass = 34;
		descriptionShort = "$STR_RPD_MAG_DESCRIPTION";
	};
	
	
	
	
	
	class sg_sks_mag: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "rhs_B_762x39_Ball";
		displayName = "$STR_SKS_MAG_NAME";
		model = "\sg_weapons\uns_sksclip.p3d";
		picture = "\sg_weapons\data\m_sks.paa";
		type = "2*256";
		count = 10;
		mass = 4;
		initSpeed = 735;
		descriptionShort = "$STR_SKS_MAG_DESCRIPTION";
	};
	class sg_sks_mag_t: sg_sks_mag
	{
		displayName = "$STR_SKS_MAG_T_NAME";
		tracersEvery = 1;
	};
	
	
	
	
	
	
	
	
	
	
	
	
	class sg_47Rnd_DP28: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		type = "2 * 256";
		displayName = "$STR_DP_MAG_NAME";
		picture = "\sg_weapons\data\m_DP28.paa";
		model = "\sg_weapons\uns_dp28_drum_mag";
		ammo = "rhs_B_762x54_Ball";
		count = 47;
		tracersEvery = 4;
		lastRoundsTracer = 5;
		mass = 20;
		initSpeed = 840;
		descriptionShort = "$STR_DP_MAG_DESCRIPTION";
		nameSound = "mgun";
	};
	
	
	
	
	
	
	
	
	
	
	
	class sg_bar_mag: CA_Magazine
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_BAR_MAG_NAME";
		ammo = "sg_ammo_762x63_Ball";
		count = 20;
		mass = 10;
		initSpeed = 805;
		type = "2 * 256";
		model = "\sg_weapons\uns_barmag.p3d";
		picture = "\sg_weapons\data\m_bar.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		descriptionShort = "$STR_BAR_MAG_DESCRIPTION";
		nameSound = "mgun";
	};
	
	

	
	
	class rhs_mag_30Rnd_556x45_M855A1_Stanag;
	class sg_20Rnd_556x45_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_STANAG_20_NAME";
		picture = "\sg_weapons\data\m_M16mag_20.paa";
		model = "\sg_weapons\uns_xM16mag_20.p3d";
		modelSpecial = "sg_weapons\uns_xm177_20_proxymag.p3d";
		modelSpecialIsProxy = 1;
		count = 18;
		mass = 6;
		descriptionShort = "$STR_STANAG_20_DESCRIPTION";
	};
	class sg_30Rnd_556x45_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_STANAG_30_NAME";
		count = 30;
		picture = "\sg_weapons\data\m_M16mag_30.paa";
		model = "\sg_weapons\uns_xM16mag_30.p3d";
		modelSpecial = "sg_weapons\uns_M16_30_proxymag.p3d";
		modelSpecialIsProxy = 1;
		descriptionShort = "$STR_STANAG_30_DESCRIPTION";
	};
	class sg_20Rnd_556x45_Stanag_T: sg_20Rnd_556x45_Stanag
	{
		displayName = "$STR_STANAG_20_T_NAME";
		tracersEvery = 1;
	};
	class sg_30Rnd_556x45_Stanag_T: sg_30Rnd_556x45_Stanag
	{
		displayName = "$STR_STANAG_30_T_NAME";
		tracersEvery = 1;
	};
	
	
	
	
	
	class SG_5Rnd_762x63: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_LIB_MN_M1903A4_Springfield";
		descriptionShort = "$STR_LIB_DSS_5RND_M1903A4_Springfield";
		quickReload = 1;
		ammo = "sg_ammo_762x63_Ball";
		count = 5;
		picture = "\sg_weapons\data\M_M1903A4_Springfield_ca.paa";
		model = "\sg_weapons\IF_M1903A4_Mag.p3d";
		initSpeed = 810;
		mass = 1.73;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	
	
	
	
	
};
	
	
	
	
	
	

class cfgWeapons
{
	
	
	class ItemCore;
	class InventoryUnderItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class muzzle_snds_L;
	
	
	class RifleCore;
	class Rifle: RifleCore
	{
		class WeaponSlotsInfo
		{
			mass = 2;
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			allowedSlots[] = {901};
		};
	};
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class sg_s_UZI: muzzle_snds_L
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_UZI_SUP_NAME";
		model = "sg_weapons\s_UZI.p3d";
		picture = "\sg_weapons\data\w_sup_uzi.paa";
		class ItemInfo: InventoryMuzzleItem_Base_F
		{
			mass = 4;
			class MagazineCoef
			{
				initSpeed = 1;
			};
			class AmmoCoef
			{
				hit = 1;
				visibleFire = 0.5;
				audibleFire = 0.3;
				visibleFireTime = 0.5;
				audibleFireTime = 0.5;
				cost = 1;
				typicalSpeed = 1;
				airFriction = 1;
			};
			muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
			class MuzzleCoef
			{
				dispersionCoef = "1.0f";
				artilleryDispersionCoef = "1.0f";
				inertiaCoef = "0.9f";
				fireLightCoef = "0.1f";
				recoilCoef = "1.0f";
				recoilProneCoef = "1.0f";
				minRangeCoef = "1.0f";
				minRangeProbabCoef = "1.0f";
				midRangeCoef = "1.0f";
				midRangeProbabCoef = "1.0f";
				maxRangeCoef = "1.0f";
				maxRangeProbabCoef = "1.0f";
			};
			inertia = 0.1;
		};
	};
	
	class sg_bp_DP28: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_DP_BIPOD_NAME";
		model = "\sg_weapons\bp_DP28.p3d";
		picture = "\A3\Weapons_F_Mark\Data\UI\gear_accu_bipod_01_snd_CA.paa";
		inertia = 0.2;
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "bipod";
			hasBipod = 1;
			mass = 10;
			soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_down","db-3",1,20};
			soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_BLU_up","db-3",1,20};
		};
	};

	class sg_b_m7: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M16_BAYO_NAME";
		picture = "\sg_weapons\data\b_m6_ca.paa";
		inertia = 0.1;
		model = "\sg_weapons\b_M16";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight{};
			class Pointer
			{
				irLaserPos = "";
				irLaserEnd = "";
				irDistance = 0;
			};
			class Bayonet
			{
				position = "flash dir";
				direction = "flash";
			};
		};
	};

	class sg_s_M16: muzzle_snds_L
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M16_SUP_NAME";
		model = "sg_weapons\s_M16E1.p3d";
		picture = "\sg_weapons\data\w_sup_xM16e1.paa";
		class ItemWatch: ItemCore
		{
			class ItemInfo
			{
				mass = 6;
				class MagazineCoef
				{
					initSpeed = 1.05;
				};
				class AmmoCoef
				{
					hit = 1;
					typicalSpeed = 1;
					airFriction = 1;
					visibleFire = 0.5;
					audibleFire = 0.3;
					visibleFireTime = 0.5;
					audibleFireTime = 0.5;
					cost = 1;
				};
				soundTypeIndex = 1;
				muzzleEnd = "zaslehPoint";
				alternativeFire = "Zasleh2";
				class MuzzleCoef
				{
					dispersionCoef = "0.8f";
					artilleryDispersionCoef = "1.0f";
					fireLightCoef = "0.1f";
					recoilCoef = "1.0f";
					recoilProneCoef = "1.0f";
					minRangeCoef = "1.0f";
					minRangeProbabCoef = "1.0f";
					midRangeCoef = "1.0f";
					midRangeProbabCoef = "1.0f";
					maxRangeCoef = "1.0f";
					maxRangeProbabCoef = "1.0f";
				};
			};
		};
		inertia = 0.1;
	};
	
	class sg_o_LeatherwoodART_M16: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M16_Leatherwood_NAME";
		descriptionShort = "$STR_M16_Leatherwood_NAME";
		model = "\sg_weapons\o_LeatherwoodM16";
		picture = "\sg_weapons\data\uns_o_LeatherwoodM16_ca.paa";
		inertia = 0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 8;
			modelOptics = "\sg_weapons\2Dscope_MilDot_10.p3d";
			class OpticsModes
			{
				class scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsZoomInit = 0.0711;
					opticsZoomMin = 0.0249;
					opticsZoomMax = 0.0711;
					distanceZoomMin = 400;
					distanceZoomMax = 120;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsDisablePeripherialVision = 1;
					opticsFlare = 1;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					cameraDir = "";
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex = 1;
				};
				class Ironsights: scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					memoryPointCamera = "eye_overscope";
					visionMode[] = {};
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100};
					discreteDistanceInitIndex = 0;
				};
			};
		};
	};

	class sg_o_colt4x: sg_o_LeatherwoodART_M16
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M16_Colt_NAME";
		descriptionShort = "$STR_M16_Colt_NAME";
		picture = "\sg_weapons\data\uns_o_colt3x_ca.paa";
		model = "\sg_weapons\uns_colt3x20";
		inertia = 0.1;
		class ItemInfo: ItemInfo
		{
			mass = 6;
			modelOptics = "\sg_weapons\optika_colt.p3d";
			class OpticsModes: OpticsModes
			{
				class scope: scope
				{
					opticsZoomInit = 0.1;
					opticsZoomMin = 0.1;
					opticsZoomMax = 0.1;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					weaponInfoType = "RscWeaponZeroing";
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
					discreteDistanceInitIndex = 0;
				};
				class Ironsights: Ironsights{};
			};
		};
	};
	
	
	
	class rhs_weap_kar98k_Base_F;
	class SG_M1903A4_Springfield: rhs_weap_kar98k_Base_F
	{
		scope = 2;
		displayName = "$STR_DN_LIB_M1903A4_Springfield";
		descriptionShort = "$STR_LIB_DSS_M1903A4_Springfield";
		model = "\sg_weapons\IF_M1903A4.p3d";
		modelOptics = "\sg_weapons\LEN_Optika_M82.p3d";
		picture = "\sg_weapons\data\Gear_M1903A4_Springfield_X_ca.paa";
		hiddenSelections[] = {"camo_1","camo_2"};
		hiddenSelectionsTextures[] = {
			"sg_weapons\data\Springfield_co.paa",
			"sg_weapons\data\Ammo_co.paa"};
		optics = 1;
		dexterity = 1.6;
		inertia = 0.55;
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\M1903A4.rtm"};
		magazines[] = {"SG_5Rnd_762x63"};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "M1903A4 Springfield";
			onHoverText = "M1903A4 Springfield";
		};
		
		class OpticsModes
		{
			class Scope
			{
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				OpticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.1;
				opticsZoomInit = 0.1;
				opticsZoomMax = 0.1;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
		};
	};	

	class SG_K98ZF39: rhs_weap_kar98k_Base_F
	{
		scope = 2;
		displayName = "$STR_DN_LIB_K98ZF39";
		descriptionShort = "$STR_LIB_DSS_K98ZF39";
		model = "\sg_weapons\IF_K98Zf39.p3d";
		modelOptics = "\sg_weapons\LEN_Optika_Zf39.p3d";
		picture = "\sg_weapons\data\Gear_K98ZF39_X_ca.paa";
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {
			"sg_weapons\data\K98_co.paa",
			"sg_weapons\data\Ammo_co.paa",
			"sg_weapons\data\Zf39_co.paa"
		};
		optics = 1;
		dexterity = 1.6;
		inertia = 0.55;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		value = 1000;
		class OpticsModes
		{
			class Scope
			{
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				OpticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.0595;
				opticsZoomInit = 0.0595;
				opticsZoomMax = 0.0595;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			class Ironsights
			{
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = 0;
				OpticsDisablePeripherialVision = 0;
				OpticsZoomMin = 0.25;
				OpticsZoomInit = 0.5;
				OpticsZoomMax = 1.1;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "Kar98k ZF39";
			onHoverText = "Kar98k ZF39";
		};
	};
	
	class rhs_weap_m38_Base_F;
	class SG_M9130PU: rhs_weap_m38_Base_F
	{
		scope = 2;
		displayName = "$STR_DN_LIB_M9130PU";
		descriptionShort = "$STR_LIB_DSS_M9130PU";
		model = "\sg_weapons\IF_M9130PU.p3d";
		modelOptics = "\sg_weapons\LEN_Optika_PU.p3d";
		picture = "\sg_weapons\data\Gear_M9130PU_X_ca.paa";
		hiddenSelections[] = {"camo_1","camo_2","camo_3"};
		hiddenSelectionsTextures[] = {
			"sg_weapons\data\M9130_co.paa",
			"sg_weapons\data\Ammo_co.paa",
			"sg_weapons\data\Pu_co.paa"
			};
		optics = 1;
		dexterity = 1.6;
		inertia = 0.55;
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		value = 1000;
		class OpticsModes
		{
			class Scope
			{
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				OpticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.0714;
				opticsZoomInit = 0.0714;
				opticsZoomMax = 0.0714;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			class Ironsights
			{
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = 0;
				OpticsDisablePeripherialVision = 0;
				OpticsZoomMin = 0.25;
				OpticsZoomInit = 0.5;
				OpticsZoomMax = 1.1;
				DistanceZoomMin = 100;
				DistanceZoomMax = 100;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "Mosin M9130 PU";
			onHoverText = "Mosin M9130 PU";
		};
	};
	
	class SG_PPSh41_m: Rifle_Short_Base_F
	{
		scope = 2;
		displayName = "$STR_DN_LIB_PPSh41_m";
		descriptionShort = "$STR_LIB_DSS_PPSH41";
		model = "\sg_weapons\IF_PPSh41_M.p3d";
		picture = "\sg_weapons\data\Gear_PPSh41_m_X_ca.paa";
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"sg_weapons\data\PPSh41_co.paa"};
		discreteDistance[] = {100,200};
		discreteDistanceInitIndex = 0;
		dexterity = 2.5;
		inertia = 0.4;
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\Anim\PPShm.rtm"};
		magazineReloadTime = 4;
		magazines[] = {"SG_35Rnd_762x25"};	

		changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting.wss",0.25118864,1,5};		
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\PPSh41_ReloadMagazine.wss",1,1,25};
		drySound[] = {"\sg_weapons\data\sounds\PPSh41_Dry.wss",1,1,10};
		
		modes[] = {"Full","Single","Far","Medium","Short"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModetype
			{
				soundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			reloadTime = 0.0631;
			dispersion = 0.0045;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
		
		};
		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModetype
			{
				soundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			textureType = "fullAuto";
			reloadTime = 0.0631;
			dispersion = 0.003;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
		
		};
		class Far: Full
		{
			textureType = "semi";
			showToPlayer = 0;
			displayName = "$STR_DN_MODE_SEMIAUTO";
			autoFire = 0;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 150;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class Medium: Full
		{
			showToPlayer = 0;
			ffCount = 3;
			burst = 3;
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 100;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 125;
			midRangeProbab = 0.6;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
		class Short: Medium
		{
			showToPlayer = 0;
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 94.8;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
		};
		
	
	};
	class SG_PPSh41_d: SG_PPSh41_m
	{
		scope = 2;
		displayName = "$STR_DN_LIB_PPSH41";
		descriptionShort = "$STR_LIB_DSS_PPSH41";
		model = "\sg_weapons\IF_PPSh41_D.p3d";
		picture = "\sg_weapons\data\Gear_PPSh41_d_X_ca.paa";
		magazines[] = {"SG_71Rnd_762x25"};
		hiddenSelectionsTextures[] = {"sg_weapons\data\PPSh41_co.paa"};
		inertia = 0.45;
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\Anim\PPShd.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120.15;
		};
	};

	
	
	
	class sg_thompson: Rifle_Short_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_M1A1_NAME";
		model = "\sg_weapons\uns_m1a1_thompson";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\Anim\m16_handguard.rtm"};
		reloadAction = "HLC_GestureReloadFALLONG";
		picture = "\sg_weapons\data\w_thompson.paa";
		magazines[] = {"sg_thompsonmag_30"};
		dexterity = 1.75;
		inertia = 0.2;
		initSpeed = 280;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 45;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
		};
		descriptionShort = "$STR_M1A1_DESCRIPTION";
		
		changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\SMG\Vermin\firemode_Vermin.wss",0.25118864,1,5};
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\thompson_reload.wss",1,1,25};
		drySound[] = {"\sg_weapons\data\sounds\thompson_dry.wss",1,1,10};
		
		modes[] = {"FullAuto","Single","AImode1","AImode2","AImode3","AImode4","AImode5"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			soundBurst = 0;
			reloadTime = 0.09;
			recoil = "recoil_single_SMG_01";
			recoilProne = "recoil_single_prone_SMG_01";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
			ffCount = 1;
			aiRateOfFire = 30;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGVermin_Shot_SoundSet","SMGVermin_Tail_SoundSet","SMGVermin_InteriorTail_SoundSet"};
			};
			soundBurst = 0;
			reloadTime = 0.09;
			ffCount = 1;
			recoil = "recoil_single_SMG_01";
			recoilProne = "recoil_single_prone_SMG_01";
			dispersion = 0.003;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
			aiRateOfFire = 30;
		};
		class AImode1: FullAuto
		{
			soundBurst = 0;
			burst = 7;
			dispersion = 0.015;
			minRange = 0.1;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 90;
			maxRangeProbab = 0.6;
			aiRateOfFire = 1.1;
			aiRateOfFireDistance = 90;
			showToPlayer = 0;
		};
		class AImode2: AImode1
		{
			soundBurst = 0;
			burst = 6;
			dispersion = 0.015;
			minRange = 70;
			minRangeProbab = 0.8;
			midRange = 110;
			midRangeProbab = 0.7;
			maxRange = 160;
			maxRangeProbab = 0.6;
			aiRateOfFire = 1.4;
			aiRateOfFireDistance = 110;
		};
		class AImode3: AImode1
		{
			soundBurst = 0;
			burst = 5;
			dispersion = 0.015;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 130;
			midRangeProbab = 0.6;
			maxRange = 220;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2.2;
			aiRateOfFireDistance = 220;
		};
		class AImode4: AImode1
		{
			soundBurst = 0;
			burst = 3;
			dispersion = 0.015;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.6;
			maxRange = 220;
			maxRangeProbab = 0.3;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 220;
		};
		class AImode5: AImode1
		{
			soundBurst = 0;
			burst = 1;
			dispersion = 0.015;
			minRange = 170;
			minRangeProbab = 0.7;
			midRange = 350;
			midRangeProbab = 0.6;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 450;
		};
	};

	
	

	
	
	
	class sg_uzif: Rifle_Short_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_UZI_F_NAME";
		model = "\sg_weapons\uns_uzi_f";
		picture = "\sg_weapons\data\w_uzi_f.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\uns_uzi.rtm"};
		magazines[] = {"sg_32Rnd_uzi"};
		descriptionShort = "$STR_UZI_DESCRIPTION";
		class Library
		{
			libtextdesc = "$STR_UZI_DESCRIPTION";
		};
		inertia = 0.2;
		dexterity = 1.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"sg_s_uzi"};
				iconPosition[] = {0.1,0.4};
				iconScale = 0.2;
			};
			class CowsSlot{};
			class PointerSlot{};
		};
		
		changeFiremodeSound[] = {"\A3\Sounds_F\arsenal\weapons\SMG\Sting\firemode_Sting.wss",0.25118864,1,5};
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\uzi_reload.wss",1,1,15};
		drySound[] = {"\sg_weapons\data\sounds\uzi_dry.wss",1,1,20};
		
		modes[] = {"FullAuto","Single","AImode1","AImode2","AImode3","AImode4"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModetype
			{
				soundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			dispersion = 0.0045;
			reloadTime = 0.07;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound: BaseSoundModetype
			{
				soundSetShot[] = {"SMGSting_Shot_SoundSet","SMGSting_Tail_SoundSet","SMGSting_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SMGSting_silencerShot_SoundSet","SMGSting_silencerTail_SoundSet","SMGSting_silencerInteriorTail_SoundSet"};
			};
			soundBurst = 0;
			reloadTime = 0.06;
			ffCount = 1;
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			aiRateOfFire = 0.001;
			dispersion = 0.003;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFireDistance = 50;
		};
		class AImode1: FullAuto
		{
			soundBurst = 0;
			burst = 3;
			aiDispersionCoefY = 1.0;
			aiDispersionCoefX = 1.0;
			dispersion = 0.015;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 25;
			midRangeProbab = 0.85;
			maxRange = 50;
			maxRangeProbab = 0.8;
			aiRateOfFire = 1.1;
			aiRateOfFireDistance = 50;
			showToPlayer = 0;
		};
		class AImode2: AImode1
		{
			burst = 6;
			minRange = 50;
			midRange = 75;
			maxRange = 100;
			aiRateOfFire = 1.2;
			aiRateOfFireDistance = 100;
		};
		class AImode3: AImode1
		{
			burst = 8;
			minRange = 100;
			midRange = 130;
			maxRange = 150;
			aiRateOfFire = 1.2;
			aiRateOfFireDistance = 150;
		};
		class AImode4: AImode1
		{
			burst = 10;
			minRange = 150;
			midRange = 180;
			maxRange = 220;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 220;
		};
	};
	class sg_uzi: sg_uzif
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "UZI";
		model = "\sg_weapons\uns_uzi";
		picture = "\sg_weapons\data\w_uzi.paa";
		inertia = 0.3;
		dexterity = 1.7;
	};
	class sg_uzi_sd: sg_uzi
	{
		scope = 2;
		scopeArsenal = 2;
		picture = "\sg_weapons\data\w_uzi_sd.paa";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "sg_s_uzi";
			};
		};
	};
	
		
	
	class sg_rpd: Rifle_Long_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		hasBipod = 1;
		deployedpivot = "deploypivot";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db -3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db -3",1,20};
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_bipod = 1;
		AGM_Overheating_allowSwapBarrel = 1;
		AB_barrelTwist = 12;
		AB_barrelLength = 22;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		tmr_autorest_deployable = 1;
		bg_bipod = 1;
		cse_bipod = 1;
		displayName = "$STR_RPD_NAME";
		model = "\sg_weapons\uns_rpd_drum";
		picture = "\sg_weapons\data\w_rpd_drum.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\rpd.rtm"};
		magazines[] = {"sg_rpd_mag"};		
		recoil = "recoil_mk20";
		descriptionShort = "$STR_RPD_DESCRIPTION";
		inertia = 0.8;
		dexterity = 1.21;
		initSpeed = 860;
		maxRecoilSway = 0.02;
		swayDecaySpeed = 2;
		reloadAction = "GestureReloadM200";
		magazineReloadTime = 6;
		optics = 1;
		opticsZoomInit = 0.375;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 220;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		class Library
		{
			libtextdesc = "$STR_RPD_DESCRIPTION";
		};
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\rpd_reload.wss",1,1,20};
		
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound{};
			reloadTime = 0.118;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 0;
			dispersion = 0.001;
			showToPlayer = 1;
		};
	};
	
	
	
	
	
	
	
	
	class sg_DP28_base: Rifle_Long_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_DP_NAME";
		model = "\sg_weapons\uns_dp28.p3d";
		picture = "\sg_weapons\data\w_DP28.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\dp28.rtm"};
		magazines[] = {"sg_47Rnd_DP28"};
		recoil = "recoil_zafir";
		reloadAction = "GestureReloadM200";
		magazineReloadTime = 10;
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		maxZeroing = 1800;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 200;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleItems[] = {"sg_bp_DP28"};
				iconPosition[] = {0.2,0.7};
				iconScale = 0.2;
			};
		};
		descriptionShort = "$STR_DP_DESCRIPTION";
		class Library
		{
			libtextdesc = "$STR_DP_DESCRIPTION";
		};
		
		
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\dp28_reload.wss",1,1,25};
		drySound[] = {"\sg_weapons\data\sounds\dp28_dry.wss",1,1,25};
		
		
		
		modes[] = {"FullAuto","AImode1","AImode2","AImode3","AImode4","AImode5"};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound{};
			reloadTime = 0.118;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0;
			midRange = 0;
			midRangeProbab = 0;
			maxRange = 0;
			maxRangeProbab = 0;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 0;
			dispersion = 0.001;
			showToPlayer = 1;
		};
		class AImode1: FullAuto
		{
			soundBurst = 0;
			burst = 1;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 80;
			maxRangeProbab = 0.5;
			aiRateOfFire = 1.3;
			aiRateOfFireDistance = 80;
			dispersion = 0.015;
			showToPlayer = 0;
		};
		class AImode2: AImode1
		{
			soundBurst = 0;
			burst = 3;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 60;
			midRangeProbab = 0.8;
			maxRange = 100;
			maxRangeProbab = 0.5;
			aiRateOfFire = 1.4;
			aiRateOfFireDistance = 100;
		};
		class AImode3: AImode1
		{
			soundBurst = 0;
			burst = 6;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 130;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2.1;
			aiRateOfFireDistance = 200;
		};
		class AImode4: AImode1
		{
			soundBurst = 0;
			burst = 8;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 170;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2.4;
			aiRateOfFireDistance = 250;
		};
		class AImode5: AImode1
		{
			soundBurst = 0;
			burst = 10;
			minRange = 100;
			minRangeProbab = 0.5;
			midRange = 170;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2.4;
			aiRateOfFireDistance = 250;
		};
	};
	class sg_DP28: sg_DP28_base
	{
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "UnderBarrelSlot";
				item = "sg_bp_DP28";
			};
		};
	};
	
	
	
	
	class sg_bar: Rifle_Long_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_BAR_NAME";
		model = "\sg_weapons\uns_m1918a2_bar";
		picture = "\sg_weapons\data\w_bar.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\BAR.rtm"};
		reloadAction = "HLC_GestureReloadFALLONG";
		magazineReloadSwitchPhase = 0.5;
		recoil = "recoil_zafir";
		dexterity = 1.21;
		magazineReloadTime = 3.6;
		inertia = 0.8;
		maxRecoilSway = 0.02;
		swayDecaySpeed = 2;
		initSpeed = 860;
		magazines[] = {"sg_bar_mag"};
		descriptionShort = "$STR_BAR_DESCRIPTION";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 160;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};
		cameradir = "aim_point";
		discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4","eye5","eye6","eye7","eye8","eye9","eye10"};
		discretedistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discretedistanceinitindex = 0;
		distanceZoomMin = 100;
		distanceZoomMax = 1100;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		hasBipod = 1;
		deployedpivot = "deploypivot";
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down","db -3",1,20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up","db -3",1,20};
		AGM_Overheating_Dispersion[] = {0,-0.001,0.001,0.003};
		AGM_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		AGM_Overheating_JamChance[] = {0,0.0003,0.0015,0.0075};
		agm_bipod = 1;
		AGM_Overheating_allowSwapBarrel = 1;
		AB_barrelTwist = 12;
		AB_barrelLength = 22;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		tmr_autorest_deployable = 1;
		bg_bipod = 1;
		cse_bipod = 1;
		
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\bar_reload.wss",1,1,20};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\firemode_Zafir.wss",0.25118864,1,5};
		drySound[] = {"\sg_weapons\data\sounds\bar_dry.wss",1,1,10};
		
		modes[] = {"Slow","Fast","AImode1","AImode2","AImode3","AImode4","AImode5"};
		class Slow: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m14_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
			};
			textureType = "burst";
			reloadTime = 0.2;
			dispersion = 0.00125;
			soundBurst = 0;
			ffCount = 1;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class Fast: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m14_Closure_SoundSet","RHSUSF_m14_Shot_SoundSet","RHSUSF_mmg1_Tail_SoundSet"};
			};
			textureType = "fullAuto";
			reloadTime = 0.1;
			aiRateOfFire = 0;
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
		};
		class AImode1: Fast
		{
			soundBurst = 0;
			burst = 7;
			aiDispersionCoefY = 1.0;
			aiDispersionCoefX = 1.0;
			dispersion = 0.015;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1.8;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
		};
		class AImode2: AImode1
		{
			soundBurst = 0;
			burst = 4;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.6;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2.3;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
		};
		class AImode3: AImode1
		{
			soundBurst = 0;
			burst = 3;
			minRange = 0.1;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.6;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
		};
		class AImode4: AImode1
		{
			soundBurst = 0;
			burst = 6;
			minRange = 0.1;
			minRangeProbab = 0.4;
			midRange = 110;
			midRangeProbab = 0.6;
			maxRange = 200;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
		};
		class AImode5: AImode1
		{
			soundBurst = 0;
			burst = 1;
			minRange = 200;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2.9;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
		};
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	class sg_M16: Rifle_Long_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "M16";
		model = "\sg_weapons\uns_xM16e1";
		picture = "\sg_weapons\data\w_M16.paa";
		hiddenselections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\sg_weapons\data\xM16e1_co.paa"};
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\M16_handguard.rtm"};
		reloadAction = "RHS_GestureReloadAR15";
		magazines[] = {"sg_20Rnd_556x45_Stanag","sg_30Rnd_556x45_Stanag","sg_20Rnd_556x45_Stanag_T","sg_30Rnd_556x45_Stanag_T"};
		class Library
		{
			libtextdesc = "$STR_M16_DESCRIPTION";
		};
		descriptionShort = "$STR_M16_DESCRIPTION_SHORT";
		magazineReloadSwitchPhase = 0.3;
		magazineReloadTime = 4;
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = 975;
		recoil = "rhs_recoil_m4";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"sg_s_M16"};
				iconPosition[] = {0.0,0.45};
				iconScale = 0.2;
			};
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {"sg_o_colt4x","sg_o_LeatherwoodART_M16"};
				iconPosition[] = {0.45,0.38};
				iconScale = 0.2;
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {"sg_b_m7"};
				iconPosition[] = {0.35,0.5};
				iconScale = 0.25;
			};
		};
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
		modes[] = {"Single","FullAuto","AImode1","AImode2","AImode3","AImode4"};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_M16_Closure_SoundSet","RHSUSF_M16_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_M16_Closure_SoundSet","RHSUSF_M16_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
			reloadTime = 0.03;
			dispersion = 0.0013;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_M16_Closure_SoundSet","RHSUSF_M16_Shot_SoundSet","RHSUSF_rifle1_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHSUSF_M16_Closure_SoundSet","RHSUSF_M16_ShotSD_SoundSet","RHSUSF_rifle1_SD_Tail_SoundSet"};
			};
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			reloadTime = 0.075;
			dispersion = 0.0013;
		};
		class AImode1: FullAuto
		{
			soundBurst = 0;
			burst = 3;
			aiDispersionCoefY = 1.0;
			aiDispersionCoefX = 1.0;
			dispersion = 0.015;
			minRange = 0.1;
			minRangeProbab = 0.9;
			midRange = 30;
			midRangeProbab = 0.8;
			maxRange = 60;
			maxRangeProbab = 0.7;
			aiRateOfFire = 1.2;
			aiRateOfFireDistance = 60;
			showToPlayer = 0;
		};
		class AImode2: AImode1
		{
			soundBurst = 0;
			burst = 6;
			minRange = 0.1;
			minRangeProbab = 0.6;
			midRange = 120;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.5;
			aiRateOfFire = 1.8;
			aiRateOfFireDistance = 90;
		};
		class AImode3: AImode1
		{
			soundBurst = 0;
			burst = 8;
			minRange = 0.1;
			minRangeProbab = 0.6;
			midRange = 160;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.5;
			aiRateOfFire = 2.1;
			aiRateOfFireDistance = 170;
		};
		class AImode4: AImode1
		{
			soundBurst = 0;
			burst = 10;
			reloadTime = 0.15;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 160;
			midRangeProbab = 0.3;
			maxRange = 400;
			maxRangeProbab = 0.01;
			aiRateOfFire = 1.1;
			aiRateOfFireDistance = 300;
		};
	};
	class sg_M16A1: sg_M16
	{
		displayName = "M16A1";
		model = "\sg_weapons\uns_M16a1";
		picture = "\sg_weapons\data\w_M16a1.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	
	class sg_M16A1_bayo: sg_M16A1
	{
		picture = "\sg_weapons\data\w_M16a1_bayo.paa";
		inertia = 0.5;
		dexterity = 1.55;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "sg_b_M7";
			};
		};
	};
	class sg_M16a1_SD: sg_M16A1
	{
		picture = "\sg_weapons\data\w_M16a1sd.paa";
		inertia = 0.6;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 95;
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "sg_s_M16";
			};
		};
	};
	class sg_M16A1mk: sg_M16A1
	{
		picture = "\sg_weapons\data\w_M16a1.paa";
		hiddenSelectionsTextures[] = {"\sg_weapons\skins\xM16e1_g_co.paa"};
		inertia = 0.5;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sg_o_colt4x";
			};
		};
	};
	class sg_M16A1mk_sd: sg_M16A1mk
	{
		picture = "\sg_weapons\data\w_M16a1.paa";
		inertia = 0.6;
		dexterity = 1.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
		class LinkedItems: LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "sg_s_M16";
			};
		};
	};
	class sg_M16A1s: sg_M16A1
	{
		picture = "\sg_weapons\data\w_M16a1.paa";
		hiddenSelectionsTextures[] = {"\sg_weapons\data\xM16e1_g_co.paa"};
		inertia = 0.5;
		dexterity = 1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 90;
		};
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "sg_o_LeatherwoodART_M16";
			};
		};
	};
	class sg_M16A1s_sd: sg_M16A1s
	{
		picture = "\sg_weapons\data\w_M16a1.paa";
		inertia = 0.6;
		dexterity = 1.45;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
		class LinkedItems: LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "sg_s_M16";
			};
		};
	};
	
	
	
	
	
	
	
	
	class sg_sks: Rifle_Long_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "$STR_SKS_NAME";
		model = "\sg_weapons\uns_sks45";
		picture = "\sg_weapons\data\w_sks.paa";
		handAnim[] = {"OFP2_ManSkeleton","\sg_weapons\data\anim\M24.rtm"};		
		reloadAction = "RHS_GestureReloadM1903A1";
		magazineReloadSwitchPhase = 0.5625;
		magazines[] = {"sg_sks_mag","sg_sks_mag_t"};
		magazineReloadTime = 4;
		dexterity = 1.7;
		initSpeed = 735;	
		recoil = "recoil_mk20";
		descriptionShort = "$STR_SKS_DESCRIPTION";
		discreteDistanceInitIndex = 0;
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		cameraDir = "eye_look";
		maxZeroing = 1000;
		class Library
		{
			libtextdesc = "$STR_SKS_DESCRIPTION";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{};
		};
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.01,1};
		reloadMagazineSound[] = {"\sg_weapons\data\sounds\sks_reload",1,1,25};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound{};
			reloadTime = 0.1;
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 4.0;
		};
	};
	
	
	
	
	
	
	
	
	
	
};	

	
	
	
	
	
	
	