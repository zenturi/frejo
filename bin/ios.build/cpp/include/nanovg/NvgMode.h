// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_nanovg_NvgMode
#define INCLUDED_nanovg_NvgMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nanovg,NvgMode)

namespace nanovg{


class HXCPP_CLASS_ATTRIBUTES NvgMode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NvgMode_obj OBJ_;
		NvgMode_obj();

	public:
		enum { _hx_ClassId = 0x2243833d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="nanovg.NvgMode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"nanovg.NvgMode"); }

		hx::ObjectPtr< NvgMode_obj > __new() {
			hx::ObjectPtr< NvgMode_obj > __this = new NvgMode_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NvgMode_obj > __alloc(hx::Ctx *_hx_ctx) {
			NvgMode_obj *__this = (NvgMode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NvgMode_obj), false, "nanovg.NvgMode"));
			*(void **)__this = NvgMode_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NvgMode_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NvgMode",02,82,26,5b); }

		static void __boot();
		static int ANTIALIAS;
		static int STENCIL_STROKES;
};

} // end namespace nanovg

#endif /* INCLUDED_nanovg_NvgMode */ 
