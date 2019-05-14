////////////////////////////////////////////////////////////////////
//DeRap: warfxpe\ParticleEffects\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Thu Jan 04 13:11:34 2018 : 'file' last modified on Tue Oct 03 14:45:20 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////
#define _ARMA_

class CfgPatches
{
	class Blastcore_VEP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Weapons_F_Orange", "rhs_c_heavyweapons", "rhsusf_c_airweapons", "RHS_US_A2_AirImport","rhs_c_weapons","rhsusf_c_weapons","A3_weapons_f_exp", "ace_ballistics","hlcweapons_core"};
		ammo[] = {"ShellBase","MissileBase","GrenadeCore","RocketBase","GrenadeBase","Grenade","GrenadeHand","SmokeShell","SmokeShellArty","BulletBase","B_127x33_Ball","B_127x99_Ball","B_127x108_Ball","B_127x108_APDS","B_20mm","B_30mm_AP","B_30mm_APFSDS","Sh_120mm_APFSDS","FlareBase","SubmunitionBase","CMflareAmmo","CMflare_Chaff_Ammo","SmokeLauncherAmmo","F_40mm_White","FuelExplosion","FuelExplosionBig","HelicopterExploSmall","HelicopterExploBig","B_19mm_HE","B_30mm_HE","Gatling_30mm_HE_Plane_CAS_01_F","B_25mm","B_35mm_AA","Sh_120mm_HE","Sh_155mm_AMOS","Sh_82mm_AMOS","M_PG_AT","M_AT","Rocket_04_HE_F","Rocket_04_AP_F","Rocket_03_AP_F","Rocket_03_HE_F","R_80mm_HE","M_RPG32_F","M_RPG32_AA_F","R_PG32V_F","M_NLAW_AT_F","M_Scalpel_AT","Missile_AGM_02_F","M_Titan_AA","M_Air_AA","Missile_AGM_01_F","Missile_AA_04_F","Missile_AA_03_F","M_Titan_AT","M_Titan_AP","Bo_GBU12_LGB","Bomb_04_F","Bomb_03_F","Bo_Mk82","R_230mm_HE","R_230mm_fly","Mo_cluster_AP","SatchelCharge_Remote_Ammo","DemoCharge_Remote_Ammo"};
		author = "Kartaviy";
	};
};
class CfgAmmo
{
	class Default;
	class BulletCore;
	class ShellCore;
	class MissileCore;
	class ShellBase: ShellCore{};
	class MissileBase: MissileCore{};
	class GrenadeCore;
	class BombCore;
	class PipeBombBase;
	class ammo_Bomb_LaserGuidedBase;
	class RocketCore;
	class RocketBase: RocketCore
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class GrenadeBase: GrenadeCore{};
	class BulletBase: BulletCore{};
	class FlareCore;
	class FlareBase: FlareCore{};
	class SubmunitionCore;
	class SubmunitionBase: SubmunitionCore{};
	class CMflareAmmo: BulletBase{};
	class CMflare_Chaff_Ammo: CMflareAmmo{};
	class HelicopterExploSmall: ShellBase
	{
		explosionEffects = "HelicopterExplosionEffects";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		explosionEffects = "HelicopterExplosionEffects2";
	};
	class M_Titan_AA: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "Hellfire_Explode"; //explosionEffects = "AA_Explode";
	};
	class rhs_ammo_M136_rocket: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class tf47_m3maaws_HEAT: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class tf47_m3maaws_HEDP: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class tf47_m3maaws_HE: RocketBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_maaws_HE: RocketBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class BWA3_R_CarlGustaf_HEAT: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class BWA3_R_CarlGustaf_HEDP: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class BWA3_R_CarlGustaf_HE: BWA3_R_CarlGustaf_HEAT
	{
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};	
	class rhs_ammo_maaws_HEAT: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_maaws_HEDP: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_smaw_HEAA: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_smaw_HEDP: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_fim92_missile: M_Titan_AA
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class Missile_AA_04_F: MissileBase
	{
		CraterEffects = "AA_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "Hellfire_Explode"; //explosionEffects = "AA_Explode";
	};
	class M_Titan_AT: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_atgmCore_base: M_Titan_AT
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Missile_AGM_02_F: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class Missile_AGM_01_F: Missile_AGM_02_F
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class rhs_ammo_Hellfire_AT: Missile_AGM_02_F
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_agm65: rhs_ammo_Hellfire_AT
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class rhs_ammo_Sidewinder_AA: Missile_AA_04_F
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_kh29_base : Missile_AGM_02_F
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class rhs_ammo_s8;
	class rhs_ammo_s8t : rhs_ammo_s8
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_s13b: rhs_ammo_s8 {};
	class rhs_ammo_s13t : rhs_ammo_s13b
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_s5: rhs_ammo_s8 {};
	class rhs_ammo_s5k1 : rhs_ammo_s5
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_s24_base: rhs_ammo_s13b
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class rhs_ammo_r73 : Missile_AA_04_F
	{
		CraterEffects = "AA_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "Hellfire_Explode"; //explosionEffects = "AA_Explode";
	};
	class rhs_ammo_kh29l;
	class rhs_ammo_kh55sm : rhs_ammo_kh29l
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};	
	class RHS_Ammo_DAGR: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class RHS_ammo_BGM109  : rhs_ammo_agm65
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class M_Titan_AP: M_Titan_AT
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "Hellfire_Explode";
	};
	class SatchelCharge_Remote_Ammo: PipeBombBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_M_fgm148_AT: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class M_Scalpel_AT: MissileBase
	{
		CraterEffects = "Hellfire_Smoke";
		explosionEffects = "80mm_Explode";
	};

	class UXO_deploy_base_f: SubmunitionBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Mo_cluster_AP: ShellBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Sh_155mm_AMOS: ShellBase
	{
		CraterEffects = "155mm_Smoke";
		explosionEffects = "155mm_Explode";
	};
	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class M_PG_AT: MissileBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class M_AT: M_PG_AT
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Rocket_04_HE_F: MissileBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Rocket_04_AP_F: Rocket_04_HE_F
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Rocket_03_AP_F: Rocket_04_AP_F
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class Rocket_03_HE_F: Rocket_04_HE_F
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class R_80mm_HE: RocketBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_Hydra_HE: RocketBase
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class M_RPG32_F: MissileBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class M_RPG32_AA_F: M_RPG32_F
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class R_PG32V_F: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class R_TBG32V_F: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class M_NLAW_AT_F: MissileBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_rpg18_rocket: rhs_rpg26_rocket
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class BWA3_R_RGW90_HH: R_PG32V_F
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_rpgShell_base: RocketBase
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_pg9v: rhs_ammo_rpgShell_base
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_og9v: rhs_ammo_rpgShell_base
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_ammo_pg9n: rhs_ammo_pg9v
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_pg9vnt: rhs_ammo_pg9v
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class Sh_120mm_HE_Tracer_Red;
	class BWA3_Sh_120mm_MZ: Sh_120mm_HE_Tracer_Red
	{
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_rpg7v2_pg7v: rhs_rpg7v2_pg7vl
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_rpg7v2_pg7vr: rhs_rpg7v2_pg7vl
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_rpg7v2_og7v: rhs_rpg7v2_pg7vl
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_rpg7v2_tbg7v: rhs_rpg7v2_pg7vl
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_rpg7v2_type63_airburst: rhs_rpg7v2_og7v
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class rhs_rshg2_rocket: rhs_rpg7v2_tbg7v
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class pzn_rpo_rocket: rhs_rshg2_rocket
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};
	class ammo_Missile_rim162: MissileBase
	{
		CraterEffects = "AA_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "Hellfire_Explode"; //explosionEffects = "AA_Explode";
	};
	class rhs_ammo_rpg15Shell_base;
	class rhs_ammo_pg15v: rhs_ammo_rpg15Shell_base
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_og15v: rhs_ammo_rpg15Shell_base
	{
		CraterEffects = "80mm_Smoke";
		explosionEffects = "80mm_Explode";
	};

	class M_Air_AA: MissileBase
	{
		CraterEffects = "AA_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "AA_Explode"; //explosionEffects = "AA_Explode";
	};
	class Missile_AA_03_F: Missile_AA_04_F
	{
		CraterEffects = "AA_Smoke";   //CraterEffects = "AA_Smoke";
		explosionEffects = "AA_Explode"; //explosionEffects = "AA_Explode";
	};
	class Bo_GBU12_LGB: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class Bomb_04_F: ammo_Bomb_LaserGuidedBase
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class Bomb_03_F: Bomb_04_F
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class Bo_Mk82: BombCore
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class R_230mm_HE: SubmunitionBase
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class R_230mm_fly: ShellBase
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class rhs_ammo_m21OF_HE: R_230mm_HE
	{
		CraterEffects = "155mm_Smoke";
		explosionEffects = "155mm_Explode";
	};
	class rhs_m21OF_fly: R_230mm_fly
	{
		CraterEffects = "155mm_Smoke";
		explosionEffects = "155mm_Explode";
	};
	class Sh_125mm_HE;
	class rhs_ammo_of_base : Sh_125mm_HE
	{
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};
	class rhs_ammo_3of_base : rhs_ammo_of_base
	{
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};
	class rhs_ammo_3UOF17 : rhs_ammo_3of_base
	{
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
	};
	class Sh_125mm_APFSDS;
	class rhs_ammo_bm_base : Sh_125mm_APFSDS
	{
		CraterEffects = "M136_Smoke";
		explosionEffects = "M136_Explode";
	};
	class rhs_ammo_3WOF27: Sh_155mm_AMOS
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
	class Sh_155mm_AMOS_LG;
	class rhs_ammo_3WOF93: Sh_155mm_AMOS_LG
	{
		CraterEffects = "MK82_Smoke";
		explosionEffects = "MK82_Explode";
	};
};
class CfgCloudlets
{
	class Default
	{
		interval = "0.5 * interval + 0.5";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\Data_f\cl_basic.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 1;
		rubbing = 0.05;
		size[] = {1,1};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		position[] = {0,0,0};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		positionVarConst[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		MoveVelocityVarConst[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Shockwave_large: Default
	{
		interval = 0.006;
		CircleRadius = 0;
		CircleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {0,100,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.075;
		animationSpeed[] = {1};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {200,100,200};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		animationSpeedCoef = 1;
		destroyOnWaterSurface = 1;
		surfaceOffset = 0;
		bounceOnSurface = 0.6;
		bounceOnSurfaceVar = 0;
		size[] = {10};
		color[] = {{1,1,1,0.5},{1,1,1,0}};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
	};
	class cloudlight_large: Default
	{
		interval = 0.01;
		CircleRadius = 0;
		CircleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.6;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.075;
		lifeTimeVar = 0;
		positionVar[] = {50,50,50};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		animationSpeedCoef = 1;
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0;
		bounceOnSurfaceVar = 0;
		Size[] = {200};
		color[] = {{1,1,1,-0.001},{1,1,1,0}};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		animationSpeed[] = {1};
		emissiveColor[] = {{80,80,80,0},{0,0,0,0}};
	};
	class Smoke_Trail_TankRound_Emitter: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {"(surfNormalX / 1) * 60","(surfNormalY / 1) * 60","(surfNormalZ / 1) * 60"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,120,120};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_TankRound_EmitterLink_Small";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_TankRound: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/0.2)","0 + (speedY/0.2)","0 + (speedZ/0.2)"};
		rotationVelocity = 0;
		weight = 10.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0.5,1};
		color[] = {{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.2,0.2,0.2};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_TankRound_Emitter_BaseSmoke: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.3;
		moveVelocity[] = {"(surfNormalX / 1) * 25","(surfNormalY / 1) * 25","(surfNormalZ / 1) * 25"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.5;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {25,25,25};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_TankRound_EmitterLink_BaseSmoke";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_BaseSmoke_TankRound: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {"0 + (speedX/10)","0 + (speedY/10)","0 + (speedZ/10)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {1,4};
		color[] = {{0.4,0.35,0.28,0.4},{0.4,0.35,0.28,0.2},{0.4,0.35,0.28,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 2;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	
	class Blastcore_BaseSmoke_TankRound2: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {"0 + (speedX/30)","0 + (speedY/30)","0 + (speedZ/30)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {1,8,12};
		color[] = {{0.4,0.35,0.28,0.4},{0.4,0.35,0.28,0.2},{0.4,0.35,0.28,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {2,2,2};
		rotationVelocityVar = 2;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_TankRound_Emitter_01: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.02;
		moveVelocity[] = {"(surfNormalX / 1) * 120","(surfNormalY / 1) * 120","(surfNormalZ / 1) * 120"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {200,120,200};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_TankRound_EmitterLink";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_TankRound_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,3};
		color[] = {{1,1,1,0.6},{1,1,1,0.4},{1,1,1,0.3},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Smoke_TankRound_01_Link";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_TankRound_02: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_TankRound_03: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.1},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_TankRound_Emitter_02: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {"(surfNormalX / 1) * 60","(surfNormalY / 1) * 60","(surfNormalZ / 1) * 60"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,60,120};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_TankRound_EmitterLink_02";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Trail_TankRound_01: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/3)","0 + (speedY/3)","0 + (speedZ/3)"};
		rotationVelocity = 0;
		weight = 11.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,2};
		color[] = {{1,1,1,0.6},{1,1,1,0.4},{1,1,1,0.3},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_TankRound_SmokeTrail";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Trail_TankRound_02: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {2,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Trail_TankRound_03: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {1,6};
		color[] = {{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Artillery_Explosion_Emitter: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {"(surfNormalX / 1) * 50","(surfNormalY / 1) * 50","(surfNormalZ / 1) * 50"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {40,40,40};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Artillery_Explosion_EmitterLink";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Artillery_Explosion: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.15;
		volume = 7.9;
		rubbing = 1;
		size[] = {4};
		color[] = {{1,1,0.5,-1},{1,1,0.5,-1},{1,1,0.5,-1},{1,1,0.5,-0.9},{1,1,0.5,-0.8},{1,1,0.5,-0.7},{1,1,0.5,-0.6},{1,1,0.5,-0.5},{1,1,0.5,-0.4},{1,1,0.5,-0.3},{1,1,0.5,-0.2},{1,1,0.5,-0.1},{1,1,0.5,0}};
		animationSpeed[] = {2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Artillery_ExplosionSmoke_EmitterLink";
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,0.08},{0,0,0,0}};
	};
	class Blastcore_Artillery_ExplosionSmoke: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Universal_02";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.15;
		volume = 7.9;
		rubbing = 1;
		size[] = {4,8};
		color[] = {{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_Artillery_Emitter_01: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {"(surfNormalX / 1) * 120","(surfNormalY / 1) * 120","(surfNormalZ / 1) * 120"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {200,120,200};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_Artillery_EmitterLink";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Artillery_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.15;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,3};
		color[] = {{1,1,1,0.5},{1,1,1,0.5}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Smoke_Artillery_01_Link";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Artillery_02: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Artillery_03: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_Artillery_Emitter_02: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {"(surfNormalX / 1) * 60","(surfNormalY / 1) * 60","(surfNormalZ / 1) * 60"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,60,120};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_Artillery_EmitterLink_02";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Trail_Artillery_01: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/3)","0 + (speedY/3)","0 + (speedZ/3)"};
		rotationVelocity = 0;
		weight = 10.15;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,2};
		color[] = {{0.3,0.2,0.1,0.5},{0.3,0.2,0.1,0.4},{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Artillery_SmokeTrail";
		destroyOnWaterSurface = 1;
	};
	class GrenadeSmoke1: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.8;
		size[] = {1.3,2,2,2,2,2};
		color[] = {{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.02;
		randomDirectionIntensity = 0.02;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {1,2,1};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 15;
		sizeVar = 0.25;
		colorVar[] = {0.05,0.05,0.05,0.05};
		randomDirectionPeriodVar = 0.05;
		randomDirectionIntensityVar = 0.01;
	};
	class GrenadeSmoke_01: GrenadeSmoke1
	{
		interval = 0.006;
		lifeTime = 4;
		MoveVelocityVar[] = {3,2,3};
		color[] = {{0.08,0.067,0.052,0.3},{0.08,0.067,0.052,0.15},{0.6,0.5,0.4,0}};
	};
	class Blastcore_Smoke_Trail_Artillery_02: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Universal_02";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 11.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {2,15};
		color[] = {{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.4},{0.3,0.2,0.1,0.35},{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.25},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.15},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0.05},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_Smoke_Trail_Artillery_03: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {2,15};
		color[] = {{0.1,0.1,0.1,0.2},{0.2,0.2,0.2,0.4},{0.3,0.3,0.3,0.35},{0.4,0.4,0.4,0.3},{0.5,0.45,0.4,0.25},{0.6,0.5,0.4,0.2},{0.7,0.6,0.5,0.15},{0.8,0.7,0.6,0.1},{0.9,0.8,0.7,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_TrailBC1: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.5;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.3;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,200,0};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "SmokeTrail_Blastcore1";
		destroyOnWaterSurface = 1;
	};
	class Smoke_Trail_Rocket_Emitter_01: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.02;
		moveVelocity[] = {"(surfNormalX / 1) * 120","(surfNormalY / 1) * 120","(surfNormalZ / 1) * 120"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {200,120,200};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_Rocket_EmitterLink";
	};
	class Smoke_Trail_Rocket_Emitter_02: Default
	{
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {"(surfNormalX / 1) * 60","(surfNormalY / 1) * 60","(surfNormalZ / 1) * 60"};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.01};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,60,120};
		rotationVelocityVar = 1;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Smoke_Trail_Rocket_EmitterLink_02";
	};
	class Hydra_Explode_03: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Pstone\Pstone.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {"(surfNormalX / 1) * 20","(surfNormalY / 1) * 20","(surfNormalZ / 1) * 20"};
		rotationVelocity = 0;
		weight = 30;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.2};
		color[] = {{1,1,1,1},{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 3;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.25;
	};
	class Hellfire_Explosion_01: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.1;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,100,120};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Hellfire_Explosiontrail";
	};
	class Hellfire_Explosion_02: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,1,3,4,5,5,5};
		color[] = {{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		animationSpeed[] = {1.8};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class Hellfire_Smoke_Trail_Emit_01: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.5;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.025};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,100,120};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Hellfire_SmokeTrail_01";
	};
	class Blastcore_Smoke_Rocket_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.15;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,3};
		color[] = {{1,1,1,0.5},{1,1,1,0.5}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Smoke_Rocket_01_Link";
	};
	class Blastcore_Smoke_Rocket_02: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Blastcore_Smoke_Rocket_03: Default
	{
		interval = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 10.3;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {5,15};
		color[] = {{1,0.9,0.8,0.2},{1,0.9,0.8,0.4},{1,0.9,0.8,0.35},{1,0.9,0.8,0.3},{1,0.9,0.8,0.25},{1,0.9,0.8,0.2},{1,0.9,0.8,0.15},{1,0.9,0.8,0.1},{1,0.9,0.8,0.05},{1,0.9,0.8,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Hellfire_Smoke_Trail_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.91;
		rubbing = 1;
		size[] = {0.3,0.5};
		color[] = {{0.8,0.8,0.8,0.1},{0.9,0.9,0.9,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class hellfire_smoke_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {5,12};
		color[] = {{0.015,0.015,0.015,0},{0.015,0.015,0.015,0.8},{0.015,0.015,0.015,0.75},{0.015,0.015,0.015,0.7},{0.015,0.015,0.015,0.65},{0.015,0.015,0.015,0.6},{0.015,0.015,0.015,0.55},{0.015,0.015,0.015,0.5},{0.015,0.015,0.015,0.45},{0.015,0.015,0.015,0.4},{0.015,0.015,0.015,0.35},{0.015,0.015,0.015,0.3},{0.015,0.015,0.015,0.25},{0.015,0.015,0.015,0.2},{0.015,0.015,0.015,0.15},{0.015,0.015,0.015,0.1},{0.015,0.015,0.015,0.05},{0.015,0.015,0.015,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class hellfire_smoke_02: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.91;
		rubbing = 1;
		size[] = {5,12};
		color[] = {{0.015,0.015,0.015,0},{0.015,0.015,0.015,0.8},{0.015,0.015,0.015,0.75},{0.015,0.015,0.015,0.7},{0.015,0.015,0.015,0.65},{0.015,0.015,0.015,0.6},{0.015,0.015,0.015,0.55},{0.015,0.015,0.015,0.5},{0.015,0.015,0.015,0.45},{0.015,0.015,0.015,0.4},{0.015,0.015,0.015,0.35},{0.015,0.015,0.015,0.3},{0.015,0.015,0.015,0.25},{0.015,0.015,0.015,0.2},{0.015,0.015,0.015,0.15},{0.015,0.015,0.015,0.1},{0.015,0.015,0.015,0.05},{0.015,0.015,0.015,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Blastcore_Smoke_Trail_Rocket_01: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {"0 + (speedX/3)","0 + (speedY/3)","0 + (speedZ/3)"};
		rotationVelocity = 0;
		weight = 11.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {0,2};
		color[] = {{0.3,0.2,0.1,0.5},{0.3,0.2,0.1,0.4},{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "Blastcore_Rocket_SmokeTrail";
	};
	class Blastcore_Smoke_Trail_Rocket_02: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 11.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {2,15};
		color[] = {{0.3,0.2,0.1,0.5},{0.3,0.2,0.1,0.4},{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class Blastcore_Smoke_Trail_Rocket_03: Default
	{
		interval = 4;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/2)","0 + (speedY/2)","0 + (speedZ/2)"};
		rotationVelocity = 0;
		weight = 11.5;
		volume = 7.9;
		rubbing = 1.8;
		size[] = {2,15};
		color[] = {{0.3,0.2,0.1,0.5},{0.3,0.2,0.1,0.4},{0.3,0.2,0.1,0.3},{0.3,0.2,0.1,0.2},{0.3,0.2,0.1,0.1},{0.3,0.2,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {6,6,6};
		rotationVelocityVar = 15;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HERound_Explosion_01: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.1;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {120,100,120};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "HERound_Emitter";
	};
	class HERound_Explosion_02: Default
	{
		interval = 0.0008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.08;
		moveVelocity[] = {0,20,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,1,2,3,4};
		color[] = {{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,0}};
		animationSpeed[] = {10};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {25,25,25};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class HERound_smoke_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {3,6};
		color[] = {{0.15,0.15,0.15,0},{0.15,0.15,0.15,0.8},{0.15,0.15,0.15,0.75},{0.15,0.15,0.15,0.7},{0.15,0.15,0.15,0.65},{0.15,0.15,0.15,0.6},{0.15,0.15,0.15,0.55},{0.15,0.15,0.15,0.5},{0.15,0.15,0.15,0.45},{0.15,0.15,0.15,0.4},{0.15,0.15,0.15,0.35},{0.15,0.15,0.15,0.3},{0.15,0.15,0.15,0.25},{0.15,0.15,0.15,0.2},{0.15,0.15,0.15,0.15},{0.15,0.15,0.15,0.1},{0.15,0.15,0.15,0.05},{0.15,0.15,0.15,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HERound_smoke_02: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxPE\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/15)","0 + (speedY/15)","0 + (speedZ/15)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.91;
		rubbing = 1;
		size[] = {3,6};
		color[] = {{0.15,0.15,0.15,0},{0.15,0.15,0.15,0.8},{0.15,0.15,0.15,0.75},{0.15,0.15,0.15,0.7},{0.15,0.15,0.15,0.65},{0.15,0.15,0.15,0.6},{0.15,0.15,0.15,0.55},{0.15,0.15,0.15,0.5},{0.15,0.15,0.15,0.45},{0.15,0.15,0.15,0.4},{0.15,0.15,0.15,0.35},{0.15,0.15,0.15,0.3},{0.15,0.15,0.15,0.25},{0.15,0.15,0.15,0.2},{0.15,0.15,0.15,0.15},{0.15,0.15,0.15,0.1},{0.15,0.15,0.15,0.05},{0.15,0.15,0.15,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ConcreteBulletImpact1_120mm: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"(surfNormalX / 1) * 10","(surfNormalY / 1) * 10","(surfNormalZ / 1) * 10"};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 0.6;
		size[] = {2,4};
		color[] = {{0.62,0.62,0.62,0.6},{0.62,0.62,0.62,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {"(surfNormalX / 1) * 5","(surfNormalY / 1) * 5","(surfNormalZ / 1) * 5"};
		rotationVelocityVar = 30;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ConcreteBulletImpact2_120mm: Default
	{
		interval = 0.0042;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {"(surfNormalX / 1) * 20","(surfNormalY / 1) * 20","(surfNormalZ / 1) * 20"};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,10};
		color[] = {{0.62,0.62,0.62,0.4},{0.62,0.62,0.62,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ConcreteBulletImpact3_120mm: Default
	{
		interval = 0.0042;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {"(surfNormalX / 1) * 30","(surfNormalY / 1) * 30","(surfNormalZ / 1) * 30"};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,15};
		color[] = {{0.62,0.62,0.62,0.4},{0.62,0.62,0.62,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ConcreteBulletImpact4_120mm: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {"(surfNormalX / 1) * 3","(surfNormalY / 1) * 3","(surfNormalZ / 1) * 3"};
		rotationVelocity = 1;
		weight = 10.2;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,15};
		color[] = {{0.62,0.62,0.62,0.4},{0.62,0.62,0.62,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {1.5,1.5,1.5};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ConcreteBulletImpact5_120mm: Default
	{
		interval = 0.0006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 12;
		moveVelocity[] = {"(surfNormalX / 1) * 20","(surfNormalY / 1) * 20","(surfNormalZ / 1) * 20"};
		rotationVelocity = 0;
		weight = 30;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.12};
		color[] = {{1,1,1,1},{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 3;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.25;
	};
	class HeliDestructionShards1: Default
	{
		interval = 0.35;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 10;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {1.5};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.5;
		bounceOnSurfaceVar = 0.25;
	};
	class HeliDestructionShards3: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.05;
		lifeTime = 10;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {1.5};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.5;
		bounceOnSurfaceVar = 0.25;
	};
	class Sparks_ammo_01: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Flare\Flare";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 4;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 50;
		volume = 7.9;
		rubbing = 5;
		size[] = {0.4};
		color[] = {{1,1,0.7,1},{1,1,0.6,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.25;
		randomDirectionIntensity = 0.25;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {100,50,100};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.1;
		emissiveColor[] = {{10000,10000,8000,0.5}};
	};
	class CloudMedDark: Default
	{
		interval = "1 * interval + 0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 1;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 6","0.0125 * intensity + 9","0.0125 * intensity + 13","0.0125 * intensity 15"};
		color[] = {{0.08,0.08,0.08,0},{0.08,0.08,0.08,0},{0.08,0.08,0.08,0},{0.08,0.08,0.08,0},{1,1,1,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2.5,3,2.5};
		MoveVelocityVar[] = {1.5,3,1.5};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class HeliDestructionShards2: Default
	{
		interval = 0.25;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,9,0};
		rotationVelocity = 1;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {1.5};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.5;
		bounceOnSurfaceVar = 0.25;
	};
	class FireBallBright: Default
	{
		interval = "0.02 * interval + 0.02";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 1;
		weight = 0.04;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {"0.0225 * intensity + 6","0.0225 * intensity + 8"};
		color[] = {{1,1,1,0},{1,1,1,0}};
		animationSpeed[] = {0.5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {3,5,3};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionShardsStatic: Default
	{
		interval = 0.025;
		circleRadius = 10;
		circleVelocity[] = {0.001,0,0.001};
		particleShape = "WarFXPE\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.05;
		lifeTime = 60;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {1};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {5,0,5};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionShards: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 30;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {0.5};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		bounceOnSurface = 0.15;
		bounceOnSurfaceVar = 0.15;
		lifeTimeVar = 20;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 2;
		sizeVar = 0.7;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ObjectDestructionShardsBurning: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Shard\shard.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 30;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 3;
		weight = 40;
		volume = 7.9;
		rubbing = 0.05;
		size[] = {0.7};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		bounceOnSurface = 0.02;
		bounceOnSurfaceVar = 0.2;
		particleEffects = "ExplosionShardsFire";
		lifeTimeVar = 23;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 2.5;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class VehicleExplosionFireBall: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 10;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {0,2,4,4,4,4,4};
		color[] = {{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		colorCoef[] = {1,1,1,5};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {3,8,3};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		emissiveColor[] = {{1000,1000,1000,0}};
	};
	class VehicleExplosionFireBall2: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 10;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {0,2,4,4,4,4,4};
		color[] = {{1,1,1,1},{1,1,1,0.9},{1,1,1,0.8},{1,1,1,0.7},{1,1,1,0.6},{1,1,1,0.5},{1,1,1,0.4},{1,1,1,0.3},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1.3,1.3,1.3};
		MoveVelocityVar[] = {5,8,5};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		emissiveColor[] = {{1000,1000,1000,0}};
	};
	class VehicleExplosionSmoke_01: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {6,15};
		color[] = {{0.02,0.02,0.02,0},{0.02,0.02,0.02,1},{0.02,0.02,0.02,0.9},{0.02,0.02,0.02,0.8},{0.02,0.02,0.02,0.7},{0.02,0.02,0.02,0.6},{0.02,0.02,0.02,0.5},{0.02,0.02,0.02,0.4},{0.02,0.02,0.02,0.3},{0.02,0.02,0.02,0.2},{0.02,0.02,0.02,0.1},{0.02,0.02,0.02,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {2,10,2};
		rotationVelocityVar = 10;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
	};
	class VehicleExplosionSmoke_02: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {6,15};
		color[] = {{0.02,0.02,0.02,0},{0.02,0.02,0.02,1},{0.02,0.02,0.02,0.9},{0.02,0.02,0.02,0.8},{0.02,0.02,0.02,0.7},{0.02,0.02,0.02,0.6},{0.02,0.02,0.02,0.5},{0.02,0.02,0.02,0.4},{0.02,0.02,0.02,0.3},{0.02,0.02,0.02,0.2},{0.02,0.02,0.02,0.1},{0.02,0.02,0.02,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {3,5,3};
		rotationVelocityVar = 10;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
	};
	class ExplosionParticles: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\explosion_01";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {4,6};
		color[] = {{1,1,1,-20},{1,1,1,-10}};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0.5,0};
		MoveVelocityVar[] = {0.2,0.5,0.2};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class VehExplosionParticles: Default
	{
		interval = "0.1 * interval + 0.1";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\explosion_11";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 0.058;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {20};
		color[] = {{1,1,1,0},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class VehExpSmoke: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,20,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 2;
		size[] = {3,6,9};
		color[] = {{0.05,0.05,0.05,0},{0.05,0.05,0.05,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {2,10,2};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
	};
	class SmallSmokeFast1: Default
	{
		interval = "0.03 * interval + 0.03";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 15;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 0;
		weight = 0.052;
		volume = 0.04;
		rubbing = 0.01;
		size[] = {"0.0125 * intensity + 7","0.0125 * intensity + 11","0.0125 * intensity + 14","0.0125 * intensity + 16"};
		color[] = {{0.4,0.4,0.4,1},{0.7,0.7,0.7,0.6},{0.9,0.9,0.9,0.3},{1,1,1,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {3,2,3};
		rotationVelocityVar = 20;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ATMineExplosionParticles: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {0,4,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {1,2,3,1};
		color[] = {{1,1,1,-10},{1,1,1,-8},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,1,0};
		MoveVelocityVar[] = {0.2,6,0.2};
		rotationVelocityVar = 15;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ATCloudSmallLight: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,23,0};
		rotationVelocity = 0;
		weight = 0.52;
		volume = 0.4;
		rubbing = 0.45;
		size[] = {2,4,5,6};
		color[] = {{0.25,0.25,0.25,0.4},{0.3,0.3,0.3,0.35},{0.3,0.3,0.3,0.28},{0.3,0.3,0.3,0.08},{1,1,1,0.01}};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0.5,1.5,0.5};
		MoveVelocityVar[] = {2.5,30,2.5};
		rotationVelocityVar = 10;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ATCloudSmallLightM: ATCloudSmallLight
	{
		interval = 0.003;
	};
	class MineExplosionParticles: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {1,2,3,1};
		color[] = {{1,1,1,-2},{1,1,1,-2},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0.3,0};
		MoveVelocityVar[] = {0.2,0.3,0.2};
		rotationVelocityVar = 15;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CloudSmallLight: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,3.2,0};
		rotationVelocity = 0;
		weight = 0.52;
		volume = 0.4;
		rubbing = 0.4;
		size[] = {"0.0125 * intensity + 2","0.0125 * intensity + 4","0.0125 * intensity + 5","0.0125 * intensity 6"};
		color[] = {{0.7,0.7,0.7,0.22},{0.8,0.8,0.8,0.13},{0.8,0.8,0.8,0.08},{0.9,0.9,0.9,0.03},{1,1,1,0.01}};
		animationSpeed[] = {1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {0.5,1.5,0.5};
		MoveVelocityVar[] = {1.7,3.5,1.7};
		rotationVelocityVar = 10;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class FireSparksSmall: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\SparksEffect\SparksEffect";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.4;
		moveVelocity[] = {0,2,0};
		rotationVelocity = 1;
		weight = 1.6;
		volume = 1;
		rubbing = 0.08;
		size[] = {0.07,0.07,0.07,0.07,0.07,0.045,0.045,0.045,0.035,0};
		color[] = {{1,0.3,0.3,-6.5},{1,0.3,0.3,-6},{1,0.3,0.3,-5.5},{1,0.3,0.3,-4.5}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.8;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {12,12,12};
		rotationVelocityVar = 2;
		sizeVar = 0.04;
		colorVar[] = {0,0.15,0.15,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MineCircleDust: Default
	{
		interval = 0.001;
		circleRadius = 1;
		circleVelocity[] = {1,0,1};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,0.2,0};
		rotationVelocity = 0;
		weight = 0.0525;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {1.6,3.5};
		color[] = {{0.5,0.4,0.3,0.06},{0.5,0.4,0.3,0.11},{0.5,0.4,0.3,0.06},{0.5,0.4,0.3,0.05},{0.5,0.4,0.3,0.015},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {2,0.2,2};
		MoveVelocityVar[] = {3,0.15,3};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MineStones1: Default
	{
		interval = 0.009;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 20;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.08};
		color[] = {{0.1,0.1,0.1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -2;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.12;
		lifeTimeVar = 10;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {7,8,7};
		rotationVelocityVar = 1;
		sizeVar = 0.05;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class MineStones2: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\StoneSmall.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 0.1;
		lifeTime = 20;
		moveVelocity[] = {0,8,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{0.1,0.1,0.1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -2;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.12;
		lifeTimeVar = 10;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {9,10,9};
		rotationVelocityVar = 1;
		sizeVar = 0.08;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ShellSmokeTrail1: Default
	{
		interval = 0.2;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 120;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.4};
		color[] = {{0.8,0.8,0.8,0.8}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,30,20};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ShellSmokeTrail2: Default
	{
		interval = 0.2;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 120;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.4};
		color[] = {{0.8,0.8,0.8,0.8}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,30,20};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ShellSmokeTrail3: Default
	{
		interval = 0.2;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 120;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.4};
		color[] = {{0.8,0.8,0.8,0.8}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,30,20};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class CircleDustMed: Default
	{
		interval = 0.003;
		circleRadius = 2;
		circleVelocity[] = {8,0,8};
		particleShape = "WarFXPE\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4.5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {4,8};
		color[] = {{0.5,0.4,0.3,0},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {0.5,0.5,0.5};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class SparkRocket: Default
	{
		interval = 0.0002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 5;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 2;
		weight = 6;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{1,1,0.5,-60},{1,1,0.5,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{100,100,10,1}};
	};
	class SparkRocket_02: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "WarFXPE\ParticleEffects\Universal\rocketsparks";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 0;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.2;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {5};
		color[] = {{1,1,1,-6},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{100,100,10,1}};
	};
	class Blastcore_smoke_Bomb: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"0 + (speedX/1)","0 + (speedY/1)","0 + (speedZ/1)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 2;
		size[] = {1,3,6};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb2: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 4;
		size[] = {3,15,15,20};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {60,60,60};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb3: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 4;
		size[] = {3,15,15,20};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {60,60,60};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb_dark: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"0 + (speedX/1)","0 + (speedY/1)","0 + (speedZ/1)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 2;
		size[] = {1,3,6};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb2_dark: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 4;
		size[] = {3,15,15,20};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {60,60,60};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb3_dark: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 4;
		size[] = {3,15,15,20};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {60,60,60};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Smoke_TrailBC2: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.7;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.3;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {70,50,70};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "SmokeTrail_Blastcore3";
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb4: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"0 + (speedX/1)","0 + (speedY/1)","0 + (speedZ/1)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 2;
		size[] = {1,3,6};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb5: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,20};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb6: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,20};
		color[] = {{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.8},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.6},{0.1,0.1,0.1,0.5},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb4_dark: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"0 + (speedX/1)","0 + (speedY/1)","0 + (speedZ/1)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 2;
		size[] = {1,3,6};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb5_dark: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,20};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Blastcore_smoke_Bomb6_dark: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/0.5)","0 + (speedY/0.5)","0 + (speedZ/0.5)"};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 3;
		size[] = {2,20};
		color[] = {{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.8},{0.05,0.045,0.04,0.7},{0.05,0.045,0.04,0.6},{0.05,0.045,0.04,0.5},{0.05,0.045,0.04,0.4},{0.05,0.045,0.04,0.3},{0.05,0.045,0.04,0.2},{0.05,0.045,0.04,0.1},{0.05,0.045,0.04,0}};
		animationSpeed[] = {0.8,0.4};
		randomDirectionPeriod = 6;
		randomDirectionIntensity = 2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {20,20,20};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtImpact_MK82_Stones: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Pstone\Pstone.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {"(surfNormalX / 1) * 15","(surfNormalY / 1) * 15","(surfNormalZ / 1) * 15"};
		rotationVelocity = 0;
		weight = 30;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.75};
		color[] = {{1,1,1,1},{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {15,15,15};
		rotationVelocityVar = 3;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.25;
		destroyOnWaterSurface = 1;
	};
	class BattleDust_01: Default
	{
		interval = 0.85;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 30;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {0,60};
		color[] = {{0.7,0.6,0.5,0},{0.7,0.6,0.5,0.015},{0.7,0.6,0.5,0}};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class BattleDust_02: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 60;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {0,60};
		color[] = {{0.7,0.6,0.5,0},{0.7,0.6,0.5,0.1},{0.7,0.6,0.5,0}};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {5,5,5};
		rotationVelocityVar = 10;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class M136_Explode_01: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.1;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {50,15,50};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "M136_Explosiontrail";
		destroyOnWaterSurface = 1;
	};
	class M136_Explode_02: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {2,8,10};
		color[] = {{1,1,1,-10},{1,1,1,0}};
		animationSpeed[] = {1.8};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,8000,0},{10000,10000,4000,0}};
	};
	class M136_Smoke_01: Default
	{
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {"0 + (speedX/10)","0 + (speedY/10)","0 + (speedZ/10)"};
		rotationVelocity = 0;
		weight = 9.5;
		volume = 7.9;
		rubbing = 1;
		size[] = {2,12};
		color[] = {{0.1,0.1,0.1,0.8},{0.8,0.8,0.8,0}};
		animationSpeed[] = {1,0.5};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {2.5,2.5,2.5};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class M136_Smoke_02: Default
	{
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 9;
		moveVelocity[] = {"0 + (speedX/10)","0 + (speedY/10)","0 + (speedZ/10)"};
		rotationVelocity = 0;
		weight = 9.5;
		volume = 7.91;
		rubbing = 1;
		size[] = {2,12};
		color[] = {{0.2,0.2,0.2,0.8},{0.8,0.8,0.8,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0.5,0.5,0.5};
		MoveVelocityVar[] = {3,3,3};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class M136_Smoke_03: Default
	{
		interval = 0.04;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,3,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {2,8};
		color[] = {{0.5,0.5,0.5,0.05},{0.8,0.8,0.8,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class AA_SmokeHit_01: Default
	{
		interval = 0.0008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 2;
		size[] = {5};
		color[] = {{0.4,0.4,0.4,0},{0.4,0.4,0.4,0.3},{0.4,0.4,0.4,0.5},{0.4,0.4,0.4,0.2},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {4,4,4};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class AA_SmokeHit_02: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 2;
		size[] = {4,12};
		color[] = {{0.4,0.4,0.4,0},{0.4,0.4,0.4,0.4},{0.4,0.4,0.4,0.35},{0.4,0.4,0.4,0.3},{0.4,0.4,0.4,0.25},{0.4,0.4,0.4,0.2},{0.4,0.4,0.4,0.15},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0.05},{0.4,0.4,0.4,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {5,5,5};
		MoveVelocityVar[] = {0.5,1,0.5};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class AA_SmokeHit_03: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 2;
		size[] = {4,12};
		color[] = {{0.4,0.4,0.4,0},{0.4,0.4,0.4,0.6},{0.4,0.4,0.4,0.5},{0.4,0.4,0.4,0.4},{0.4,0.4,0.4,0.3},{0.4,0.4,0.4,0.2},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {3,3,3};
		MoveVelocityVar[] = {1,2,1};
		rotationVelocityVar = 10;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class DirtBulletImpact5_120mm: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Pstone\Pstone.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {"(surfNormalX / 1) * 10","(surfNormalY / 1) * 10","(surfNormalZ / 1) * 10"};
		rotationVelocity = 0;
		weight = 30;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.3};
		color[] = {{1,1,1,1},{1,1,1,1}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 3;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.25;
	};
	class AA_SmokeHit_04: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.2;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 1;
		weight = 20.5;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.15};
		color[] = {{1,1,1,-15},{1,1,1,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 5;
		randomDirectionIntensity = 10;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.25;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {100,100,100};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0.051,0.051,0.051,0};
		randomDirectionPeriodVar = 0.5;
		randomDirectionIntensityVar = 0.5;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class AA_ExplodeSmokeTrail: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 2;
		size[] = {0.3,0.8};
		color[] = {{0.4,0.4,0.4,0},{0.4,0.4,0.4,0.4},{0.4,0.4,0.4,0.3},{0.4,0.4,0.4,0.2},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0.1},{0.4,0.4,0.4,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.15,0.15,0.15};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0.2};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_explosion: Default
	{
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\particleeffects\SparksEffect\SparksEffect.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.2;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.4;
		size[] = {0.05};
		color[] = {{1,1,0.4,-15},{1,1,0.4,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {25,50,25};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		particleEffects = "mk82_explosiontrail";
		destroyOnWaterSurface = 1;
	};
	class MK82_Explosion_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.2;
		moveVelocity[] = {"0 + (speedX/5)","0 + (speedY/5)","0 + (speedZ/5)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {8};
		color[] = {{1,1,1,-1},{1,1,1,-1},{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		animationSpeed[] = {3};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 2;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,0},{0,0,0,0}};
	};
	class MK82_Explosion_02: Default
	{
		interval = 0.003;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.6;
		moveVelocity[] = {"0 + (speedX/1)","0 + (speedY/1)","0 + (speedZ/1)"};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,10};
		color[] = {{1,1,1,-1},{1,1,1,-1},{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {20,50,20};
		rotationVelocityVar = 10;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,0},{0,0,0,0}};
	};
	class airblast: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.25;
		moveVelocity[] = {0,100,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {25};
		color[] = {{1,1,1,-0.05},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {200,100,200};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class explosion_glow_01: Default
	{
		interval = 0.07;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.25;
		moveVelocity[] = {0,20,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {50,5};
		color[] = {{1,1,0,-0.0025},{1,1,0,0}};
		animationSpeed[] = {0};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {5,5,5};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{1200,1200,1,1}};
	};
	class mk82_glow: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 50;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {40,0};
		color[] = {{1,0.5,0,-0.0001},{1,0.5,0,0}};
		animationSpeed[] = {0};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {30,30,30};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{1200,1200,1,1}};
	};
	class Hellfire_Blast_Glow: Default
	{
		interval = 0.08;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 1;
		anglevar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 50;
		volume = 7.9;
		rubbing = 0.075;
		size[] = {60,0};
		color[] = {{1,1,0.6,0.003},{1,1,0.6,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {15,15,15};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{1000,1000,100,1}};
	};
	class AA_Explosion_01: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,3,3,3,3,3,3};
		color[] = {{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		animationSpeed[] = {1.8};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {4,4,4};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class AA_Explosion_02: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,3,3,3,3,3,3};
		color[] = {{1,1,1,1},{1,1,1,0.9},{1,1,1,0.8},{1,1,1,0.7},{1,1,1,0.6},{1,1,1,0.5},{1,1,1,0.4},{1,1,1,0.3},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {1.8};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {40,40,40};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class AA_Explosion_03: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Explosion";
		particleFSNtieth = 5;
		particleFSIndex = 0;
		particleFSFrameCount = 25;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,3,3,3,3,3,3};
		color[] = {{1,1,1,1},{0,0,0,0}};
		animationSpeed[] = {1.8};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {7,7,7};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class Sparks_med: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Flare\Flare";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 0.5;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 1;
		weight = 0.15;
		volume = 0.1;
		rubbing = 0.18;
		size[] = {0.2};
		color[] = {{1,1,0.8,-1},{1,1,0.7,0}};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {100,100,100};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,8000,0.5}};
		destroyOnWaterSurface = 1;
	};
	class Sparks_large: Default
	{
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Flare\Flare";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.08;
		lifeTime = 1.3;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 1;
		weight = 200;
		volume = 0.1;
		rubbing = 0;
		size[] = {0.3};
		color[] = {{1,1,0.8,-1},{1,1,0.8,0}};
		colorCoef[] = {1,1,1,-5};
		animationSpeed[] = {-2};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {30,30,30};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		emissiveColor[] = {{10000,10000,8000,0.5}};
		destroyOnWaterSurface = 1;
	};
	class sparks_huge: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Flare\Flare";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 3;
		moveVelocity[] = {0,80,0};
		rotationVelocity = 1;
		weight = 11;
		volume = 7.9;
		rubbing = 1;
		size[] = {0.5};
		color[] = {{1,1,0.8,-1},{1,1,0.7,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.15;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {150,150,150};
		rotationVelocityVar = 1;
		sizeVar = 0.2;
		colorVar[] = {0.05,0.05,0.05,0};
		randomDirectionPeriodVar = 0.15;
		randomDirectionIntensityVar = 0.15;
		emissiveColor[] = {{10000,10000,8000,0.5}};
		destroyOnWaterSurface = 1;
	};
	class 105_stones: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\pstone\pstone.p3d";
		animationName = "";
		particleType = "spaceobject";
		angleVar = 360;
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {0,40,0};
		rotationVelocity = 10;
		weight = 30;
		volume = 1;
		rubbing = 1;
		size[] = {0.25};
		color[] = {{1,1,1,6}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {80,40,80};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.25;
	};
	class hydra_smoke_up_01: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 5;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 12;
		volume = 7.9;
		rubbing = 1.5;
		size[] = {4};
		color[] = {{0.48,0.38,0.28,0.1},{0.88,0.78,0.68,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,5,2};
		MoveVelocityVar[] = {5,1,5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class hydra_smoke_up_02: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 5;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1.5;
		size[] = {4,10};
		color[] = {{0.48,0.38,0.28,0.1},{0.88,0.78,0.68,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,5,2};
		MoveVelocityVar[] = {5,1,5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class hydra_smoke_up_03: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_03";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 5;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 11;
		volume = 7.9;
		rubbing = 1.5;
		size[] = {4};
		color[] = {{0.48,0.38,0.28,0.1},{0.88,0.78,0.68,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,5,2};
		MoveVelocityVar[] = {5,1,5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class hydra_smoke_up_04: Default
	{
		interval = 0.006;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 10;
		moveVelocity[] = {0,5,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1.5;
		size[] = {4,10};
		color[] = {{0.68,0.58,0.48,0.1},{0.68,0.58,0.48,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {2,5,2};
		MoveVelocityVar[] = {5,1,5};
		rotationVelocityVar = 20;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtMK82: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt_big";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 6;
		moveVelocity[] = {0,15,0};
		rotationVelocity = 1;
		weight = 20;
		volume = 7.9;
		rubbing = 0;
		size[] = {1};
		color[] = {{0.3,0.3,0.3,3},{0.3,0.3,0.3,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {6,10,6};
		rotationVelocityVar = 5;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtArty: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt_big";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 6;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 1;
		weight = 20;
		volume = 7.9;
		rubbing = 0;
		size[] = {0.5};
		color[] = {{0.3,0.3,0.3,3},{0.3,0.3,0.3,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {2,6,2};
		rotationVelocityVar = 5;
		sizeVar = 0.2;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtMassive: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 8;
		moveVelocity[] = {0,50,0};
		rotationVelocity = 1;
		weight = 0.2;
		volume = 0.1;
		rubbing = 0.05;
		size[] = {12};
		color[] = {{0.3,0.3,0.3,3},{0.3,0.3,0.3,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {20,50,20};
		rotationVelocityVar = 2;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtBig: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {0,45,0};
		rotationVelocity = 5;
		weight = 30;
		volume = 1;
		rubbing = 2;
		size[] = {6};
		color[] = {{0.31,0.2,0.1,3},{0.31,0.2,0.1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {25,45,25};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtMed: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		moveVelocity[] = {0,70,0};
		rotationVelocity = 5;
		weight = 30;
		volume = 1;
		rubbing = 2;
		size[] = {8};
		color[] = {{0.3,0.2,0.1,3},{0.3,0.2,0.1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0.5,5,0.5};
		MoveVelocityVar[] = {30,70,30};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class DirtRocket: Default
	{
		interval = 0.001;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\dirt";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.1;
		lifeTime = 1;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 5;
		weight = 6;
		volume = 0.1;
		rubbing = 0;
		size[] = {5};
		color[] = {{0.3,0.3,0.3,2},{0.3,0.3,0.3,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {8,10,8};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_01: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {8,12};
		color[] = {{0.01,0.01,0.01,1},{0.01,0.01,0.01,0.8},{0.01,0.01,0.01,0.9},{0.01,0.01,0.01,0.8},{0.01,0.01,0.01,0.7},{0.01,0.01,0.01,0.6},{0.01,0.01,0.01,0.5},{0.01,0.01,0.01,0.4},{0.01,0.01,0.01,0.3},{0.01,0.01,0.01,0.2},{0.01,0.01,0.01,0.1},{0.01,0.01,0.01,0}};
		animationSpeed[] = {1,0.25};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_02: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 1;
		size[] = {8,15};
		color[] = {{0.01,0.01,0.01,0},{0.01,0.01,0.01,0.8},{0.01,0.01,0.01,0.9},{0.01,0.01,0.01,0.8},{0.01,0.01,0.01,0.7},{0.01,0.01,0.01,0.6},{0.01,0.01,0.01,0.5},{0.01,0.01,0.01,0.4},{0.01,0.01,0.01,0.3},{0.01,0.01,0.01,0.2},{0.01,0.01,0.01,0.1},{0.01,0.01,0.01,0}};
		animationSpeed[] = {1,0.25};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {10,10,10};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_01_ground: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 0;
		weight = 10.2;
		volume = 7.9;
		rubbing = 1;
		size[] = {8,12};
		color[] = {{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.4},{0.6,0.5,0.4,0.35},{0.6,0.5,0.4,0.3},{0.6,0.5,0.4,0.25},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.15},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0.05},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1,0.25};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {10,10,10};
		MoveVelocityVar[] = {200,10,200};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_02_ground: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0,10,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 1;
		size[] = {15,30};
		color[] = {{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.4},{0.6,0.5,0.4,0.35},{0.6,0.5,0.4,0.3},{0.6,0.5,0.4,0.25},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.15},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0.05},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1,0.25};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {10,10,10};
		MoveVelocityVar[] = {200,10,200};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_03_ground: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_01";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,200,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 1;
		size[] = {8,12};
		color[] = {{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.4},{0.6,0.5,0.4,0.35},{0.6,0.5,0.4,0.3},{0.6,0.5,0.4,0.25},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.15},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0.05},{0.6,0.5,0.4,0}};
		animationSpeed[] = {0.2};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {6,6,6};
		MoveVelocityVar[] = {10,200,10};
		rotationVelocityVar = 1;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class mk82_smoke_04_ground: Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\Smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 8;
		moveVelocity[] = {0,200,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 7.9;
		rubbing = 1;
		size[] = {8,12};
		color[] = {{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.4},{0.6,0.5,0.4,0.35},{0.6,0.5,0.4,0.3},{0.6,0.5,0.4,0.25},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.15},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0.05},{0.6,0.5,0.4,0}};
		animationSpeed[] = {1,0.25};
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {6,6,6};
		MoveVelocityVar[] = {10,200,10};
		rotationVelocityVar = 20;
		sizeVar = 0.25;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
		destroyOnWaterSurface = 1;
	};
	class ExplosionDustSmall: Default
	{
		interval = 0.002;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 4;
		size[] = {4,5,6,7,8,9,10};
		color[] = {{0.4,0.3,0.2,0.008},{0.4,0.3,0.2,0}};
		animationSpeed[] = {1,0.25};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.5;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {40,40,40};
		rotationVelocityVar = 5;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
	};
	class Hydra_Smoke_01: Default
	{
		interval = 0.008;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "warfxpe\ParticleEffects\Universal\smoke_02";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 5;
		moveVelocity[] = {0,1,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {2,5};
		color[] = {{0.01,0.01,0.01,0.8},{0.01,0.01,0.01,0}};
		animationSpeed[] = {1,0.25};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 0.01;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.2;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {1.5,1.5,1.5};
		rotationVelocityVar = 20;
		sizeVar = 0.2;
		colorVar[] = {0.01,0.01,0.01,0.2};
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.01;
	};
	class Hydra_Explode_01: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,3,3,3,3,3,3};
		color[] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,0.7},{1,1,1,0.6},{1,1,1,0.5},{1,1,1,0.4},{1,1,1,0.3},{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
	class Hydra_Explode_02: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 64;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.1;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10.1;
		volume = 7.9;
		rubbing = 0.8;
		size[] = {0,3,3,3,3,3,3};
		color[] = {{1,1,1,-1},{1,1,1,-1},{1,1,1,-1},{1,1,1,-0.9},{1,1,1,-0.8},{1,1,1,-0.7},{1,1,1,-0.6},{1,1,1,-0.5},{1,1,1,-0.4},{1,1,1,-0.3},{1,1,1,-0.2},{1,1,1,-0.1},{1,1,1,0}};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {1,1,1};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		destroyOnWaterSurface = 1;
		emissiveColor[] = {{10000,10000,10000,1}};
	};
};
class CfgLights
{
	class GrenadeExploLight
	{
		diffuse[] = {0.255,0.255,0.255};
		color[] = {0.3,0.22,0.12};
		ambient[] = {0,0,0,0};
		intensity = 1000;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 5;
		flareMaxDistance = 6000;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
	class Hellfire_light_source
	{
		diffuse[] = {0.7,0.7,0.4};
		color[] = {0.7,0.7,0.4};
		ambient[] = {0.9,0.45,0.15};
		brightness = 20;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 50;
		flareMaxDistance = 6000;
		useFlare = 0;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 1;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
	class Hellfire_light_source_02
	{
		diffuse[] = {0.9,0.45,0.15};
		color[] = {0.9,0.45,0.15};
		ambient[] = {0.9,0.45,0.15};
		brightness = 20;
		size = 1;
		drawLight = 0;
		blinking = 0;
		flareSize = 50;
		flareMaxDistance = 6000;
		useFlare = 0;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 1;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
	class MK82_light_source
	{
		diffuse[] = {0,0,0};
		color[] = {0.7,0.7,0.7};
		ambient[] = {0.03,0.03,0.03,0};
		brightness = 200;
		intensity = 100000;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 20;
		flareMaxDistance = 6000;
		useFlare = 1;
		class Attenuation
		{
			start = 4;
			constant = 0;
			linear = 0;
			quadratic = 0.2;
			hardLimitStart = 1000;
			hardLimitEnd = 2000;
		};
		position[] = {0,0,0};
	};
	class MK82_light_source_02
	{
		diffuse[] = {0,0,0};
		color[] = {0.655,0.535,0};
		ambient[] = {0.155,0.035,0,0};
		brightness = 100;
		intensity = 10000;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 14;
		flareMaxDistance = 6000;
		useFlare = 0;
		class Attenuation
		{
			start = 4;
			constant = 0;
			linear = 0;
			quadratic = 0.2;
			hardLimitStart = 1000;
			hardLimitEnd = 2000;
		};
		position[] = {0,0,0};
	};
	class ExploLight
	{
		diffuse[] = {0,0,0};
		color[] = {0.255,0.135,0};
		ambient[] = {0.0255,0.0145,0,0};
		brightness = 1.3;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 6;
		flareMaxDistance = 5000;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,40,0};
	};
	class ExploLightFast
	{
		diffuse[] = {0,0,0};
		color[] = {0.6,0.6,0.6};
		ambient[] = {0.06,0.06,0.06,0};
		Brightness = 8;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 4;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
	class ExploLightFast_02
	{
		diffuse[] = {0,0,0};
		color[] = {0.6,0.5,0.3};
		ambient[] = {0.06,0.05,0.03,0};
		Brightness = 6;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 2;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
	class ExploLightFastBig
	{
		diffuse[] = {0,0,0};
		color[] = {0.6,0.4,0.3};
		ambient[] = {0.06,0.04,0.03,0};
		Brightness = 8;
		size = 1;
		drawLight = 0;
		blinking = "false";
		flareSize = 4;
		flareMaxDistance = 4000;
		useFlare = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 0;
			hardLimitStart = 0;
			hardLimitEnd = 0;
		};
		position[] = {0,0,0};
	};
};
class AA_Explode_Smoke
{
	class Trail
	{
		simulation = "particles";
		type = "AA_ExplodeSmokeTrail";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class M136_Explode
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,1};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class LightExp_02
	{
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,1};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
	class M136_Explode_01
	{
		simulation = "particles";
		type = "M136_Explode_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class M136_Explode_02
	{
		simulation = "particles";
		type = "M136_Explode_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class M136_smoke_03
	{
		simulation = "particles";
		type = "M136_smoke_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 8;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class BattleDust_02
	{
		simulation = "particles";
		type = "BattleDust_02";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class M136_Smoke
{
	class RocketDust
	{
		simulation = "particles";
		type = "ExplosionDustSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class 80mm_Explode
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,1};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
	class LightExp_02
	{
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,1};
		intensity = 1;
		interval = 1;
		lifeTime = 0.13;
	};
	class Hydra_Explode_01
	{
		simulation = "particles";
		type = "Hydra_Explode_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Hydra_Explode_02
	{
		simulation = "particles";
		type = "Hydra_Explode_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Hydra_Smoke_01
	{
		simulation = "particles";
		type = "Hydra_Smoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};
class 155mm_Explode
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,1};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
	class LightExp2
	{
		simulation = "light";
		type = "ExploLightFastBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Blastcore_Artillery_Explosion_Emitter
	{
		simulation = "particles";
		type = "Blastcore_Artillery_Explosion_Emitter";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Sparks_Med
	{
		simulation = "particles";
		type = "Sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class cloudlight_large
	{
		simulation = "particles";
		type = "cloudlight_large";
		position[] = {0,400,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
};
class 155mm_Smoke
{
	class Smoke_Trail_Artillery_Emitter
	{
		simulation = "particles";
		type = "Smoke_Trail_Artillery_Emitter_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_Artillery_Emit
	{
		simulation = "particles";
		type = "Smoke_Trail_Artillery_Emitter_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtArty
	{
		simulation = "particles";
		type = "DirtArty";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtBig
	{
		simulation = "particles";
		type = "DirtBig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Dirt
	{
		simulation = "particles";
		type = "DirtMed";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class BattleDust_02
	{
		simulation = "particles";
		type = "BattleDust_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class 105_stones
	{
		simulation = "particles";
		type = "105_stones";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
};
class 80mm_Smoke
{
	class Smoke_Trail_TankRound_Emitter
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_01";
		position[] = {0,0,0};
		intensity = 0.2;
		interval = 1;
		lifeTime = 0.025;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_02";
		position[] = {0,0,0};
		intensity = 0.2;
		interval = 1;
		lifeTime = 0.025;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter";
		position[] = {0,0,0};
		intensity = 0.2;
		interval = 1;
		lifeTime = 0.025;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[] = {0,0,0};
		intensity = 0.2;
		interval = 1;
		lifeTime = 0.025;
	};
	class hydra_smoke_up_02
	{
		simulation = "particles";
		type = "hydra_smoke_up_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class hydra_smoke_up_03
	{
		simulation = "particles";
		type = "hydra_smoke_up_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class hydra_smoke_up_04
	{
		simulation = "particles";
		type = "hydra_smoke_up_04";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Dirt
	{
		simulation = "particles";
		type = "DirtRocket";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class BattleDust_01
	{
		simulation = "particles";
		type = "BattleDust_02";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class MK82_Smoke
{
	class BattleDust_01
	{
		simulation = "particles";
		type = "BattleDust_02";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_01
	{
		simulation = "particles";
		type = "mk82_smoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_02
	{
		simulation = "particles";
		type = "mk82_smoke_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_01_ground
	{
		simulation = "particles";
		type = "mk82_smoke_01_ground";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_02_ground
	{
		simulation = "particles";
		type = "mk82_smoke_02_ground";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_03_ground
	{
		simulation = "particles";
		type = "mk82_smoke_03_ground";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class mk82_smoke_04_ground
	{
		simulation = "particles";
		type = "mk82_smoke_04_ground";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtImpact_MK82_Stones
	{
		simulation = "particles";
		type = "DirtImpact_MK82_Stones";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class dirtmassive
	{
		simulation = "particles";
		type = "dirtmassive";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class DirtMK82
	{
		simulation = "particles";
		type = "DirtMK82";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_TrailBC1
	{
		simulation = "particles";
		type = "Smoke_TrailBC1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_TrailBC2
	{
		simulation = "particles";
		type = "Smoke_TrailBC2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_01
	{
		simulation = "particles";
		type = "hydra_smoke_up_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_02
	{
		simulation = "particles";
		type = "hydra_smoke_up_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_03
	{
		simulation = "particles";
		type = "hydra_smoke_up_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_04
	{
		simulation = "particles";
		type = "hydra_smoke_up_04";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class AA_Explode
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class LightExp2
	{
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class AA_Explosion_01
	{
		simulation = "particles";
		type = "AA_Explosion_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class AA_Explosion_02
	{
		simulation = "particles";
		type = "AA_Explosion_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation = "particles";
		type = "Hellfire_Blast_Glow";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class AA_SmokeHit_01
	{
		simulation = "particles";
		type = "AA_SmokeHit_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class AA_SmokeHit_02
	{
		simulation = "particles";
		type = "AA_SmokeHit_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class AA_SmokeHit_03
	{
		simulation = "particles";
		type = "AA_SmokeHit_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class AA_SmokeHit_04
	{
		simulation = "particles";
		type = "AA_SmokeHit_04";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class AA_Smoke
{
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class MK82_Explode
{
	class mk82_light
	{
		simulation = "light";
		type = "mk82_light_source";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.08;
	};
	class mk82_light_02
	{
		simulation = "light";
		type = "mk82_light_source_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class mk82_explosion
	{
		simulation = "particles";
		type = "mk82_explosion";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class airblast
	{
		simulation = "particles";
		type = "airblast";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class explosion_glow_01
	{
		simulation = "particles";
		type = "explosion_glow_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class mk82_glow
	{
		simulation = "particles";
		type = "mk82_glow";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class sparks_large
	{
		simulation = "particles";
		type = "sparks_large";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
	class sparks_huge
	{
		simulation = "particles";
		type = "sparks_huge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
	class shockwave
	{
		simulation = "particles";
		type = "shockwave_large";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
};
class M136_explosiontrail
{
	class Trail2
	{
		simulation = "particles";
		type = "M136_Smoke_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "M136_Smoke_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_Explosion_EmitterLink
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Artillery_Explosion";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_ExplosionSmoke_EmitterLink
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Artillery_ExplosionSmoke";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Artillery_EmitterLink
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Artillery_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_Artillery_01_Link
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Artillery_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Artillery_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_TankRound_01_Link
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink_BaseSmoke
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_BaseSmoke_TankRound";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_BaseSmoke_TankRound2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_Blastcore1
{
	class Trail
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb2";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb3";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trai4
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail5
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb2_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail6
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb3_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class SmokeTrail_Blastcore3
{
	class Trail
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb4";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb5";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb6";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail4
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb4_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail5
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb5_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail6
	{
		simulation = "particles";
		type = "Blastcore_smoke_Bomb6_dark";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class mk82_explosiontrail
{
	class Trail
	{
		simulation = "particles";
		type = "mk82_explosion_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 0.2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation = "particles";
		type = "mk82_smoke_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 0.2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "mk82_smoke_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 0.2;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class mk82_light_02
	{
		simulation = "light";
		type = "mk82_light_source_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class cloudlight_large
	{
		simulation = "particles";
		type = "cloudlight_large";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
};
class Smoke_Trail_TankRound_EmitterLink_02
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_TankRound_SmokeTrail
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_TankRound_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Artillery_EmitterLink_02
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Artillery_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Artillery_SmokeTrail
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Artillery_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Artillery_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_TankRound_EmitterLink_Small
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_TankRound";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class ImpactMetal_HJ
{
	class SparksLight
	{
		simulation = "light";
		type = "sparksLight_HJ";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks0_HJ
	{
		simulation = "particles";
		type = "ImpactSparks0_HJ";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1.5;
	};
	class ImpactSmoke2
	{
		simulation = "particles";
		type = "ImpactSmoke2";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Med
	{
		simulation = "particles";
		type = "ImpactSmokeMed2";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSmoke2Low
	{
		simulation = "particles";
		type = "ImpactSmokeLow2";
		position[] = {0,0,0};
		qualityLevel = 0;
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class Hellfire_Smoke
{
	class Smoke_Trail_Rocket_Emitter
	{
		simulation = "particles";
		type = "Smoke_Trail_Rocket_Emitter_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_Rocket_Emit
	{
		simulation = "particles";
		type = "Smoke_Trail_Rocket_Emitter_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_01
	{
		simulation = "particles";
		type = "hydra_smoke_up_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_02
	{
		simulation = "particles";
		type = "hydra_smoke_up_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_03
	{
		simulation = "particles";
		type = "hydra_smoke_up_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class hydra_smoke_up_04
	{
		simulation = "particles";
		type = "hydra_smoke_up_04";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Dirt
	{
		simulation = "particles";
		type = "DirtRocket";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Stones
	{
		simulation = "particles";
		type = "Hydra_Explode_03";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
class Hellfire_Explode
{
	class HellfireLight_01
	{
		simulation = "light";
		type = "Hellfire_light_source";
		position[] = {0,0,5};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class HellfireLight_02
	{
		simulation = "light";
		type = "Hellfire_light_source_02";
		position[] = {0,0,5};
		intensity = 1;
		interval = 1;
		lifeTime = 0.4;
	};
	class Hellfire_Explosion_01
	{
		simulation = "particles";
		type = "Hellfire_Explosion_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Hellfire_Explosion_02
	{
		simulation = "particles";
		type = "Hellfire_Explosion_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Hellfire_Smoke_Trail_Emit_01
	{
		simulation = "particles";
		type = "Hellfire_Smoke_Trail_Emit_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Hellfire_Blast_Glow
	{
		simulation = "particles";
		type = "Hellfire_Blast_Glow";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};

class Smoke_Trail_Rocket_EmitterLink
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Rocket_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Smoke_Rocket_01_Link
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Rocket_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Rocket_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Hellfire_SmokeTrail_01
{
	class Trail
	{
		simulation = "particles";
		type = "Hellfire_Smoke_Trail_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class hellfire_explosiontrail
{
	class Trail
	{
		simulation = "particles";
		type = "Hellfire_Explosion_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail2
	{
		simulation = "particles";
		type = "hellfire_smoke_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "hellfire_smoke_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Smoke_Trail_Rocket_EmitterLink_02
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Rocket_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class Blastcore_Rocket_SmokeTrail
{
	class Link
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Rocket_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Link2
	{
		simulation = "particles";
		type = "Blastcore_Smoke_Trail_Rocket_03";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};
class HERound_Emitter
{
	class Trail2
	{
		simulation = "particles";
		type = "Heround_smoke_01";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
	class Trail3
	{
		simulation = "particles";
		type = "Heround_smoke_02";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		qualityLevel = 2;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};

//Эффекты взрывы авиации
class HelicopterExplosionEffects //эффект 1
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class mk82_light
	{
		simulation = "light";
		type = "mk82_light_source";
		position[] = {0,0,5};
		intensity = 1;
		interval = 1;
		lifeTime = 0.4;
	};
	class mk82_light_02
	{
		simulation = "light";
		type = "mk82_light_source_02";
		position[] = {0,0,5};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Shards
	{
		simulation = "particles";
		type = "HeliDestructionShards1";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Shards2
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShardsBurn2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class Shards3
	{
		simulation = "particles";
		type = "HeliDestructionShards3";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 0.4;
	};
	class VehicleFireball
	{
		simulation = "particles";
		type = "VehicleExplosionFireBall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleFireball2
	{
		simulation = "particles";
		type = "VehicleExplosionFireBall2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleExplosionSmoke_01
	{
		simulation = "particles";
		type = "VehicleExplosionSmoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleExplosionSmoke_02
	{
		simulation = "particles";
		type = "VehicleExplosionSmoke_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Sparks_large
	{
		simulation = "particles";
		type = "Sparks_large";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "Sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Sparks_ammo_01
	{
		simulation = "particles";
		type = "Sparks_ammo_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class explosion_glow_01
	{
		simulation = "particles";
		type = "explosion_glow_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};



class HelicopterExplosionEffects2 //эффект 2
{
	class Shards
	{
		simulation = "particles";
		type = "HeliDestructionShards2";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class Shards2
	{
		simulation = "particles";
		type = "ObjectDestructionShards";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class ShardsBurn2
	{
		simulation = "particles";
		type = "ObjectDestructionShardsBurning";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,5};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "VehExplosionParticles";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class VehicleFireball
	{
		simulation = "particles";
		type = "VehicleExplosionFireBall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleFireball2
	{
		simulation = "particles";
		type = "VehicleExplosionFireBall2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleExplosionSmoke_01
	{
		simulation = "particles";
		type = "VehicleExplosionSmoke_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class VehicleExplosionSmoke_02
	{
		simulation = "particles";
		type = "VehicleExplosionSmoke_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class Explosion2
	{
		simulation = "particles";
		type = "FireBallBright";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "VehExpSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0;
		lifeTime = 0;
	};
	class explosion_glow_01
	{
		simulation = "particles";
		type = "explosion_glow_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
};
class ExplosionEffects
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ATMineExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,1.5,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ATMineExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "ATCloudSmallLight";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		qualityLevel = 2;
	};
	class SmallSmoke1M
	{
		simulation = "particles";
		type = "ATCloudSmallLightM";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		qualityLevel = 1;
	};
	class SmallSmoke1L
	{
		simulation = "particles";
		type = "ATCloudSmallLightM";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
		qualityLevel = 0;
	};
};
class MineExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "MineExplosionParticles";
		position = "explosionPos";
		intensity = 3;
		interval = 1;
		lifeTime = 0.25;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudSmallLight";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class FireSparksSmall1
	{
		simulation = "particles";
		type = "FireSparksSmall";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class MineCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "MineCircleDust";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
	class MissileCircleDustM
	{
		simulation = "particles";
		type = "MineCircleDust";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 1;
	};
	class MineStones1
	{
		simulation = "particles";
		type = "MineStones1";
		position = "explosionPos";
		intensity = 1;
		interval = 1;
		lifeTime = 0.16;
		qualityLevel = 2;
	};
};
class ATMineCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "MineCircleDust";
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 2;
	};
	class MissileCircleDustM
	{
		simulation = "particles";
		type = "MineCircleDust";
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		qualityLevel = 1;
	};
	class MineStones2
	{
		simulation = "particles";
		type = "MineStones2";
		intensity = 1;
		interval = 1;
		lifeTime = 0.16;
		qualityLevel = 2;
	};
};
class HEShellExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLightFast";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.15;
	};
	class LightExp2
	{
		simulation = "light";
		type = "ExploLightFast_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class HERound_Explosion_01
	{
		simulation = "particles";
		type = "HERound_Explosion_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class HERound_Explosion_02
	{
		simulation = "particles";
		type = "HERound_Explosion_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Sparks_med
	{
		simulation = "particles";
		type = "sparks_med";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0,0,0};
		intensity = 3;
		interval = 1;
		lifeTime = 0;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "CloudMedDark";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
};
class HEShellCrater
{
	class Smoke_Trail_TankRound_Emitter
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_01";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter2
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_02";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter3
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class Smoke_Trail_TankRound_Emitter4
	{
		simulation = "particles";
		type = "Smoke_Trail_TankRound_Emitter_BaseSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ShellSmokeTrail1
	{
		simulation = "particles";
		type = "ShellSmokeTrail1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class ShellSmokeTrail2
	{
		simulation = "particles";
		type = "ShellSmokeTrail2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class ShellSmokeTrail3
	{
		simulation = "particles";
		type = "ShellSmokeTrail3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class MissileCircleDust
	{
		simulation = "particles";
		type = "CircleDustMed";
		enabled = "distToWater interpolate [0.2,0.21,-1,1]";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0;
	};
	class dirtbig
	{
		simulation = "particles";
		type = "dirtbig";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		smokeGenMinDist = 1;
		smokeGenMaxDist = 1200;
		smokeSizeCoef = 0;
		smokeIntervalCoef = 0;
	};
};
class Fireball_Glow
{
	class Light1
	{
		simulation = "light";
		type = "mk82_light_source";
		intensity = 1;
		interval = 1;
		position[] = {0,0,0};
		lifeTime = 5;
		enabled = "distToWater interpolate [0,0.0001,-1,1]";
	};
};