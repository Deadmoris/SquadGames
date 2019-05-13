/*
	take item from ground
	a: reyhard
*/

params["_object","_type"];

private _p = missionNamespace getVariable ["bis_fnc_moduleRemoteControl_unit", player];

// if slot is empty, add item as a handgun first. then procede with attempt to add it to inventory. if that fails, throw error & exit
if(handgunWeapon _p isEqualTo "")then{
	_p addWeapon _type;
	deleteVehicle _object;
}else{
	private _itemsCount = count items _p;
	_p addItem _type;
	if(_itemsCount isEqualTo (count items _p))exitWith{
		hint "Not enough inventory space!";
	};
	deleteVehicle _object;
};
