
	class RDS_Golf4_Base: Car_F
	{
		EdPrev(RDS_Golf4_Base)
		model="\rds_a2port_civ\VWGOLF\vwgolf";
		icon="\rds_a2port_civ\data\map_ico\icon_VWGolf_ca.paa";
		picture = "\rds_a2port_civ\data\ico\golf4_pic_ca.paa";
		mapsize=5;

		displayName="Golf IV 1.9 TDI";

		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[] = {"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_co.paa"};


		driveraction = "RDS_Golf_Driver";
		getInRadius = 1.5;

		attenuationEffectType = "OpenCarAttenuation";
		armor=22;
		cost=10000;
		transportMaxBackpacks=6;
		transportSoldier=4;
		wheelDamageRadiusCoef=0.89;
		wheelDestroyRadiusCoef=0.4;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="gear";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";

		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";

		//heat settings

		afmax = 200;
		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;

		soundAttenuationCargo[]={0.5};
		#include "sounds.hpp"
		class Turrets
		{
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};

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


		cargoaction[] = {"RDS_Golf_Cargo01", "RDS_Golf_Cargo02", "RDS_Golf_Cargo02", "RDS_Golf_Cargo03"};

		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 2", "pos cargo 3", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1", "pos cargo dir 2", "pos cargo dir 3", "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LB",
			"Door_RB",
			"Trunk"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1","Compartment2","Compartment2","Compartment3"
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

			class Door_LF
			{
				source="door";
				animPeriod=1.0;
				sound = "RDS_Golf_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_LB: Door_LF {
				soundPosition = "door_1_2_axis";};
			class Door_RB: Door_LF {
				soundPosition = "door_2_2_axis";};
			class Door_RF: Door_LF {
				soundPosition = "door_2_1_axis";};
			class Trunk: Door_LF {
				sound = "RDS_Trunk";
				soundPosition = "trunk_axis";
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod=0.35;
			};
			class blinker_R: blinker_L  {};
		};
		class UserActions
		{
			class openDoors
			{
				displayName = Open Trunk;
				position = "trunk_action";
				radius = 1;
				showWindow = 0;
				condition = "(this animationPhase 'trunk' < 0.5)";
				statement = "this animateDoor ['trunk',1]";
				onlyForPlayer =0;
			};
			class closeDoors:  openDoors
			{
				displayName = Close Trunk;
				condition = "(this animationPhase 'trunk' > 0.5)";
				statement = "this animateDoor ['trunk',0]";
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
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.23;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.23;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.23;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.23;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				visual="";
				passThrough=0.2;
				radius = 0.1;
			};
			class HitEngine
			{
				armor=0.6;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0.2;
				radius = 0.1;
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
		getInAction="GetInOffroad";
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
				"rds_a2port_civ\VWGOLF\Data\VWgolf_body.rvmat",
				"rds_a2port_civ\VWGOLF\Data\vwgolf_body_damage.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_body_destruct.rvmat",

				"rds_a2port_civ\VWGOLF\Data\VWGolf_carriage.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWGolf_carriage.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWGolf_carriage_destruct.rvmat",

				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier2.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier2.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier2_destruct.rvmat",

				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_interier_destruct.rvmat",

				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_damage.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_damage.rvmat",

				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat",
				"rds_a2port_civ\VWGOLF\Data\VWgolf_sklo_in_damage.rvmat",

				"rds_a2port_civ\VWGOLF\Data\vwgolf_wheels.rvmat",
				"rds_a2port_civ\VWGOLF\Data\vwgolf_wheels.rvmat",
				"rds_a2port_civ\VWGOLF\Data\vwgolf_wheels_destruct.rvmat",

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
				coneFadeCoef=5;
				intensity=3.5;
				useFlare=0;
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
		#include "PhysX_Golf4.hpp"
		class textureSources
		{
			class standard
			{
				displayName="Red";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_co.paa"
				};
				factions[]=
				{
					rds_rus_civ
				};
			};
			class Black: standard
			{
				displayName="Black";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_black_co.paa"
				};
			};
			class Blue: standard
			{
				displayName="Blue";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_blue_co.paa"
				};
			};
			class Yellow: standard
			{
				displayName="Yellow";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_yellow_co.paa"
				};
			};
			class White: standard
			{
				displayName="White";
				AUTHOR_MACRO
				textures[]=
				{
					"\rds_a2port_civ\VWGOLF\Data\vwgolf_body_white_co.paa"
				};
			};
		};
		textureList[]=
		{
			"standard", 0.2,
			"Black", 0.2,
			"Blue", 0.2,
			"Yellow", 0.2,
			"White",0.2
		};
		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
			class rds_random_spare {
				collapsed = 1;
				displayName = "Random spare wheel control";
				tooltip = "Define if spare wheels spawning behaviour.";
				property = "rds_random_spare";
				control = "Combo";
				expression = "_this setVariable ['%s', _value,true];";
				defaultValue = 0;
				typeName = "NUMBER";
				class values {
					class Random {
						name = "Random";
						value = 0;
						default = 0;
					};
					class Enabled {
						name = "Always";
						value = 1;
						default = 1;
					};
					class Disabled {
						name = "Never";
						default = 2;
						value = 2;
					};
				};
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
			class Door_LF {
				displayName = "Open front left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF {
				displayName = "Open front right door";
				property = "Door_RF";
			};
			class Door_LB: Door_LF {
				displayName = "Open rear left door";
				property = "Door_LB";
			};
			class Door_RB: Door_LF {
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Trunk: Door_LF {
				displayName = "Open trunk";
				property = "Trunk";
			};
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), '', [], false] call bis_fnc_initVehicle;};";
			class RDS_Civ_EH
			{
				init 			= "[_this select 0,'RDS_Sparewheel_golf4'] spawn rds_fnc_random_spareWheel";
				EPEContactStart = "_this call rds_fnc_carAlarm_detect";
				hit 			= "_this call rds_fnc_carAlarm_detect;";
				dammaged		= "_this call rds_fnc_fuelLeak;";
				firedNear 		= "_this call rds_fnc_carAlarm_detect2";
				containerOpened = " (_this + [0,'trunk']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'trunk']) call rds_fnc_containerActions";
			};
		};
	};

	class RDS_Golf4_Civ_Base: RDS_Golf4_Base
	{
		EdPrev(RDS_Golf4_Civ_Base)
		accuracy = 0.5;
		crew = "RDS_Profiteer_random";
		faction="rds_rus_civ";
		side = 3;
	};

	class RDS_Golf4_Civ_01: RDS_Golf4_Civ_Base
	{
		EdPrev(RDS_Golf4_Civ_01)
		scope=2;
		AUTHOR_MACRO
	};

