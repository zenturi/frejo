// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_mmvc_api_IContext
#include <mmvc/api/IContext.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cfd3ff9b8c646c20_28_boot,"mmvc.api.IContext","boot",0xe63dd405,"mmvc.api.IContext.boot","mmvc/api/IContext.hx",28,0x78d096e1)
namespace mmvc{
namespace api{


hx::Class IContext_obj::__mClass;

void IContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("mmvc.api.IContext",7b,21,da,55);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TIsInterface< (int)0xda0dd9d3 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void IContext_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cfd3ff9b8c646c20_28_boot)
HXDLIN(  28)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("interface",b9,31,da,39),null()))));
            	}
}

} // end namespace mmvc
} // end namespace api
