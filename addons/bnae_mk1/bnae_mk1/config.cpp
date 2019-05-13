class CfgPatches
{
	class bnae_mk1
	{
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"bnae_core",
			"bnae_attachments"
		};
		requiredversion=0.1;
		weapons[]=
		{
			"bnae_mk1_virtual",
			"bnae_mk1_t_virtual",
			"bnae_mk1_t_camo1_virtual",
			"bnae_mk1_no4_t_virtual",
			"bnae_mk1_t_scope_virtual",
			"bnae_mk1_t_camo1_scope_virtual",
			"bnae_mk1_short_virtual",
			"bnae_mk1_short_scope_virtual"
		};
		units[]=
		{
			"bnae_mk1_editor"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class EventHandlers;
	};
	class bnae_mk1_base: Rifle_Long_Base_F
	{
		author="Bnae";
		dlc="p8_mod";
		displayname="Mk.I No.4";
		model="bnae_mk1\bnae_mk1\bnae_mk1";
		picture="\bnae_mk1\bnae_mk1\UI\gear_bnae_mk1_x_ca";
		descriptionshort="Lee-Enfield MK.I No.4";
		aiRateOfFireDistance=500;
		aiDispersionCoefY=3;
		aiDispersionCoefX=2;
		bullet1[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.63095701,
			1,
			15
		};
		bullet2[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.63095701,
			1,
			15
		};
		bullet3[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.63095701,
			1,
			15
		};
		bullet4[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.63095701,
			1,
			15
		};
		bullet5[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.63095701,
			1,
			15
		};
		bullet6[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.63095701,
			1,
			15
		};
		bullet7[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.63095701,
			1,
			15
		};
		bullet8[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.63095701,
			1,
			15
		};
		bullet9[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.63095701,
			1,
			15
		};
		bullet10[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.63095701,
			1,
			15
		};
		bullet11[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.63095701,
			1,
			15
		};
		bullet12[]=
		{
			"\A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.63095701,
			1,
			15
		};
		cursor="srifle";
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Dry_01",
			0.25118864,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"bnae_mk1\bnae_mk1\sound\MK1_reload",
			1,
			1,
			15
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"bnae_mk1\bnae_mk1\Anim\mk1_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"bnae_mk1\bnae_mk1\Data\Body\Body_co.paa"
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName="SniperCloud";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		magazines[]=
		{
			"10Rnd_303_Magazine"
		};
		maxZeroing=300;
		modes[]=
		{
			"Single",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		overviewPicture="\A3\Data_F_Mark\Images\watermarkInfo_page06_ca.paa";
		reloadAction="GestureReloadMK1";
		recoil="recoil_dmr_05";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		selectionFireAnim="muzzleFlash";
		class EventHandlers: EventHandlers
		{
			fired="[(_this select 0), 'GestureFiredMK1', 'MK1fired'] spawn bnae_fnc_fired";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=220;
			class MuzzleSlot
			{
			};
			class CowsSlot
			{
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR03_Shot_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=1;
			dispersion=0.00044;
			recoil="recoil_single_dmr";
			recoilProne="recoil_single_prone_dmr";
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.1;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=700;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.1;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.1;
			midRange=1050;
			midRangeProbab=0.69999999;
			maxRange=2000;
			maxRangeProbab=0.30000001;
			aiRateOfFire=8;
			aiRateOfFireDistance=2000;
			requiredOpticType=2;
		};
	};
	class bnae_mk1_virtual: bnae_mk1_base
	{
		scope=2;
		author="Bnae";
	};
	class bnae_mk1_t_virtual: bnae_mk1_base
	{
		displayname="Mk.I No.4 (t)";
		scope=2;
		author="Bnae";
		cameraDir="OP_look";
		discreteDistanceCameraPoint[]=
		{
			"OP_eye"
		};
		maxZeroing=1300;
		model="bnae_mk1\bnae_mk1\bnae_mk1t";
		reloadAction="GestureReloadMK1t";
		reloadMagazineSound[]=
		{
			"bnae_mk1\bnae_mk1\sound\mk1t_reload",
			1,
			1,
			15
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
				access=1;
				compatibleitems[]=
				{
					"bnae_scope_v3_virtual"
				};
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
	};
	class bnae_mk1_t_scope_virtual: bnae_mk1_t_virtual
	{
		author="Bnae";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="bnae_scope_v3_virtual";
			};
		};
	};
	class bnae_mk1_t_camo1_virtual: bnae_mk1_t_virtual
	{
		displayname="Mk.I No.4 (t) (Paint)";
		scope=2;
		author="Bnae";
		picture="\bnae_mk1\bnae_mk1\UI\gear_bnae_mk1_camo1_x_ca";
		hiddenSelectionsTextures[]=
		{
			"bnae_mk1\bnae_mk1\Data\Body\Body_camo1_co.paa"
		};
	};
	class bnae_mk1_t_camo1_scope_virtual: bnae_mk1_t_camo1_virtual
	{
		author="Bnae";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="bnae_scope_v3_virtual";
			};
		};
	};
	class bnae_mk1_short_virtual: bnae_mk1_base
	{
		displayname="Mk.I No.4 Carbine";
		descriptionshort="Feels like there's something missing...";
		scope=2;
		author="Bnae";
		model="bnae_mk1\bnae_mk1\bnae_mk1_short";
		picture="\bnae_mk1\bnae_mk1\UI\gear_bnae_mk1short_x_ca";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"bnae_mk1\bnae_mk1\Anim\mk1short_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"bnae_mk1\bnae_mk1\Data\Body\Short\Body_co.paa"
		};
		reloadAction="GestureReloadMK1t";
		reloadMagazineSound[]=
		{
			"bnae_mk1\bnae_mk1\sound\mk1t_reload",
			1,
			1,
			15
		};
		maxZeroing=1000;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class MuzzleSlot
			{
			};
			class CowsSlot: CowsSlot
			{
				access=1;
				compatibleitems[]=
				{
					"bnae_scope_blk_virtual",
					"bnae_scope_snd_virtual",
					"bnae_scope_mtp_virtual",
					"bnae_scope_v2_virtual",
					"bnae_truglo_blk_virtual",
					"bnae_truglo_snd_virtual",
					"optic_LRPS",
					"optic_LRPS_tna_F",
					"optic_LRPS_ghex_F",
					"optic_SOS",
					"optic_SOS_khk_F",
					"optic_DMS",
					"optic_DMS_ghex_F",
					"optic_AMS",
					"optic_AMS_khk",
					"optic_AMS_snd",
					"optic_KHS_blk",
					"optic_KHS_hex",
					"optic_KHS_old",
					"optic_KHS_tan",
					"optic_Hamr",
					"optic_Hamr_khk_F",
					"optic_Arco",
					"optic_Arco_blk_F",
					"optic_Arco_ghex_F",
					"optic_ERCO_blk_F",
					"optic_ERCO_khk_F",
					"optic_ERCO_snd_F",
					"optic_Aco",
					"optic_ACO_grn",
					"optic_Aco_smg",
					"optic_ACO_grn_smg",
					"optic_Holosight",
					"optic_Holosight_smg",
					"optic_Holosight_blk_F",
					"optic_Holosight_khk_F",
					"optic_Holosight_smg_blk_F",
					"optic_Holosight_smg_khk_F",
					"optic_MRCO",
					"optic_NVS",
					"optic_Nightstalker",
					"optic_tws",
					"optic_tws_mg"
				};
				linkproxy="\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
			class UnderBarrelSlot
			{
			};
		};
	};
	class bnae_mk1_short_scope_virtual: bnae_mk1_short_virtual
	{
		author="Bnae";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="bnae_scope_blk_virtual";
			};
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class MK1fired
	{
		name="mk1_fired";
		sound[]=
		{
			"bnae_mk1\bnae_mk1\sound\mk1_fired",
			1,
			1,
			10
		};
		titles[]={};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class bnae_mk1_editor: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="MK.1 No.4 (t)";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_SniperRifles";
		vehicleClass="WeaponsPrimary";
		faction="BLU_F";
		author="Bnae";
		class TransportWeapons
		{
			class bnae_mk1_t_virtual
			{
				weapon="bnae_mk1_t_virtual";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 10Rnd_303_Magazine
			{
				magazine="10Rnd_303_Magazine";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518638798";
};
