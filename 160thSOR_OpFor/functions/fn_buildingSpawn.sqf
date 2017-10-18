if !(isServer) exitWith {};

private ["_Group_Start_Object", "_vicClass", "_aiGRP", "_victimPos", "_wp", "_i", "_t", "_victim", "_Scan_Range", "_Group_Class", "_Engagement_Stop", "_SOR_FPS"];
// Set variables
if (isNil "SOR_DEBUG") then {SOR_DEBUG = false;};
if (isNil "SOR_ScriptThrottleOK") then {SOR_ScriptThrottleOK = false;};
if (isNil "SOR_GRPSPWN_ACTIVE") then {SOR_GRPSPWN_ACTIVE = true;};
_Group_Start_Object = _this select 0;
_vicClass = _this select 1;
_t = _this select 2;
_Scan_Range = _this select 3;
_Group_Class = _this select 4;
_Engagement_Stop = _this select 5;
if (isNil "_Engagement_Stop") then {_Engagement_Stop = 10};
_i = 0;

diag_log format ["SOR Group Spawner Script - %1 - Started.....OK", _Group_Start_Object];

// Area clear (25m)
_terrainobjects = nearestTerrainObjects [(getPos _Group_Start_Object),["TREE", "SMALL TREE", "FOREST", "FOREST BORDER", "FOREST TRIANGLE", "BUSH", "ROCK", "ROCKS"],25];
{hideObjectGlobal _x} foreach _terrainobjects; 

// Make zone marker only for planning purposes but don't spawn units in 3Den editor
if (is3DEN) exitWith 
{
	_marker = str _Group_Start_Object;
	_markerpos = position _Group_Start_Object;
	createMarker [_marker, _markerpos];
	_marker setMarkerType "Empty";
	_marker setMarkerBrush "Solid";
	_marker setMarkerShape "ELLIPSE";
	_marker setMarkerSize [_Scan_Range, _Scan_Range];
	_marker setMarkerColor "ColorRed";
	_marker setMarkerAlpha 0.2;
};

// Give the server breathing space
waitUntil {SOR_ScriptThrottleOK};

// Brains
while {SOR_GRPSPWN_ACTIVE && SOR_ScriptThrottleKill && (alive _Group_Start_Object) && _i < _t} do 
{
	// Script throttle
	while {!SOR_ScriptThrottleOK} do 
	{
		sleep 5;		
	};
	// Check if spawn area has been breached
	_nearestObjects = _Group_Start_Object nearEntities [_vicClass, _Engagement_Stop];	
//	_nearestObjects = nearestObjects [_Group_Start_Object, [_vicClass], _Engagement_Stop];	
	_victim = _nearestObjects call bis_fnc_selectRandom;	
	if !(isNil "_victim") then 
	{
		if ((_Group_Start_Object distance _victim) < _Engagement_Stop) then 
		{
			_i = _t; 
			if (SOR_DEBUG) then 
			{
				systemChat format ["%1 - L1 - Area Breached", _Group_Start_Object];
			};			
		};
	};
	sleep 1;
	// Initial scan for targets in range
	_nearestObjects = _Group_Start_Object nearEntities [_vicClass, _Scan_Range];
//	_nearestObjects = nearestObjects [_Group_Start_Object, [_vicClass], _Scan_Range];	
	_victim = _nearestObjects call bis_fnc_selectRandom;	
	if (SOR_DEBUG) then 
	{
		hint format ["%1 FPS", SOR_FPS];
		systemChat format ["%2 - L1 - Checking for targets. Scan Range is %1m",_Scan_Range, _Group_Start_Object];
		if (isNil "_victim") then 
		{
			systemChat format ["%1 - L1 - No target", _Group_Start_Object];
		};	
		if (!(isNil "_victim")) then 
		{
			_VictimUnconscious = _victim getVariable "ACE_isUnconscious"; 
			_dist = (_Group_Start_Object distance _victim); 
			systemChat format ["%4 - L1 - Victim = %1 is %2m away and is down (%3)",_victim, _dist, _VictimUnconscious, _Group_Start_Object];
		};
	};
	// Decide if patrol group should be spawned
	if !(isNil "_victim" && SOR_ScriptThrottleKill) then
	{
		// Think about target's state
		_VictimUnconscious = _victim getVariable "ACE_isUnconscious";
		if ((alive _Group_Start_Object) && !_VictimUnconscious) then
		{
			// Spawn patrol group to last know location
			if (((_Group_Start_Object distance _victim) < _Scan_Range) && (_i < _t)) then
			{	
				_i = _i + 1;
				_aiGRP = [getPos _Group_Start_Object, EAST, (_Group_Class)] call BIS_fnc_spawnGroup;
				_aiGRP deleteGroupWhenEmpty true;
				_victimPos = position _victim;
				_aiGRP setCombatMode "RED";		
				_aiGRP allowFleeing 0;			
				_wp =_aiGRP addWaypoint [_victimPos, 0];
				_wp setWaypointType "SAD";
			};
		};
	};	
	if (isNil "_victim") then
	{
		sleep 20;
	}
	else
	{
		sleep (floor(random 20));
	};
};
	
diag_log format ["SOR Group Spawner Script - %1 - Ended.....", _Group_Start_Object];
if (SOR_DEBUG) then {systemChat format ["%1 - L0 - Script End", _Group_Start_Object];};		