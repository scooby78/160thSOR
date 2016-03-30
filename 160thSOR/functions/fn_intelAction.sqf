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

nul = ['Explosion_type','Number_of_intel_pieces'] spawn SOR_fnc_intelAction;
E.g. nul = ['1',2] spawn SOR_fnc_intelAction;
*/

_INTELBOMBTYPE = _this select 0;
_mode = _this select 1;
if (_INTELBOMBTYPE == "0") then {SOR_INTELBOMBTYPE = "nobomb"; SOR_INTELBOMBTIMER = 0;};
if (_INTELBOMBTYPE == "1") then {SOR_INTELBOMBTYPE = "R_60mm_HE"; SOR_INTELBOMBTIMER = 15;};
if (_INTELBOMBTYPE == "2") then {SOR_INTELBOMBTYPE = "FIR_GBU31"; SOR_INTELBOMBTIMER = 40;};

switch (_mode) do {
    case 1:
	{ 
		if (isnil "Intel1") exitWith {hint "No intel object detected... \n  1).Check you have placed an object on map \n 2). Check the object has the naming syntax 'intel1'"};
		Intel1 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel1,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,1] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP1""))"];
	};
    case 2:
	{ 
		if (isnil "Intel1" || isnil "Intel2") exitWith {hint "No enought intel objects detected... \n  1).Check you have placed an 2 objects on map \n 2). Check the objects have naming syntax 'intel1' & 'intel2'"};
		Intel1 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel1,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,1] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP1""))"];
		Intel2 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel2,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,2] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP2""))"];
	};
    case 3:
	{ 
		if (isnil "Intel1" || isnil "Intel2" || isnil "Intel3") exitWith {hint "Not enough intel objects detected... \n  1).Check you have placed an 2 objects on map \n 2). Check the objects have naming syntax 'intel1' & 'intel2' & 'intel3'"};
		Intel1 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel1,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,1] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP1""))"];
		Intel2 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel2,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,2] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP2""))"];
		Intel3 addAction [("<t color='#16e616'>" + ("Retrieve Intel") + "</t>"),"[Intel3,SOR_INTELBOMBTIMER,SOR_INTELBOMBTYPE,3] spawn SOR_fnc_SelfDestruct","",1,true,true,"","((_target distance _this) < 5 && (isNil ""SOR_INTELPICKEDUP3""))"];
	};
};




