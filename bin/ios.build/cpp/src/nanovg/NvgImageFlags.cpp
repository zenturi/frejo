// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_nanovg_NvgImageFlags
#include <nanovg/NvgImageFlags.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c2d38a3103184ab5_60_boot,"nanovg.NvgImageFlags","boot",0xbe4bd91e,"nanovg.NvgImageFlags.boot","nanovg/Nvg.hx",60,0xe87479c9)
HX_LOCAL_STACK_FRAME(_hx_pos_c2d38a3103184ab5_61_boot,"nanovg.NvgImageFlags","boot",0xbe4bd91e,"nanovg.NvgImageFlags.boot","nanovg/Nvg.hx",61,0xe87479c9)
HX_LOCAL_STACK_FRAME(_hx_pos_c2d38a3103184ab5_62_boot,"nanovg.NvgImageFlags","boot",0xbe4bd91e,"nanovg.NvgImageFlags.boot","nanovg/Nvg.hx",62,0xe87479c9)
HX_LOCAL_STACK_FRAME(_hx_pos_c2d38a3103184ab5_63_boot,"nanovg.NvgImageFlags","boot",0xbe4bd91e,"nanovg.NvgImageFlags.boot","nanovg/Nvg.hx",63,0xe87479c9)
HX_LOCAL_STACK_FRAME(_hx_pos_c2d38a3103184ab5_64_boot,"nanovg.NvgImageFlags","boot",0xbe4bd91e,"nanovg.NvgImageFlags.boot","nanovg/Nvg.hx",64,0xe87479c9)
namespace nanovg{

void NvgImageFlags_obj::__construct() { }

Dynamic NvgImageFlags_obj::__CreateEmpty() { return new NvgImageFlags_obj; }

void *NvgImageFlags_obj::_hx_vtable = 0;

Dynamic NvgImageFlags_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NvgImageFlags_obj > _hx_result = new NvgImageFlags_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NvgImageFlags_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13310146;
}

int NvgImageFlags_obj::IMAGE_GENERATE_MIPMAPS;

int NvgImageFlags_obj::IMAGE_REPEATX;

int NvgImageFlags_obj::IMAGE_REPEATY;

int NvgImageFlags_obj::IMAGE_FLIPY;

int NvgImageFlags_obj::IMAGE_PREMULTIPLIED;


NvgImageFlags_obj::NvgImageFlags_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *NvgImageFlags_obj_sMemberStorageInfo = 0;
static hx::StaticInfo NvgImageFlags_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &NvgImageFlags_obj::IMAGE_GENERATE_MIPMAPS,HX_("IMAGE_GENERATE_MIPMAPS",45,48,83,cc)},
	{hx::fsInt,(void *) &NvgImageFlags_obj::IMAGE_REPEATX,HX_("IMAGE_REPEATX",59,90,bd,f2)},
	{hx::fsInt,(void *) &NvgImageFlags_obj::IMAGE_REPEATY,HX_("IMAGE_REPEATY",5a,90,bd,f2)},
	{hx::fsInt,(void *) &NvgImageFlags_obj::IMAGE_FLIPY,HX_("IMAGE_FLIPY",c8,b9,cc,b3)},
	{hx::fsInt,(void *) &NvgImageFlags_obj::IMAGE_PREMULTIPLIED,HX_("IMAGE_PREMULTIPLIED",f2,f1,be,67)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void NvgImageFlags_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NvgImageFlags_obj::IMAGE_GENERATE_MIPMAPS,"IMAGE_GENERATE_MIPMAPS");
	HX_MARK_MEMBER_NAME(NvgImageFlags_obj::IMAGE_REPEATX,"IMAGE_REPEATX");
	HX_MARK_MEMBER_NAME(NvgImageFlags_obj::IMAGE_REPEATY,"IMAGE_REPEATY");
	HX_MARK_MEMBER_NAME(NvgImageFlags_obj::IMAGE_FLIPY,"IMAGE_FLIPY");
	HX_MARK_MEMBER_NAME(NvgImageFlags_obj::IMAGE_PREMULTIPLIED,"IMAGE_PREMULTIPLIED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NvgImageFlags_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NvgImageFlags_obj::IMAGE_GENERATE_MIPMAPS,"IMAGE_GENERATE_MIPMAPS");
	HX_VISIT_MEMBER_NAME(NvgImageFlags_obj::IMAGE_REPEATX,"IMAGE_REPEATX");
	HX_VISIT_MEMBER_NAME(NvgImageFlags_obj::IMAGE_REPEATY,"IMAGE_REPEATY");
	HX_VISIT_MEMBER_NAME(NvgImageFlags_obj::IMAGE_FLIPY,"IMAGE_FLIPY");
	HX_VISIT_MEMBER_NAME(NvgImageFlags_obj::IMAGE_PREMULTIPLIED,"IMAGE_PREMULTIPLIED");
};

#endif

hx::Class NvgImageFlags_obj::__mClass;

static ::String NvgImageFlags_obj_sStaticFields[] = {
	HX_("IMAGE_GENERATE_MIPMAPS",45,48,83,cc),
	HX_("IMAGE_REPEATX",59,90,bd,f2),
	HX_("IMAGE_REPEATY",5a,90,bd,f2),
	HX_("IMAGE_FLIPY",c8,b9,cc,b3),
	HX_("IMAGE_PREMULTIPLIED",f2,f1,be,67),
	::String(null())
};

void NvgImageFlags_obj::__register()
{
	NvgImageFlags_obj _hx_dummy;
	NvgImageFlags_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("nanovg.NvgImageFlags",02,33,dc,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NvgImageFlags_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(NvgImageFlags_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NvgImageFlags_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NvgImageFlags_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NvgImageFlags_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NvgImageFlags_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NvgImageFlags_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c2d38a3103184ab5_60_boot)
HXDLIN(  60)		IMAGE_GENERATE_MIPMAPS = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2d38a3103184ab5_61_boot)
HXDLIN(  61)		IMAGE_REPEATX = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2d38a3103184ab5_62_boot)
HXDLIN(  62)		IMAGE_REPEATY = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2d38a3103184ab5_63_boot)
HXDLIN(  63)		IMAGE_FLIPY = 8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_c2d38a3103184ab5_64_boot)
HXDLIN(  64)		IMAGE_PREMULTIPLIED = 16;
            	}
}

} // end namespace nanovg