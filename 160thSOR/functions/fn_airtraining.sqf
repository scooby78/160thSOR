/*
	Description: fn_airtraining.sqf
	Author: Scooby
	Date: 7/04/16
	Description: This script is designed to be used in a trigger for helicopter failure / damage practice 
	Syntax: 
	1) Call the function by inserting into a trigger with a condition.... ("Air" countType thislist > 0)
	2) On Activation add the following code...._nil = [(thisList select 0),true] spawn SOR_fnc_airtraining;

	Note:
	You can overrule the random failure selection by chosing one of the three failure types and executing the global variable.... FAILURE = ""; 
	E.g. FAILURE = "Rotor"; Will fail the tail rotor on 100% of attempts. Other options are "Fuel" and "Engine".
*/

if !(hasInterface) exitwith {};

_veh = _this select 0;

if !(driver _veh == player) exitWith {};

if (isNil "FAILURE") then 
{
	FAILURE = ["Rotor", "Engine", "Fuel"] call bis_fnc_selectRandom;
};

switch (FAILURE) do {
    case "Rotor":
	{ 
		_veh setHitPointDamage ['hitVRotor',1];		
	};
    case "Engine":
	{ 
		_veh setHitPointDamage ['hitEngine',1];
	};
    case "Fuel":
	{ 
		_veh setFuel 0;
	};
};
