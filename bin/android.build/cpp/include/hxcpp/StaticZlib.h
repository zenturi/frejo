// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_hxcpp_StaticZlib
#define INCLUDED_hxcpp_StaticZlib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hxcpp,StaticZlib)

namespace hxcpp{


class HXCPP_CLASS_ATTRIBUTES StaticZlib_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StaticZlib_obj OBJ_;
		StaticZlib_obj();

	public:
		enum { _hx_ClassId = 0x2d2d23a0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hxcpp.StaticZlib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"hxcpp.StaticZlib"); }

		hx::ObjectPtr< StaticZlib_obj > __new() {
			hx::ObjectPtr< StaticZlib_obj > __this = new StaticZlib_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< StaticZlib_obj > __alloc(hx::Ctx *_hx_ctx) {
			StaticZlib_obj *__this = (StaticZlib_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StaticZlib_obj), false, "hxcpp.StaticZlib"));
			*(void **)__this = StaticZlib_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StaticZlib_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StaticZlib",f9,52,53,a9); }

};

} // end namespace hxcpp

#endif /* INCLUDED_hxcpp_StaticZlib */ 