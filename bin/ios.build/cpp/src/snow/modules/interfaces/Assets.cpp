// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_types_ImageData
#include <snow/types/ImageData.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_abcaa89e6adc496a_9_boot,"snow.modules.interfaces.Assets","boot",0x4f0286db,"snow.modules.interfaces.Assets.boot","snow/modules/interfaces/Assets.hx",9,0x86135f5a)
namespace snow{
namespace modules{
namespace interfaces{


static ::String Assets_obj_sMemberFields[] = {
	HX_("app",a1,fc,49,00),
	HX_("onevent",9b,f6,d4,78),
	HX_("shutdown",96,fc,0b,6b),
	HX_("image_info_from_load",ae,a1,7a,09),
	HX_("image_info_from_bytes",e3,97,7b,86),
	HX_("image_info_from_pixels",b5,e8,e3,8a),
	::String(null()) };

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.modules.interfaces.Assets",65,5e,be,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(Assets_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0xf976c361 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Assets_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_abcaa89e6adc496a_9_boot)
HXDLIN(   9)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("interface",b9,31,da,39),null()))));
            	}
}

} // end namespace snow
} // end namespace modules
} // end namespace interfaces
