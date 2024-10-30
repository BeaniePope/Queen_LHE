class cfgPatches
{
    class BOS_Medical
    {
        author = "Queen";
        requiredAddons[] =
        {
            "ace_medical",
			"ace_medical_ai",
			"ace_medical_blood",
			"ace_medical_damage",
			"ace_medical_engine",
			"ace_medical_feedback",
			"ace_medical_gui",
			"ace_medical_statemachine",
			"ace_medical_status",
			"ace_medical_treatment",
			"ace_medical_vitals",
			"ace_dogtags",
			"cba_settings"
        };
        weapons[] =
        {
            "BOS_Coyote_Chew", //Painkiller
            "BOS_Coyote_Chew_Item",
            "BOS_Mysterious_Jar", //Ammonium Carbonate
            "BOS_Mysterious_Jar_Item", 
            "BOS_Fixer", //Nalaxone (works on ALL MEDICATION)
            "BOS_Diffused_Stimpak", //TXA
            "BOS_Super_Stimpak", //EACA 
            "BOS_Hydra", //Norepinephrine
            "BOS_Calmex", //Phenylepinephrine
            "BOS_Buffout", // Nitroglycerin
            //"BOS_Hypo", //Ketamine
        };
        units[] = 
        {
            "BOS_Coyote_Chew_Item",
            "BOS_Mysterious_Jar_Item"
        };

    };
};


class CfgWeapons
{
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class BOS_Hydra: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = "[BOS] Hydra";
        picture = "\BOS_Medical\data\ui\hydra_ca.paa";
        model = "\BOS_Medical\models\hydra.p3d";
        descriptionShort = "Raises HR and BP";
        descriptionUse = "USE DESC";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Fixer: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = " [BOS] Fixer";
        picture = "\BOS_Medical\data\ui\fixer.paa";
        model = "\BOS_Medical\models\fixer.p3d";
        descriptionShort = "Cures all overdoses and addictions";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Diffused_Stimpak: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = " [BOS] Diffused Stimpack";
        picture = "\BOS_Medical\data\ui\diffusedstimpak.paa";
        model = "\BoS_Medical\models\diffusedstimpak.p3d";
        descriptionShort = "Bandages wounds over time";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Calmex: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = "[BOS] Calmex";
        picture = "\BOS_Medical\data\ui\calmex.paa";
        model = "\BOS_Medical\models\calmex.p3d";
        descriptionShort = "Decreases HR Increases BP";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Buffout: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = "[BOS] Buffout";
        picture = "\BOS_Medical\data\ui\buffout.paa";
        model = "\BOS_Medical\models\buffout.p3d";
        descriptionShort = "Increases HR Decreases BP";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Super_Stimpak: ACE_ItemCore
    {
        scope = 2;
        author = "Queen";
        displayName = "[BOS] Super Stimpak";
        picture = "\BOS_Medical\data\ui\superstimpak.paa";
        models = "\BOS_Medical\models\superstimpak.p3d";
        ACE_isMedicalItem = 1;
        class itemInfo: CBA_MiscItem_ItemInfo
        {
            mass = 0.2;
        };
    };
    class BOS_Mysterious_Jar_Item: ACE_ItemCore
    {
        scope = 2;
		author="Queen";
		displayName="[BOS] Mysterious Jar Item";

		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0;
		};
    };
    class BOS_Coyote_Chew_Item: ACE_ItemCore
    {
        scope = 1;
        author = "Queen";
        displayName="[BOS] Coyote Chew Bundle";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass=0;
		};
    }
};

class CfgVehicles
{
    class WeaponHolder_Single_limited_item_F;
    class BOS_Coyote_Chew_Item: WeaponHolder_Single_limited_item_F
	{
		scope = 1;
		scopeCurator=2;
		displayName="[BOS] Coyote Chew Bundle";
		author="Katalam";
		vehicleClass="Magazines";
		class TransportItems
		{
			class _xx_BOS_Coyote_Chew
			{
				name="BOS_Coyote_Chew";
				count=1;
			};
		};
	};
};

class CfgMagazines
{
    class CA_Magazine;
    class BOS_Mysterious_Jar: CA_Magazine
    {
        author = "Queen";
        scope=2;
		displayName="[BOS] Mysterious Jar";
		descriptionShort="WAKE UP";
		//model="\A3\Structures_F_EPA\Items\Medical\Painkillers_F.p3d";
		picture="\BOS_Medical\data\ui\mysteriousjar.paa";
		ammo="";
		count=10;
		initSpeed=0;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=1;
    };
    class BOS_Coyote_Chew: CA_Magazine
    {
        author = "Queen";
        scope=2;
		displayName="[BOS] Coyote Chew";
		descriptionShort= "Soothes Pain";
		model="\BOS_Medical\models\coyotechew.p3d";
		picture="\BOS_Medical\data\ui\coyotechew.paa";
		ammo="";
		count=10;
		initSpeed=0;
		tracersEvery=0;
		lastRoundsTracer=0;
		mass=1;
    };
};

class ACE_Medical_Treatment
{
    class Medication
    {
        class Hydra 
        {
            painReduce=0;
			hrIncreaseLow[]={0,0};
			hrIncreaseNormal[]={0,0};
			hrIncreaseHigh[]={0,0};
			timeInSystem=360;
			timeTillMaxEffect=30;
			maxDose=12;
			incompatibleMedication[]={};
			viscosityChange=25;
        };
        class Calmex
        {
            painReduce=0;
			hrIncreaseLow[]={-5,-10};
			hrIncreaseNormal[]={-5,-10};
			hrIncreaseHigh[]={-10,-15};
			timeInSystem=360;
			timeTillMaxEffect=60;
			maxDose=12;
			incompatibleMedication[]={};
			viscosityChange=25;
        };
        class Diffused_Stimpak
        {
            painReduce=0;
			hrIncreaseLow[]={0,0};
			hrIncreaseNormal[]={0,0};
			hrIncreaseHigh[]={0,0};
			timeInSystem=600;
			timeTillMaxEffect=15;
			maxDose=3;
			incompatibleMedication[]={};
			viscosityChange=0;
        };
        class Super_Stimpak
        {
            painReduce=0;
			hrIncreaseLow[]={0,0};
			hrIncreaseNormal[]={0,0};
			hrIncreaseHigh[]={0,0};
			timeInSystem=360;
			timeTillMaxEffect=15;
			maxDose=10;
			incompatibleMedication[]={};
			viscosityChange=0;
        };
        class Mysterious_Jar
        {
            painReduce=0;
			hrIncreaseLow[]={5,10};
			hrIncreaseNormal[]={5,10};
			hrIncreaseHigh[]={10,15};
			timeInSystem=30;
			timeTillMaxEffect=10;
			maxDose=10;
			incompatibleMedication[]={};
			viscosityChange=0;
        };
    };
};

class ACE_Medical_Treatment_Actions
{
    class Morphine;

    class Mysterious_Jar: Morphine
    {
        displayName="Open Mysterious Jar";
		displayNameProgress="Pushing Brotherhood Chem";
		category="bandage";
		treatmentLocations=0;
		allowedSelections[]=
		{
			"Head"
		};
		allowSelfTreatment=1;
		medicRequired=1;
		treatmentTime=5;
		items[]={};
		condition="[_medic, 'BOS_Mysterious_Jar'] call ace_common_fnc_hasMagazine || [_patient,'BOS_Mysterious_Jar'] call ace_common_fnc_hasMagazine";
		patientStateCondition=0;
		callbackSuccess="[_player, _patient, 'Mysterious_Jar'] call aceP_circulation_fnc_treatmentAdvanced_Carbonate";
		animationMedic="AinvPknlMstpSnonWrflDnon_medic1";
		animationMedicProne="AinvPpneMstpSlayWpstDnon_medicOther";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon"
		};
    };
    class Hydra: Mysterious_Jar
    {
        displayName="Push Hydra";
		category="medication";
		allowedSelections[]=
		{
			"Body",
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		allowSelfTreatment=1;
		medicRequired="aceP_circulation_vasoDrugs";
		treatmentTime="aceP_circulation_PushTime";
		items[]=
		{
			"BOS_Hydra"
		};
		condition="aceP_circulation_fnc_removeIV";
		patientStateCondition=0;
		callbackSuccess="[_medic,_patient,_bodyPart,_className, _itemUser, _usedItem] call ace_medical_treatment_fnc_medication; [_medic,_patient,-0.3] call aceP_circulation_fnc_alphaAction;";
    };
    class Calmex: Morphine
	{
		category="bandage";
		displayName="Inject Calmex";
		displayNameProgress="Injecting Brotherhood Chem";
		items[]=
		{
			"BOS_Calmex"
		};
		callbackSuccess="[_medic,_patient,_bodyPart,_className, _itemUser, _usedItem] call ace_medical_treatment_fnc_medication; [_medic,_patient,-0.3] call aceP_circulation_fnc_alphaAction;";
	};
    class Diffused_Stimpak: Mysterious_Jar
    {
        displayName="Push Diffused Stimpak";
		category="medication";
		allowedSelections[]=
		{
			"Body",
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		allowSelfTreatment=1;
		medicRequired="aceP_circulation_factorDrugs";
		treatmentTime="aceP_circulation_PushTime";
		items[]=
		{
			"BOS_Diffused_Stimpak"
		};
		condition="aceP_circulation_fnc_removeIV";
		patientStateCondition=0;
		callbackSuccess="[_medic,_patient,_bodyPart,_classname, _itemUser, _usedItem] call aceP_circulation_fnc_treatmentAdvanced_TXA; [_medic,_patient,_bodyPart,_className, _itemUser, _usedItem] call ace_medical_treatment_fnc_medication;";
    };

    class Fixer: Mysterious_Jar
    {
        displayName="Push Fixer";
		category="bandage";
		allowedSelections[]=
		{
			"Head"
		};
		allowSelfTreatment=1;
		medicRequired=1;
		treatmentTime=5;
		items[]=
		{
			"BOS_Fixer"
		};
		condition="true";
		patientStateCondition=0;
		callbackSuccess="[_player, _patient, 'Fixer'] call BOS_Medical_fnc_treatmentAdvanced_Fixer";

    };
    class Super_Stimpak: Mysterious_Jar
    {
        displayName = "Push Super Stimpak";
        category="medication";
		allowedSelections[]=
		{
			"Body",
			"LeftArm",
			"RightArm",
			"LeftLeg",
			"RightLeg"
		};
		allowSelfTreatment=1;
		medicRequired="aceP_circulation_factorDrugs";
		treatmentTime="aceP_circulation_PushTime";
		items[]=
		{
			"BOS_Super_Stimpak"
		};
		condition="aceP_circulation_fnc_removeIV";
		patientStateCondition=0;
		callbackSuccess="[_medic,_patient,_bodyPart] call aceP_circulation_fnc_treatmentAdvanced_EACA; [_medic,_patient,_bodyPart,_className, _itemUser, _usedItem] call ace_medical_treatment_fnc_medication;";
    };
    class Coyote_Chew: Morphine
    {
        displayName="Administer Coyote Chew";
		category="bandage";
		displayNameProgress="Chewing Coyote Tobacco";
		allowedSelections[]=
		{
			"Head"
		};
		items[]={};
		callbackSuccess="['kat_Painkiller', _medic, _patient, _bodyPart, 'Painkillers'] call aceP_circulation_fnc_removeItemfromMag";
		condition="[_medic, 'kat_Painkiller'] call ace_common_fnc_hasMagazine || [_patient,'kat_Painkiller'] call ace_common_fnc_hasMagazine";
		litter[]={};
		icon="\x\aceP\addons\circulation\ui\icon_painkillers_action.paa";
		animationPatient="";
		animationPatientUnconscious="AinjPpneMstpSnonWrflDnon_rolltoback";
		animationPatientUnconsciousExcludeOn[]=
		{
			"ainjppnemstpsnonwrfldnon"
		};
    };
};

class ACE_Medical_Advanced
{
    class Treatment
    {
        class Medication
        {
            class Mysterious_Jar
            {
                painReduce=0;
				timeInSystem=120;
				maxDose=10;
				inCompatableMedication[]={};
				viscosityChange=2;
				itemClassName="BOS_Mysterious_Jar_Item";
            };
            class BOS_Coyote_Chew
            {
                painReduce=1.1;
				timeInSystem=120;
				maxDose=10;
				inCompatableMedication[]={};
				viscosityChange=2;
				itemClassName="BOS_Coyote_Chew_Item";
            };
        };

    };
};
/*
class Extended_PostInit_EventHandlers
{
	class BOS_Medical
	{
		init="call compile preProcessFileLineNumbers '\BOS_Medical\XEH_postInit.sqf'";
	};
};

*/