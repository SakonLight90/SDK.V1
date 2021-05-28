// BlueprintGeneratedClass BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C
// Size: 0x2f48 (Inherited: 0x2f30)
struct ABP_Weapon_Improvised_Handgun_C : AWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f30(0x08)
	struct UItemObstructionTestCapsuleComponent* ItemObstructionTestCapsule; // 0x2f38(0x08)
	struct UMeleeAttackCollisionCapsule* MeleeAttackCollisionCapsule; // 0x2f40(0x08)

	bool CanSwitchFiringMode(); // Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.CanSwitchFiringMode // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1caed80
	void ReceiveBeginPlay(); // Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1caed80
	void ExecuteUbergraph_BP_Weapon_Improvised_Handgun(int32_t EntryPoint); // Function BP_Weapon_Improvised_Handgun.BP_Weapon_Improvised_Handgun_C.ExecuteUbergraph_BP_Weapon_Improvised_Handgun // (Final|UbergraphFunction) // @ game+0x1caed80
};

