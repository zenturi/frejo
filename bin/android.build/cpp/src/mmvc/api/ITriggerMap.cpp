// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_mmvc_api_ITriggerMap
#include <mmvc/api/ITriggerMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4dab7a3e39837d6d_25_boot,"mmvc.api.ITriggerMap","boot",0x43473428,"mmvc.api.ITriggerMap.boot","mmvc/api/ITriggerMap.hx",25,0x2ee5b588)
namespace mmvc{
namespace api{


static ::String ITriggerMap_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("unmap",e3,61,ea,a6),
	HX_("dispatch",ba,ce,63,1e),
	::String(null()) };

hx::Class ITriggerMap_obj::__mClass;

void ITriggerMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("mmvc.api.ITriggerMap",38,b4,f2,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(ITriggerMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x050cc2e0 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ITriggerMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4dab7a3e39837d6d_25_boot)
HXDLIN(  25)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("interface",b9,31,da,39),null()))));
            	}
}

} // end namespace mmvc
} // end namespace api