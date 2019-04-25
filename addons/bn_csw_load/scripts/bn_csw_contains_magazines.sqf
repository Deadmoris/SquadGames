// args: [container, [magazine, magazine, ...]]
// returns: whether the container (vehicle, box, etc.) contains any of the given magazines
private _vehicle = _this select 0;
private _mags = _this select 1;
private _found = false;
{
	if (_x in (magazineCargo _vehicle)) exitWith {
		_found = true;
	};
} forEach _mags;
_found