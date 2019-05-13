//[name, x, y, size, icon, color]
_newmarker = createMarker [_this select 0, [_this select 1, _this select 2]];
_newmarker setMarkerSize [_this select 3, _this select 3];
_newmarker setMarkerShape 'icon';
_newmarker setMarkerType (_this select 4);
_newmarker setMarkerColor (_this select 5);
_newmarker