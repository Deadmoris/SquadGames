#define COMPONENT compat_rhs_afrf3
#define COMPONENT_BEAUTIFIED RHS AFRF Compatibility

#include "\z\ace\addons\main\script_mod.hpp"

#include "\z\ace\addons\main\script_macros.hpp"


private _russianRankIcons = [
    QPATHTOEF(nametags,UI\icons_russia\private_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\corporal_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\sergeant_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\lieutenant_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\captain_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\major_gs.paa),
    QPATHTOEF(nametags,UI\icons_russia\colonel_gs.paa)
];

{
    [_x, _russianRankIcons] call EFUNC(nametags,setFactionRankIcons);
} forEach [
    "rhs_faction_msv",
    "rhs_faction_vdv",
    "rhs_faction_vmf",
    "rhs_faction_vv",
    "rhs_faction_tv",
    "rhs_faction_vpvo",
    "rhs_faction_vvs",
    "rhs_faction_vvs_c",
    "rhs_faction_rva"
];
