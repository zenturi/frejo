// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_types_Config
#include <snow/types/Config.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_28_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",28,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_29_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",29,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_30_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",30,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_31_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",31,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_33_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",33,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_34_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",34,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_35_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",35,0x239479fa)
HX_LOCAL_STACK_FRAME(_hx_pos_2a22a0912986a0b2_37_boot,"snow.types.Config","boot",0x3501551e,"snow.types.Config.boot","snow/types/Config.hx",37,0x239479fa)
namespace snow{
namespace types{

void Config_obj::__construct() { }

Dynamic Config_obj::__CreateEmpty() { return new Config_obj; }

void *Config_obj::_hx_vtable = 0;

Dynamic Config_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Config_obj > _hx_result = new Config_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Config_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x74ba9d38;
}

::String Config_obj::app_runtime;

::String Config_obj::app_config;

::String Config_obj::app_ident;

::String Config_obj::app_main;

::String Config_obj::module_assets;

::String Config_obj::module_audio;

::String Config_obj::module_io;

::Array< ::String > Config_obj::extensions;


Config_obj::Config_obj()
{
}

bool Config_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_main") ) { outValue = ( app_main ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"app_ident") ) { outValue = ( app_ident ); return true; }
		if (HX_FIELD_EQ(inName,"module_io") ) { outValue = ( module_io ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"app_config") ) { outValue = ( app_config ); return true; }
		if (HX_FIELD_EQ(inName,"extensions") ) { outValue = ( extensions ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"app_runtime") ) { outValue = ( app_runtime ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"module_audio") ) { outValue = ( module_audio ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"module_assets") ) { outValue = ( module_assets ); return true; }
	}
	return false;
}

bool Config_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"app_main") ) { app_main=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"app_ident") ) { app_ident=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"module_io") ) { module_io=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"app_config") ) { app_config=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"extensions") ) { extensions=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"app_runtime") ) { app_runtime=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"module_audio") ) { module_audio=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"module_assets") ) { module_assets=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Config_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Config_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Config_obj::app_runtime,HX_("app_runtime",fa,13,92,67)},
	{hx::fsString,(void *) &Config_obj::app_config,HX_("app_config",e0,b1,30,62)},
	{hx::fsString,(void *) &Config_obj::app_ident,HX_("app_ident",92,35,4f,d8)},
	{hx::fsString,(void *) &Config_obj::app_main,HX_("app_main",d7,ef,e0,a0)},
	{hx::fsString,(void *) &Config_obj::module_assets,HX_("module_assets",f6,52,1a,b7)},
	{hx::fsString,(void *) &Config_obj::module_audio,HX_("module_audio",c3,bd,05,11)},
	{hx::fsString,(void *) &Config_obj::module_io,HX_("module_io",d9,70,1e,16)},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Config_obj::extensions,HX_("extensions",14,7c,70,89)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Config_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Config_obj::app_runtime,"app_runtime");
	HX_MARK_MEMBER_NAME(Config_obj::app_config,"app_config");
	HX_MARK_MEMBER_NAME(Config_obj::app_ident,"app_ident");
	HX_MARK_MEMBER_NAME(Config_obj::app_main,"app_main");
	HX_MARK_MEMBER_NAME(Config_obj::module_assets,"module_assets");
	HX_MARK_MEMBER_NAME(Config_obj::module_audio,"module_audio");
	HX_MARK_MEMBER_NAME(Config_obj::module_io,"module_io");
	HX_MARK_MEMBER_NAME(Config_obj::extensions,"extensions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Config_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Config_obj::app_runtime,"app_runtime");
	HX_VISIT_MEMBER_NAME(Config_obj::app_config,"app_config");
	HX_VISIT_MEMBER_NAME(Config_obj::app_ident,"app_ident");
	HX_VISIT_MEMBER_NAME(Config_obj::app_main,"app_main");
	HX_VISIT_MEMBER_NAME(Config_obj::module_assets,"module_assets");
	HX_VISIT_MEMBER_NAME(Config_obj::module_audio,"module_audio");
	HX_VISIT_MEMBER_NAME(Config_obj::module_io,"module_io");
	HX_VISIT_MEMBER_NAME(Config_obj::extensions,"extensions");
};

#endif

hx::Class Config_obj::__mClass;

static ::String Config_obj_sStaticFields[] = {
	HX_("app_runtime",fa,13,92,67),
	HX_("app_config",e0,b1,30,62),
	HX_("app_ident",92,35,4f,d8),
	HX_("app_main",d7,ef,e0,a0),
	HX_("module_assets",f6,52,1a,b7),
	HX_("module_audio",c3,bd,05,11),
	HX_("module_io",d9,70,1e,16),
	HX_("extensions",14,7c,70,89),
	::String(null())
};

void Config_obj::__register()
{
	Config_obj _hx_dummy;
	Config_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.types.Config",02,37,18,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Config_obj::__GetStatic;
	__mClass->mSetStaticField = &Config_obj::__SetStatic;
	__mClass->mMarkFunc = Config_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Config_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Config_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Config_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Config_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Config_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Config_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_28_boot)
HXDLIN(  28)		app_runtime = HX_("snow.modules.sdl.Runtime",f3,79,09,b1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_29_boot)
HXDLIN(  29)		app_config = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_30_boot)
HXDLIN(  30)		app_ident = HX_("com.frejo.test",2f,d7,f2,2e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_31_boot)
HXDLIN(  31)		app_main = HX_("Main",59,64,2f,33);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_33_boot)
HXDLIN(  33)		module_assets = HX_("snow.core.native.assets.Assets",db,1f,9b,fa);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_34_boot)
HXDLIN(  34)		module_audio = HX_("snow.modules.openal.Audio",0f,19,56,ac);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_35_boot)
HXDLIN(  35)		module_io = HX_("snow.modules.sdl.IO",8b,ac,a3,60);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2a22a0912986a0b2_37_boot)
HXDLIN(  37)		extensions = ::Array_obj< ::String >::__new(0);
            	}
}

} // end namespace snow
} // end namespace types