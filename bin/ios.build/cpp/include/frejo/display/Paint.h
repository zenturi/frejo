// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_display_Paint
#define INCLUDED_frejo_display_Paint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_NVGpaint
#include <NVGpaint.h>
#endif
HX_DECLARE_CLASS2(frejo,display,Paint)

namespace frejo{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Paint_obj : public  NVGpaint_obj
{
	public:
		typedef  NVGpaint_obj super;
		typedef Paint_obj OBJ_;
		Paint_obj();

	public:
		enum { _hx_ClassId = 0x3d061c1a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="frejo.display.Paint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"frejo.display.Paint"); }

		hx::ObjectPtr< Paint_obj > __new() {
			hx::ObjectPtr< Paint_obj > __this = new Paint_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Paint_obj > __alloc(hx::Ctx *_hx_ctx) {
			Paint_obj *__this = (Paint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Paint_obj), true, "frejo.display.Paint"));
			*(void **)__this = Paint_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Paint_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Paint",7e,27,7c,50); }

};

} // end namespace frejo
} // end namespace display

#endif /* INCLUDED_frejo_display_Paint */ 
