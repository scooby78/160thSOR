/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgVests.hpp
*/

	class Vest_Base;
    class VestItem;

    class 3COV : ItemCore {
        scope = 2;
		displayName = "Nazi Desert Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";		
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\data\S_3CO_V.paa"};
	      
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
			
            hiddenSelections[] = {"camo"};

			class HitpointsProtectionInfo {					
				
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 30;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 30;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
	
        };
    };
	    class GERWV : ItemCore {
        scope = 2;
	displayName = "Nazi Woodland Vest";
       picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";		
       model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
	   author = "Smill";
	   hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_GERW_V.paa"};
	      
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
			
            hiddenSelections[] = {"camo"};

			class HitpointsProtectionInfo {					
				
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 30;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 30;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
	
        };
    };	
		class GERWINV : ItemCore {
        scope = 2;
		displayName = "Nazi Winter Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		author = "Smill";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\4th_Reich\Data\S_GERWIN_V.paa"};
	      
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply60"; //how much it can carry
            mass = 20; //how much it weights
			
            hiddenSelections[] = {"camo"};

			class HitpointsProtectionInfo {					
				
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 30;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 30;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
	
        };
    };