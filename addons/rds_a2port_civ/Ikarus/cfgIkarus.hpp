
	class RDS_Ikarus_Base: Truck_F
	{
		EdPrev(RDS_Ikarus_Base)
		model="\rds_a2port_civ\Ikarus\ikarus.p3d";
		icon = "\rds_a2port_civ\data\map_ico\icomap_Bus_CA.paa";
		picture = "\rds_a2port_civ\data\ico\ikarus_pic_ca.paa";
		mapsize=11;

		displayName="Ikarus 260.03";

		hiddenselections[] = {"Camo1","Camo2","Camo3"};
		hiddenselectionstextures[] = {
			"\rds_a2port_civ\Ikarus\data\bus_exterior_co.paa",
			"\rds_a2port_civ\ikarus\data\bus_interior_co.paa",
			"\rds_a2port_civ\ikarus\data\bus_windows_ca.paa"
		};

		driveraction = "RDS_Ikarus_Driver";

		attenuationEffectType = "OpenCarAttenuation";
//attenuationEffectType="CarAttenuation";
		armor=32;
		cost=50000;
		transportMaxBackpacks=6;
		transportSoldier=23;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverRightLegAnimName = "pedalR";

		soundAttenuationCargo[]={0.5};
		#include "sounds.hpp"
		class Turrets
		{
		};
		class TransportItems {
			class _xx_rds_car_FirstAidKit {
				name = "rds_car_FirstAidKit";
				count = 1;
			};
			class _xx_rds_car_warning_triangle_to11 {
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
		};
		magazines[]=
		{
			"rds_empty_proxy",
			"rds_car_FirstAidKit_proxy",
			"rds_car_warning_triangle_to11_proxy"
		};
		unitInfoType = "RDS_RscUnitInfoCar";


		cargoaction[] = {"Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo01", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo02", "Truck_Cargo03", "Truck_Cargo03", "Truck_Cargo04", "Truck_Cargo04", "Truck_Cargo04", "Truck_Cargo04", "Truck_Cargo04", "Ikarus_Cargo", "Ikarus_Cargo", "Ikarus_Cargo", "Ikarus_Cargo"};
		memoryPointsGetInCargo[] =
		{
		//1-5
			"pos cargo1",
			"pos cargo",
			"pos cargo1",
			"pos cargo",
			"pos cargo2",
		//6-10
			"pos cargo1",
			"pos cargo1",
			"pos cargo1",
			"pos cargo2",
			"pos cargo2",
		//11-15
			"pos cargo",
			"pos cargo",
			"pos cargo2",
			"pos cargo",
			"pos cargo2",
		//16-20
			"pos cargo1",
			"pos cargo",
			"pos cargo",
			"pos cargo",
			"pos cargo",
		//21-23
			"pos cargo1",
			"pos cargo2",
			"pos cargo2"
		};
			memoryPointsGetInCargoDir[] =
		{
		//1-5
			"pos cargo1 dir",
			"pos cargo dir",
			"pos cargo1 dir",
			"pos cargo dir",
			"pos cargo2 dir",
		//6-10
			"pos cargo1 dir",
			"pos cargo1 dir",
			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo2 dir",
		//11-15
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo2 dir",
			"pos cargo dir",
			"pos cargo2 dir",
		//16-20
			"pos cargo1 dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",
			"pos cargo dir",

			"pos cargo1 dir",
			"pos cargo2 dir",
			"pos cargo2 dir"
		};
		driverDoor="Doors_1";
		cargoDoors[]=
		{
			"Doors_2",
			"Doors_1",
			"Doors_2",
			"Doors_1",
			"Doors_3",

			"Doors_2",
			"Doors_2",
			"Doors_2",
			"Doors_3",
			"Doors_3",

			"Doors_1",
			"Doors_1",
			"Doors_3",
			"Doors_1",
			"Doors_3",

			"Doors_2",
			"Doors_1",
			"Doors_1",
			"Doors_1",
			"Doors_1",

			"Doors_2",
			"Doors_1",
			"Doors_1",
			"Doors_2",
			"Doors_3",

			"Doors_2",
			"Doors_3",
			"Doors_3"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1"
		};
		class AnimationSources: AnimationSources
		{
			class longlights_hide
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 1;
			};
			class shortlights_hide: longlights_hide {initPhase = 0;};
			class lights_hide: longlights_hide {initPhase = 0;};
			class cabinlights_hide: longlights_hide {};
			class cargolights_hide: lights_hide {};
			class Doors_1
			{
				source="door";
				animPeriod=1.7;
				sound = "RDS_Ikarus_Door1";
				soundPosition = "pos cargo dir";
			};
			class Doors_2: Doors_1 {
				sound = "RDS_Ikarus_Door1";
				soundPosition = "pos cargo1 dir";
			};
			class Doors_3: Doors_1 {
				sound = "RDS_Ikarus_Door2";
				soundPosition = "pos cargo2 dir";
			};
			class blinker_L: Doors_1
			{
				sound = "RDS_Blinker";
				soundPosition = "blinker_sound";
				animPeriod=0.35;
			};
			class blinker_R: blinker_L  {};
		};

		class UserActions
		{
			class openDoors
			{
				displayName = Open Doors;
				position = "";
				radius = 5;
				showWindow = 0;
				condition = "(player == driver this) && (this animationPhase 'door_1' < 0.5)";
				statement = "[vehicle player,1] call rds_fnc_ikarusDoors";
				onlyForPlayer = 1;
			};
			class closeDoors:  openDoors
			{
				displayName = Close Doors;
				condition = "(player == driver this) && (this animationPhase 'door_1' > 0.5)";
				statement = "[vehicle player,0] call rds_fnc_ikarusDoors";
			};
			class lights_toggle
			{
				displayName="Toggle short/long lights";
				position="";
				shortcut = "vehLockTargets";
				radius = 12;
				priority = 1.5;
				showWindow = 0;
				onlyForplayer = 1;
				condition = "(player == driver this) AND (isLightOn this)";
				statement = "[this,0] call rds_fnc_carLightToggle";
			};
			class cabinlights_toggle: lights_toggle
			{
				shortcut = "lockTarget";
				displayName="Toggle cabin lights";
				statement = "[this,1] call rds_fnc_carLightToggle";
			};
			class cargolights_toggle: lights_toggle
			{
				shortcut = "";
				displayName="Toggle passanger comparment lights";
				statement = "this animate ['cargolights_hide',abs((this animationPhase 'cargolights_hide')-1)]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.675;
				passThrough=0.3;
				radius = 0.2;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.675;
				passThrough=0.3;
				radius = 0.2;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.675;
				passThrough=0.3;
				radius = 0.2;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.675;
				passThrough=0.3;
				radius = 0.2;
			};
			class HitFuel
			{
				armor=2.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor=2.0;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0.2;
				radius = 0.07;
				class DestructionEffects {
					ammoExplosionEffect = "";

					class RHS_Engine_Smoke
					{
						simulation = "particles";
						type = SmallWreckSmoke;
						position = "engine_smoke1";
						intensity = 0.5;
						interval = 1;
						lifeTime = 60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type = SmallFireFPlace;
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type = FireSparks;
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation = "sound";
						type = "Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type = WeaponWreckSmoke;
						//type = "CraterSmoke";
						position = "engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke3";
					};
					class RHS_Engine_Smoke_small3: RHS_Engine_Smoke_small1
					{
						position = "engine_smoke4";
					};
				};
			};
			class HitBody: HitBody
			{
				name="karoserie";
				visual="camo1";
				passThrough=1;
				radius = 0.1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.1;
				radius = 0.2;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.05;
				radius = 0.2;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.05;
				radius = 0.2;
			};
			class HitGlass4: HitGlass4
			{
				visual="glass4";
				armor=0.05;
				radius = 0.2;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.05;
				radius = 0.2;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.05;
				radius = 0.2;
			};
		};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";

		dustFrontLeftPos = "Stopa PPL";
		dustFrontRightPos = "Stopa PPP";
		dustBackLeftPos = "Stopa ZPL";
		dustBackRightPos = "Stopa ZPP";

		class Damage {
			mat[] =
			{
				"rds_a2port_civ\Ikarus\Data\Bus_exterior.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_exterior_damage.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_exterior_destruct.rvmat",

				"rds_a2port_civ\Ikarus\Data\Bus_interior.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_interior_damage.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_interior_destruct.rvmat",

				"rds_a2port_civ\Ikarus\Data\Bus_windows.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_windows_damage.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_windows_damage.rvmat",

				"rds_a2port_civ\Ikarus\Data\Bus_windows_in.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_windows_in_damage.rvmat",
				"rds_a2port_civ\Ikarus\Data\Bus_windows_in_damage.rvmat",

				"a3\data_f\default.rvmat",
				"a3\data_f\default.rvmat",
				"a3\data_f\default_destruct.rvmat"
			};
			tex[] = {};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectOffroad";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="L svetlo";
				direction="konec L svetla";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=30;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=1.5;
				useFlare=1;
				dayLight=0;
				flareSize=0.85000002;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class RSvetla: LSvetla
			{
				position="P svetlo";
				direction="konec P svetla";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: RSvetla
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Left2: LSvetla
			{
				useFlare=1;
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left
			{
				color[]={800,900,650};
				ambient[]={5,5,5};
				position="Light_L_Long";
				direction="Light_L_Long_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle = 22;
				outerAngle = 29;
				coneFadeCoef = 1;
				intensity = 100;
				useFlare=0;
				dayLight=0;
				flareSize = 1.5;
				flareMaxDistance = 750;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 500;
					hardLimitEnd = 750;
				};
			};
			class Long_Right: Long_Left
			{
				position="Light_R_Long";
				direction="Light_R_Long_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Long_Right2: Long_Right
			{
				useFlare=1;
				position="light_R_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class Long_Left2: Long_Left
			{
				useFlare=1;
				position="light_L_Long_flare";
				innerAngle=50;
				outerAngle=179;
				coneFadeCoef = 51;
				intensity = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cabin
			{
				color[]={800,900,650};
				ambient[] = {5,0,0};
				intensity = 4;
				size = 1;
				innerAngle = 90;
				outerAngle = 165;
				coneFadeCoef = 1;
				position = "cabin_light";
				direction = "cabin_light_dir";
				hitpoint = "cabin_light";
				selection = "cabin_light";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 5;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 3;
				};
			};
			class cargo_light_1: cabin
			{
				color[]={800,900,750};
				position = "cargo_light_1";
				direction = "cargo_light_1_dir";
				hitpoint = "cargo_light_1";
				selection = "cargo_light_1";
				intensity = 71;
				useFlare = 0;
				coneFadeCoef = 1;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 70;
					hardLimitStart = 2;
					hardLimitEnd = 3;
				};
			};
			class cargo_light_2: cargo_light_1
			{
				position = "cargo_light_2";
				direction = "cargo_light_2_dir";
				hitpoint = "cargo_light_2";
				selection = "cargo_light_2";
			};
			class cargo_light_3: cargo_light_1
			{
				position = "cargo_light_3";
				direction = "cargo_light_3_dir";
				hitpoint = "cargo_light_3";
				selection = "cargo_light_3";
			};
		};
		aggregateReflectors[]=
		{
			{"LSvetla","RSvetla"},
			{
				"Long_Left2",
				"Long_Right2"
			}
		};

		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="m1p";
					pointDirection="m1d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.5;
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="m2p";
					pointDirection="m2d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
			};
			class RightMirrorSmall
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="m4p";
					pointDirection="m4d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.5;
				};
			};
			class BackMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="m3p";
					pointDirection="m3d";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.7;
				};
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="Brigadertrans";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\Ikarus\data\bus_exterior_co.paa",
					"\rds_a2port_civ\ikarus\data\bus_interior_co.paa",
					"\rds_a2port_civ\ikarus\data\bus_windows_ca.paa"
				};
				factions[]=
				{
					rds_rus_civ
				};
			};
			class Desert: standard
			{
				displayName="Khan Mohad (TK)";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\Ikarus\data\bus_exterior_eciv_co.paa",
					"\rds_a2port_civ\ikarus\data\bus_interior_eciv_co.paa",
					"\rds_a2port_civ\ikarus\data\bus_windows_eciv_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"standard", 1,
			"Desert", 0
		};
		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_lock_cargo {
				displayName = "Driver door control";
				tooltip = "Define if passangers are able to get in/out on their own. If true, driver needs to open doors to allow passanger movement";
				property = "rds_lock_cargo";
				control = "Checkbox";
				expression = "_this setVariable ['%s', _value,true];_this lockCargo _value";
				defaultValue = "false";
			};
			class rds_blinkers {
				displayName = "Blinker control";
				tooltip = "Responsible for blinkers control, following values are accepted: -1: turn off, 0: left blinker, 1: right blinker, 2: hazard lights";
				property = "rds_blinkers";
				control = "Combo";
				expression = "[_this,_value] spawn rds_fnc_migacze_Eden";
				//expression = "[_this,_value] execVM 'rds_migacze_Eden.sqf'";
				defaultValue = -1;
				typeName = "Number";
				class values {
					class blinker {
						name = "Turned off";
						value = -1;
					};
					class blinker0 {
						name = "Left blinker on";
						value = 0;
					};
					class blinker1 {
						name = "Right blinker on";
						value = 1;
					};
					class blinker2 {
						name = "Emergency lights on";
						value = 2;
					};
				};
			};
			class Doors_1 {
				displayName = "Open 1st doors";
				property = "Doors_1";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Doors_2: Doors_1 {
				displayName = "Open 2nd doors";
				property = "Doors_2";
			};
			class Doors_3: Doors_1 {
				displayName = "Open 3rd doors";
				property = "Doors_3";
			};
			class cargolights_hide: Doors_1 {
				displayName = "Turn off cargo lights";
				tooltip = "Disable light in passenger comparment";
				property = "cargolights_hide";
				expression = "_this animate ['%s',_value,true]";
			};
		};

		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				//hitpart = "_this call rhsusf_fnc_hitPart";
				dammaged		= "_this call rds_fnc_fuelLeak;";
				getIn 			= "_this call rds_fnc_ikarusDoors_handler";
				getOut 			= "_this call rds_fnc_ikarusDoors_handler";
			};
		};
		#include "PhysX_Ikarus.hpp"
	};

	class RDS_Ikarus_Civ_Base: RDS_Ikarus_Base
	{
		EdPrev(RDS_Ikarus_Civ_Base)
		accuracy = 0.5;
		crew = "RDS_Worker_random";
		faction="rds_rus_civ";
		side = 3;
	};

	class RDS_Ikarus_Civ_01: RDS_Ikarus_Civ_Base
	{
		EdPrev(RDS_Ikarus_Civ_01)
		scope=2;
		AUTHOR_MACRO
	};


	class RDS_Ikarus_Civ_02: RDS_Ikarus_Civ_01
	{
		EdPrev(RDS_Ikarus_Civ_02)
		AUTHOR_MACRO
		displayName="Ikarus 260.03 (TK)";
		hiddenselectionstextures[] = {
			"\rds_a2port_civ\Ikarus\data\bus_exterior_eciv_co.paa",
			"\rds_a2port_civ\ikarus\data\bus_interior_eciv_co.paa",
			"\rds_a2port_civ\ikarus\data\bus_windows_eciv_ca.paa"
		};
	};



