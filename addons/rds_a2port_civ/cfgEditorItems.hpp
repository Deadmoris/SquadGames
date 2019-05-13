#define ItemMacro(nameN,dispName,classN,EdClassN) \
    class Item_##nameN## : Item_Base_F {\
            scope = 2;\
            scopeCurator = 2;\
            displayName = ##dispName##;\
            author=$STR_RHSUSF_AUTHOR_FULL;\
            vehicleClass = ##classN##;\
            editorSubcategory = ##EdClassN##;\
            model = \A3\Weapons_f\dummyweapon.p3d;\
            class TransportItems {\
                class ##nameN## {\
                name = ##nameN##;\
                count = 1;\
            };\
        };\
    };

class Item_Base_F;

ItemMacro(rds_car_FirstAidKit,"Car First Aid Kit","Items","EdSubcat_InventoryItems")
ItemMacro(rds_car_warning_triangle_to11,"Warning Triangle TO-11","Items","EdSubcat_InventoryItems")
ItemMacro(rds_weap_latarka_janta,"Flashlight 'Janta'","Items","EdSubcat_InventoryItems")
ItemMacro(rds_weap_latarka_lts1,"Flashlight 'LTS-1'","Items","EdSubcat_InventoryItems")

// test
class Lamps_base_F;
class rds_latarka_janta_mapa: Lamps_base_F {
	AUTHOR_MACRO
	scope = 2;
	scopeCurator = 2;

	mapSize = 0.89;
	_generalMacro = "Land_rds_latarka_janta";
	editorPreview = "\rds_a2port_civ\items\pic\rds_janta_pic.paa";
	displayName = "Flashlight 'Janta' [On]";
	model = "\rds_a2port_civ\items\map\rds_latarka_janta_mapa.p3d";
	icon = "iconObject_1x1";
	editorCategory = "EdCat_Things";
	editorSubcategory = "EdSubcat_Office";
	vehicleClass = "Small_items";
	destrType = "destructEngine";
	aggregateReflectors[] =
	{
		{"Light_1"}
	};
	class Reflectors
	{
		class Light_1
		{
			color[] = {180,150,120};
			ambient[] = {9,7.5,6};
			intensity = 23;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_pos";
			direction = "flashlight_dir";
			hitpoint = "flashlight";
			selection = "light";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = 50;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
		};
	};
	class UserActions
	{
		class takeItem
		{
			displayName = "Take flashlight";
			position = "";
			radius = 2;
			showWindow = 1;
			condition = "alive this";
			statement = "[this, 'rds_weap_latarka_janta'] call rds_fnc_addItem";
			onlyForPlayer =1;
		};
	};
};
class rds_latarka_lts1_white_mapa: rds_latarka_janta_mapa {
	AUTHOR_MACRO
	displayName = "Flashlight 'LTS-1' (White) [On]";
	model = "\rds_a2port_civ\items\map\rds_latarka_lts1_mapa.p3d";
	editorPreview = "\rds_a2port_civ\items\pic\rds_lts1_pic.paa";
	class Reflectors
	{
		class Light_1
		{
			color[] = {98,83,42};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_pos";
			direction = "flashlight_dir";
			hitpoint = "flashlight";
			selection = "light";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = 50;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
		};
	};
	class UserActions: UserActions
	{
		class takeItem: takeItem
		{
			statement = "[this, 'rds_weap_latarka_lts1'] call rds_fnc_addItem";
		};
	};
};
class rds_latarka_lts1_red_mapa: rds_latarka_lts1_white_mapa {
	AUTHOR_MACRO
	displayName = "Flashlight 'LTS-1' (Red) [On]";
	class Reflectors
	{
		class Light_1
		{
			color[] = {98,15,.7};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_pos";
			direction = "flashlight_dir";
			hitpoint = "flashlight";
			selection = "light";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = 50;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
		};
	};
};
class rds_latarka_lts1_green_mapa: rds_latarka_lts1_white_mapa {
	AUTHOR_MACRO
	displayName = "Flashlight 'LTS-1' (Green) [On]";
	class Reflectors
	{
		class Light_1
		{
			color[] = {7,71,0};
			ambient[] = {9,7.5,6};
			intensity = 16;
			size = 1;
			innerAngle = 20;
			outerAngle = 120;
			coneFadeCoef = 55;
			position = "flashlight_pos";
			direction = "flashlight_dir";
			hitpoint = "flashlight";
			selection = "light";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = 50;
			class Attenuation
			{
				start = 0.5;
				constant = 0;
				linear = 0;
				quadratic = 1;
				hardLimitStart = 20;
				hardLimitEnd = 30;
			};
		};
	};
};
class rds_latarka_lts1_omni_mapa: rds_latarka_lts1_white_mapa {
	AUTHOR_MACRO
	displayName = "Flashlight 'LTS-1' (Omni) [On]";
	model = "\rds_a2port_civ\items\map\rds_latarka_lts1_omni_mapa.p3d";

	class Reflectors
	{
		class Light_1
		{
			color[] = {9.9,7.3,1};
			ambient[] = {9.9,7.3,1};
			intensity = 15;
			size = 1;
			innerAngle = 300;
			outerAngle = 360;
			coneFadeCoef = 2.5;
			position = "flashlight_pos";
			direction = "flashlight_dir";
			hitpoint = "flashlight";
			selection = "light";
			useFlare = 1;
			flareSize = 0.4;
			flareMaxDistance = 50;
			class Attenuation
			{
				start = 0.05;
				constant = 0;
				linear = 0;
				quadratic = 0;
				hardLimitStart = .02;
				hardLimitEnd = 8;
			};
		};
	};
};