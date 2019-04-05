class rhs_btr_base : Wheeled_APC_F {
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
            radarType = 8;
			gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61";
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = "0.7/5.5";
				minFov = "0.7/5.5";
				maxFov = "0.7/5.5";
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
				visionMode[] = {"Normal"};
			};
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61";
					initFov = "0.7/5.5";
					maxFov = "0.7/5.5";
					minFov = "0.7/5.5";
					visionMode[] = {"Normal"};
				};
				class Night: Wide
				{
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61_night";
				};
			};
        };
        class CommanderOptics : CommanderOptics 
		{
            radarType = 8;
			primaryObserver = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				opticsZoomMin = 0.14;
				opticsZoomMax = 0.14;
				initFov = "0.7/10";
				minFov = "0.7/10";
				maxFov = "0.7/10";
				visionMode[] = {"Normal","NVG"};
			};
        };
    };
};

class rhs_btr60_base : rhs_btr_base 
{
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
            radarType = 8;
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = "0.7/5.5";
				minFov = "0.7/5.5";
				maxFov = "0.7/5.5";
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					minFov = "0.7/5.5";
					maxFov = "0.7/5.5";
					initFov = "0.7/5.5";
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61";
					gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
					visionMode[] = {"Normal"};
				};
				class Night: Wide
				{
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61_night";
				};
			};
		};
		class CommanderOptics : CommanderOptics 
		{
			radarType = 8;
			primaryObserver = 1;
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					initFov = "0.7/9.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
					gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
					visionMode[] = {"Normal"};
				};
				class Periscope: ViewOptics
				{
					initFov = 0.7;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class NVG: Wide
				{
					initFov = "0.7/8";
					visionMode[] = {"NVG"};
				};
			};
		};
    };
};

class rhs_btr70_vmf: rhs_btr_base {};
class rhs_btr70_msv: rhs_btr70_vmf {};
class rhs_btr80_msv: rhs_btr70_msv
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class OpticsIn
			{
				class 1pz3x12
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/3";
					minFov = "0.7/3";
					maxFov = "0.7/3";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1pz32s";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class 1pz3x4: 1pz3x12
				{
					initFov = "0.7/8";
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pz32p";
				};
				class tnpo170a
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete bpk142n;
				class bpk142nn
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/8.1";
					minFov = "0.7/8.1";
					maxFov = "0.7/8.1";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};
};

class rhs_btr80a_msv: rhs_btr80_msv
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			turretInfoType = "RHS_RscWeapon1PZ32_FCS";
			class OpticsIn
			{
				class 1pz3x12
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/2.4";
					minFov = "0.7/2.4";
					maxFov = "0.7/2.4";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pz39";
				};
				class 1pz3x4: 1pz3x12
				{
					initFov = "0.7/8";
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pz39_s";
				};
				class tnpo170a
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete bpk142;
				delete bpk142n;
				class bpk142nn
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/8.1";
					minFov = "0.7/8.1";
					maxFov = "0.7/8.1";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};
};


class rhsgref_BRDM2: Wheeled_APC_F
{
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
            radarType = 8;
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = "0.7/5.5";
				minFov = "0.7/5.5";
				maxFov = "0.7/5.5";
			};
			class ViewGunner
			{
				initAngleX = 5;
				minAngleX = -65;
				maxAngleX = 85;
				initAngleY = 0;
				minAngleY = -150;
				maxAngleY = 150;
				initFov = 0.7;
				minFov = 0.25;
				maxFov = 1.1;
			};
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					minFov = "0.7/5.5";
					maxFov = "0.7/5.5";
					initFov = "0.7/5.5";
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61";
					gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera3"};
					visionMode[] = {"Normal"};
				};
				class Night: Wide
				{
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\PP61_night";
				};
			};
		};
		class CommanderOptics: NewTurret
		{
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				opticsZoomMin = 0.14;
				opticsZoomMax = 0.14;
				initFov = "0.7/10";
				minFov = "0.7/10";
				maxFov = "0.7/10";
				visionMode[] = {"Normal"};
			};
		};
    };
};

class rhs_2s3tank_base : Tank_F {};

class rhs_bmd_base : Tank_F 
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class OpticsIn
			{
				class bpk142
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class tnpo170a
				{
					opticsDisplayName = "AA";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete bpk142n;
				delete pzu812;
				class bpk142nn
				{
					opticsDisplayName = "NIGHT";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class pzu8121
				{
					opticsDisplayName = "AA";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.25;
					opticsZoomMax = 0.25;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.25;
					minFov = 0.25;
					maxFov = 0.25;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu812";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
		class CommanderOptics: NewTurret
		{
			primaryObserver = 1;
			class ViewOptics
			{
				initAngleX = 0;
				minAngleX = -110;
				maxAngleX = 110;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				opticsZoomMin = 0.14;
				opticsZoomMax = 0.14;
				distanceZoomMin = 100;
				distanceZoomMax = 2000;
				initFov = "0.7/10";
				minFov = "0.7/10";
				maxFov = "0.7/10";
				visionMode[] = {"Normal","NVG"};
			};
		};
		class GPMGTurret1: NewTurret
		{
			primaryObserver = 1;
			class HitPoints{};
		};
	};	
};

class rhs_bmd1_base: rhs_bmd_base
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class pn22m1
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/5";
					minFov = "0.7/5";
					maxFov = "0.7/5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m1";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class pn22m2
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = "0.7/8";
					opticsZoomMax = "0.7/8";
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m1p";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class tnpo170a
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete pn22m1n;
				class pn22m2n
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pn22m1n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
		class CommanderOptics1: CommanderOptics
		{
			primaryObserver = 1;

		};
	};
};



	
class rhs_bmp1tank_base : Tank_F 
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class Periscope
				{
					opticsDisplayName = "PERISCOPE";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.47;
					minFov = 0.47;
					maxFov = 0.47;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
				};
				class pn22m1
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class pn22m2
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = "0.7/10";
					opticsZoomMax = "0.7/10";
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2p";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				delete pn22m1n;
				class pn22m2n
				{
					opticsDisplayName = "NIGHT";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pn22m2n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
		class Com_BMP1: NewTurret
		{
			primaryObserver = 1;
		};
	};
};

class rhs_bmp_base: rhs_bmp1tank_base {};
class rhs_bmp1_vdv: rhs_bmp_base {};
class rhs_bmp2e_vdv: rhs_bmp1_vdv {

	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class OpticsIn
			{
				class bpk142
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class 9sh119m1: bpk142
				{
					opticsDisplayName = "ATGM";
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class tnpo170a
				{
					opticsDisplayName = "NIGHT";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete bpk142n;
				class bpk142nn
				{
					opticsDisplayName = "NIGHT";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					primaryObserver = 1;
				};
			};
		};
	};	
};  


class rhs_bmp2e_msv: rhs_bmp2e_vdv {};
class rhs_Ob_681_2: rhs_bmp2e_msv{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class OpticsIn
			{
				class pn22m1
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				delete 9sh119m1;
				class pn22m2
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = "0.7/10";
					opticsZoomMax = "0.7/10";
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2p";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class 9sh119m11: pn22m1
				{
					opticsDisplayName = "ATGM";
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_9sh119m1";
				};
				class tnpo170a
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete pn22m1n;
				class pn22m2n
				{
					opticsDisplayName = "NVG";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pn22m2n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};	
}; 

class rhs_brm1k_base: rhs_bmp2e_vdv{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			memoryPointGunnerOptics = "gunnerview";
			class OpticsIn
			{
				class pn22m1
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = 0.14;
					minFov = 0.14;
					maxFov = 0.14;
					visionMode[] = {"Normal"};
					memoryPointGunnerOptics = "gunnerview";
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class pn22m2
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = "0.7/10";
					opticsZoomMax = "0.7/10";
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\pn22m2p";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class tnpo170a
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete pn22m1n;
				class pn22m2n
				{
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\rhs_1pn22m2n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};	
}; 


class rhs_prp3_vdv: rhs_bmp1_vdv
{
	class Turrets: Turrets
	{
		class reconTurret: MainTurret
		{
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.5;
			class OpticsIn
			{
				class bpk142
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/5.5";
					minFov = "0.7/5.5";
					maxFov = "0.7/5.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\x\a3ru\addons\a3ru_main\RHS_Patch\models\btr\prp";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class tnpo170a
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				};
				delete bpk142n;
				class bpk142nn
				{
					opticsDisplayName = "NIGHT";
					initAngleX = 0;
					minAngleX = -110;
					maxAngleX = "+110";
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = "+110";
					opticsZoomMin = 0.14;
					opticsZoomMax = 0.14;
					distanceZoomMin = 200;
					distanceZoomMax = 2000;
					initFov = "0.7/5.5";
					minFov = "0.7/5.5";
					maxFov = "0.7/5.5";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
			class radioOperatorTurret: NewTurret
			{
				class ViewGunner;
				primaryObserver = 1;
			};
		};
	};	
};




class rhs_bmp3tank_base : Tank_F {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class DayMain: ViewOptics
				{
					opticsDisplayName = "DAY1";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = "0.7/3";
					minFov = "0.7/3";
					maxFov = "0.7/3";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_1x.p3d";
					gunnerOpticsEffect[] = {};
				};
				class Day2: DayMain
				{
					opticsDisplayName = "DAY5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x.p3d";
					initFov = "0.7/8";
					minFov = "0.7/8";
					maxFov = "0.7/8";
				};
				class Day3: DayMain
				{
					opticsDisplayName = "DAY14";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_14x.p3d";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
				};
				class night: daymain
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/10";
					minFov = "0.7/10";
					maxFov = "0.7/10";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k13_3s_5x_nvg.p3d";
				};
			};
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					primaryObserver = 1;
					class ViewGunner
					{
						initAngleX = 5;
						minAngleX = -65;
						maxAngleX = 85;
						initAngleY = 0;
						minAngleY = -150;
						maxAngleY = 150;
						initFov = 0.7;
						minFov = 0.25;
						maxFov = 1.1;
					};
					class ViewOptics: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = "+30";
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = "+100";
						initFov = 0.101;
						minFov = 0.102;
						maxFov = 0.102;
						visionMode[] = {"Normal"};
					};
					class OpticsIn
					{
						class Wide: ViewOptics
						{
							gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn3.p3d";
							initFov = "0.7/10";
							maxFov = "0.7/10";
							minFov = "0.7/10";
						};
						class PZU: ViewOptics
						{
							gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_pzu3.p3d";
							initFov = "0.7/4";
							maxFov = "0.7/4";
							minFov = "0.7/4";
						};
						class Night: Wide
						{
							initFov = "0.7/4.2";
							visionMode[] = {"NVG"};
						};
						class Periscope: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = "+30";
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = "+100";
							initFov = 0.26;
							minFov = 0.26;
							maxFov = 0.26;
							visionMode[] = {"Normal"};
							gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
							gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
						};
					};
				};
			};
		};
	};
};      

class rhs_a3spruttank_base : Tank_F {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class DayMain: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = "0.7/12";
					minFov = "0.7/12";
					maxFov = "0.7/12";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sprut.p3d";
					gunnerOpticsEffect[] = {};
				};
				class Rocket: DayMain
				{
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k113.p3d";
					initFov = "0.7/11.5";
					minFov = "0.7/11.5";
					maxFov = "0.7/11.5";
				};
				class Periscope: DayMain
				{
					initFov = 0.466666;
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class night: daymain
				{
					initFov = "0.7/11";
					minFov = "0.7/11";
					maxFov = "0.7/11";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
				};
			};	
		};
	};
};

class rhs_bmd4_vdv: rhs_a3spruttank_base
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					primaryObserver = 1;
				};
			};
		};	
	};	
};


class rhs_a3t72tank_base : Tank_F {
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
			maxHorizontalRotSpeed = 1;
			maxVerticalRotSpeed = 0.1;
			class OpticsIn
			{
				class Day: ViewOptics
				{
					opticsDisplayName = "DAY";
					minFov = "0.7/12";
					maxFov = "0.7/12";
					initFov = "0.7/12";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_t72\optika_noreticle";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class 1k113: ViewOptics
				{
					opticsDisplayName = "ATGM";
					initFov = "0.7/11";
					visionMode[] = {"Normal","NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1k113.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class Periscope: Day
				{
					opticsDisplayName = "PERISCOPE";
					initFov = "0.7/2.8";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class Night: Day
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/11";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1kn.p3d";
				};
			};
		};
	};
};

class rhs_t72bd_tv: rhs_a3t72tank_base
{
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
			maxHorizontalRotSpeed = 1;
			maxVerticalRotSpeed = 0.1;
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					opticsDisplayName = "TI1";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = "0.7/3";
					minFov = "0.7/3";
					maxFov = "0.7/3";
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "TI2";
					initFov = "0.7/12";
					minFov = "0.7/12";
					maxFov = "0.7/12";
				};
				class Narrow: Medium
				{
					opticsDisplayName = "TI3";
					initFov = "0.7/24";
					minFov = "0.7/24";
					maxFov = "0.7/24";
				};
				class Narrow2: Narrow
				{
					opticsDisplayName = "AUTOTRACK";
					directionStabilized = 1;
				};
			};
		};
	};
};

class rhs_t90_tv: rhs_t72bd_tv
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class day1
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.7/8";
					minFov = "0.7/8";
					maxFov = "0.7/8";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
					gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class Periscope: Day1
				{
					opticsDisplayName = "PERISCOPE";
					initFov = "0.7/1.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class night3: day1
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/11";
					minFov = "0.7/11";
					maxFov = "0.7/11";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
					gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};	
		};
	};
};

class rhs_t90a_tv: rhs_t90_tv
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class Periscope
				{
					opticsDisplayName = "PERISCOPE";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					initFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class day1: Periscope
				{
					opticsDisplayName = "DAY";
					initFov = "0.7/8";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class thermal1: day1
				{
					opticsDisplayName = "TI1";
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
				};
				class thermal2: thermal1
				{
					opticsDisplayName = "TI2";
					initFov = "0.7/4.5";
					minFov = "0.7/4.5";
					maxFov = "0.7/4.5";
				};
				class thermal3: thermal2
				{
					opticsDisplayName = "TI3";
					initFov = "0.7/18";
					minFov = "0.7/18";
					maxFov = "0.7/18";
				};
				class thermal4: thermal3
				{
					opticsDisplayName = "AUTOTRACK";
					directionStabilized = 1;
				};
			};
		};
	};
};

class rhs_tank_base : Tank_F {    
    class Turrets : Turrets {
        class MainTurret : MainTurret 
		{
			maxHorizontalRotSpeed = 1;
			maxVerticalRotSpeed = 0.1;
			class OpticsIn
			{
				class day1: ViewOptics
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = "+30";
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = "+100";
					initFov = "0.7/8";
					minFov = "0.7/8";
					maxFov = "0.7/8";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g42.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/12";
					minFov = "0.7/12";
					maxFov = "0.7/12";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g42.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class Periscope: Day1
				{
					opticsDisplayName = "PERISCOPE";
					initFov = "0.7/1.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class night3: day1
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/11";
					minFov = "0.7/11";
					maxFov = "0.7/11";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
        };
    };
};

class rhs_t80b: rhs_tank_base 
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			initTurn = -13;
		};
	};
};

class rhs_t80: rhs_t80b
{      
    class Turrets : Turrets 
	{
        class MainTurret : MainTurret 
		{
			maxHorizontalRotSpeed = 1;
			maxVerticalRotSpeed = 0.1;
			class OpticsIn: OpticsIn
			{
				class day1: day1
				{
					opticsDisplayName = "DAY";
					initFov = "0.7/12";
					minFov = "0.7/12";
					maxFov = "0.7/12";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_t72\optika_noreticle";
				};
				class Periscope: Day1
				{
					opticsDisplayName = "PERISCOPE";
					initFov = 0.466666;
					gunnerOpticsModel =  "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class night3: night3
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/11";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tpd1kn.p3d";
				};
			};
        };
    };
};

class rhs_t80bv: rhs_t80b
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			//initTurn = -13;
		};
	};
};


class rhs_t80a: rhs_t80bv
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			turretInfoType = "rhs_gui_optic_t80u_rangefinder";
			maxHorizontalRotSpeed = 1;
			maxVerticalRotSpeed = 0.1;
			class OpticsIn
			{
				class day1
				{
					opticsDisplayName = "DAY";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = "0.7/8";
					minFov = "0.7/8";
					maxFov = "0.7/8";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
					gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class Periscope: Day1
				{
					opticsDisplayName = "PERISCOPE";
					initFov = "0.7/1.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class night3: day1
				{
					opticsDisplayName = "NIGHT";
					initFov = "0.7/14";
					minFov = "0.7/14";
					maxFov = "0.7/14";
					visionMode[] = {"NVG"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
					gunnerOpticsEffect[] = {"TankCommanderOptics1","OpticsBlur2","OpticsCHAbera3"};
				};
			};
		};
	};	
};

class rhs_t80u: rhs_t80a {};

class rhs_t80uk: rhs_t80u
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			turretInfoType = "RHS_RscWeaponAgava_FCS";
			class OpticsIn
			{
				class Periscope: ViewOptics
				{
					opticsDisplayName = "PERISCOPE";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					initFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class day1: Periscope
				{
					opticsDisplayName = "DAY";
					initFov = "0.7/8";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class thermal1: day1
				{
					opticsDisplayName = "TI1";
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava";
				};
				class thermal2: thermal1
				{
					opticsDisplayName = "TI2";
					initFov = "0.7/4.5";
					minFov = "0.7/4.5";
					maxFov = "0.7/4.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_4x";
				};
				class thermal3: thermal2
				{
					opticsDisplayName = "TI3";
					initFov = "0.7/18";
					minFov = "0.7/18";
					maxFov = "0.7/18";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_18x";
				};
			};
		};
	};
};


class rhs_t80ue1: rhs_t80a
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			turretInfoType = "RHS_RscWeaponPlissa_FCS";
			class OpticsIn
			{
				class Periscope
				{
					opticsDisplayName = "PERISCOPE";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					initFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class day1: Periscope
				{
					opticsDisplayName = "DAY";
					initFov = "0.7/8";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class thermal1: day1
				{
					opticsDisplayName = "TI1";
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
				};
				class thermal2: thermal1
				{
					opticsDisplayName = "TI2";
					initFov = "0.7/4.5";
					minFov = "0.7/4.5";
					maxFov = "0.7/4.5";
				};
				class thermal3: thermal2
				{
					opticsDisplayName = "TI3";
					initFov = "0.7/18";
					minFov = "0.7/18";
					maxFov = "0.7/18";
				};
				class thermal4: thermal3
				{
					opticsDisplayName = "AUTOTRACK";
					directionStabilized = 1;
				};
			};
		};
	};
};

		
class rhs_t80um: rhs_t80u
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			turretInfoType = "RHS_RscWeaponAgava_FCS";
			class OpticsIn
			{
				class Periscope
				{
					opticsDisplayName = "PERISCOPE";
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					initFov = "0.7/1.5";
					visionMode[] = {"Normal"};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_tvn5.p3d";
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
				class day1: Periscope
				{
					opticsDisplayName = "DAY";
					initFov = "0.7/8";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
				};
				class day2: day1
				{
					opticsDisplayName = "DAYZOOM";
					initFov = "0.7/16";
					minFov = "0.7/16";
					maxFov = "0.7/16";
					visionMode[] = {"Normal"};
				};
				class thermal1: day1
				{
					opticsDisplayName = "TI1";
					initFov = "0.7/1.5";
					minFov = "0.7/1.5";
					maxFov = "0.7/1.5";
					visionMode[] = {"Ti"};
					thermalMode[] = {0};
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava";
				};
				class thermal2: thermal1
				{
					opticsDisplayName = "TI2";
					initFov = "0.7/4.5";
					minFov = "0.7/4.5";
					maxFov = "0.7/4.5";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_4x";
				};
				class thermal3: thermal2
				{
					opticsDisplayName = "TI3";
					initFov = "0.7/18";
					minFov = "0.7/18";
					maxFov = "0.7/18";
					gunnerOpticsModel = "\rhsafrf\addons\rhs_optics\vehicles\rhs_agava_18x";
				};
			};
		};
	};
};

class rhs_zsutank_base: APC_Tracked_02_base_F
{	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class OpticsIn
			{
				class Wide: ViewOptics
				{
					initfov = 0.3;
					maxfov = 0.3;
					minfov = 0.7/10;
					gunnerOpticsModel = "\rhsafrf\addons\rhs_a2port_armor\2Dscope_RUAA8";
					gunnerOutOpticsModel = "";
					visionMode[] = {"Normal"};
					gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				};
			};
		};
	};
};