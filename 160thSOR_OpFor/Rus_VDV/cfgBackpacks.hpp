/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgBackpacks.hpp
*/

//Custom Backpacks
class tf_mr3000_rhs;
class rhs_assault_umbts;
class rhs_assault_umbts_medic;
class B_AssaultPack_blk;

//Custom Medic Pack	
class SOR_OPFor_Medic_Pack_VDV : rhs_assault_umbts_medic
{
	displayName = "Pack Opfor VDV Medic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_white,12);
	};		
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//Custom Parajumper Pack		
class SOR_OPFor_PJMedicPack_VDV : rhs_assault_umbts_medic
{
	displayName = "Pack Opfor VDV Paramedic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_white,7);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};		
};

//Custom Rifleman Pack
class SOR_OPFor_Rifleman_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Rifleman (M249)";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

//Custom Rilfeman Ammobearer Pack
class SOR_OPFor_Rifleman_Ammo_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Rifleman (M240)";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

//Custom PKP Pack		
class SOR_OPFor_PKP_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV PKP";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

// Custom PKM Pack
class SOR_OpFor_AR_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV PKM";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

//Repair Pack With Toolkit	
class SOR_OPFor_Repair_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Repair";
	class TransportItems
	{
		item_xx(Toolkit,1);
		
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_white,2);
	};
};

//Custom Grenadier Pack	
class SOR_OPFor_GD_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV GD";
	class TransportMagazines
	{
		mag_xx(rhs_VOG25,15);
		mag_xx(rhs_GRD40_Red,5);
		mag_xx(rhs_GRD40_Green,2);
		mag_xx(rhs_mag_mk3a2,2);
		mag_xx(rhs_GRD40_White,5);
	};	
};

//Custom RTO Pack	
class SOR_OPFor_RTO_Pack_VDV : tf_mr3000_rhs
{
	displayName = "Pack VDV Radio";
	class TransportMagazines
	{
		mag_xx(rhs_GRD40_Red,8);
		mag_xx(rhs_GRD40_Green,2);
		mag_xx(rhs_GRD40_White,2);
	};	
};

//Custom Rifleman AT Pack	
class SOR_OPFor_RFLAT_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV RFLAT";
	class TransportMagazines
	{
		mag_xx(MAAWS_HEAT,1)
		mag_xx(MAAWS_HEDP,1)
	};
};

//Custom Sniper Pack	
class SOR_OPFor_Sniper_Camo : rhs_assault_umbts
{
	displayName = "Pack Camo Sniper";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,2);
		mag_xx(rhs_mag_rdg2_black,1);
		mag_xx(rhs_mag_rdg2_white,2);
	};
};

//Custom Spotter Pack	
class SOR_OPFor_Spotter_Radio : tf_mr3000_rhs
{
	displayName = "Pack Radio Spotter";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_black,1);
		mag_xx(rhs_mag_rdg2_white,1);
		mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,4);
	};
};

//Custom Mech Crew Commander Pack	
class SOR_OPFor_Mech_Radio : tf_mr3000_rhs
{
	displayName = "Pack Radio Commander";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_black,2);
		mag_xx(rhs_mag_rdg2_white,2);
	};
};

//Custom Engineer Repair Pack	
class SOR_OPFor_Eng_Repair_Pack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Eng Repair";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);		
	};		
};	

//Custom Engineer Ordanance Pack		
class SOR_OPFor_OrdanancePack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Ordanance";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);			
	};		
};

//Custom Engineer Combat Pack		
class SOR_OPFor_CombatPack_VDV : rhs_assault_umbts
{
	displayName = "Pack VDV Combat";
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_white,2);
		mag_xx(rhs_mag_rdg2_black,2);
		mag_xx(rhs_30Rnd_545x39_7N10_AK,6);
		mag_xx(rhs_mag_mk3a2,2);				
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_ACOG,1)			
	};		
};
////////////////////////////////////////////////////////////////////////////////////
///////////////////////
// AI ONLY BACKPACKS //
///////////////////////

// Template Backpacks
class SOR_OpFor_XXXX_Pack_XXX_AI : rhs_assault_umbts
{
	displayName = "Pack XXX XXXX";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

// Custom PKM Pack
class SOR_OpFor_AR_Pack_VDV_AI : rhs_assault_umbts
{
	displayName = "Pack VDV PKM";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

//Custom Rilfeman Ammobearer Pack
class SOR_OPFor_Rifleman_Pack_VDV_AI : rhs_assault_umbts
{
	displayName = "Pack VDV Rifleman";
	class TransportMagazines
	{
		mag_xx(rhs_100Rnd_762x54mmR_green,2);
	};
};

class SOR_OpFor_AR_Pack_PMC_AI : rhs_assault_umbts
{
	displayName = "Pack VDV Rifleman";
	class TransportMagazines
	{
		mag_xx(100Rnd_580x42_Mag_Tracer_F,2);
	};
};
