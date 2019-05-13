class CfgPatches
{
	class bn_te
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]={};
	};
};

class CfgFunctions
{
	class bn_test_suite {
		class test_suite {
			file = "\bn_test_suite\functions";
			class admin {};
			class anachronism {};
			class assert {};
			class default_tests {};
			class marker_icon {};
			class post_init {postInit = 1;};
			class report {};
			class run_assert {};
			class run_tests {};
			class take_inventory {};
		};
	};
};