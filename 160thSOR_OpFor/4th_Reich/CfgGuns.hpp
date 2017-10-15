/*
	Name: The_Fourth_Reich Mod
	Author: Yettie
	Date: 25/04/17
	Description: CfgGuns.hpp
*/

class arifle_MXM_Black_F;
class arifle_MX_GL_Black_F;

class EN_arifle_MXM_Blk_F_ARCO: arifle_MXM_Black_F 
{
	class LinkedItems 
	{
		class LinkedItemsOptic 
		{
			item = "optic_ERCO_blk_F";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc 
		{
			item = "rhsusf_acc_anpeq15side_bk";
			slot = "PointerSlot";
		};
	};
};
class EN_arifle_MX_GL_Black_F_holo: arifle_MX_GL_Black_F
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
			item = "rhsusf_acc_anpeq15side_bk";
			slot = "PointerSlot";
		};
	
	};
};
	class EN_arifle_MXM_Black_MM: arifle_MXM_Black_F
{
	class LinkedItems 
	{
		class LinkedItemsOptic 
		{
			item = "optic_SOS";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc 
		{
			item = "rhsusf_acc_anpeq15side_bk";
			slot = "PointerSlot";
		};
		class LinkedItemsUnder
		{
			item = "bipod_01_F_blk";
			slot = "UnderBarrelSlot";
		};
	};
};