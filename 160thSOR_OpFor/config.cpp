/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: config.cpp
*/

#define Author_Macro author=$STR_AUTHOR_FULL;

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#include "Rus_VDV\define_macros.hpp"
#include "4th_Reich\define_macros.hpp"

class CfgPatches 
{
	class SOR_OpFor_Loadouts 
	{
		author="160th SOR";
		url="http://www.160th.net";	
		version="2.1.3";		
		units[] = 
		{
			#include "4th_Reich\cfgPatches.hpp"
			#include "Rus_VDV\cfgPatches.hpp"
			#include "sites\cfgPatches.hpp"	
			#include "SOR_ISIS\cfgPatches.hpp"
		};
		weapons[] = 
		{
			"160_rhs_weap_ak74m_pkas",
			"160_rhs_weap_ak74m_gp25_dtk",
			"160_rhs_weap_ak74m_camo",
			"160_rhs_weap_ak74m_1p63"
		};
		requiredAddons[] = 
		{
			"160th_SOR_Loadouts",
			"a3_characters_F",
			"a3_characters_F_beta",
			"A3_Characters_F_Common",
			"task_force_radio_items",
			"a3_characters_f_beta",
			"a3_characters_f_gamma",
			"rhs_weapons",
			"rhs_weapons2",
			"rhs_weapons3",
			"rhsusf_weapons",
			"rhsusf_weapons2",
			"rhsusf_weapons3",
			"rhs_infantry",
			"rhs_infantry2",
			"rhsusf_infantry",
			"rhsusf_infantry2",
			"rhsgref_infantry",
			"rhsgref_c_weapons",
			"sfp_bo105",
			"A3_Soft_F_epc",
			"A3_Static_F_Jets"			
		};
	};
};

class CfgFunctions 
{
	class SOR_OPFOR
	{
		tag = "SOPFOR";
		class functions
		{
			file = "160thSOR_OpFor\functions";
			class gunSpawn;
			class NoFlySite4km;
			class NoFlySite3km;
			class buildingSpawn;			
		};
	};
};
class cfgVehicles 
{	 
	#include "Rus_VDV\cfgVehicles.hpp"
	#include "4th_Reich\cfgVehicles.hpp"
	#include "sites\cfgVehicles.hpp"	
	#include "SOR_ISIS\cfgVehicles.hpp"	
};

class cfgWeapons 
{
	#include "Rus_VDV\CfgWeapons.hpp"
	#include "4th_Reich\CfgWeapons.hpp"
	#include "SOR_ISIS\CfgWeapons.hpp"	
};

class CfgBrains
{
  class DefaultSoldierBrain
  {
	class Components
	{
		class AIBrainSuppressionComponent;
	};
  };  
  class DefaultCivilianBrain;
  class DefaultAnimalBrain;  
  class SORSoldierBrain : DefaultSoldierBrain
  {
    class Components : Components
    {	  
      class AIBrainSuppressionComponent : AIBrainSuppressionComponent
      {
	    // maximum level of suppression
		maxSuppression = 1.0;
		// decrease time from max level, worst for skill 0, best for skill 1
		worstDecreaseTime = 0.5;
		bestDecreaseTime = 0.1;
		// default suppression range, if not provided by ammo type
		SuppressionRange = 0.3;
		// weights of different danger causes
		CauseHitWeight = 1.0;
		CauseExplosionWeight = 0.15;
		CauseBulletCloseWeight = 0.05; // default 0.15
		// threshold to change behavior (use smoke grenades for example)
		SuppressionThreshold = 0.8;
      };
    };
  };
};

class UniformSlotInfo 
{ 
	#include "4th_Reich\UniformSlotInfo.hpp"  
	#include "SOR_ISIS\UniformSlotInfo.hpp"  	
}; 

class CfgEditorCategories
{
	#include "4th_Reich\cfgEditorCategories.hpp"
	#include "Rus_VDV\cfgEditorCategories.hpp"	
	#include "SOR_ISIS\cfgEditorCategories.hpp"		
	class SOR_OPFor_Cat_Supplies
	{
		displayName = "160th Supplies Opfor";
	};
	class SOR_OPFor_Cat_Objects
	{
		displayName = "160th Objects Opfor";
	};	
	class SOR_OPFor_Cat_Objects_Scripted
	{
		displayName = "160th Objects Opfor (Scripted)";
	};
	class SOR_OPFor_Cat_Sites
	{
		displayName = "160th Sites";
	};	
};

class CfgEditorSubcategories
{
	class SOR_OPFor_SubCat_SupplyBoxes 
	{
		displayName = "Boxes"; 
	};
	class SOR_OPFor_SubCat_SupplyBoxes_Static 
	{
		displayName = "Boxes (Static)"; 
	};
	class SOR_OPFor_SubCat_SupplyCrates
	{
		displayName = "Crates";
	};
	class SOR_OPFor_SubCat_SupplyContainers
	{
		displayName = "Containers";
	};	
	class SOR_OPFor_SubCat_Infantry
	{
		displayName = "Men (Infantry)";
	};	
	class SOR_OPFor_SubCat_Infantry_AIR
	{
		displayName = "Men (Airborne)";
	};	
	class SOR_OPFor_SubCat_Infantry_MECH
	{
		displayName = "Men (Mechanised)";
	};		
	class SOR_OPFor_SubCat_Infantry_Support
	{
		displayName = "Men (Support)";
	};	
	class SOR_OPFor_SubCat_Infantry_Recon
	{
		displayName = "Men (Recon)";
	};	
	class SOR_OPFor_SubCat_Objects
	{
		displayName = "160th Opfor Objects";
	};	
	class SOR_OPFor_SubCat_Vehicles
	{
		displayName = "Armour";
	};		
	class SOR_OPFor_SubCat_Aircraft
	{
		displayName = "Aircraft";
	};
	class SOR_OPFor_SubCat_Aircraft_Captured
	{
		displayName = "Captured Aircraft";
	};
	class SOR_OPFor_SubCat_NoFlyZone
	{
		displayName = "No Fly Zones";
	};
	class SOR_OPFor_SubCat_Barracks_Reich
	{
		displayName = "Populated Barracks (Reich)";
	};
	class SOR_OPFor_SubCat_Barracks_ISIS
	{
		displayName = "Populated Barracks (ISIS)";
	};	
	class SOR_OPFor_SubCat_Barracks_VDV_AI
	{
		displayName = "Populated Barracks (Russian)";
	};	
};

class cfgFactionClasses
{
	#include "Rus_VDV\cfgFactionClasses.hpp"
	#include "4th_Reich\cfgFactionClasses.hpp"
	#include "SOR_ISIS\cfgFactionClasses.hpp"	
};

class CfgGroups 
{
	class East
	{
		#include "Rus_VDV\CfgGroups.hpp"
		#include "4th_Reich\CfgGroups.hpp"
		#include "SOR_ISIS\CfgGroups.hpp"
	};
};

class CfgVehicleClasses
{
	#include "Rus_VDV\cfgVehicleClasses.hpp"
};






