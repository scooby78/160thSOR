/*
	Name: fn_gunSpawn.sqf
	Author: Scooby
	Credit: destruktoid for original script design concept idea
	Date: 11/07/17 
	Description: Intelligent truck turrent spawn script for Nazi_AA_Truck1 & Nazi_AA_Truck2 4th Reich units
	SP, Dedi and Zeus optimised
*/
// Check if units is local, if not exit
if (!local _this) exitwith {};
_obj = _this;
// Check what truck option is required and make appropriate adjustments
if (_obj isKindOf "Nazi_AA_Truck1") then 
{
	SOPFOR_TURRET_TYPE = "Nazi_SAM";
	SOPFOR_TURRET_OFFSET = [0.045,-2.15,1.5];
}
else
{
	SOPFOR_TURRET_TYPE = "Nazi_SAA";
	SOPFOR_TURRET_OFFSET = [0.045,-2.15,2];
};

// Action attachments
if (local _obj) then 
{
	_objPos = [(getpos _obj select 0),(getpos _obj select 1),((getpos _obj select 2) + 10)];
	_aaa = createVehicle [SOPFOR_TURRET_TYPE, _objPos, [], 0, 'NONE'];
	_aaa setDir (getdir _obj);
	_aaa disableCollisionWith _obj;
	_aaa attachto [_obj,SOPFOR_TURRET_OFFSET];
	createVehicleCrew _aaa;
	_aaa setVehicleRadar 1;
	_aaa setVehicleReportRemoteTargets true;
	_aaa setVehicleReceiveRemoteTargets true;
};
