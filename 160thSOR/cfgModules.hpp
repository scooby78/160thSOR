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
	class SOR_Function_rep : Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Repair/Rearm"; // Name displayed in the menu
		icon = "\addons\data\IconModule_ca.paa"; // Map icon. Delete this entry to use the default icon
		category = "NO_CATEGORY";
		// Name of function triggered once conditions are met
		function = "SOR_fnc_service";
		// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		functionPriority = 1;
		// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isGlobal = 1;
		// 1 for module waiting until all synced triggers are activated
		isTriggerActivated = 1;
		// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
		isDisposable = 0;
		// Menu displayed when the module is placed or double-clicked on by Zeus
		curatorInfoType = "";
		// Module arguments
		class Arguments: ArgumentsBaseUnits
		{
			// Arguments shared by specific module type (have to be mentioned in order to be placed on top)
			class Units: Units {};
			// Module specific arguments
			class Name
  			{
				displayName = "SOR Modules";
				description = "";
				defaultValue = ""; // Default text filled in the input box
				// When no 'values' are defined, input box is displayed instead of listbox
			};
		};
	};