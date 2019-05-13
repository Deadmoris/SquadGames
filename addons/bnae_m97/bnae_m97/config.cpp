class CfgPatches
{
	class bnae_M97
	{
		author="Bnae";
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"bnae_core"
		};
		requiredversion=0.1;
		weapons[]=
		{
			"bnae_m97_virtual",
			"bnae_m97_camo1_virtual",
			"bnae_m97_s_virtual"
		};
		units[]=
		{
			"bnae_m97_editor"
		};
	};
};
class Default;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class UnderBarrelSlot;
class PointerSlot;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
		class EventHandlers;
	};
	class bnae_m97_base: Rifle_Long_Base_F
	{
		author="Bnae";
		dlc="p8_mod";
		displayname="Model 97";
		descriptionShort="M97 Trench";
		model="bnae_M97\bnae_M97\bnae_M97";
		scope=0;
		picture="\bnae_m97\bnae_m97\UI\gear_bnae_m97_x_ca";
		magazines[]=
		{
			"6Rnd_00_Buckshot_Magazine",
			"6Rnd_Slug_Magazine",
			"2Rnd_00_Buckshot_Magazine",
			"2Rnd_Slug_Magazine",
			"5Rnd_00_Buckshot_Magazine",
			"5Rnd_Slug_Magazine"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"bnae_M97\bnae_M97\Data\Body\Body_co.paa",
			"bnae_M97\bnae_M97\Data\Body_2\Body_2_co.paa"
		};
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadM97";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"bnae_M97\bnae_M97\Anim\M97_handanim.rtm"
		};
		inertia=0.80000001;
		discretedistance[]={50};
		optics=0;
		modes[]=
		{
			"Single"
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		cursor="ashotgun";
		recoil="recoil_m97";
		recoilProne="recoil_m97";
		bullet1[]=
		{
			"a3\sounds_f\weapons\Shells\shotgun\metal_shotgun_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\metal_shotgun_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\dirt_shotgun_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_01",
			0.2238721,
			1,
			15
		};
		bullet10[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_02",
			0.2238721,
			1,
			15
		};
		bullet11[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_03",
			0.2238721,
			1,
			15
		};
		bullet12[]=
		{
			"A3\Sounds_F\weapons\shells\shotgun\grass_shotgun_04",
			0.2238721,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		reloadMagazineSound[]=
		{
			"bnae_m97\bnae_m97\sound\m97_reload",
			1,
			1,
			15
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\Mk18\Mk18_dry",
			0.63095737,
			1,
			30
		};
		class EventHandlers: EventHandlers
		{
			fired="[(_this select 0), 'GestureFiredM97', 'M97fired'] spawn bnae_fnc_fired";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=140;
			class PointerSlot
			{
			};
			class CowsSlot
			{
			};
			class MuzzleSlot
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
					"Mk18_Shot_SoundSet",
					"Mk18_tail_SoundSet",
					"Mk18_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"Mk18_silencerShot_SoundSet",
					"Mk18_silencerTail_SoundSet",
					"Mk18_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.75;
			dispersion=0.00073000003;
			minRange=2;
			minRangeProbab=0.30000001;
			midRange=350;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.050000001;
		};
	};
	class bnae_m97_virtual: bnae_m97_base
	{
		scope=2;
		author="Bnae";
	};
	class bnae_m97_camo1_virtual: bnae_m97_base
	{
		displayname="Model 97 (Realtree)";
		scope=2;
		author="Bnae";
		hiddenSelectionsTextures[]=
		{
			"bnae_M97\bnae_M97\Data\Body\Body_camo1_co.paa",
			"bnae_M97\bnae_M97\Data\Body_2\Body_2_camo1_co.paa"
		};
		picture="\bnae_m97\bnae_m97\UI\gear_bnae_m97_camo1_x_ca";
	};
	class bnae_m97_s_virtual: bnae_m97_base
	{
		scope=2;
		author="Bnae";
		displayname="Model 97 Carbine";
		model="bnae_M97\bnae_M97\bnae_M97_s";
		fireSpreadAngle=2;
		picture="\bnae_m97\bnae_m97\UI\gear_bnae_m97_s_x_ca";
		reloadAction="GestureReloadM97Short";
		magazines[]=
		{
			"5Rnd_00_Buckshot_Magazine",
			"5Rnd_Slug_Magazine",
			"2Rnd_00_Buckshot_Magazine",
			"2Rnd_Slug_Magazine"
		};
		reloadMagazineSound[]=
		{
			"bnae_m97\bnae_m97\sound\m97short_reload",
			1,
			1,
			15
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
			class PointerSlot
			{
			};
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class bnae_m97_editor: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Model 97";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		faction="BLU_F";
		author="Bnae";
		class TransportWeapons
		{
			class bnae_m97_virtual
			{
				weapon="bnae_m97_virtual";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 6Rnd_00_Buckshot_Magazine
			{
				magazine="6Rnd_00_Buckshot_Magazine";
				count=1;
			};
		};
	};
};
class CfgSounds
{
	sounds[]={};
	class M97fired
	{
		name="M97_fired";
		sound[]=
		{
			"bnae_m97\bnae_m97\sound\m97_fired",
			1,
			1,
			15
		};
		titles[]={};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518637910";
};
