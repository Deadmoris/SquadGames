
#include "..\addon.hpp"

params["_delta"];
GVAR(global_soundIndex) = 0 max round((GVAR(global_soundCount) - 1) min (GVAR(global_soundIndex) + _delta));
call FUNC(setSoundVolume);
GVAR(global_soundLast) = 0;
true