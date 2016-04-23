if (!hasInterface) exitwith {};
player setVariable ["ZEUSTOOLS_ACTIVE",true];
SOR_CountUnits = [];
SOR_CountUnits set [0, player addAction ["Count Units On Map", 
{
	_civUnits = civilian countSide allUnits;
	_eastunits = east countSide allUnits;
	_indUnits = independent countSide allUnits;
	_totalUnits = _civUnits + _eastunits + _indUnits;
	hint format ["Opfor Unit count..%1 \n Civilian Unit count.. %2 \n Independant Unit Count.. %3 \n Total Units on Map.. %4",_eastunits,_civUnits,_indUnits,_totalUnits];
}, [], 10, false, false]];