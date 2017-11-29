
    class MilSec_Vest_1 : ItemCore {
        scope = 2;
		displayName = "MilSec Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";		
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_PMC\data\SOR_milsec1_v_co.paa"};
	      
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply180"; //how much it can carry
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
	    class MilSec_Vest_2 : ItemCore {
        scope = 2;
		displayName = "MilSec Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";		
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"160thSOR_OpFor\SOR_PMC\data\SOR_milsec2_v_co.paa"};
	      
        
        class ItemInfo : VestItem {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply180"; //how much it can carry
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