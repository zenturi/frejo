// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_api_PromiseError
#include <snow/api/PromiseError.h>
#endif
namespace snow{
namespace api{

::snow::api::PromiseError PromiseError_obj::UnhandledPromiseRejection( ::Dynamic err)
{
	return hx::CreateEnum< PromiseError_obj >(HX_("UnhandledPromiseRejection",31,51,d8,4e),0,1)->_hx_init(0,err);
}

bool PromiseError_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("UnhandledPromiseRejection",31,51,d8,4e)) { outValue = PromiseError_obj::UnhandledPromiseRejection_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(PromiseError_obj)

int PromiseError_obj::__FindIndex(::String inName)
{
	if (inName==HX_("UnhandledPromiseRejection",31,51,d8,4e)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(PromiseError_obj,UnhandledPromiseRejection,return)

int PromiseError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("UnhandledPromiseRejection",31,51,d8,4e)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val PromiseError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("UnhandledPromiseRejection",31,51,d8,4e)) return UnhandledPromiseRejection_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String PromiseError_obj_sStaticFields[] = {
	HX_("UnhandledPromiseRejection",31,51,d8,4e),
	::String(null())
};

hx::Class PromiseError_obj::__mClass;

Dynamic __Create_PromiseError_obj() { return new PromiseError_obj; }

void PromiseError_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("snow.api.PromiseError",ec,16,5a,49), hx::TCanCast< PromiseError_obj >,PromiseError_obj_sStaticFields,0,
	&__Create_PromiseError_obj, &__Create,
	&super::__SGetClass(), &CreatePromiseError_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &PromiseError_obj::__GetStatic;
}

void PromiseError_obj::__boot()
{
}


} // end namespace snow
} // end namespace api