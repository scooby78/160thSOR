//add Zeus objects to all Curators
{
	_x addEventHandler ["CuratorGroupPlaced",{[_this,"SOR_fnc_grpPlaced",false] spawn BIS_fnc_MP}];
	_x addEventHandler ["CuratorObjectPlaced",{[_this,"SOR_fnc_objPlaced",false] spawn BIS_fnc_MP}];
}forEach allCurators;