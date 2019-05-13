class CfgAmmo
{
	class ShellBase;
	class ammo_Penetrator_Base;
	class CUP_P_3UBK9_HEAT: ammo_Penetrator_Base
	{
		caliber = 25.3333;
		warheadName = "HEAT";
		hit = 350;
	};	
	class CUP_Sh_3UBK9_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 2.5;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_3UBK9_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 1075;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"sg_cup_vehicles\data\sound\shorter.wss",2,1,500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};
	class CUP_Sh_3UOF10_HEFRAG: CUP_Sh_3UBK9_HEAT
	{
		hit = 300;
		indirectHit = 60;
		indirectHitRange = 12.5;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		typicalSpeed = 900;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
	class CUP_Sh_UBK367_HEAT: ShellBase
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet","Shell105mm130mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
		airFriction = -0.00045;
		hit = 100;
		indirectHit = 20;
		indirectHitRange = 2;
		warheadName = "HEAT";
		submunitionAmmo = "CUP_P_3UBK9_HEAT";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,-0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
		typicalSpeed = 792;
		simulationstep = 0.05;
		thrustTime = 0.5;
		cost = 500;
		timeToLive = 15;
		whistleOnFire = 1;
		soundFly[] = {"sg_cup_vehicles\data\sound\shorter.wss",2,1,500};
		whistleDist = 32;
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		explosive = 0.9;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		allowAgainstInfantry = 1;
	};	
	class CUP_Sh_UO367_HEFRAG: CUP_Sh_UBK367_HEAT
	{
		hit = 250;
		indirectHit = 50;
		indirectHitRange = 12;
		warheadName = "HE";
		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = 0;
		typicalSpeed = 792;
		scope = 1;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_green";
		explosionEffects = "HEShellExplosion";
		CraterEffects = "GrenadeCrater";
	};
	class rhs_ammo_bm25;
	class sg_ammo_bm25 : rhs_ammo_bm25
	{
		airFriction = -0.000162;
		// airFriction = -0.000173;
		hit = 250; //Было 520 лол, в 2 раза больше Т72
	};
	class sg_ammo_bm25_2 : sg_ammo_bm25
	{
		airFriction = -0.0003;
	};
	class rhs_ammo_bk17;
	class sg_ammo_bk17 : rhs_ammo_bk17
	{
		airFriction = -0.000343;
		deflecting = 0;
	};
	class rhs_ammo_of412;
	class sg_ammo_of412 : rhs_ammo_of412
	{
		airFriction = -0.000128;
		deflecting = 0;
	};
	class sg_ammo_of412_2 : sg_ammo_of412
	{
		airFriction = -0.00005;
	};
	class rhs_B_762x54_Ball;
	class sg_B_762x54_Ball: rhs_B_762x54_Ball
	{
		airFriction = -0.0012;
	};
};