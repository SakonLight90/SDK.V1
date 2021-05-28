// AnimBlueprintGeneratedClass AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C
// Size: 0x748 (Inherited: 0x2f0)
struct UAnimBP_ImprovisedPistol50cal_C : UWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2f8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_4; // 0x328(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x370(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x3b8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x400(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x448(0xb0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x4f8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x520(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x548(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x570(0x158)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x6c8(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_AnimBP_ImprovisedPistol50cal(int32_t EntryPoint); // Function AnimBP_ImprovisedPistol50cal.AnimBP_ImprovisedPistol50cal_C.ExecuteUbergraph_AnimBP_ImprovisedPistol50cal // (Final|UbergraphFunction) // @ game+0x1caed80
};

