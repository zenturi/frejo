// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_base_ViewMap
#define INCLUDED_mmvc_base_ViewMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mmvc_base_ViewMapBase
#include <mmvc/base/ViewMapBase.h>
#endif
#ifndef INCLUDED_mmvc_api_IViewMap
#include <mmvc/api/IViewMap.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(minject,Injector)
HX_DECLARE_CLASS2(mmvc,api,IViewContainer)
HX_DECLARE_CLASS2(mmvc,api,IViewMap)
HX_DECLARE_CLASS2(mmvc,base,ViewMap)
HX_DECLARE_CLASS2(mmvc,base,ViewMapBase)

namespace mmvc{
namespace base{


class HXCPP_CLASS_ATTRIBUTES ViewMap_obj : public  ::mmvc::base::ViewMapBase_obj
{
	public:
		typedef  ::mmvc::base::ViewMapBase_obj super;
		typedef ViewMap_obj OBJ_;
		ViewMap_obj();

	public:
		enum { _hx_ClassId = 0x7f74d869 };

		void __construct(::Dynamic contextView, ::minject::Injector injector);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="mmvc.base.ViewMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"mmvc.base.ViewMap"); }
		static hx::ObjectPtr< ViewMap_obj > __new(::Dynamic contextView, ::minject::Injector injector);
		static hx::ObjectPtr< ViewMap_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic contextView, ::minject::Injector injector);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ViewMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ViewMap",17,85,0a,6a); }

		::cpp::VirtualArray mappedPackages;
		 ::haxe::ds::ObjectMap mappedTypes;
		 ::haxe::ds::ObjectMap injectedViews;
		void mapPackage(::String packageName);
		::Dynamic mapPackage_dyn();

		void unmapPackage(::String packageName);
		::Dynamic unmapPackage_dyn();

		void mapType(hx::Class type);
		::Dynamic mapType_dyn();

		void unmapType(hx::Class type);
		::Dynamic unmapType_dyn();

		bool hasType(hx::Class type);
		::Dynamic hasType_dyn();

		bool hasPackage(::String packageName);
		::Dynamic hasPackage_dyn();

		void addListeners();

		void removeListeners();

		void onViewAdded( ::Dynamic view);

		void onViewRemoved( ::Dynamic view);

		void injectInto( ::Dynamic view);
		::Dynamic injectInto_dyn();

};

} // end namespace mmvc
} // end namespace base

#endif /* INCLUDED_mmvc_base_ViewMap */ 
