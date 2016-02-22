//Custom Backpacks
	class B_Kitbag_cbr;
	class B_AssaultPack_cbr;
	class tf_rt1523g_rhs;
	class B_Kitbag_mcamo;
	class B_AssaultPack_mcamo;
	class rhsusf_assault_eagleaiii_ocp;

	
//Custom Medic Pack	
	class SOR_Medic_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Medic";
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
	class SOR_PJMedicPack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Paramedic";
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
			item_xx(rhsusf_acc_ACOG,1)			
		};		
	};

//Custom Rifleman Pack
	class SOR_Rifleman_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Rifleman (M249)";
		class TransportMagazines
		{
			mag_xx(rhsusf_100Rnd_556x45_soft_pouch,1);
			mag_xx(rhs_200rnd_556x45_M_SAW,2);
		};
	};
	
//Custom Rilfeman Ammobearer Pack
	class SOR_Rifleman_Ammo_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Rifleman (M240)";
		class TransportMagazines
		{
			mag_xx(rhsusf_100Rnd_762x51,3);
		};
	};

//Custom m249 Pack		
	class SOR_M249_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert M249";
		class TransportMagazines
		{
			mag_xx(rhs_200rnd_556x45_M_SAW,2);
		};
	};
	
// Custom m240 Pack
	class SOR_M240_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert M240";
		class TransportMagazines
		{
			mag_xx(rhsusf_100Rnd_762x51,2);
		};
	};

//Repair Pack With Toolkit	
	class SOR_Repair_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Repair";
		class TransportItems
		{
			item_xx(Toolkit,1);
			
		};
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,2);
		};
	};

//Custom Grenadier Pack	
	class SOR_GD_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert GD";
		class TransportMagazines
		{
			mag_xx(rhs_mag_M433_HEDP,10);
			mag_xx(rhs_mag_M441_HE,5);
			mag_xx(rhs_mag_m713_Red,5);
			mag_xx(rhs_mag_m715_Green,2);
			mag_xx(rhs_mag_m67,2);
			mag_xx(rhs_mag_m714_White,5);
		};	
	};

//Custom RTO Pack	
	class SOR_RTO_Pack_D : tf_rt1523g_rhs
	{
		displayName = "Pack Desert Radio";
		class TransportMagazines
		{
			mag_xx(rhs_mag_m713_Red,8);
			mag_xx(rhs_mag_m715_Green,2);
			mag_xx(rhs_mag_m716_yellow,2);
//			mag_xx(rhs_mag_m714_White,3);
		};	
	};

//Custom Rifleman AT Pack	
	class SOR_RFLAT_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert RFLAT";
		class TransportMagazines
		{
			mag_xx(MAAWS_HEAT,1)
			mag_xx(MAAWS_HEDP,1)
		};
	};

//Custom Sniper Pack	
	class SOR_Sniper_Camo : B_AssaultPack_mcamo
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
			mag_xx(rhs_mag_m18_green,1);
			mag_xx(rhs_mag_an_m8hc,2);
		};
	};

//Custom Spotter Pack	
	class SOR_Spotter_Radio : tf_rt1523g_rhs
	{
		displayName = "Pack Radio Spotter";
		class TransportItems{};
		class TransportMagazines
		{
			mag_xx(rhs_mag_m18_green,1);
			mag_xx(rhs_mag_an_m8hc,1);
			mag_xx(rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer,4);
		};
	};

//Custom Mech Crew Commander Pack	
	class SOR_Mech_Radio : tf_rt1523g_rhs
	{
		displayName = "Pack Radio Commander";
		class TransportItems{};
		class TransportMagazines
		{
			mag_xx(rhs_mag_m18_red,1);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(rhs_mag_an_m8hc,2);
		};
	};

//Custom Engineer Repair Pack	
	class SOR_Eng_Repair_Pack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Eng Repair";
		class TransportMagazines{};
		class TransportItems
		{
			item_xx(ACE_wirecutter,1);
			item_xx(Toolkit,1);		
		};		
	};	
	
//Custom Engineer Ordanance Pack		
	class SOR_OrdanancePack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Ordanance";
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
	class SOR_CombatPack_D : rhsusf_assault_eagleaiii_ocp
	{
		displayName = "Pack Desert Combat";
		class TransportMagazines
		{
			mag_xx(rhs_mag_an_m8hc,2);
			mag_xx(rhs_mag_m18_green,2);
			mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6);
			mag_xx(rhs_mag_m67,2);				
		};
		class TransportItems
		{
			item_xx(rhsusf_acc_ACOG,1)			
		};		
	};