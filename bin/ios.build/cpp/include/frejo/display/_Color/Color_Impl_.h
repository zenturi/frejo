// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_display__Color_Color_Impl_
#define INCLUDED_frejo_display__Color_Color_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ab47325cc4883df2
#define INCLUDED_ab47325cc4883df2
#include "linc_nanovg.h"
#endif
HX_DECLARE_CLASS3(frejo,display,_Color,Color_Impl_)

namespace frejo{
namespace display{
namespace _Color{


class HXCPP_CLASS_ATTRIBUTES Color_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Color_Impl__obj OBJ_;
		Color_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3b8259fb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="frejo.display._Color.Color_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"frejo.display._Color.Color_Impl_"); }

		hx::ObjectPtr< Color_Impl__obj > __new() {
			hx::ObjectPtr< Color_Impl__obj > __this = new Color_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Color_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Color_Impl__obj *__this = (Color_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Color_Impl__obj), false, "frejo.display._Color.Color_Impl_"));
			*(void **)__this = Color_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Color_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Color_Impl_",23,f2,4f,b6); }

		static void __boot();
		static  NVGcolor vg( ::Dynamic this1);

		static  ::Dynamic _new(int r,int g,int b,int a);
		static ::Dynamic _new_dyn();

		static  ::Dynamic LIGHT;
		static  ::Dynamic TRANSPARENT;
};

} // end namespace frejo
} // end namespace display
} // end namespace _Color

#endif /* INCLUDED_frejo_display__Color_Color_Impl_ */ 
