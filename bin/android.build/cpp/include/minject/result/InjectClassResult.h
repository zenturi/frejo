// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_minject_result_InjectClassResult
#define INCLUDED_minject_result_InjectClassResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_minject_result_InjectionResult
#include <minject/result/InjectionResult.h>
#endif
HX_DECLARE_CLASS1(minject,Injector)
HX_DECLARE_CLASS2(minject,result,InjectClassResult)
HX_DECLARE_CLASS2(minject,result,InjectionResult)

namespace minject{
namespace result{


class HXCPP_CLASS_ATTRIBUTES InjectClassResult_obj : public  ::minject::result::InjectionResult_obj
{
	public:
		typedef  ::minject::result::InjectionResult_obj super;
		typedef InjectClassResult_obj OBJ_;
		InjectClassResult_obj();

	public:
		enum { _hx_ClassId = 0x488f79c9 };

		void __construct(hx::Class responseType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="minject.result.InjectClassResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"minject.result.InjectClassResult"); }
		static hx::ObjectPtr< InjectClassResult_obj > __new(hx::Class responseType);
		static hx::ObjectPtr< InjectClassResult_obj > __alloc(hx::Ctx *_hx_ctx,hx::Class responseType);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InjectClassResult_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InjectClassResult",04,b4,f8,94); }

		hx::Class responseType;
		 ::Dynamic getResponse( ::minject::Injector injector);

		virtual ::String toString();

};

} // end namespace minject
} // end namespace result

#endif /* INCLUDED_minject_result_InjectClassResult */ 
