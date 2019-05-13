class cfgWeapons
{
	class cannon_125mm;
	class CUP_Vacannon_D10: cannon_125mm
	{
		scope = 1;
		displayName = "$STR_CUP_DN_D10";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		cursorSize = 1;
		class StandardSound
		{
			soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
		};
		magazines[] = {"CUP_20Rnd_100mmHEAT_D10","CUP_15Rnd_100mmHEFRAG_D10"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 8;
		magazineReloadTime = 8;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = 2;
	};
	class sg_weap_D10: CUP_Vacannon_D10
	{
		magazines[] = {
		"sg_mag_bm25_14",
		"sg_mag_bm25_2_14",
		"sg_mag_bm25_2_1",
		"sg_mag_of412_17",
		"sg_mag_of412_1",
		"sg_mag_of412_21",
		"sg_mag_of412_2_21",
		"sg_mag_bk17_8",
		"sg_mag_bk17_1"};
		magazineReloadTime = 0;
		autoReload = 1;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 7;
		reloadtime = 0;
	};
	class rhs_weap_pkt;
	class sg_pkt_t55: rhs_weap_pkt {
		magazines[] = {"sg_mag_762x54mm_250"};
		magazineReloadTime = 0;
		autoReload = 1;
		bn_csw_extra_capacity = 0;
		bn_csw_ReloadTime = 7;
		reloadtime = 0;
	};
	class CUP_Vacannon_D5_T34: cannon_125mm
	{
		scope = 1;
		displayName = "$STR_SG_CUP_D5";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		cursorSize = 1;
		class StandardSound
		{
			soundSetShot[] = {"CUP_autocannon_Shot_SoundSet","CUP_autocannon_Tail_SoundSet"};
		};
		magazines[] = {"CUP_40Rnd_85mmHEAT_D5","CUP_20Rnd_85mmHEFRAG_D5"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 8;
		magazineReloadTime = 6;
		autoReload = 1;
		canLock = 0;
		ballisticsComputer = 2;
	};
	
	class MGun;
	class SG_PKT: rhs_weap_pkt
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
		};	
	};
	
	class SG_PKT_open: rhs_weap_pkt
	{
		displayName = "$STR_SG_PKT_open";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
			class SecondEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class ThirdEffect
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunEject";
			};
		};	
	};
	
	class SG_DT: rhs_weap_pkt
	{
		displayName = "$STR_SG_DT";
		magazines[] = {"sg_mag_762x54mm_63"};
		aiDispersionCoefY = 15;
		aiDispersionCoefX = 20;
		initSpeed = 0;
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "pkt_coax";
				directionName = "pkt_coax_dir";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_SG_DT";
			autoFire = 1;
			reloadTime = 0.075;
			dispersion = 0.00125;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 4;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 4;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 3;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 3;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};
	};
	class SG_DT_2: SG_DT
	{
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun2";
				positionName = "machinegun";
				directionName = "machinegun_dir";
			};
		};
	};
	
	class RHS_M2_M1117;
	class SG_M2: RHS_M2_M1117
	{
		class GunParticles
		{
			class FirstEffect
			{
				positionName = "machinegun_start";
				directionName = "machinegun_end";
				effectName = "MachineGunCloud";
			};
		};
	};
	
	class RHS_MK19;
	class SG_MK19_veh: RHS_MK19
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "gmg_start";
				directionName = "gmg_end";
				effectName = "GrenadeLauncherCloud";
			};
			class effect2
			{
				positionName = "gmg_eject_pos";
				directionName = "gmg_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
	};
	
	class RHS_weap_M242BC;
	class SG_M242_veh: RHS_weap_M242BC
	{	
		class GunParticles
		{
			class Effect1
			{
				effectName = "AutoCannonFired";
				positionName = "m242_beg";
				directionName = "m242_end";
			};
			class Effect2
			{
				positionName = "m242_eject_pos";
				directionName = "m242_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
	};
	
	class rhs_weap_m240_bradley_coax;
	class SG_M240_coax: rhs_weap_m240_bradley_coax
	{	
		class gunParticles
		{
			class effect1
			{
				positionName = "m240_veh_eject_pos";
				directionName = "m240_veh_eject_dir";
				effectName = "RHS_HeavyGunCartridge1";
			};
			class effect2
			{
				positionName = "m240_veh_end";
				directionName = "m240_veh_beg";
				effectName = "MachineGun1";
			};
			class effect3
			{
				positionName = "m240_veh_eject_dir";
				directionName = "m240_veh_eject_pos";
				effectName = "MachineGunEject";
			};		
		};
	};
	
	class SG_M240_veh: SG_M240_coax
	{
		class gunParticles
		{
			class effect1
			{
				positionName = "m240_veh3_eject_pos";
				directionName = "m240_veh3_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "m240_veh3_end";
				directionName = "m240_veh3_beg";
				effectName = "MachineGun1";
			};
			class effect3
			{
				positionName = "m240_veh3_eject_dir";
				directionName = "m240_veh3_eject_pos";
				effectName = "MachineGunEject";
			};
		};
		muzzlePos = "usti hlavne3";
		muzzleEnd = "konec hlavne3";
	};
	
	class rhs_weap_m134_minigun_1;
	class SG_M134: rhs_weap_m134_minigun_1
	{
		magazines[] = {"2000Rnd_762x51_Belt_T_Red"};
		displayName = "M134";
		class gunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "muzzle_1";
				directionName = "chamber_1";
			};
			class RHSUSF_BarrelRefract
			{
				positionName = "muzzle_1";
				directionName = "muzzle_1";
				effectName = "RHSUSF_BarrelRefractHeavy";
			};
		};	
	};
};