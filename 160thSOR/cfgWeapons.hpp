/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 24/06/16
	Description: cfgWeapons.hpp
*/

class cfgWeapons 
{
//Black

	class SMA_HK416afg;
	class SMA_M4afg;
	class rhsusf_weap_m9;	
	class SMA_HK416GL;
	class sma_minimi_mk3_762tlb;
//	class rhs_weap_m240B;
	class rhs_weap_M136_hp;
	class rhs_weap_m4a1_blockII;	
	class srifle_LRR_camo_F;
	class rhs_weap_ak74m_pkas;	
//Desert
	class SMA_HK416CUSTOMvfg;
	class sma_minimi_mk3_762tlb_des;


	
// TL and higher standard issue
	class 160_weap_inf_tl: SMA_HK416afg 
	{
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_BLK";
				slot = "PointerSlot";
			};
		};
*/	
	};	
	
// Basic issue rifle for vehicle crew	
	class 160_weap_inf_basic: SMA_M4afg 
	{

	};

// Standard pistol	
	class 160_weap_inf_handgun: rhsusf_weap_m9 
	{

	};

// Grenadier class standard issue	
	class 160_weap_inf_gl: SMA_HK416GL 
	{
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_BLK";
				slot = "PointerSlot";
			};
		};
*/	
	};

// Standard Inf weapon issue	
	class 160_weap_inf_std: SMA_HK416afg 
	{
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "optic_Arco_blk_F";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_BLK";
				slot = "PointerSlot";
			};
		};
*/	
	};	

// AutoRifleman M249
	class 160_weap_inf_AR1: sma_minimi_mk3_762tlb 
	{
		displayName = "Maximi Mk3 7.62 Tactical Long";
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "SMA_BARSKA";
				slot = "CowsSlot";
			};	
		};
*/	
	};
	
// AutoRifleman M240
	class 160_weap_inf_AR2: sma_minimi_mk3_762tlb 
	{
		displayName = "Maximi Mk3 7.62 Tactical Long";
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ELCAN";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_TAN";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "sma_gemtech_one_blk";
				slot = "MuzzleSlot";
			};		
		};
*/	
	};

//RHS version
/*
	class 160_weap_inf_AR2: rhs_weap_m240B 
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
*/

/*	
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
*/	
	
// Basic issue RPG 	
	class 160_weap_inf_RPG: rhs_weap_M136_hp 
	{

	};	
	
// Standard Parajumper weapon issue		
	class 160_weap_inf_pj: SMA_HK416afg 
	{
/* 	Not used with SMA weapons
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
*/	
	};
	
// Standard Viper weapon issue	
	class 160_weap_inf_recon_rifle: SMA_HK416CUSTOMvfg 
	{
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "SMA_ELCAN_SPECTER_TAN_ARDRDS";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_TAN";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "SMA_supp1tan_556";
				slot = "MuzzleSlot";
			};		
		};
*/	
	};
	class 160_weap_inf_recon_AR: sma_minimi_mk3_762tlb_des 
	{
		displayName = "Maximi Mk3 7.62 Tactical Long";
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "SMA_BARSKA";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{

			};
			class LinkedItemsMuzzle
			{
				item = "sma_gemtech_one_des";
				slot = "MuzzleSlot";
			};		
		};
*/	
	};
	
// Sniper issue	
	class 160_weap_inf_sniper: srifle_LRR_camo_F
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
	class 160_weap_inf_spotter: SMA_HK416CUSTOMvfg 
	{
/* 	Not used with SMA weapons
		class LinkedItems 
		{
			class LinkedItemsOptic 
			{
				item = "rhsusf_acc_ELCAN";
				slot = "CowsSlot";
			};
			class LinkedItemsAcc 
			{
				item = "SMA_SFPEQ_HKTOP_TAN";
				slot = "PointerSlot";
			};
			class LinkedItemsMuzzle
			{
				item = "SMA_supp1tan_556";
				slot = "MuzzleSlot";
			};		
		};
*/	
	};
	
// OPFOR	
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
};
