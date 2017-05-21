/*
	Name: Suicide Bomber script
	Author: Scooby
	Date: 08/04/16
	Description: fn_bomber.sqf

This is optimised for both SP and MP gameplay.
Will control a unit to wait for a pre-defined unit to move within range, it will then hunt and attempt to kill the unit.  
If the unit escapes the bomber, then the bomber will return to it's original starting position and await another unit to move within range.
If whilst returning to "home" the bomber finds another victim, it will re-engage and re-attempt to kill it's new target.

The script will self-terminate once the bomber is dead.

syntax:
Suggested classnames to set for target search criteria:
"Civilian"; (Civilian)
"SoldierWB"; (Blufor)
"SoldierGB"; (Independent)

Place in the bomber's init field:
nul= [this,'Class_to_hunt'] spawn SOR_fnc_bomber;

E.g. nul= [this,'SoldierWB'] spawn SOR_fnc_bomber; (To hunt Blufor units.)

Note: Do not use the same class of unit as the bomber as the class to be hunted of the bomber will kill itself.

Note: The script can do disabled via ZEUS or console by using the global execution... SOR_BOMBER_ACTIVE = false; (This will kill the bomber.)
*/
// Only run on server
if !(isServer) exitWith {};

// Set variables
SOR_BOMBER_ACTIVE = true;
SOR_BOMBER_DEBUG = false;
SOR_BOMBER_PAUSE = false;

_bomber = _this select 0;
_vicClass = _this select 1;
_bomber setCaptive true;
_bomber setCombatMode "GREEN";
_bomber allowFleeing 0;
_bomber disableAI 'TARGET';
_bomber disableAI 'AUTOTARGET';
_bomber disableAI 'FSM';
_bomber disableAI 'AUTOCOMBAT';
_bomber disableAI 'SUPPRESSION';
_home = getPosATL _bomber;
//_home = getPos _bomber;
_expl = "DemoCharge_Remote_Ammo_scripted" createVehicle position _bomber;
_expl attachTo [_bomber, [0,0,0],"Pelvis"];
_chaseSpeed = 5 + (floor(random 20));
_deadManSwitchChance = (floor(random 10));
diag_log format ["Suicide Bomber script STARTED Bomber =(%1)",_bomber]; 

// Brains
while {SOR_BOMBER_ACTIVE && (alive _bomber)} do 
{
// Checking a target
	if (SOR_BOMBER_DEBUG) then {diag_log  "Checking a target";};
	_victim = nearestObject [_bomber, _vicClass];
//	_nearestObjects = nearestObjects [_bomber, [_vicClass], 50];
//	_victim = _nearestObjects call bis_fnc_selectRandom;		
	if (SOR_BOMBER_DEBUG) then {diag_log format ["Victim = %1",_victim];};
// 	Going Home
	while {SOR_BOMBER_ACTIVE && (isNull _victim) && (alive _bomber) && ((_bomber distance _home) >= 3)} do 
	{
		if (SOR_BOMBER_DEBUG) then {diag_log  "Going Home";};
		_bomber limitSpeed 5;
		if ((_bomber distance _home) > 1) then {_bomber doMove _home; sleep 10;} else {sleep 10;};
		waitUntil {!(alive _bomber) || ((_bomber distance _home) <= 2)};		
	};
// 	Moving to last known location
	if (SOR_BOMBER_ACTIVE && (alive _victim) && (alive _bomber) && ((_bomber distance _victim) > 30) && !(isNull _victim)) then 
	{
		if (SOR_BOMBER_DEBUG) then {diag_log  format ["Moving to %1's last known location",_victim];};
		_victimPos = position _victim;
		_bomber limitSpeed 2 + (floor(random 15));
		_bomber doMove _victimPos;
		waitUntil {!(alive _bomber) || ((_bomber distance _victimPos) > 2)};		
		if ((alive _victim) && (_bomber distance _victim) > 30) then {Sleep 15;} else {sleep 2;};
	};
//	Chasing Victim
	_bomber limitSpeed 5 + (floor(random 20));
	while {SOR_BOMBER_ACTIVE && (alive _victim) && (alive _bomber) && ((_bomber distance _victim) <= 30)} do 
	{
		if (SOR_BOMBER_DEBUG) then {diag_log  format ["Chasing %1",_victim];};
		_bomber lookAt _victim;
		_victimPos = position _victim;
		_bomber doMove _victimPos;
//	Suicide mode
		if (SOR_BOMBER_ACTIVE && (alive _bomber) && (alive _victim) && (_bomber distance _victim) <= 5) then 
		{
			if (SOR_BOMBER_DEBUG) then {diag_log "Boom !!";};
			_bomber playMove "AmovPercMstpSsurWnonDnon";
			_bomber say3D ["watchBeep_off",2];
			sleep 1;
			if ((alive _victim) && (alive _Bomber)) then 
			{
				_expl setdamage 1;
				deleteVehicle _bomber;
			};
		};
// Missed
		if ((alive _victim) && (_bomber distance _victim) > 15) then {Sleep 1;} else {sleep 0.5;};
	};
sleep 5;
};
if (_deadManSwitchChance > 5) then {_expl setdamage 1; deleteVehicle _bomber;} else {if (SOR_BOMBER_DEBUG) then {diag_log  format ["DeadManSwitchChance %1",_deadManSwitchChance];};
diag_log format ["Suicide Bomber script STOPPED Bomber =(%1)",_bomber]; 	
