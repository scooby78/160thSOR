/*
    Author: destruktoid
    Description: Opens weapon select menu and updates fields
*/
disableserialization;

private["_cfg","_weapons","_optics"];

_idd = 63002;
createDialog "DEST_MENU_WEAP";

_weaponCombo = (findDisplay _idd) displayCtrl 630021;
_opticCombo = (findDisplay _idd) displayCtrl 630022;
_nvgCheck = (findDisplay _idd) displayCtrl 630023;
_slcrCheck = (findDisplay _idd) displayCtrl 630024;
_lsrpCheck = (findDisplay _idd) displayCtrl 630025;

_cfg = false;
_weapons = [];
_optics = [];

{
    _units = getArray (configFile >> "SOR_SelectorUnits" >> _x >> "units");
    if ((typeOf player) in _units) then {
        _cfg = _x;
    };
} foreach ((configFile >> "SOR_SelectorUnits") call bis_fnc_getCfgSubClasses);

if ((typeName _cfg) isEqualTo "STRING") then {

    {
        {
            _weapons pushBack (_x splitstring ",");
        } foreach getArray (configFile >> "SOR_SelectorWeapons" >> _x >> "weapons");
    } foreach getArray (configFile >> "SOR_SelectorUnits" >> _cfg >> "weapons");
    
    {
        {
            _optics pushBack (_x splitstring ",");
        } foreach getArray (configFile >> "SOR_SelectorOptics" >> _x >> "optics");
    } foreach getArray (configFile >> "SOR_SelectorUnits" >> _cfg >> "optics");

    {
        _index = _weaponCombo lbAdd (_x select 0);
        _weaponCombo lbSetData [_index, (_x select 1)];
        if (((_x select 1) find (primaryWeapon player)) != -1) then {
            _weaponCombo lbSetCurSel _index;
        };
    } foreach _weapons;

    {
        _index = _opticCombo lbAdd (_x select 0);
        _opticCombo lbSetData [_index, (_x select 1)];
        if (((_x select 1) find ((primaryweaponitems player) select 2)) != -1) then {
            _opticCombo lbSetCurSel _index;
        };
    } foreach _optics;

};

if (count (entities "DEST_loadoutSup") > 0) then {
    _slcrCheck ctrlEnable false;
};

if (((primaryweaponitems player) select 0) != "") then {
    _slcrCheck cbSetChecked true;
};

if (count (entities "DEST_loadoutNVG") > 0) then {
    _nvgCheck ctrlEnable false;
};

if ((hmd player) != "") then {
    _nvgCheck cbSetChecked true;
};

if (((primaryweaponitems player) select 1) != "") then {
    _lsrpCheck cbSetChecked true;
};