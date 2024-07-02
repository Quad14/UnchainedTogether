#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_Fence

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_Fence.ST_Fence
// 0x0030 (0x0030 - 0x0000)
struct FST_Fence final
{
public:
	class UStaticMesh*                            MeshModularFence_2_0BE99A1F48C0261A918520BCE47253D0; // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            MeshPrimaryPost_4_96FC842A42B83018BD8F959BA08DBD85; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            MeshSecondaryPost_6_F668EDD445DE3B3B2232E99E0FC19603; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetModularFence_9_6FEA1F244263E2808CA65C8B68969765; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_391F[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstance*>              Materials_13_5CCA54464CC9D6962A554399AE2C5E95;     // 0x0020(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_Fence) == 0x000008, "Wrong alignment on FST_Fence");
static_assert(sizeof(FST_Fence) == 0x000030, "Wrong size on FST_Fence");
static_assert(offsetof(FST_Fence, MeshModularFence_2_0BE99A1F48C0261A918520BCE47253D0) == 0x000000, "Member 'FST_Fence::MeshModularFence_2_0BE99A1F48C0261A918520BCE47253D0' has a wrong offset!");
static_assert(offsetof(FST_Fence, MeshPrimaryPost_4_96FC842A42B83018BD8F959BA08DBD85) == 0x000008, "Member 'FST_Fence::MeshPrimaryPost_4_96FC842A42B83018BD8F959BA08DBD85' has a wrong offset!");
static_assert(offsetof(FST_Fence, MeshSecondaryPost_6_F668EDD445DE3B3B2232E99E0FC19603) == 0x000010, "Member 'FST_Fence::MeshSecondaryPost_6_F668EDD445DE3B3B2232E99E0FC19603' has a wrong offset!");
static_assert(offsetof(FST_Fence, OffsetModularFence_9_6FEA1F244263E2808CA65C8B68969765) == 0x000018, "Member 'FST_Fence::OffsetModularFence_9_6FEA1F244263E2808CA65C8B68969765' has a wrong offset!");
static_assert(offsetof(FST_Fence, Materials_13_5CCA54464CC9D6962A554399AE2C5E95) == 0x000020, "Member 'FST_Fence::Materials_13_5CCA54464CC9D6962A554399AE2C5E95' has a wrong offset!");

}

