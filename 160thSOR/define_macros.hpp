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
							"tf_microdagr",\
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
						"ACE_bloodIV_500",\
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
							"SMA_150Rnd_762_M80A1_Tracer",\
							"SMA_150Rnd_762_M80A1_Tracer"
							
#define Standard_Mags_AR1_ammo 	"SMA_150Rnd_762_M80A1_Tracer"
							
#define Standard_Mags_AR2 	"rhsusf_mag_15Rnd_9x19_FMJ",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
							"rhs_mag_an_m8hc",\
							"SMA_150Rnd_762_M80A1_Tracer",\
							"SMA_150Rnd_762_M80A1_Tracer"	
							
#define Standard_Mags_AR2_ammo 	"SMA_150Rnd_762_M80A1_Tracer"		
				
#define GL_Mags 		"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_SmokeRed_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_Smoke_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
						"1Rnd_HE_Grenade_shell",\
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
				
#define Recon_Mags		"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
						"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
						"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
						"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
						"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
						"30Rnd_556x45_Stanag_Tracer_Red",\
						"rhs_mag_m67",\
						"rhs_mag_m67",\
						"rhs_mag_m18_green",\
						"rhs_mag_m18_green",\
						"rhs_mag_m18_red",\
						"rhs_mag_m18_red",\
						"rhs_mag_an_m8hc",\
						"rhs_mag_an_m8hc"	
					
#define Std_Pistol		"rhsusf_mag_15Rnd_9x19_FMJ"

#define Std_m1911a1		"rhsusf_mag_7x45acp_MHP"
