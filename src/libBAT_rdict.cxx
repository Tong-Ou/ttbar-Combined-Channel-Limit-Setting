// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME libBAT_rdictdOcxx

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
#include ".includes/BAT/BCHistogramBase.h"
#include ".includes/BAT/BCLog.h"
#include ".includes/BAT/BCMath.h"
#include ".includes/BAT/BCVariable.h"
#include ".includes/BAT/BCDataPoint.h"
#include ".includes/BAT/BCDataSet.h"
#include ".includes/BAT/BCH1D.h"
#include ".includes/BAT/BCH2D.h"
#include ".includes/BAT/BCParameter.h"
#include ".includes/BAT/BCAux.h"
#include ".includes/BAT/BCPrior.h"
#include ".includes/BAT/BCVariableSet.h"
#include ".includes/BAT/BCConstantPrior.h"
#include ".includes/BAT/BCGaussianPrior.h"
#include ".includes/BAT/BCSplitGaussianPrior.h"
#include ".includes/BAT/BCCauchyPrior.h"
#include ".includes/BAT/BCObservable.h"
#include ".includes/BAT/BCTF1Prior.h"
#include ".includes/BAT/BCTF1LogPrior.h"
#include ".includes/BAT/BCTH1Prior.h"
#include ".includes/BAT/BCPositiveDefinitePrior.h"
#include ".includes/BAT/BCParameterSet.h"
#include ".includes/BAT/BCEngineMCMC.h"
#include ".includes/BAT/BCIntegrate.h"
#include ".includes/BAT/BCModel.h"
#include ".includes/BAT/BCEmptyModel.h"
#include ".includes/BAT/BCPriorModel.h"
#include ".includes/BAT/BCModelManager.h"

// Header files passed via #pragma extra_include

namespace BCMath {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BCMath_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BCMath", 0 /*version*/, "BAT/BCMath.h", 32,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &BCMath_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BCMath_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace BCAux {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *BCAux_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("BCAux", 0 /*version*/, "BAT/BCAux.h", 36,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &BCAux_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *BCAux_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *BCHistogramBase_Dictionary();
   static void BCHistogramBase_TClassManip(TClass*);
   static void *new_BCHistogramBase(void *p = 0);
   static void *newArray_BCHistogramBase(Long_t size, void *p);
   static void delete_BCHistogramBase(void *p);
   static void deleteArray_BCHistogramBase(void *p);
   static void destruct_BCHistogramBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCHistogramBase*)
   {
      ::BCHistogramBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCHistogramBase));
      static ::ROOT::TGenericClassInfo 
         instance("BCHistogramBase", "BAT/BCHistogramBase.h", 33,
                  typeid(::BCHistogramBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCHistogramBase_Dictionary, isa_proxy, 1,
                  sizeof(::BCHistogramBase) );
      instance.SetNew(&new_BCHistogramBase);
      instance.SetNewArray(&newArray_BCHistogramBase);
      instance.SetDelete(&delete_BCHistogramBase);
      instance.SetDeleteArray(&deleteArray_BCHistogramBase);
      instance.SetDestructor(&destruct_BCHistogramBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCHistogramBase*)
   {
      return GenerateInitInstanceLocal((::BCHistogramBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCHistogramBase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCHistogramBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCHistogramBase*)0x0)->GetClass();
      BCHistogramBase_TClassManip(theClass);
   return theClass;
   }

   static void BCHistogramBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCLog_Dictionary();
   static void BCLog_TClassManip(TClass*);
   static void *new_BCLog(void *p = 0);
   static void *newArray_BCLog(Long_t size, void *p);
   static void delete_BCLog(void *p);
   static void deleteArray_BCLog(void *p);
   static void destruct_BCLog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCLog*)
   {
      ::BCLog *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCLog));
      static ::ROOT::TGenericClassInfo 
         instance("BCLog", "BAT/BCLog.h", 51,
                  typeid(::BCLog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCLog_Dictionary, isa_proxy, 1,
                  sizeof(::BCLog) );
      instance.SetNew(&new_BCLog);
      instance.SetNewArray(&newArray_BCLog);
      instance.SetDelete(&delete_BCLog);
      instance.SetDeleteArray(&deleteArray_BCLog);
      instance.SetDestructor(&destruct_BCLog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCLog*)
   {
      return GenerateInitInstanceLocal((::BCLog*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCLog*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCLog_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCLog*)0x0)->GetClass();
      BCLog_TClassManip(theClass);
   return theClass;
   }

   static void BCLog_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCVariable_Dictionary();
   static void BCVariable_TClassManip(TClass*);
   static void *new_BCVariable(void *p = 0);
   static void *newArray_BCVariable(Long_t size, void *p);
   static void delete_BCVariable(void *p);
   static void deleteArray_BCVariable(void *p);
   static void destruct_BCVariable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCVariable*)
   {
      ::BCVariable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCVariable));
      static ::ROOT::TGenericClassInfo 
         instance("BCVariable", "BAT/BCVariable.h", 35,
                  typeid(::BCVariable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCVariable_Dictionary, isa_proxy, 1,
                  sizeof(::BCVariable) );
      instance.SetNew(&new_BCVariable);
      instance.SetNewArray(&newArray_BCVariable);
      instance.SetDelete(&delete_BCVariable);
      instance.SetDeleteArray(&deleteArray_BCVariable);
      instance.SetDestructor(&destruct_BCVariable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCVariable*)
   {
      return GenerateInitInstanceLocal((::BCVariable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCVariable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCVariable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCVariable*)0x0)->GetClass();
      BCVariable_TClassManip(theClass);
   return theClass;
   }

   static void BCVariable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCDataPoint_Dictionary();
   static void BCDataPoint_TClassManip(TClass*);
   static void *new_BCDataPoint(void *p = 0);
   static void *newArray_BCDataPoint(Long_t size, void *p);
   static void delete_BCDataPoint(void *p);
   static void deleteArray_BCDataPoint(void *p);
   static void destruct_BCDataPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCDataPoint*)
   {
      ::BCDataPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCDataPoint));
      static ::ROOT::TGenericClassInfo 
         instance("BCDataPoint", "BAT/BCDataPoint.h", 34,
                  typeid(::BCDataPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCDataPoint_Dictionary, isa_proxy, 1,
                  sizeof(::BCDataPoint) );
      instance.SetNew(&new_BCDataPoint);
      instance.SetNewArray(&newArray_BCDataPoint);
      instance.SetDelete(&delete_BCDataPoint);
      instance.SetDeleteArray(&deleteArray_BCDataPoint);
      instance.SetDestructor(&destruct_BCDataPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCDataPoint*)
   {
      return GenerateInitInstanceLocal((::BCDataPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCDataPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCDataPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCDataPoint*)0x0)->GetClass();
      BCDataPoint_TClassManip(theClass);
   return theClass;
   }

   static void BCDataPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCDataSet_Dictionary();
   static void BCDataSet_TClassManip(TClass*);
   static void *new_BCDataSet(void *p = 0);
   static void *newArray_BCDataSet(Long_t size, void *p);
   static void delete_BCDataSet(void *p);
   static void deleteArray_BCDataSet(void *p);
   static void destruct_BCDataSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCDataSet*)
   {
      ::BCDataSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCDataSet));
      static ::ROOT::TGenericClassInfo 
         instance("BCDataSet", "BAT/BCDataSet.h", 39,
                  typeid(::BCDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCDataSet_Dictionary, isa_proxy, 1,
                  sizeof(::BCDataSet) );
      instance.SetNew(&new_BCDataSet);
      instance.SetNewArray(&newArray_BCDataSet);
      instance.SetDelete(&delete_BCDataSet);
      instance.SetDeleteArray(&deleteArray_BCDataSet);
      instance.SetDestructor(&destruct_BCDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCDataSet*)
   {
      return GenerateInitInstanceLocal((::BCDataSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCDataSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCDataSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCDataSet*)0x0)->GetClass();
      BCDataSet_TClassManip(theClass);
   return theClass;
   }

   static void BCDataSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCH1D_Dictionary();
   static void BCH1D_TClassManip(TClass*);
   static void *new_BCH1D(void *p = 0);
   static void *newArray_BCH1D(Long_t size, void *p);
   static void delete_BCH1D(void *p);
   static void deleteArray_BCH1D(void *p);
   static void destruct_BCH1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCH1D*)
   {
      ::BCH1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCH1D));
      static ::ROOT::TGenericClassInfo 
         instance("BCH1D", "BAT/BCH1D.h", 34,
                  typeid(::BCH1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCH1D_Dictionary, isa_proxy, 1,
                  sizeof(::BCH1D) );
      instance.SetNew(&new_BCH1D);
      instance.SetNewArray(&newArray_BCH1D);
      instance.SetDelete(&delete_BCH1D);
      instance.SetDeleteArray(&deleteArray_BCH1D);
      instance.SetDestructor(&destruct_BCH1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCH1D*)
   {
      return GenerateInitInstanceLocal((::BCH1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCH1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCH1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCH1D*)0x0)->GetClass();
      BCH1D_TClassManip(theClass);
   return theClass;
   }

   static void BCH1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCH2D_Dictionary();
   static void BCH2D_TClassManip(TClass*);
   static void *new_BCH2D(void *p = 0);
   static void *newArray_BCH2D(Long_t size, void *p);
   static void delete_BCH2D(void *p);
   static void deleteArray_BCH2D(void *p);
   static void destruct_BCH2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCH2D*)
   {
      ::BCH2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCH2D));
      static ::ROOT::TGenericClassInfo 
         instance("BCH2D", "BAT/BCH2D.h", 37,
                  typeid(::BCH2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCH2D_Dictionary, isa_proxy, 1,
                  sizeof(::BCH2D) );
      instance.SetNew(&new_BCH2D);
      instance.SetNewArray(&newArray_BCH2D);
      instance.SetDelete(&delete_BCH2D);
      instance.SetDeleteArray(&deleteArray_BCH2D);
      instance.SetDestructor(&destruct_BCH2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCH2D*)
   {
      return GenerateInitInstanceLocal((::BCH2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCH2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCH2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCH2D*)0x0)->GetClass();
      BCH2D_TClassManip(theClass);
   return theClass;
   }

   static void BCH2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCParameter_Dictionary();
   static void BCParameter_TClassManip(TClass*);
   static void *new_BCParameter(void *p = 0);
   static void *newArray_BCParameter(Long_t size, void *p);
   static void delete_BCParameter(void *p);
   static void deleteArray_BCParameter(void *p);
   static void destruct_BCParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCParameter*)
   {
      ::BCParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCParameter));
      static ::ROOT::TGenericClassInfo 
         instance("BCParameter", "BAT/BCParameter.h", 34,
                  typeid(::BCParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCParameter_Dictionary, isa_proxy, 1,
                  sizeof(::BCParameter) );
      instance.SetNew(&new_BCParameter);
      instance.SetNewArray(&newArray_BCParameter);
      instance.SetDelete(&delete_BCParameter);
      instance.SetDeleteArray(&deleteArray_BCParameter);
      instance.SetDestructor(&destruct_BCParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCParameter*)
   {
      return GenerateInitInstanceLocal((::BCParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCParameter*)0x0)->GetClass();
      BCParameter_TClassManip(theClass);
   return theClass;
   }

   static void BCParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCPrior_Dictionary();
   static void BCPrior_TClassManip(TClass*);
   static void delete_BCPrior(void *p);
   static void deleteArray_BCPrior(void *p);
   static void destruct_BCPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCPrior*)
   {
      ::BCPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCPrior", "BAT/BCPrior.h", 49,
                  typeid(::BCPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCPrior) );
      instance.SetDelete(&delete_BCPrior);
      instance.SetDeleteArray(&deleteArray_BCPrior);
      instance.SetDestructor(&destruct_BCPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCPrior*)
   {
      return GenerateInitInstanceLocal((::BCPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCPrior*)0x0)->GetClass();
      BCPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCVariableSetlEBCObservablegR_Dictionary();
   static void BCVariableSetlEBCObservablegR_TClassManip(TClass*);
   static void *new_BCVariableSetlEBCObservablegR(void *p = 0);
   static void *newArray_BCVariableSetlEBCObservablegR(Long_t size, void *p);
   static void delete_BCVariableSetlEBCObservablegR(void *p);
   static void deleteArray_BCVariableSetlEBCObservablegR(void *p);
   static void destruct_BCVariableSetlEBCObservablegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCVariableSet<BCObservable>*)
   {
      ::BCVariableSet<BCObservable> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCVariableSet<BCObservable>));
      static ::ROOT::TGenericClassInfo 
         instance("BCVariableSet<BCObservable>", "BAT/BCVariableSet.h", 35,
                  typeid(::BCVariableSet<BCObservable>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCVariableSetlEBCObservablegR_Dictionary, isa_proxy, 1,
                  sizeof(::BCVariableSet<BCObservable>) );
      instance.SetNew(&new_BCVariableSetlEBCObservablegR);
      instance.SetNewArray(&newArray_BCVariableSetlEBCObservablegR);
      instance.SetDelete(&delete_BCVariableSetlEBCObservablegR);
      instance.SetDeleteArray(&deleteArray_BCVariableSetlEBCObservablegR);
      instance.SetDestructor(&destruct_BCVariableSetlEBCObservablegR);

      ::ROOT::AddClassAlternate("BCVariableSet<BCObservable>","BCObservableSet");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCVariableSet<BCObservable>*)
   {
      return GenerateInitInstanceLocal((::BCVariableSet<BCObservable>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCVariableSet<BCObservable>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCVariableSetlEBCObservablegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCVariableSet<BCObservable>*)0x0)->GetClass();
      BCVariableSetlEBCObservablegR_TClassManip(theClass);
   return theClass;
   }

   static void BCVariableSetlEBCObservablegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCConstantPrior_Dictionary();
   static void BCConstantPrior_TClassManip(TClass*);
   static void *new_BCConstantPrior(void *p = 0);
   static void *newArray_BCConstantPrior(Long_t size, void *p);
   static void delete_BCConstantPrior(void *p);
   static void deleteArray_BCConstantPrior(void *p);
   static void destruct_BCConstantPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCConstantPrior*)
   {
      ::BCConstantPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCConstantPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCConstantPrior", "BAT/BCConstantPrior.h", 33,
                  typeid(::BCConstantPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCConstantPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCConstantPrior) );
      instance.SetNew(&new_BCConstantPrior);
      instance.SetNewArray(&newArray_BCConstantPrior);
      instance.SetDelete(&delete_BCConstantPrior);
      instance.SetDeleteArray(&deleteArray_BCConstantPrior);
      instance.SetDestructor(&destruct_BCConstantPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCConstantPrior*)
   {
      return GenerateInitInstanceLocal((::BCConstantPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCConstantPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCConstantPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCConstantPrior*)0x0)->GetClass();
      BCConstantPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCConstantPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCGaussianPrior_Dictionary();
   static void BCGaussianPrior_TClassManip(TClass*);
   static void delete_BCGaussianPrior(void *p);
   static void deleteArray_BCGaussianPrior(void *p);
   static void destruct_BCGaussianPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCGaussianPrior*)
   {
      ::BCGaussianPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCGaussianPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCGaussianPrior", "BAT/BCGaussianPrior.h", 33,
                  typeid(::BCGaussianPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCGaussianPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCGaussianPrior) );
      instance.SetDelete(&delete_BCGaussianPrior);
      instance.SetDeleteArray(&deleteArray_BCGaussianPrior);
      instance.SetDestructor(&destruct_BCGaussianPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCGaussianPrior*)
   {
      return GenerateInitInstanceLocal((::BCGaussianPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCGaussianPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCGaussianPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCGaussianPrior*)0x0)->GetClass();
      BCGaussianPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCGaussianPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCSplitGaussianPrior_Dictionary();
   static void BCSplitGaussianPrior_TClassManip(TClass*);
   static void delete_BCSplitGaussianPrior(void *p);
   static void deleteArray_BCSplitGaussianPrior(void *p);
   static void destruct_BCSplitGaussianPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCSplitGaussianPrior*)
   {
      ::BCSplitGaussianPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCSplitGaussianPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCSplitGaussianPrior", "BAT/BCSplitGaussianPrior.h", 32,
                  typeid(::BCSplitGaussianPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCSplitGaussianPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCSplitGaussianPrior) );
      instance.SetDelete(&delete_BCSplitGaussianPrior);
      instance.SetDeleteArray(&deleteArray_BCSplitGaussianPrior);
      instance.SetDestructor(&destruct_BCSplitGaussianPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCSplitGaussianPrior*)
   {
      return GenerateInitInstanceLocal((::BCSplitGaussianPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCSplitGaussianPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCSplitGaussianPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCSplitGaussianPrior*)0x0)->GetClass();
      BCSplitGaussianPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCSplitGaussianPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCCauchyPrior_Dictionary();
   static void BCCauchyPrior_TClassManip(TClass*);
   static void delete_BCCauchyPrior(void *p);
   static void deleteArray_BCCauchyPrior(void *p);
   static void destruct_BCCauchyPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCCauchyPrior*)
   {
      ::BCCauchyPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCCauchyPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCCauchyPrior", "BAT/BCCauchyPrior.h", 32,
                  typeid(::BCCauchyPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCCauchyPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCCauchyPrior) );
      instance.SetDelete(&delete_BCCauchyPrior);
      instance.SetDeleteArray(&deleteArray_BCCauchyPrior);
      instance.SetDestructor(&destruct_BCCauchyPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCCauchyPrior*)
   {
      return GenerateInitInstanceLocal((::BCCauchyPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCCauchyPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCCauchyPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCCauchyPrior*)0x0)->GetClass();
      BCCauchyPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCCauchyPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCObservable_Dictionary();
   static void BCObservable_TClassManip(TClass*);
   static void *new_BCObservable(void *p = 0);
   static void *newArray_BCObservable(Long_t size, void *p);
   static void delete_BCObservable(void *p);
   static void deleteArray_BCObservable(void *p);
   static void destruct_BCObservable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCObservable*)
   {
      ::BCObservable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCObservable));
      static ::ROOT::TGenericClassInfo 
         instance("BCObservable", "BAT/BCObservable.h", 32,
                  typeid(::BCObservable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCObservable_Dictionary, isa_proxy, 1,
                  sizeof(::BCObservable) );
      instance.SetNew(&new_BCObservable);
      instance.SetNewArray(&newArray_BCObservable);
      instance.SetDelete(&delete_BCObservable);
      instance.SetDeleteArray(&deleteArray_BCObservable);
      instance.SetDestructor(&destruct_BCObservable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCObservable*)
   {
      return GenerateInitInstanceLocal((::BCObservable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCObservable*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCObservable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCObservable*)0x0)->GetClass();
      BCObservable_TClassManip(theClass);
   return theClass;
   }

   static void BCObservable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCTF1Prior_Dictionary();
   static void BCTF1Prior_TClassManip(TClass*);
   static void delete_BCTF1Prior(void *p);
   static void deleteArray_BCTF1Prior(void *p);
   static void destruct_BCTF1Prior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCTF1Prior*)
   {
      ::BCTF1Prior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCTF1Prior));
      static ::ROOT::TGenericClassInfo 
         instance("BCTF1Prior", "BAT/BCTF1Prior.h", 32,
                  typeid(::BCTF1Prior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCTF1Prior_Dictionary, isa_proxy, 1,
                  sizeof(::BCTF1Prior) );
      instance.SetDelete(&delete_BCTF1Prior);
      instance.SetDeleteArray(&deleteArray_BCTF1Prior);
      instance.SetDestructor(&destruct_BCTF1Prior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCTF1Prior*)
   {
      return GenerateInitInstanceLocal((::BCTF1Prior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCTF1Prior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCTF1Prior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCTF1Prior*)0x0)->GetClass();
      BCTF1Prior_TClassManip(theClass);
   return theClass;
   }

   static void BCTF1Prior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCTF1LogPrior_Dictionary();
   static void BCTF1LogPrior_TClassManip(TClass*);
   static void delete_BCTF1LogPrior(void *p);
   static void deleteArray_BCTF1LogPrior(void *p);
   static void destruct_BCTF1LogPrior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCTF1LogPrior*)
   {
      ::BCTF1LogPrior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCTF1LogPrior));
      static ::ROOT::TGenericClassInfo 
         instance("BCTF1LogPrior", "BAT/BCTF1LogPrior.h", 32,
                  typeid(::BCTF1LogPrior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCTF1LogPrior_Dictionary, isa_proxy, 1,
                  sizeof(::BCTF1LogPrior) );
      instance.SetDelete(&delete_BCTF1LogPrior);
      instance.SetDeleteArray(&deleteArray_BCTF1LogPrior);
      instance.SetDestructor(&destruct_BCTF1LogPrior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCTF1LogPrior*)
   {
      return GenerateInitInstanceLocal((::BCTF1LogPrior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCTF1LogPrior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCTF1LogPrior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCTF1LogPrior*)0x0)->GetClass();
      BCTF1LogPrior_TClassManip(theClass);
   return theClass;
   }

   static void BCTF1LogPrior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCTH1Prior_Dictionary();
   static void BCTH1Prior_TClassManip(TClass*);
   static void delete_BCTH1Prior(void *p);
   static void deleteArray_BCTH1Prior(void *p);
   static void destruct_BCTH1Prior(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCTH1Prior*)
   {
      ::BCTH1Prior *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCTH1Prior));
      static ::ROOT::TGenericClassInfo 
         instance("BCTH1Prior", "BAT/BCTH1Prior.h", 30,
                  typeid(::BCTH1Prior), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCTH1Prior_Dictionary, isa_proxy, 1,
                  sizeof(::BCTH1Prior) );
      instance.SetDelete(&delete_BCTH1Prior);
      instance.SetDeleteArray(&deleteArray_BCTH1Prior);
      instance.SetDestructor(&destruct_BCTH1Prior);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCTH1Prior*)
   {
      return GenerateInitInstanceLocal((::BCTH1Prior*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCTH1Prior*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCTH1Prior_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCTH1Prior*)0x0)->GetClass();
      BCTH1Prior_TClassManip(theClass);
   return theClass;
   }

   static void BCTH1Prior_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCParameterSet_Dictionary();
   static void BCParameterSet_TClassManip(TClass*);
   static void *new_BCParameterSet(void *p = 0);
   static void *newArray_BCParameterSet(Long_t size, void *p);
   static void delete_BCParameterSet(void *p);
   static void deleteArray_BCParameterSet(void *p);
   static void destruct_BCParameterSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCParameterSet*)
   {
      ::BCParameterSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCParameterSet));
      static ::ROOT::TGenericClassInfo 
         instance("BCParameterSet", "BAT/BCParameterSet.h", 30,
                  typeid(::BCParameterSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCParameterSet_Dictionary, isa_proxy, 1,
                  sizeof(::BCParameterSet) );
      instance.SetNew(&new_BCParameterSet);
      instance.SetNewArray(&newArray_BCParameterSet);
      instance.SetDelete(&delete_BCParameterSet);
      instance.SetDeleteArray(&deleteArray_BCParameterSet);
      instance.SetDestructor(&destruct_BCParameterSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCParameterSet*)
   {
      return GenerateInitInstanceLocal((::BCParameterSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCParameterSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCParameterSet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCParameterSet*)0x0)->GetClass();
      BCParameterSet_TClassManip(theClass);
   return theClass;
   }

   static void BCParameterSet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCEngineMCMC_Dictionary();
   static void BCEngineMCMC_TClassManip(TClass*);
   static void delete_BCEngineMCMC(void *p);
   static void deleteArray_BCEngineMCMC(void *p);
   static void destruct_BCEngineMCMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCEngineMCMC*)
   {
      ::BCEngineMCMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCEngineMCMC));
      static ::ROOT::TGenericClassInfo 
         instance("BCEngineMCMC", "BAT/BCEngineMCMC.h", 55,
                  typeid(::BCEngineMCMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCEngineMCMC_Dictionary, isa_proxy, 1,
                  sizeof(::BCEngineMCMC) );
      instance.SetDelete(&delete_BCEngineMCMC);
      instance.SetDeleteArray(&deleteArray_BCEngineMCMC);
      instance.SetDestructor(&destruct_BCEngineMCMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCEngineMCMC*)
   {
      return GenerateInitInstanceLocal((::BCEngineMCMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCEngineMCMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCEngineMCMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCEngineMCMC*)0x0)->GetClass();
      BCEngineMCMC_TClassManip(theClass);
   return theClass;
   }

   static void BCEngineMCMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCIntegrate_Dictionary();
   static void BCIntegrate_TClassManip(TClass*);
   static void delete_BCIntegrate(void *p);
   static void deleteArray_BCIntegrate(void *p);
   static void destruct_BCIntegrate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCIntegrate*)
   {
      ::BCIntegrate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCIntegrate));
      static ::ROOT::TGenericClassInfo 
         instance("BCIntegrate", "BAT/BCIntegrate.h", 143,
                  typeid(::BCIntegrate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCIntegrate_Dictionary, isa_proxy, 1,
                  sizeof(::BCIntegrate) );
      instance.SetDelete(&delete_BCIntegrate);
      instance.SetDeleteArray(&deleteArray_BCIntegrate);
      instance.SetDestructor(&destruct_BCIntegrate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCIntegrate*)
   {
      return GenerateInitInstanceLocal((::BCIntegrate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCIntegrate*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCIntegrate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCIntegrate*)0x0)->GetClass();
      BCIntegrate_TClassManip(theClass);
   return theClass;
   }

   static void BCIntegrate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCModel_Dictionary();
   static void BCModel_TClassManip(TClass*);
   static void delete_BCModel(void *p);
   static void deleteArray_BCModel(void *p);
   static void destruct_BCModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCModel*)
   {
      ::BCModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCModel));
      static ::ROOT::TGenericClassInfo 
         instance("BCModel", "BAT/BCModel.h", 39,
                  typeid(::BCModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCModel_Dictionary, isa_proxy, 1,
                  sizeof(::BCModel) );
      instance.SetDelete(&delete_BCModel);
      instance.SetDeleteArray(&deleteArray_BCModel);
      instance.SetDestructor(&destruct_BCModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCModel*)
   {
      return GenerateInitInstanceLocal((::BCModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCModel*)0x0)->GetClass();
      BCModel_TClassManip(theClass);
   return theClass;
   }

   static void BCModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCEmptyModel_Dictionary();
   static void BCEmptyModel_TClassManip(TClass*);
   static void *new_BCEmptyModel(void *p = 0);
   static void *newArray_BCEmptyModel(Long_t size, void *p);
   static void delete_BCEmptyModel(void *p);
   static void deleteArray_BCEmptyModel(void *p);
   static void destruct_BCEmptyModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCEmptyModel*)
   {
      ::BCEmptyModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCEmptyModel));
      static ::ROOT::TGenericClassInfo 
         instance("BCEmptyModel", "BAT/BCEmptyModel.h", 29,
                  typeid(::BCEmptyModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCEmptyModel_Dictionary, isa_proxy, 1,
                  sizeof(::BCEmptyModel) );
      instance.SetNew(&new_BCEmptyModel);
      instance.SetNewArray(&newArray_BCEmptyModel);
      instance.SetDelete(&delete_BCEmptyModel);
      instance.SetDeleteArray(&deleteArray_BCEmptyModel);
      instance.SetDestructor(&destruct_BCEmptyModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCEmptyModel*)
   {
      return GenerateInitInstanceLocal((::BCEmptyModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCEmptyModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCEmptyModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCEmptyModel*)0x0)->GetClass();
      BCEmptyModel_TClassManip(theClass);
   return theClass;
   }

   static void BCEmptyModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCPriorModel_Dictionary();
   static void BCPriorModel_TClassManip(TClass*);
   static void delete_BCPriorModel(void *p);
   static void deleteArray_BCPriorModel(void *p);
   static void destruct_BCPriorModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCPriorModel*)
   {
      ::BCPriorModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCPriorModel));
      static ::ROOT::TGenericClassInfo 
         instance("BCPriorModel", "BAT/BCPriorModel.h", 30,
                  typeid(::BCPriorModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCPriorModel_Dictionary, isa_proxy, 1,
                  sizeof(::BCPriorModel) );
      instance.SetDelete(&delete_BCPriorModel);
      instance.SetDeleteArray(&deleteArray_BCPriorModel);
      instance.SetDestructor(&destruct_BCPriorModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCPriorModel*)
   {
      return GenerateInitInstanceLocal((::BCPriorModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCPriorModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCPriorModel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCPriorModel*)0x0)->GetClass();
      BCPriorModel_TClassManip(theClass);
   return theClass;
   }

   static void BCPriorModel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BCModelManager_Dictionary();
   static void BCModelManager_TClassManip(TClass*);
   static void *new_BCModelManager(void *p = 0);
   static void *newArray_BCModelManager(Long_t size, void *p);
   static void delete_BCModelManager(void *p);
   static void deleteArray_BCModelManager(void *p);
   static void destruct_BCModelManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BCModelManager*)
   {
      ::BCModelManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BCModelManager));
      static ::ROOT::TGenericClassInfo 
         instance("BCModelManager", "BAT/BCModelManager.h", 34,
                  typeid(::BCModelManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BCModelManager_Dictionary, isa_proxy, 1,
                  sizeof(::BCModelManager) );
      instance.SetNew(&new_BCModelManager);
      instance.SetNewArray(&newArray_BCModelManager);
      instance.SetDelete(&delete_BCModelManager);
      instance.SetDeleteArray(&deleteArray_BCModelManager);
      instance.SetDestructor(&destruct_BCModelManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BCModelManager*)
   {
      return GenerateInitInstanceLocal((::BCModelManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::BCModelManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BCModelManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BCModelManager*)0x0)->GetClass();
      BCModelManager_TClassManip(theClass);
   return theClass;
   }

   static void BCModelManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCHistogramBase(void *p) {
      return  p ? new(p) ::BCHistogramBase : new ::BCHistogramBase;
   }
   static void *newArray_BCHistogramBase(Long_t nElements, void *p) {
      return p ? new(p) ::BCHistogramBase[nElements] : new ::BCHistogramBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCHistogramBase(void *p) {
      delete ((::BCHistogramBase*)p);
   }
   static void deleteArray_BCHistogramBase(void *p) {
      delete [] ((::BCHistogramBase*)p);
   }
   static void destruct_BCHistogramBase(void *p) {
      typedef ::BCHistogramBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCHistogramBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCLog(void *p) {
      return  p ? new(p) ::BCLog : new ::BCLog;
   }
   static void *newArray_BCLog(Long_t nElements, void *p) {
      return p ? new(p) ::BCLog[nElements] : new ::BCLog[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCLog(void *p) {
      delete ((::BCLog*)p);
   }
   static void deleteArray_BCLog(void *p) {
      delete [] ((::BCLog*)p);
   }
   static void destruct_BCLog(void *p) {
      typedef ::BCLog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCLog

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCVariable(void *p) {
      return  p ? new(p) ::BCVariable : new ::BCVariable;
   }
   static void *newArray_BCVariable(Long_t nElements, void *p) {
      return p ? new(p) ::BCVariable[nElements] : new ::BCVariable[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCVariable(void *p) {
      delete ((::BCVariable*)p);
   }
   static void deleteArray_BCVariable(void *p) {
      delete [] ((::BCVariable*)p);
   }
   static void destruct_BCVariable(void *p) {
      typedef ::BCVariable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCVariable

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCDataPoint(void *p) {
      return  p ? new(p) ::BCDataPoint : new ::BCDataPoint;
   }
   static void *newArray_BCDataPoint(Long_t nElements, void *p) {
      return p ? new(p) ::BCDataPoint[nElements] : new ::BCDataPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCDataPoint(void *p) {
      delete ((::BCDataPoint*)p);
   }
   static void deleteArray_BCDataPoint(void *p) {
      delete [] ((::BCDataPoint*)p);
   }
   static void destruct_BCDataPoint(void *p) {
      typedef ::BCDataPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCDataPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCDataSet(void *p) {
      return  p ? new(p) ::BCDataSet : new ::BCDataSet;
   }
   static void *newArray_BCDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::BCDataSet[nElements] : new ::BCDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCDataSet(void *p) {
      delete ((::BCDataSet*)p);
   }
   static void deleteArray_BCDataSet(void *p) {
      delete [] ((::BCDataSet*)p);
   }
   static void destruct_BCDataSet(void *p) {
      typedef ::BCDataSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCDataSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCH1D(void *p) {
      return  p ? new(p) ::BCH1D : new ::BCH1D;
   }
   static void *newArray_BCH1D(Long_t nElements, void *p) {
      return p ? new(p) ::BCH1D[nElements] : new ::BCH1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCH1D(void *p) {
      delete ((::BCH1D*)p);
   }
   static void deleteArray_BCH1D(void *p) {
      delete [] ((::BCH1D*)p);
   }
   static void destruct_BCH1D(void *p) {
      typedef ::BCH1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCH1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCH2D(void *p) {
      return  p ? new(p) ::BCH2D : new ::BCH2D;
   }
   static void *newArray_BCH2D(Long_t nElements, void *p) {
      return p ? new(p) ::BCH2D[nElements] : new ::BCH2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCH2D(void *p) {
      delete ((::BCH2D*)p);
   }
   static void deleteArray_BCH2D(void *p) {
      delete [] ((::BCH2D*)p);
   }
   static void destruct_BCH2D(void *p) {
      typedef ::BCH2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCH2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCParameter(void *p) {
      return  p ? new(p) ::BCParameter : new ::BCParameter;
   }
   static void *newArray_BCParameter(Long_t nElements, void *p) {
      return p ? new(p) ::BCParameter[nElements] : new ::BCParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCParameter(void *p) {
      delete ((::BCParameter*)p);
   }
   static void deleteArray_BCParameter(void *p) {
      delete [] ((::BCParameter*)p);
   }
   static void destruct_BCParameter(void *p) {
      typedef ::BCParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCParameter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCPrior(void *p) {
      delete ((::BCPrior*)p);
   }
   static void deleteArray_BCPrior(void *p) {
      delete [] ((::BCPrior*)p);
   }
   static void destruct_BCPrior(void *p) {
      typedef ::BCPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCPrior

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCVariableSetlEBCObservablegR(void *p) {
      return  p ? new(p) ::BCVariableSet<BCObservable> : new ::BCVariableSet<BCObservable>;
   }
   static void *newArray_BCVariableSetlEBCObservablegR(Long_t nElements, void *p) {
      return p ? new(p) ::BCVariableSet<BCObservable>[nElements] : new ::BCVariableSet<BCObservable>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCVariableSetlEBCObservablegR(void *p) {
      delete ((::BCVariableSet<BCObservable>*)p);
   }
   static void deleteArray_BCVariableSetlEBCObservablegR(void *p) {
      delete [] ((::BCVariableSet<BCObservable>*)p);
   }
   static void destruct_BCVariableSetlEBCObservablegR(void *p) {
      typedef ::BCVariableSet<BCObservable> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCVariableSet<BCObservable>

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCConstantPrior(void *p) {
      return  p ? new(p) ::BCConstantPrior : new ::BCConstantPrior;
   }
   static void *newArray_BCConstantPrior(Long_t nElements, void *p) {
      return p ? new(p) ::BCConstantPrior[nElements] : new ::BCConstantPrior[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCConstantPrior(void *p) {
      delete ((::BCConstantPrior*)p);
   }
   static void deleteArray_BCConstantPrior(void *p) {
      delete [] ((::BCConstantPrior*)p);
   }
   static void destruct_BCConstantPrior(void *p) {
      typedef ::BCConstantPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCConstantPrior

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCGaussianPrior(void *p) {
      delete ((::BCGaussianPrior*)p);
   }
   static void deleteArray_BCGaussianPrior(void *p) {
      delete [] ((::BCGaussianPrior*)p);
   }
   static void destruct_BCGaussianPrior(void *p) {
      typedef ::BCGaussianPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCGaussianPrior

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCSplitGaussianPrior(void *p) {
      delete ((::BCSplitGaussianPrior*)p);
   }
   static void deleteArray_BCSplitGaussianPrior(void *p) {
      delete [] ((::BCSplitGaussianPrior*)p);
   }
   static void destruct_BCSplitGaussianPrior(void *p) {
      typedef ::BCSplitGaussianPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCSplitGaussianPrior

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCCauchyPrior(void *p) {
      delete ((::BCCauchyPrior*)p);
   }
   static void deleteArray_BCCauchyPrior(void *p) {
      delete [] ((::BCCauchyPrior*)p);
   }
   static void destruct_BCCauchyPrior(void *p) {
      typedef ::BCCauchyPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCCauchyPrior

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCObservable(void *p) {
      return  p ? new(p) ::BCObservable : new ::BCObservable;
   }
   static void *newArray_BCObservable(Long_t nElements, void *p) {
      return p ? new(p) ::BCObservable[nElements] : new ::BCObservable[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCObservable(void *p) {
      delete ((::BCObservable*)p);
   }
   static void deleteArray_BCObservable(void *p) {
      delete [] ((::BCObservable*)p);
   }
   static void destruct_BCObservable(void *p) {
      typedef ::BCObservable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCObservable

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCTF1Prior(void *p) {
      delete ((::BCTF1Prior*)p);
   }
   static void deleteArray_BCTF1Prior(void *p) {
      delete [] ((::BCTF1Prior*)p);
   }
   static void destruct_BCTF1Prior(void *p) {
      typedef ::BCTF1Prior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCTF1Prior

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCTF1LogPrior(void *p) {
      delete ((::BCTF1LogPrior*)p);
   }
   static void deleteArray_BCTF1LogPrior(void *p) {
      delete [] ((::BCTF1LogPrior*)p);
   }
   static void destruct_BCTF1LogPrior(void *p) {
      typedef ::BCTF1LogPrior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCTF1LogPrior

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCTH1Prior(void *p) {
      delete ((::BCTH1Prior*)p);
   }
   static void deleteArray_BCTH1Prior(void *p) {
      delete [] ((::BCTH1Prior*)p);
   }
   static void destruct_BCTH1Prior(void *p) {
      typedef ::BCTH1Prior current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCTH1Prior

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCParameterSet(void *p) {
      return  p ? new(p) ::BCParameterSet : new ::BCParameterSet;
   }
   static void *newArray_BCParameterSet(Long_t nElements, void *p) {
      return p ? new(p) ::BCParameterSet[nElements] : new ::BCParameterSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCParameterSet(void *p) {
      delete ((::BCParameterSet*)p);
   }
   static void deleteArray_BCParameterSet(void *p) {
      delete [] ((::BCParameterSet*)p);
   }
   static void destruct_BCParameterSet(void *p) {
      typedef ::BCParameterSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCParameterSet

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCEngineMCMC(void *p) {
      delete ((::BCEngineMCMC*)p);
   }
   static void deleteArray_BCEngineMCMC(void *p) {
      delete [] ((::BCEngineMCMC*)p);
   }
   static void destruct_BCEngineMCMC(void *p) {
      typedef ::BCEngineMCMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCEngineMCMC

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCIntegrate(void *p) {
      delete ((::BCIntegrate*)p);
   }
   static void deleteArray_BCIntegrate(void *p) {
      delete [] ((::BCIntegrate*)p);
   }
   static void destruct_BCIntegrate(void *p) {
      typedef ::BCIntegrate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCIntegrate

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCModel(void *p) {
      delete ((::BCModel*)p);
   }
   static void deleteArray_BCModel(void *p) {
      delete [] ((::BCModel*)p);
   }
   static void destruct_BCModel(void *p) {
      typedef ::BCModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCEmptyModel(void *p) {
      return  p ? new(p) ::BCEmptyModel : new ::BCEmptyModel;
   }
   static void *newArray_BCEmptyModel(Long_t nElements, void *p) {
      return p ? new(p) ::BCEmptyModel[nElements] : new ::BCEmptyModel[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCEmptyModel(void *p) {
      delete ((::BCEmptyModel*)p);
   }
   static void deleteArray_BCEmptyModel(void *p) {
      delete [] ((::BCEmptyModel*)p);
   }
   static void destruct_BCEmptyModel(void *p) {
      typedef ::BCEmptyModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCEmptyModel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_BCPriorModel(void *p) {
      delete ((::BCPriorModel*)p);
   }
   static void deleteArray_BCPriorModel(void *p) {
      delete [] ((::BCPriorModel*)p);
   }
   static void destruct_BCPriorModel(void *p) {
      typedef ::BCPriorModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCPriorModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_BCModelManager(void *p) {
      return  p ? new(p) ::BCModelManager : new ::BCModelManager;
   }
   static void *newArray_BCModelManager(Long_t nElements, void *p) {
      return p ? new(p) ::BCModelManager[nElements] : new ::BCModelManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_BCModelManager(void *p) {
      delete ((::BCModelManager*)p);
   }
   static void deleteArray_BCModelManager(void *p) {
      delete [] ((::BCModelManager*)p);
   }
   static void destruct_BCModelManager(void *p) {
      typedef ::BCModelManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BCModelManager

namespace {
  void TriggerDictionaryInitialization_libBAT_Impl() {
    static const char* headers[] = {
"BAT/BCHistogramBase.h",
"BAT/BCLog.h",
"BAT/BCMath.h",
"BAT/BCVariable.h",
"BAT/BCDataPoint.h",
"BAT/BCDataSet.h",
"BAT/BCH1D.h",
"BAT/BCH2D.h",
"BAT/BCParameter.h",
"BAT/BCAux.h",
"BAT/BCPrior.h",
"BAT/BCVariableSet.h",
"BAT/BCConstantPrior.h",
"BAT/BCGaussianPrior.h",
"BAT/BCSplitGaussianPrior.h",
"BAT/BCCauchyPrior.h",
"BAT/BCObservable.h",
"BAT/BCTF1Prior.h",
"BAT/BCTF1LogPrior.h",
"BAT/BCTH1Prior.h",
"BAT/BCPositiveDefinitePrior.h",
"BAT/BCParameterSet.h",
"BAT/BCEngineMCMC.h",
"BAT/BCIntegrate.h",
"BAT/BCModel.h",
"BAT/BCEmptyModel.h",
"BAT/BCPriorModel.h",
"BAT/BCModelManager.h",
0
    };
    static const char* includePaths[] = {
"/global/homes/t/tongou/ttbar/batinstall/include",
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/root/6.10.04-x86_64-slc6-gcc62-opt/include",
"/global/u1/t/tongou/ttbar/BAT-1.0.0/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libBAT dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$BAT/BCHistogramBase.h")))  BCHistogramBase;
class __attribute__((annotate("$clingAutoload$BAT/BCLog.h")))  BCLog;
class __attribute__((annotate("$clingAutoload$BAT/BCVariable.h")))  BCVariable;
class __attribute__((annotate("$clingAutoload$BAT/BCDataPoint.h")))  BCDataPoint;
class __attribute__((annotate("$clingAutoload$BAT/BCDataSet.h")))  BCDataSet;
class __attribute__((annotate("$clingAutoload$BAT/BCH1D.h")))  BCH1D;
class __attribute__((annotate("$clingAutoload$BAT/BCH2D.h")))  BCH2D;
class __attribute__((annotate("$clingAutoload$BAT/BCParameter.h")))  BCParameter;
class __attribute__((annotate("$clingAutoload$BAT/BCPrior.h")))  BCPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCObservable.h")))  BCObservable;
template <class T> class __attribute__((annotate("$clingAutoload$BAT/BCVariableSet.h")))  BCVariableSet;

class __attribute__((annotate("$clingAutoload$BAT/BCConstantPrior.h")))  BCConstantPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCGaussianPrior.h")))  BCGaussianPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCSplitGaussianPrior.h")))  BCSplitGaussianPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCCauchyPrior.h")))  BCCauchyPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCTF1Prior.h")))  BCTF1Prior;
class __attribute__((annotate("$clingAutoload$BAT/BCTF1LogPrior.h")))  BCTF1LogPrior;
class __attribute__((annotate("$clingAutoload$BAT/BCTH1Prior.h")))  BCTH1Prior;
class __attribute__((annotate("$clingAutoload$BAT/BCParameterSet.h")))  BCParameterSet;
class __attribute__((annotate("$clingAutoload$BAT/BCEngineMCMC.h")))  BCEngineMCMC;
class __attribute__((annotate("$clingAutoload$BAT/BCIntegrate.h")))  BCIntegrate;
class __attribute__((annotate("$clingAutoload$BAT/BCModel.h")))  BCModel;
class __attribute__((annotate("$clingAutoload$BAT/BCEmptyModel.h")))  BCEmptyModel;
class __attribute__((annotate("$clingAutoload$BAT/BCPriorModel.h")))  BCPriorModel;
class __attribute__((annotate("$clingAutoload$BAT/BCModelManager.h")))  BCModelManager;
typedef BCVariableSet<BCObservable> BCObservableSet __attribute__((annotate("$clingAutoload$BAT/BCObservable.h"))) ;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libBAT dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include <BAT/BCHistogramBase.h>
#include <BAT/BCLog.h>
#include <BAT/BCMath.h>
#include <BAT/BCVariable.h>
#include <BAT/BCDataPoint.h>
#include <BAT/BCDataSet.h>
#include <BAT/BCH1D.h>
#include <BAT/BCH2D.h>
#include <BAT/BCParameter.h>
#include <BAT/BCAux.h>
#include <BAT/BCPrior.h>
#include <BAT/BCVariableSet.h>
#include <BAT/BCConstantPrior.h>
#include <BAT/BCGaussianPrior.h>
#include <BAT/BCSplitGaussianPrior.h>
#include <BAT/BCCauchyPrior.h>
#include <BAT/BCObservable.h>
#include <BAT/BCTF1Prior.h>
#include <BAT/BCTF1LogPrior.h>
#include <BAT/BCTH1Prior.h>
#include <BAT/BCPositiveDefinitePrior.h>
#include <BAT/BCParameterSet.h>
#include <BAT/BCEngineMCMC.h>
#include <BAT/BCIntegrate.h>
#include <BAT/BCModel.h>
#include <BAT/BCEmptyModel.h>
#include <BAT/BCPriorModel.h>
#include <BAT/BCModelManager.h>

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BCCauchyPrior", payloadCode, "@",
"BCConstantPrior", payloadCode, "@",
"BCDataPoint", payloadCode, "@",
"BCDataSet", payloadCode, "@",
"BCEmptyModel", payloadCode, "@",
"BCEngineMCMC", payloadCode, "@",
"BCGaussianPrior", payloadCode, "@",
"BCH1D", payloadCode, "@",
"BCH2D", payloadCode, "@",
"BCHistogramBase", payloadCode, "@",
"BCIntegrate", payloadCode, "@",
"BCLog", payloadCode, "@",
"BCModel", payloadCode, "@",
"BCModelManager", payloadCode, "@",
"BCObservable", payloadCode, "@",
"BCObservableSet", payloadCode, "@",
"BCParameter", payloadCode, "@",
"BCParameterSet", payloadCode, "@",
"BCPrior", payloadCode, "@",
"BCPriorModel", payloadCode, "@",
"BCSplitGaussianPrior", payloadCode, "@",
"BCTF1LogPrior", payloadCode, "@",
"BCTF1Prior", payloadCode, "@",
"BCTH1Prior", payloadCode, "@",
"BCVariable", payloadCode, "@",
"BCVariableSet<BCObservable>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libBAT",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libBAT_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libBAT_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libBAT() {
  TriggerDictionaryInitialization_libBAT_Impl();
}
