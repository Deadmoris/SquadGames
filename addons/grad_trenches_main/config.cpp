class CfgPatches
{
	class grad_trenches_main
	{
		name="grad_trenches_main";
		units[]={};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
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
class CfgSettings
{
	class CBA
	{
		class Versioning
		{
			class GRAD_Trenches
			{
				class dependencies
				{
					CBA[]=
					{
						"cba_main",
						{3,5,0},
						"(true)"
					};
					ACE[]=
					{
						"ace_main",
						{3,11,0},
						"(true)"
					};
				};
			};
		};
	};
};
