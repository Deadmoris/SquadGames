class CfgPatches
{
	class CUP_Weapons_WeaponsCore
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"A3_Weapons_F_Acc",
			"A3_Weapons_F_Beta_Acc",
			"A3_Weapons_F_EPA_Acc",
			"A3_Weapons_F_EPB_Acc",
			"A3_Weapons_F_Bootcamp",
			"A3_Data_F",
			"A3_UI_F",
			"A3_Anims_F",
			"CUP_Weapons_WeaponsData"
		};
	};
};
class CfgMods
{
	class Mod_Base;
	class CUP_Weapons: Mod_Base
	{
		picture="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_ca.paa";
		logo="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		logoOver="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		logoSmall="\CUP\Weapons\CUP_Weapons_WeaponsCore\ui\logo_cup_small_ca.paa";
		tooltipOwned="Community Uprade Project";
		action="http://cup-arma3.org";
		dlcColor[]={0.31,0.77999997,0.77999997,1};
		overview="The Community Upgrade Project aims at importing all released assets from previous Arma games into Arma 3, upgraded to fit closely with the quality and standards of the ARma 3 assets. They're not a straight port, but individual items taken and upgraded to a new level. At the same time, CUP provides these assets as a resource for modders.";
		hideName=1;
		hidePicture=0;
		name="Community Upgrade Project";
		dir="Cup";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		CUP_GestureReloadM249="CUP_GestureReloadM249";
		CUP_GestureReloadM249STANAG="CUP_GestureReloadM249STANAG";
		CUP_GestureReloadM60="CUP_GestureReloadM60";
		CUP_GestureReloadM14="CUP_GestureReloadM14";
		CUP_GestureReloadG36A1="CUP_GestureReloadG36A1";
		CUP_GestureReloadAG36="CUP_GestureReloadAG36";
		CUP_GestureReloadSA80="CUP_GestureReloadSA80";
		CUP_GestureReloadFAL="CUP_GestureReloadFAL";
		CUP_GestureBoltActionFire="CUP_BoltCycle";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle",
				"Gesture"
			};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Prone",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Prone",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Prone",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_prone",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Prone",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Prone",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_prone",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_prone",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_prone",
				"Gesture"
			};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Context",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Context",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Context",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_Context",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Context",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Context",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_Context",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_Context",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			CUP_GestureReloadM249[]=
			{
				"CUP_GestureReloadM249_Context",
				"Gesture"
			};
			CUP_GestureReloadM249STANAG[]=
			{
				"CUP_GestureReloadM249STANAG_Context",
				"Gesture"
			};
			CUP_GestureReloadM60[]=
			{
				"CUP_GestureReloadM60_Context",
				"Gesture"
			};
			CUP_GestureReloadM14[]=
			{
				"CUP_GestureReloadM14_Context",
				"Gesture"
			};
			CUP_GestureReloadG36A1[]=
			{
				"CUP_GestureReloadG36A1_Context",
				"Gesture"
			};
			CUP_GestureReloadAG36[]=
			{
				"CUP_GestureReloadAG36_Context",
				"Gesture"
			};
			CUP_GestureReloadSA80[]=
			{
				"CUP_GestureReloadSA80_Context",
				"Gesture"
			};
			CUP_GestureReloadFAL[]=
			{
				"CUP_GestureReloadFAL_Context",
				"Gesture"
			};
			CUP_GestureBoltActionFire[]=
			{
				"CUP_BoltCycle_Context",
				"Gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				CUP_GestureReloadM249[]=
				{
					"CUP_GestureReloadM249_Context",
					"Gesture"
				};
				CUP_GestureReloadM249STANAG[]=
				{
					"CUP_GestureReloadM249STANAG_Context",
					"Gesture"
				};
				CUP_GestureReloadM60[]=
				{
					"CUP_GestureReloadM60",
					"Gesture"
				};
				CUP_GestureReloadM14[]=
				{
					"CUP_GestureReloadM14_Prone",
					"Gesture"
				};
				CUP_GestureReloadG36A1[]=
				{
					"CUP_GestureReloadG36A1_Context",
					"Gesture"
				};
				CUP_GestureReloadAG36[]=
				{
					"CUP_GestureReloadAG36_Context",
					"Gesture"
				};
				CUP_GestureReloadSA80[]=
				{
					"CUP_GestureReloadSA80",
					"Gesture"
				};
				CUP_GestureReloadFAL[]=
				{
					"CUP_GestureReloadFAL_Context",
					"Gesture"
				};
				CUP_GestureBoltActionFire[]=
				{
					"CUP_BoltCycle_Context",
					"Gesture"
				};
			};
		};
	};
};
class CfgGesturesMale
{
	class Default;
	class States
	{
		class CUP_GestureReloadM14: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M14\gesture\reload_m14_standing.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.58999997,1,0.61538398,0,0.75379997,0,0.84614998,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.58415997,0,0.61538398,1};
		};
		class CUP_GestureReloadM14_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M14\gesture\reload_m14_prone.rtm";
			speed=0.23;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.86666,0,0.89999998,1};
		};
		class CUP_GestureReloadM14_Context: CUP_GestureReloadM14
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM249: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_stand.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Crouch: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_crouch.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.44999999;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.0098599996,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_reload_prone.rtm";
			speed=0.098684214;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={0,1,0.016000001,0,0.28799999,0,0.30759999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.098679997,1,0.1118421,0,0.92105001,0,0.94736803,1};
		};
		class CUP_GestureReloadM249_Context: CUP_GestureReloadM249
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM249STANAG: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_STANAGreload_stand.rtm";
			speed=0.23999999;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.047619,0,0.84920633,0,0.87301499,1};
		};
		class CUP_GestureReloadM249STANAG_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M249\gesture\m249_STANAGreload_prone.rtm";
			speed=0.23999999;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.047619,0,0.84920633,0,0.87301499,1};
		};
		class CUP_GestureReloadM249STANAF_Context: CUP_GestureReloadM249STANAG
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM60: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M60\gesture\reload_m60e4_standing.rtm";
			looped=0;
			speed=0.090909094;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0.30000001,1,0.34,0,0.94499999,0,0.98000002,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.045499999,0,0.30000001,0,0.33399999,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadM60_Context: CUP_GestureReloadM60
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadM60_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\M60\gesture\reload_m60e4_prone.rtm";
			looped=0;
			speed=0.090909094;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKBeg=1;
			leftHandIKCurve[]={0.30000001,1,0.34,0,0.94499999,0,0.98000002,1};
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKCurve[]={0,1,0.045499999,0,0.30000001,0,0.33399999,1};
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G36A1\reload_G36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\G36A1\reload_G36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadG36A1_Context: CUP_GestureReloadG36A1
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadAG36: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AG36\reload_aG36_standing.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.25;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadAG36_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\AG36\reload_aG36_prone.rtm";
			speed=0.23076923;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.15000001;
			headBobMode=2;
			leftHandIKCurve[]={0,1,0.025,0,0.85833329,0,0.88,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			rightHandIKBeg=1;
			rightHandIKEnd=1;
		};
		class CUP_GestureReloadAG36_Context: CUP_GestureReloadAG36
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadSA80: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\L85\L85_reload_standing.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.30000001;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.89999998,0,0.94,1};
		};
		class CUP_GestureReloadSA80_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\L85\L85_reload_prone.rtm";
			speed=0.2;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.04166666,0,0.89999998,0,0.94,1};
		};
		class CUP_GestureReloadSA80_Context: CUP_GestureReloadSA80
		{
			mask="handsWeapon_context";
		};
		class GestureFireLRR;
		class CUP_BoltCycle: GestureFireLRR
		{
			enableOptics=1;
		};
		class CUP_BoltCycle_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\RechamberBolt1\RechamberBolt1_prone.rtm";
			speed=0.60000002;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.1;
			headBobMode=2;
			rightHandIKCurve[]={0.079999998,1,0.18000001,0,0.69999999,0,0.81999999,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,1,1};
			enableOptics=1;
		};
		class CUP_BoltCycle_Context: CUP_BoltCycle
		{
			mask="handsWeapon_context";
		};
		class CUP_GestureReloadFAL: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_fal_long.rtm";
			speed=0.18404908;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.83099997,0,0.88700002,1};
		};
		class CUP_GestureReloadFAL_Prone: Default
		{
			file="CUP\Weapons\CUP_Weapons_WeaponsCore\anim\FAL\reload_fal_long_prone.rtm";
			speed=0.18404908;
			looped=0;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			rightHandIKCurve[]={1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.03125,0,0.88999999,0,0.9375,1};
		};
		class CUP_GestureReloadFAL_Context: CUP_GestureReloadFAL
		{
			mask="handsWeapon_context";
		};
	};
};
#include "CfgRecoils.hpp"