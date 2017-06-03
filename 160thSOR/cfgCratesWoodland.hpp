/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/09/15 02:05
	Description: cfgCrates.hpp
*/
	
/////////////////
//Static stores//
/////////////////
class SOR_PJ_Pack_Box_F_W : SOR_PJ_Pack_Box_F
{
	displayName = "Box PJ Pack Storage [Static Woodland]";
	class TransportBackpacks
	{
		pack_xx(SOR_PJMedicPack_W,7)
	};
};	

///////////////////////
//Hand Liftable Boxes//
///////////////////////
// Medical Box 
class SOR_M_Box_F_W : SOR_M_Box_F
{
	displayName = "Box [Medical Woodland]";
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,1)
	};
};	

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// All in one Crate		
class SOR_AM_Crate_F_W : SOR_AM_Crate_F
{
	displayName = "Crate [Ammo&Med Woodland]";
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,3)
	};
};

//////////////////////////////
// Sling loadable Taru Pods //
//////////////////////////////	
// Medical pod	
class SOR_Taru_Pod_medevac_Black_W : SOR_Taru_Pod_ammo_black
{
	displayName = "Taru Pod [ Medical CCP Woodland]";
	class TransportBackpacks
	{
		pack_xx(SOR_Medic_Pack_W,3)
		pack_xx(SOR_PJMedicPack_W,3)
	};
};