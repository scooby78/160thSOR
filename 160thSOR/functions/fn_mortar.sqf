/*
	Name: AI Mortar Attack
	Author: Scooby
	Date: 18/12/16
	Description: fn_mortar.sqf

This is optimised for both SP and MP gameplay.

Will take over an infantry unit (defined as a spotter) when a defined unit side (Blufor, Opfor, etc) moves within range (currently set to 400m). 
Once the unit is controlled by the script (spotting mode), it will pull out binoculars and will transfer artillery coordinates to a singular artillery  gunner (not the hardware).

Coordinates sent to the gunner have a fixed AND a random error to stop the AI sniping the target.

The spotter will not be Zeus controllable while in spotting mode although after the currently selected target (the unit the spotter is watching) gets within 100m, the script will
release control of the unit and allow the AI to return fire and runaway.

If the AI successfully evades the target, it will return to spotting mode automatically.
If the Spotter or the Artillery gunner is killed the script will self-terminate. 

syntax:
If placed in the Spotter's init field:
nul= [this, Name_of_Mortar_unit,'Class_to_hunt'] spawn SOR_fnc_mortar;

If placed in a trigger init field:
nul= [Name_of_Spotter, Name_of_Mortar_unit,'Class_to_hunt'] spawn SOR_fnc_mortar;

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
nul= [this, mortar1 ,'SoldierWB'] spawn SOR_fnc_mortar; 
If placed in the Spotter's init field, Blufor units will be hunted and fire missions will be sent to **mortar1** (the gunner).

nul= [spotter1, mortar1 ,'SoldierWB'] spawn SOR_fnc_mortar; 
If placed in a waypoint or a trigger 'on activation' field, will make **Spotter1** hunt Blufor units  and fire missions will be sent to **mortar1** (the gunner).

Note: If the spotter is the same class as the uint hunted, the spotter will kill itself.

Note: The script can be PAUSED via ZEUS or console by using the global execution... SOR_ARTI_PAUSE = true;

Note: The script can be DISABLED via ZEUS or console by using the global execution... SOR_ARTI_STOP = true;


*/
//	Only run on the server
if !(isServer) exitWith {};

//	Setup variables
_spotter = _this select 0;
_arti = _this select 1;
_artiVehicle = vehicle _arti;
_vicClass = 'SoldierWB';
if ((isNil _vicClass)) then {_vicClass = 'SoldierWB'};
diag_log format ["AI Mortar Attack Script STARTED Spotter =(%1) Artillery = (%2)",_spotter,_arti]; 
SOR_ARTI_STOP = false;
_spotter addweapon "Binocular";
_defending = false;
_TargetsInRange = false;
SOR_ARTI_DEBUG = false;
SOR_ARTI_PAUSE = false;
_spotterRange = 700;

//	Lobotomise the AI
{
_x disableAI 'TARGET';
_x disableAI 'SUPPRESSION';
_x disableAI 'AUTOTARGET';
_x disableAI 'PATH';
_x disableAI 'FSM';
_x disableAI 'AUTOCOMBAT';
} foreach [_spotter, _arti];

//	Brains
while {!SOR_ARTI_STOP && (alive _spotter) && (alive _arti)} do 
{
//	Looking for targes
	if (SOR_ARTI_DEBUG) then {diag_log  "Hunting";};
	_nearestObjects = nearestObjects [_spotter, [_vicClass], _spotterRange];
	_ArtiTgt = _nearestObjects call bis_fnc_selectRandom;	
//	Mid-Mission pause
	if (SOR_ARTI_PAUSE) then {diag_log  "Script Paused";};
	waitUntil {!(SOR_ARTI_PAUSE)};
	while {!SOR_ARTI_STOP && !(isNil "_ArtiTgt") && (alive _spotter) && (alive _arti)} do
	{		
//	Mid-Mission pause
		if (SOR_ARTI_PAUSE) then {diag_log  "Script Paused";};
		waitUntil {!(SOR_ARTI_PAUSE)};
		if ((alive _spotter) && (alive _arti)) then
		{
//	Chosing a target
			_nearestObjects = nearestObjects [_spotter, [_vicClass], _spotterRange];
			_ArtiTgt = _nearestObjects call bis_fnc_selectRandom;		
			if (SOR_ARTI_DEBUG) then {diag_log  format ["Now Targeting %1",_ArtiTgt];};
//	Getting grids for target
			_targetpos = getPos _ArtiTgt;				
			_TargetPosX = _targetpos select 0;
			_TargetPosY = _targetpos select 1;
			_TargetPosZ = _targetpos select 2;			
			if (((_spotter distance _ArtiTgt) <= _spotterRange)) then 
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
				if (SOR_ARTI_DEBUG) then {diag_log  "Radioing in Grids";};
//	Random pause so all arti don't continuously fire at the same time
				sleep (5 + (floor(random 20)));
//	Mid-Mission pause
				if (SOR_ARTI_PAUSE) then {diag_log  "Script Paused";};
				waitUntil {!(SOR_ARTI_PAUSE)};
//	Fire command
				if (SOR_ARTI_DEBUG) then {diag_log  "Fire";};
				_artiDir = _arti getRelDir _ArtiTgt;
				_arti setFormDir _artiDir;				
				if (_artiVehicle isKindOf "O_Mortar_01_F") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], '8Rnd_82mm_Mo_shells', 1];};
				if (_artiVehicle isKindOf "rhs_2b14_82mm_vdv") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], 'rhs_mag_3vo18_10', 1];};	
				if (_artiVehicle isKindOf "rhs_D30_vdv") then {_arti doArtilleryFire [[_targetX,_targetY,_targetZ], 'rhs_mag_3of56_10', 1];};						
			};
//	Spotter will defend himself is enemy units get too close (should opt to run away though)
			while {!SOR_ARTI_STOP && !(isnil "_ArtiTgt") && (alive _spotter) && (alive _arti) && ((_spotter distance _ArtiTgt) < 400)} do 
			{
				if (SOR_ARTI_DEBUG) then {diag_log "Defending";};						
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
				if (SOR_ARTI_DEBUG) then {diag_log "Setting Back Up";};	
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
	sleep 10;
};
diag_log format ["AI Mortar Attack Script STOPPED Spotter =(%1) Artillery = (%2)",_spotter,_arti]; 