/*
	Name: 160th Mod
	Author: SOR OPS TEAM
	Date: 27/09/15 01:09
	Description: cfgVehicles.hpp
*/

 class cfgVehicles 
{
	class Radio_Old;
	class Nam_Radio_Old: Radio_Old {
	    displayName = "Vietnam Radio";
        class UserActions {
            class PaintItBlack {
                displayName = "Paint it black";
                displayNameDefault = "Paint it black";
                condition = "(vehicle player) isEqualTo player";
                priority = 1;
                showWindow = 0;
                hideOnUse = 1;
                radius = 2;
                position = "";
                onlyForPlayer = 0;
                statement = "[this,'Nam_PaintItBlack',30] spawn NAM_fnc_playSound";
            };
            
            class ForWhatItsWorth : PaintItBlack {
                displayName = "For what its worth";
                displayNameDefault = "Paint it black";
                statement = "[this,'Nam_ForWhatItsWorth',30] spawn NAM_fnc_playSound";
            }
        };
	};
    
    
    
	#include "cfgBackpacks.hpp"
	#include "cfgTroopsNam.hpp"	
	#include "cfgCrates.hpp"
	#include "cfgAircraft.hpp"
	#include "cfgArmour.hpp"
	#include "cfgEnemytroops.hpp"	
};
