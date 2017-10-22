/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgWeapons.hpp
*/
//type = 4; //rpg
//type = 2; //pistol
//type = 1; //rifle
class rhs_weap_ak74m_pkas;
class rhs_weap_ak74m_gp25_dtk;
class rhs_weap_ak74m_camo;
class rhs_weap_M590_8RD;
class arifle_AK12_GL_F;
class arifle_CTAR_blk_F;
class arifle_CTARS_blk_F;	
class arifle_CTAR_GL_blk_F;	

class 160_rhs_weap_M590_8RD: rhs_weap_M590_8RD 
{
	type = 4;
};	

class 160_rhs_weap_ak74m_1p63: rhs_weap_ak74m_pkas 
{
	class LinkedItems 
	{
		class LinkedItemsOptic 
		{
			item = "rhs_acc_1p63";
			slot = "CowsSlot";
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

class 160_rhs_weap_ak74m_gp25_dtk: rhs_weap_ak74m_gp25_dtk 
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

class 160_rhs_weap_ak74m_camo: rhs_weap_ak74m_camo 
{
	class LinkedItems 
	{
		class LinkedItemsOptic 
		{
			item = "rhs_acc_1p29";
			slot = "CowsSlot";
		};
		class LinkedItemsMuzzle
		{
			item = "rhs_acc_tgpa";
			slot = "MuzzleSlot";
		};
	};
};	


// AI only Weapons

class 160_Opfor_AI_GL: arifle_AK12_GL_F 
{
	class LinkedItems 
	{
		class LinkedItemsAcc 
		{
			item = "acc_flashlight";
			slot = "PointerSlot";
		};
	};
};

class 160_Opfor_AI_TL_PMC: arifle_CTAR_blk_F 
{
	class LinkedItems 
	{
		class LinkedItemsAcc 
		{
			item = "acc_flashlight";
			slot = "PointerSlot";
		};
	};
};	
class 160_Opfor_AI_LMG_PMC: arifle_CTARS_blk_F 
{
	class LinkedItems 
	{
		class LinkedItemsAcc 
		{
			item = "acc_flashlight";
			slot = "PointerSlot";
		};
	};
};		
class 160_Opfor_AI_GL_PMC: arifle_CTAR_GL_blk_F 
{
	class LinkedItems 
	{
		class LinkedItemsAcc 
		{
			item = "acc_flashlight";
			slot = "PointerSlot";
		};
	};
};		


/*
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
*/

