
	class RDS_S1203_Base: Car_F
	{
		EdPrev(RDS_S1203_Base)
		model="\rds_a2port_civ\S1203\S1203";
		icon = "\rds_a2port_civ\data\map_ico\icon_S1203_ca.paa";
		picture = "\rds_a2port_civ\data\ico\s1203_pic_ca.paa";
		mapsize=6;

		displayName="Skoda 1203";

		htmax = 1800;
		htmin = 60;
		mfact = 0;
		mfmax = 100;
		tbody = 0;
		getInRadius = 1.5;

		driveraction = "RDS_S1203_driver";

		attenuationEffectType = "OpenCarAttenuation";
		armor=22;
		cost=10000;
		wheelDamageRadiusCoef=0.89;
		wheelDestroyRadiusCoef=0.4;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=0.25;


		memoryPointSupply = "supply";
		supplyRadius = 0.5;
		unitInfoType = "RDS_RscUnitInfoCar";

		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="";
		driverRightLegAnimName = "pedalR";

		soundAttenuationCargo[]={0.5};
		#include "sounds.hpp"
		transportMaxBackpacks=6;
		transportSoldier=3;
		cargoProxyIndexes[] = {1,2,3};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerDoor="Door_RC";
				gunnerAction = "passenger_flatground_2";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				memoryPointsGetInGunner = "pos cargo 4";
				memoryPointsGetInGunnerDir = "pos cargo dir 4";
				gunnerName = "Passenger (Left Seat)";
				gunnerCompartments = "Compartment3";
				proxyIndex = 4;
				lodTurnedIn=1;
				lodTurnedOut=1;
				maxElev = 18;
				minElev = -29;
				maxTurn = 20;
				minTurn = -30;
				isPersonTurret = 1;
				enabledByAnimationSource = "Door_RC";
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_3";
				gunnerName = "Passenger (Right Seat)";
				memoryPointsGetInGunner = "pos cargo 5";
				memoryPointsGetInGunnerDir = "pos cargo dir 5";
				proxyIndex = 5;
				maxTurn = 25;
				minTurn = -25;
				minElev = -29;
			};
		};

		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class VehicleTransport
		{
			class Cargo
			{
				canBeTransported = 0;
			};
			class Carrier
			{
				cargoBayDimensions[] = {"bbox_1_1_pos","bbox_1_2_pos"};
				disableHeightLimit = 0;
				maxLoadMass = 5000;
				cargoAlignment[] = {"center","front"};
				cargoSpacing[] = {0,0,0};
				exits[] = {"VVT_exit"};
				unloadingInterval = 2;
				loadingDistance = 5;
				loadingAngle = 60;
				parachuteClassDefault = "O_Parachute_02_F";
				parachuteHeightLimitDefault = 5;
			};
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


		cargoaction[] = {"RDS_S1203_Cargo", "RDS_S1203_Cargo02", "RDS_S1203_Cargo01", "RDS_S1203_cargo03"};

		hiddenselections[] = {"camo1", "camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_co.paa", "rds_a2port_civ\S1203\data\s1203_glass_ca.paa"};

		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 3", "pos cargo 3", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1",  "pos cargo dir 3", "pos cargo dir 3", "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RB",
			"Door_RB",
			"Door_RC"
		};
		driverCompartments="Compartment1";
		cargoCompartments[]=
		{
			"Compartment1",
			"Compartment2",
			"Compartment2",
			"Compartment3"
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
				sound = "RDS_Lada_Door";
				soundPosition = "door_1_1_axis";
			};
			class Door_RB: Door_LF {
				soundPosition = "door_2_2_axis";};
			class Door_RF: Door_LF {
				soundPosition = "door_2_1_axis";};
			class Door_RC: Door_LF {
				sound = "RDS_Trunk";
				soundPosition = "door_3_1_axis";};
			class HitGlass1;
			class HitGlass7: HitGlass1 {hitpoint="HitGlass7";};
			class HitGlass8: HitGlass1 {hitpoint="HitGlass8";};
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
				position = "pos cargo dir 5";
				radius = 4;
				showWindow = 0;
				condition = "(this animationPhase 'BackDoor1' < 0.5)";
				statement = "this animateDoor ['Door_RC',1]";
				onlyForPlayer =0;
			};
			class closeDoors:  openDoors
			{
				displayName = Close Trunk;
				condition = "(this animationPhase 'BackDoor1' > 0.5)";
				statement = "this animateDoor ['Door_RC',0]";
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
			class Door_RB: Door_LF {
				displayName = "Open rear right door";
				property = "Door_RB";
			};
			class Door_RC: Door_LF {
				displayName = "Open trunk";
				property = "Door_RC";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				init			= "[_this select 0,'RDS_Sparewheel_s1203'] spawn rds_fnc_random_spareWheel";
				dammaged		= "_this call rds_fnc_fuelLeak;";
				containerOpened = " (_this + [0,'Door_RC']) call rds_fnc_containerActions";
				containerClosed = " (_this + [1,'Door_RC']) call rds_fnc_containerActions";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.13;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.13;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.13;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.975;
				passThrough=0.3;
				radius = 0.13;
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
				armor=0.7;
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
			class HitGlass7: HitGlass6
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass6
			{
				name="glass8";
				visual="glass8";
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
				"rds_a2port_civ\S1203\Data\s1203_mat.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_mat_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_mat_destruct.rvmat",

				"rds_a2port_civ\S1203\Data\s1203_glass.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_damage.rvmat",

				"rds_a2port_civ\S1203\Data\s1203_glass_in.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat",
				"rds_a2port_civ\S1203\Data\s1203_glass_in_damage.rvmat",

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
				intensity=2.5;
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
		#include "PhysX_S1203.hpp"
	};

	class RDS_S1203_Civ_Base: RDS_S1203_Base
	{
		EdPrev(RDS_S1203_Civ_Base)
		accuracy = 0.5;
		crew = "RDS_Worker_random";
		faction="rds_rus_civ";
		side = 3;
	};

	class RDS_S1203_Civ_01: RDS_S1203_Civ_Base
	{
		EdPrev(RDS_S1203_Civ_01)
		scope=2;
		AUTHOR_MACRO
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};
		class textureSources
		{
			class standard
			{
				displayName="Blue";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
				factions[]=
				{
					rds_rus_civ
				};
			};
			class green: standard
			{
				displayName="Green";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_green_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
			};
			class orange: standard
			{
				displayName="Orange";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_orange_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
			};
			class silver: standard
			{
				displayName="Silver";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_silver_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
			};
			class red: standard
			{
				displayName="Red";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_red_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
			};
			class white: standard
			{
				displayName="White";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_white_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"standard", 0.16,
			"green",0.16,
			"orange",0.16,
			"silver",0.16,
			"red",0.16,
			"white",0.16
		};

	};
	class RDS_S1203_Civ_02: RDS_S1203_Civ_Base
	{
		EdPrev(RDS_S1203_Civ_02)
		scope=2;
		AUTHOR_MACRO
		displayName="Skoda 1203 (Ambulance)";
		model="\rds_a2port_civ\S1203\S1203_ambulance";
		picture = "\rds_a2port_civ\data\ico\s1203_ambulance_pic_ca.paa";
		hiddenselections[] = {"camo1", "camo2"};
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_eur_co.paa", "rds_a2port_civ\S1203\data\s1203_glass3_eur_ca.paa"};


		cargoaction[] = {"RDS_S1203_Cargo", "RDS_LyingWounded", "RDS_LyingWounded"};


		transportSoldier=3;
		memorypointsgetincargo[] = {"pos cargo 1", "pos cargo 4"};
		memorypointsgetincargodir[] = {"pos cargo dir 1",   "pos cargo dir 4"};
		driverDoor="Door_LF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_RC"
		};
		class Reflectors: Reflectors
		{
			class Left: LSvetla {};
			class Right: RSvetla {};
			class Right2: Right2 {};
			class Left2: Left2 {};
			class Long_Left: Long_Left {};
			class Long_Right: Long_Right {};
			class Long_Right2: Long_Right2 {};
			class Long_Left2: Long_Left2 {};
			class cabin : cabin {};
			class Majak1 {
				//ambient[] = {0.01, 0.01, 0.1, 1};
				//color[] = {0.1, 0.2, 0.8, 1};
				color[] = {0.1, 0.25, 0.8};
				ambient[] = {0.001, 0.00025, 2e-005};
				intensity = 10000;
				size = 1;
				innerAngle = 125;
				outerAngle = 175;
				coneFadeCoef = 10;
				direction = "majak ligth 1 end";
				position = "majak ligth 1 start";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 50;
				selection = "majak";
				hitpoint = "";
				activeLight = 1;
				dayLight = 1;
				class Attenuation {
					start = 0;
					constant = 0;
					linear = 15;
					quadratic = 7;
					hardLimitStart = 7;
					hardLimitEnd = 10;
				};
			};
			class Majak2: Majak1 {
				direction = "majak ligth 2 end";
				hitpoint = "";
				position = "majak ligth 2 start";
				selection = "";
			};
		};
		aggregateReflectors[]=
		{
			{"Left","Right"},
			{
				"Long_Left2",
				"Long_Right2"
			}
		};
		class UserActions: UserActions
		{
			class Syrena
			{
				displayName = Siren toggle;
				position = "pos driver";
				radius = 3;
				showWindow = 0;
				condition = "player == driver this";
				statement = "[this] spawn rds_fnc_syrena";
				onlyForPlayer =1;
				shortcut="TactToggle";
			};
			class Syrena_dzwiek: Syrena
			{
				displayName = Siren toggle sound;
				condition = "player == driver this && this getVariable ['rds_siren',false]";
				statement = "this setVariable ['rds_siren_sound',not(this getVariable ['rds_siren_sound',false]),true] ";
				shortcut="binocular";
			};
		};
		class AnimationSources: AnimationSources
		{
			class majak_hide: longlights_hide {initPhase = 1;};
			class siren_handler
			{
				source = "user";
				animPeriod = 0.000001;
				initPhase = 0;
				mass=1;
				displayName="turn on siren";
				onPhaseChanged="_this spawn rds_fnc_syrena";
			};
		};
		class Attributes: Attributes {
			class ObjectTexture: ObjectTexture {};
			class rds_random_spare: rds_random_spare {};
			class Door_LF: Door_LF {};
			class Door_RF: Door_RF {};
			class Door_RB: Door_RB {};
			class Door_RC: Door_RC {};
			class rds_blinkers: rds_blinkers {};
			class rds_siren {
				displayName = "Turn on siren";
				property = "rds_siren";
				control = "CheckboxNumber";
				expression = "[_this,_value] spawn rds_fnc_syrena";
				defaultValue = -1;
			};
			class rds_siren_sound: rds_siren {
				displayName = "Turn off siren sound";
				property = "rds_siren_sound";
				control = "Checkbox";
				defaultValue = false;
				expression = "_this setVariable ['rds_siren_sound',not(_value),true]";
			};
		};
		class textureSources
		{
			class standard
			{
				displayName="European";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_ambulance_eur_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass3_eur_ca.paa"
				};
				factions[]=
				{
					rds_rus_civ
				};
			};
			class TK: standard
			{
				displayName="Takistan";
				AUTHOR_MACRO
				textures[]=
				{
					"rds_a2port_civ\S1203\data\s1203_ambulance_co.paa",
					"rds_a2port_civ\S1203\data\s1203_glass3_ca.paa"
				};
			};
		};
		textureList[]=
		{
			"standard", 0.5,
			"TK",0.5
		};

		class TransportItems {
			class _xx_rds_car_FirstAidKit {
				name = "rds_car_FirstAidKit";
				count = 2;
			};
			class _xx_rds_car_warning_triangle_to11 {
				name = "rds_car_warning_triangle_to11";
				count = 1;
			};
			class _xx_Medikit {
				name = "Medikit";
				count = 1;
			};
		};
		magazines[]=
		{
			"rds_empty_proxy",
			"rds_car_FirstAidKit_proxy",
			"rds_car_FirstAidKit_proxy",
			"rds_car_warning_triangle_to11_proxy"
		};
	};
	class RDS_S1203_Civ_03: RDS_S1203_Civ_02
	{
		EdPrev(RDS_S1203_Civ_03)
		AUTHOR_MACRO
		displayName="Skoda 1203 (Ambulance/TK)";
		hiddenselectionstextures[] = {"rds_a2port_civ\S1203\data\s1203_ambulance_co.paa", "rds_a2port_civ\S1203\data\s1203_glass3_ca.paa"};
	};

