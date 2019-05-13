
	class RDS_Zetor6945_Base: Car_F
	{
		EdPrev(RDS_Zetor6945_Base)
		AUTHOR_MACRO
		TextPlural = "Tractors";
		TextSingular = "Tractor";
		nameSound = "veh_Tractor";

		scope = 2;
		faction="rds_rus_civ";
		side = 3;

		model = "\rds_a2port_civ\tractor\tractor_2.p3d";
		picture = "\rds_a2port_civ\data\ico\zetor_pic_ca.paa";
		Icon = "\rds_a2port_civ\data\map_ico\icomap_traktor_CA.paa";

		mapSize = 6;
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"rds_a2port_civ\Tractor\data\traktor_2.rvmat",
				"rds_a2port_civ\Tractor\data\traktor_2_damage.rvmat",
				"rds_a2port_civ\Tractor\data\traktor_2_destruct.rvmat",

				"rds_a2port_civ\Tractor\data\traktor_2_skla.rvmat",
				"rds_a2port_civ\Tractor\data\traktor_2_skla_destruct.rvmat",
				"rds_a2port_civ\Tractor\data\traktor_2_skla_destruct.rvmat"
			};
		};
		typicalCargo[] = {"rds_Villager"};
		crew = "rds_Villager_random";
		displayName = "Tractor";

		driverAction = "RDS_Tractor_Driver";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "gear_stick";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		castDriverShadow = 1;
		unitInfoType = "RDS_RscUnitInfoCar";

		class Library
		{
			libTextDesc = "Agricultural tractor.";
		};

		driverDoor="Door_RF";
		cargoDoors[]=
		{
			"Door_RF",
			"Door_LF"
		};

		class AnimationSources: AnimationSources
		{
			class Door_LF
			{
				source="door";
				sound = "RDS_Tractor_Door";
				soundPosition = "door_1_1_axis";
				animPeriod=1.0;
			};
			class Door_RF: Door_LF
			{
				soundPosition = "door_1_2_axis";
			};
			class gearbox: Door_LF
			{
				sound = "RDS_Gearbox";
				soundPosition = "gear_stick_axis";
				animPeriod=0.8;
			};
			class blinker_L: Door_LF
			{
				sound = "RDS_Blinker";
				soundPosition = "water_axis";
				animPeriod=0.35;
			};
			class blinker_R: blinker_L  {};
			class blinker_switch: blinker_L  {
				source="user";
				animPeriod=0.2;
			};
			class light_cover1
			{
				source="user";
				sound = "RDS_Tractor_Cover";
				soundPosition = "light_cover1_axis";
				animPeriod=0.5;
			};
			class light_cover2: light_cover1 {
				soundPosition = "light_cover2_axis";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=2.575;
				passThrough=0.3;
				radius = 0.18;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=2.975;
				passThrough=0.3;
				radius = 0.23;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=2.575;
				passThrough=0.3;
				radius = 0.18;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=2.975;
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
		};
		hasGunner = 0;
		class Turrets {};
		class Reflectors
		{
			class Left
			{
				color[] = {900,800,800,1};
				ambient[] = {100,100,100,1};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				brightness = 0.5;
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[]=
		{
			{"LSvetla"},{"RSvetla"}
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect = "ExhaustEffectTractor";
				//effect = "ExhaustEffectHEMTT";
			};
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


		rarityUrban = 0.2;
		#include "sounds.hpp"
		#include "PhysX_Zetor.hpp"

		class Attributes {
			class ObjectTexture {
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
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
				displayName = "Open left door";
				property = "Door_LF";
				control = "CheckboxNumber";
				expression = "_this animateDoor ['%s',_value,true]";
				defaultValue = "0";
			};
			class Door_RF: Door_LF {
				displayName = "Open right door";
				property = "Door_RF";
			};
		};
		class EventHandlers: EventHandlers
		{
			class RDS_Civ_EH
			{
				engine="if(_this select 1)then{_this call RDS_fnc_gearSound};";
				dammaged="_this call rds_fnc_fuelLeak;";
				//hitpart = "_this call SLX_XEH_EH_HitPart;_this call rds_fnc_hitHandler";
			};
		};
	};