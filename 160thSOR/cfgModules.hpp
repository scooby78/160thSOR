class Logic;

class Module_F : Logic
{
	class ArgumentsBaseUnits
	{
		class Units;
	};
	class ModuleDescription
	{
		class EmptyDetector;
	};
};

class SOR_MissionSettings: Module_F
{
	author="Scooby";
	scope=2;
	mapSize=2;
	vehicleClass="Modules";
//	displayName="160th Mission Settings";
	icon = "\addons\data\IconModule_ca.paa";
//	icon="160thSOR\data\160th.paa";
	category="Ryanzombiesfactionmodule";
//	category = "NO_CATEGORY";
	function="SOR_fnc_settings_module";
	functionPriority = 1;
	isGlobal=0;
	class Arguments
	{
		class SOR_MissionMarkers
		{
			displayName="Mission Markers";
			description="Scripted mission markers will display for units.";
			typeName="Number";
			class values
			{
				class markers_on
				{
					name="Markers on";
					value=1;
					default=1;
				};
				class markers_off
				{
					name="Markers off";
					value=2;
				};				
			};
		};
		class SOR_MissionParajump
		{
			displayName="Parajump capability";
			description="Enables PJ HALO jumping.";
			typeName="Number";
			class values
			{
				class parajump_on
				{
					name="Parajump on";
					value=1;
					default=1;					
				};
				class parajump_off
				{
					name="Parajump off";
					value=2;
				};				
			};
		};
	};
	class ModuleDescription: ModuleDescription
	{
		position=1;
		description="This module sets the default values for 160th SOR official missions.";
	};
};	
