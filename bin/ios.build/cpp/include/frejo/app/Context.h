// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_app_Context
#define INCLUDED_frejo_app_Context

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_mmvc_impl_Context
#include <mmvc/impl/Context.h>
#endif
HX_DECLARE_CLASS2(frejo,app,Context)
HX_DECLARE_CLASS2(mmvc,api,IContext)
HX_DECLARE_CLASS2(mmvc,api,IViewContainer)
HX_DECLARE_CLASS2(mmvc,impl,Context)

namespace frejo{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Context_obj : public  ::mmvc::impl::Context_obj
{
	public:
		typedef  ::mmvc::impl::Context_obj super;
		typedef Context_obj OBJ_;
		Context_obj();

	public:
		enum { _hx_ClassId = 0x7fb96974 };

		void __construct(::Dynamic contextView);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="frejo.app.Context")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"frejo.app.Context"); }
		static hx::ObjectPtr< Context_obj > __new(::Dynamic contextView);
		static hx::ObjectPtr< Context_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic contextView);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context",cf,bd,c8,e6); }

		void startup();

};

} // end namespace frejo
} // end namespace app

#endif /* INCLUDED_frejo_app_Context */ 
