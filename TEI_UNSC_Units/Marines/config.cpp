enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_UNSC_Units_Marines
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	class TEI_UNSC_Army_Medic;
	
	// SOLDIERS
	
	class TEI_UNSC_Marine_heavy: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Heavy]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_heavy";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
	};
	class TEI_UNSC_Marine_vacuum_heavy: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Heavy/Vacuum]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_heavy";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
	};
class TEI_UNSC_Marine_medium: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Medium]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_medium";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
	};
	class TEI_UNSC_Marine_light: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Rifleman [Light]";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_light";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest","TEI_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
	};
	
	//CLASSES WITH WEAPONS
	
	class TEI_UNSC_Marine_Corpsman: TEI_UNSC_Army_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Corpsman";
		attendant 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_Medic","TEI_UNSC_CH252V_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_MedKit","TEI_Biofoam"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52V_Vest_Medic","TEI_UNSC_CH252V_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_MedKit","TEI_Biofoam"};
	};
	class TEI_UNSC_Marine_Radioman: TEI_UNSC_Marine_vacuum_heavy //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "TEI_Como_pack_1";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Marine_Pilot: B_Soldier_F
	{
		scope															= 2;
		faction															= "TEI_UNSC";
		author															= "Eridanus Insurrection Team";
		displayName														= "Pilot";
		vehicleClass													= "TEI_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "TEI_UNSC_Marine_Uniform_pilot";
		model															= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[] 														= {"TEI_M6G_SF","TEI_M6G_Scope","Throw","Put"};
		respawnWeapons[] 												= {"TEI_M6G_SF","TEI_M6G_Scope","Throw","Put"};
		magazines[] 													= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[]	 											= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		linkedItems[] 													= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"TEI_UNSC_Marine_Vest_vacuum","TEI_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"TEI_UNSC_Units\Marines\data\armor_cam3_co.paa","TEI_UNSC_Units\Marines\data\uniform_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
	};
	class TEI_UNSC_Marine_Rifleman_AR: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Marine_Rifleman_BR: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
	};
	class TEI_UNSC_Marine_Rifleman_AT: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G"};
	};
	class TEI_UNSC_Marine_Rifleman_Light: TEI_UNSC_Marine_medium
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Marine_AT_Specialist: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G"};
	};
	class TEI_UNSC_Marine_AA_Specialist: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA"};
	};
	class TEI_UNSC_Marine_Engineer: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
	};
	class TEI_UNSC_Marine_Breacher: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
	};
	class TEI_UNSC_Marine_TeamLead: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
	};
	class TEI_UNSC_Marine_SquadLead: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
	};
	class TEI_UNSC_Marine_Grenadier: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class TEI_UNSC_Marine_Autorifleman: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"Weapon_LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"Weapon_LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box"};
	};
	class TEI_UNSC_Marine_Assist_Autorifleman: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","150Rnd_762x51_Box","150Rnd_762x51_Box"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","150Rnd_762x51_Box","150Rnd_762x51_Box"};
	};
	class TEI_UNSC_Marine_Marksman: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"Weapon_srifle_EBR_F","Throw","Put"};
		respawnWeapons[] 								= {"Weapon_srifle_EBR_F","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Marine_Sniper: TEI_UNSC_Marine_vacuum_heavy //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"Weapon_srifle_GM6_F","Throw","Put"};
		respawnWeapons[] 								= {"Weapon_srifle_GM6_F","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
		respawnMagazines[] 								= {"5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag","5Rnd_127x108_Mag"};
	};
	class TEI_UNSC_Marine_Observer: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		Items[]											= {"FirstAidKit","Item_Laserdesignator"};
		RespawnItems[]									= {"FirstAidKit","Item_Laserdesignator"};
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
	};
	class TEI_UNSC_Marine_Crewman: TEI_UNSC_Marine_Pilot
	{
		displayName										= "Crewman";
		weapons[] 										= {"TEI_M6G_SF","TEI_M6G_Scope","Throw","Put"}; //change to SMG
		respawnWeapons[] 								= {"TEI_M6G_SF","TEI_M6G_Scope","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]									= {"FirstAidKit"};
	};
	class TEI_UNSC_Marine_Demolitions: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		Items[]											= {"FirstAidKit"}; //give explosives
		RespawnItems[]									= {"FirstAidKit"};
	};
	class TEI_UNSC_Marine_UAV_Op: TEI_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		Items[]											= {"FirstAidKit","Item_B_UavTerminal"};
		RespawnItems[]									= {"FirstAidKit","Item_B_UavTerminal"};
	};
	class TEI_UNSC_Marine_Unarmed: TEI_UNSC_Marine_medium
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class TEI_UNSC_Marine_Officer: TEI_UNSC_Marine_light
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class TEI_UNSC_Marine_Sgt_Johnson: TEI_UNSC_Marine_medium //make black and give military cap
	{
		scope											= 2;
		displayName										= "Sgt. Avery Johnson";
		vehicleClass									= "TEI_UNSC_Man_Marines_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
};

class cfgWeapons
{
	class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	
	// UNIFORMS
	
	class TEI_UNSC_Marine_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope															= 0;
		author															= "Eridanus Insurrection Team";
		displayName														= "-";
		picture															= "";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "TEI_UNSC_Marine_Soldier";
			containerClass													= "Supply20";
			mass														= 50; //The weight and storage capacity of the uniform
			modelSides[] 													= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_heavy: TEI_UNSC_Marine_uniform_base
	{
		scope															= 2;
		author															= "Eridanus Insurrection Team";
		displayName														= "[UNSC] Marine BDU (Heavy)";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "TEI_UNSC_Marine_Heavy";
			containerClass													= "Supply60";
			mass														= 70;
			modelSides[] 													= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_pilot: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Pilot Uniform [Marine]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_pilot";
			containerClass									= "Supply30";
			mass										= 40;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_medium: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Marine BDU (Medium)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_medium";
			containerClass									= "Supply50";
			mass										= 60;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_uniform_light: TEI_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Marine BDU (Light)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Marine_light";
			containerClass									= "Supply50";
			mass										= 50;
			modelSides[] 									= {6};
		};
	};



///VEST
	class TEI_UNSC_Marine_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 0; /// what protection does the vest provide
			containerClass 									= "Supply140";
			mass 										= 40;
			passThrough 									= 0; /// coef of damage passed to total damage
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Marine_vest: TEI_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  										= "[UNSC] M52 Body Armor (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_vest_vacuum: TEI_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  									= "[UNSC] M52[V] Body Armor (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Marines\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   								= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 30; /// what protection does the vest provide
			containerClass   							= "Supply140";
			mass   										= 40;
			passThrough   								= 0.1; /// coef of damage passed to total damage
			modelSides[]   								= {6};
			hiddenSelections[]   						= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};


// HELMETS
	
	class TEI_UNSC_Marine_helmet_base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 0; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_helmet: TEI_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] CH252 Helmet (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Marine_helmet_vacuum: TEI_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    										= "[UNSC] CH252[V] Helmet (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"TEI_UNSC_Units\Marines\data\helmet_cam3_co.paa","TEI_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"TEI_UNSC_Units\Army\data\helmet_cam3_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
};