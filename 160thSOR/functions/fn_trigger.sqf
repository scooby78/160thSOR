_obj = _this select 0;
_pos = getPos _obj;
_trg = createTrigger["EmptyDetector",_pos];
_trg setTriggerArea [6,6,0,false];
_trg setTriggerActivation ["ANY","PRESENT",true];
_trg setTriggerStatements ["('Air' countType thislist > 0)&&(count (thislist unitsBelowHeight 1) > 0)&&(hasInterface);","_handle = [(thisList select 0),true] spawn SOR_fnc_service;",""];

if (isServer) then
	{
		_mrk = createMarker [format["%1", round (random 99999)],_pos];
		_mrk setMarkerType "selector_selectedMission";
		_mrk setMarkerColor "ColorBlue";
		_mrk setMarkerSize [1,1];

	};

	/*
		_light = "PortableHelipadLight_01_blue_F" createVehicle _pos;
		_light attachto [_obj,[6,6,0]];
		_light = "PortableHelipadLight_01_blue_F" createVehicle _pos;
		_light attachto [_obj,[6,-6,0]];
		_light = "PortableHelipadLight_01_blue_F" createVehicle _pos;
		_light attachto [_obj,[-6,6,0]];
		_light = "PortableHelipadLight_01_blue_F" createVehicle _pos;
		_light attachto [_obj,[-6,-6,0]];	
	*/