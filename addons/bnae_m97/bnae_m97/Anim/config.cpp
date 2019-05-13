class CfgPatches
{
	class bnae_M97_anim
	{
		author="Bnae";
		requiredaddons[]=
		{
			"A3_Anims_F",
			"bnae_M97"
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
		GestureReloadM97[]=
		{
			"GestureReloadM97",
			"gesture"
		};
		GestureReloadM97Short[]=
		{
			"GestureReloadM97Short",
			"gesture"
		};
		GestureFiredM97[]=
		{
			"GestureFiredM97",
			"gesture"
		};
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			GestureReloadM97[]=
			{
				"GestureReloadM97",
				"gesture"
			};
			GestureReloadM97Short[]=
			{
				"GestureReloadM97Short",
				"gesture"
			};
			GestureFiredM97[]=
			{
				"GestureFiredM97",
				"gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadM97[]=
			{
				"GestureReloadM97Prone",
				"Gesture"
			};
			GestureReloadM97Short[]=
			{
				"GestureReloadM97ShortProne",
				"gesture"
			};
			GestureFiredM97[]=
			{
				"GestureFiredM97Prone",
				"gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadM97[]=
			{
				"GestureReloadM97Context",
				"Gesture"
			};
			GestureReloadM97Short[]=
			{
				"GestureReloadM97ShortContext",
				"gesture"
			};
			GestureFiredM97[]=
			{
				"GestureFiredM97Context",
				"gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadM97[]=
			{
				"GestureReloadM97Context",
				"Gesture"
			};
			GestureReloadM97Short[]=
			{
				"GestureReloadM97ShortContext",
				"gesture"
			};
			GestureFiredM97[]=
			{
				"GestureFiredM97Context",
				"gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				GestureReloadM97[]=
				{
					"GestureReloadM97Context",
					"Gesture"
				};
				GestureReloadM97Short[]=
				{
					"GestureReloadM97ShortContext",
					"gesture"
				};
				GestureFiredM97[]=
				{
					"GestureFiredM97Context",
					"gesture"
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
		class GestureReloadM97: default
		{
			file="bnae_M97\bnae_M97\Anim\M97reload.rtm";
			looped=0;
			speed=-4.5;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={0,1,0.015,1,0.025,0,0.94,0,0.94499999,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.88,1,0.88499999,0,0.94,0,0.94499999,1,1,1};
			preload=1;
		};
		class GestureReloadM97Context: GestureReloadM97
		{
			mask="handsWeapon_context";
		};
		class GestureReloadM97Prone: GestureReloadM97
		{
			file="bnae_M97\bnae_M97\Anim\M97ReloadProne.rtm";
			headBobStrength=0.1;
		};
		class GestureReloadM97Short: GestureReloadM97
		{
			file="bnae_M97\bnae_M97\Anim\M97ShortReload.rtm";
			speed=-4.0999999;
			rightHandIKCurve[]={0,1,0.01476,1,0.02214,0,0.80442798,0,0.81549799,1,1,1};
			leftHandIKCurve[]={0,1,0.863469,1,0.87084901,0,0.93357903,0,0.94095898,1,1,1};
		};
		class GestureReloadM97ShortContext: GestureReloadM97Short
		{
			mask="handsWeapon_context";
		};
		class GestureReloadM97ShortProne: GestureReloadM97Short
		{
			file="bnae_M97\bnae_M97\Anim\M97ShortReloadProne.rtm";
			headBobStrength=0.1;
		};
		class GestureFiredM97: GestureReloadM97
		{
			file="bnae_M97\bnae_M97\Anim\M97fired.rtm";
			enableOptics=0;
			speed=-0.75;
			rightHandIKCurve[]={0,1,0.0099999998,1,0.25,0,0.75,0,0.89999998,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0,1,0.31,1,0.345,0,0.68000001,0,0.72000003,1,1,1};
		};
		class GestureFiredM97Context: GestureFiredM97
		{
			mask="handsWeapon_context";
		};
		class GestureFiredM97Prone: GestureFiredM97
		{
			file="bnae_M97\bnae_M97\Anim\M97FiredProne.rtm";
			headBobStrength=0.1;
		};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518637910";
};
