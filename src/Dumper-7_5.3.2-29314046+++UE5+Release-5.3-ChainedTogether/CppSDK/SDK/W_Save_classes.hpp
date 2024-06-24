#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_Save

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_Save.W_Save_C
// 0x0010 (0x02D0 - 0x02C0)
class UW_Save_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_W_Save(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_Save_C">();
	}
	static class UW_Save_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_Save_C>();
	}
};
static_assert(alignof(UW_Save_C) == 0x000008, "Wrong alignment on UW_Save_C");
static_assert(sizeof(UW_Save_C) == 0x0002D0, "Wrong size on UW_Save_C");
static_assert(offsetof(UW_Save_C, UberGraphFrame) == 0x0002C0, "Member 'UW_Save_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_Save_C, NewAnimation) == 0x0002C8, "Member 'UW_Save_C::NewAnimation' has a wrong offset!");

}

