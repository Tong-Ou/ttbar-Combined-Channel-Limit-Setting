// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libBATmtf_rdictdOcxx

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include ".includes/BAT/BCMTFAnalysisFacility.h"
#include ".includes/BAT/BCMTFChannel.h"
#include ".includes/BAT/BCMTFComparisonTool.h"
#include ".includes/BAT/BCMTF.h"
#include ".includes/BAT/BCMTFProcess.h"
#include ".includes/BAT/BCMTFSystematic.h"
#include ".includes/BAT/BCMTFSystematicVariation.h"
#include ".includes/BAT/BCMTFTemplate.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *BCMTFAnalysisFacility_Dictionary();
   static void BCMTFAnalysisFacility_TClassManip(TClass*);
   static void delete_BCMTFAnalysisFacility(void *p);
   static void deleteArray_BCMTFAnalysisFacility(void *p);
   static void destruct_BCMTFAnalysisFacility(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFAnalysisFacility*)
   {
      ::BCMTFAnalysisFacility *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFAnalysisFacility));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFAnalysisFacility", "BAT/BCMTFAnalysisFacility.h", 35,
                  typeid(::BCMTFAnalysisFacility), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFAnalysisFacility_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFAnalysisFacility) );
      instance.SetDelete(&delete_BCMTFAnalysisFacility);
      instance.SetDeleteArray(&deleteArray_BCMTFAnalysisFacility);
      instance.SetDestructor(&destruct_BCMTFAnalysisFacility);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFAnalysisFacility*)
   {
      return GenerateInitInstanceLocal((::BCMTFAnalysisFacility*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFAnalysisFacility*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFAnalysisFacility_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFAnalysisFacility*)0x0)->GetClass();
      BCMTFAnalysisFacility_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFAnalysisFacility_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFChannel_Dictionary();
   static void BCMTFChannel_TClassManip(TClass*);
   static void delete_BCMTFChannel(void *p);
   static void deleteArray_BCMTFChannel(void *p);
   static void destruct_BCMTFChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFChannel*)
   {
      ::BCMTFChannel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFChannel));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFChannel", "BAT/BCMTFChannel.h", 36,
                  typeid(::BCMTFChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFChannel_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFChannel) );
      instance.SetDelete(&delete_BCMTFChannel);
      instance.SetDeleteArray(&deleteArray_BCMTFChannel);
      instance.SetDestructor(&destruct_BCMTFChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFChannel*)
   {
      return GenerateInitInstanceLocal((::BCMTFChannel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFChannel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFChannel*)0x0)->GetClass();
      BCMTFChannel_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFComparisonTool_Dictionary();
   static void BCMTFComparisonTool_TClassManip(TClass*);
   static void delete_BCMTFComparisonTool(void *p);
   static void deleteArray_BCMTFComparisonTool(void *p);
   static void destruct_BCMTFComparisonTool(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFComparisonTool*)
   {
      ::BCMTFComparisonTool *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFComparisonTool));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFComparisonTool", "BAT/BCMTFComparisonTool.h", 31,
                  typeid(::BCMTFComparisonTool), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFComparisonTool_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFComparisonTool) );
      instance.SetDelete(&delete_BCMTFComparisonTool);
      instance.SetDeleteArray(&deleteArray_BCMTFComparisonTool);
      instance.SetDestructor(&destruct_BCMTFComparisonTool);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFComparisonTool*)
   {
      return GenerateInitInstanceLocal((::BCMTFComparisonTool*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFComparisonTool*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFComparisonTool_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFComparisonTool*)0x0)->GetClass();
      BCMTFComparisonTool_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFComparisonTool_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTF_Dictionary();
   static void BCMTF_TClassManip(TClass*);
   static void *new_BCMTF(void *p = 0);
   static void *newArray_BCMTF(Long_t size, void *p);
   static void delete_BCMTF(void *p);
   static void deleteArray_BCMTF(void *p);
   static void destruct_BCMTF(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTF*)
   {
      ::BCMTF *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTF));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTF", "BAT/BCMTF.h", 38,
                  typeid(::BCMTF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTF_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTF) );
      instance.SetNew(&new_BCMTF);
      instance.SetNewArray(&newArray_BCMTF);
      instance.SetDelete(&delete_BCMTF);
      instance.SetDeleteArray(&deleteArray_BCMTF);
      instance.SetDestructor(&destruct_BCMTF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTF*)
   {
      return GenerateInitInstanceLocal((::BCMTF*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTF*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTF_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTF*)0x0)->GetClass();
      BCMTF_TClassManip(theClass);
   return theClass;
   }

   static void BCMTF_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFProcess_Dictionary();
   static void BCMTFProcess_TClassManip(TClass*);
   static void delete_BCMTFProcess(void *p);
   static void deleteArray_BCMTFProcess(void *p);
   static void destruct_BCMTFProcess(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFProcess*)
   {
      ::BCMTFProcess *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFProcess));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFProcess", "BAT/BCMTFProcess.h", 29,
                  typeid(::BCMTFProcess), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFProcess_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFProcess) );
      instance.SetDelete(&delete_BCMTFProcess);
      instance.SetDeleteArray(&deleteArray_BCMTFProcess);
      instance.SetDestructor(&destruct_BCMTFProcess);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFProcess*)
   {
      return GenerateInitInstanceLocal((::BCMTFProcess*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFProcess*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFProcess_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFProcess*)0x0)->GetClass();
      BCMTFProcess_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFProcess_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFSystematic_Dictionary();
   static void BCMTFSystematic_TClassManip(TClass*);
   static void delete_BCMTFSystematic(void *p);
   static void deleteArray_BCMTFSystematic(void *p);
   static void destruct_BCMTFSystematic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFSystematic*)
   {
      ::BCMTFSystematic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFSystematic));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFSystematic", "BAT/BCMTFSystematic.h", 29,
                  typeid(::BCMTFSystematic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFSystematic_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFSystematic) );
      instance.SetDelete(&delete_BCMTFSystematic);
      instance.SetDeleteArray(&deleteArray_BCMTFSystematic);
      instance.SetDestructor(&destruct_BCMTFSystematic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFSystematic*)
   {
      return GenerateInitInstanceLocal((::BCMTFSystematic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFSystematic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFSystematic_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFSystematic*)0x0)->GetClass();
      BCMTFSystematic_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFSystematic_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFSystematicVariation_Dictionary();
   static void BCMTFSystematicVariation_TClassManip(TClass*);
   static void delete_BCMTFSystematicVariation(void *p);
   static void deleteArray_BCMTFSystematicVariation(void *p);
   static void destruct_BCMTFSystematicVariation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFSystematicVariation*)
   {
      ::BCMTFSystematicVariation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFSystematicVariation));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFSystematicVariation", "BAT/BCMTFSystematicVariation.h", 30,
                  typeid(::BCMTFSystematicVariation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFSystematicVariation_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFSystematicVariation) );
      instance.SetDelete(&delete_BCMTFSystematicVariation);
      instance.SetDeleteArray(&deleteArray_BCMTFSystematicVariation);
      instance.SetDestructor(&destruct_BCMTFSystematicVariation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFSystematicVariation*)
   {
      return GenerateInitInstanceLocal((::BCMTFSystematicVariation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFSystematicVariation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFSystematicVariation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFSystematicVariation*)0x0)->GetClass();
      BCMTFSystematicVariation_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFSystematicVariation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCMTFTemplate_Dictionary();
   static void BCMTFTemplate_TClassManip(TClass*);
   static void delete_BCMTFTemplate(void *p);
   static void deleteArray_BCMTFTemplate(void *p);
   static void destruct_BCMTFTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCMTFTemplate*)
   {
      ::BCMTFTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCMTFTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("BCMTFTemplate", "BAT/BCMTFTemplate.h", 32,
                  typeid(::BCMTFTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCMTFTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::BCMTFTemplate) );
      instance.SetDelete(&delete_BCMTFTemplate);
      instance.SetDeleteArray(&deleteArray_BCMTFTemplate);
      instance.SetDestructor(&destruct_BCMTFTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCMTFTemplate*)
   {
      return GenerateInitInstanceLocal((::BCMTFTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCMTFTemplate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCMTFTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCMTFTemplate*)0x0)->GetClass();
      BCMTFTemplate_TClassManip(theClass);
   return theClass;
   }

   static void BCMTFTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFAnalysisFacility(void *p) {
      delete ((::BCMTFAnalysisFacility*)p);
   }
   static void deleteArray_BCMTFAnalysisFacility(void *p) {
      delete [] ((::BCMTFAnalysisFacility*)p);
   }
   static void destruct_BCMTFAnalysisFacility(void *p) {
      typedef ::BCMTFAnalysisFacility current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFAnalysisFacility

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFChannel(void *p) {
      delete ((::BCMTFChannel*)p);
   }
   static void deleteArray_BCMTFChannel(void *p) {
      delete [] ((::BCMTFChannel*)p);
   }
   static void destruct_BCMTFChannel(void *p) {
      typedef ::BCMTFChannel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFChannel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFComparisonTool(void *p) {
      delete ((::BCMTFComparisonTool*)p);
   }
   static void deleteArray_BCMTFComparisonTool(void *p) {
      delete [] ((::BCMTFComparisonTool*)p);
   }
   static void destruct_BCMTFComparisonTool(void *p) {
      typedef ::BCMTFComparisonTool current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFComparisonTool

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCMTF(void *p) {
      return  p ? new(p) ::BCMTF : new ::BCMTF;
   }
   static void *newArray_BCMTF(Long_t nElements, void *p) {
      return p ? new(p) ::BCMTF[nElements] : new ::BCMTF[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCMTF(void *p) {
      delete ((::BCMTF*)p);
   }
   static void deleteArray_BCMTF(void *p) {
      delete [] ((::BCMTF*)p);
   }
   static void destruct_BCMTF(void *p) {
      typedef ::BCMTF current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTF

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFProcess(void *p) {
      delete ((::BCMTFProcess*)p);
   }
   static void deleteArray_BCMTFProcess(void *p) {
      delete [] ((::BCMTFProcess*)p);
   }
   static void destruct_BCMTFProcess(void *p) {
      typedef ::BCMTFProcess current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFProcess

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFSystematic(void *p) {
      delete ((::BCMTFSystematic*)p);
   }
   static void deleteArray_BCMTFSystematic(void *p) {
      delete [] ((::BCMTFSystematic*)p);
   }
   static void destruct_BCMTFSystematic(void *p) {
      typedef ::BCMTFSystematic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFSystematic

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFSystematicVariation(void *p) {
      delete ((::BCMTFSystematicVariation*)p);
   }
   static void deleteArray_BCMTFSystematicVariation(void *p) {
      delete [] ((::BCMTFSystematicVariation*)p);
   }
   static void destruct_BCMTFSystematicVariation(void *p) {
      typedef ::BCMTFSystematicVariation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFSystematicVariation

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCMTFTemplate(void *p) {
      delete ((::BCMTFTemplate*)p);
   }
   static void deleteArray_BCMTFTemplate(void *p) {
      delete [] ((::BCMTFTemplate*)p);
   }
   static void destruct_BCMTFTemplate(void *p) {
      typedef ::BCMTFTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCMTFTemplate

namespace {
  void TriggerDictionaryInitialization_libBATmtf_Impl() {
    static const char* headers[] = {
"BAT/BCMTFAnalysisFacility.h",
"BAT/BCMTFChannel.h",
"BAT/BCMTFComparisonTool.h",
"BAT/BCMTF.h",
"BAT/BCMTFProcess.h",
"BAT/BCMTFSystematic.h",
"BAT/BCMTFSystematicVariation.h",
"BAT/BCMTFTemplate.h",
0
    };
    static const char* includePaths[] = {
"/global/homes/t/tongou/ttbar/batinstall/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.10.04-x86_64-slc6-gcc62-opt/include",
"/global/u1/t/tongou/ttbar/BAT-1.0.0/models/mtf/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libBATmtf dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFAnalysisFacility.h")))  BCMTFAnalysisFacility;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFChannel.h")))  BCMTFChannel;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFComparisonTool.h")))  BCMTFComparisonTool;
class __attribute__((annotate("$clingAutoload$BAT/BCMTF.h")))  BCMTF;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFProcess.h")))  BCMTFProcess;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFSystematic.h")))  BCMTFSystematic;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFSystematicVariation.h")))  BCMTFSystematicVariation;
class __attribute__((annotate("$clingAutoload$BAT/BCMTFTemplate.h")))  BCMTFTemplate;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libBATmtf dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include <BAT/BCMTFAnalysisFacility.h>
#include <BAT/BCMTFChannel.h>
#include <BAT/BCMTFComparisonTool.h>
#include <BAT/BCMTF.h>
#include <BAT/BCMTFProcess.h>
#include <BAT/BCMTFSystematic.h>
#include <BAT/BCMTFSystematicVariation.h>
#include <BAT/BCMTFTemplate.h>

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BCMTF", payloadCode, "@",
"BCMTFAnalysisFacility", payloadCode, "@",
"BCMTFChannel", payloadCode, "@",
"BCMTFComparisonTool", payloadCode, "@",
"BCMTFProcess", payloadCode, "@",
"BCMTFSystematic", payloadCode, "@",
"BCMTFSystematicVariation", payloadCode, "@",
"BCMTFTemplate", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBATmtf",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBATmtf_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBATmtf_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBATmtf() {
  TriggerDictionaryInitialization_libBATmtf_Impl();
}
