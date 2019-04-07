#include "..\addon.hpp"

if(GVAR(global_soundLast) == 0)then
{
	GVAR(global_soundLast) = GVAR(global_soundIndex);
	GVAR(global_soundIndex) = 0 max round((GVAR(global_soundCount) - 1) min (GVAR(global_soundIndex) / 2));
}
else
{
	GVAR(global_soundIndex) = GVAR(global_soundLast);
	GVAR(global_soundLast) = 0;
};
call FUNC(setSoundVolume);
true