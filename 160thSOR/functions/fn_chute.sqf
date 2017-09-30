_paraguy = _this select 0;
if !(vehicle _paraguy == player) then {player action ["Eject",vehicle player]; sleep 1;};
sleep 1; 
while{(alive player)&&(vehicle _paraguy == player)} do
{
	sleep 1;
	if ((getPosVisual player) select 2 < 100) then
	{
		_chute = "Steerable_Parachute_F" createVehicle [0,0,0];  
		_chute setPos [getPos player select 0, getPos player select 1, getPos player select 2];
		player assignasdriver _chute;
		player moveIndriver _chute;
	    (vehicle player) allowDamage false;
	};
};