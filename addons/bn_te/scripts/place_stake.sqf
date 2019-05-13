_pos = getPos player;
player setPos ((getPos player) vectorAdd ((vectorDir player) vectorMultiply -1));
_stake = "Land_RedWhitePole_F" createVehicle _pos;
_stake setPosATL [_pos select 0, _pos select 1, 0];
_stake setVectorUp [0,0,1];
_stake enableSimulation false;
_stake addAction ["<t color='#FF9999'>Убрать вешку</t>", {deleteVehicle (_this select 0); player getVariable ["bn_stakes_placed",(player getVariable ["bn_stakes_placed",0])-1];}];
player setVariable ["bn_stakes_placed",(player getVariable ["bn_stakes_placed",0])+1];