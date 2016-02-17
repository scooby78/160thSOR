/*
	Name: fn_autoparadrop.sqf
	Author: Darce
	Credit: Snappage for original concept script 
	Date: 27/09/15 
	Description: Auto parajump for INF units
*/

_vehicle = _this select 0;
_trooparray = crew _vehicle;
{
	if ((alive _vehicle)&&(vehicle _x != _x)&&(_x != driver _vehicle))then{
		_x action ["Eject",_vehicle];
		sleep 0.6;
		[[_x],"SOR_fnc_chute",_x,false] spawn BIS_fnc_MP;
	};
} foreach _trooparray;