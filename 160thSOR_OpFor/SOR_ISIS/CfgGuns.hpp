/*
	Name: SOR ISIS
	Author: Yettie
	Date: 25/04/17
	Description: CfgGuns.hpp
*/

class rhs_weap_m40a5_d;


class ISIS_weap_m40a5_d: rhs_weap_m40a5_d 
{
	class LinkedItems 
	{
		class LinkedItemsOptic 
		{
			item = "rhsusf_acc_M8541_low_d";
			slot = "CowsSlot";
		};
		class LinkedItemsAcc 
		{
			item = "SMA_ANPEQ15_TAN";
			slot = "PointerSlot";
		};
	};
};
