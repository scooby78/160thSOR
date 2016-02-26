if (MARKERS_OFF) exitWith {};
if (!isServer) exitWith {};
_unit = _this select 0;
_marker = _this select 1;
_delay = _this select 2;
if(isNil "_delay") then {_delay = 5};
while { alive _unit } do { _marker setMarkerPos getPos _unit; sleep _delay; };