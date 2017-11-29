	
	
	
	
	class rhs_weap_XM2010;
	class rhs_weap_M107;
	
	class rhs_weap_XM2010PMC: rhs_weap_XM2010
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "ACE_optic_LRPS_PIP";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};			
		};
	};
	class PMC_weap_M107: rhs_weap_M107
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Nightstalker";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsUnder
			{
				item = "bipod_03_F_blk";
				slot = "UnderBarrelSlot";
			};			
		};
	};