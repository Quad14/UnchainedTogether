#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Normal_W

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Normal_W.Normal_W_C
// 0x0010 (0x02D0 - 0x02C0)
class UNormal_W_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_Normal_W(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Normal_W_C">();
	}
	static class UNormal_W_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNormal_W_C>();
	}
};
static_assert(alignof(UNormal_W_C) == 0x000008, "Wrong alignment on UNormal_W_C");
static_assert(sizeof(UNormal_W_C) == 0x0002D0, "Wrong size on UNormal_W_C");
static_assert(offsetof(UNormal_W_C, UberGraphFrame) == 0x0002C0, "Member 'UNormal_W_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNormal_W_C, NewAnimation) == 0x0002C8, "Member 'UNormal_W_C::NewAnimation' has a wrong offset!");

}

