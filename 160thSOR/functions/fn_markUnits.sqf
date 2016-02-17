if (!isServer) exitWith {};
_unit = _this select 0;
_marker = _this select 1;
_delay = 1;
while { alive _unit } do { _marker setMarkerPos getPos _unit; sleep _delay; };