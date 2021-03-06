// AnimBlueprintGeneratedClass ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C
// Size: 0x102a (Inherited: 0x2c0)
struct UABP_Prisoner_FirstPersonAimRotation_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x410(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x430(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x538(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x558(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x660(0xa0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x700(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x808(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x910(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x930(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x950(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xaa8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xad0(0x28)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xaf8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xc00(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xd08(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xe10(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf18(0x108)
	float FirstPersonAimPitch; // 0x1020(0x04)
	float FirstPersonAimYawDelta; // 0x1024(0x04)
	bool ShouldApplyArmsPitchCorrection; // 0x1028(0x01)
	enum class EPrisonerStance Stance; // 0x1029(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7FEAD1104F7E24B7BADE00849E93A0CF(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7FEAD1104F7E24B7BADE00849E93A0CF // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_5EAEB903484741C202D511A9F80ED66B(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_5EAEB903484741C202D511A9F80ED66B // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_3D0C005446712A1FEEA6CC84D045C94D(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_3D0C005446712A1FEEA6CC84D045C94D // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7EF1CC914243739F132643878A96F729(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_7EF1CC914243739F132643878A96F729 // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_942654FD4E41254B19E4E99849EA6B1A(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_942654FD4E41254B19E4E99849EA6B1A // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_9FA2B355412280F805FC40811E4A8D40(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_9FA2B355412280F805FC40811E4A8D40 // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_8811180F4208B187BA6F7E9E903E48F4(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_8811180F4208B187BA6F7E9E903E48F4 // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_4F3E79E542374E72B87472A8A11E27D9(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_4F3E79E542374E72B87472A8A11E27D9 // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_0FAC8D61494943BE4F3F04AC005DA2EF(); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation_AnimGraphNode_ModifyBone_0FAC8D61494943BE4F3F04AC005DA2EF // (BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation(int32_t EntryPoint); // Function ABP_Prisoner_FirstPersonAimRotation.ABP_Prisoner_FirstPersonAimRotation_C.ExecuteUbergraph_ABP_Prisoner_FirstPersonAimRotation // (Final|UbergraphFunction) // @ game+0x1caed80
};

