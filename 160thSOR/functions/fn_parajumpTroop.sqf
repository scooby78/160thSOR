/*
	Name: fn_parajumpTroop.sqf
	Author: Scooby
	Date: 27/09/15 
	Description: HALO jump for Std Troops for "move in cargo" option
*/
if (SOR_TroopParaJump_Active) exitWith {};
_paraguy = _this select 0;
sleep .5;
waitUntil {scriptDone SOR_MOVEINSIDE};
sleep .5;

_openchuteaction = player addAction [("<t color='#FF0000'>" + ("OPEN CHUTE!") + "</t>"),
" 
	SOR_TroopParaJump_Active = true;
	_chute = 'Steerable_Parachute_F' createVehicle [0,0,0]; 
	_chute setPos [getPos player select 0, getPos player select 1, getPos player select 2];
	player assignasdriver _chute; 
	player moveIndriver _chute;
	(vehicle player) allowDamage false;
"
,"",1,true,true,"","((getPosVisual player) select 2 < 200) && !SOR_TroopParaJump_Active"];
waitUntil {((getPosVisual player) select 2 < 5)};
player removeAction _openchuteaction;


