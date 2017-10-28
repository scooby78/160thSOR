class RHS_AH1Z_wd;
class UH1C_XM21AS;
class UH1H_FFV;
class UH1H_Medevac;
//AH1Z BASE CLASS
class SOR_COBRA_BASE: RHS_AH1Z_wd
{
	scope=0;
	side=1;	
	displayName="AH1Z";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_HeliPilot_Nam";
	typicalCargo[]=	{"SOR_HeliPilot_Nam"};
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"160thSOR_Vietnam\data\COBRA.paa","160thSOR_Vietnam\data\COBRA2.paa"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};	
//	armorStructural = 5; // Was 5	
//	fuelCapacity = 200; //was fuelCapacity = 236;
//	fuelConsumptionRate = 0.08; //was 0.08;
	class Components;
};

class SOR_COBRA_Nam: SOR_COBRA_BASE
{
	scope=2;
	class Components: Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_AH1_EDEN_CA.paa";
			class pylons
			{
				class pylonTip1
				{
					hardpoints[] = {"RHS_HP_AIM9_HELI_USMC"};
					priority = 3;
					attachment = "rhs_mag_Sidewinder_heli_2";
					maxweight = 1200;
					UIposition[] = {0.625, 0.25};
					bay = -1;
				};
				class pylon2
				{
					hardpoints[] = {"RHS_HP_HELLFIRE_RACK", "RHS_HP_FFAR_USMC"};
					priority = 2;
					attachment = "rhs_mag_M151_19_green";
					maxweight = 1200;
					UIposition[] = {0.625, 0.39};
					bay = -1;
					turret[] = {};
				};
				class pylon3: pylon2
				{
					UIposition[] = {0.565, 0.44};
					priority = 1;
					attachment = "rhs_mag_M151_19_green";
					turret[] = {};
				};
				class pylon4: pylon3
				{
					UIposition[] = {0.1, 0.44};
					mirroredMissilePos = 3;
					turret[] = {};
				};
				class pylon5: pylon2
				{
					UIposition[] = {0.04, 0.39};
					mirroredMissilePos = 2;
					turret[] = {};
				};
				class pylonTip6: pylonTip1
				{
					UIposition[] = {0.04, 0.25};
					mirroredMissilePos = 1;
				};
			};
		};
	};
};
class SOR_HUEY_Gunship: UH1C_XM21AS
{
	scope=2;
	side=1;	
	displayName="UH1C XM21 AS";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_HeliPilot_Nam";
	typicalCargo[]=	{"SOR_HeliPilot_Nam"};
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(100rnd_m60E3_tracer,10)	
		mag_xx(1Rnd_HE_Grenade_shell,20)			
		mag_xx(1Rnd_Smoke_Grenade_shell,10)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,10)	
		mag_xx(rhs_mag_m67,10)
		mag_xx(rhs_mag_an_m8hc,10)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,20)
	};
	class TransportBackpacks{};
	armorStructural = 5; // Was 5	
	fuelCapacity = 200; //was fuelCapacity = 236;
	fuelConsumptionRate = 0.08; //was 0.08;
};
class SOR_HUEY_Transport: UH1H_FFV
{
	scope=2;
	side=1;	
	displayName="UH1H Transport";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_HeliPilot_Nam";
	typicalCargo[]=	{"SOR_HeliPilot_Nam"};
	class TransportItems
	{
		item_xx(ACE_FieldDressing,50);
		item_xx(ACE_morphine,20);
	};
	class TransportWeapons
	{
		weap_xx(rhs_weap_m72a7,8)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
		mag_xx(100rnd_m60E3_tracer,10)	
		mag_xx(1Rnd_HE_Grenade_shell,20)			
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks{};
	armorStructural = 5; // Was 5	
	fuelCapacity = 200; //was fuelCapacity = 236;
	fuelConsumptionRate = 0.08; //was 0.08;

};
class SOR_HUEY_medevac: UH1H_Medevac
{
	scope=2;
	side=1;	
	displayName="UH1H Medevac";
	editorCategory = "SOR_Cat_Faction_Nam";
	faction = "SOR_Faction_Nam";
	crew="SOR_HeliPilot_Nam";
	typicalCargo[]=	{"SOR_HeliPilot_Nam"};
	class TransportItems
	{
		item_xx(ACE_bloodIV_500,10);
		item_xx(ACE_FieldDressing,150);
		item_xx(ACE_morphine,50);
		item_xx(ACE_epinephrine,50);
	};
	class TransportWeapons{};
	class TransportMagazines
	{

	};
	class TransportBackpacks
	{
	};
	armorStructural = 5; // Was 5	
	fuelCapacity = 200; //was fuelCapacity = 236;
	fuelConsumptionRate = 0.08; //was 0.08;
};