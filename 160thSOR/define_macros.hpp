#define Author_Macro author=$STR_AUTHOR_FULL;

#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define pack_xx(a,b) class _xx_##a {backpack = a; count = b;}

#define Standard_Equipment 	"ItemMap",\
							"ItemCompass",\
							"ItemWatch",\
							"tf_anprc152"

#define Airborne_Equipment  "ItemMap",\
							"ItemCompass",\
							"ACE_Altimeter",\
							"tf_anprc152",\
							"ItemGPS"
							
#define Recon_Equipment 	"ItemMap",\
							"ItemCompass",\
						    "ItemWatch",\
							"tf_anprc152",\
							"ItemGPS" 						
						
#define Standard_Meds   "ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_EarPlugs"
						
#define Recon_Meds  	"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_fieldDressing",\
						"ACE_morphine",\
						"ACE_morphine",\
						"ACE_epinephrine",\
						"ACE_epinephrine",\
						"ACE_EarPlugs"

#define SL_Equip 		"ACE_CableTie",\
						"ACE_CableTie",\
						"ACE_MapTools",\
						"ACE_Flashlight_XL50"
						
#define Recon_Equip 	"ACE_CableTie",\
						"ACE_CableTie",\
						"ACE_MapTools",\
						"ACE_Flashlight_XL50"

#define Standard_Mags 	"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"rhs_mag_m67",\
						"rhs_mag_m67",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc"
                        
#define Medic_Mags 	    "30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc"

#define Standard_Mags_crew 	"30Rnd_556x45_Stanag_Tracer_Red",\
							"30Rnd_556x45_Stanag_Tracer_Red",\
							"30Rnd_556x45_Stanag_Tracer_Red",\
							"30Rnd_556x45_Stanag_Tracer_Red",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
							"Laserbatteries"	
							
#define Standard_Mags_AR1 	"rhsusf_mag_15Rnd_9x19_FMJ",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
                            "rhs_mag_m67",\
						    "rhs_mag_m67",\
							"SMA_150Rnd_762_M80A1_Tracer",\
                            "SMA_150Rnd_762_M80A1_Tracer",\
							"SMA_150Rnd_762_M80A1_Tracer"
							
#define Standard_Mags_AR1_ammo     "MRAWS_HEAT_F"
							
#define Standard_Mags_AR2 	"rhsusf_mag_15Rnd_9x19_FMJ",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
                            "rhs_mag_m67",\
						    "rhs_mag_m67",\
							"SMA_150Rnd_762_M80A1_Tracer",\
                            "SMA_150Rnd_762_M80A1_Tracer",\
							"SMA_150Rnd_762_M80A1_Tracer"	
							
#define Standard_Mags_AR2_ammo     "MRAWS_HEAT_F"
				
#define GL_Mags 		"1Rnd_SmokeGreen_Grenade_shell",\
                        "1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
                        "UGL_FlareRed_F",\
                        "UGL_FlareRed_F",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell"


#define SL_Mags	 		"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"rhs_mag_m67",\
						"rhs_mag_m67",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_m18_green",\
						"rhs_mag_m18_green"
				
#define Recon_Mags		"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"rhs_mag_m67",\
						"rhs_mag_m67",\
						"rhs_mag_m18_green",\
						"rhs_mag_m18_green",\
						"rhs_mag_m18_red",\
						"rhs_mag_m18_red",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc"	

#define Recon_GL_Mags 	"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell"
						
#define Std_Pistol		"rhsusf_mag_15Rnd_9x19_FMJ"

#define Std_m1911a1		"rhsusf_mag_7x45acp_MHP"

// Standard Mech Vehicle Loadout 
#define Mech_Inventory 				class TransportItems \
									{\
										item_xx(ACE_FieldDressing,20);\
									};\
									class TransportWeapons\
									{\
										weap_xx(launch_MRAWS_sand_rail_F,1)\
										weap_xx(rhs_weap_m4a1_carryhandle_grip,2)\
									};\
									class TransportMagazines\
									{\
                                        mag_xx(MRAWS_HEAT_F,1)\
										mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)\
										mag_xx(SMA_150Rnd_762_M80A1_Tracer,8)\
										mag_xx(SLAMDirectionalMine_Wire_Mag,2)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};
                                    
//Light Mech Vehicle Loadout
#define Mech_Inventory_Light 		class TransportItems \
									{\
										item_xx(ACE_FieldDressing,10);\
									};\
									class TransportWeapons\
									{\
										weap_xx(rhs_weap_m4a1_carryhandle_grip,2)\
									};\
									class TransportMagazines\
									{};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};

// Standard Troop Transport Loadout 									
#define	Troop_Transport_Inventory	class TransportItems\
									{\
										item_xx(ACE_FieldDressing,10);\
										item_xx(ACE_EntrenchingTool,2);\
										};\
									class TransportWeapons\
									{\
										weap_xx(launch_MRAWS_sand_rail_F,1)\
									};\
									class TransportMagazines\
									{\
										mag_xx(Laserbatteries,1)\
                                        mag_xx(MRAWS_HEAT_F,1)\
										mag_xx(SMA_150Rnd_762_M80A1_Tracer,2)\
										mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)\
										mag_xx(ClaymoreDirectionalMine_Remote_Mag,2)\
										mag_xx(rhs_mag_m67,2)\
										mag_xx(rhs_mag_an_m8hc,4)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
										pack_xx(B_AssaultPack_khk,1)\
									};

// Standard Engineer Transport Loadout 									
#define	Eng_Inventory				class TransportItems\
									{\
										item_xx(ACE_FieldDressing,10);\
										item_xx(ACE_EntrenchingTool,2);\
									};\
									class TransportWeapons\
									{\
										weap_xx(launch_MRAWS_sand_rail_F,1)\
									};\
									class TransportMagazines\
									{\
                                        mag_xx(MRAWS_HEAT_F,1)\
                                        mag_xx(30Rnd_556x45_Stanag_Tracer_Red,8)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
										pack_xx(SOR_OrdanancePack_D,2)\
										pack_xx(B_Mortar_01_weapon_F,1)\
										pack_xx(B_Mortar_01_support_F,1)\
									};

// Standard Medical Vehicle Loadout 
#define Medical_Vehicle_Inventory	class TransportItems\
									{\
										item_xx(ACE_Fielddressing,24)\
										item_xx(ACE_morphine,16)\
										item_xx(ACE_epinephrine,16)\
									};\
									class TransportWeapons\
									{\
										weap_xx(launch_MRAWS_sand_rail_F,1)\
										weap_xx(rhs_weap_m4a1_carryhandle_grip,2)\
									};\
									class TransportMagazines\
									{\
                                        mag_xx(MRAWS_HEAT_F,1)\
										mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};

// Standard Air Transport Vehicle Loadout 									
#define	Airborne_Transport_Inventory class TransportItems\
									{\
										item_xx(ACE_FieldDressing,10);\
										item_xx(V_RebreatherB,4);\
									};\
									class TransportWeapons\
									{\
										weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)\
									};\
									class TransportMagazines\
									{\
										mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};								

// Standard Air Medical Vehicle Loadout 										
#define	Airborne_Medical_Inventory	class TransportItems\
									{\
										item_xx(ACE_Fielddressing,24)\
										item_xx(ACE_morphine,16)\
										item_xx(ACE_epinephrine,16)\
										item_xx(G_Diving,3)\
										item_xx(U_B_Wetsuit,3)\
										item_xx(V_RebreatherB,5)\
									};\
									class TransportWeapons\
									{\
										weap_xx(rhs_weap_m4a1_carryhandle_grip2,2)\
									};\
									class TransportMagazines\
									{\
										mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6)\
									};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};

// Standard Air Attack Heli Vehicle Loadout 	
#define	Airborne_Attack_Inventory	class TransportItems\
									{\
										item_xx(ACE_FieldDressing,10);\
										item_xx(V_RebreatherB,2);\
									};\
									class TransportWeapons{};\
									class TransportMagazines{};\
									class TransportBackpacks\
									{\
										pack_xx(SOR_Repair_Pack_veh_D,1)\
									};
									