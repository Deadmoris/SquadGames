#include "..\addon.hpp"
params ["_text", "_timeToHide"];
GVAR(timeToHideHint) = diag_tickTime + _timeToHide;
hintSilent _text;
if(isNil QGVAR(handler_hintHider) || {scriptDone GVAR(handler_hintHider)})then
{
	GVAR(handler_hintHider) = [] spawn
	{
		waitUntil
		{
			uiSleep 0.3;
			diag_tickTime > GVAR(timeToHideHint)
		};
		hintSilent "";
		GVAR(handler_hintHider) = nil;
	};
};