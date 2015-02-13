class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class asdg_FrontSideRail;
class asdg_OpticRail1913;
	
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class FirstAidKit;
	class InventoryFirstAidKitItem_Base_F;
	class Medikit;
	class MedikitItem;

	class TEI_Biofoam: FirstAidKit
	{
		scope 										= 2;
		displayName 								= "Medical Biofoam";
		picture 									= "\A3\Weapons_F\Items\data\UI\gear_FirstAidKit_CA.paa"; //change
		model 										= "\TEI_Weapons\items\Biofoam.p3d";
		descriptionShort 							= "Self-sealing coagulant foam to stop bleeding and haemorrhaging";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryFirstAidKitItem_Base_F
		{
			mass=6;
		};
	};
		class TEI_MedKit: Medikit
	{
		scope 										= 2;
		displayName 								= "Medical Pack";
		picture 									= "\A3\Weapons_F\Items\data\UI\gear_Medikit_CA.paa"; //change
		model 										= "\TEI_Weapons\items\MedKit.p3d";
		descriptionShort 							= "Medical Kit to treat all combat inflicted wounds and injuries";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: MedikitItem
		{
			mass=40;
		};
	};
};