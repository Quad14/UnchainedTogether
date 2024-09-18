#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NiagaraShader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "NiagaraCore_structs.hpp"


namespace SDK
{

// Enum NiagaraShader.ENiagaraMipMapGenerationType
// NumValues: 0x0007
enum class ENiagaraMipMapGenerationType : uint8
{
	Unfiltered                               = 0,
	Linear                                   = 1,
	Blur1                                    = 2,
	Blur2                                    = 3,
	Blur3                                    = 4,
	Blur4                                    = 5,
	ENiagaraMipMapGenerationType_MAX         = 6,
};

// Enum NiagaraShader.ENiagaraGpuDispatchType
// NumValues: 0x0005
enum class ENiagaraGpuDispatchType : uint8
{
	OneD                                     = 0,
	TwoD                                     = 1,
	ThreeD                                   = 2,
	Custom                                   = 3,
	ENiagaraGpuDispatchType_MAX              = 4,
};

// Enum NiagaraShader.ENiagaraDirectDispatchElementType
// NumValues: 0x0004
enum class ENiagaraDirectDispatchElementType : uint8
{
	NumThreads                               = 0,
	NumThreadsNoClipping                     = 1,
	NumGroups                                = 2,
	ENiagaraDirectDispatchElementType_MAX    = 3,
};

// Enum NiagaraShader.ENiagaraSimStageExecuteBehavior
// NumValues: 0x0004
enum class ENiagaraSimStageExecuteBehavior : uint8
{
	Always                                   = 0,
	OnSimulationReset                        = 1,
	NotOnSimulationReset                     = 2,
	ENiagaraSimStageExecuteBehavior_MAX      = 3,
};

// Enum NiagaraShader.FNiagaraCompileEventSeverity
// NumValues: 0x0005
enum class EFNiagaraCompileEventSeverity : uint8
{
	Log                                      = 0,
	Display                                  = 1,
	Warning                                  = 2,
	Error                                    = 3,
	FNiagaraCompileEventSeverity_MAX         = 4,
};

// Enum NiagaraShader.FNiagaraCompileEventSource
// NumValues: 0x0003
enum class EFNiagaraCompileEventSource : uint8
{
	Unset                                    = 0,
	ScriptDependency                         = 1,
	FNiagaraCompileEventSource_MAX           = 2,
};

// ScriptStruct NiagaraShader.SimulationStageMetaData
// 0x00A8 (0x00A8 - 0x0000)
struct FSimulationStageMetaData final
{
public:
	class FName                                   SimulationStageName;                               // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   EnabledBinding;                                    // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                             ElementCount;                                      // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountXBinding;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountYBinding;                              // 0x0024(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ElementCountZBinding;                              // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraIterationSource                       IterationSourceType;                               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   IterationDataInterface;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   IterationDirectBinding;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraSimStageExecuteBehavior               ExecuteBehavior;                                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bWritesParticles : 1;                              // 0x004C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bPartialParticleUpdate : 1;                        // 0x004C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bParticleIterationStateEnabled : 1;                // 0x004C(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bGpuIndirectDispatch : 1;                          // 0x004C(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ParticleIterationStateBinding;                     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_58[0x4];                                       // 0x0058(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              ParticleIterationStateRange;                       // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           OutputDestinations;                                // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           InputDataInterfaces;                               // 0x0078(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         NumIterations;                                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NumIterationsBinding;                              // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraGpuDispatchType                       GpuDispatchType;                                   // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ENiagaraDirectDispatchElementType             GpuDirectDispatchElementType;                      // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             GpuDispatchNumThreads;                             // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSimulationStageMetaData) == 0x000008, "Wrong alignment on FSimulationStageMetaData");
static_assert(sizeof(FSimulationStageMetaData) == 0x0000A8, "Wrong size on FSimulationStageMetaData");
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x000000, "Member 'FSimulationStageMetaData::SimulationStageName' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, EnabledBinding) == 0x000008, "Member 'FSimulationStageMetaData::EnabledBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCount) == 0x000010, "Member 'FSimulationStageMetaData::ElementCount' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountXBinding) == 0x00001C, "Member 'FSimulationStageMetaData::ElementCountXBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountYBinding) == 0x000024, "Member 'FSimulationStageMetaData::ElementCountYBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ElementCountZBinding) == 0x00002C, "Member 'FSimulationStageMetaData::ElementCountZBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, IterationSourceType) == 0x000034, "Member 'FSimulationStageMetaData::IterationSourceType' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, IterationDataInterface) == 0x000038, "Member 'FSimulationStageMetaData::IterationDataInterface' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, IterationDirectBinding) == 0x000040, "Member 'FSimulationStageMetaData::IterationDirectBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ExecuteBehavior) == 0x000048, "Member 'FSimulationStageMetaData::ExecuteBehavior' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateBinding) == 0x000050, "Member 'FSimulationStageMetaData::ParticleIterationStateBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateRange) == 0x00005C, "Member 'FSimulationStageMetaData::ParticleIterationStateRange' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x000068, "Member 'FSimulationStageMetaData::OutputDestinations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, InputDataInterfaces) == 0x000078, "Member 'FSimulationStageMetaData::InputDataInterfaces' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterations) == 0x000088, "Member 'FSimulationStageMetaData::NumIterations' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, NumIterationsBinding) == 0x00008C, "Member 'FSimulationStageMetaData::NumIterationsBinding' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchType) == 0x000094, "Member 'FSimulationStageMetaData::GpuDispatchType' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDirectDispatchElementType) == 0x000095, "Member 'FSimulationStageMetaData::GpuDirectDispatchElementType' has a wrong offset!");
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchNumThreads) == 0x000098, "Member 'FSimulationStageMetaData::GpuDispatchNumThreads' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// 0x0060 (0x0060 - 0x0000)
struct FNiagaraCompileEvent final
{
public:
	EFNiagaraCompileEventSeverity                 Severity;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Message;                                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ShortDescription;                                  // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  NodeGuid;                                          // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  PinGuid;                                           // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          StackGuids;                                        // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	EFNiagaraCompileEventSource                   Source;                                            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNiagaraCompileEvent) == 0x000008, "Wrong alignment on FNiagaraCompileEvent");
static_assert(sizeof(FNiagaraCompileEvent) == 0x000060, "Wrong size on FNiagaraCompileEvent");
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x000000, "Member 'FNiagaraCompileEvent::Severity' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x000008, "Member 'FNiagaraCompileEvent::Message' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 0x000018, "Member 'FNiagaraCompileEvent::ShortDescription' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x000028, "Member 'FNiagaraCompileEvent::NodeGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x000038, "Member 'FNiagaraCompileEvent::PinGuid' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x000048, "Member 'FNiagaraCompileEvent::StackGuids' has a wrong offset!");
static_assert(offsetof(FNiagaraCompileEvent, Source) == 0x000058, "Member 'FNiagaraCompileEvent::Source' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// 0x0050 (0x0050 - 0x0000)
struct FNiagaraDataInterfaceGeneratedFunction final
{
public:
	uint8                                         Pad_0[0x30];                                       // 0x0000(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNiagaraVariableCommonReference> VariadicInputs;                                    // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableCommonReference> VariadicOutputs;                                   // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraDataInterfaceGeneratedFunction) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGeneratedFunction");
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x000050, "Wrong size on FNiagaraDataInterfaceGeneratedFunction");
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs) == 0x000030, "Member 'FNiagaraDataInterfaceGeneratedFunction::VariadicInputs' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs) == 0x000040, "Member 'FNiagaraDataInterfaceGeneratedFunction::VariadicOutputs' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// 0x0038 (0x0038 - 0x0000)
struct FNiagaraDataInterfaceGPUParamInfo final
{
public:
	class FString                                 DataInterfaceHLSLSymbol;                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DIClassName;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        ShaderParametersOffset;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraDataInterfaceGPUParamInfo) == 0x000008, "Wrong alignment on FNiagaraDataInterfaceGPUParamInfo");
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x000038, "Wrong size on FNiagaraDataInterfaceGPUParamInfo");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x000000, "Member 'FNiagaraDataInterfaceGPUParamInfo::DataInterfaceHLSLSymbol' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x000010, "Member 'FNiagaraDataInterfaceGPUParamInfo::DIClassName' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset) == 0x000020, "Member 'FNiagaraDataInterfaceGPUParamInfo::ShaderParametersOffset' has a wrong offset!");
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x000028, "Member 'FNiagaraDataInterfaceGPUParamInfo::GeneratedFunctions' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
// 0x0018 (0x0018 - 0x0000)
struct FNiagaraShaderScriptExternalConstant final
{
public:
	class FName                                   Type;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Name;                                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FNiagaraShaderScriptExternalConstant) == 0x000008, "Wrong alignment on FNiagaraShaderScriptExternalConstant");
static_assert(sizeof(FNiagaraShaderScriptExternalConstant) == 0x000018, "Wrong size on FNiagaraShaderScriptExternalConstant");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Type) == 0x000000, "Member 'FNiagaraShaderScriptExternalConstant::Type' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Name) == 0x000008, "Member 'FNiagaraShaderScriptExternalConstant::Name' has a wrong offset!");

// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
// 0x0058 (0x0058 - 0x0000)
struct FNiagaraShaderScriptParametersMetadata final
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         LooseMetadataNames;                                // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          bExternalConstantsInterpolated;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x20];                                      // 0x0038(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FNiagaraShaderScriptParametersMetadata) == 0x000008, "Wrong alignment on FNiagaraShaderScriptParametersMetadata");
static_assert(sizeof(FNiagaraShaderScriptParametersMetadata) == 0x000058, "Wrong size on FNiagaraShaderScriptParametersMetadata");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo) == 0x000000, "Member 'FNiagaraShaderScriptParametersMetadata::DataInterfaceParamInfo' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames) == 0x000010, "Member 'FNiagaraShaderScriptParametersMetadata::LooseMetadataNames' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, bExternalConstantsInterpolated) == 0x000020, "Member 'FNiagaraShaderScriptParametersMetadata::bExternalConstantsInterpolated' has a wrong offset!");
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, ExternalConstants) == 0x000028, "Member 'FNiagaraShaderScriptParametersMetadata::ExternalConstants' has a wrong offset!");

}

