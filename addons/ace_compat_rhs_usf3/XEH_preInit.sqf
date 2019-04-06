#define COMPONENT compat_rhs_usf3
#define COMPONENT_BEAUTIFIED RHS USF Compatibility

#include "\z\ace\addons\main\script_mod.hpp"

#include "\z\ace\addons\main\script_macros.hpp"


ADDON = false;

PREP_RECOMPILE_START;
PREP(canCloseDoor);
PREP(onCut);
PREP(onPrepare);

PREP_RECOMPILE_END;

ADDON = true;
