// AnimBlueprintGeneratedClass ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C
// Size: 0x1698 (Inherited: 0x3a0)
struct UABP_Prisoner_WheelBarrow_C : UPrisonerAnimInstance_WheelBarrow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik_2; // 0x3b0(0x190)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x540(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x560(0x20)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x580(0x190)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x710(0xe8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x7f8(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x898(0xa0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x938(0xe8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xa20(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xae0(0x80)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xb60(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xc68(0x108)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xd70(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xda0(0xe8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe88(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xfe0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1008(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1030(0xa0)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x10d0(0x128)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x11f8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1218(0x20)
	struct FAnimNode_LegIK AnimGraphNode_LegIK; // 0x1238(0xf8)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x1330(0x128)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1458(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x14f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1598(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1618(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93(); // Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_DD6FA0BF4B9A97E9720750AEE839BF93 // (BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE(); // Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Prisoner_WheelBarrow_AnimGraphNode_ModifyBone_8E54C473464B65A805B3E48CC8E839DE // (BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_ABP_Prisoner_WheelBarrow(int32_t EntryPoint); // Function ABP_Prisoner_WheelBarrow.ABP_Prisoner_WheelBarrow_C.ExecuteUbergraph_ABP_Prisoner_WheelBarrow // (Final|UbergraphFunction) // @ game+0x1caed80
};

