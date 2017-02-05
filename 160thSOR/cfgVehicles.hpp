/*
	Name: 160th Mod
	Author: AmTheAgent
	Date: 27/09/15 01:09
	Description: cfgVehicles.hpp
*/

class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class cfgVehicles 
{	 
	#include "cfgBackpacks.hpp"
	#include "cfgBackpacksWoodland.hpp"
	
	#include "cfgObjects.hpp"
	
	#include "cfgTroopsDesert.hpp"
	#include "cfgTroopsWoodland.hpp"	
	#include "cfgOpForDesert.hpp"
	
	#include "cfgCrates.hpp"
	#include "cfgCratesWoodland.hpp"

	#include "cfgAircraft.hpp"
	#include "cfgAircraftWoodland.hpp"

	#include "cfgArmour.hpp"
	#include "cfgArmour2.hpp"
	#include "cfgArmourWoodland.hpp"
	
	#include "cfgBoat.hpp"	
};