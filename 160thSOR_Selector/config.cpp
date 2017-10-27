class CfgPatches
{
    class 160thSOR_Selector
    {
        author = "destruktoid";
        units[] = {"DEST_moduleBase","DEST_loadoutNVG","DEST_loadoutSup","DEST_loadoutArea"};
        requiredVersion = 1.0;
        requiredAddons[] = {"A3_Modules_F","A3_Modules_F_Curator"};
    };
};

#include "defines.hpp"
#include "dialogs.hpp"

class CfgFunctions
{
    class DEST
    {
        tag = "DEST";
        class selector
        {
            file = "160thSOR_Selector\functions";
            class weap {};
            class updateSel {};
            class fake {};
        };   
    };
};

class CfgVehicles
{
    class Man;
    class CAManBase : Man
    {
        class ACE_SelfActions
        {
            class ACE_DEST_WeaponMenu
            {
                displayName = "Loadout Select";
                condition = "((player distance (getmarkerpos 'respawn_west')) <= 50) || !(nearestobject [player,'DEST_loadoutArea'] isEqualTo objNull)";
                statement = "[] spawn dest_fnc_weap";
                showDisabled = 0;
            };
        };
    };
    
    class Logic;
    class Module_F: Logic
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
    
    class DEST_moduleBase: Module_F
    {
        displayName = "";
        scope = 1;
        vehicleClass = "Modules";
        category = "NO_CATEGORY";
        function = "DEST_fnc_fake";
        functionPriority = 1;
        isGlobal = 2;
        isDisposable = 0;
    };
    
    class DEST_loadoutNVG: DEST_moduleBase
    {
        displayName = "Disable NVG selection";
        scope = 2;
        class ModuleDescription
        {
            description = "Disables NVG checkbox";
        };
    };
    
    class DEST_loadoutSup: DEST_moduleBase
    {
        displayName = "Disable Suppressor selection";
        scope = 2;
        class ModuleDescription
        {
            description = "Disables suppressor checkbox";
        };
    };
    
    class DEST_loadoutArea: DEST_moduleBase
    {
        displayName = "Loadout selector area (50m)";
        scope = 2;
        class ModuleDescription
        {
            description = "Enables loadout selector use within 50m";
        };
    };
};

#include "config_selector.hpp"