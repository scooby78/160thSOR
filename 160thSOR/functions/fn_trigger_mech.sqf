_obj = _this select 0;
_pos = getPos _obj;
_trg = createTrigger["EmptyDetector",_pos];
_trg setTriggerArea [10,10,0,false];
_trg setTriggerActivation ["ANY","PRESENT",true];
_trg setTriggerStatements ["('LandVehicle' countType thislist > 0)&&(count (thislist unitsBelowHeight 1) > 0)&&(hasInterface)","_handle_mech = [(thisList select 0),true] spawn SOR_fnc_mech_service;",""];
_trg attachto[_obj,[0,0,0]] 
//_mrk = createMarker [format["%1", round (random 99999)],_pos];
//_mrk setMarkerType "selector_selectedMission";
//_mrk setMarkerColor "ColorOrange";
//_mrk setMarkerSize [1,1];

