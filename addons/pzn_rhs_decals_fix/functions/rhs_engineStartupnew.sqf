/*
	Engine start delay script

	i:	EH "Engine" + _delay var
		_v - vehicle
		_s - engine state [0/1 - on/off]
		_delay - engine startup time

	a: reyhard
*/
params["_v","_s","_delay"];

#define	STRING_START	"STR_RHS_T80_GTD_STARTING"
#define	STRING_READY	"STR_RHS_T80_GTD_READY"

// check if engine startup is disabled
//if (!(isNil "RHS_ENGINE_STARTUP_OFF")) exitWith {};

// perform action only for local vehicles
if( !(local _v) )exitWith{};

// disabled startup for vehicles in water which can't swim due to strange bug, causing vehicles joining ESA trials for unconventional space shuttles
if( (surfaceIsWater (getpos _v)) && ((getNumber (configFile >> "cfgVehicles" >> typeof _v >> "canFloat")) isEqualTo 0) )exitWith{};

// if it's engine startup then check, if vehicle is not already moving & during startup sequence
if ( (abs (speed _v) < 1) && _s && isNull attachedTo _v) then
{

	private _id=-1;

	// block movement keys for player, ai handles this correct
	if((driver _v) isEqualTo (call rhs_fnc_findPlayer))then{
		_id = (findDisplay 46) displayAddEventHandler ["KeyDown", {

			private _handled = false;
			// block forward/reverse keys
			if((_this select 1) in [((actionKeys "carForward") select 0),((actionKeys "carBack") select 0)]  )then{
				private _p = call rhs_fnc_findPlayer;
				if(_p isEqualTo (driver objectParent _p))then{
					_handled = true;
				};
			};
			_handled;
		}];
	};
	_v vehicleChat localize STRING_START;

	// create dummy object [with simulation=thing or thingX] & then attach vehicle to this thing
	private _h = "rhs_collider_simple" createVehicle (getpos _v);
	_h setPosWorld (getPosWorld _v);
	_h setVectorDirAndUp [vectorDir _v,vectorUp _v];
	if(isMultiplayer)then
	{
		[_v,_h] spawn {
			params["_v","_h"];
			sleep 0.1;
			_v attachTo [_h,[0,0,0]];
		};
	}else{
		_v attachTo [_h,[0,0,0]];
	};
	
	/*["<t size='1.0' shadow = '1' color='#ffed1d'>ВсЁ прекрасно работает</t>",-0.8,1.1,4,1,0,789] spawn BIS_fnc_dynamicText;*/
	private _c = objNull;
	if(_delay>5)then{
		_c = "rhs_vehcollider" createVehicle (getpos _v);
		_c setPos (getPos _v);
		//_c setMass (getMass _v);
		_c setVectorDirAndUp [vectorDir _v,vectorUp _v];
	};

	[_v,_delay,_id,_h,_c] spawn {
		params["_v","_delay","_id","_h","_c"];

		// engine startup delay
		sleep (_delay-0.1);
		if(_delay>5)then{deleteVehicle _c};
		sleep 0.1;

		//systemChat format["%1",_id];
		// remove EH, detach vehicle & delete dummy bject
		if(_id >= 0)theN{(findDisplay 46) displayRemoveEventHandler ["KeyDown", _id]};
		detach _v;
		deleteVehicle _h;

		_v vehicleChat localize STRING_READY;
	};
};