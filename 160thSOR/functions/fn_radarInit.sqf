_operator = _this select 0;
_radar_active = false;
while {RADAR_ACTIVE} do 
{
	_radar = nearestObject [_operator, "SOR_Land_Radar"];
	_radar_terminal = nearestObject [_operator, "Land_Laptop_unfolded_F"];
	while {(isNull _radar) or (isNull _radar_terminal)} do 
	{
		if (_radar_active) then 
		{
			_radar_active = false;
			[_operator] spawn SOR_fnc_AWACSTARGETING;
		};
		_radar = nearestObject [_operator, "SOR_Land_Radar"];
		_radar_terminal = nearestObject [_operator, "Land_Laptop_unfolded_F"];
		_radar_active = false;
		sleep 5;
	};
	if ((alive _radar) && (alive _radar_terminal)) then 
	{
		if ((alive _radar) && (_operator distance _radar_terminal < 2)) then  
		{
			if !(_radar_active) then 
			{
				_radar_active = true;				
				[_operator] spawn SOR_fnc_AWACSTARGETING;
			};
		}
		else
		{
			if ((alive _radar) && (_operator distance _radar_terminal > 10)) then 
			{
				if !(_radar_active) then 
				{
					sleep 5;	
				}
				else
				{
					_radar_active = false;
					[_operator] spawn SOR_fnc_AWACSTARGETING;
				};
			};
		};
		sleep 1;
	};		
sleep 1;
};


	
