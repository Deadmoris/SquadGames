/*******************************************************************************
* Draw symbol.                                                                 *
*                                                                              *
* @param object          _object - Vehicle object                              *
* @param array           _labels - List of Id's for place symbol.              *
* @param integer         _type   - Symbol type                                 *
* @param string optional _symbol - Symbol name                                 *
* @return void                                                                 *
*                                                                              *
********************************************************************************
*                                                                              *
* $Id:: drawSymbol.sqf 1359 2014-09-23 12:08:47Z reyhard                    $: *
* author: ist <ist@redhamer.su>                                                *
*                                                                              *
* LICENSE:  This  program  is  free  software:  you can redistribute it and/or *
* modify it under the terms of the  GNU General Public License as published by *
* the Free Software Foundation, either version 3 of the License,  or  (at your *
* option) any later version.                                                   *
* This program is  distributed in the hope that it will be useful, but WITHOUT *
* ANY  WARRANTY;   without  even  the  implied  warranty of MERCHANTABILITY or *
* FITNESS FOR A PARTICULAR PURPOSE.   See  the  GNU General Public License for *
* more details.                                                                *
* You should have received a copy of the GNU General Public License along with *
* this program. If not, see <http://www.gnu.org/licenses/gpl.txt>.             *
*                                                                              *
*******************************************************************************/
scriptName "drawSymbol";

// debug
private ["_dmsg"];
_dmsg = "In addon \RHSUSF_Decals\Scripts\drawSymbol.sqf";

private ["_object","_labels","_type","_symbol","_variant"];


if (3 <= count _this) then
{
	_object = _this select 0;
	_labels = _this select 1;
	_type   = _this select 2;

	// Check if object symbol decals are enabled, exit if disabled
	if !(_object getVariable ["RHS_Decal_Symbol_Enabled", true]) exitWith {};

	if ("ARRAY" != typeName _labels) exitWith
	{
		diag_log format ["ERROR! Bad parameters (need array): %1 %2",_labels,_dmsg];
	};

	private ["_getIndex","_idx","_dkv","_i"];

	// compile the proper list
	_getIndex = compile (
		preprocessFileLineNumbers format [
			"\%1\Data\Labels\%2\index.sqf",
			RHSUSFDecalsModul,
			_type
		]
	);

	_idx = [] call _getIndex;
	if (4 == count _this) then
	{
		_symbol = _this select 3;
		if ("ARRAY" == typeName _symbol) then
		{
			_variant = _symbol select 1;
			_symbol = _symbol select 0;
			_dkv = _idx param [_symbol,["empty"],[ 1, [] ]];
			_dkv = _dkv select _variant;
		}
		else
		{
			_dkv = _idx param [_symbol, [["empty"]],[ 1, [] ]];
			if (1 < count _dkv) then
			{
				_dkv = selectRandom _dkv;
			}
			else
			{
				_dkv = _dkv select 0;
			};
		};
	}
	else
	{
		_dkv = selectRandom _idx;
		if (1 < count _dkv) then
		{
			_dkv = selectRandom _dkv;
		}
		else
		{
			_dkv = _dkv select 0;
		};
	};

	for "_i" from 0 to ((count _labels) - 1) do
	{
		private ["_c"];
		if (1 < count _dkv) then
		{
			_c = selectRandom _dkv;
		}
		else
		{
			_c = _dkv select 0;
		};

		//diag_log format ["Decals running server label return: %1",_c];

		_object setObjectTexture [
			_labels select _i,
			if(_c isEqualTo "empty")then{"#(argb,8,8,3)color(0,0,0,0,CA)"}else{format [
				"\%1\Data\Labels\%2\%3",
				RHSUSFDecalsModul,
				_type,
				_c
			]}
		];
	};
};