/*
    Engine start delay script
 
    i:  EH "Engine" + _delay var
        _v - vehicle
        _s - engine state [0/1 - on/off]
        _delay - engine startup time
 
    a: reyhard
*/
params["_v","_s","_delay"];
 
// check if engine startup is disabled
if (!(isNil "RHS_ENGINE_STARTUP_OFF")) exitWith {};
 
// perform action only for local vehicles
if( !(local _v) )exitWith{};
 
// disabled startup for vehicles in water which can't swim due to strange bug, causing vehicles joining ESA trials for unconventional space shuttles
if( (surfaceIsWater (getpos _v)) && ((getNumber (configFile >> "cfgVehicles" >> typeof _v >> "canFloat")) isEqualTo 0) )exitWith{};
 
// if it's engine startup then check, if vehicle is not already moving & during startup sequence
if ( (abs (speed _v) < 1) && _s) then
{
    private _id=-1;
    // block movement keys for player, ai handles this correct
    if((driver _v) isEqualTo (call rhs_fnc_findPlayer))then
    {
        _id = (findDisplay 46) displayAddEventHandler ["KeyDown", {
            private _handled = false;
            // block forward/reverse keys
            if ((_this select 1) in ((actionKeys "carBack")+(actionKeys "CarFastForward")+(actionKeys "CarLeft")+(actionKeys "CarRight")+(actionKeys "carForward")+(actionKeys "CarSlowForward"))) then //добавлены все кнопки влияющие на движение техники
            {
                private _p = call rhs_fnc_findPlayer;
                if(_p isEqualTo (driver objectParent _p))then
                {
                    _handled = true;
                };
            };
            _handled;
        }];
    };
   
    [_v,_delay,_id] spawn {
        params["_v","_delay","_id"];
        _pos = getposatl _v;
        _VectorDirAndUp = [vectorDir _v, vectorUp _v];
        _idPFH = [{
            params ["_args"];
            _args params ["_v", "_delay", "_direction"];
           
            _v setposatl (_direction select 1);
            _v setVelocity [0, 0, 0];
            _v setVectorDirAndUp (_direction select 0);
 
        } , 0, [_v, 0,  [_VectorDirAndUp,_pos]]] call CBA_fnc_addPerFrameHandler;
        sleep (_delay-0.1);
        if(_id >= 0)theN{(findDisplay 46) displayRemoveEventHandler ["KeyDown", _id]};
        [_idPFH] call CBA_fnc_removePerFrameHandler;
    };
};