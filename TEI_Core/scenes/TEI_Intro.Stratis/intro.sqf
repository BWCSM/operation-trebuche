
man1 switchmove "KIA_passenger_injured_medevac_truck03";
man1 setdir 90;
man1 disableai "anim"; 
[man2, "KNEEL", "ASIS"] call BIS_fnc_ambientAnim;
man3 switchmove "c5efe_MichalLoop"; 
man3 disableai "anim"; man3 setdir 360; 
log2 attachTo [man3, [0, 0, -.28] ]; 
man4 switchmove "c5efe_HonzaLoop"; 
man4 disableai "anim"; 
man4 attachTo [man2, [-1, -1.9, .15] ]; 
man4 setdir 220; 
[man5, "STAND", "ASIS"] call BIS_fnc_ambientAnim;
[man6, "STAND", "ASIS"] call BIS_fnc_ambientAnim;
[man7, "STAND", "ASIS"] call BIS_fnc_ambientAnim;
man8 switchmove "Acts_listeningToRadio_Loop"; 
man8 disableai "anim"; 
man9 switchmove "Acts_ShieldFromSun_loop";
man9 disableai "anim"; 
man10 switchmove "InBaseMoves_Lean1";
man10 attachTo [man8, [-4.8, -1.5, 0] ]; 
man10 disableai "anim";
setacctime .5;
ShowCinemaborder false
playMusic "TEI_InnieDance";

titleCut ["", "BLACK IN", 5];
_camera = "camera" camcreate [6074.28,5604.57,1.23];
_camera cameraeffect ["internal", "back"];


;comment "21:11:39";
_camera camPrepareTarget [37439.75,100553.94,928.32];
_camera camPreparePos [6074.28,5604.57,1.23];
_camera camPrepareFOV 0.750;
_camera camCommitPrepared 0

["<img size='8' image='logo\tei_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;   



_camera camPrepareTarget [77651.51,75429.13,928.60];
_camera camPreparePos [6068.02,5608.04,1.35];
_camera camPrepareFOV 0.750;
_camera camCommitPrepared 180


~180

introover=true 
10 fadeMusic 0;