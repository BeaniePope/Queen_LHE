class CfgPatches
{
    class Queen_LHE_Core
    {
        name = "Queen LHE Core";
        author = "Queen";
        requiredAddons[]=
        {
            "fallout_uniform_03"
        };

        weapons[]=
        {
            "BOSLHE_Scribe_Base_Uniform"
            "BOSLHE_Field_Scribe_Uniform",
            "BOSLHE_Medical_Scribe_Uniform",
            "BOSLHE_Engineer_Scribe_Uniform",
            "BOSLHE_Lancer_Captan_Uniform",
            "BOSLHE_Knight_Base_Uniform",
            "BOSLHE_Knight_Black_Uniform",
            "BOSLHE_Knight_Olive_Uniform",
            "BOSLHE_Knight_Orange_Uniform",
            "BOSLHE_CombatArmor_Black_Vest",
            "BOSLHE_CombatArmor_Blue_Vest",
            "BOSLHE_CombatArmor_Desert_Vest",
            "BOSLHE_CombatArmor_Green_Vest",
            "BOSLHE_CombatArmor_White_Vest",
            "BOSLHE_CombatArmor_Helmet",
            "BOSLHE_Scribe_Helmet"
        };

        units[]=
        {
            "BOSLHE_Scribe_Base_Unit",
            "BOSLHE_Field_Scribe_Unit",
            "BOSLHE_Medical_Scribe_Unit",
            "BOSLHE_Engineer_Scribe_Unit",
            "BOSLHE_Lancer_Captain_Unit",
            "BOSLHE_Knight_Base_Unit",
            "BOSLHE_Knight_Black_Unit",
            "BOSLHE_Knight_Olive_Unit",
            "BOSLHE_Knight_Orange_Unit"
            "BOSLHE_Scribe_Backpack",
            "BOSLHE_Field_Scribe_Backpack"
        };


    };
};

class CfgWeapons
{
    //Have to declare everything again bc arma 3
    class UniformItem;
    class ItemCore;
    
    //Helmets

    //Vests

    //Scribe Uniforms + Lancer Captain
    class BOSLHE_Scribe_Base_Uniform: Uniform_Base
    {
        author = "Queen";
        scope = 0;
        displayName = "[BOSLHE] Scribe Base Uniform (Dev)";
        class ItemInfo: UniformItem
        {
            uniformClass = "BOSLHE_Scribe_Base_Unit";
            uniformType = "Neopren";
            containerClass = "Supply200"
            mass = 40;
        };
    };
    class BOSLHE_Field_Scribe_Uniform: BOSLHE_Scribe_Base_Uniform
    { 
        displayName = "[BOSLHE] Field Scribe Uniform";
    };
    class BOSLHE_Medical_Scribe_Uniform: BOSLHE_Scribe_Base_Uniform
    {
        displayName = "[BOSLHE] Medical Scribe Uniform";
    };
    class BOSLHE_Engineer_Scribe_Uniform: BOSLHE_Scribe_Base_Uniform
    {
        displayName = "[BOSLHE] Engineer Scribe Uniform";
    };
    class BOSLHE_Lancer_Captain_Uniform: BOSLHE_Scribe_Base_Uniform
    {
        displayName = "[BOSLHE] Lancer-Captain Uniform";
    };

    //Knight Uniforms
    class BOSLHE_Knight_Base_Uniform: Uniform_Base
    {
        author = "Queen";
        scope = 0;
        displayName = "[BOSLHE] Knight Base Uniform (Dev)";
        class ItemInfo: UniformItem
        {
            uniformClass = "BOSLHE_Knight_Base_Uniform";
            uniformType = "Neopren";
            containerClass = "Supply150";
            mass = 40;
        };
    };

};

class CfgVehicles
{
    //declarations
    class HitPoints;
    class B_Soldier_base_F;
    //Scribe Uniforms + Lancer-Captain Uniform
    class BOSLHE_Scribe_Base_Unit: B_soldier_base_F
    {
        author = "Queen";
        scope = 0;
        displayName = "[BOSLHE] Scribe Base Unit (Dev)";
        editorPreview = "LHE_Core\data\ui\editorPreviews\FieldScribeEditorPreview.png";
        faction = "BOSLHE_Faction";
        editorSubcategory = "EdSubcat_Personnel";
        backpack = "";
        uniformClass = "BOSLHE_Scribe_Base_Uniform";
        hiddenSelections[]=
        {

        };
        hiddenSelectionsTextures[]=
        {
            
        };
        linkedItems[]=
        {
            "BOSLHE_Scribe_Helmet";
        };
        respawnLinkedItems[]=
        {
            "BOSLHE_Scribe_Helmet";
        };
        weapons[]=
        {

        };
        respawnWeapons[]=
        {

        };
        magazines[]=
        {

        };
        respawnMagazines[]=
        {

        };
        items[]=
        {

        }
        respawnItems[]=
        {

        }
		class HitPoints: HitPoints
		{
		class HitFace
		{
			armor=2;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=2;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=2;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=13;
			material=-1;
			name="pelvis";
			passThrough=0.80000001;
			radius=0.23999999;
			explosionShielding=3;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=10;
			material=-1;
			name="spine1";
			passThrough=0.80000001;
			radius=0.16;
			explosionShielding=3;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=10;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=13;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=13;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=6;
			visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=10;
			material=-1;
			name="arms";
			passThrough=1;
			radius=0.1;
			explosionShielding=3;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitHands: HitArms
		{
			armor=10;
			material=-1;
			name="hands";
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=10;
			material=-1;
			name="legs";
			passThrough=1;
			radius=0.14;
			explosionShielding=3;
			visual="injury_legs";
			minimalHit=0.0099999998;
			depends="0";
		};
		class Incapacitated: HitLegs
		{
			armor=13;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=3;
			visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
		class HitLeftArm
		{
			armor=10;
			material=-1;
			name="hand_l";
			passThrough=1;
			radius=0.079999998;
			explosionShielding=3;
			visual="injury_hands";
			minimalHit=0.0099999998;
		};
		class HitRightArm: HitLeftArm
		{
			name="hand_r";
		};
		class HitLeftLeg
		{
			armor=10;
			material=-1;
			name="leg_l";
			passThrough=1;
			radius=0.1;
			explosionShielding=3;
			visual="injury_legs";
			minimalHit=0.0099999998;
		};
		class HitRightLeg: HitLeftLeg
		{
			name="leg_r";
		};
		};
		armor=2;
		armorStructural=4;
		explosionShielding=0.40000001;
		minTotalDamageThreshold=0.001;
		impactDamageMultiplier=0.5;
    };
    
    class 
    //Knight Uniforms
};