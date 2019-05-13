class CfgPatches
{
	class grad_trenches_functions
	{
		name="grad_trenches_functions";
		units[]=
		{
			"GRAD_envelope_gigant",
			"GRAD_envelope_vehicle",
			"GRAD_envelope_short"
		};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
			"grad_trenches_main",
			"ace_trenches"
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
#include "Cfg3DEN.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgWorldsTextures.hpp"