/*
	Name: fn_parajumpTroop.sqf
	Author: Scooby
	Credit: Snappage for original concept script 
	Date: 27/09/15 
	Description: HALO jump for Std Troops for "move in cargo" option
*/
_paraguy = _this select 0;
if (SOR_TroopParaJump_Active) exitWith {};
_openchuteaction = player addAction [("<t color='#FF0000'>" + ("OPEN CHUTE!") + "</t>"),
" 
	SOR_TroopParaJump_Active = true;
	_chute = 'Steerable_Parachute_F' createVehicle [0,0,0];  
	_chute setPos [getPos player select 0, getPos player select 1, getPos player select 2];
	player assignasdriver _chute; player moveIndriver _chute;
	player removeAction (_this select 2);
"
,"",1,true,true,"","((getPosVisual player) select 2 < 200)"];
