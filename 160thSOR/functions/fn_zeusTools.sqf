if (!hasInterface) exitwith {};
player setVariable ["ZEUSTOOLS_ACTIVE",true];

//Count Units Action
SOR_CountUnits = [];
SOR_CountUnits set [0, player addAction ["<t color='#03F243'>Count Units On Map</t", 
{
	_civUnits = civilian countSide allUnits;
	_eastunits = east countSide allUnits;
	_indUnits = independent countSide allUnits;
	_westUnits = west countSide allUnits;	
	_playerUnits = count allPlayers;
	_totalUnits = _civUnits + _eastunits + _indUnits + _westUnits;
	hint format ["Opfor AI Unit count..%1 \n Civilian Unit count.. %2 \n Independant Unit Count.. %3 \n BluFor Unit Count.. %4 \n Total Units on Map.. %5 \n Total players on Map.. %6",_eastunits,_civUnits,_indUnits,_westUnits,_totalUnits,_playerUnits];
}, [], 10, false, false]];

//Zeus group cache clean
SOR_CountUnits = [];
SOR_CountUnits set [0, player addAction ["<t color='#03F243'>Clear Zeus Group Bug</t", 
{
	{deleteGroup _X} foreach allGroups;
	hint "Group cache cleared";
}, [], 10, false, false]];