/*
	Description: fn_markUnitsCustom.sqf
	Author: Scooby
	Date: 5/03/16
	Syntax: 2 possible options:
	1) Call the function by inserting into the unit's init.. "nul = [this,"enter_marker's_name_here"] spawn SOR_fnc_markUnitsCustom;" 
	2) Add custom time delay by adding "nul = [this,"enter_marker's_name_here",time_in_seconds] spawn SOR_fnc_markUnitsCustom;" 
*/
if(isNil "MARKERS_OFF") then {MARKERS_OFF = false};
if (MARKERS_OFF) exitWith {};
if (!isServer) exitWith {};
_unit = _this select 0;
_marker = _this select 1;
_delay = _this select 2;
if(isNil "_delay") then {_delay = 5};
while {alive _unit && !(MARKERS_OFF)} do 
	{
		_marker setMarkerPos getPos _unit;
		sleep _delay;
	};
_marker setMarkerPos getMarkerPos "marker_park";