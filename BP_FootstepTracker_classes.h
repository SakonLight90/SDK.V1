// BlueprintGeneratedClass BP_FootstepTracker.BP_FootstepTracker_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_FootstepTracker_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct UMaterialInstanceDynamic* FoliagePositionMaterial; // 0x230(0x08)
	struct UMaterialInstanceDynamic* FoliageOffsetMaterial; // 0x238(0x08)
	struct FVector LastPos; // 0x240(0x0c)
	struct FVector2D GrassInfluenceDrawSize; // 0x24c(0x08)
	char pad_254[0x4]; // 0x254(0x04)
	struct UMaterialInstanceDynamic* FootstepsPositionMaterial; // 0x258(0x08)
	struct UMaterialInstanceDynamic* FootstepsOffsetMaterial; // 0x260(0x08)
	struct ACharacter* Character; // 0x268(0x08)
	float footstepTimeout; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct UMaterialInstanceDynamic* FoliageInfluenceMaterial; // 0x278(0x08)
	struct FVector LastDirection; // 0x280(0x0c)

	void DrawToTexture(struct UCanvasRenderTarget2D* RenderTarget, struct FVector2D DrawSize, struct UMaterialInstanceDynamic* Material, float Rotation, float AccuracyDivider, struct FVector Location); // Function BP_FootstepTracker.BP_FootstepTracker_C.DrawToTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void Blitzkrieg Boom(); // Function BP_FootstepTracker.BP_FootstepTracker_C.Blitzkrieg Boom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void ReceiveTick(float DeltaSeconds); // Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1caed80
	void DrawFootstep(struct FVector Location, bool Flip, float Rotation, float footstepNumber); // Function BP_FootstepTracker.BP_FootstepTracker_C.DrawFootstep // (BlueprintCallable|BlueprintEvent) // @ game+0x1caed80
	void ReceiveBeginPlay(); // Function BP_FootstepTracker.BP_FootstepTracker_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_BP_FootstepTracker(int32_t EntryPoint); // Function BP_FootstepTracker.BP_FootstepTracker_C.ExecuteUbergraph_BP_FootstepTracker // (Final|UbergraphFunction|HasDefaults) // @ game+0x1caed80
};

