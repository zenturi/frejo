// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_minject_point_MethodInjectionPoint
#define INCLUDED_minject_point_MethodInjectionPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_minject_point_InjectionPoint
#include <minject/point/InjectionPoint.h>
#endif
HX_DECLARE_CLASS1(minject,Injector)
HX_DECLARE_CLASS2(minject,point,InjectionPoint)
HX_DECLARE_CLASS2(minject,point,MethodInjectionPoint)

namespace minject{
namespace point{


class HXCPP_CLASS_ATTRIBUTES MethodInjectionPoint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MethodInjectionPoint_obj OBJ_;
		MethodInjectionPoint_obj();

	public:
		enum { _hx_ClassId = 0x6ee876ac };

		void __construct(::String name,::Array< ::Dynamic> args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="minject.point.MethodInjectionPoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"minject.point.MethodInjectionPoint"); }
		static hx::ObjectPtr< MethodInjectionPoint_obj > __new(::String name,::Array< ::Dynamic> args);
		static hx::ObjectPtr< MethodInjectionPoint_obj > __alloc(hx::Ctx *_hx_ctx,::String name,::Array< ::Dynamic> args);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MethodInjectionPoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("MethodInjectionPoint",da,c3,c4,34); }

		::String name;
		::Array< ::Dynamic> args;
		virtual  ::Dynamic applyInjection( ::Dynamic target, ::minject::Injector injector);
		::Dynamic applyInjection_dyn();

		::cpp::VirtualArray gatherArgs( ::Dynamic target, ::minject::Injector injector);
		::Dynamic gatherArgs_dyn();

};

} // end namespace minject
} // end namespace point

#endif /* INCLUDED_minject_point_MethodInjectionPoint */ 
