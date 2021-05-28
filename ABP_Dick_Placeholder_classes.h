// AnimBlueprintGeneratedClass ABP_Dick_Placeholder.ABP_Dick_Placeholder_C
// Size: 0xc01 (Inherited: 0x2c0)
struct UABP_Dick_Placeholder_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x2f8(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x398(0x20)
	char pad_3B8[0x8]; // 0x3b8(0x08)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x3c0(0x190)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_2; // 0x550(0x10)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x560(0x20)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x580(0x10)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x590(0x650)
	bool EnabledIK; // 0xbe0(0x01)
	char pad_BE1[0x3]; // 0xbe1(0x03)
	struct FVector _targetIK; // 0xbe4(0x0c)
	bool IsPenisInHands; // 0xbf0(0x01)
	char pad_BF1[0x3]; // 0xbf1(0x03)
	struct FVector _handsIK; // 0xbf4(0x0c)
	bool IsInRange; // 0xc00(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137(); // Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dick_Placeholder_AnimGraphNode_Fabrik_97957A264606C62DC406D3975C3CF137 // (BlueprintEvent) // @ game+0x1caed80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1caed80
	void BlueprintBeginPlay(); // Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_ABP_Dick_Placeholder(int32_t EntryPoint); // Function ABP_Dick_Placeholder.ABP_Dick_Placeholder_C.ExecuteUbergraph_ABP_Dick_Placeholder // (Final|UbergraphFunction|HasDefaults) // @ game+0x1caed80
};

