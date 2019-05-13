	class SG_V3S_Open_Base: Car_F
	{
		scope = 0;
		model = "\sg_cup_vehicles\cup_v3s_open.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_transport_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_transport_CA.paa";
		mapSize = 8;
		displayName = "Praga V3S";
		unitInfoType = "UnitInfoCar";
		soundAttenuationCargo[] = {1,1,0.3};
		armor = 50;
		cost = 50000;
		transportMaxBackpacks = 6;
		hideWeaponsCargo = 1;
		transportSoldier = 13;
		wheelDamageRadiusCoef = 0.9;
		wheelDestroyRadiusCoef = 0.4;
		crewCrashProtection = 0.25;
		vehicleClass = "Car";
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "shift";
		driverRightLegAnimName = "pedalR";
		driverLeftLegAnimName = "pedalL";
		weapons[] = {"Truckhorn3"};
		class Turrets{};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Guerilla";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co"};
				factions[] = {};
			};
			class NAPA
			{
				DisplayName = "NAPA";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_co","sg_cup_vehicles\Data\v3s_intkor_co","sg_cup_vehicles\Data\v3s_koloint02_co"};
				factions[] = {};
			};
			class TKC
			{
				DisplayName = "Takistani Civilian";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_eciv_co","sg_cup_vehicles\Data\v3s_intkor_eciv_co","sg_cup_vehicles\Data\v3s_koloint02_eciv_co"};
				factions[] = {};
			};
		};
		driverAction = "CUP_V3S_Driver";
		acre_hasInfantryPhone = 0;
		acre_infantryPhoneDisableRinging = 1;
		class AcreIntercoms{};
		class AcreRacks{};
		insideSoundCoef = 0.2;
		soundGear[]={"rhsafrf\addons\rhs_a2port_car\sounds\Gear_Change",2,1};
		soundGetIn[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-getout",db0, 9};
		soundGetOut[]={"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-getout",db+6, 25};
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-start", db-2, 1.0};
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-start", db+3, 1.0, 200};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-stop", db-2, 1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-stop", db+3, 1.0, 200};
		
		
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-idle","db+2",1,150};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-acceleration","db+1",1,200};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-low","db-1",1,240};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-2",1,280};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-3",1,320};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-4",1,360};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high","db-5",1,420};
				frequency = "0.95 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.15";
				volume = "engineOn*camPos*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class IdleThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust","db-4",1,200};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust","db-6",1,280};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-7",1,320};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-8",1,360};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-10",1,400};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust","db-8",1,450};
				frequency = "0.9 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle","db-2",1};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration","db-2",1};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high","db-4",1};
				frequency = "0.95 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust","db0",1};
				frequency = "0.9 + ((rpm/4000) factor[(200/4000),(950/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(100/4000),(300/4000)])* ((rpm/4000) factor[(800/4000),(500/4000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db-1",1};
				frequency = "0.8 + ((rpm/4000) factor[(800/4000),(1300/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(650/4000),(750/4000)])* ((rpm/4000) factor[(900/4000),(800/4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust","db-2",1};
				frequency = "0.8 + ((rpm/4000) factor[(1200/4000),(1600/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(850/4000),(950/4000)])* ((rpm/4000) factor[(1400/4000),(1200/4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-3",1};
				frequency = "0.8 + ((rpm/4000) factor[(1400/4000),(2100/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1200/4000),(1350/4000)])* ((rpm/4000) factor[(1800/4000),(1400/4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-4",1};
				frequency = "0.8 + ((rpm/4000) factor[(1300/4000),(2900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(1450/4000),(1650/4000)])* ((rpm/4000) factor[(2670/4000),(2200/4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/4000) factor[(2200/4000),(4200/4000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/4000) factor[(2350/4000),(2800/4000)])* ((rpm/4000) factor[(3150/4000),(3050/4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust","db-6",1};
				frequency = "0.9 + ((rpm/4000) factor[(3100/4000),(4900/4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/4000) factor[(3100/4000),(4100/4000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class RainIn
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db-7",1};
				frequency = 1;
				volume = "rain*(1-camPos)";
			};
			class RainExt
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\rain.wss","db-7",1};
				frequency = 1;
				volume = "rain*camPos";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-4",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-2",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-4",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db+2",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-7",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-7",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db0",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db0",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		memoryPointsGetInCargo[] = {"pos codriver","pos codriver","pos cargo"};
		memoryPointsGetInCargoDir[] = {"pos codriver dir","pos codriver dir","pos cargo dir"};
		driverDoor = "";
		cargoDoors[] = {};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment1","Compartment2","Compartment2","Compartment2","Compartment2"};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.175;
				passThrough = 0.3;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
			class HitBody: HitBody
			{
				name = "karoserie";
				visual = "camo1";
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
			};
			class HitGlass4: HitGlass4
			{
				visual = "glass4";
				armor = 0.05;
			};
		};
		cargoAction[] = {"passenger_apc_narrow_generic01","passenger_apc_narrow_generic03still","passenger_apc_narrow_generic03","passenger_generic01_leanright","passenger_apc_generic01","passenger_apc_generic01","passenger_apc_generic03","passenger_apc_narrow_generic01","passenger_generic01_leanleft","passenger_apc_generic03","passenger_apc_narrow_generic02","passenger_apc_generic02","passenger_apc_generic01","passenger_generic01_foldhands","passenger_apc_generic04"};
		getInAction = "GetInMantis";
		getOutAction = "GetOutMedium";
		cargoGetInAction[] = {"GetInMantis","GetInMantis","GetInHemttBack"};
		cargoGetOutAction[] = {"GetOutMedium","GetOutMedium","GetOutHighZamak"};
		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";
		dustFrontLeftPos = "stopa PLL";
		dustFrontRightPos = "stopa PPP";
		dustBackLeftPos = "stopa ZLL";
		dustBackRightPos = "stopa ZPP";
		class Damage
		{
			tex[] = {};
			mat[] = {"sg_cup_vehicles\data\auta_skla.rvmat","sg_cup_vehicles\data\auta_skla_damage.rvmat","sg_cup_vehicles\data\auta_skla_damage.rvmat","sg_cup_vehicles\data\auta_skla_in.rvmat","sg_cup_vehicles\data\auta_skla_in_damage.rvmat","sg_cup_vehicles\data\auta_skla_in_damage.rvmat","sg_cup_vehicles\data\v3s_intkor.rvmat","sg_cup_vehicles\data\v3s_intkor_damage.rvmat","sg_cup_vehicles\data\v3s_intkor_destruct.rvmat","sg_cup_vehicles\data\v3s_kabpar.rvmat","sg_cup_vehicles\data\v3s_kabpar_damage.rvmat","sg_cup_vehicles\data\v3s_kabpar_destruct.rvmat","sg_cup_vehicles\data\v3s_koloint02.rvmat","sg_cup_vehicles\data\v3s_koloint02_damage.rvmat","sg_cup_vehicles\data\v3s_koloint02_destruct.rvmat","sg_cup_vehicles\data\v3s_reammo_IND.rvmat","sg_cup_vehicles\data\v3s_reammo_IND_damage.rvmat","sg_cup_vehicles\data\v3s_reammo_IND_destruct.rvmat","sg_cup_vehicles\data\v3s_refuel_IND.rvmat","sg_cup_vehicles\data\v3s_refuel_IND_damage.rvmat","sg_cup_vehicles\data\v3s_refuel_IND_destruct.rvmat","sg_cup_vehicles\data\v3s_repair_IND.rvmat","sg_cup_vehicles\data\v3s_repair_IND_damage.rvmat","sg_cup_vehicles\data\v3s_repair_IND_destruct.rvmat"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk 1 start";
				direction = "vyfuk 1 konec";
				effect = "ExhaustEffectHTruck";
			};
		};
		class Reflectors
		{
			class LSvetla
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 50;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 1.5;
				useFlare = 1;
				dayLight = 0;
				flareSize = 0.85;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class RSvetla: LSvetla
			{
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
		};
		aggregateReflectors[] = {};
		armorLights = 0.05;
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "pip_0_pos";
					pointDirection = "pip_0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip_1_pos";
					pointDirection = "pip_1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		thrustDelay = 1.5;
		brakeIdleSpeed = 0.87;
		maxSpeed = 60;
		fuelCapacity = 45;
		wheelCircumference = 2.689;
		antiRollbarForceCoef = 0.5;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 80;
		idleRpm = 850;
		redRpm = 3500;
		engineLosses = 30;
		transmissionLosses = 1000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.8,"N",0,"D1",5.37,"D2",2.573,"D3",1.491,"D4",1.132,"D5",0.845};
			TransmissionRatios[] = {"High",4.137};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.3;
		differentialType = "all_open";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 25;
		enginePower = 170;
		maxOmega = 360;
		peakTorque = 550;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		torqueCurve[] = {{0,0},{0.278,0.5},{0.35,0.75},{0.461,1},{0.6,0.95},{0.7,0.85},{0.95,0.75},{1,0.3}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.41;
		latency = 2;
		class Wheels
		{
			class LF
			{
				width = "0.2";
				steering = 1;
				side = "left";
				boneName = "wheel_1_1_damper";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 50;
				MOI = 20;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 12500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				MaxDroop = 0.15;
				sprungMass = 812;
				springStrength = 52477;
				springDamperRate = 20154;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 20000;
				sprungMass = 406;
				springStrength = 26238;
				springDamperRate = 10077;
			};
			class LR2: LR
			{
				boneName = "wheel_1_3_damper";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 20000;
				sprungMass = 406;
				springStrength = 26238;
				springDamperRate = 10077;
			};
			class RR2: RR
			{
				boneName = "wheel_2_3_damper";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
			};
		};
		ace_cargo_hasCargo = 1;
		ace_cargo_space = 13;
		ace_refuel_fuelCapacity = 120;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 40;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
	class SG_V3S_Covered_Base: SG_V3S_Open_Base
	{
		scope = 0;
		model = "\sg_cup_vehicles\cup_v3s_transport.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_transport_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_transport_CA.paa";
		DisplayName = "Praga V3S (Covered)";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_reammo_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_reammo_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
				factions[] = {};
			};
			class TKC
			{
				DisplayName = "Takistan Civs";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_eciv_co","sg_cup_vehicles\Data\v3s_intkor_eciv_co","sg_cup_vehicles\Data\v3s_koloint02_eciv_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
				factions[] = {};
			};
		};
	};
	class SG_V3S_Refuel_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_refuel.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_refuel_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_refuel_CA.paa";
		DisplayName = "Praga V3S (Refuel)";
		transportFuel = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_EGUE_co","sg_cup_vehicles\Data\v3s_intkor_EGUE_co","sg_cup_vehicles\Data\v3s_koloint02_EGUE_co","sg_cup_vehicles\Data\v3s_refuel_EGUE_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_refuel_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_refuel_egue_co"};
				factions[] = {};
			};
		};
	};
	class SG_V3S_Repair_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_repair.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_repair_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_repair_CA.paa";
		DisplayName = "Praga V3S (Repair)";
		transportRepair = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
				factions[] = {};
			};
		};
	};
	class SG_V3S_Rearm_Base: SG_V3S_Open_Base
	{
		scope = 0;
		transportSoldier = 1;
		model = "\sg_cup_vehicles\cup_v3s_repair.p3d";
		icon = "\sg_cup_vehicles\data\ui\Icon_V3S_repair_CA.paa";
		picture = "\sg_cup_vehicles\data\ui\Picture_V3S_repair_CA.paa";
		DisplayName = "Praga V3S (Rearm)";
		transportAmmo = 1e+012;
		supplyRadius = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
		class TextureSources
		{
			class TKA
			{
				DisplayName = "Takistan Army";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_ind_co","sg_cup_vehicles\Data\v3s_intkor_ind_co","sg_cup_vehicles\Data\v3s_koloint02_co","sg_cup_vehicles\Data\v3s_repair_ind_co"};
				factions[] = {};
			};
			class TKG
			{
				DisplayName = "Takistan Rebels";
				author = "CUP";
				textures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
				factions[] = {};
			};
		};
	};
		
	class SG_I_V3S_Open: SG_V3S_Open_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Open_TKG.jpg";
		maximumLoad = 5000;
	};
	class SG_I_V3S_Covered: SG_V3S_Covered_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_reammo_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Covered_TKG.jpg";
		maximumLoad = 5000;
	};
	class SG_I_V3S_Refuel: SG_V3S_Refuel_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_refuel_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Refuel_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_I_V3S_Repair: SG_V3S_Repair_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Repair_TKG.jpg";
		maximumLoad = 2500;
	};
	class SG_I_V3S_Rearm: SG_V3S_Rearm_Base
	{
		scope = 2;
		scopeCurator = 2;
		accuracy = 0.5;
		author = "$STR_CUP_AUTHOR_STRING";
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";		
		typicalCargo[] = {"I_G_Soldier_F"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"sg_cup_vehicles\Data\v3s_kabpar_egue_co","sg_cup_vehicles\Data\v3s_intkor_egue_co","sg_cup_vehicles\Data\v3s_koloint02_egue_co","sg_cup_vehicles\Data\v3s_repair_egue_co"};
		editorPreview = "sg_cup_vehicles\Data\preview\CUP_V3S_Repair_TKG.jpg";
		maximumLoad = 2500;
	};
	