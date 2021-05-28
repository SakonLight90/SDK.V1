// BlueprintGeneratedClass BP_PrisonerCorpse.BP_PrisonerCorpse_C
// Size: 0x680 (Inherited: 0x600)
struct ABP_PrisonerCorpse_C : APrisonerCorpse {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UCurveFloat* ShortHairCurve; // 0x608(0x08)
	struct UCurveFloat* MediumHairCurve; // 0x610(0x08)
	struct UCurveFloat* MediumHairCurvePDO; // 0x618(0x08)
	struct UCurveFloat* MediumHairCurveTopOpacity; // 0x620(0x08)
	struct UCurveFloat* LongHairCurve; // 0x628(0x08)
	struct UCurveFloat* LongHairCurvePDO; // 0x630(0x08)
	struct UCurveFloat* LongHairCurveTopOpacity; // 0x638(0x08)
	struct UCurveFloat* ShortFacialHairCurve; // 0x640(0x08)
	struct UCurveFloat* MediumFacialHairCurve; // 0x648(0x08)
	struct UCurveFloat* MediumFacialHairCurvePDO; // 0x650(0x08)
	struct UCurveFloat* MediumFacialHairCurveTopOpacity; // 0x658(0x08)
	struct UCurveFloat* LongFacialHairCurve; // 0x660(0x08)
	struct UCurveFloat* LongFacialHairCurvePDO; // 0x668(0x08)
	struct UCurveFloat* LongFacialHairCurveTopOpacity; // 0x670(0x08)
	struct UCurveFloat* AfroMediumHairCurve; // 0x678(0x08)

	void UpdateHair(); // Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.UpdateHair // (Event|Public|BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_BP_PrisonerCorpse(int32_t EntryPoint); // Function BP_PrisonerCorpse.BP_PrisonerCorpse_C.ExecuteUbergraph_BP_PrisonerCorpse // (Final|UbergraphFunction) // @ game+0x1caed80
};

