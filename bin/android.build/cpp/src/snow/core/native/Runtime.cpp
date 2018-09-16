// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_core_Runtime
#include <snow/core/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_Runtime
#include <snow/core/native/Runtime.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7a3649154d10a185_18_new,"snow.core.native.Runtime","new",0xe2653317,"snow.core.native.Runtime.new","snow/core/native/Runtime.hx",18,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_51_run,"snow.core.native.Runtime","run",0xe2684a02,"snow.core.native.Runtime.run","snow/core/native/Runtime.hx",51,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_63_ready,"snow.core.native.Runtime","ready",0x79f35eda,"snow.core.native.Runtime.ready","snow/core/native/Runtime.hx",63,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_69_shutdown,"snow.core.native.Runtime","shutdown",0x9006627f,"snow.core.native.Runtime.shutdown","snow/core/native/Runtime.hx",69,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_73_window_grab,"snow.core.native.Runtime","window_grab",0x64f78372,"snow.core.native.Runtime.window_grab","snow/core/native/Runtime.hx",73,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_81_window_fullscreen,"snow.core.native.Runtime","window_fullscreen",0x0d732e61,"snow.core.native.Runtime.window_fullscreen","snow/core/native/Runtime.hx",81,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_89_window_device_pixel_ratio,"snow.core.native.Runtime","window_device_pixel_ratio",0x7f51890f,"snow.core.native.Runtime.window_device_pixel_ratio","snow/core/native/Runtime.hx",89,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_97_window_width,"snow.core.native.Runtime","window_width",0x241433a0,"snow.core.native.Runtime.window_width","snow/core/native/Runtime.hx",97,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_105_window_height,"snow.core.native.Runtime","window_height",0x23e8710d,"snow.core.native.Runtime.window_height","snow/core/native/Runtime.hx",105,0x89911f1a)
HX_LOCAL_STACK_FRAME(_hx_pos_7a3649154d10a185_115_timestamp,"snow.core.native.Runtime","timestamp",0xdbed9acd,"snow.core.native.Runtime.timestamp","snow/core/native/Runtime.hx",115,0x89911f1a)
namespace snow{
namespace core{
namespace native{

void Runtime_obj::__construct( ::snow::Snow _app){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_18_new)
HXLINE(  20)		this->name = HX_("native",97,c9,1c,22);
HXLINE(  27)		this->app = _app;
HXLINE(  33)		this->app->os = HX_("android",2f,9b,a4,9c);
HXDLIN(  33)		this->app->platform = HX_("android",2f,9b,a4,9c);
HXLINE(  38)		::String _app_path = this->app->io->module->app_path();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (hx::IsNotNull( _app_path )) {
HXLINE(  43)			_hx_tmp = (_app_path != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  44)			::Sys_obj::setCwd(_app_path);
            		}
            	}

Dynamic Runtime_obj::__CreateEmpty() { return new Runtime_obj; }

void *Runtime_obj::_hx_vtable = 0;

Dynamic Runtime_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Runtime_obj > _hx_result = new Runtime_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Runtime_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x584d5d9f;
}

static ::snow::core::Runtime_obj _hx_snow_core_native_Runtime__hx_snow_core_Runtime= {
	( void (hx::Object::*)())&::snow::core::native::Runtime_obj::ready,
	( bool (hx::Object::*)())&::snow::core::native::Runtime_obj::run,
	( void (hx::Object::*)( ::Dynamic))&::snow::core::native::Runtime_obj::shutdown,
	( bool (hx::Object::*)(bool))&::snow::core::native::Runtime_obj::window_grab,
	( bool (hx::Object::*)(bool, ::Dynamic))&::snow::core::native::Runtime_obj::window_fullscreen,
	( Float (hx::Object::*)())&::snow::core::native::Runtime_obj::window_device_pixel_ratio,
	( int (hx::Object::*)())&::snow::core::native::Runtime_obj::window_width,
	( int (hx::Object::*)())&::snow::core::native::Runtime_obj::window_height,
};

void *Runtime_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9fe29ed6: return &_hx_snow_core_native_Runtime__hx_snow_core_Runtime;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool Runtime_obj::run(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_51_run)
HXLINE(  55)		this->app->dispatch_event(3);
HXLINE(  57)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,run,return )

void Runtime_obj::ready(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_63_ready)
HXDLIN(  63)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  63)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / ready",42,13,84,2d)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),63,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("ready",63,a0,ba,e6)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,ready,(void))

void Runtime_obj::shutdown( ::Dynamic __o__immediate){
 ::Dynamic _immediate = __o__immediate.Default(false);
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_69_shutdown)
HXDLIN(  69)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  69)		::String _hx_tmp1 = (HX_("  i / runtime / ",c1,d9,78,ba) + (HX_("runtime / native / shutdown / immediate=",26,56,69,d1) + ::Std_obj::string(_immediate)));
HXDLIN(  69)		_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),69,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("shutdown",96,fc,0b,6b)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,shutdown,(void))

bool Runtime_obj::window_grab(bool enable){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_73_window_grab)
HXLINE(  75)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  75)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / window_grab",da,75,bf,20)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),75,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("window_grab",bb,11,22,55)));
HXLINE(  77)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Runtime_obj,window_grab,return )

bool Runtime_obj::window_fullscreen(bool enable, ::Dynamic __o_true_fullscreen){
 ::Dynamic true_fullscreen = __o_true_fullscreen.Default(false);
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_81_window_fullscreen)
HXLINE(  83)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  83)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / window_fullscreen",c9,de,74,87)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),83,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("window_fullscreen",6a,19,9b,3c)));
HXLINE(  85)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Runtime_obj,window_fullscreen,return )

Float Runtime_obj::window_device_pixel_ratio(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_89_window_device_pixel_ratio)
HXLINE(  91)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  91)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / window_device_pixel_ratio",77,e1,95,0c)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),91,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("window_device_pixel_ratio",18,25,59,b3)));
HXLINE(  93)		return ((Float)1.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_device_pixel_ratio,return )

int Runtime_obj::window_width(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_97_window_width)
HXLINE(  99)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  99)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / window_width",38,5c,40,b7)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),99,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("window_width",37,25,26,59)));
HXLINE( 101)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_width,return )

int Runtime_obj::window_height(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_105_window_height)
HXLINE( 107)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 107)		_hx_tmp((HX_("  i / runtime / ",c1,d9,78,ba) + HX_("runtime / native / window_height",75,cd,5f,57)),hx::SourceInfo(HX_("snow/core/native/Runtime.hx",1a,1f,91,89),107,HX_("snow.core.native.Runtime",a5,5b,c2,c2),HX_("window_height",96,e3,89,5e)));
HXLINE( 109)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,window_height,return )

Float Runtime_obj::timestamp(){
            	HX_STACKFRAME(&_hx_pos_7a3649154d10a185_115_timestamp)
HXDLIN( 115)		return  ::__time_stamp();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Runtime_obj,timestamp,return )


hx::ObjectPtr< Runtime_obj > Runtime_obj::__new( ::snow::Snow _app) {
	hx::ObjectPtr< Runtime_obj > __this = new Runtime_obj();
	__this->__construct(_app);
	return __this;
}

hx::ObjectPtr< Runtime_obj > Runtime_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app) {
	Runtime_obj *__this = (Runtime_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Runtime_obj), true, "snow.core.native.Runtime"));
	*(void **)__this = Runtime_obj::_hx_vtable;
	__this->__construct(_app);
	return __this;
}

Runtime_obj::Runtime_obj()
{
}

void Runtime_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runtime);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void Runtime_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(app,"app");
}

hx::Val Runtime_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return hx::Val( app ); }
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return hx::Val( shutdown_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"window_grab") ) { return hx::Val( window_grab_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"window_width") ) { return hx::Val( window_width_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"window_height") ) { return hx::Val( window_height_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"window_fullscreen") ) { return hx::Val( window_fullscreen_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"window_device_pixel_ratio") ) { return hx::Val( window_device_pixel_ratio_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Runtime_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"timestamp") ) { outValue = timestamp_dyn(); return true; }
	}
	return false;
}

hx::Val Runtime_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast<  ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Runtime_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("app",a1,fc,49,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Runtime_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Runtime_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Runtime_obj,app),HX_("app",a1,fc,49,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Runtime_obj_sStaticStorageInfo = 0;
#endif

static ::String Runtime_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("app",a1,fc,49,00),
	HX_("run",4b,e7,56,00),
	HX_("ready",63,a0,ba,e6),
	HX_("shutdown",96,fc,0b,6b),
	HX_("window_grab",bb,11,22,55),
	HX_("window_fullscreen",6a,19,9b,3c),
	HX_("window_device_pixel_ratio",18,25,59,b3),
	HX_("window_width",37,25,26,59),
	HX_("window_height",96,e3,89,5e),
	::String(null()) };

hx::Class Runtime_obj::__mClass;

static ::String Runtime_obj_sStaticFields[] = {
	HX_("timestamp",d6,d4,ce,a5),
	::String(null())
};

void Runtime_obj::__register()
{
	Runtime_obj _hx_dummy;
	Runtime_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.core.native.Runtime",a5,5b,c2,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Runtime_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Runtime_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Runtime_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Runtime_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Runtime_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Runtime_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace core
} // end namespace native
