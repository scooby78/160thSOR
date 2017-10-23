/*
    Author: destruktoid
    Description: Applies changes made using the selector
*/

disableSerialization;

_idd = 63002;
_weaponCombo = (findDisplay _idd) displayCtrl 630021;
_opticCombo = (findDisplay _idd) displayCtrl 630022;
_nvgCheck = (findDisplay _idd) displayCtrl 630023;
_slcrCheck = (findDisplay _idd) displayCtrl 630024;
_lsrpCheck = (findDisplay _idd) displayCtrl 630025;

_selWeapon = _weaponCombo lbdata (lbCurSel _weaponCombo);
_selOptic = _opticCombo lbdata (lbCurSel _opticCombo);

_mag = primaryWeaponMagazine player;

if (lbCurSel _weaponCombo != -1) then {
    if (((_selWeapon) find (primaryweapon player)) == -1) then {
        player removeweapon (primaryweapon player);
        player addweapon _selWeapon;
        
        {
            player addPrimaryWeaponItem _x;
            player addItem _x;
        } foreach _mag;
    };
};

sleep 0.1;

if (((_selOptic) find ((primaryweaponitems player) select 2)) in [-1,0]) then {
    player removeprimaryweaponitem ((primaryweaponitems player) select 2);
    player addprimaryweaponitem _selOptic;
};

if (cbChecked _nvgCheck) then {
    player linkItem "NVGoggles";
} else {
    player unLinkItem "NVGoggles";
};

if (cbChecked _slcrCheck) then {
    _slcr = [(primaryweapon player), "muzzle"] call CBA_fnc_compatibleItems;
    if (count _slcr > 0) then {
        player addprimaryweaponitem (_slcr select 0);
    };
} else {
    player removeprimaryweaponitem ((primaryweaponitems player) select 0);
};

if (cbChecked _lsrpCheck) then {
    if (((primaryweaponitems player) select 1) == "") then {
        player addprimaryweaponitem "rhsusf_acc_anpeq15_bk_light";
    };
} else {
    player removeprimaryweaponitem ((primaryweaponitems player) select 1);
};

closeDialog _idd;