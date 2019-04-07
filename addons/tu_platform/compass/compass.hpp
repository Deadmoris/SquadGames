class RscDisplayMainMap
{
	class objects
	{
		class Compass: RscObject
		{
			enableZoom = 0;
			onMouseButtonDblClick = "_this call tu_platform_fnc_rescaleMapCompass;";
			onMouseButtonUp = "_this call tu_platform_fnc_checkMapCompasPosition;";
		};
	};
};
class RscCompass: RscObject
{
	scale = "0.47 * 0.875 * (SafeZoneW Min SafeZoneH) * (profileNamespace getVariable ['tu_platform_compas_scale',1])";
};