class cfgWeapons 
{
	class rhs_weap_m4a1_carryhandle;
	class rhs_weap_m4a1_carryhandle_m203;
	class rhs_weap_m4a1_carryhandle_grip;
	class rhs_weap_m16a4;
	class rhs_weap_m4a1_grip2;
	class rhs_weap_m4a1_m320;
	class rhs_weap_m249_pip_L_para;
	class rhs_weap_m240B;
	class srifle_LRR_camo_F;
	class rhs_weap_m4a1_blockII_M203;
	class rhs_weap_m4a1_blockII_grip2_KAC;
	class rhs_weap_m4a1_blockII;
	class rhs_weap_m16a4_carryhandle;
	class rhs_weap_sr25;
	class rhs_weap_sr25_ec;
	class rhs_weap_m16a4_carryhandle_grip_pmag;
	class rhs_weap_m4a1_carryhandle_grip2;
	class rhs_weap_ak74m_pkas;
	
	class arifle_SPAR_01_blk_F;
	class arifle_SPAR_01_GL_blk_F;
	class LMG_03_F;
	


	class 160_weap_inf_std: arifle_SPAR_01_blk_F 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_bk_light";
				slot = "PointerSlot";
			};
		};
	};	

	class 160_weap_inf_tl: arifle_SPAR_01_blk_F 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_bk_light";
				slot = "PointerSlot";
			};
		};
	};	
	
	class 160_weap_pj: rhs_weap_m4a1_blockII 
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
	
	class 160_weap_inf_m249: LMG_03_F 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Holosight_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_bk_light";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_weap_inf_gl: arifle_SPAR_01_GL_blk_F 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "rhsusf_acc_anpeq15_bk_light";
				slot = "PointerSlot";
			};
		};
	};

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
				item = "rhsusf_acc_anpeq15_bk_light";
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
				item = "rhsusf_acc_anpeq15_bk_light";
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
				item = "rhsusf_acc_anpeq15_bk_light";
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
				item = "rhsusf_acc_anpeq15_bk_light";
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
				item = "rhsusf_acc_anpeq15side_bk";
				slot = "PointerSlot";
			};
		};
	};
	
	class 160_rhs_weap_m240B: rhs_weap_m240B 
	{
		magazines[] = 
		{
			"SOR_rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51_m61_ap",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m80a1epr",
			"rhsusf_50Rnd_762x51_m82_blank",
			"rhsusf_100Rnd_762x51",
			"rhsusf_100Rnd_762x51_m61_ap",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m80a1epr",
			"rhsusf_100Rnd_762x51_m82_blank",
			"rhsusf_50Rnd_762x51_m993",
			"rhsusf_100Rnd_762x51_m993"
		};
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
	
	class 160_weap_inf_m240: rhs_weap_m240B 
	{
		magazines[] = 
		{
			"SOR_rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51",
			"rhsusf_50Rnd_762x51_m61_ap",
			"rhsusf_50Rnd_762x51_m62_tracer",
			"rhsusf_50Rnd_762x51_m80a1epr",
			"rhsusf_50Rnd_762x51_m82_blank",
			"rhsusf_100Rnd_762x51",
			"rhsusf_100Rnd_762x51_m61_ap",
			"rhsusf_100Rnd_762x51_m62_tracer",
			"rhsusf_100Rnd_762x51_m80a1epr",
			"rhsusf_100Rnd_762x51_m82_blank",
			"rhsusf_50Rnd_762x51_m993",
			"rhsusf_100Rnd_762x51_m993"
		};
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
	
	class 160_rhs_weap_ak74m_pkas: rhs_weap_ak74m_pkas 
	{
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhs_acc_1p78";
				slot = "CowsSlot";
			};
		};
	};	

	class 160_weap_inf_std4a1_carryhandle_grip2: rhs_weap_m4a1_carryhandle_grip2 
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
				item = "rhsusf_acc_anpeq15_bk_light";
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
				item = "rhsusf_acc_anpeq15_bk_light";
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
	
	class 160_weap_recon: rhs_weap_m16a4 
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
				item = "rhsusf_acc_anpeq15side_bk";
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
