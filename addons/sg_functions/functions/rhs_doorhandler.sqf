/*
a: reyhard

door handling script
creates delay between door closing
*/
/* private["_v","_a","_d","_t","_h"];

_v=_this select 0;
_a=_this select 1;
_d=_this select 2;
_t=format["rhs_h_%1",_a];

_h=_v getVariable [_t,-1];

if(_h>0)then
{
	_v setVariable [_t,time+_d,true];
	_v animateDoor [_a,1];
}else{
	_v setVariable [_t,time+_d,true];
	_v animateDoor [_a,1];

	waitUntil {(_v getVariable [_t,-1])<time};

	_v animateDoor [_a,0];
	_v setVariable [_t,nil,true];
}; */