if !(isServer) exitWith {};
waitUntil {time > 0};
diag_log "SOR Server Performance Script - STARTED.....";	

SOR_PerfMonitor	= true;
SOR_ScriptThrottleKill = false;
SOR_ScriptThrottleOK = false;
publicVariable "SOR_ScriptThrottleKill";
publicVariable "SOR_ScriptThrottleOK";

// Performance monitor brain
while {SOR_PerfMonitor} do
{
	SOR_FPS = (floor(diag_fps));
	publicVariable "SOR_FPS";
	if (SOR_FPS < 30) then 
	{
		sleep 10;
		SOR_FPS = (floor(diag_fps));
		publicVariable "SOR_FPS";
		if (SOR_FPS < 20) then 
		{
			SOR_ScriptThrottleKill = false;
			publicVariable "SOR_ScriptThrottleKill";
			diag_log "SOR Server Performance Script - Script 'Kill' Command Sent.....";	
			sleep 10;
			SOR_FPS = (floor(diag_fps));
			publicVariable "SOR_FPS";			
		};
	} 
	else
	{
		SOR_ScriptThrottleKill = true;
		publicVariable "SOR_ScriptThrottleKill";
	};
	if (SOR_FPS > 40) then 
	{
		SOR_ScriptThrottleOK = true;
		publicVariable "SOR_ScriptThrottleOK";
	} 
	else 
	{
		SOR_ScriptThrottleOK = false;
		publicVariable "SOR_ScriptThrottleOK";
		diag_log "SOR Server Performance Script - Script 'Throttle Down' Command Sent.....";
	};	
	sleep 5;
};