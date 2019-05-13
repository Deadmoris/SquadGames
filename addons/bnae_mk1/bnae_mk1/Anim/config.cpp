class CfgPatches
{
	class bnae_mk1_anim
	{
		requiredaddons[]=
		{
			"A3_Anims_F",
			"bnae_mk1"
		};
		requiredversion=0.1;
		weapons[]={};
		units[]={};
	};
};
class CfgMovesBasic
{
	class default;
	class DefaultDie;
	class ManActions
	{
		GestureReloadMK1[]=
		{
			"GestureReloadMK1",
			"gesture"
		};
		GestureReloadMK1t[]=
		{
			"GestureReloadMK1t",
			"gesture"
		};
		GestureFiredMK1[]=
		{
			"GestureFiredMK1",
			"gesture"
		};
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			GestureReloadMK1[]=
			{
				"GestureReloadMK1",
				"Gesture"
			};
			GestureReloadMK1t[]=
			{
				"GestureReloadMK1t",
				"gesture"
			};
			GestureFiredMK1[]=
			{
				"GestureFiredMK1",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadMK1[]=
			{
				"GestureReloadMK1Prone",
				"Gesture"
			};
			GestureReloadMK1t[]=
			{
				"GestureReloadMK1tProne",
				"gesture"
			};
			GestureFiredMK1[]=
			{
				"GestureFiredMK1Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadMK1[]=
			{
				"GestureReloadMK1Context",
				"Gesture"
			};
			GestureReloadMK1t[]=
			{
				"GestureReloadMK1tContext",
				"gesture"
			};
			GestureFiredMK1[]=
			{
				"GestureFiredMK1Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadMK1[]=
			{
				"GestureReloadMK1Context",
				"Gesture"
			};
			GestureReloadMK1t[]=
			{
				"GestureReloadMK1tContext",
				"gesture"
			};
			GestureFiredMK1[]=
			{
				"GestureFiredMK1Context",
				"Gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				GestureReloadMK1[]=
				{
					"GestureReloadMK1Context",
					"Gesture"
				};
				GestureReloadMK1t[]=
				{
					"GestureReloadMK1tContext",
					"gesture"
				};
				GestureFiredMK1[]=
				{
					"GestureFiredMK1Context",
					"Gesture"
				};
			};
		};
	};
};
class CfgGesturesMale
{
	class default;
	class States
	{
		class GestureReloadMK1: default
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1reload.rtm";
			looped=0;
			speed=-5;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={0,1,0.02,1,0.039999999,0,0.95999998,0,0.98000002,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={1};
			preload=1;
		};
		class GestureReloadMK1t: GestureReloadMK1
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1treload.rtm";
			rightHandIKCurve[]={0,1,0.62,1,0.64999998,0,0.94999999,0,0.99666703,1,1,1};
			leftHandIKCurve[]={0,1,0.0099999998,1,0.036667001,0,0.586667,0,0.62,1,1,1};
			speed=-4.1999998;
		};
		class GestureReloadMK1Context: GestureReloadMK1
		{
			mask="handsWeapon_context";
		};
		class GestureReloadMK1tContext: GestureReloadMK1t
		{
			mask="handsWeapon_context";
		};
		class GestureReloadMK1Prone: GestureReloadMK1
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1reloadprone.rtm";
			headBobStrength=0.1;
		};
		class GestureReloadMK1tProne: GestureReloadMK1t
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1treloadprone.rtm";
			headBobStrength=0.1;
		};
		class GestureFiredMK1: default
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1Fired.rtm";
			enableOptics=0;
			looped=0;
			speed=-1;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={0,1,0.050000001,1,0.1,0,0.89999998,0,0.95999998,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={1};
			preload=1;
		};
		class GestureFiredMK1Context: GestureFiredMK1
		{
			mask="handsWeapon_context";
		};
		class GestureFiredMK1Prone: GestureFiredMK1
		{
			file="bnae_mk1\bnae_mk1\Anim\MK1firedprone.rtm";
			headBobStrength=0.1;
		};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518638798";
};
