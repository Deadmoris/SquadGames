_unit = _this select 0;

createDialog "ExplodeDistance_dialog";
sliderSetRange [19349, 200, 2500];

_sliderMinRange = (sliderRange 19349) select 0;
_sliderMaxRange = (sliderRange 19349) select 1;

ctrlSetText [1001, str _sliderMinRange];
ctrlSetText [1002, str _sliderMaxRange];

_sliderPos = _sliderMinRange;
_explodeDist = _unit getVariable ["explodeDist",0];
if (_explodeDist > _sliderMinRange) then {_sliderPos = _explodeDist};

sliderSetPosition [19349, _sliderPos];

while {dialog} do {
_sliderPos = floor (sliderPosition 19349);
ctrlSetText [1000, str _sliderPos];
sleep 0.1;
};