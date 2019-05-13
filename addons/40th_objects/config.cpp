class CfgPatches
{
	class 40th_objects_cfg
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"rhs_main",
			"A3_Data_F"
		};
	};
};
class CfgVehicles
{
	class FlagCarrier;
	class FlagCarrierCore;
	class rhs_FlagCarrier;
	class NonStrategic;
	class 40th_flag_ussr: FlagCarrier
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_sar_flag_ussr";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '40th_objects\data\flags\flag_ussr_co.paa'";
		};
	};
	class 40th_flag_ussr_vdv: FlagCarrier
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_sar_flag_ussr_vdv";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '40th_objects\data\flags\flag_ussr_vdv_co.paa'";
		};
	};
	class 40th_flag_ussr_veh: rhs_FlagCarrier
	{
		_generalMacro="sar_flag_ussr_veh";
		scope=2;
		scopeCurator=2;
		displayName="$STR_sar_flag_ussr_short";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '40th_objects\data\flags\flag_ussr_co.paa'";
		};
	};
	class 40th_flag_ussr_vdv_veh: rhs_FlagCarrier
	{
		_generalMacro="sar_flag_ussr_vdv_veh";
		scope=2;
		scopeCurator=2;
		displayName="$STR_sar_flag_ussr_vdv_short";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '40th_objects\data\flags\flag_ussr_vdv_co.paa'";
		};
	};
};
class CfgMarkers
{
	class flag_NATO;
	class 40th_flag_ussr_marker: flag_NATO
	{
		name="USSR";
		icon="\40th_objects\data\markers\flag_ussr_co.paa";
		texture="\40th_objects\data\markers\flag_ussr_co.paa";
	};
	class 40th_flag_ussr_vdv_marker: flag_NATO
	{
		name="USSR VDV";
		icon="\40th_objects\data\markers\flag_ussr_vdv_co.paa";
		texture="\40th_objects\data\markers\flag_ussr_vdv_co.paa";
	};
};
class cfgMods
{
	author="Basher";
	timepacked="1545954184";
};
