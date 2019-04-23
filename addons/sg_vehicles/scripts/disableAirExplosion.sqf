_unit = _this select 0;
_unit setVariable ["explodeDist", -1, true];

hint localize "STR_AirExplodeDisabled";
sleep 5;
hint "";

//hint ("new range " + str _sliderPos);