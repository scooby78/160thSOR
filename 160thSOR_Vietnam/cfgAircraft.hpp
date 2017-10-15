class RHS_AH1Z_wd;

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