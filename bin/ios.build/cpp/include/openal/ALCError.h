// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_openal_ALCError
#define INCLUDED_openal_ALCError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(openal,ALCError)

namespace openal{


class HXCPP_CLASS_ATTRIBUTES ALCError_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALCError_obj OBJ_;
		ALCError_obj();

	public:
		enum { _hx_ClassId = 0x1a270311 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openal.ALCError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openal.ALCError"); }

		hx::ObjectPtr< ALCError_obj > __new() {
			hx::ObjectPtr< ALCError_obj > __this = new ALCError_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ALCError_obj > __alloc(hx::Ctx *_hx_ctx) {
			ALCError_obj *__this = (ALCError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ALCError_obj), false, "openal.ALCError"));
			*(void **)__this = ALCError_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALCError_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ALCError",b0,a3,6e,ae); }

		static void __boot();
		static ::String NO_ERROR;
		static ::String INVALID_DEVICE;
		static ::String INVALID_CONTEXT;
		static ::String INVALID_ENUM;
		static ::String INVALID_VALUE;
		static ::String OUT_OF_MEMORY;
		static ::String UNKNOWN_ERROR;
		static ::String desc(int error);
		static ::Dynamic desc_dyn();

};

} // end namespace openal

#endif /* INCLUDED_openal_ALCError */ 