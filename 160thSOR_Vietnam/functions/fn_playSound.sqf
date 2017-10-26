_source = param[0,objNull];
_sound = param[1,""];
_dist = param[2,30];

_source remoteExecCall ["NAM_fnc_stopSound",playableUnits];
sleep 0.5;
[_source,[_sound,_dist]] remoteExec ["say3d",playableUnits];
