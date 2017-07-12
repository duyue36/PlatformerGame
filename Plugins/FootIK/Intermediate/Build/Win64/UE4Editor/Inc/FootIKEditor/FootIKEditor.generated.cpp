// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FootIKEditorPrivatePCH.h"
#include "FootIKEditor.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FootIKEditor() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ANIMGRAPH_API class UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	FOOTIKRUNTIME_API class UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK();

	FOOTIKEDITOR_API class UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_NoRegister();
	FOOTIKEDITOR_API class UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK();
	FOOTIKEDITOR_API class UPackage* Z_Construct_UPackage__Script_FootIKEditor();
	void UAnimGraphNode_FootPlacementIK::StaticRegisterNativesUAnimGraphNode_FootPlacementIK()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_NoRegister()
	{
		return UAnimGraphNode_FootPlacementIK::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
			Z_Construct_UPackage__Script_FootIKEditor();
			OuterClass = UAnimGraphNode_FootPlacementIK::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20080080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Node = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Node"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Node, UAnimGraphNode_FootPlacementIK), 0x0010000000000001, Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UAnimGraphNode_FootPlacementIK> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("AnimGraphNode_FootPlacementIK.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/AnimGraphNode_FootPlacementIK.h"));
				MetaData->SetValue(NewProp_Node, TEXT("Category"), TEXT("Settings"));
				MetaData->SetValue(NewProp_Node, TEXT("ModuleRelativePath"), TEXT("Classes/AnimGraphNode_FootPlacementIK.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_FootPlacementIK, 3123983399);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_FootPlacementIK(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK, &UAnimGraphNode_FootPlacementIK::StaticClass, TEXT("/Script/FootIKEditor"), TEXT("UAnimGraphNode_FootPlacementIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_FootPlacementIK);
	UPackage* Z_Construct_UPackage__Script_FootIKEditor()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FootIKEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000080);
			FGuid Guid;
			Guid.A = 0x8E32491A;
			Guid.B = 0x0B56D138;
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
