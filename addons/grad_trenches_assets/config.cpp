class CfgPatches
{
	class grad_trenches_assets
	{
		name="grad_trenches_assets";
		units[]=
		{
			"ACE_envelope_small",
			"ACE_envelope_big"
		};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
			"grad_trenches_main",
			"ace_trenches",
			"ace_APL"
		};
		authors[]=
		{
			"Salbei",
			"chris579"
		};
		version="1.5.2-0";
		versionStr="1.5.2-0";
		versionAr[]={1,5,2,0};
	};
};
class CBA_Extended_EventHandlers;
class CfgVehicles
{
	class BagFence_base_F;
	class GRAD_envelope_short: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_short.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
	};
	class ACE_envelope_small: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_small.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
	};
	class ACE_envelope_big: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_big.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
	};
	class GRAD_envelope_gigant: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_gigant.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
	};
	class GRAD_envelope_vehicle: BagFence_base_F
	{
		model="\x\grad_trenches\addons\assets\data\trench_vehicle.p3d";
		hiddenSelections[]=
		{
			"velka"
		};
	};
};
