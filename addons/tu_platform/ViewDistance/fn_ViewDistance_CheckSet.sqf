#include "..\addon.hpp"
private _vd = getObjectViewDistance select 0;
private _veh = vehicle player;
if (_veh != player) then {
	if (_veh isKindOf "Air") then {
		if (_vd != GVAR(viewDistance_air)) then {
			GVAR(viewDistance_air) call FUNC(viewDistance_set);
		};
	} else {
		if (_veh isKindOf "LandVehicle") then {
			if (_vd != GVAR(viewDistance_vehicle)) then {
				GVAR(viewDistance_vehicle) call FUNC(viewDistance_set);
			};
		};
	};
} else {
	if (_vd != GVAR(viewDistance_infantry)) then {
		GVAR(viewDistance_infantry) call FUNC(viewDistance_set);
	};
};