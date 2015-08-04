class CfgAmmo
{
	class B_762x51_Ball;
	class OPTRE_FC_Plasma_Pistol_Bolt: B_762x51_Ball
	{
		hit 							= 12;
		indirectHit 					= 1;
		indirectHitRange 				= 0.15;
		cartridge 						= "FxCartridge_65_caseless";
		caliber 						= 0.1;
		coefGravity 					= 0.0;
		deflecting 						= 0;
		typicalSpeed 					= 175;
		maxSpeed 						= 175;
		explosive 						= 0;
		airFriction 					= 0;
		sideairFriction 				= 0;
		timeToLive 						= 10;
		model 							= "\OPTRE_FC_Weapons\data\bolt_green.p3d";
		tracerScale 					= 1;
		tracerStartTime 				= 0;
		tracerEndTime 					= 10;
	};
};