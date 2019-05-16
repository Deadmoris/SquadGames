class CfgPatches
{
	class sg_missile_sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"rhsusf_c_weapons",
		    "rhs_c_weapons",
			"rhs_c_airweapons",
			"rhs_c_heavyweapons"
		};
		author = "Stolen, TECAK";
		authorUrl = "http://www.tsgames.ru";
	};
};


class CfgAmmo
{
	class MissileCore;
	class R_PG32V_F;
	class R_TBG32V_F;
	class rhs_rshg2_rocket;
	class RocketCore;
	class R_80mm_HE;
	class M_Titan_AT;
	
	class MissileBase: MissileCore {
		soundFly[] = {"\sg_missile_sounds\Data\missile_fly.wss", 1, 1, 800};
	};
	
	class RocketBase: RocketCore {
		soundFly[] = {"\sg_missile_sounds\Data\rpg_fly.wss", 1, 1, 800};
	};
	
	class Rocket_04_HE_F: MissileBase {
		soundFly[] = {"\sg_missile_sounds\Data\rpg_fly.wss", 1, 1, 800};
	};
	
	class rhs_rpg26_rocket: R_PG32V_F {
		soundFly[] = {"\sg_missile_sounds\Data\rpg_fly.wss", 1, 1, 500};
	};
	
	class rhs_ammo_M136_rocket: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class rhs_ammo_smaw_HEAA: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class rhs_ammo_smaw_HEDP: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class pzn_rpo_rocket: rhs_rshg2_rocket {
		soundFly[] = {"\sg_missile_sounds\Data\rpg_fly.wss", 1, 1, 500};
	};
	/*
	class tf47_m3maaws_HEAT: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class tf47_m3maaws_HEDP: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class tf47_m3maaws_HE: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class tf47_m3maaws_SMOKE: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class tf47_m3maaws_ILLUM: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class BWA3_R_RGW90_HH: R_TBG32V_F {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
	class BWA3_R_Pzf3_IT: R_PG32V_F {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	*/
	class rhs_ammo_s8 : R_80mm_HE {
		soundFly[] = {"\sg_missile_sounds\Data\rpg_fly.wss", 1, 1, 800};
	};
	
    class rhs_ammo_atgmCore_base : M_Titan_AT {
		soundFly[] = {"\sg_missile_sounds\Data\missile_fly.wss", 1, 1, 800};
	};
	
    class rhs_ammo_atgmBase_base : M_Titan_AT {
		soundFly[] = {"\sg_missile_sounds\Data\missile_fly.wss", 1, 1, 800};
	};
	
    class rhs_ammo_maaws_HEAT: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
    class rhs_ammo_maaws_HEDP: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
	
    class rhs_ammo_maaws_HE: RocketBase {
		soundFly[] = {"\sg_missile_sounds\Data\m136_fly.wss", 1, 1, 500};
	};
};