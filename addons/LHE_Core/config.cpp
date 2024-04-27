class CfgPatches
{
    class LHE_Core
    {
        name = "LHE Core";
        author = "Lost Hills Mod Team";
        requiredVersion = 0.1;
        requiredAddons[] = 
		{
            "A3_Data_F_Mod_Loadorder"
        };
        weapons[]=
        {
            "BOSLHE_Scribe_Base_Uniform",
            "BOSLHE_Field_Scribe_Uniform",
            "BOSLHE_Medical_Scribe_Uniform",
            "BOSLHE_Engineer_Scribe_Uniform",
            "BOSLHE_Lancer_Captan_Uniform",
            "BOSLHE_Knight_Base_Uniform",
            "BOSLHE_Knight_Black_Uniform",
            "BOSLHE_Knight_Olive_Uniform",
            "BOSLHE_Knight_Orange_Uniform",
			"BOSLHE_Field_Scribe_Inventory",
			"BOSLHE_CombatArmor_Base_Vest",
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
            "BOSLHE_Knight_Officer_Unit",
            "BOSLHE_Knight_Standard_Unit",
            "BOSLHE_Knight_Initiate_Unit",
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
	class Uniform_Base;
	class VestItem;
	class ItemInfo;
    
    //Helmets

    //Vests
	class BOSLHE_Field_Scribe_Inventory: ItemCore
	{
		author = "Lost Hills Mod Team";
		scope = 2; 
		scopeArsenal = 2;
		scopeCurator = 2;
		//maximumLoad = 600;
		model = "";
		allowedSlots[] = { 901 };
		displayName = "[BOSSP] Field Scribe Inventory";
		class ItemInfo: ItemInfo
		{
			mass = 15;
		};
	};
	class BOSLHE_CombatArmor_Base_Vest: ItemCore
	{
		author = "Lost Hills Mod Team";
		scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
		allowedSlots[] = { 901 };
		displayName = "[BOSLHE] Knight Base Armor (Dev)";
		hiddenSelections[] =
		{
			"camoArms",
			"camoLegs",
			"camoTorso",
			"camoInsignia"
		};
		hiddenSelectionsTextures[] = 
		{
		};
		hiddenSelectionsMaterials[] = 
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\LHE_Core\models\CombatArmor.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointname = "HitChest";
				armor = 16;
				passThrough = .5;
			};
			class Arms
			{
				hitpointname = "HitArms";
				armor = 8;
				passThrough = .5;
			};
		};
	};

	class BOSLHE_CombatArmor_Black_Vest: BOSLHE_CombatArmor_Base_Vest
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[TSP] Black Combat Armor";
		hiddenSelectionsTextures[] = 
		{
			"\LHE_Core\data\textures\vests\Black\CombatArmorArms_co.paa",
			"\LHE_Core\data\textures\vests\Black\CombatArmorLegs_co.paa",
			"\LHE_Core\data\textures\vests\Black\CombatArmorTorso_co.paa",
			"\LHE_Core\data\textures\vests\Shared\CombatArmorInsignia_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\LHE_Core\models\CombatArmor.p3d";
			containerClass = "Supply80";
			mass = 15;
		};
	};

    //Scribe Uniforms + Lancer Captain
    class BOSLHE_Scribe_Base_Uniform: Uniform_Base
    {
        author = "Lost Hills Mod Team";
        scope = 0;
        displayName = "[BOSLHE] Scribe Base Uniform (Dev)";
		//model = "\BOSLHE\data\models\statics\ScribeUniformItem.p3d";
        class ItemInfo: UniformItem
        {
            uniformClass = "BOSLHE_Scribe_Base_Unit";
            uniformType = "Neopren";
            containerClass = "Supply200";
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
        author = "Lost Hills Mod Team";
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
	
	class BOSLHE_Knight_Olive_Uniform: BOSLHE_Knight_Base_Uniform
	{
		scope = 2;
		displayName = "[BOSLHE] Knight Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "BOSLHE_Knight_Standard_Unit";
			uniformType = "Neopren";
            containerClass = "Supply150";
            mass = 40;
		};
	};
	class BOSLHE_Knight_Black_Uniform: BOSLHE_Knight_Base_Uniform
	{
		scope = 2;
		displayName = "[BOSLHE] Knight Officer Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "BOSLHE_Knight_Officer_Unit";
			uniformType = "Neopren";
            containerClass = "Supply150";
            mass = 40;
		};
	};
	class BOSLHE_Knight_Initiate_Uniform: BOSLHE_Knight_Base_Uniform
	{
		scope = 2;
		displayName = "[BOSLHE] Knight Initiate Uniform";
		class ItemInfo: UniformItem
		{
			uniformClass = "BOSLHE_Knight_Initiate_Unit";
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
	class Bag_Base;
	//Backpacks
	class BOSLHE_Scribe_Backpack: Bag_Base
	{
		author = "Queen";
		scope = 2;
		displayName = "[BOSLHE] Scribe Backpack";
		picture = "\BOSLHE_Core\data\ui\pictures\ScribeBackpackPicture.paa";
		model = "\BOSLHE_Core\data\models\backpacks\ScribeBackpackModel.p3d";
		maximumLoad = 200;
		mass = 40;
		hiddenSelections[]=
		{

		};
		hiddenSelectionsTextures[]=
		{

		};
	};

    //Scribe Uniforms + Lancer-Captain Uniform
    class BOSLHE_Scribe_Base_Unit: B_soldier_base_F
    {
        author = "Lost Hills Mod Team";
        scope = 0;
        displayName = "[BOSLHE] Scribe Base Unit (Dev)";
        //editorPreview = "LHE_Core\data\ui\editorPreviews\FieldScribeEditorPreview.png";
        faction = "BOSLHE_Faction";
        editorSubcategory = "EdSubcat_Personnel";
        backpack = "";
        uniformClass = "BOSLHE_Scribe_Base_Uniform";
		//model = "\BOSLHE\data\models\uniforms\ScribeUniform.p3d";
        hiddenSelections[]=
        {

        };
        hiddenSelectionsTextures[]=
        {
            
        };
		hiddenSelectionsMaterials[]=
		{

		};
        linkedItems[]=
        {
            "BOSLHE_Scribe_Helmet",
        };
        respawnLinkedItems[]=
        {
            "BOSLHE_Scribe_Helmet",
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

        };
        respawnItems[]=
        {

        };
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
    class BOSLHE_Field_Scribe_Unit: BOSLHE_Scribe_Base_Unit
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[BOSLHE] Field Scribe";
		//editorPreview = "\LHE_Core\data\ui\editorPreviews\FieldScribeEditorPreview.paa";
		uniformClass = "BOSLHE_Field_Scribe_Uniforms";
		hiddenSelectionsTextures[]=
		{

		};
	};
    
    //Knight Uniforms
	class BOSLHE_Knight_Base_Unit: B_soldier_base_F
	{
        author = "Lost Hills Mod Team";
        scope = 0;
		scopeArsenal = 0;
		scopeCurator = 0;
        displayName = "[BOSLHE] Knight Base Unit (Dev)";
        //editorPreview = "LHE_Core\data\ui\editorPreviews\KnightInitiateEditorPreview.paa";
        model = "\LHE_Core\models\KnightUndersuit.p3d";
		faction = "BOSLHE_Faction";
        editorSubcategory = "EdSubcat_Personnel";
        backpack = "";
        uniformClass = "BOSLHE_Knight_Base_Uniform";
        hiddenSelections[]=
        {
			"camo"
        };
        hiddenSelectionsTextures[]=
        {
            
        };
		hiddenSelectionsMaterials[]=
		{
			"\LHE_Core\data\textures\uniforms\KnightUndersuit.rvmat"
		};
        linkedItems[]=
        {
            "BOSLHE_Combat_Helmet",
        };
        respawnLinkedItems[]=
        {
            "BOSLHE_Combat_Helmet",
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

        };
        respawnItems[]=
        {

        };
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
	class BOSLHE_Knight_Officer_Unit: BOSLHE_Knight_Base_Unit
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[BOSLHE] Knight Officer";
		editorPreview = "\LHE_Core\data\ui\editorPreviews\BlackPreviewImage_ca.paa";
		uniformClass = "BOSLHE_Knight_Black_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\LHE_Core\data\textures\uniforms\Black\KnightUndersuit_co.paa"
		};	
	};
	class BOSLHE_Knight_Initiate_Unit: BOSLHE_Knight_Base_Unit
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[BOSLHE] Knight Initiate";
		//editorPreview = "";
		uniformClass = "BOSLHE_Knight_Orange_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\LHE_Core\data\textures\uniforms\Orange\KnightUndersuit_co.paa"
		};
	};
	class BOSLHE_Knight_Standard_Unit: BOSLHE_Knight_Base_Unit
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[BOSLHE] Knight Initiate";
		//editorPreview = "";
		uniformClass = "BOSLHE_Knight_Olive_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\LHE_Core\data\textures\uniforms\Olive\KnightUndersuit_co.paa"
		};
	};
};

class CfgFactionClasses
{
	class BOSLHE_Faction
	{
		displayName = "[BOSLHE] Brotherhood Expedition";
	};
};
class CfgEditorSubcategories
{
	class BOSLHE_Characters
	{
		displayName = "Characters";
	};	
};

class CfgMarkers
{
   class flag;
   class BOSSP_Marker: flag
   {
		scope = 2; 
		name = "BOSSP Emblem"; 
		icon = "\LHE_Core\data\ui\markers\BOSSPMarker.paa"; 
		texture = "\LHE_Core\data\ui\markers\BOSSPMarker.paa"; 
		side = 2; 
		shadow = 0; 
		color[] = { 0, 0, 0, 1 }; 
		size = 32; 
		showEditorMarkerColor = 1;
   };
};