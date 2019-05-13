#include "addon.hpp"
if(ACE_player != vehicle ACE_player) exitWith { false }; //Нельзя в технике, чтобы не заглючила анимация

private _w = currentWeapon ACE_player;
private _wf = getText (configFile >> "cfgWeapons" >> _w >> "rhs_fold");
if(isNil "_wf" || {_wf == ""} || {_wf == _w}) exitWith { false };

private _wff = getText (configFile >> "cfgWeapons" >> _wf >> "rhs_fold");
if(isNil "_wff" || {_wff != _w}) exitWith { false }; //После складывания и раскладывания должен получатся исходный класс

private _wtype = getText (configFile >> "cfgWeapons" >> _w >> "type");
private _wftype = getText (configFile >> "cfgWeapons" >> _wf >> "type");

if(_wtype != _wftype) exitWith { false }; //Запретим раскладывание пистолетов в автоматы и наоборот // TODO: поправить бы

private _i = ACE_player weaponAccessories _w; 
if(not( (_i select 2) isEqualTo "")) exitWith { false }; // Нельзя складывать приклад с прицелом

true

