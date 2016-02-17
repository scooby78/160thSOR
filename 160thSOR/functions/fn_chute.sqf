_veh = _this select 0;
_chute = "Steerable_Parachute_F" createVehicle [0,0,0]; 
_chute setPos [getPos _veh select 0, getPos _veh select 1, getPos _veh select 2]; 
_veh moveIndriver _chute;