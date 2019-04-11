class CfgPatches
{
	class sg_ace_fix
	{
		author="peroika";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"ace_medical"};
	};
};
class CfgFunctions
{
	class ace_medical
	{
		class new_medical
		{
			file = "sg_ace_fix\functions";
			class handleDamage_advanced {
				recompile = 1;
			};
			class setUnconscious {
				recompile = 1;
			};
			class determineIfFatal {
				recompile = 1;
			};
		};		
	};
}; 