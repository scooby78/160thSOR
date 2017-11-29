if !(isServer) exitwith {}; 
SOR_LFA_level1 = true;	
SOR_LFA_level2 = true;
SOR_LFA_level3 = true;
if (isNil "SOR_ScriptThrottleOK") then {SOR_ScriptThrottleOK = false;};
if (isNil "SOR_ScriptThrottleKill") then {SOR_ScriptThrottleKill = false;};
if (isNil "SOR_LFA_ACTIVE") then {SOR_LFA_ACTIVE = true;};

private ["_nearestObjectsBlue1", "_BlueforInArea1", "_nearestObjectsBlue2", "_BlueforInArea2", "_nearestObjectsBlue3", "_BlueforInArea3"];

// Give the server breathing space
waitUntil {SOR_ScriptThrottleOK && SOR_ScriptThrottleKill};

diag_log "SOR Live Fire Area Script - Started.....OK";

while {SOR_LFA_ACTIVE && SOR_ScriptThrottleKill} do 
{
	// Script throttle
	while {!SOR_ScriptThrottleOK && SOR_ScriptThrottleKill} do 
	{
		sleep 5;		
	};
	_nearestObjectsBlue1 =  nearestObjects [(getMarkerPos 'zone'),['SoldierWB'], 600];	
	_BlueforInArea1 = count _nearestObjectsBlue1;
	_nearestObjectsBlue2 =  nearestObjects [(getMarkerPos 'zone'),['SoldierWB'], 200];	
	_BlueforInArea2 = count _nearestObjectsBlue2;
	_nearestObjectsBlue3 =  nearestObjects [(getMarkerPos 'finish'),['SoldierWB'], 50];	
	_BlueforInArea3 = count _nearestObjectsBlue3;
	if (_BlueforInArea1 > 0 && SOR_LFA_level1 && SOR_ScriptThrottleKill) then
	{
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m1";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m2";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m3";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m4";
		sleep .5;
		SOR_LFA_level1 = false;
		sleep .5;
	};
	if (_BlueforInArea2 > 0 && SOR_LFA_level2 && SOR_ScriptThrottleKill) then
	{
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m5";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m6";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m7";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m8";
		sleep .5;
		SOR_LFA_level2 = false;
		sleep .5;
	};	
	if (_BlueforInArea3 > 0 && SOR_LFA_level3 && SOR_ScriptThrottleKill) then
	{
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m9";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m10";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m11";
		"SOR_INV_Garbage_VDV_AI" createVehicle getMarkerPos "m12";
		sleep .5;
		SOR_LFA_level3 = false;
		sleep .5;
	};	
	if (_BlueforInArea1 == 0) then
	{
		_nearestObjects =  nearestObjects [(getMarkerPos 'zone'),['SoldierEB','SOR_INV_Garbage_VDV_AI','SOR_INV_Garbage_ISIS','SOR_INV_Garbage_Reich'], 600];	
		{deleteVehicle _x} forEach _nearestObjects;
		SOR_LFA_level1 = true;	
		SOR_LFA_level2 = true;
		SOR_LFA_level3 = true;
		sleep .5;
	};
	sleep 5;
};

diag_log "SOR Live Fire Area Script - Ended.....";