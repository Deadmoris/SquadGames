#include "..\addon.hpp"

GVAR(global_soundVolume) = 1 min (0.001 max (GVAR(soundVolumeArray) select GVAR(global_soundIndex)));
[true] call GVAR(hearing_fnc_updateVolume);
private _ind = toArray ("-------------------------" select [0, GVAR(global_soundCount)]);
_ind set [GVAR(global_soundIndex), 124]; //"|" = 124
[parseText format ["Громкость звука: %1<br /><t color='#00ff00' size='2'>%2</t>", GVAR(global_soundIndex), toString _ind],2] call FUNC(hint);
true