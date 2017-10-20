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
	    init = "_radio = _this select 0;_radio addaction ['Paint it black',{(_this select 0) say3d ['Nam_PaintItBlack',30,1]}];_radio addaction ['For what its worth',{(_this select 0) say3d ['Nam_ForWhatItsWorth',30,1]}];_radio addaction ['House of the rising sun',{(_this select 0) say3d ['Nam_houseoftherisingsun',30,1]}];_radio addaction ['No where to run',{(_this select 0) say3d ['Nam_nowheretorun',30,1]}];_radio addaction ['Run through the jungle',{(_this select 0) say3d ['Nam_runthroughthejungle',30,1]}];";	
	};
	#include "cfgBackpacks.hpp"
	#include "cfgTroopsNam.hpp"	
	#include "cfgCrates.hpp"
	#include "cfgAircraft.hpp"
	#include "cfgArmour.hpp"
	#include "cfgEnemytroops.hpp"	
};
