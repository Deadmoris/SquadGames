class CfgPatches
{
	class bnae_core
	{
		author="Bnae";
		units[]={};
		weapons[]={};
		ammo[]=
		{
			"B_2rnd_00_buckshot",
			"B_357_Ball"
		};
		magazines[]=
		{
			"6Rnd_B_357_Mag",
			"8Rnd_9x19_B",
			"30Rnd_762x39_Mag_B",
			"2Rnd_B_00_buckshot",
			"6Rnd_B_00_buckshot",
			"7Rnd_B_338_lapua",
			"9Rnd_B_45ACP"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F"
		};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_9x21_Mag;
	class 20Rnd_762x51_Mag;
	class 9Rnd_45ACP_Mag;
	class 16Rnd_9x21_Mag;
	class 6Rnd_357M_Magazine: 30Rnd_9x21_Mag
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_colt_mag";
		displayName="6Rnd .357";
		ammo="B_357M_Ball";
		count=6;
		initSpeed=440;
		picture="\bnae_core\bnae_core\UI\gear_bnae_colt_mag_x_ca";
		descriptionShort=".357 Magnum";
		mass=6;
	};
	class 8Rnd_9x19_Magazine: 16Rnd_9x21_Mag
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_l35_mag";
		displayName="8Rnd 9x19";
		count=8;
		initSpeed=390;
		picture="\bnae_core\bnae_core\UI\gear_bnae_l35_mag_x_ca";
		descriptionShort="Parabellum";
		mass=6;
	};
	class 30Rnd_762x39_Magazine: 20Rnd_762x51_Mag
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_rk95_mag";
		displayName="30Rnd 7.62x39";
		ammo="B_762x51_Ball";
		count=30;
		initSpeed=730;
		picture="\bnae_core\bnae_core\UI\gear_bnae_rk95_mag_x_ca";
		descriptionShort="";
		mass=12;
	};
	class 2Rnd_00_Buckshot_Magazine: CA_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_shotgun_mag";
		displayName="2Rnd 00-Buckshot";
		ammo="B_12G_Pellet";
		count=2;
		initSpeed=400;
		picture="\bnae_core\bnae_core\UI\gear_bnae_shotgun_mag_x_ca";
		descriptionShort="00-Buckshot";
		mass=4;
	};
	class 2Rnd_Slug_Magazine: 2Rnd_00_Buckshot_Magazine
	{
		displayName="2rnd Slug";
		ammo="B_12G_Slug";
		count=2;
		initSpeed=600;
		picture="\bnae_core\bnae_core\UI\gear_bnae_shotgun_mag_x_ca";
		descriptionShort="Slugs";
	};
	class 6Rnd_00_Buckshot_Magazine: CA_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_shotgun_mag";
		displayName="6rnd 00-Buckshot";
		ammo="B_12G_Pellet";
		count=6;
		initSpeed=400;
		picture="\bnae_core\bnae_core\UI\gear_bnae_shotgun_mag_x_ca";
		descriptionShort="00-Buckshot";
		mass=6;
	};
	class 6Rnd_Slug_Magazine: 6Rnd_00_Buckshot_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		displayName="6rnd Slug";
		ammo="B_12G_Slug";
		count=6;
		initSpeed=600;
		picture="\bnae_core\bnae_core\UI\gear_bnae_shotgun_mag_x_ca";
		descriptionShort="Slugs";
	};
	class 5Rnd_00_Buckshot_Magazine: 6Rnd_00_Buckshot_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		displayName="5rnd 00-Buckshot";
		count=5;
		mass=5;
	};
	class 5Rnd_Slug_Magazine: 6Rnd_Slug_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		displayName="5rnd Slug";
		count=5;
	};
	class 5Rnd_338LM_Magazine: CA_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_trg42_mag";
		displayName="5Rnd .338LM";
		ammo="B_338LM_Ball";
		count=5;
		initSpeed=1005;
		picture="\bnae_core\bnae_core\UI\gear_bnae_trg42_mag_x_ca";
		descriptionShort=".338 Lapua Magnum";
		mass=10;
	};
	class 5Rnd_APDS_338LM_Magazine: 5Rnd_338LM_Magazine
	{
		model="bnae_core\bnae_core\mesh\bnae_trg42_mag";
		displayName="5Rnd .338LM APDS";
		ammo="B_338LM_APDS";
		initSpeed=1120;
		picture="\bnae_core\bnae_core\UI\gear_bnae_trg42_apds_mag_x_ca";
		descriptionShort=".338LM Armor-piercing ammunition";
	};
	class 10Rnd_303_Magazine: CA_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_mk1_mag";
		displayName="10Rnd .303";
		ammo="B_303_Ball";
		count=10;
		initSpeed=915;
		picture="\bnae_core\bnae_core\UI\gear_bnae_mk1_mag_x_ca";
		descriptionShort=".303 British";
		mass=8;
	};
	class 8Rnd_45GAP_Magazine: 9Rnd_45ACP_Mag
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_r1_mag";
		displayName="8Rnd .45 G.A.P";
		ammo="B_45GAP_Ball";
		count=8;
		initSpeed=350;
		picture="\bnae_core\bnae_core\UI\gear_bnae_r1_gap_mag_x_ca";
		mass=6;
	};
	class 8Rnd_45ACP_Magazine: 9Rnd_45ACP_Mag
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_r1_mag";
		displayName="8Rnd .45 ACP";
		count=8;
		initSpeed=320;
		picture="\bnae_core\bnae_core\UI\gear_bnae_r1_gap_mag_x_ca";
		mass=6;
	};
	class 8Rnd_45Super_Magazine: 8Rnd_45GAP_Magazine
	{
		displayName="8Rnd .45 Super";
		ammo="B_45Super_Ball";
		initSpeed=400;
		picture="\bnae_core\bnae_core\UI\gear_bnae_r1_super_mag_x_ca";
	};
	class 10Rnd_300WM_Magazine: CA_Magazine
	{
		author="Bnae";
		dlc="p8_mod";
		scope=2;
		model="bnae_core\bnae_core\mesh\bnae_falkor_mag";
		displayName="10Rnd .300WM";
		ammo="B_300WM_Ball";
		count=10;
		initSpeed=990;
		picture="\bnae_core\bnae_core\UI\gear_bnae_falkor_mag_x_ca";
		descriptionShort=".300 Winchester Magnum";
		mass=8;
	};
};
class CfgAmmo
{
	class BulletBase;
	class ShotgunBase;
	class B_12G_Pellet: BulletBase
	{
		hit=2;
		typicalSpeed=200;
		indirectHit=0;
		indirectHitRange=0;
		simulation="shotSpread";
		cartridge="FxCartridge_slug";
		fireSpreadAngle=1;
		cost=5;
		visibleFire=10;
		audibleFire=15;
		airFriction=-0.023;
		caliber=0;
		waterEffectOffset=-0.80000001;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		model="\A3\Weapons_f\ammo\shell";
	};
	class B_12G_Slug: BulletBase
	{
		hit=42;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_slug";
		cost=5;
		typicalSpeed=600;
		airFriction=-0.0070000002;
		caliber=3;
		deflecting=30;
	};
	class B_357M_Ball: BulletBase
	{
		hit=12;
		indirectHit=0;
		indirectHitRange=0;
		dangerRadiusBulletClose=6;
		dangerRadiusHit=10;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		cartridge="FxCartridge_9mm";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber=0.44999999;
		deflecting=30;
		audibleFire=45;
		cost=100;
		typicalSpeed=440;
		airFriction=-0.0018;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
	};
	class B_303_Ball: BulletBase
	{
		hit=15;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_Ball";
		audibleFire=80;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=1.9;
		typicalSpeed=844;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060000003;
		class CamShakeExplode
		{
			power="(10^0.5)";
			duration="((round (10^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((10^0.5)*3)";
		};
		class CamShakeHit
		{
			power=10;
			duration="((round (10^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_338LM_Ball: BulletBase
	{
		hit=19;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_Ball";
		visibleFire=5;
		audibleFire=120;
		visibleFireTime=3;
		cost=7;
		airLock=1;
		caliber=2.0999999;
		typicalSpeed=1005;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00044999999;
		class CamShakeExplode
		{
			power="(10^0.5)";
			duration="((round (10^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((10^0.5)*3)";
		};
		class CamShakeHit
		{
			power=10;
			duration="((round (10^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_338LM_APDS: B_338LM_Ball
	{
		hit=35;
		indirectHit=0;
		indirectHitRange=0;
		caliber=2.7;
		deflecting=10;
		typicalSpeed=1120;
		airFriction=-0.00022;
		cost=15;
		class CamShakeExplode
		{
			power="(20^0.5)";
			duration="((round (20^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((20^0.5)*3)";
		};
		class CamShakeHit
		{
			power=20;
			duration="((round (20^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
	class B_45GAP_Ball: BulletBase
	{
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		cartridge="FxCartridge_9mm";
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		caliber=0.40000001;
		deflecting=30;
		audibleFire=45;
		cost=100;
		typicalSpeed=350;
		airFriction=-0.001;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
	};
	class B_45Super_Ball: B_45GAP_Ball
	{
		typicalSpeed=420;
		airFriction=-0.00079999998;
	};
	class B_300WM_Ball: BulletBase
	{
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_Ball";
		audibleFire=80;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=6;
		airLock=1;
		caliber=1.8;
		typicalSpeed=990;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060000003;
		class CamShakeExplode
		{
			power="(10^0.5)";
			duration="((round (10^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((10^0.5)*3)";
		};
		class CamShakeHit
		{
			power=10;
			duration="((round (10^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
	};
};
class CfgRecoils
{
	class recoil_default;
	class recoil_spr220: recoil_default
	{
		muzzleOuter[]={1.9,4.8000002,0.80000001,1};
		kickBack[]={0.079999998,0.1};
		temporary=0.025;
	};
	class recoil_spr220_so: recoil_default
	{
		muzzleOuter[]={2.3,5.4000001,1,1.2};
		kickBack[]={0.1,0.12};
		temporary=0.035;
	};
	class recoil_m97: recoil_default
	{
		muzzleOuter[]={2.0999999,5,0.89999998,1.1};
		kickBack[]={0.090000004,0.11};
		temporary=0.027000001;
	};
	class recoil_pistol_saa: recoil_default
	{
		muzzleOuter[]={0.40000001,1.15,0.5,0.60000002};
		kickBack[]={0.035,0.07};
		temporary=0.032000002;
	};
	class recoil_rk95: recoil_default
	{
		muzzleOuter[]={0.27000001,1,0.30500001,0.30500001};
		kickBack[]={0.015,0.037};
		temporary=0.0080000004;
	};
};
class cfgMods
{
	class Mod_Base;
	class p8_mod: Mod_Base
	{
		name="Project Infinite";
		picture="bnae_core\bnae_core\ui\p8.paa";
		dir="@Project_Infinite";
		hideName=1;
		hidePicture=0;
		action="https://forums.bistudio.com/topic/196809-bnaes-arsenal/";
		author="Bnae";
		logo="bnae_core\bnae_core\ui\p8.paa";
		logoOver="bnae_core\bnae_core\ui\p8.paa";
		logoSmall="bnae_core\bnae_core\ui\p8.paa";
	};
	author="Bnae";
	timepacked="1518637871";
};
class CfgWeaponCursors
{
	class default;
	class ashotgun: default
	{
		texture="\bnae_core\bnae_core\UI\ashotgun_gs.paa";
		class Sections
		{
			class SectionLeft
			{
				uMin=0;
				uMax=0.23;
				vMin="0.5 - (1 / 2)";
				vMax="0.5 + (1 / 2)";
				xOffset=-30;
				yOffset=0;
			};
			class SectionTop
			{
				uMin="0.5 - (1 / 2)";
				uMax="0.5 + (1 / 2)";
				vMin=0;
				vMax=0.23;
				xOffset=0;
				yOffset=-30;
			};
			class SectionRight
			{
				uMin="1 - 0.23";
				uMax="1 - 0";
				vMin="0.5 - (1 / 2)";
				vMax="0.5 + (1 / 2)";
				xOffset=30;
				yOffset=0;
			};
			class SectionBottom
			{
				uMin="0.5 - (1 / 2)";
				uMax="0.5 + (1 / 2)";
				vMin="1 - 0.23";
				vMax="1 - 0";
				xOffset=0;
				yOffset=30;
			};
		};
	};
};
class CfgFunctions
{
	class bnae_function_fired
	{
		tag="bnae";
		class Misc
		{
			file="\bnae_core\bnae_core\Misc";
			class fired
			{
			};
		};
	};
};
