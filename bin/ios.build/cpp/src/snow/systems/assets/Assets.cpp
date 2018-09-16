// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_assets_Assets
#include <snow/core/native/assets/Assets.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Assets
#include <snow/modules/interfaces/Assets.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetAudio
#include <snow/systems/assets/AssetAudio.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetBytes
#include <snow/systems/assets/AssetBytes.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetImage
#include <snow/systems/assets/AssetImage.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetJSON
#include <snow/systems/assets/AssetJSON.h>
#endif
#ifndef INCLUDED_snow_systems_assets_AssetText
#include <snow/systems/assets/AssetText.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fd7c96419395c5c0_13_new,"snow.systems.assets.Assets","new",0xa4b6e92b,"snow.systems.assets.Assets.new","snow/systems/assets/Assets.hx",13,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_43_shutdown,"snow.systems.assets.Assets","shutdown",0xbae423eb,"snow.systems.assets.Assets.shutdown","snow/systems/assets/Assets.hx",43,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_52_path,"snow.systems.assets.Assets","path",0x7ca47e7a,"snow.systems.assets.Assets.path","snow/systems/assets/Assets.hx",52,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_56_bytes,"snow.systems.assets.Assets","bytes",0x938b29f6,"snow.systems.assets.Assets.bytes","snow/systems/assets/Assets.hx",56,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_60_text,"snow.systems.assets.Assets","text",0x7f4c6582,"snow.systems.assets.Assets.text","snow/systems/assets/Assets.hx",60,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_64_json,"snow.systems.assets.Assets","json",0x78badafd,"snow.systems.assets.Assets.json","snow/systems/assets/Assets.hx",64,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_68_image,"snow.systems.assets.Assets","image",0x935c40e6,"snow.systems.assets.Assets.image","snow/systems/assets/Assets.hx",68,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_72_image_from_bytes,"snow.systems.assets.Assets","image_from_bytes",0x3a40ea8f,"snow.systems.assets.Assets.image_from_bytes","snow/systems/assets/Assets.hx",72,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_76_image_from_pixels,"snow.systems.assets.Assets","image_from_pixels",0x23c6ec89,"snow.systems.assets.Assets.image_from_pixels","snow/systems/assets/Assets.hx",76,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_80_audio,"snow.systems.assets.Assets","audio",0xfd739a61,"snow.systems.assets.Assets.audio","snow/systems/assets/Assets.hx",80,0xbd832986)
HX_LOCAL_STACK_FRAME(_hx_pos_fd7c96419395c5c0_84_audio_from_bytes,"snow.systems.assets.Assets","audio_from_bytes",0x0d9fdcf4,"snow.systems.assets.Assets.audio_from_bytes","snow/systems/assets/Assets.hx",84,0xbd832986)
namespace snow{
namespace systems{
namespace assets{

void Assets_obj::__construct( ::snow::Snow _app){
            	HX_GC_STACKFRAME(&_hx_pos_fd7c96419395c5c0_13_new)
HXLINE(  17)		this->root = HX_("",00,00,00,00);
HXLINE(  32)		this->root = HX_("assets/",4c,2a,dc,36);
HXLINE(  35)		this->app = _app;
HXLINE(  36)		this->module =  ::snow::core::native::assets::Assets_obj::__alloc( HX_CTX ,this->app);
            	}

Dynamic Assets_obj::__CreateEmpty() { return new Assets_obj; }

void *Assets_obj::_hx_vtable = 0;

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Assets_obj > _hx_result = new Assets_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Assets_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fcd47fb;
}

void Assets_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_43_shutdown)
HXDLIN(  43)		this->module->shutdown();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,shutdown,(void))

::String Assets_obj::path(::String _id){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_52_path)
HXDLIN(  52)		return ::haxe::io::Path_obj::join(::Array_obj< ::String >::__new(2)->init(0,this->root)->init(1,_id));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,path,return )

 ::snow::api::Promise Assets_obj::bytes(::String _id){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_56_bytes)
HXDLIN(  56)		return ::snow::systems::assets::AssetBytes_obj::load(hx::ObjectPtr<OBJ_>(this),_id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,bytes,return )

 ::snow::api::Promise Assets_obj::text(::String _id){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_60_text)
HXDLIN(  60)		return ::snow::systems::assets::AssetText_obj::load(hx::ObjectPtr<OBJ_>(this),_id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,text,return )

 ::snow::api::Promise Assets_obj::json(::String _id){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_64_json)
HXDLIN(  64)		return ::snow::systems::assets::AssetJSON_obj::load(hx::ObjectPtr<OBJ_>(this),_id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,json,return )

 ::snow::api::Promise Assets_obj::image(::String _id){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_68_image)
HXDLIN(  68)		return ::snow::systems::assets::AssetImage_obj::load(hx::ObjectPtr<OBJ_>(this),_id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,image,return )

 ::snow::api::Promise Assets_obj::image_from_bytes(::String _id, ::snow::api::buffers::ArrayBufferView _bytes){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_72_image_from_bytes)
HXDLIN(  72)		return ::snow::systems::assets::AssetImage_obj::load_from_bytes(hx::ObjectPtr<OBJ_>(this),_id,_bytes);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,image_from_bytes,return )

 ::snow::systems::assets::AssetImage Assets_obj::image_from_pixels(::String _id,int _width,int _height, ::snow::api::buffers::ArrayBufferView _pixels){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_76_image_from_pixels)
HXDLIN(  76)		return ::snow::systems::assets::AssetImage_obj::load_from_pixels(hx::ObjectPtr<OBJ_>(this),_id,_width,_height,_pixels);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,image_from_pixels,return )

 ::snow::api::Promise Assets_obj::audio(::String _id, ::Dynamic __o__is_stream){
 ::Dynamic _is_stream = __o__is_stream.Default(false);
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_80_audio)
HXDLIN(  80)		return ::snow::systems::assets::AssetAudio_obj::load(hx::ObjectPtr<OBJ_>(this),_id,_is_stream);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,audio,return )

 ::snow::api::Promise Assets_obj::audio_from_bytes(::String _id, ::snow::api::buffers::ArrayBufferView _bytes, ::Dynamic _format){
            	HX_STACKFRAME(&_hx_pos_fd7c96419395c5c0_84_audio_from_bytes)
HXDLIN(  84)		return ::snow::systems::assets::AssetAudio_obj::load_from_bytes(hx::ObjectPtr<OBJ_>(this),_id,_bytes,_format);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,audio_from_bytes,return )


hx::ObjectPtr< Assets_obj > Assets_obj::__new( ::snow::Snow _app) {
	hx::ObjectPtr< Assets_obj > __this = new Assets_obj();
	__this->__construct(_app);
	return __this;
}

hx::ObjectPtr< Assets_obj > Assets_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app) {
	Assets_obj *__this = (Assets_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Assets_obj), true, "snow.systems.assets.Assets"));
	*(void **)__this = Assets_obj::_hx_vtable;
	__this->__construct(_app);
	return __this;
}

Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(app,"app");
}

hx::Val Assets_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return hx::Val( app ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"path") ) { return hx::Val( path_dyn() ); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text_dyn() ); }
		if (HX_FIELD_EQ(inName,"json") ) { return hx::Val( json_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"image") ) { return hx::Val( image_dyn() ); }
		if (HX_FIELD_EQ(inName,"audio") ) { return hx::Val( audio_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { return hx::Val( module ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shutdown") ) { return hx::Val( shutdown_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"image_from_bytes") ) { return hx::Val( image_from_bytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"audio_from_bytes") ) { return hx::Val( audio_from_bytes_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"image_from_pixels") ) { return hx::Val( image_from_pixels_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Assets_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast<  ::snow::Snow >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast<  ::snow::core::native::assets::Assets >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	outFields->push(HX_("module",ac,34,d3,c0));
	outFields->push(HX_("app",a1,fc,49,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Assets_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Assets_obj,root),HX_("root",22,ee,ae,4b)},
	{hx::fsObject /*::snow::core::native::assets::Assets*/ ,(int)offsetof(Assets_obj,module),HX_("module",ac,34,d3,c0)},
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Assets_obj,app),HX_("app",a1,fc,49,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Assets_obj_sStaticStorageInfo = 0;
#endif

static ::String Assets_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("module",ac,34,d3,c0),
	HX_("app",a1,fc,49,00),
	HX_("shutdown",96,fc,0b,6b),
	HX_("path",a5,e5,51,4a),
	HX_("bytes",6b,08,98,bd),
	HX_("text",ad,cc,f9,4c),
	HX_("json",28,42,68,46),
	HX_("image",5b,1f,69,bd),
	HX_("image_from_bytes",3a,e6,41,81),
	HX_("image_from_pixels",7e,26,a2,fd),
	HX_("audio",d6,78,80,27),
	HX_("audio_from_bytes",9f,d8,a0,54),
	::String(null()) };

hx::Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Assets_obj _hx_dummy;
	Assets_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.systems.assets.Assets",b9,77,d2,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Assets_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Assets_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Assets_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace systems
} // end namespace assets