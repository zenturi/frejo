// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_minject_result_InjectValueResult
#define INCLUDED_minject_result_InjectValueResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_minject_result_InjectionResult
#include <minject/result/InjectionResult.h>
#endif
HX_DECLARE_CLASS1(minject,Injector)
HX_DECLARE_CLASS2(minject,result,InjectValueResult)
HX_DECLARE_CLASS2(minject,result,InjectionResult)

namespace minject{
namespace result{


class HXCPP_CLASS_ATTRIBUTES InjectValueResult_obj : public  ::minject::result::InjectionResult_obj
{
	public:
		typedef  ::minject::result::InjectionResult_obj super;
		typedef InjectValueResult_obj OBJ_;
		InjectValueResult_obj();

	public:
		enum { _hx_ClassId = 0x02f22326 };

		void __construct( ::Dynamic value);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="minject.result.InjectValueResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"minject.result.InjectValueResult"); }
		static hx::ObjectPtr< InjectValueResult_obj > __new( ::Dynamic value);
		static hx::ObjectPtr< InjectValueResult_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InjectValueResult_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InjectValueResult",fd,6b,df,1e); }

		 ::Dynamic value;
		 ::Dynamic getResponse( ::minject::Injector injector);

		virtual ::String toString();

};

} // end namespace minject
} // end namespace result

#endif /* INCLUDED_minject_result_InjectValueResult */ 