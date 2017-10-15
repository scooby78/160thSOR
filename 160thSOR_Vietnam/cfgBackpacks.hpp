/*
	Name: 160th SOR Mod Uniform
	Author: Scooby & AmTheAgent
	Date: 16/12/15
	cfgBackpacks.hpp
*/


//Custom Backpacks
class rhs_medic_bag;

class SOR_Medic_Pack_Nam : rhs_medic_bag
{
	displayName = "Pack Nam Medic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,8);
		mag_xx(rhs_mag_m18_green,4);
	};		
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//Custom Parajumper Pack		
class SOR_PJMedicPack_Nam : rhs_medic_bag
{
	displayName = "Pack Nam Paramedic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,5);
		mag_xx(rhs_mag_m18_green,2);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);			
	};		
};