#include "..\addon.hpp"
//функция изменения дальности прорисовки
params ["_delta"];
//_vd = getObjectViewDistance select 0;
//private _vd = viewDistance;

private _vd = getObjectViewDistance select 0;

_vd = GVAR(viewDistance_max) min (500 max (round (_vd / 500) * 500 + _delta));
_vd call FUNC(viewDistance_set);
true