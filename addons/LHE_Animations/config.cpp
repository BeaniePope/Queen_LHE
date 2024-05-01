class CfgPatches
{
    class LHE_Animations
    {
        requiredaddons[] = 
        {
            "A3_Functions_F",
			"ace_main"
        };
		units[] = {};
		weapons[] = {};
		magazines[] = {};
    };
};


class CfgMovesBasic; // Reference CfgMovesBasic. 
class CfgMovesMaleSdr : CfgMovesBasic // Override CfgMovesMaleSdr
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class CutSceneAnimationBaseSit;
		class BOSSalute: CutSceneAnimationBaseSit
		{
			looped = 0; // turn in loop or not
			speed = -5; // duration of your animation in seconds * -1 
			file = "\LHE_Animations\data\BrotherhoodSalute.rtm"; // your animation path
			canBlendStep = 0; // sliding effect on/off
			minPlayTime= 1; // minimun time before the animation can be interrupted
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 2}; // next animation after this one
		};
	};
};

class Extended_PreInit_EventHandlers
{
    class LHE_Preinit
    {
        init="call compile preprocessFileLineNumbers '\LHE_Animations\XEH_preInit.sqf'";
    };
};

// Register a simple keypress to an action


/* class CfgMovesBasic // This defines the animation names so they may be retrieved by scripts.
{
    class default;
 	class DefaultDie;
 	class ManActions
 	{
 		GestureBOSSalute[] = {"GestureBOSSalute", "gesture"};
 	};
	
};

class CfgGesturesMale // This defines what file the animation is and the specifics
{
	
 	class States
 	{
	 	class AmovPercMstpSrasWrflDnon_Salute; // Inherit from a similar file so I you do not have to re-invent the wheel.
 		class GestureBOSSalute: AmovPercMstpSrasWrflDnon_Salute
 		{
 			file = "\LHE_Animations\data\BrotherhoodSalute.rtm"; //Make this your own path to file!!!!
			//mask = "handsWeapon";
			canPullTrigger = 0;
 		};
	};

 }; */