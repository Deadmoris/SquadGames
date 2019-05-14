class CfgPatches
{
  class sg_pzrk_smoke
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
	requiredAddons[] = {"A3_Data_F_ParticleEffects", "rhsusf_c_weapons", "rhsusf_c_airweapons", "rhs_c_weapons", "sg_rhs_afrf_fix", "sg_rhs_usaf_fix", "rhs_c_airweapons", "tu_aircraft"};
	author = "[OMCB]Kaban, Kartaviy";
  };
};

class cfgAmmo
{
	class M_Titan_AA;
	class rhsammo_fim92_missile : M_Titan_AA
	{ 
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_9k32 : M_Titan_AA
	{ 
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_9k38 : rhs_ammo_9k32
	{ 
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_Stinger_AA : M_Titan_AA
	{ 
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class MissileBase;
	class Missile_AA_04_F;

	class rhs_ammo_r73 : Missile_AA_04_F
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_r74m2 : rhs_ammo_r73
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_r77 : rhs_ammo_r73
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_r77m : rhs_ammo_r77
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class M_Air_AA;
	class rhs_ammo_Sidewinder_AA: MissileBase
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_aim120: rhs_ammo_Sidewinder_AA
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_aim120_offset0: rhs_ammo_aim120
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_Sidewinder_AA_heli: rhs_ammo_Sidewinder_AA
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_Sidewinder_AA_a10: rhs_ammo_Sidewinder_AA
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_Sidewinder_AA_delay: rhs_ammo_Sidewinder_AA
	{
		effectsMissile = "tu_pzrk_smoke"; //"missile3";
	};
	class rhs_ammo_r27_base;
	class rhs_ammo_r27r: rhs_ammo_r27_base
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
	class rhs_ammo_r27er : rhs_ammo_r27r
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
	class rhs_ammo_r27t : rhs_ammo_r27_base
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
	class rhs_ammo_r27et : rhs_ammo_r27t
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
	class rhs_ammo_r60_base : Missile_AA_04_F {};
	class rhs_ammo_r60 : rhs_ammo_r60_base
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
	class rhs_ammo_r60m : rhs_ammo_r60_base
	{
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
    class rhs_ammo_r73m : rhs_ammo_r73
    {
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
    class rhs_ammo_r74 : rhs_ammo_r73m
    {
	    effectsMissile = "tu_pzrk_smoke"; //"missile3";  
	};
};

class tu_pzrk_smoke //missile3
{
	class Light1 {
		position[] = {0, 0, 0};
		simulation = "light";
		type = "RocketLight";
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class tu_pzrk_smoke { //Missile3 {
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "tu_pzrk_smoke"; //"Missile3";
		intensity = 1; 
		interval = 1;
		lifeTime = 1;
		qualityLevel = 2;
	};
	class tu_pzrk_smoke_medium { //Missile3Med {
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "tu_pzrk_smoke_medium"; //"Missile3Med";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		qualityLevel = 1;
	};
};

class CfgCloudlets
{
	class Default;

	//class Missile3 : Default
	class tu_pzrk_smoke : Default
	{  
		circleVelocity[] = {0, 0, 0}; 
		moveVelocity[] = {0, 0, 0}; 
		size[] = {0.75, 0.8, 0.85}; 
		color[] = {{0.6, 0.6, 0.6, 0.5}, {0.65, 0.65, 0.65, 0.25}, {0.75, 0.75, 0.75, 0}}; 
		animationSpeed[] = {1}; 
		positionVar[] = {0.15, 0.15, 0.15}; 
		MoveVelocityVar[] = {0, 0, 0}; 
		colorVar[] = {0, 0, 0, 0}; 
		interval = 0.001; 
		circleRadius = 0; 
		angleVar = 1; 
		particleFSLoop = 0; 
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal"; 
		particleFSNtieth = 16; 
		particleFSIndex = 12; 
		particleFSFrameCount = 8; 
		animationName = ""; 
		particleType = "Billboard"; 
		timerPeriod = 1; 
		lifeTime = 5; 
		rotationVelocity = 1; 
		weight = 1; 
		volume = 0.8; 
		rubbing = 0; 
		sizeCoef = 1; 
		colorCoef[] = {1.2, 1.2, 1.2, 1.2}; 
		animationSpeedCoef = 1; 
		randomDirectionPeriod = 0.015; 
		randomDirectionIntensity = 0.015; 
		onTimerScript = ""; 
		beforeDestroyScript = ""; 
		blockAIVisibility = 0; 
		lifeTimeVar = 0.8; 
		rotationVelocityVar = 0; 
		sizeVar = 0.5; 
		randomDirectionPeriodVar = 0; 
		randomDirectionIntensityVar = 0; 

		// Values from class: Default //

		angle = 0; 
		position[] = {0, 0, 0}; 
		positionVarConst[] = {0, 0, 0}; 
		MoveVelocityVarConst[] = {0, 0, 0}; 
	};

	//class Missile3Med : Default
	class tu_pzrk_smoke_medium : Default
	{ 
		circleVelocity[] = {0, 0, 0}; 
		moveVelocity[] = {0, 0, 0}; 
		size[] = {1, 2, 3}; 
		color[] = {{0.5, 0.5, 0.5, 0.5}, {0.9, 0.9, 0.9, 0}}; 
		animationSpeed[] = {5}; 
		blockAIVisibility = 0; 
		positionVar[] = {0.3, 0.3, 0.3}; 
		MoveVelocityVar[] = {0.4, 0.4, 0.4}; 
		colorVar[] = {0, 0, 0, 0}; 
		interval = 0.002; 
		circleRadius = 0; 
		angleVar = 1; 
		particleFSLoop = 0; 
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal"; 
		particleFSNtieth = 16; 
		particleFSIndex = 12; 
		particleFSFrameCount = 8; 
		animationName = ""; 
		particleType = "Billboard"; 
		timerPeriod = 1; 
		lifeTime = 0.8; 
		rotationVelocity = 1; 
		weight = 1; 
		volume = 0.8; 
		rubbing = 0.5; 
		randomDirectionPeriod = 0.1; 
		randomDirectionIntensity = 0.1; 
		onTimerScript = ""; 
		beforeDestroyScript = ""; 
		lifeTimeVar = 0.2; 
		rotationVelocityVar = 20; 
		sizeVar = 0.15; 
		randomDirectionPeriodVar = 0; 
		randomDirectionIntensityVar = 0; 

		// Values from class: Default //

		angle = 0; 
		position[] = {0, 0, 0}; 
		positionVarConst[] = {0, 0, 0}; 
		MoveVelocityVarConst[] = {0, 0, 0}; 
		colorCoef[] = {1, 1, 1, 1}; 
		sizeCoef = 1; 
		animationSpeedCoef = 1; 
	};	
};

class CfgLights
{
	class RocketLight { 
		diffuse[] = {1, 0.25, 0.05}; 
		color[] = {1, 0.6, 0.3}; 
		ambient[] = {0, 0, 0}; 
		brightness = "18 * fireIntensity"; 
		size = 1; 
		intensity = 25000; 
		drawLight = 0; 
		blinking = 0; 
	};
};