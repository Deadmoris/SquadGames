/* private ["_d","_p","_r","_tx","_i"];

_d=
[
	["D: Next CM Mode","nextCM"],
	["D: Next CM Mode","nextCM"],
	["D: Optics Mode","opticsMode"],
	["D: Lock Target","LockTarget"],
	["D: Binocular","Binocular"],
	["D: Zeroing Up","ZeroingUp"],
	["D: Zeroing Down","ZeroingDown"],
	["D: Lock Target","LockTarget"],
	["D: Throw","Throw"],
	["D: Handbrake","CarHandBrake"],
	["D: Swim Down","SwimDown"]
];
_h=
[
	"rhs_key_wpn_int",
	"rhs_key_acc_int",
	"rhs_key_opt_int",
	"rhs_key_lase_int",
	"rhs_key_opn_cmp",
	"rhs_key_rng_up",
	"rhs_key_rng_dwn",
	"rhs_key_lase_tgt",
	"rhs_key_dmp_lead",
	"rhs_key_nxt_rnd",
	"rhs_key_mode_chng"
];

_p=
[
	(profileNamespace getVariable ["rhs_key_wpn_int","nextCM"]),
	(profileNamespace getVariable ["rhs_key_acc_int","nextCM"]),
	(profileNamespace getVariable ["rhs_key_opt_int","opticsMode"]),
	(profileNamespace getVariable ["rhs_key_lase_int","LockTarget"]),

	(profileNamespace getVariable ["rhs_key_opn_cmp","Binocular"]),
	(profileNamespace getVariable ["rhs_key_rng_up","ZeroingUp"]),
	(profileNamespace getVariable ["rhs_key_rng_dwn","ZeroingDown"]),
	(profileNamespace getVariable ["rhs_key_lase_tgt","LockTarget"]),
	(profileNamespace getVariable ["rhs_key_dmp_lead","Throw"]),
	(profileNamespace getVariable ["rhs_key_nxt_rnd","CarHandBrake"]),
	(profileNamespace getVariable ["rhs_key_mode_chng","SwimDown"])
];

_r=1500;
_tx="";

{_tx=format["%1 - %2",_x select 0,actionKeysNames (_x select 1)]; lbAdd [_r, _tx];_r=_r+1 }foreach _d;


_r=0;

for "_i" from 1500 to 1510 do
{

	if( (_p select _r) == ((_d select _r) select 1 ) )then{lbSetCurSel [_i,0]};
	for "_k" from 1 to 20 do
	{
		_tx=format["user%1",_k];
		_tx=format["User Action %1 - %2",_k,actionKeysNames _tx];
		lbAdd [_i,_tx];

		if((_p select _r) == (format["user%1",_k]) )then{lbSetCurSel [_i,_k+1]};
	};
	_r=_r+1;
};
rhs_options_comboChng=[];
while{dialog}do
{
	if(count rhs_options_comboChng >0)then
	{
		_idx=( (ctrlIDC (rhs_options_comboChng select 0) )-1500);
		if((rhs_options_comboChng select 1) == 0)then
		{
			profileNamespace setVariable [(_h select _idx) ,(_d select _idx) select 1];
			_tx=format["%1_GLB",(_h select _idx)];
			if(!isNil format["%1",_tx])then{ call compile format["%1 = '%2'",_tx,((_d select _idx) select 1 )]; };

		}else{
			profileNamespace setVariable [ (_h select _idx) ,format["user%1",rhs_options_comboChng select 1] ];
			_tx=format["%1_GLB",(_h select _idx)];
			if(!isNil format["%1",_tx])then{call compile format["%1 = 'user%2' ",_tx,rhs_options_comboChng select 1];};
		};
		rhs_options_comboChng =[];
	};
	sleep 0.1;
};
rhs_options_comboChng=nil;
saveProfileNamespace; */