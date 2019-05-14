#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//DeRap: warfxpe\config.bin
//Produced from mikero's Dos Tools Dll version 6.24
//'now' is Thu Jan 04 13:11:34 2018 : 'file' last modified on Sat Sep 30 13:43:07 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_
class CfgPatches
{
	class WarFXPE
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Weapons_F_Orange"};
	};
};
class CfgCloudletShapes
{
	// Explosion = "WarFXPE\ParticleEffects\Universal\Explosion.p3d";
	// Explosion_01 = "WarFXPE\ParticleEffects\Universal\Explosion_01.p3d";
	// LargeFire_01 = "WarFXPE\ParticleEffects\Universal\LargeFire_01.p3d";
	// RocketSparks = "WarFXPE\ParticleEffects\Universal\rocketSparks.p3d";
	Smoke = "WarFXPE\ParticleEffects\Universal\Smoke.p3d";
	Smoke_01 = "WarFXPE\ParticleEffects\Universal\Smoke_01.p3d";
	Smoke_02 = "WarFXPE\ParticleEffects\Universal\Smoke_02.p3d";
	Smoke_03 = "WarFXPE\ParticleEffects\Universal\Smoke_03.p3d";
	// Dirt = "WarFXPE\ParticleEffects\Universal\Dirt.p3d";
	// Dirt_big = "WarFXPE\ParticleEffects\Universal\Dirt_big.p3d";
};
class PreloadTextures
{
	class CfgCloudletShapes
	{
		// Explosion = "@*";
		// Explosion_01 = "@*";
		Smoke = "@*";
		Smoke_01 = "@*";
		Smoke_02 = "@*";
		Smoke_03 = "@*";
		// Dirt = "@*";
		// Dirt_Big = "@*";
	};
};
