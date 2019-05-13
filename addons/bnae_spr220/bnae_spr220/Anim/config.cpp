class CfgPatches
{
	class bnae_spr220_anim
	{
		author="Bnae";
		requiredaddons[]=
		{
			"A3_Anims_F",
			"bnae_spr220"
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
		GestureReloadSPR220[]=
		{
			"GestureReloadSPR220",
			"gesture"
		};
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;
		class NoActions: ManActions
		{
			GestureReloadSPR220[]=
			{
				"GestureReloadSPR220",
				"Gesture"
			};
		};
		class RifleProneActions: RifleBaseStandActions
		{
			GestureReloadSPR220[]=
			{
				"GestureReloadSPR220Prone",
				"Gesture"
			};
		};
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSPR220[]=
			{
				"GestureReloadSPR220Context",
				"Gesture"
			};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			GestureReloadSPR220[]=
			{
				"GestureReloadSPR220Context",
				"Gesture"
			};
			class RifleAdjustFProneActions: RifleAdjustProneBaseActions
			{
				GestureReloadSPR220[]=
				{
					"GestureReloadSPR220Context",
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
		class GestureReloadSPR220: default
		{
			file="bnae_spr220\bnae_spr220\Anim\SPR220reload.rtm";
			looped=0;
			speed=-2.7;
			mask="handsWeapon";
			headBobStrength=0.2;
			headBobMode=2;
			canPullTrigger=0;
			rightHandIKCurve[]={0,0,0.079999998,0,0.1,1,1,1};
			leftHandIKBeg=1;
			leftHandIKEnd=1;
			leftHandIKCurve[]={0.0099999998,1,0.02,0,0.98000002,0,0.99000001,1};
			preload=1;
		};
		class GestureReloadSPR220Context: GestureReloadSPR220
		{
			mask="handsWeapon_context";
		};
		class GestureReloadSPR220Prone: GestureReloadSPR220
		{
			file="bnae_spr220\bnae_spr220\Anim\SPR220ReloadProne.rtm";
			headBobStrength=0.1;
			rightHandIKCurve[]={1};
		};
	};
};
class cfgMods
{
	author="Bnae";
	timepacked="1518638007";
};
