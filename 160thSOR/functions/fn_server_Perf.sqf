if !(isServer) exitWith {};
waitUntil {time > 0};
diag_log "SOR Server Performance Script - STARTED.....";	

SOR_ScriptThrottleKill = false;
SOR_ScriptThrottleOK = false;
publicVariable "SOR_ScriptThrottleKill";
publicVariable "SOR_ScriptThrottleOK";

// Performance monitor brain
while {true} do
{
	SOR_FPS = (floor(diag_fps));
	if (SOR_FPS < 30) then 
	{
		sleep 10;
		if (SOR_FPS < 20) then 
		{
			SOR_ScriptThrottleKill = false;
			diag_log "SOR Server Performance Script - Script 'Kill' Command Sent.....";	
		};
	} 
	else
	{
		SOR_ScriptThrottleKill = true;
	};
	if (SOR_FPS > 40) then 
	{
		SOR_ScriptThrottleOK = true;
	} 
	else 
	{
		SOR_ScriptThrottle = false;
		diag_log "SOR Server Performance Script - Script 'Throttle Down' Command Sent.....";
	};
	publicVariable "SOR_ScriptThrottleKill";
	publicVariable "SOR_ScriptThrottleOK";
	publicVariable "SOR_FPS";
	sleep 16;
};