// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_GamepadDeviceEventType_Impl_
#include <snow/types/_Types/GamepadDeviceEventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_229452be013b3a8d_1060_toString,"snow.types._Types.GamepadDeviceEventType_Impl_","toString",0xecb3f229,"snow.types._Types.GamepadDeviceEventType_Impl_.toString","snow/types/Types.hx",1060,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_229452be013b3a8d_1051_boot,"snow.types._Types.GamepadDeviceEventType_Impl_","boot",0x6bf8e32f,"snow.types._Types.GamepadDeviceEventType_Impl_.boot","snow/types/Types.hx",1051,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_229452be013b3a8d_1053_boot,"snow.types._Types.GamepadDeviceEventType_Impl_","boot",0x6bf8e32f,"snow.types._Types.GamepadDeviceEventType_Impl_.boot","snow/types/Types.hx",1053,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_229452be013b3a8d_1055_boot,"snow.types._Types.GamepadDeviceEventType_Impl_","boot",0x6bf8e32f,"snow.types._Types.GamepadDeviceEventType_Impl_.boot","snow/types/Types.hx",1055,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_229452be013b3a8d_1057_boot,"snow.types._Types.GamepadDeviceEventType_Impl_","boot",0x6bf8e32f,"snow.types._Types.GamepadDeviceEventType_Impl_.boot","snow/types/Types.hx",1057,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void GamepadDeviceEventType_Impl__obj::__construct() { }

Dynamic GamepadDeviceEventType_Impl__obj::__CreateEmpty() { return new GamepadDeviceEventType_Impl__obj; }

void *GamepadDeviceEventType_Impl__obj::_hx_vtable = 0;

Dynamic GamepadDeviceEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GamepadDeviceEventType_Impl__obj > _hx_result = new GamepadDeviceEventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GamepadDeviceEventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65c63e0d;
}

int GamepadDeviceEventType_Impl__obj::ge_unknown;

int GamepadDeviceEventType_Impl__obj::ge_device_added;

int GamepadDeviceEventType_Impl__obj::ge_device_removed;

int GamepadDeviceEventType_Impl__obj::ge_device_remapped;

::String GamepadDeviceEventType_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_229452be013b3a8d_1060_toString)
HXDLIN(1060)		switch((int)(this1)){
            			case (int)0: {
HXLINE(1061)				return HX_("ge_unknown",29,25,68,b2);
            			}
            			break;
            			case (int)1: {
HXLINE(1062)				return HX_("ge_device_added",18,4b,91,ee);
            			}
            			break;
            			case (int)2: {
HXLINE(1063)				return HX_("ge_device_removed",f8,db,59,0c);
            			}
            			break;
            			case (int)3: {
HXLINE(1064)				return HX_("ge_device_remapped",4e,90,bb,ae);
            			}
            			break;
            			default:{
HXLINE(1065)				return (HX_("",00,00,00,00) + this1);
            			}
            		}
HXLINE(1060)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GamepadDeviceEventType_Impl__obj,toString,return )


GamepadDeviceEventType_Impl__obj::GamepadDeviceEventType_Impl__obj()
{
}

bool GamepadDeviceEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *GamepadDeviceEventType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo GamepadDeviceEventType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::ge_unknown,HX_("ge_unknown",29,25,68,b2)},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::ge_device_added,HX_("ge_device_added",18,4b,91,ee)},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::ge_device_removed,HX_("ge_device_removed",f8,db,59,0c)},
	{hx::fsInt,(void *) &GamepadDeviceEventType_Impl__obj::ge_device_remapped,HX_("ge_device_remapped",4e,90,bb,ae)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void GamepadDeviceEventType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_unknown,"ge_unknown");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_added,"ge_device_added");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_removed,"ge_device_removed");
	HX_MARK_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_remapped,"ge_device_remapped");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GamepadDeviceEventType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_unknown,"ge_unknown");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_added,"ge_device_added");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_removed,"ge_device_removed");
	HX_VISIT_MEMBER_NAME(GamepadDeviceEventType_Impl__obj::ge_device_remapped,"ge_device_remapped");
};

#endif

hx::Class GamepadDeviceEventType_Impl__obj::__mClass;

static ::String GamepadDeviceEventType_Impl__obj_sStaticFields[] = {
	HX_("ge_unknown",29,25,68,b2),
	HX_("ge_device_added",18,4b,91,ee),
	HX_("ge_device_removed",f8,db,59,0c),
	HX_("ge_device_remapped",4e,90,bb,ae),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void GamepadDeviceEventType_Impl__obj::__register()
{
	GamepadDeviceEventType_Impl__obj _hx_dummy;
	GamepadDeviceEventType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.types._Types.GamepadDeviceEventType_Impl_",91,62,8d,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GamepadDeviceEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GamepadDeviceEventType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GamepadDeviceEventType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GamepadDeviceEventType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GamepadDeviceEventType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GamepadDeviceEventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GamepadDeviceEventType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GamepadDeviceEventType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_229452be013b3a8d_1051_boot)
HXDLIN(1051)		ge_unknown = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_229452be013b3a8d_1053_boot)
HXDLIN(1053)		ge_device_added = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_229452be013b3a8d_1055_boot)
HXDLIN(1055)		ge_device_removed = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_229452be013b3a8d_1057_boot)
HXDLIN(1057)		ge_device_remapped = 3;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
