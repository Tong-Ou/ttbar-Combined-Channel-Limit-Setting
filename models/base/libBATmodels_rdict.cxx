// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libBATmodels_rdictdOcxx

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
#include ".includes/BAT/BCFitter.h"
#include ".includes/BAT/BCEfficiencyFitter.h"
#include ".includes/BAT/BCGraphFitter.h"
#include ".includes/BAT/BCHistogramFitter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *BCFitter_Dictionary();
   static void BCFitter_TClassManip(TClass*);
   static void delete_BCFitter(void *p);
   static void deleteArray_BCFitter(void *p);
   static void destruct_BCFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCFitter*)
   {
      ::BCFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCFitter));
      static ::ROOT::TGenericClassInfo 
         instance("BCFitter", "BAT/BCFitter.h", 31,
                  typeid(::BCFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCFitter_Dictionary, isa_proxy, 1,
                  sizeof(::BCFitter) );
      instance.SetDelete(&delete_BCFitter);
      instance.SetDeleteArray(&deleteArray_BCFitter);
      instance.SetDestructor(&destruct_BCFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCFitter*)
   {
      return GenerateInitInstanceLocal((::BCFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCFitter*)0x0)->GetClass();
      BCFitter_TClassManip(theClass);
   return theClass;
   }

   static void BCFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCEfficiencyFitter_Dictionary();
   static void BCEfficiencyFitter_TClassManip(TClass*);
   static void delete_BCEfficiencyFitter(void *p);
   static void deleteArray_BCEfficiencyFitter(void *p);
   static void destruct_BCEfficiencyFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCEfficiencyFitter*)
   {
      ::BCEfficiencyFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCEfficiencyFitter));
      static ::ROOT::TGenericClassInfo 
         instance("BCEfficiencyFitter", "BAT/BCEfficiencyFitter.h", 39,
                  typeid(::BCEfficiencyFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCEfficiencyFitter_Dictionary, isa_proxy, 1,
                  sizeof(::BCEfficiencyFitter) );
      instance.SetDelete(&delete_BCEfficiencyFitter);
      instance.SetDeleteArray(&deleteArray_BCEfficiencyFitter);
      instance.SetDestructor(&destruct_BCEfficiencyFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCEfficiencyFitter*)
   {
      return GenerateInitInstanceLocal((::BCEfficiencyFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCEfficiencyFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCEfficiencyFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCEfficiencyFitter*)0x0)->GetClass();
      BCEfficiencyFitter_TClassManip(theClass);
   return theClass;
   }

   static void BCEfficiencyFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCGraphFitter_Dictionary();
   static void BCGraphFitter_TClassManip(TClass*);
   static void delete_BCGraphFitter(void *p);
   static void deleteArray_BCGraphFitter(void *p);
   static void destruct_BCGraphFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCGraphFitter*)
   {
      ::BCGraphFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCGraphFitter));
      static ::ROOT::TGenericClassInfo 
         instance("BCGraphFitter", "BAT/BCGraphFitter.h", 35,
                  typeid(::BCGraphFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCGraphFitter_Dictionary, isa_proxy, 1,
                  sizeof(::BCGraphFitter) );
      instance.SetDelete(&delete_BCGraphFitter);
      instance.SetDeleteArray(&deleteArray_BCGraphFitter);
      instance.SetDestructor(&destruct_BCGraphFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCGraphFitter*)
   {
      return GenerateInitInstanceLocal((::BCGraphFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCGraphFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCGraphFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCGraphFitter*)0x0)->GetClass();
      BCGraphFitter_TClassManip(theClass);
   return theClass;
   }

   static void BCGraphFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCHistogramFitter_Dictionary();
   static void BCHistogramFitter_TClassManip(TClass*);
   static void delete_BCHistogramFitter(void *p);
   static void deleteArray_BCHistogramFitter(void *p);
   static void destruct_BCHistogramFitter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCHistogramFitter*)
   {
      ::BCHistogramFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCHistogramFitter));
      static ::ROOT::TGenericClassInfo 
         instance("BCHistogramFitter", "BAT/BCHistogramFitter.h", 32,
                  typeid(::BCHistogramFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCHistogramFitter_Dictionary, isa_proxy, 1,
                  sizeof(::BCHistogramFitter) );
      instance.SetDelete(&delete_BCHistogramFitter);
      instance.SetDeleteArray(&deleteArray_BCHistogramFitter);
      instance.SetDestructor(&destruct_BCHistogramFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCHistogramFitter*)
   {
      return GenerateInitInstanceLocal((::BCHistogramFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCHistogramFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCHistogramFitter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCHistogramFitter*)0x0)->GetClass();
      BCHistogramFitter_TClassManip(theClass);
   return theClass;
   }

   static void BCHistogramFitter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCFitter(void *p) {
      delete ((::BCFitter*)p);
   }
   static void deleteArray_BCFitter(void *p) {
      delete [] ((::BCFitter*)p);
   }
   static void destruct_BCFitter(void *p) {
      typedef ::BCFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCFitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCEfficiencyFitter(void *p) {
      delete ((::BCEfficiencyFitter*)p);
   }
   static void deleteArray_BCEfficiencyFitter(void *p) {
      delete [] ((::BCEfficiencyFitter*)p);
   }
   static void destruct_BCEfficiencyFitter(void *p) {
      typedef ::BCEfficiencyFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCEfficiencyFitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCGraphFitter(void *p) {
      delete ((::BCGraphFitter*)p);
   }
   static void deleteArray_BCGraphFitter(void *p) {
      delete [] ((::BCGraphFitter*)p);
   }
   static void destruct_BCGraphFitter(void *p) {
      typedef ::BCGraphFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCGraphFitter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCHistogramFitter(void *p) {
      delete ((::BCHistogramFitter*)p);
   }
   static void deleteArray_BCHistogramFitter(void *p) {
      delete [] ((::BCHistogramFitter*)p);
   }
   static void destruct_BCHistogramFitter(void *p) {
      typedef ::BCHistogramFitter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCHistogramFitter

namespace {
  void TriggerDictionaryInitialization_libBATmodels_Impl() {
    static const char* headers[] = {
"BAT/BCFitter.h",
"BAT/BCEfficiencyFitter.h",
"BAT/BCGraphFitter.h",
"BAT/BCHistogramFitter.h",
0
    };
    static const char* includePaths[] = {
"/global/homes/t/tongou/ttbar/batinstall/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.10.04-x86_64-slc6-gcc62-opt/include",
"/global/u1/t/tongou/ttbar/BAT-1.0.0/models/base/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libBATmodels dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BAT/BCFitter.h")))  BCFitter;
class __attribute__((annotate("$clingAutoload$BAT/BCEfficiencyFitter.h")))  BCEfficiencyFitter;
class __attribute__((annotate("$clingAutoload$BAT/BCGraphFitter.h")))  BCGraphFitter;
class __attribute__((annotate("$clingAutoload$BAT/BCHistogramFitter.h")))  BCHistogramFitter;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libBATmodels dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include <BAT/BCFitter.h>
#include <BAT/BCEfficiencyFitter.h>
#include <BAT/BCGraphFitter.h>
#include <BAT/BCHistogramFitter.h>

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BCEfficiencyFitter", payloadCode, "@",
"BCFitter", payloadCode, "@",
"BCGraphFitter", payloadCode, "@",
"BCHistogramFitter", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBATmodels",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBATmodels_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBATmodels_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBATmodels() {
  TriggerDictionaryInitialization_libBATmodels_Impl();
}
