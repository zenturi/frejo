// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_types__Types_MouseEventType_Impl_
#include <snow/types/_Types/MouseEventType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_963_toString,"snow.types._Types.MouseEventType_Impl_","toString",0x93b05637,"snow.types._Types.MouseEventType_Impl_.toString","snow/types/Types.hx",963,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_952_boot,"snow.types._Types.MouseEventType_Impl_","boot",0x5292a83d,"snow.types._Types.MouseEventType_Impl_.boot","snow/types/Types.hx",952,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_954_boot,"snow.types._Types.MouseEventType_Impl_","boot",0x5292a83d,"snow.types._Types.MouseEventType_Impl_.boot","snow/types/Types.hx",954,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_956_boot,"snow.types._Types.MouseEventType_Impl_","boot",0x5292a83d,"snow.types._Types.MouseEventType_Impl_.boot","snow/types/Types.hx",956,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_958_boot,"snow.types._Types.MouseEventType_Impl_","boot",0x5292a83d,"snow.types._Types.MouseEventType_Impl_.boot","snow/types/Types.hx",958,0x72b41ce7)
HX_LOCAL_STACK_FRAME(_hx_pos_fec7165b5a9496b7_960_boot,"snow.types._Types.MouseEventType_Impl_","boot",0x5292a83d,"snow.types._Types.MouseEventType_Impl_.boot","snow/types/Types.hx",960,0x72b41ce7)
namespace snow{
namespace types{
namespace _Types{

void MouseEventType_Impl__obj::__construct() { }

Dynamic MouseEventType_Impl__obj::__CreateEmpty() { return new MouseEventType_Impl__obj; }

void *MouseEventType_Impl__obj::_hx_vtable = 0;

Dynamic MouseEventType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEventType_Impl__obj > _hx_result = new MouseEventType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MouseEventType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52d8b7bf;
}

int MouseEventType_Impl__obj::me_unknown;

int MouseEventType_Impl__obj::me_move;

int MouseEventType_Impl__obj::me_down;

int MouseEventType_Impl__obj::me_up;

int MouseEventType_Impl__obj::me_wheel;

::String MouseEventType_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_963_toString)
HXDLIN( 963)		switch((int)(this1)){
            			case (int)0: {
HXLINE( 964)				return HX_("me_unknown",63,f4,26,34);
            			}
            			break;
            			case (int)1: {
HXLINE( 965)				return HX_("me_move",98,00,21,12);
            			}
            			break;
            			case (int)2: {
HXLINE( 966)				return HX_("me_down",e9,15,2e,0c);
            			}
            			break;
            			case (int)3: {
HXLINE( 967)				return HX_("me_up",22,44,b8,05);
            			}
            			break;
            			case (int)4: {
HXLINE( 968)				return HX_("me_wheel",34,ed,13,88);
            			}
            			break;
            			default:{
HXLINE( 969)				return (HX_("",00,00,00,00) + this1);
            			}
            		}
HXLINE( 963)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MouseEventType_Impl__obj,toString,return )


MouseEventType_Impl__obj::MouseEventType_Impl__obj()
{
}

bool MouseEventType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *MouseEventType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo MouseEventType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_unknown,HX_("me_unknown",63,f4,26,34)},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_move,HX_("me_move",98,00,21,12)},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_down,HX_("me_down",e9,15,2e,0c)},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_up,HX_("me_up",22,44,b8,05)},
	{hx::fsInt,(void *) &MouseEventType_Impl__obj::me_wheel,HX_("me_wheel",34,ed,13,88)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void MouseEventType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_unknown,"me_unknown");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_move,"me_move");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_down,"me_down");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_up,"me_up");
	HX_MARK_MEMBER_NAME(MouseEventType_Impl__obj::me_wheel,"me_wheel");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEventType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_unknown,"me_unknown");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_move,"me_move");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_down,"me_down");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_up,"me_up");
	HX_VISIT_MEMBER_NAME(MouseEventType_Impl__obj::me_wheel,"me_wheel");
};

#endif

hx::Class MouseEventType_Impl__obj::__mClass;

static ::String MouseEventType_Impl__obj_sStaticFields[] = {
	HX_("me_unknown",63,f4,26,34),
	HX_("me_move",98,00,21,12),
	HX_("me_down",e9,15,2e,0c),
	HX_("me_up",22,44,b8,05),
	HX_("me_wheel",34,ed,13,88),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void MouseEventType_Impl__obj::__register()
{
	MouseEventType_Impl__obj _hx_dummy;
	MouseEventType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.types._Types.MouseEventType_Impl_",43,b8,25,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEventType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MouseEventType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MouseEventType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MouseEventType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEventType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEventType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEventType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MouseEventType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_952_boot)
HXDLIN( 952)		me_unknown = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_954_boot)
HXDLIN( 954)		me_move = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_956_boot)
HXDLIN( 956)		me_down = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_958_boot)
HXDLIN( 958)		me_up = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fec7165b5a9496b7_960_boot)
HXDLIN( 960)		me_wheel = 4;
            	}
}

} // end namespace snow
} // end namespace types
} // end namespace _Types
