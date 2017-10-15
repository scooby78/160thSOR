if !(isServer) exitWith {};
// Set variables
SOR_GRPSPWN_ACTIVE = true;
SOR_GRPSPWN_DEBUG = false;
SOR_GRPSPWN_PAUSE = false;
private ["_Group_Start_Object", "_vicClass", "_aiGRP", "_victimPos", "_wp", "_i", "_victim"];
_Group_Start_Object = _this select 0;
_vicClass = _this select 1;
_t = _this select 2;
_Scan_Range = _this select 3;
_Engagement_Range = _this select 4;
_Group_Class = _this select 5;
_Engagement_Stop = _this select 6;
if ((isNil _Engagement_Stop)) then {_Engagement_Stop = 10};
_i = 0;
// Area clear (50m)
_terrainobjects=nearestTerrainObjects [(getPos _Group_Start_Object),["TREE", "SMALL TREE", "FOREST",  "FOREST BORDER", "FOREST TRIANGLE", "BUSH", "ROCK", "ROCKS"],25];
{hideObjectGlobal _x} foreach _terrainobjects; 
if (is3DEN) exitWith {};
waitUntil {time > 1};
while {SOR_GRPSPWN_ACTIVE && (alive _Group_Start_Object) && _i < _t} do {
	if (SOR_GRPSPWN_DEBUG) then {systemChat format ["L1 - Checking for targets. Scan Range = %1",_Scan_Range];};
	_nearestObjects = nearestObjects [_Group_Start_Object, [_vicClass], _Scan_Range];
	_victim = _nearestObjects call bis_fnc_selectRandom;
	if (SOR_GRPSPWN_DEBUG && (isNil "_victim")) then {systemChat 'L1 - No Target';};	
	if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {systemChat format ["L1 - Victim = %1",_victim];};
	if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {_VictimUnconscious = _victim getVariable "ACE_isUnconscious"; systemChat format ["L2 - Target is down = %1",_VictimUnconscious];};	
	if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {_dist = (_Group_Start_Object distance _victim); systemChat format ["L1 - Distance = %1",_dist];};	
	while {SOR_GRPSPWN_ACTIVE && !(isNil "_victim") && (alive _Group_Start_Object)} do
	{
		if (SOR_GRPSPWN_DEBUG) then {systemChat  "L2 - Checking for targets";};
		_nearestObjects = nearestObjects [_Group_Start_Object, [_vicClass], _Scan_Range];
		_victim = _nearestObjects call bis_fnc_selectRandom;
		_VictimUnconscious = _victim getVariable "ACE_isUnconscious";
		if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {systemChat format ["L2 - Victim = %1",_victim];};
		if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then { systemChat format ["L2 - Target is down = %1",_VictimUnconscious];};			
		if (SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {_dist = (_Group_Start_Object distance _victim); systemChat format ["L2 - Distance = %1",_dist];};
		if ((alive _Group_Start_Object) && SOR_GRPSPWN_ACTIVE && !(isNil "_victim") && !_VictimUnconscious) then
		{
			if ((_Group_Start_Object distance _victim) < _Engagement_Stop) then {_i = _t; if (SOR_GRPSPWN_DEBUG) then {systemChat "L2 - End";};};
			if (((_Group_Start_Object distance _victim) < _Engagement_Range) && (_i < _t)) then
			{	
				_i = _i + 1;
				// 	Spawn Group	
				_aiGRP = [getPos _Group_Start_Object, EAST, (_Group_Class)] call BIS_fnc_spawnGroup;
				_aiGRP deleteGroupWhenEmpty true;		
				if ((alive _Group_Start_Object) && SOR_GRPSPWN_DEBUG && !(isNil "_victim")) then {systemChat  format ["L3 - Moving to %1's last known location",_victim];};
				_victimPos = position _victim;
				_aiGRP setCombatMode "RED";		
				_aiGRP allowFleeing 0;			
				_wp =_aiGRP addWaypoint [_victimPos, 0];
				_wp setWaypointType "SAD";
				sleep (floor(random 20));
			};
		};
		sleep 5;
	};
	sleep 20;
};
if (SOR_GRPSPWN_DEBUG) then {systemChat "L0 - End";};