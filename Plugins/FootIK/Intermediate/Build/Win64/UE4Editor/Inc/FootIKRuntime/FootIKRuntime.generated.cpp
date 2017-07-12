// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FootIKRuntimePrivatePCH.h"
#include "FootIKRuntime.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FootIKRuntime() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();
	ANIMGRAPHRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API class UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();

	FOOTIKRUNTIME_API class UClass* Z_Construct_UClass_UDummyClassForFootIKModule_NoRegister();
	FOOTIKRUNTIME_API class UClass* Z_Construct_UClass_UDummyClassForFootIKModule();
	FOOTIKRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK();
	FOOTIKRUNTIME_API class UPackage* Z_Construct_UPackage__Script_FootIKRuntime();
	void UDummyClassForFootIKModule::StaticRegisterNativesUDummyClassForFootIKModule()
	{
	}
	UClass* Z_Construct_UClass_UDummyClassForFootIKModule_NoRegister()
	{
		return UDummyClassForFootIKModule::StaticClass();
	}
	UClass* Z_Construct_UClass_UDummyClassForFootIKModule()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_FootIKRuntime();
			OuterClass = UDummyClassForFootIKModule::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20000080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UDummyClassForFootIKModule> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("DummyClassForFootIKModule.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/DummyClassForFootIKModule.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("@TODO: This class is a junk class, temporarily required due to a bug in the UnrealHeaderTool"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDummyClassForFootIKModule, 1579503378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDummyClassForFootIKModule(Z_Construct_UClass_UDummyClassForFootIKModule, &UDummyClassForFootIKModule::StaticClass, TEXT("/Script/FootIKRuntime"), TEXT("UDummyClassForFootIKModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyClassForFootIKModule);
class UScriptStruct* FAnimNode_FootPlacementIK::StaticStruct()
{
	extern FOOTIKRUNTIME_API class UPackage* Z_Construct_UPackage__Script_FootIKRuntime();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIKRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK();
		extern FOOTIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK, Z_Construct_UPackage__Script_FootIKRuntime(), TEXT("AnimNode_FootPlacementIK"), sizeof(FAnimNode_FootPlacementIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_FootPlacementIK(FAnimNode_FootPlacementIK::StaticStruct, TEXT("/Script/FootIKRuntime"), TEXT("AnimNode_FootPlacementIK"), false, nullptr, nullptr);
static struct FScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK
{
	FScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_FootPlacementIK")),new UScriptStruct::TCppStructOps<FAnimNode_FootPlacementIK>);
	}
} ScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK;
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FootIKRuntime();
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_FootPlacementIK"), sizeof(FAnimNode_FootPlacementIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AnimNode_FootPlacementIK"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase(), new UScriptStruct::TCppStructOps<FAnimNode_FootPlacementIK>, EStructFlags(0x00000201));
			UProperty* NewProp_BlendTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("BlendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BlendTime, FAnimNode_FootPlacementIK), 0x0010000000000005);
			UProperty* NewProp_HitZOffset = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("HitZOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HitZOffset, FAnimNode_FootPlacementIK), 0x0010000000000005);
			UProperty* NewProp_StretchLimits = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("StretchLimits"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(StretchLimits, FAnimNode_FootPlacementIK), 0x0010000000000005, Z_Construct_UScriptStruct_FVector2D());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bAllowStretching, FAnimNode_FootPlacementIK, uint8);
			UProperty* NewProp_bAllowStretching = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("bAllowStretching"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bAllowStretching, FAnimNode_FootPlacementIK), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bAllowStretching, FAnimNode_FootPlacementIK), sizeof(uint8), false);
			UProperty* NewProp_JointTargetSpaceBoneName = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("JointTargetSpaceBoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(JointTargetSpaceBoneName, FAnimNode_FootPlacementIK), 0x0010000000000005);
			UProperty* NewProp_JointTargetLocationSpace = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("JointTargetLocationSpace"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(JointTargetLocationSpace, FAnimNode_FootPlacementIK), 0x0010000000000005, Z_Construct_UEnum_Engine_EBoneControlSpace());
			UProperty* NewProp_JointTargetLocation = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("JointTargetLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(JointTargetLocation, FAnimNode_FootPlacementIK), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_IKBone = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("IKBone"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IKBone, FAnimNode_FootPlacementIK), 0x0010000000000005, Z_Construct_UScriptStruct_FBoneReference());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_BlendTime, TEXT("Category"), TEXT("IK"));
			MetaData->SetValue(NewProp_BlendTime, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_BlendTime, TEXT("ToolTip"), TEXT("time to blend in/out node's influence"));
			MetaData->SetValue(NewProp_HitZOffset, TEXT("Category"), TEXT("IK"));
			MetaData->SetValue(NewProp_HitZOffset, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_HitZOffset, TEXT("ToolTip"), TEXT("Z offset from hit point, to correct effector location"));
			MetaData->SetValue(NewProp_StretchLimits, TEXT("Category"), TEXT("IK"));
			MetaData->SetValue(NewProp_StretchLimits, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_StretchLimits, TEXT("ToolTip"), TEXT("limits for bone stretching"));
			MetaData->SetValue(NewProp_bAllowStretching, TEXT("Category"), TEXT("IK"));
			MetaData->SetValue(NewProp_bAllowStretching, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_bAllowStretching, TEXT("ToolTip"), TEXT("if set, node can stretch as much as possible, bone to catch effector location"));
			MetaData->SetValue(NewProp_JointTargetSpaceBoneName, TEXT("Category"), TEXT("JointTarget"));
			MetaData->SetValue(NewProp_JointTargetSpaceBoneName, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_JointTargetSpaceBoneName, TEXT("ToolTip"), TEXT("If EffectorLocationSpace is a bone, this is the bone to use. *"));
			MetaData->SetValue(NewProp_JointTargetLocationSpace, TEXT("Category"), TEXT("JointTarget"));
			MetaData->SetValue(NewProp_JointTargetLocationSpace, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_JointTargetLocationSpace, TEXT("ToolTip"), TEXT("Reference frame of Effector Location."));
			MetaData->SetValue(NewProp_JointTargetLocation, TEXT("Category"), TEXT("JointTarget"));
			MetaData->SetValue(NewProp_JointTargetLocation, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_JointTargetLocation, TEXT("PinShownByDefault"), TEXT(""));
			MetaData->SetValue(NewProp_JointTargetLocation, TEXT("ToolTip"), TEXT("Effector Location. *"));
			MetaData->SetValue(NewProp_IKBone, TEXT("Category"), TEXT("IK"));
			MetaData->SetValue(NewProp_IKBone, TEXT("ModuleRelativePath"), TEXT("Classes/AnimNode_FootPlacementIK.h"));
			MetaData->SetValue(NewProp_IKBone, TEXT("ToolTip"), TEXT("Name of bone to control. This is the main bone chain to modify from. *"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC() { return 4202827053U; }
	UPackage* Z_Construct_UPackage__Script_FootIKRuntime()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FootIKRuntime")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xE45D41D2;
			Guid.B = 0x0ABFA1A8;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION