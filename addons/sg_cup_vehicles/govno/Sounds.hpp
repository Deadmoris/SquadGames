
		attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_start",1.0,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_stop",1.0,1.0,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1.0,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1.0,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1.0,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1.0,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_1",0.56234133,1,160};
				frequency = "0.95	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_2",0.7943282,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_3",0.8912509,1,260};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_4",1.0,1,280};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_5",1.1220185,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_engine_6",1.2589254,1,320};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_1",1.0,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_2",1.1220185,1,280};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_3",1.2589254,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_4",1.4125376,1,340};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_5",1.7782794,1,360};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\ext_exhaust_6",1.9952624,1,380};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_1",0.31622776,1};
				frequency = "0.8	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_2",0.35481337,1};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_3",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_engine_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_1",0.35481337,1};
				frequency = "0.8	+	((rpm/	2300) factor[(500/	2300),(650/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(400/	2300)])	*	((rpm/	2300) factor[(730/	2300),(610/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_2",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(600/	2300),(1100/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(550/	2300),(700/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(760/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_3",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(770/	2300),(1400/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(720/	2300),(1060/	2300)])	*	((rpm/	2300) factor[(1400/	2300),(1180/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1150/	2300),(1700/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1130/	2300),(1370/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1500/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1500/	2300),(2100/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1460/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2100/	2300),(1800/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC3\int_exhaust_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1750/	2300),(2050/	2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",3.1622777,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",3.1622777,1.0,250};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_01",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_02",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_03",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_04",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_hard_05",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_01",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_02",0.35481337,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_03",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_04",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\ext_treads_soft_05",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",0.56234133,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-0) max 0)/	95),(((-10) max 10)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-25) max 25)/	95),(((-15) max 15)/	95)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",0.4466836,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-20) max 20)/	95),(((-35) max 35)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-55) max 55)/	95),(((-40) max 40)/	95)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",0.5011872,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-45) max 45)/	95),(((-55) max 55)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-70) max 70)/	95),(((-60) max 60)/	95)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",0.63095737,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	95) factor[(((-65) max 65)/	95),(((-70) max 70)/	95)])	*	((((-speed*3.6) max speed*3.6)/	95) factor[(((-85) max 85)/	95),(((-80) max 80)/	95)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",0.70794576,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	95) factor[(((-80) max 80)/	95),(((-90) max 90)/	95)])";
			};
		};