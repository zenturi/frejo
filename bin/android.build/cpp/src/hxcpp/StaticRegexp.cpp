// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_hxcpp_StaticRegexp
#include <hxcpp/StaticRegexp.h>
#endif

namespace hxcpp{

void StaticRegexp_obj::__construct() { }

Dynamic StaticRegexp_obj::__CreateEmpty() { return new StaticRegexp_obj; }

void *StaticRegexp_obj::_hx_vtable = 0;

Dynamic StaticRegexp_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StaticRegexp_obj > _hx_result = new StaticRegexp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StaticRegexp_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x738bb14a;
}


StaticRegexp_obj::StaticRegexp_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *StaticRegexp_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StaticRegexp_obj_sStaticStorageInfo = 0;
#endif

hx::Class StaticRegexp_obj::__mClass;

void StaticRegexp_obj::__register()
{
	StaticRegexp_obj _hx_dummy;
	StaticRegexp_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("hxcpp.StaticRegexp",72,60,14,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StaticRegexp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StaticRegexp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StaticRegexp_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hxcpp
