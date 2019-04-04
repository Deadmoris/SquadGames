		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				LODTurnedOut = 1;
				maxHorizontalRotSpeed = 0.34;	// 1 = 45�/sec
				maxVerticalRotSpeed = 0.1;		// 1 = 45�/sec
				gunnerAction = "CUP_T72_GunnerOut";
				gunnerInAction = "CUP_T55_Gunner_EP1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				weapons[] = {"CUP_Vacannon_D5_T34", "CUP_Vhmg_PKT_T34"};
				selectionFireAnim = "zasleh";
				magazines[] = {"CUP_40Rnd_85mmHEAT_D5", "CUP_20Rnd_85mmHEFRAG_D5", "CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M"};
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				stabilizedInAxes = 0;
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				turretInfoType = "CUP_RscOptics_gunner_CO";
				//turretInfoType = "RscWeaponT34_FCS";
				minElev = -6;
				maxElev = 14;
				initElev = 0;
				
				// ACE3 FCS
				ace_fcs_enabled = 0;
				
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal"};
				};
				class OpticsIn {

					class Wide: ViewOptics
					{
						initanglex = 0;
						initangley = 0;
						initfov = "0.7/ 4";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.7/4";
						minanglex = -30;
						minangley = -100;
						minfov = "0.7/4";
						gunnerOpticsModel = "\cup\trackedvehicles\CUP_TrackedVehicles_T34\2Dscope_t34";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
					};
				};

				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{	turretInfoType="CUP_RscOptics_commander_CO";
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_2";
						LODTurnedOut = 1;
						maxHorizontalRotSpeed = 1.8;	// 1 = 45�/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45�/sec
						weapons[] = {};
						magazines[] = {};
						gunBeg = "gun_muzzle";
						gunEnd = "gun_chamber";
						body = "ObsTurret";
						gun = "ObsGun";
						gunnerAction = "CUP_M2A2_Commander_Edit";
						gunnerInAction = "CUP_M2A2_Commander_Edit";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutMedium";
						stabilizedInAxes = 2;
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						//gunnerOpticsModel = "\ca\weapons\2Dscope_com3";
						forceNVG = 0;
						gunnerOutOpticsColor[] = {0,0,0,1};
						gunnerOutForceOptics = 0;
						gunnerOutOpticsShowCursor = 0;
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"};
						startEngine = 0;
						memoryPointGunnerOutOptics = "CommanderViewOut2";
						memoryPointGunnerOptics = "commanderview";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						memoryPointGun = "gun_muzzle";
						selectionFireAnim = "zasleh_2";
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.3;
							minFov = 0.015;
							maxFov = 0.3;
						};
						class ViewGunner
						{
							initAngleX = 5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.7;
							minFov = 0.25;
							maxFov = 1.1;
						};
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerName = "Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						animationSourceHatch = "hatchCommander";
						commanding = 2;
						//viewGunnerInExternal = 1;
						gunnerOutOpticsModel = "";
						class OpticsIn: OpticsIn 
						{
							class Periscope: ViewOptics 
							{
								initFov = 0.7/1.5; 
								minFov = 0.7/1.5;
								maxFov = 0.7/1.5;
								visionMode[] = {"Normal"};
								gunnerOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_f";
								gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
								gunnerOutOpticsModel = "";
							};
						};
					};
				};
				class HitPoints {
					class HitTurret	{
						armor = 2;
						material = -1;
						name = "vez";
						visual="vez";
						armorComponent = "hit_main_turret";
						passThrough = 0; minimalHit = 0.14;
						explosionShielding=0.001; radius = 0.25;
					};
					class HitGun	{
						armor = 0.6;
						material = -1;
						name = "zbran";
						armorComponent = "hit_main_gun";
						visual="";
						passThrough = 0; minimalHit = 0.13;
						explosionShielding=0.001; radius = 0.25;
					};
				};
			};

			class FrontGunner: MainTurret
			{
				gunnerName = "Front Gunner";
				gunBeg = "FrontGunner_muzzle";
				gunEnd = "FrontGunner_chamber";
				body = "FrontGunnerTurret";
				gun = "FrontGunnerGun";
				animationSourceBody = "FrontGunnerTurret";
				animationSourceGun = "FrontGunnerGun";
				memoryPointGun = "FrontGunner_muzzle";
				memoryPointGunnerOptics = "FrontGunnerview";
				discreteDistance[] = 				{100,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 0;
				turretInfoType = "RscWeaponZeroing";
				primaryGunner = 0;
				commanding = -1;
				
				// ACE3 FCS
				ace_fcs_enabled = 0;
				
				class Turrets
				{
				};
				proxyIndex = 2;
				weapons[] = {"CUP_Vhmg_SGMT"};
				selectionFireAnim = "zasleh1";
				magazines[] = {"CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M","CUP_250Rnd_TE1_Green_Tracer_762x54_PKT_M"};
				startEngine = 0;
				stabilizedInAxes = 0;
				minElev = -16;
				maxElev = 16;
				initElev = 0;
				minTurn = -16;
				maxTurn = 16;
				initTurn = 0;
				forceHideGunner = 1;
				class OpticsIn {
					class Wide: ViewOptics
					{
						initanglex = 0;
						initangley = 0;
						initfov = "0.35";
						maxanglex = 30;
						maxangley = 100;
						maxfov = "0.35";
						minanglex = -30;
						minangley = -100;
						minfov = "0.35";
						gunnerOpticsModel = "\cup\trackedvehicles\CUP_TrackedVehicles_T34\dt_sight";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				LODTurnedIn = 1;
				LODTurnedOut = 1;
				commanding = -2;
				gunnerName = "Front Left FFV";
				gunnerCompartments = "Compartment2";
				gunnerUsesPilotView = false;
				gunnerAction = "passenger_bench_1";
				primaryGunner = 0;
				isCopilot = 0;		// New! Can't take control anymore with this setting
				proxyIndex = 1;
				memoryPointsGetInGunner = "pos cargo l";
				memoryPointsGetInGunnerDir = "pos cargo l dir";
				gunnergetinaction = "GetInHigh";
				gunnergetoutaction = "GetOutHigh";
				caneject = 1;
				weapons[] = {};
				magazines[] = {};
				gunnerForceOptics = false;
				startEngine = false;
				ejectDeadGunner = true;
				isPersonTurret = 1;   // enable FFV
				canHideGunner=false;

				minElev = -20;
				maxElev = 35;
				initElev = 0;
				minTurn = -75;
				maxTurn = 75;
				initTurn = 0;

				class dynamicViewLimits    /// additional limits according to filled positions
				{
				};

				class ViewPilot : ViewPilot {
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;
					initAngleX = 0;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -170;
					maxAngleY = 170;
				};
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Mid Left FFV";
				proxyIndex = 2;
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Top Left FFV";
				proxyIndex = 3;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			};
			class CargoTurret_04: CargoTurret_01
			{
				gunnerName = "Rear Left FFV";
				proxyIndex = 4;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo rear dir";
			};
			class CargoTurret_05: CargoTurret_01
			{
				gunnerName = "Front Right FFV";
				proxyIndex = 5;
				memoryPointsGetInGunner = "pos cargo r";
				memoryPointsGetInGunnerDir = "pos cargo r dir";
			};
			class CargoTurret_06: CargoTurret_05
			{
				gunnerName = "Mid Right FFV";
				proxyIndex = 6;
			};
			class CargoTurret_07: CargoTurret_05
			{
				gunnerName = "Top Right FFV";
				proxyIndex = 7;
				gunnerAction = "passenger_flatground_4_vehicle_passenger_stand_1";
			};
			class CargoTurret_08: CargoTurret_05
			{
				gunnerName = "Rear Right FFV";
				proxyIndex = 8;
				memoryPointsGetInGunner = "pos cargo rear";
				memoryPointsGetInGunnerDir = "pos cargo rear dir";
			};
		};