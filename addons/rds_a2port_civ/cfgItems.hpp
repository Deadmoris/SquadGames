class cfgAmmo
{
	class MissileBase;
	class rds_ammo_car_FirstAidKit_proxy : MissileBase
	{
		hit =0;cost=0;
		maverickweapon = 1;
		maverickWeaponIndexOffset=10;
		proxyShape="\rds_a2port_civ\items\rds_apteczka_proxy";
	};
	class rds_ammo_car_warning_triangle_to11_proxy : rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset=20;
		proxyShape="\rds_a2port_civ\items\rds_to11_pudelko";
	};
	class rds_ammo_Sparewheel_lada_proxy : rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset=30;
		proxyShape="\rds_a2port_civ\sparewheels\rds_spare_lada_proxy";
	};
	#define A_Pods(name) class rds_ammo_Sparewheel_##name##_proxy : rds_ammo_Sparewheel_lada_proxy {proxyShape=\rds_a2port_civ\sparewheels\rds_spare_##name##_proxy;};
	A_Pods(golf4)
	A_Pods(octavia)
	A_Pods(s1203)
	A_Pods(ikarus)
	A_Pods(gaz24)

	class rds_ammo_empty_proxy : rds_ammo_car_FirstAidKit_proxy
	{
		maverickWeaponIndexOffset=100;
		proxyShape="\A3\weapons_f\empty.p3d";
	};

};

#define R_Pods(name) class rds_##name##_proxy : VehicleMagazine {ammo = rds_ammo_##name##_proxy;count = 1;};

class cfgMagazines
{
	class VehicleMagazine;
	R_Pods(car_FirstAidKit)
	R_Pods(car_warning_triangle_to11)

	R_Pods(Sparewheel_lada)
	R_Pods(Sparewheel_golf4)
	R_Pods(Sparewheel_octavia)
	R_Pods(Sparewheel_s1203)
	R_Pods(Sparewheel_ikarus)
	R_Pods(Sparewheel_gaz24)

	R_Pods(empty)
	class UGL_FlareGreen_F;
	class rds_dummy_mag: UGL_FlareGreen_F
	{
		allowedSlots[] = {};
		scopeArsenal=0;scope=1;
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryFirstAidKitItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryFinsItem_Base_F;

	class BikeHorn;
	class RDS_BikeHorn: BikeHorn
	{
		drySound[] = {"rds_a2port_civ\data\sounds\BikeHorn",2,1,200};
	};

	class rds_car_FirstAidKit : ItemCore {
		scope = 2;
		AUTHOR_MACRO

		displayName = "Car First Aid Kit";
		picture = "\rds_a2port_civ\items\pic\pic_apteczka.paa";
		model = "\rds_a2port_civ\items\rds_apteczka";
		descriptionShort = "Use to treat heavy wounds.<br/>Usable on: Self, Others";
		class ItemInfo : InventoryFirstAidKitItem_Base_F {
			mass = 12;
		};
	};
	class rds_car_warning_triangle_to11 : ItemCore {
		scope = 2;
		AUTHOR_MACRO
		displayName = "Warning Triangle TO-11";
		picture = "\rds_a2port_civ\items\pic\pic_trojkat_to11.paa";
		model = "\rds_a2port_civ\items\rds_to11";
		descriptionShort = "Place 30-100 m behind the car. On highways distance increase to 200m";
		class ItemInfo : InventoryFinsItem_Base_F {
			mass = 12;
            		type = 301;
			class Pointer {};
			class FlashLight {};
		};
	};
	class acc_flashlight;
	class rds_acc_switch : acc_flashlight
	{
		AUTHOR_MACRO
		scope = 2;

		displayName = Switch;
		descriptionShort = Switch;

		picture = "\A3\Weapons_F\Data\clear_empty.paa"; //- turned off for now
		model = "\A3\Weapons_f\empty";

		class ItemInfo : InventoryFlashLightItem_Base_F
		{
			mass = 2;
			class Pointer {};
			class FlashLight {};
		};
		inertia = 0.0;
	};

	class Pistol_Base_F;
	class rds_weap_latarka_janta: Pistol_Base_F
	{
		AUTHOR_MACRO
		scope = 2;

		magazines[] = {"rds_dummy_mag"};

		displayname = "Flashlight 'Janta'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Handheld flashlight";

		model = "\rds_a2port_civ\items\rds_latarka_janta";
		picture = "\rds_a2port_civ\items\pic\rds_janta_pic.paa";

		handAnim[]= {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_janta.rtm"};

		optics=0;
		weaponInfoType = "rds_rscOptics_janta";

		class FlashLight
		{
			color[] = {180,150,120};
			ambient[] = {9,7.5,6};
			intensity = 23;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};

		sounds[] = {"StandardSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect = "DefaultRifle";
			closure1[] = {"",1.03514,1,10};
			soundClosure[] = {"closure1",1};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\Sounds_F_Kart\Weapons\starting_pistol_1",1,1,700};
			soundBegin[] = {"begin1",1};
		};
		class GunParticles{};

		class WeaponSlotsInfo
		{
			mass=27;
			holsterScale = 0;
			class PointerSlot: PointerSlot {
				compatibleItems[] = {"rds_acc_switch"};
			};
		};
	};
	class rds_weap_latarka_lts1: rds_weap_latarka_janta
	{
		AUTHOR_MACRO
		displayname = "Flashlight 'LTS-1'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Touristic flashlight 'LTS-1'";
		weaponInfoType = "rds_rscOptics_lts1";

		model = "\rds_a2port_civ\items\rds_latarka_lts1";
		picture = "\rds_a2port_civ\items\pic\rds_lts1_pic.paa";

		class FlashLight
		{
			color[] = {98,83,42};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};

		handAnim[]= {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_lts1.rtm"};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=18;
		};

		rds_next_flashlight_mode = "rds_weap_latarka_lts1_red";
	};
	class rds_weap_latarka_lts1_red: rds_weap_latarka_lts1
	{
		AUTHOR_MACRO
		scope = 1;
		scopeArsenal = 0;
		displayname = "Flashlight 'LTS-1 (Red)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_red";
		class FlashLight
		{
			color[] = {98,15,0.7};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1_green";
	};
	class rds_weap_latarka_lts1_green: rds_weap_latarka_lts1_red
	{
		AUTHOR_MACRO
		displayname = "Flashlight 'LTS-1 (Green)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_green";
		class FlashLight
		{
			color[] = {7,71,0};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1_vertical";
	};
	class rds_weap_latarka_lts1_vertical: rds_weap_latarka_lts1_red
	{
		AUTHOR_MACRO
		displayname = "Flashlight 'LTS-1 (Vertical)'";
		displaynameShort = "Handheld flashlight";
		descriptionShort = "Touristic flashlight 'LTS-1  (Vertical)'";
		model = "\rds_a2port_civ\items\rds_latarka_lts1_Vertical";
		handAnim[]= {"OFP2_ManSkeleton","\rds_a2port_civ\items\anims\rds_latarka_lts1_vertical.rtm"};
		class FlashLight
		{
			// green
			//color[] = {70,710,0};
			// red
			//color[] = {980,150,7};
			// white
			color[] = {9.9,7.3,1};
			ambient[] = {9.9,7.3,1};
			intensity = 15;
			size = 1;
			innerAngle = 300;
			outerAngle = 360;
			coneFadeCoef = 2.5;
			position = "flashlight_dir";
			direction = "flashlight_pos";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = "100.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 0.05;
				constant = 0;
				linear = 0;
				quadratic = 0;
				hardLimitStart = .02;
				hardLimitEnd = 8;
			};
			scale[] = {0};
		};
		rds_next_flashlight_mode = "rds_weap_latarka_lts1";
	};
};