/*
_logic = _this select 0;

if ((!isServer) and hasInterface) exitwith {};

_markers_off = _logic getVariable ["SOR_MissionMarkers",1];
_SOR_ParaJump_Active = _logic getVariable ["SOR_MissionParajump",1];

//Customisable settings
if (_markers_off == 1) then {MARKERS_OFF = false;} else {MARKERS_OFF = true;};
if (_SOR_ParaJump_Active == 1) then {SOR_ParaJump_Active = true;} else {SOR_ParaJump_Active = false;};
*/
//Fixed settings
enableSaving [false,false];
tf_no_auto_long_range_radio = true;
SOR_ParaJump_Active = true;
MARKERS_OFF = false;
setWind [5, 5, false];  





