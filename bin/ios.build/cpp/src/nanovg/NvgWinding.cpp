// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_nanovg_NvgWinding
#include <nanovg/NvgWinding.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2553f106e3ec0098_26_boot,"nanovg.NvgWinding","boot",0xfb1dde9c,"nanovg.NvgWinding.boot","nanovg/Nvg.hx",26,0xe87479c9)
HX_LOCAL_STACK_FRAME(_hx_pos_2553f106e3ec0098_27_boot,"nanovg.NvgWinding","boot",0xfb1dde9c,"nanovg.NvgWinding.boot","nanovg/Nvg.hx",27,0xe87479c9)
namespace nanovg{

void NvgWinding_obj::__construct() { }

Dynamic NvgWinding_obj::__CreateEmpty() { return new NvgWinding_obj; }

void *NvgWinding_obj::_hx_vtable = 0;

Dynamic NvgWinding_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NvgWinding_obj > _hx_result = new NvgWinding_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NvgWinding_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x243d7d80;
}

int NvgWinding_obj::CCW;

int NvgWinding_obj::CW;


NvgWinding_obj::NvgWinding_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *NvgWinding_obj_sMemberStorageInfo = 0;
static hx::StaticInfo NvgWinding_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &NvgWinding_obj::CCW,HX_("CCW",b7,11,33,00)},
	{hx::fsInt,(void *) &NvgWinding_obj::CW,HX_("CW",b4,3a,00,00)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void NvgWinding_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NvgWinding_obj::CCW,"CCW");
	HX_MARK_MEMBER_NAME(NvgWinding_obj::CW,"CW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NvgWinding_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NvgWinding_obj::CCW,"CCW");
	HX_VISIT_MEMBER_NAME(NvgWinding_obj::CW,"CW");
};

#endif

hx::Class NvgWinding_obj::__mClass;

static ::String NvgWinding_obj_sStaticFields[] = {
	HX_("CCW",b7,11,33,00),
	HX_("CW",b4,3a,00,00),
	::String(null())
};

void NvgWinding_obj::__register()
{
	NvgWinding_obj _hx_dummy;
	NvgWinding_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nanovg.NvgWinding",44,1e,04,79);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NvgWinding_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NvgWinding_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NvgWinding_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NvgWinding_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NvgWinding_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NvgWinding_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NvgWinding_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2553f106e3ec0098_26_boot)
HXDLIN(  26)		CCW = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2553f106e3ec0098_27_boot)
HXDLIN(  27)		CW = 2;
            	}
}

} // end namespace nanovg
