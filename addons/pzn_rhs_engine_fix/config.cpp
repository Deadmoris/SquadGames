class CfgPatches
{
	class pzn_rhs_engine_sound_fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.32;
		requiredAddons[] = {"rhs_c_a2port_car","rhs_c_bmp","rhs_c_btr","rhs_c_bmd","rhs_c_t72","rhs_c_tanks"};
	};
};


class CfgVehicles
{
	class Offroad_01_base_F;
	class RHS_UAZ_Base: Offroad_01_base_F
	{	
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_start1", 0.7924466 ,1.0};
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_start1", 0.7062688 ,1.0,200};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_stop1", 0.7924466 ,1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_stop1", 0.7062688 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle", 0.7924466 ,1,150};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_acceleration", 0.7062688 ,1,200};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1", 0.7062688 ,1,240};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1", 0.6294627 ,1,280};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1", 0.6294627 ,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1", 0.56100925 ,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1", 0.56100925 ,1,420};
				frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
				volume = "engineOn*camPos*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class IdleThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust", 0.6294627 ,1,200};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", 0.56100925 ,1,250};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", 0.56100925 ,1,280};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.56100925 ,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.56100925 ,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.5 ,1,400};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.6294627 ,1,450};
				frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle", 0.6294627 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_acceleration", 0.7062688 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1", 0.7062688 ,1};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1", 0.6294627 ,1};
				frequency = "0.95	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", 0.6294627 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(1150/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(450/	4000),(590/	4000)])	*	((rpm/	4000) factor[(900/	4000),(690/	4000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 0.7062688 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(900/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(870/	4000),(1100/	4000)])	*	((rpm/	4000) factor[(2100/	4000),(1300/	4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 0.6294627 ,1};
				frequency = "0.8	+		((rpm/	4000) factor[(1300/	4000),(3100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1250/	4000),(2050/	4000)])	*	((rpm/	4000) factor[(3100/	4000),(2300/	4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2250/	4000),(3050/	4000)])	*	((rpm/	4000) factor[(4100/	4000),(3300/	4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(3300/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(3250/	4000),(4050/	4000)])	*	((rpm/	4000) factor[(4870/	4000),(4200/	4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(4200/	4000),(6200/	4000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(4150/	4000),(4800/	4000)])	*	((rpm/	4000) factor[(6150/	4000),(5150/	4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(5100/	4000),(6900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(5100/	4000),(6100/	4000)])";
			};
		};
	};

	class Truck_F;
	class RHS_Ural_BaseTurret: Truck_F
	{
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-start", 0.7062688 ,1.0};
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-start", 0.7062688 ,1.0,200};
		soundEngineOffInt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-stop", 0.7062688 ,1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-stop", 0.7062688 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-idle", 0.7924466 ,1,150};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-acceleration", 0.7062688 ,1,200};
				frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-low", 0.6294627 ,1,240};
				frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high", 0.6294627 ,1,280};
				frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high", 0.56100925 ,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high", 0.56100925 ,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\ext-ural-high", 0.56100925 ,1,420};
				frequency = "0.95	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.15";
				volume = "engineOn*camPos*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
			};
			class IdleThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_idle_exhaust", 0.56100925 ,1,200};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
			};
			class EngineThrust
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", 0.56100925 ,1,250};
				frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_low1_exhaust", 0.56100925 ,1,280};
				frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.5 ,1,320};
				frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.5 ,1,360};
				frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.5 ,1,400};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_ext_high1_exhaust", 0.6294627 ,1,450};
				frequency = "0.9	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-idle", 0.7062688 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
			};
			class Engine_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-acceleration", 0.7062688 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
			};
			class Engine1_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-low", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
			};
			class Engine2_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
			};
			class Engine3_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
			};
			class Engine4_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
			};
			class Engine5_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\URAL\int-ural-high", 0.6294627 ,1};
				frequency = "0.95	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_idle_exhaust", 0.7062688 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(200/	4000),(950/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(100/	4000),(300/	4000)])	*	((rpm/	4000) factor[(800/	4000),(500/	4000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(800/	4000),(1300/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(650/	4000),(750/	4000)])	*	((rpm/	4000) factor[(900/	4000),(800/	4000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_low1_exhaust", 0.6294627 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1200/	4000),(1600/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(850/	4000),(950/	4000)])	*	((rpm/	4000) factor[(1400/	4000),(1200/	4000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1400/	4000),(2100/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1200/	4000),(1350/	4000)])	*	((rpm/	4000) factor[(1800/	4000),(1400/	4000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(1300/	4000),(2900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(1450/	4000),(1650/	4000)])	*	((rpm/	4000) factor[(2670/	4000),(2200/	4000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.8	+	((rpm/	4000) factor[(2200/	4000),(4200/	4000)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4000) factor[(2350/	4000),(2800/	4000)])	*	((rpm/	4000) factor[(3150/	4000),(3050/	4000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"rhsafrf\addons\rhs_a2port_car\sounds\UAZ\uaz_int_high1_exhaust", 0.56100925 ,1};
				frequency = "0.9	+	((rpm/	4000) factor[(3100/	4000),(4900/	4000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4000) factor[(3100/	4000),(4100/	4000)])";
			};
		};
	};
	
	class Tank_F;
	class rhs_bmp1tank_base: Tank_F
	{	
		soundEngineOnInt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 1.39397285 ,1.0};
		soundEngineOnExt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 1.36547865 ,1.0,300};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.393972875 ,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop", 0.3654787 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap", 4.456255 ,1,400};
				frequency = "0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume = "(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
			};
			class Engine
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.6 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.4971641 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine1_ext_thrust_extra
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.99716405 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine1_ext_thrust_extra2
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h", 1.197164 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine2_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.59562545 ,1,850};
				frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.6 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.71100925 ,1,840};
				frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.8062688 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume = "engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.79562545 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.71100925 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.7794627 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.8562688 ,1,850};
				frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.9424466 ,1,950};
				frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.9891397 ,1,1000};
				frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 1.5976312 ,1,1050};
				frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class Idle_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.408113865 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class Engine_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.2774067 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.4971641 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h", 0.6971641 ,1,800};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.29905358 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.3233418 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.3505936 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.38117065 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.415478675 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.327406675 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.3490536 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.3733418 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.3733418 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.4005936 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.43117067 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.55 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
		};
	};

	class Wheeled_APC_F;
	class rhs_btr_base: Wheeled_APC_F
	{
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start", 0.6990536 ,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start", 0.78117065 ,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop", 0.6990536 ,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop", 0.78117065 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01", 0.67740665 ,1,200};
				frequency = "0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02", 0.6990536 ,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03", 0.7233418 ,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06", 0.7505936 ,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07", 0.78117065 ,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08", 0.8154787 ,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10", 0.85397285 ,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01", 0.78117065 ,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02", 0.8154787 ,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03", 0.8154787 ,1,230};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06", 0.85397285 ,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07", 0.85397285 ,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08", 0.5 ,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10", 0.56100925 ,1,400};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01", 0.6581139 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02", 0.67740665 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03", 0.6990536 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06", 0.7233418 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07", 0.7505936 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08", 0.78117065 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10", 0.8154787 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01", 0.67740665 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02", 0.6990536 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03", 0.7233418 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06", 0.7233418 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07", 0.7505936 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08", 0.78117065 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10", 0.8154787 ,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
		};
	};
	
	class rhs_bmd_base: Tank_F
	{
		soundEngineOnInt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 1.3539729 ,1.0};
		soundEngineOnExt[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_start", 1.3154787 ,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.35397288 ,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop", 0.315478685 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap", 4.456255 ,1,400};
				frequency = "0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.3971641 ,1,450};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.3971641 ,1,500};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.44562545 ,1,500};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.5 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.56100925 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.7062688 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.44562545 ,1,400};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.56100925 ,1,450};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 1.1294627 ,1,500};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 1.2062688 ,1,500};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 1.2924466 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 1.38913965 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 1.4976312 ,1,600};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.15811388 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.177406685 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l", 0.4971641 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h", 0.6971641 ,1};
				frequency = "0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume = "(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.199053585 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.281170665 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmd\sounds\rhs_bmd_engine.wss", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap", 0.177406685 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1", 0.199053585 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.281170665 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
		};
	};
	
	class rhs_a3t72tank_base: Tank_F
	{
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside_startup", 0.7924466 ,1.0};
		soundEngineOnExt[] = {"\rhsafrf\addons\rhs_t72\sounds\T72_outside_startup", 2.233418 ,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop", 0.35397288 ,1.0};
		soundEngineOffExt[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside_shutdown", 0.8154787 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-d_idle1","1.75*0.79432821",1,200};
				frequency = "0.95	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","1.75*0.89125091",1,340};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","1.75*1.1220185",1,380};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_low1","1.75*1.2589254",1,420};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","1.75*1.4125376",1,460};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","1.75*1.5848932",1,500};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_outside-m_high1","1.75*1.7782794",1,540};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1","1.75*1.1220185",1,200};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2","1.5*1.4125376",1,200};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3","1.5*1.7782794",1,230};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4","1.5*1.9952624",1,290};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5","1.5*1.7782794",1,350};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6","1.5*2.2387211",1,400};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7","1.5*2.5118864",1,450};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class Idle_int
			{
				sound[] = {"rhsafrf\addons\rhs_t72\sounds\T72_inside_idle1","1.5*0.50118721",1};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.177406685 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.199053585 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.281170665 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(400*1.57/	2340),(900*1.57/	2340)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(100*1.57/	2340),(200*1.57/	2340)])	*	((rpm/	2340) factor[(900*1.57/	2340),(700*1.57/	2340)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2", 0.199053585 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(700*1.57/	2340),(1100*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(705*1.57/	2340),(850*1.57/	2340)])	*	((rpm/	2340) factor[(1100 *1.57/	2340),(950*1.57/	2340)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(950*1.57/	2340),(1400*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(900*1.57/	2340),(1050*1.57/	2340)])	*	((rpm/	2340) factor[(1400*1.57/	2340),(1200*1.57/	2340)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1200*1.57/	2340),(1700*1.57/	2340)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1170*1.57/	2340),(1380*1.57/	2340)])	*	((rpm/	2340) factor[(1700*1.57/	2340),(1500*1.57/	2340)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1500*1.57/	2340),(2100*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1500*1.57/	2340),(1670*1.57/	2340)])	*	((rpm/	2340) factor[(2100*1.57/	2340),(1800*1.57/	2340)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6", 0.281170665 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(1800*1.57/	2340),(2300*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2340) factor[(1780*1.57/	2340),(2060*1.57/	2340)])	*	((rpm/	2340) factor[(2450*1.57/	2340),(2200*1.57/	2340)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	2340) factor[(2100*1.57/	2340),(2340*1.57/	2340)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2340) factor[(2150*1.57/	2340),(2500*1.57/	2340)])";
			};
		};
		
		
	};
	
	class rhs_tank_base: Tank_F
	{
		soundEngineOnExt[] = {"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav", 0.281170665 ,1.0,200};
		soundEngineOnInt[] = {"rhsafrf\addons\rhs_t80\Sound\t80_engineStart.wav", 0.281170665 ,1.0,200};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.3971641 ,1,200};
				frequency = "0.95	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.44562545 ,1,240};
				frequency = "0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.56100925 ,1,280};
				frequency = "0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.6294627 ,1,320};
				frequency = "0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.7062688 ,1,360};
				frequency = "0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.7924466 ,1,400};
				frequency = "0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_ext
			{
				sound[] = {"rhsafrf\addons\rhs_t80\Sound\t80turbine", 0.8891397 ,1,440};
				frequency = "0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume = "engineOn*camPos*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm1", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(400*1.57/	2640),(900*1.57/	2640)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(100*1.57/	2640),(200*1.57/	2640)])	*	((rpm/	2640) factor[(900*1.57/	2640),(700*1.57/	2640)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm2", 0.177406685 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(700*1.57/	2640),(1100*1.57/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(705*1.57/	2640),(850*1.57/	2640)])	*	((rpm/	2640) factor[(1100 *1.57/	2640),(950*1.57/	2640)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm3", 0.199053585 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(950*1.57/	2640),(1400*1.57/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(900*1.57/	2640),(1050*1.57/	2640)])	*	((rpm/	2640) factor[(1400*1.57/	2640),(1200*1.57/	2640)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm4", 0.2233418 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1200*1.57/	2640),(1700*1.57/	2640)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1170*1.57/	2640),(1380*1.57/	2640)])	*	((rpm/	2640) factor[(1700*1.57/	2640),(1500*1.57/	2640)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm5", 0.2505936 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1500*1.57/	2640),(2100*1.57/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1500*1.57/	2640),(1670*1.57/	2640)])	*	((rpm/	2640) factor[(2100*1.57/	2640),(1800*1.57/	2640)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm6", 0.281170665 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(1800*1.57/	2640),(2300*1.57/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2640) factor[(1780*1.57/	2640),(2060*1.57/	2640)])	*	((rpm/	2640) factor[(2450*1.57/	2640),(2200*1.57/	2640)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_rpm7", 0.315478685 ,1};
				frequency = "0.8	+	((rpm/	2640) factor[(2100*1.57/	2640),(2640*1.57/	2640)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2640) factor[(2150*1.57/	2640),(2500*1.57/	2640)])";
			};
		};
		
	};
};