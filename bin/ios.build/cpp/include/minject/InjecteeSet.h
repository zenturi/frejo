// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_minject_InjecteeSet
#define INCLUDED_minject_InjecteeSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(minject,InjecteeSet)

namespace minject{


class HXCPP_CLASS_ATTRIBUTES InjecteeSet_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef InjecteeSet_obj OBJ_;
		InjecteeSet_obj();

	public:
		enum { _hx_ClassId = 0x10e6e293 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="minject.InjecteeSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"minject.InjecteeSet"); }
		static hx::ObjectPtr< InjecteeSet_obj > __new();
		static hx::ObjectPtr< InjecteeSet_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InjecteeSet_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InjecteeSet",d1,d6,f5,28); }

		 ::haxe::ds::ObjectMap map;
		void add( ::Dynamic value);
		::Dynamic add_dyn();

		bool contains( ::Dynamic value);
		::Dynamic contains_dyn();

		void remove( ::Dynamic value);
		::Dynamic remove_dyn();

		void _hx_delete( ::Dynamic value);
		::Dynamic _hx_delete_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

};

} // end namespace minject

#endif /* INCLUDED_minject_InjecteeSet */ 