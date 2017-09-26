/*
	Name: fn_ExternalView.sqf
	Author: Scooby
	Credit: Yettie for the script idea
	Date: 16/04/17 
	Description: Allows a player to use / overide forced first person view.  But only when occupying a driver position.  Can be toggled via useraction.
*/

// Check to make sure code runs local only
waitUntil {!isNull player};
_Sor_evf_unit = _this select 0;
if ((_Sor_evf_unit != player)) exitwith {};

// Add any units that are allowed to have acces to this in the array.
_whitelist = ["SOR_MechDriver_D"];

_top = typeof player;
if !( _top in _whitelist ) exitWith {};

SOR_EEV = false;
_enableEV = player addAction ["<t color='#03F243'>Enable Driver External Vehicle View</t>",{
	_code = 
		{
			SOR_EEV = true;			
			if ((vehicle player) == player) then {}	else 
			{
				_vehicle = vehicle player;
				_inVehicle = (_vehicle != player);
				if (_inVehicle && (driver _vehicle == player)) then
				{
					(vehicle player) switchCamera "External";
				};					
			};					
		};
	["SOR_Ext_View", "onEachFrame", _code] call BIS_fnc_addStackedEventHandler;
}, [], 0.5, false, true,"","(!(SOR_EEV))"];

_disableEV = player addAction ["<t color='#FF0000'>Disable Driver External Vehicle View</t>",{
	if (SOR_EEV) then 
	{
		SOR_EEV = false;
		["SOR_Ext_View", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
}, [], 0.5, false, true,"","((SOR_EEV))"];