// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_nanovg_NvgImageFlags
#define INCLUDED_nanovg_NvgImageFlags

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nanovg,NvgImageFlags)

namespace nanovg{


class HXCPP_CLASS_ATTRIBUTES NvgImageFlags_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NvgImageFlags_obj OBJ_;
		NvgImageFlags_obj();

	public:
		enum { _hx_ClassId = 0x13310146 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="nanovg.NvgImageFlags")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"nanovg.NvgImageFlags"); }

		hx::ObjectPtr< NvgImageFlags_obj > __new() {
			hx::ObjectPtr< NvgImageFlags_obj > __this = new NvgImageFlags_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NvgImageFlags_obj > __alloc(hx::Ctx *_hx_ctx) {
			NvgImageFlags_obj *__this = (NvgImageFlags_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NvgImageFlags_obj), false, "nanovg.NvgImageFlags"));
			*(void **)__this = NvgImageFlags_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NvgImageFlags_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NvgImageFlags",cb,e1,6a,6d); }

		static void __boot();
		static int IMAGE_GENERATE_MIPMAPS;
		static int IMAGE_REPEATX;
		static int IMAGE_REPEATY;
		static int IMAGE_FLIPY;
		static int IMAGE_PREMULTIPLIED;
};

} // end namespace nanovg

#endif /* INCLUDED_nanovg_NvgImageFlags */ 
