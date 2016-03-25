/*
	Name: fn_service.sqf
	Author: Scooby
	Credit: Darce & Jack Williams (Rarek) for original script design idea
	Date: 27/09/15 
	Description: Air repair and rearm script
*/
if !(hasInterface) exitwith {};
private ["_damage","_percentage","_veh","_vehType","_fuelLevel"];
_veh = _this select 0;
_repair = _this select 1;
_vehType = getText(configFile>>"CfgVehicles">>typeOf _veh>>"DisplayName");
_fuelLevel = fuel _veh;
_damage = getDammage _veh;
if (_veh isKindOf "man" || _veh isKindOf "ParachuteBase" || !(_veh iskindof "LandVehicle") || !alive _veh) exitWith {};

if (gunner _veh == player) exitwith
	{
		1001 cuttext [format ["Rearming %1... Please stand by...",  _vehType],"PLAIN DOWN",1];	
		sleep 6;
		1001 cutText ["Rearming .","PLAIN DOWN"];
		sleep 6;
		1001 cutText ["Rearming ..","PLAIN DOWN"];
		sleep 6;
		1001 cutText ["Rearming ...","PLAIN DOWN"];
		sleep 6;
		if ((getPosATL player) select 2 > 2) then 
		{
			1001 cutText ["Rearming Failed....","PLAIN DOWN"];
		}
		else 
		{
			_veh setVehicleAmmo 1;	
			1001 cutText ["Rearming Complete....","PLAIN DOWN"];
		};		
	};

if !(driver _veh == player) exitWith {};

if (driver _veh == player) then {
	_veh setFuel 0;
	if (_veh isKindOf "car") exitWith {
		1001 cuttext [format ["Servicing %1... Please stand by...",  _vehType],"PLAIN DOWN",1];		
		sleep 3;
		if (_repair) then 
		{
			1001 cutText ["Checking damage...","PLAIN DOWN"];
			sleep 1;
			while {_damage > 0 && _repair} do
			{
				sleep 2;
				_percentage = 100 - (_damage * 100);
				1001 cuttext [format ["Repairing (%1%)...", floor _percentage],"PLAIN DOWN",1];		
				if ((_damage - 0.01) <= 0) then
				{
					_veh setDamage 0;
					_damage = 0;
				} else {
					_veh setDamage (_damage - 0.01);
					_damage = _damage - 0.01;
				};
			};
			1001 cutText ["Repaired (100%).","PLAIN DOWN"];
		};
		sleep 5;
		1001 cutText ["Checking fuel level...","PLAIN DOWN"];
		while {_fuelLevel < 1} do
		{
			sleep 1;
			_percentage = (_fuelLevel * 100);
			1001 cuttext [format ["Refuelling (%1%)...", floor _percentage],"PLAIN DOWN",1];	
			if ((_fuelLevel + 0.01) >= 1) then
			{
				_veh setFuel 1;
				_fuelLevel = 1;
			} else {
				_fuelLevel = _fuelLevel + 0.01;
			};
		};
		1001 cutText ["Refuelled (100%).","PLAIN DOWN"];
		sleep 3;
		_veh setVehicleAmmo 1;	
		1001 cuttext [format ["%1 service is complete.",  _vehType],"PLAIN DOWN",1];
	};
	1001 cuttext [format ["Servicing %1... Please stand by...",  _vehType],"PLAIN DOWN",1];	
	sleep 6;
	1001 cutText ["Rearming .","PLAIN DOWN"];
	sleep 6;
	1001 cutText ["Rearming ..","PLAIN DOWN"];
	sleep 6;
	1001 cutText ["Rearming ...","PLAIN DOWN"];
	sleep 6;
	_veh setVehicleAmmo 1;	
	1001 cutText ["Rearming Complete....","PLAIN DOWN"];
	sleep 5;
	if (_repair) then {
		1001 cutText ["Checking damage...","PLAIN DOWN"];	
		sleep 2;
		while {_damage > 0 && _repair} do
		{
		sleep 2;
			_percentage = 100 - (_damage * 100);
			1001 cuttext [format ["Repairing (%1%)...", floor _percentage],"PLAIN DOWN",1];			
			if ((_damage - 0.01) <= 0) then
			{
				_veh setDamage 0;
				_damage = 0;
			} else {
				_veh setDamage (_damage - 0.01);
				_damage = _damage - 0.01;
			};
		};
		1001 cutText ["Repaired (100%).","PLAIN DOWN"];	
	};
	sleep 5;
	1001 cutText ["Checking fuel level...","PLAIN DOWN"];
	while {_fuelLevel < 1} do
	{	
		sleep 2;
		_percentage = (_fuelLevel * 100);
		1001 cuttext [format ["Refuelling (%1%)...", floor _percentage],"PLAIN DOWN",1];		
		if ((_fuelLevel + 0.01) >= 1) then
		{
			_veh setFuel 1;
			_fuelLevel = 1;
		} else {
			_fuelLevel = _fuelLevel + 0.01;
		};
	};
	1001 cutText ["Refuelled (100%).","PLAIN DOWN"];
	sleep 3;
	1001 cuttext [format ["%1 service is complete.",  _vehType],"PLAIN DOWN",1];
	_veh setFuel 1;
};