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
            "BOSLHE_Field_Scribe_Uniform",
        };

        units[]=
        {
            "BOSLHE_Field_Scribe_Uniform",
            "BOSLHE_Field_Scribe_Uniform_wBackpack",
            "BOSLHE_Medical_Scribe_Uniform",
            "BOSLHE_Medical_Scribe_Uniform_wBackpack",
            "BOSLHE_Engineer_Scribe_Uniform",
            "BOSLHE_Engineer_Scribe_Uniform_wBackpack",
            "BOSLHE_Lancer_Captain",
            "BOSLHE_Lancer_Captain_wBackpack",
            "BOSLHE_Combat_Armor_Black_Black",
            "BOSLHE_Combat_Armor_Black_Blue",
            "BOSLHE_Combat_Armor_Black_Desert",
            "BOSLHE_Combat_Armor_Black_Green",
            "BOSLHE_Combat_Armor_Black_White",
            "BOSLHE_Combat_Armor_Olive_Black",
            "BOSLHE_Combat_Armor_Olive_Blue",
            "BOSLHE_Combat_Armor_Olive_Desert",
            "BOSLHE_Combat_Armor_Olive_Green",
            "BOSLHE_Combat_Armor_Olive_White",
            "BOSLHE_Combat_Armor_Orange_Black",
            "BOSLHE_Combat_Armor_Orange_Blue",
            "BOSLHE_Combat_Armor_Orange_Desert",
            "BOSLHE_Combat_Armor_Orange_Green",
            "BOSLHE_Combat_Armor_Orange_White",
        };


    };
};

class CfgWeapons
{
    //Have to declare everything again bc arma 3
    class FieldScribe_uniform; //Red
    class Field_Scribe_uniform;
    class Field_Scribe_Kells_uniform; //Blue
    class FieldScribe_Kells_uniform;
    class Field_Scribe_Grey_uniform; //Brown
    class FieldScribe_Grey_uniform;
    class Field_Scribe_Cade_uniform; //white
    class FieldScribe_Cade_uniform;
    class CombatArmor_medium_Brotherhood_black_black_uniform;
    class CombatArmor_medium_Brotherhood_black_blue_uniform;
    class CombatArmor_medium_Brotherhood_black_desert_uniform;
    class CombatArmor_medium_Brotherhood_black_green_uniform;
    class CombatArmor_medium_Brotherhood_black_white_uniform;
    class CombatArmor_medium_Brotherhood_olive_black_uniform;
    class CombatArmor_medium_Brotherhood_olive_blue_uniform;
    class CombatArmor_medium_Brotherhood_olive_desert_uniform;
    class CombatArmor_medium_Brotherhood_olive_green_uniform;
    class CombatArmor_medium_Brotherhood_olive_white_uniform;
    class CombatArmor_medium_Brotherhood_orange_black_uniform;
    class CombatArmor_medium_Brotherhood_orange_blue_uniform;
    class CombatArmor_medium_Brotherhood_orange_desert_uniform;
    class CombatArmor_medium_Brotherhood_orange_green_uniform;
    class CombatArmor_medium_Brotherhood_orange_white_uniform;

    //Scribe Uniforms + Lancer Captain
    class BOSLHE_Field_Scribe_Uniform: FieldScribe_uniform
    { 
        displayName = "[BOSLHE] Field Scribe Uniform";
    };
    class BOSLHE_Field_Scribe_Uniform_wBackpack: Field_Scribe_uniform
    {
        displayName = "[BOSLHE] Field Scribe Uniform (Backpack)";
    };
    class BOSLHE_Medical_Scribe_Uniform: FieldScribe_Cade_uniform
    {
        displayName = "[BOSLHE] Medical Scribe Uniform";
    };
    class BOSLHE_Medical_Scribe_Uniform_wBackpack: Field_Scribe_Cade_uniform
    {
        displayName ="[BOSLHE] Medical Scribe Uniform (Backpack)";
    };
    class BOSLHE_Engineer_Scribe_Uniform: FieldScribe_Grey_uniform
    {
        displayName = "[BOSLHE] Engineer Scribe Uniform";
    };
    class BOSLHE_Engineer_Scribe_Uniform_wBackpack: Field_Scribe_Grey_uniform
    {
        displayName = "[BOSLHE] Engineer Scribe Uniform (Backpack)";
    };
    class BOSLHE_Lancer_Captain: FieldScribe_Kells_uniform
    {
        displayName = "[BOSLHE] Lancer-Captain Uniform";
    };
    class BOSLHE_Lancer_Captain_wBackpack: Field_Scribe_Kells_uniform
    {
        displayName = "[BOSLHE] Lancer-Captain Uniform (Backpack)";
    };

    //Knight Uniforms
    class BOSLHE_Combat_Armor_Black_Black: CombatArmor_medium_Brotherhood_black_black_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Black, Black)";
    };
    class BOSLHE_Combat_Armor_Black_Blue: CombatArmor_medium_Brotherhood_black_blue_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Black, Blue)";
    };
    class BOSLHE_Combat_Armor_Black_Desert: CombatArmor_medium_Brotherhood_black_desert_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Black, Desert)";
    };
    class BOSLHE_Combat_Armor_Black_Green: CombatArmor_medium_Brotherhood_black_green_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Black, Green)";
    };
    class BOSLHE_Combat_Armor_Black_White: CombatArmor_medium_Brotherhood_black_white_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Black, White)";
    };
    class BOSLHE_Combat_Armor_Olive_Black: CombatArmor_medium_Brotherhood_olive_black_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Olive, Black)";
    };
    class BOSLHE_Combat_Armor_Olive_Blue: CombatArmor_medium_Brotherhood_olive_blue_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Olive, Blue)";
    };
    class BOSLHE_Combat_Armor_Olive_Desert: CombatArmor_medium_Brotherhood_olive_desert_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Olive, Desert)";
    };
    class BOSLHE_Combat_Armor_Olive_Green: CombatArmor_medium_Brotherhood_olive_green_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Olive, Green)";
    };
    class BOSLHE_Combat_Armor_Olive_White: CombatArmor_medium_Brotherhood_olive_white_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Olive, White)";
    };
    class BOSLHE_Combat_Armor_Orange_Black: CombatArmor_medium_Brotherhood_orange_black_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Orange, Black)";
    };
    class BOSLHE_Combat_Armor_Orange_Blue: CombatArmor_medium_Brotherhood_orange_blue_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Orange, Blue)";
    };
    class BOSLHE_Combat_Armor_Orange_Desert: CombatArmor_medium_Brotherhood_orange_desert_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Orange, Desert)";
    };
    class BOSLHE_Combat_Armor_Orange_Green: CombatArmor_medium_Brotherhood_orange_green_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Orange, Green)";
    };
    class BOSLHE_Combat_Armor_Orange_White: CombatArmor_medium_Brotherhood_orange_white_uniform
    {
        displayName = "[BOSLHE] Knight Uniform (Orange, White)";
    };

};

class CfgVehicles
{
    //Have to declare everything again bc arma 3 (again)
    class HitPoints;
    class FieldScribe_uniform; //Red
    class Field_Scribe_uniform;
    class Field_Scribe_Kells_uniform; //Blue
    class FieldScribe_Kells_uniform;
    class Field_Scribe_Grey_uniform; //Brown
    class FieldScribe_Grey_uniform;
    class Field_Scribe_Cade_uniform; //white
    class FieldScribe_Cade_uniform;
    class CombatArmor_medium_Brotherhood_black_black_uniform;
    class CombatArmor_medium_Brotherhood_black_blue_uniform;
    class CombatArmor_medium_Brotherhood_black_desert_uniform;
    class CombatArmor_medium_Brotherhood_black_green_uniform;
    class CombatArmor_medium_Brotherhood_black_white_uniform;
    class CombatArmor_medium_Brotherhood_olive_black_uniform;
    class CombatArmor_medium_Brotherhood_olive_blue_uniform;
    class CombatArmor_medium_Brotherhood_olive_desert_uniform;
    class CombatArmor_medium_Brotherhood_olive_green_uniform;
    class CombatArmor_medium_Brotherhood_olive_white_uniform;
    class CombatArmor_medium_Brotherhood_orange_black_uniform;
    class CombatArmor_medium_Brotherhood_orange_blue_uniform;
    class CombatArmor_medium_Brotherhood_orange_desert_uniform;
    class CombatArmor_medium_Brotherhood_orange_green_uniform;
    class CombatArmor_medium_Brotherhood_orange_white_uniform;

    //Scribe Uniforms + Lancer-Captain Uniform
    class BOSLHE_Field_Scribe_Uniform: FieldScribe_uniform
    {
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
    class BOSLHE_Field_Scribe_Uniform_wBackpack: Field_Scribe_uniform
    {
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
    class BOSLHE_Medical_Scribe_Uniform: FieldScribe_Cade_uniform
    {
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
    class BOSLHE_Medical_Scribe_Uniform_wBackpack: Field_Scribe_Cade_uniform
{
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
    class BOSLHE_Engineer_Scribe_Uniform: FieldScribe_Grey_uniform
{
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
    class BOSLHE_Engineer_Scribe_Uniform_wBackpack: Field_Scribe_Grey_uniform
{
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
    class BOSLHE_Lancer_Captain: FieldScribe_Kells_uniform
{
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
    class BOSLHE_Lancer_Captain_wBackpack: Field_Scribe_Kells_uniform
{
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
    class BOSLHE_Combat_Armor_Black_Black: CombatArmor_medium_Brotherhood_black_black_uniform
    {
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
};