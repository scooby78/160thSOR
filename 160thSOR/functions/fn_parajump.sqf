/*
	Name: fn_parajump.sqf
	Author: Darce (Edited by scooby)
	Credit: Snappage for original concept script 
	Date: 27/09/15 
	Description: HALO jump for PJ units
*/

_paraguy = _this select 0;
if !(vehicle _paraguy == player) then {player action ["Eject",vehicle player]; sleep 1;};
_openchuteaction = player addAction ["<t color=""#FF0000"">" + ("OPEN CHUTE!") + "</t>",
{
	_chute = "Steerable_Parachute_F" createVehicle [0,0,0];  
	_chute setPos [getPos player select 0, getPos player select 1, getPos player select 2];
	player assignasdriver _chute; player moveIndriver _chute;
	player removeAction (_this select 2);
	SOR_ParaJump_Active = true;
}, [], 0, true, true];
sleep 1; 
while{(alive player)&&(vehicle _paraguy == player)} do
{
	sleep 0.2;
	if ((getPosATL player) select 2 < 15) then
	{
		_chute = "Steerable_Parachute_F" createVehicle [0,0,0];  
		_chute setPos [getPos player select 0, getPos player select 1, getPos player select 2];
		player assignasdriver _chute; player moveIndriver _chute;
		player removeAction _openchuteaction;
		SOR_ParaJump_Active = true;
		sleep 0.2;
	};
};