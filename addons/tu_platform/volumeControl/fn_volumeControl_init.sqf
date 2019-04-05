
#include "..\addon.hpp"

GVAR(soundVolumeArray) = [0.001, 0.0035, 0.005, 0.0076, 0.01, 0.016, 0.02, 0.038, 0.05, 0.065, 0.08, 0.18, 0.3, 0.7, 1];
GVAR(global_soundCount) = count GVAR(soundVolumeArray);
GVAR(global_soundIndex) = GVAR(global_soundCount) - 1;
GVAR(global_soundVolume) = GVAR(soundVolumeArray) select GVAR(global_soundIndex);
GVAR(global_soundLast) = 0; //для приглушения 50% громкости

//создадим аналог ace_common_fnc_setHearingCapability
GVAR(common_fnc_setHearingCapability) =
{
	params ["_id", "_setting", ["_add", true]];

	private _exists = false;
	private _lowestVolume = 1;

	ace_common_setHearingCapabilityMap = ace_common_setHearingCapabilityMap select {
		_x params ["_xID", "_xSetting"];
		if (_id == _xID) then {
			_exists = true;
			if (_add) then {
				_x set [1, _setting];
				_lowestVolume = _lowestVolume min _setting;
				true
			} else {
				false
			};
		} else {
			_lowestVolume = _lowestVolume min _xSetting;
			true
		};
	};

	if (!_exists && _add) then {
		_lowestVolume = _lowestVolume min _setting;
		ace_common_setHearingCapabilityMap pushBack [_id, _setting];
	};

	if(isNil QGVAR(global_soundVolume) )then{GVAR(global_soundVolume) = 1}; //kaban

	0 fadeSound (_lowestVolume * GVAR(global_soundVolume) * ace_hearing_volumeAttenuation); //kaban
	//0 fadeRadio (_lowestVolume * GVAR(global_soundVolume) * ace_hearing_volumeAttenuation); //kaban - радио не глушим, потому что на нем завязан звук лока ракет и речевого информатора на самолетах, и звук двигателя может заглушать эти звуки
	0 fadeMusic (_lowestVolume * GVAR(global_soundVolume) * ace_hearing_volumeAttenuation); //kaban


	ACE_player setVariable ["tf_globalVolume", _lowestVolume];
	if (!isNil "acre_api_fnc_setGlobalVolume") then { [_lowestVolume^0.33] call acre_api_fnc_setGlobalVolume; };
};

//создадим аналог ace_hearing_fnc_updateVolume
GVAR(hearing_fnc_updateVolume) =
{
	if (!alive ACE_player) exitWith {
		["ace_hearing", 1, true] call GVAR(common_fnc_setHearingCapability);
	};

	private _volume = ace_hearing_volume;

	// Earplugs and headgear can attenuate hearing
	//_volume = _volume min ace_hearing_volumeAttenuation; //перенесем эффект беруш в функцию GVAR(common_fnc_setHearingCapability), чтобы не влияло на рацию

	// Reduce volume if player is unconscious
	if (ACE_player getVariable ["ACE_isUnconscious", false]) then {
		_volume = _volume min ace_hearing_UnconsciousnessVolume;
	};

	["ace_hearing", _volume, true] call GVAR(common_fnc_setHearingCapability);
};

ace_hearing_disableVolumeUpdate = true; //запретим обновление громкости средствами ACE
[GVAR(hearing_fnc_updateVolume), 1, [false]] call CBA_fnc_addPerFrameHandler; //добавим свой обработчик обновления громкости
