// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_display_Color
#define INCLUDED_frejo_display_Color

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ab47325cc4883df2
#define INCLUDED_ab47325cc4883df2
#include "linc_nanovg.h"
#endif
HX_DECLARE_CLASS2(frejo,display,Color)

namespace frejo{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Color_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Color_obj OBJ_;
		Color_obj();

	public:
		enum { _hx_ClassId = 0x78a8e2fb };

		void __construct(int r,int g,int b,int a);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="frejo.display.Color")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"frejo.display.Color"); }
		static hx::ObjectPtr< Color_obj > __new(int r,int g,int b,int a);
		static hx::ObjectPtr< Color_obj > __alloc(hx::Ctx *_hx_ctx,int r,int g,int b,int a);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Color",43,e1,89,dd); }

		static void __boot();
		static  ::frejo::display::Color PRIMARY;
		static  ::frejo::display::Color SECONDARY;
		static  ::frejo::display::Color DANGER;
		static  ::frejo::display::Color LIGHT;
		static  ::frejo::display::Color TRANSPARENT;
		int r;
		int g;
		int b;
		int a;
		 NVGcolor toNVGcolor();

};

} // end namespace frejo
} // end namespace display

#endif /* INCLUDED_frejo_display_Color */ 