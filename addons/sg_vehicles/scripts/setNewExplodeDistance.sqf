_unit = _this select 0;
_sliderPos = _this select 1;
_unit setVariable ["explodeDist", _sliderPos, true];
//hint ("new range " + str _sliderPos);