/*
	Name: 160th SOR Mod
	Author: Scooby & Darce
	Date: 08/10/15 
	Description: cfgAircraft.hpp
*/

/*
class SOR_UH60M;
class SOR_CH_47F;
class SOR_UH60M_MEV2;
class SOR_RHS_AH64D_AA;
class SOR_RHS_AH64D_CS;
class SOR_RHS_AH64D_GS;
class SOR_RHS_A10;

class MELB_AH6M_H;
class MELB_AH6M_L;
class MELB_AH6M_M;
class MELB_H6M;
class MELB_MH6M;

class FIR_F16C_TWAS;
class FIR_F16C_TWAS2;
class FIR_F16C;
class FIR_F16C_Polish_CFT;
*/

// Transport Helos	
class SOR_UH60M_W : SOR_UH60M
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "UH-60M (C4/P12)";
};

class SOR_CH_47F_W : SOR_CH_47F
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};

class SOR_UH60M_MEV2_W : SOR_UH60M_MEV2
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};

class SOR_MELB_H6M_W : MELB_H6M
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "H-6M (C2/P2)";
	fuelCapacity = 110; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

class SOR_MELB_MH6M_W : MELB_MH6M
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "MH-6M (C2/P6)";
	fuelCapacity = 110; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

class SOR_MELB_MH6M_MEV_W : MELB_MH6M
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "MH-6M MEV (C2/P6)";
	driverCanEject = 1; // was 0 test eject
	ejectDeadCargo = 1; //test dead eject	
	getInRadius = 4;
	class TransportItems 
	{
		item_xx(ACE_Fielddressing,24)
		item_xx(ACE_morphine,16)
		item_xx(ACE_epinephrine,16)
		item_xx(G_Diving,3)
		item_xx(U_B_Wetsuit,3)
		item_xx(V_RebreatherB,3)
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

// Attack Helos	
class SOR_MELB_AH6M_L_W : MELB_AH6M_L
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "AH-6M_L (C2/P1)";
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

class SOR_MELB_AH6M_M_W : MELB_AH6M_M
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "AH-6M_M (C2/P1)";
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

class SOR_MELB_AH6M_H_W : MELB_AH6M_H
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
	displayName = "AH-6M_H (C2/P1)";
	fuelCapacity = 200; //was fuelCapacity = 242;
	fuelConsumptionRate = 0.0555; //was 0.0368;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,10);
	};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_W,1)
	};
};	

class SOR_RHS_AH64D_AA_W : SOR_RHS_AH64D_AA
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};	

class SOR_RHS_AH64D_CS_W : SOR_RHS_AH64D_CS
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};		

class SOR_RHS_AH64D_GS_W : SOR_RHS_AH64D_GS
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};		

////////////	
// Planes //
////////////
class SOR_RHS_A10_W : SOR_RHS_A10
{
	editorCategory = "SOR_Cat_Faction_W";
	editorSubcategory = "SOR_SubCat_Aircraft";
	vehicleclass = "SOR_Aircraft";
	faction = SOR_Faction_W;
};