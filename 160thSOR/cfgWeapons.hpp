class cfgWeapons 
{
	class rhs_weap_m4a1_carryhandle_grip;
	class rhs_weap_m4a1_grip2;
	class rhs_weap_m4a1_m320;
	class rhs_weap_m249_pip_L_para;
	class rhs_weap_m240B;
	class srifle_LRR_camo_F;
	class rhs_weap_m4a1_blockII_M203;
	class rhs_weap_m4a1_blockII_grip2_KAC;
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_sr25;
	class rhs_weap_sr25_ec;
	class rhs_weap_m16a4_carryhandle_grip_pmag;
	class rhs_weap_m4a1_carryhandle_grip2;
	
	class 160_m4a1_carryhandle_grip_holo: rhs_weap_m4a1_carryhandle_grip 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_m4a1_carryhandle_grip_acog: rhs_weap_m4a1_carryhandle_grip 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_m4a1_grip2: rhs_weap_m4a1_grip2 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_m4a1_m320: rhs_weap_m4a1_m320 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ACOG";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_rhs_weap_m249_pip_L_para: rhs_weap_m249_pip_L_para 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_rhs_weap_m240B: rhs_weap_m240B 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_eotech_552";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15A";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_srifle_LRR_camo_F: srifle_LRR_camo_F
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_LRPS";
				slot = "CowsSlot";
			};
		};
	};
	
	class 160_m4a1_blockII_M203: rhs_weap_m4a1_blockII_M203 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_m4a1_blockII_grip2_KAC: rhs_weap_m4a1_blockII_grip2_KAC 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Hamr";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "acc_pointer_IR";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};	
		};
	};
	
	class 160_rhs_weap_m16a4_carryhandle: rhs_weap_m16a4_carryhandle 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ACOG3";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_rhs_weap_sr25: rhs_weap_sr25_ec 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_LEUPOLDMK4_2";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_SR25S";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};			
		};
	};
	
	class 160_rhs_weap_m16a4_carryhandle_grip_pmag: rhs_weap_m16a4_carryhandle_grip_pmag 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ELCAN";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};		
		};
	};
	
	class 160_rhs_weap_m16a4_carryhandle_grip_pmag_1: rhs_weap_m16a4_carryhandle_grip_pmag 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ELCAN";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_harris_bipod";
				slot = "UnderBarrelSlot";
			};				
		};
	};
	
	class 160_rhs_weap_m4a1_carryhandle_grip2_1: rhs_weap_m4a1_carryhandle_grip2 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ELCAN";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15side";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "rhsusf_acc_nt4_black";
				slot = "MuzzleSlot";
			};			
		};
	};	
};
