#include "..\addon.hpp"
params ["_vd"];

setViewDistance (_vd + ((_vd * 0.3) min 500));
setObjectViewDistance _vd;
private _ind = toArray (" -------------------------" select [0, GVAR(viewDistance_max) / 500 + 1]);
_ind set [_vd / 500, 124]; //"|" = 124
[parseText format ["Дальность прорисовки: %1<br /><t color='#ffff00' size='2'>%2</t>", _vd, toString _ind], 2] call FUNC(hint);

_veh = vehicle player;
if (_veh != player) then
{
	if (_veh isKindOf "Air") then
	{
		GVAR(viewDistance_air) = _vd;
	}
	else
	{
		if (_veh isKindOf "LandVehicle") then
		{
			GVAR(viewDistance_vehicle) = _vd;
		};
	};
}
else
{
	GVAR(viewDistance_infantry) = _vd;
};
true