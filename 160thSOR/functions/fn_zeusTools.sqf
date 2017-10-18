if (!hasInterface) exitwith {};
player setVariable ["ZEUSTOOLS_ACTIVE",true];

//Count Units Action
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#99f990'>Turn On Performance Monitor</t", 
{
	SOR_Zeus_Mon = true;
	while {SOR_Zeus_Mon} do
	{
		_civUnits = civilian countSide allUnits;
		_eastunits = east countSide allUnits;
		_indUnits = independent countSide allUnits;
		_westUnits = west countSide allUnits;	
		_playerUnits = count allPlayers;
		_totalUnits = _civUnits + _eastunits + _indUnits + _westUnits;
		if (SOR_FPS > 48) then 
		{
			SOR_ServerState = "<br/><t color='#64ea64' size='1.5'>GREAT</t>";
		};
		if ((SOR_FPS < 49) && (SOR_FPS > 40)) then 
		{
			SOR_ServerState = "<br/><t color='#449b44' size='1.5'>GOOD</t>";
		};
		if ((SOR_FPS < 41) && (SOR_FPS > 30)) then 
		{
			SOR_ServerState = "<br/><t color='#d6d46f' size='1.5'>STRUGGLING</t>";
		};
		if ((SOR_FPS < 31) && (SOR_FPS > 20)) then 
		{
			SOR_ServerState = "<br/><t color='#e2560b' size='1.5'>BAD</t>";
		};
		if (SOR_FPS < 21) then 
		{
			SOR_ServerState = "<br/><t color='#ff0000' size='1.5'>SERVER CRASH IMINENT!!</t>";
		};			
		hint parseText format ["Opfor AI Unit count..%1 <br/> Civilian Unit count.. %2 <br/> Independant Unit Count.. %3 <br/> BluFor Unit Count.. %4 <br/> Total Units on Map.. %5 <br/> Total players on Map.. %6 <br/> <br/> <br/><t size='1.5'>SERVER STATE:</t> <br/>%7 FPS <br/> %8",_eastunits,_civUnits,_indUnits,_westUnits,_totalUnits,_playerUnits,SOR_FPS,SOR_ServerState];
		sleep 5;
	};
}, [], 10, false, false]];


SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#f4df42'>Turn Off Performance Monitor</t", 
{
	SOR_Zeus_Mon = false;
	hint "";
}, [], 10, false, false]];


//Zeus group cache clean
SOR_ZuesTool = [];
SOR_ZuesTool set [0, player addAction ["<t color='#ca06e8'>Clear Zeus Group Bug</t", 
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

/*
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
*/