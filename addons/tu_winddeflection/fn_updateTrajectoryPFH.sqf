#include "addon.hpp"


[{
    // BEGIN_COUNTER(pfeh);

    params ["_args"];
    _args params ["_lastTime",""];
    private _deltaT = CBA_missionTime - _lastTime;
    _args set [0, CBA_missionTime];
    private _isWind = (vectorMagnitude wind > 0);

    {
        _x params ["_bullet", "_airFriction", "_relativeDensity"];

        private _bulletVelocity = velocity _bullet;
        private _bulletSpeed = vectorMagnitude _bulletVelocity;

        if (!alive _bullet) then {
            GVAR(trackedBullets) deleteAt (GVAR(trackedBullets) find _x);
        } else {
            if (_isWind) then {
                private _deflection = _deltaT * _airFriction * _relativeDensity;
                private _accelRef = wind vectorMultiply _deflection;                
                _bulletVelocity = _bulletVelocity vectorAdd _accelRef;

                // private _accelRef = _bulletVelocity vectorMultiply _dragRef;
                // _bulletVelocity = _bulletVelocity vectorDiff _accelRef;

                // private _trueVelocity = _bulletVelocity vectorDiff wind;
                // private _trueSpeed = vectorMagnitude _trueVelocity;

                // private _drag = _deltaT * _airFriction * _trueSpeed * _relativeDensity;
                // private _accel = _trueVelocity vectorMultiply (_drag);
                // _bulletVelocity = _bulletVelocity vectorAdd _accel;
            };
            _bullet setVelocity _bulletVelocity;
        };
        nil
    } count +GVAR(trackedBullets);
    // END_COUNTER(pfeh);
}, GVAR(simulationInterval), [CBA_missionTime]] call CBA_fnc_addPerFrameHandler;
