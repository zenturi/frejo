// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_opengl__WebGL_GLFramebuffer_Impl_
#define INCLUDED_opengl__WebGL_GLFramebuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(opengl,GLObject)
HX_DECLARE_CLASS2(opengl,_WebGL,GLFramebuffer_Impl_)

namespace opengl{
namespace _WebGL{


class HXCPP_CLASS_ATTRIBUTES GLFramebuffer_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLFramebuffer_Impl__obj OBJ_;
		GLFramebuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2d838337 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="opengl._WebGL.GLFramebuffer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"opengl._WebGL.GLFramebuffer_Impl_"); }

		hx::ObjectPtr< GLFramebuffer_Impl__obj > __new() {
			hx::ObjectPtr< GLFramebuffer_Impl__obj > __this = new GLFramebuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLFramebuffer_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GLFramebuffer_Impl__obj *__this = (GLFramebuffer_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLFramebuffer_Impl__obj), false, "opengl._WebGL.GLFramebuffer_Impl_"));
			*(void **)__this = GLFramebuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLFramebuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLFramebuffer_Impl_",68,89,48,57); }

		static  ::opengl::GLObject _new(int _id);
		static ::Dynamic _new_dyn();

		static int toInt( ::opengl::GLObject this1);
		static ::Dynamic toInt_dyn();

		static  ::opengl::GLObject fromInt(int _id);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic toDynamic( ::opengl::GLObject this1);
		static ::Dynamic toDynamic_dyn();

		static  ::opengl::GLObject fromDynamic( ::Dynamic _id);
		static ::Dynamic fromDynamic_dyn();

		static ::String toString( ::opengl::GLObject this1);
		static ::Dynamic toString_dyn();

};

} // end namespace opengl
} // end namespace _WebGL

#endif /* INCLUDED_opengl__WebGL_GLFramebuffer_Impl_ */ 
