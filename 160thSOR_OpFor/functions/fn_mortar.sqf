/*
	Name: AI Mortar Attack
	Author: Scooby
	Date: 18/12/16
	Description: fn_mortar.sqf

This is optimised for both SP and MP gameplay.

Will take over an artilery unit (and create a crew if empty) then add a spotter unit.  When a defined unit side (Blufor, Opfor, etc) moves within range (1000m recommended) the spotter (if he can 'SEE' the target) will
enter 'spotting mode'.  It will pull out binoculars and transfer artillery coordinates to the artillery crew.

Coordinates sent to the gunner have a fixed AND a random error to stop the AI sniping the target.

The spotter will not be Zeus controllable while in spotting mode although can be remote controled.  After the currently observed target (by the spotter) gets within a defined distance (400m recommended), the script will
release control of the unit and allow the AI to return fire and runaway.

If the AI successfully evades the target, it will return to spotting mode automatically.
If the Spotter or the Artillery gunner is killed the script will self-terminate along with the remainder of either Gunner or Spotter.
If the Spotter and the target are not in a clear line of sight, fire missions won't be called in.
If the Target is unconscious, fire missions won't be called in.

syntax:
If placed in the Artillery Gun's init field:
nul= [this, Range_of_Spotter, Spotter_Flee_Distance ,'Class_to_hunt'] spawn SOPFOR_fnc_mortar;

Suggested classnames to set for target search criteria:
'Civilian' (Civilian)
'SoldierWB' (Blufor)
'SoldierEB' (Opfor);
'SoldierGB' (Independent)

Ammo Types Used:
Opfor Mortars -
MK6 Mortar 		(O_Mortar_01_F) 	uses '8Rnd_82mm_Mo_shells'
2B14-1 'Podnos'	(rhs_2b14_82mm_vdv) uses 'rhs_mag_3vo18_10'

Opfor Artillery -
2A18M (D-30A)	(rhs_D30_vdv)		uses 'rhs_mag_3of56_10'

E.g.
nul= [this, 1000, 400 ,'SoldierWB'] spawn SOPFOR_fnc_mortar; 
If placed in a MK6 Mortar or 2B14-1 'Podnos' init field, Blufor units will be hunted by a spotter once they enter a 1000m radius, fire missions will be sent to the arti.  
If Blufor get within 400m the spotter will defend himself and attempt to run away.

Note: If the spotter is the same class as the unit hunted, the spotter will kill itself.
Note: The script can be PAUSED via ZEUS or console by using the global execution... SOR_ARTI_PAUSE = true;
Note: The script can be DISABLED via ZEUS or console by using the global execution... SOR_ARTI_STOP = true;

***This script will auto throttle based on server performance and will self terminate if required to save the server's performance***
*/

//	Only run on the server
if !(isServer) exitWith {};

//	Initial Setup variables
_artiVehicle = _this select 0;
_spotterRange = _this select 1;
_fleeDistance = _this select 2;

// Make zone marker only for planning purposes but don't spawn units in 3Den editor
if (is3DEN) exitWith 
{
	_marker = str _artiVehicle;
	_markerpos = position _artiVehicle;
	createMarker [_marker, _markerpos];
	_marker setMarkerType "Empty";
	_marker setMarkerBrush "Solid";
	_marker setMarkerShape "ELLIPSE";
	_marker setMarkerSize [_spotterRange, _spotterRange];
	_marker setMarkerColor "ColorRed";
	_marker setMarkerAlpha 0.2;
};

//	Setup variables
if ((count (crew _artiVehicle)) == 0) then 
{
	createVehicleCrew _artiVehicle;
};
_arti = gunner _artiVehicle;
_artiType = typeOf _arti;
_spotter = group _arti createUnit [_artiType, position _arti, [], 0, "FORM"];
_spotter addweapon "Binocular";
_vicClass = _this select 3;
if ((isNil '_vicClass')) then {_vicClass = 'SoldierWB'};
if (isNil "SOR_DEBUG") then {SOR_DEBUG = false;};
if (isNil "SOR_ScriptThrottleOK") then {SOR_ScriptThrottleOK = false;};
if (isNil "SOR_ScriptThrottleKill") then {SOR_ScriptThrottleKill = false;};
SOR_ARTI_PAUSE = false;
SOR_ARTI_STOP = false;
_defending = false;
_TargetsInRange = false;

// Give the server breathing space
waitUntil {SOR_ScriptThrottleOK && SOR_ScriptThrottleKill};
diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	STARTED Spotter =(%1) Artillery = (%2)",_spotter,_arti]; 

//	Lobotomise the AI
{
	_x disableAI 'TARGET';
	_x disableAI 'SUPPRESSION';
	_x disableAI 'AUTOTARGET';
	_x disableAI 'PATH';
	_x disableAI 'FSM';
	_x disableAI 'AUTOCOMBAT';
} foreach [_spotter,_arti];

//	Brains
while {!SOR_ARTI_STOP && (alive _spotter) && (alive _arti) && SOR_ScriptThrottleKill} do 
{
	// Script throttle
	while {!SOR_ScriptThrottleOK && SOR_ScriptThrottleKill} do 
	{
		sleep 5;		
	};
	//	Looking for targes
	if (SOR_DEBUG) then {diag_log  "Hunting";};
	_nearestObjects = nearestObjects [_spotter, [_vicClass], _spotterRange];
	_ArtiTgt = _nearestObjects call bis_fnc_selectRandom;	
	//	Mid-Mission pause
	if (SOR_ARTI_PAUSE) then {diag_log  "[16thSOR]		(SOPFOR_fnc_mortar)	 Script Paused";};
	waitUntil {!(SOR_ARTI_PAUSE)};
	while {!SOR_ARTI_STOP && !(isNil "_ArtiTgt") && (alive _spotter) && (alive _arti) && SOR_ScriptThrottleOK} do
	{		
		//	Mid-Mission pause
		if (SOR_ARTI_PAUSE) then {diag_log  "[16thSOR]		(SOPFOR_fnc_mortar)	Script Paused";};
		waitUntil {!(SOR_ARTI_PAUSE)};
		if ((alive _spotter) && (alive _arti)) then
		{
			//	Chosing a target
			_nearestObjects = nearestObjects [_spotter, [_vicClass], _spotterRange];
			_ArtiTgt = _nearestObjects call bis_fnc_selectRandom;	
			//  Can spotter realistically see target
			_viewdist = [_spotter, "VIEW"] checkVisibility [eyepos _spotter, eyepos _ArtiTgt];
			// Is target awake			
			_ArtiTgtUnconscious = _ArtiTgt getVariable "ACE_isUnconscious";
			if (_viewdist > .07 && !_ArtiTgtUnconscious) then 
			{
				if (SOR_DEBUG) then {diag_log  format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%2) Now Targeting %1",_ArtiTgt, _spotter];};
				//	Getting grids for target
				_targetpos = getPos _ArtiTgt;				
				_TargetPosX = _targetpos select 0;
				_TargetPosY = _targetpos select 1;
				_TargetPosZ = _targetpos select 2;			
				if (((_spotter distance _ArtiTgt) <= _spotterRange) && SOR_ScriptThrottleOK) then 
				{
					//	Face general direction of the target and make spotter look (turn his head) at the target
					_spotterDir = _spotter getRelDir _ArtiTgt;
					_spotter setFormDir _spotterDir;
					_spotter lookAt _ArtiTgt;
					// 	Use Binoculars
					_spotter selectWeapon "Binocular";
					//	Applying a random error to the grids so the arti doesn't snipe the target
					_targetX = (floor _TargetPosX) + 50 + (floor(random 200)) - (floor(random 200));
					_targetY = (floor _TargetPosY) + 50 + (floor(random 200)) - (floor(random 200));
					_targetZ = (floor _TargetPosZ);
					if (SOR_DEBUG) then {diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%1) Radioing in Grids",_spotter];};
					//	Random pause so all arti don't continuously fire at the same time
					sleep (5 + (floor(random 20)));
					//	Mid-Mission pause
					if (SOR_ARTI_PAUSE) then {diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%1) Script Paused",_spotter];};
					waitUntil {!(SOR_ARTI_PAUSE)};
					//	Fire command
					if (SOR_DEBUG) then {diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%1) - %2 Fire",_spotter, _arti];};
					_artiDir = _arti getRelDir _ArtiTgt;
					_arti setFormDir _artiDir;				
					if (_artiVehicle isKindOf "Mortar_01_base_F") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], '8Rnd_82mm_Mo_shells', 1];};
					if (_artiVehicle isKindOf "rhs_2b14_82mm_Base") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], 'rhs_mag_3vo18_10', 1];};	
					if (_artiVehicle isKindOf "rhs_D30_vdv") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], 'rhs_mag_3of56_10', 1];};						
				};
				//	Spotter will defend himself is enemy units get too close (should opt to run away though)
				while {!SOR_ARTI_STOP && !(isnil "_ArtiTgt") && (alive _spotter) && (alive _arti) && ((_spotter distance _ArtiTgt) < _fleeDistance)} do 
				{
					if (SOR_DEBUG) then {diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%1) Defending",_spotter];};						
					if !(_defending) then 
					{
						_defending = true;
						_spotter enableAI  'TARGET';
						_spotter enableAI  'AUTOTARGET';
						_spotter enableAI  'PATH';
						_spotter enableAI  'FSM';
						_spotter enableAI  'AUTOCOMBAT';
						_spotter allowFleeing 1;
					}
					else
					{
						sleep 5;
					};			
				};	
				//	Lobotomise the AI again
				if (_defending) then
				{
					if (SOR_DEBUG) then {diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	Spotter (%1) Setting Back Up",_spotter];};	
					_defending = false;
					_spotter disableAI 'TARGET';
					_spotter disableAI 'AUTOTARGET';
					_spotter disableAI 'PATH';
					_spotter disableAI 'FSM';
					_spotter disableAI 'AUTOCOMBAT';
				};
				_nearestObjects = nearestObjects [_spotter, [_vicClass], _spotterRange];
			};
		};	
	};
	sleep 10;
};
{
	_x setDamage 1;
} foreach [_spotter,_arti];
diag_log format ["[16thSOR]		(SOPFOR_fnc_mortar)	 STOPPED Spotter =(%1) Artillery = (%2)",_spotter,_arti]; 