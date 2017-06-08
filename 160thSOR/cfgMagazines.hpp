/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 22/06/16
	Description: cfgMagazines.hpp
*/

class CfgMagazines
{
	class rhsusf_100Rnd_762x51_m62_tracer;
	
	class rhs_mag_M829;
	class rhs_mag_M830;
	class VehicleMagazine;
	
	class SOR_rhsusf_100Rnd_762x51_m62_tracer: rhsusf_100Rnd_762x51_m62_tracer 
	{
		ammo = "B_338_Ball";		
	};
// RHS tank rounds
	class rhs_mag_M829A3: rhs_mag_M829
	{
		count = 20;
	};
	class rhs_mag_M830A1: rhs_mag_M830
	{
		count = 10;
	};
	class rhs_mag_M1069: VehicleMagazine
	{
		count = 6;
	};
};

