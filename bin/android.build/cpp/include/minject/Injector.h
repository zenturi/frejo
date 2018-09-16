// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_minject_Injector
#define INCLUDED_minject_Injector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(minject,InjecteeDescription)
HX_DECLARE_CLASS1(minject,InjecteeSet)
HX_DECLARE_CLASS1(minject,InjectionConfig)
HX_DECLARE_CLASS1(minject,Injector)

namespace minject{


class HXCPP_CLASS_ATTRIBUTES Injector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Injector_obj OBJ_;
		Injector_obj();

	public:
		enum { _hx_ClassId = 0x1d8a734a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="minject.Injector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"minject.Injector"); }
		static hx::ObjectPtr< Injector_obj > __new();
		static hx::ObjectPtr< Injector_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Injector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Injector",14,ee,b0,f8); }

		 ::minject::InjecteeSet attendedToInjectees;
		 ::minject::Injector parentInjector;
		 ::haxe::ds::StringMap injectionConfigs;
		 ::haxe::ds::ObjectMap injecteeDescriptions;
		 ::Dynamic mapValue(hx::Class whenAskedFor, ::Dynamic useValue,::String named);
		::Dynamic mapValue_dyn();

		 ::Dynamic mapClass(hx::Class whenAskedFor,hx::Class instantiateClass,::String named);
		::Dynamic mapClass_dyn();

		 ::Dynamic mapSingleton(hx::Class whenAskedFor,::String named);
		::Dynamic mapSingleton_dyn();

		 ::Dynamic mapSingletonOf(hx::Class whenAskedFor,hx::Class useSingletonOf,::String named);
		::Dynamic mapSingletonOf_dyn();

		 ::Dynamic mapRule(hx::Class whenAskedFor, ::Dynamic useRule,::String named);
		::Dynamic mapRule_dyn();

		 ::minject::InjectionConfig getMapping(hx::Class forClass,::String named);
		::Dynamic getMapping_dyn();

		void injectInto( ::Dynamic target);
		::Dynamic injectInto_dyn();

		 ::Dynamic construct(hx::Class theClass);
		::Dynamic construct_dyn();

		 ::Dynamic instantiate(hx::Class theClass);
		::Dynamic instantiate_dyn();

		void unmap(hx::Class theClass,::String named);
		::Dynamic unmap_dyn();

		bool hasMapping(hx::Class forClass,::String named);
		::Dynamic hasMapping_dyn();

		 ::Dynamic getInstance(hx::Class ofClass,::String named);
		::Dynamic getInstance_dyn();

		 ::minject::Injector createChildInjector();
		::Dynamic createChildInjector_dyn();

		 ::minject::InjectionConfig getAncestorMapping(hx::Class forClass,::String named);
		::Dynamic getAncestorMapping_dyn();

		 ::minject::InjecteeDescription getInjectionPoints(hx::Class forClass);
		::Dynamic getInjectionPoints_dyn();

		 ::minject::InjectionConfig getConfigurationForRequest(hx::Class forClass,::String named, ::Dynamic traverseAncestors);
		::Dynamic getConfigurationForRequest_dyn();

		 ::minject::Injector set_parentInjector( ::minject::Injector value);
		::Dynamic set_parentInjector_dyn();

		::String getClassName(hx::Class forClass);
		::Dynamic getClassName_dyn();

		 ::Dynamic getFields(hx::Class type);
		::Dynamic getFields_dyn();

};

} // end namespace minject

#endif /* INCLUDED_minject_Injector */ 
