/*
	Description: fn_markUnits.sqf
	Author: Scooby
	Date: 5/03/16
	Syntax: 2 possible options:
	1) Call the function by inserting into the unit's init.. "nul = [this,"enter_marker's_name_here"] spawn SOR_fnc_markUnits;" 
	2) Add custom time delay by adding "nul = [this,"enter_marker's_name_here",time_in_seconds] spawn SOR_fnc_markUnits;" 
	
	Can be disabled by global variable code "MARKERS_OFF = true".  (Can be used mid mission for effect or run at the begining of mission)
	
Possible Marker Names:

"G","H1","T","J",
"AA","A1","A2",
"BA","B1","B2",
"CA","C1","C2",
"DA","D1","D2",
"V",
"HM",
"PJ1","PJ2","PJ3","PJ4","TPJ1","TPJ2","TPJ3","TPJ4",
"AG1","AG2","AG3","AG4",
"P1","P2","P3","P4",
"MEV",
"E1","E2","E3","E4",
"S1","S2",
"R1","R2","R3",
"O1","O2","O3",
"BS1","BS2","BS3","BS4",
"FUEL1","FUEL2","FUEL3",
"AMMO1","AMMO2","AMMO3",
"REPAIR1","REPAIR2","REPAIR3",
"AC","AC2","AC3",
"AMC","AMC2","AMC3",
"HM1","HM2","HM3"
	
*/

if(isNil "MARKERS_OFF") then {MARKERS_OFF = false};
if (MARKERS_OFF) exitWith {};
if (!isServer) exitWith {};
_unit = _this select 0;
_marker = _this select 1;
_delay = _this select 2; 
if(isNil "_delay") then {_delay = 5};
if(isNil "MARKER_DIAG") then {MARKER_DIAG = false};
_unitpos = position _unit;

// Check for duplicate conflicts
{
	if !(getMarkerColor _x == "") exitWith 
	{
		if (MARKER_DIAG) then 
		{
			hint format ["%1 marker already exists exiting", _x];
			diag_log format ["[SOR_fnc_markUnits] (%2) %1 marker already exists exiting", _x,_unit];	
		};
	};
} forEach ["G","H1","T","J","AA","A1","A2","BA","B1","B2","CA","C1","C2","DA","D1","D2","V","HM","PJ1","PJ2","PJ3","PJ4","TPJ1","TPJ2","TPJ3","TPJ4","AG1","AG2","AG3","AG4","P1","P2","P3","P4","MEV","E1","E2","E3","E4","S1","S2","R1","R2","R3","O1","O2","O3","BS1","BS2","BS3","BS4","FUEL1","FUEL2","FUEL3","AMMO1","AMMO2","AMMO3","REPAIR1","REPAIR2","REPAIR3","AC","AC2","AC3","AMC","AMC2","AMC3","HM1","HM2","HM3"];

switch (_marker) do 
{
// Leaders
	case "G";
	case "H1";
	case "T";
	case "J":
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "b_inf";
		_marker setMarkerText _marker;
	};
//  Infantry squads	
	case "AA";
	case "A1";
	case "A2";
	case "BA";
	case "B1";
	case "B2";
	case "CA";
	case "C1";
	case "C2";
	case "DA";
	case "D1";
	case "D2";	
	case "V":
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "group_0";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;	
	};
// Medical units
	case "HM";
	case "PJ1";
	case "PJ2";
	case "PJ3";
	case "PJ4";	
	case "TPJ1";
	case "TPJ2";
	case "TPJ3";
	case "TPJ4":	
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "loc_Hospital";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;	
	};		
// Air crews (HELI)	
	case "AG1";
	case "AG2";
	case "AG3";
	case "AG4";
	case "P1";
	case "P2";
	case "P3";
	case "P4";
	case "MEV":
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "b_air";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;	
	};// Air crews (Jet)
	case "E1";
	case "E2";
	case "E3";
	case "E4":
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "b_plane";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;
	};
// Mech units	
	case "S1";
	case "S2";
	case "R1";
	case "R2";
	case "R3";
	case "O1";	
	case "O2";
	case "O3":	
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "b_mech_inf";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;
	};		
// Maintinance units
	case "BS1";
	case "BS2";
	case "BS3";
	case "BS4":
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "b_maint";
		_marker setMarkerColor "colorBLUFOR";
		_marker setMarkerText _marker;
	};
// Supplies
	case "FUEL1";
	case "FUEL2";
	case "FUEL3";
	case "AMMO1";
	case "AMMO2";
	case "AMMO3";	
	case "REPAIR1";		
	case "REPAIR2";		
	case "REPAIR3";
	case "AC";
	case "AC2";	
	case "AC3";		
	case "AMC";
	case "AMC2";
	case "AMC3";	
	case "HM1";	
	case "HM2";		
	case "HM3":		
	{
		createMarker [_marker, _unitpos];
		_marker setMarkerType "selector_selectable";
		_marker setMarkerColor "ColorOrange";
		if ((_marker == "FUEL1") or (_marker == "FUEL2") or (_marker == "FUEL3")) then 
		{
			_marker setMarkerText "FUEL";	
		};
		if ((_marker == "AMMO1") or (_marker == "AMMO2") or (_marker == "AMMO3")) then 
		{
			_marker setMarkerText "AMMO";	
		};
		if ((_marker == "REPAIR1") or (_marker == "REPAIR2") or (_marker == "REPAIR3")) then 
		{
			_marker setMarkerText "REPAIR";	
		};	
		if ((_marker == "AC") or (_marker == "AC2") or (_marker == "AC3")) then 
		{
			_marker setMarkerText "AMMO CRATE";	
		};
		if ((_marker == "AMC") or (_marker == "AMC2") or (_marker == "AMC3")) then 
		{
			_marker setMarkerText "AMMO/MED CRATE";	
		};
		if ((_marker == "HM1") or (_marker == "HM2") or (_marker == "HM3")) then 
		{
			_marker setMarkerText "HMG/MORTAR";	
		};	
	};	
};

// Tracking loop 
while {alive _unit && !(MARKERS_OFF)} do 
{
	_marker setMarkerPos getPos _unit;
	sleep _delay;
};
deleteMarker _marker;

