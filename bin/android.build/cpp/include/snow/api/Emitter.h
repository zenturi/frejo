// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_api_Emitter
#define INCLUDED_snow_api_Emitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(snow,api,Emitter)

namespace snow{
namespace api{


class HXCPP_CLASS_ATTRIBUTES Emitter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Emitter_obj OBJ_;
		Emitter_obj();

	public:
		enum { _hx_ClassId = 0x7e48809b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="snow.api.Emitter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"snow.api.Emitter"); }
		static hx::ObjectPtr< Emitter_obj > __new();
		static hx::ObjectPtr< Emitter_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Emitter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Emitter",4e,5d,47,8c); }

		 ::haxe::ds::IntMap bindings;
		 ::haxe::ds::List connected;
		 ::haxe::ds::List _to_remove;
		void emit( ::Dynamic event, ::Dynamic data);
		::Dynamic emit_dyn();

		void on( ::Dynamic event, ::Dynamic handler);
		::Dynamic on_dyn();

		bool off( ::Dynamic event, ::Dynamic handler);
		::Dynamic off_dyn();

		bool _checking;
		void _check();
		::Dynamic _check_dyn();

};

} // end namespace snow
} // end namespace api

#endif /* INCLUDED_snow_api_Emitter */ 
