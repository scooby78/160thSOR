/*
Self Destructing Intel script by Scooby

This is optimised for both SP and MP gameplay.
Will create a dialog for players to interact with up to 3 intel objects and deliver intel as a hint based on a empty marker placed on the map in editor mode

syntax:
Explosion_type = Number value from 0-2
0 = no bomb and no timer
1 = R_60mm_HE with 15 sec fuse
2 = FIR_GBU31 with 40 sec fuse

Number_of_intel_pieces = Number value from 1-3
This represents the number of intel objects placed.  
Note: Each object requires a name "Intel1" through 3 AND requires a map marker (preferably empty) using the naming style "SOR_intel1" through 3.

nul = ['Explosion_type','Number_of_intel_pieces'] execVM "intelaction.sqf";
E.g. nul = ['1',2] execVM "intelaction.sqf";
*/

private ["_time", "_intelmarker","_intellatraw","_intellongraw","_intellat","_intellong"];
_INTELHOLDER = _this select 0;
_time = _this select 1;
_bomb = _this select 2;
_intelNumber = _this select 3;
//hint format ["holder... %1 \n time... %2 \n bomb..... %3 \n number %4",_INTELHOLDER, _time,_bomb,_intelNumber];
switch (_intelNumber) do {
    case 1:
	{ 
		_intelmarker = getmarkerpos "SOR_intel1";
		_intellatraw = _intelmarker select 0;
		_intellongraw = _intelmarker select 1;
		_intellat = floor _intellatraw;
		_intellong = floor _intellongraw;
		if ((_intelmarker select 0) == 0) exitWith {hint "No intel marker detected... \n  1).Check you have placed a marker on map \n 2). Check the marker is called SOR_intel1"};
		if(isNil "SOR_INTELPICKEDUP1") then 
		{
			SOR_INTELPICKEDUP1 = false;
			publicVariable "SOR_INTELPICKEDUP1";
			sleep 1;
			if (_bomb == "nobomb") then 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2",_intellat, _intellong];
				SOR_INTELPICKEDUP1 = nil;
				publicVariable "SOR_INTELPICKEDUP1";
			} 
			else 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2 \n Tampering Detected, Self Destruct Initiated in %3 Seconds..",_intellat, _intellong, _time];
				while {_time > 0 && (alive _INTELHOLDER)} do
				{
					_time = _time - 1;  
					cutText [format["Detonation in: \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring],"PLAIN DOWN"];
					sleep 1;
				};
				createVehicle[_bomb, position _INTELHOLDER, [], 0, "NONE"];
				sleep .2;
				deleteVehicle _INTELHOLDER;
				SOR_INTELPICKEDUP1 = nil;
				publicVariable "SOR_INTELPICKEDUP1";
			};	
		} 
		else 
		{
			if !(SOR_INTELPICKEDUP1) exitwith {};
		};
	};
    case 2:
	{ 
		_intelmarker = getmarkerpos "SOR_intel2";
		_intellatraw = _intelmarker select 0;
		_intellongraw = _intelmarker select 1;
		_intellat = floor _intellatraw;
		_intellong = floor _intellongraw;
		if ((_intelmarker select 0) == 0) exitWith {hint "No intel marker detected... \n  1).Check you have placed a marker on map \n 2). Check the marker is called SOR_intel2"};
		if(isNil "SOR_INTELPICKEDUP2") then 
		{
			SOR_INTELPICKEDUP2 = false;
			publicVariable "SOR_INTELPICKEDUP2";
			sleep 1;
			if (_bomb == "nobomb") then 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2",_intellat, _intellong];
				SOR_INTELPICKEDUP2 = nil;
				publicVariable "SOR_INTELPICKEDUP2";
			} 
			else 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2 \n Tampering Detected, Self Destruct Initiated in %3 Seconds..",_intellat, _intellong, _time];
				while {_time > 0 && (alive _INTELHOLDER)} do
				{
					_time = _time - 1;  
					cutText [format["Detonation in: \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring],"PLAIN DOWN"];
					sleep 1;
				};
				createVehicle[_bomb, position _INTELHOLDER, [], 0, "NONE"];
				sleep .2;
				deleteVehicle _INTELHOLDER;
				SOR_INTELPICKEDUP2 = nil;
				publicVariable "SOR_INTELPICKEDUP2";
			};	
		} 
		else 
		{
			if !(SOR_INTELPICKEDUP2) exitwith {};
		};
	};
    case 3:
	{ 
		_intelmarker = getmarkerpos "SOR_intel3";
		_intellatraw = _intelmarker select 0;
		_intellongraw = _intelmarker select 1;
		_intellat = floor _intellatraw;
		_intellong = floor _intellongraw;
		if ((_intelmarker select 0) == 0) exitWith {hint "No intel marker detected... \n  1).Check you have placed a marker on map \n 2). Check the marker is called SOR_intel3"};
		if(isNil "SOR_INTELPICKEDUP3") then 
		{
			SOR_INTELPICKEDUP3 = false;
			publicVariable "SOR_INTELPICKEDUP3";
			sleep 1;
			if (_bomb == "nobomb") then 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2",_intellat, _intellong];
				SOR_INTELPICKEDUP3 = nil;
				publicVariable "SOR_INTELPICKEDUP3";
			} 
			else 
			{
				hint format ["Intel Gathered... \n Lat  %1 \n Long %2 \n Tampering Detected, Self Destruct Initiated in %3 Seconds..",_intellat, _intellong, _time];
				while {_time > 0 && (alive _INTELHOLDER)} do
				{
					_time = _time - 1;  
					cutText [format["Detonation in: \n %1", [((_time)/60)+.01,"HH:MM"] call BIS_fnc_timetostring],"PLAIN DOWN"];
					sleep 1;
				};
				createVehicle[_bomb, position _INTELHOLDER, [], 0, "NONE"];
				sleep .2;
				deleteVehicle _INTELHOLDER;
				SOR_INTELPICKEDUP3 = nil;
				publicVariable "SOR_INTELPICKEDUP3";
			};	
		} 
		else 
		{
			if !(SOR_INTELPICKEDUP3) exitwith {};
		};
	};
};