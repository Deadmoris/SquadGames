class CfgPatches
{
	class bnae_spr220
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
			"bnae_spr220_virtual",
			"bnae_spr220_camo1_virtual",
			"bnae_spr220_so_virtual",
			"bnae_spr220_so_camo1_virtual"
		};
		units[]=
		{
			"bnae_spr220_editor",
			"bnae_spr220_so_editor"
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
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class bnae_spr220_base: Rifle_Base_F
	{
		author="Bnae";
		dlc="p8_mod";
		displayname="SPR220";
		descriptionShort="Old double-barreled shotgun";
		model="bnae_spr220\bnae_spr220\bnae_spr220";
		scope=0;
		picture="\bnae_spr220\bnae_spr220\UI\gear_bnae_spr220_x_ca";
		magazines[]=
		{
			"2Rnd_00_Buckshot_Magazine",
			"2Rnd_Slug_Magazine"
		};
		inertia=0.5;
		fireSpreadAngle=1;
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
			"bnae_spr220\bnae_spr220\sound\shotgun_reload",
			1,
			1,
			15
		};
		drySound[]=
		{
			"",
			1,
			1,
			35
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"bnae_spr220\bnae_spr220\Anim\spr220_handanim.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"bnae_spr220\bnae_spr220\Data\Barrel\Barrel_co.paa",
			"bnae_spr220\bnae_spr220\Data\Body\Body_co.paa",
			"bnae_spr220\bnae_spr220\Data\Stock\Stock_co.paa"
		};
		optics=1;
		selectionFireAnim="muzzleFlash";
		reloadAction="GestureReloadSPR220";
		modes[]=
		{
			"Single"
		};
		distanceZoomMin=50;
		distanceZoomMax=50;
		discretedistance[]={50};
		recoil="recoil_spr220";
		cursor="ashotgun";
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
			dispersion=0.003;
			soundContinuous=0;
			reloadTime=0.1;
			magazineReloadTime=0;
			minRange=0;
			midRange=60;
			maxRange=100;
			minRangeProbab=0.5;
			midRangeProbab=0.2;
			maxRangeProbab=0.029999999;
		};
		class Library
		{
			libTextDesc="";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
			class PointerSlot: PointerSlot
			{
				access=1;
				compatibleitems[]=
				{
					"bnae_holder_virtual"
				};
				linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
			};
			class CowsSlot
			{
			};
			class MuzzleSlot
			{
			};
		};
	};
	class bnae_spr220_virtual: bnae_spr220_base
	{
		scope=2;
		author="Bnae";
		dlc="p8_mod";
	};
	class bnae_spr220_camo1_virtual: bnae_spr220_base
	{
		author="Bnae";
		dlc="p8_mod";
		displayname="SPR220 (Digital)";
		picture="\bnae_spr220\bnae_spr220\UI\gear_bnae_spr220_camo1_x_ca";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"bnae_spr220\bnae_spr220\Data\Barrel\Barrel_camo1_co.paa",
			"bnae_spr220\bnae_spr220\Data\Body\Body_camo1_co.paa",
			"bnae_spr220\bnae_spr220\Data\Stock\Stock_camo1_co.paa"
		};
	};
	class bnae_spr220_so_base: bnae_spr220_base
	{
		author="Bnae";
		dlc="p8_mod";
		model="bnae_spr220\bnae_spr220\bnae_spr220_so";
		picture="\bnae_spr220\bnae_spr220\UI\gear_bnae_spr220_so_x_ca";
		displayname="SPR220 (Sawed Off)";
		descriptionShort="Old sawed-off double-barreled shotgun";
		fireSpreadAngle=4;
		recoil="recoil_spr220_so";
		hiddenSelectionsTextures[]=
		{
			"bnae_spr220\bnae_spr220\Data\Barrel\Barrel_co.paa",
			"bnae_spr220\bnae_spr220\Data\Body\Body_co.paa",
			"bnae_spr220\bnae_spr220\Data\Handle\Handle_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
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
	class bnae_spr220_so_virtual: bnae_spr220_so_base
	{
		scope=2;
		author="Bnae";
		dlc="p8_mod";
	};
	class bnae_spr220_so_camo1_virtual: bnae_spr220_so_base
	{
		scope=2;
		author="Bnae";
		dlc="p8_mod";
		displayname="SPR220 (Sawed Off, Digital)";
		picture="\bnae_spr220\bnae_spr220\UI\gear_bnae_spr220_so_camo1_x_ca";
		hiddenSelectionsTextures[]=
		{
			"bnae_spr220\bnae_spr220\Data\Barrel\Barrel_so_camo1_co.paa",
			"bnae_spr220\bnae_spr220\Data\Body\Body_camo1_co.paa",
			"bnae_spr220\bnae_spr220\Data\Handle\Handle_camo1_co.paa"
		};
	};
};
class CfgVehicles
{
	class Weapon_Base_F;
	class bnae_spr220_editor: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="SPR220";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		faction="BLU_F";
		author="Bnae";
		class TransportWeapons
		{
			class bnae_spr220_virtual
			{
				weapon="bnae_spr220_virtual";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 2Rnd_B_00_buckshot
			{
				magazine="2Rnd_B_00_buckshot";
				count=1;
			};
		};
	};
	class bnae_spr220_so_editor: Weapon_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="SPR220 (Sawed Off)";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_AssaultRifles";
		vehicleClass="WeaponsPrimary";
		faction="BLU_F";
		author="Bnae";
		class TransportWeapons
		{
			class bnae_spr220_so_virtual
			{
				weapon="bnae_spr220_so_virtual";
				count=1;
			};
		};
		class TransportMagazines
		{
			class 2Rnd_B_00_buckshot
			{
				magazine="2Rnd_B_00_buckshot";
				count=1;
			};
		};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518638007";
};
