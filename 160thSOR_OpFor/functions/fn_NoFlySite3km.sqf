/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 11/07/17
	Description: NoFlySite3km.sqf builds a Zeus placeable no fly zone with 3km range and marker
*/

if (!isServer) exitwith {};

_obj = _this;
_turret1 = 'Nazi_SAA';

// Make zone marker
_marker = str _obj;
_markerpos = position _obj;
createMarker [_marker, _markerpos];
_marker setMarkerType "Empty";
_marker setMarkerBrush "Solid";
_marker setMarkerShape "ELLIPSE";
_marker setMarkerSize [3000, 3000];
_marker setMarkerColor "ColorRed";
_marker setMarkerAlpha 0.3;

// Area clear (100m)
_terrainobjects=nearestTerrainObjects [_markerpos,[],80];
{hideObjectGlobal _x} foreach _terrainobjects; 

// Turret 90deg
for "_i" from 1 to 2 step 1 do 
{
	if (_i == 1) then {aaaX = 0; aaaY = 30;aaadir = 000;};
	if (_i == 2) then {aaaX = 0; aaaY = -30;aaadir = 180;};
	_pos = [((getpos _obj select 0) + aaaX),((getpos _obj select 1) + aaaY),((getpos _obj select 2))];
	_aaa = [_pos,(getdir _obj),_turret1,EAST] call BIS_fnc_spawnVehicle;
	_aaa = _aaa select 0;
	_aaa setDir aaadir;
	_aaa setVehicleRadar 1; 
	_aaa setVehicleReportRemoteTargets true; 
	_aaa setVehicleReceiveRemoteTargets true;
};

// Mission clean up if placed "_obj" is destroyed or deleted
waitUntil {!alive _obj;};
deleteMarker _marker;
/*
_aaaobjects=nearestObjects [_markerpos,[_turret1,_turret2],40];
{
	_x disableAI "ALL";
} foreach _aaaobjects; 
*/


