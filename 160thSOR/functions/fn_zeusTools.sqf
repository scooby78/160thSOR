if (!hasInterface) exitwith {};
player setVariable ["ZEUSTOOLS_ACTIVE",true];

//Count Units Action
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#0900FF'>Count Units On Map</t", 
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
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#03F243'>Clear Zeus Group Bug</t", 
{
	{deleteGroup _X} foreach allGroups;
	hint "Group cache cleared";
}, [], 10, false, false]];

//Clear Fog
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#FFA700'>Clear Fog</t", 
{
	hint "Fog clearing over 30 sec";
	[30,0] remoteExec ["setFog",2]; 
	sleep 30;
	hint "Fog cleared";
}, [], 10, false, false]];

//Set Fog 50%
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#FFA700'>Set Fog 50%</t", 
{
	hint "Fog rolling in over 30 sec";
	[30,.5] remoteExec ["setFog",2]; 
	sleep 30;
	hint "Fog 50%";
}, [], 10, false, false]];

//Set Fog 70%
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#FFA700'>Set Fog 70%</t", 
{
	hint "Fog rolling in over 30 sec";
	[30,.7] remoteExec ["setFog",2]; 
	sleep 30;
	hint "Fog 70%";
}, [], 10, false, false]];

//Set Fog 100%
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#FFA700'>Set Fog 100%</t", 
{
	hint "Fog rolling in over 30 sec";
	[30,1] remoteExec ["setFog",2]; 
	sleep 30;
	hint "Fog 100%";
}, [], 10, false, false]];