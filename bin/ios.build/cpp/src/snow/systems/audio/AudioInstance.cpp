// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_systems_audio_Audio
#include <snow/systems/audio/Audio.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioInstance
#include <snow/systems/audio/AudioInstance.h>
#endif
#ifndef INCLUDED_snow_systems_audio_AudioSource
#include <snow/systems/audio/AudioSource.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_df995ef704e3f227_9_new,"snow.systems.audio.AudioInstance","new",0x89f57190,"snow.systems.audio.AudioInstance.new","snow/systems/audio/AudioInstance.hx",9,0xa2427c63)
HX_LOCAL_STACK_FRAME(_hx_pos_df995ef704e3f227_24_tick,"snow.systems.audio.AudioInstance","tick",0x30c82c2d,"snow.systems.audio.AudioInstance.tick","snow/systems/audio/AudioInstance.hx",24,0xa2427c63)
HX_LOCAL_STACK_FRAME(_hx_pos_df995ef704e3f227_28_has_ended,"snow.systems.audio.AudioInstance","has_ended",0x3ccc7445,"snow.systems.audio.AudioInstance.has_ended","snow/systems/audio/AudioInstance.hx",28,0xa2427c63)
HX_LOCAL_STACK_FRAME(_hx_pos_df995ef704e3f227_36_destroy,"snow.systems.audio.AudioInstance","destroy",0xb948262a,"snow.systems.audio.AudioInstance.destroy","snow/systems/audio/AudioInstance.hx",36,0xa2427c63)
HX_LOCAL_STACK_FRAME(_hx_pos_df995ef704e3f227_48_data_get,"snow.systems.audio.AudioInstance","data_get",0x28ac8991,"snow.systems.audio.AudioInstance.data_get","snow/systems/audio/AudioInstance.hx",48,0xa2427c63)
HX_LOCAL_STACK_FRAME(_hx_pos_df995ef704e3f227_56_data_seek,"snow.systems.audio.AudioInstance","data_seek",0x763a581d,"snow.systems.audio.AudioInstance.data_seek","snow/systems/audio/AudioInstance.hx",56,0xa2427c63)
namespace snow{
namespace systems{
namespace audio{

void AudioInstance_obj::__construct( ::snow::systems::audio::AudioSource _source, ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_9_new)
HXLINE(  13)		this->destroyed = false;
HXLINE(  19)		this->source = _source;
HXLINE(  20)		this->handle = _handle;
            	}

Dynamic AudioInstance_obj::__CreateEmpty() { return new AudioInstance_obj; }

void *AudioInstance_obj::_hx_vtable = 0;

Dynamic AudioInstance_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioInstance_obj > _hx_result = new AudioInstance_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool AudioInstance_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36661e32;
}

void AudioInstance_obj::tick(){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_24_tick)
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,tick,(void))

bool AudioInstance_obj::has_ended(){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_28_has_ended)
HXLINE(  30)		if ((this->destroyed != false)) {
HXLINE(  30)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("destroyed == false",0a,e4,63,7c) + ((HX_(" ( ",18,6b,18,00) + HX_("snow / Audio / Instance has_ended queried after being destroyed",fe,b8,44,15)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  32)		return (this->source->app->audio->state_of(this->handle) == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,has_ended,return )

void AudioInstance_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_36_destroy)
HXLINE(  38)		if ((this->destroyed != false)) {
HXLINE(  38)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("destroyed == false",0a,e4,63,7c) + ((HX_(" ( ",18,6b,18,00) + HX_("snow / Audio / Instance being destroyed more than once",5f,28,13,8c)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  40)		this->source->app->audio->emit_Int(1,this->handle);
HXLINE(  41)		this->source->instance_killed(hx::ObjectPtr<OBJ_>(this));
HXLINE(  42)		this->destroyed = true;
HXLINE(  43)		this->source = null();
HXLINE(  44)		this->handle = -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AudioInstance_obj,destroy,(void))

::Array< int > AudioInstance_obj::data_get( ::snow::api::buffers::ArrayBufferView _into,int _start,int _length,::Array< int > _into_result){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_48_data_get)
HXLINE(  50)		if ((this->destroyed != false)) {
HXLINE(  50)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("destroyed == false",0a,e4,63,7c) + ((HX_(" ( ",18,6b,18,00) + HX_("snow / Audio / Instance data_get queried after being destroyed",ae,3a,9b,99)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  52)		return this->source->data->portion(_into,_start,_length,_into_result);
            	}


HX_DEFINE_DYNAMIC_FUNC4(AudioInstance_obj,data_get,return )

bool AudioInstance_obj::data_seek(int _to_samples){
            	HX_STACKFRAME(&_hx_pos_df995ef704e3f227_56_data_seek)
HXLINE(  58)		if ((this->destroyed != false)) {
HXLINE(  58)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("destroyed == false",0a,e4,63,7c) + ((HX_(" ( ",18,6b,18,00) + HX_("snow / Audio / Instance data_seek queried after being destroyed",d6,d6,8b,d3)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  60)		return this->source->data->seek(_to_samples);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AudioInstance_obj,data_seek,return )


hx::ObjectPtr< AudioInstance_obj > AudioInstance_obj::__new( ::snow::systems::audio::AudioSource _source, ::Dynamic _handle) {
	hx::ObjectPtr< AudioInstance_obj > __this = new AudioInstance_obj();
	__this->__construct(_source,_handle);
	return __this;
}

hx::ObjectPtr< AudioInstance_obj > AudioInstance_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::systems::audio::AudioSource _source, ::Dynamic _handle) {
	AudioInstance_obj *__this = (AudioInstance_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioInstance_obj), true, "snow.systems.audio.AudioInstance"));
	*(void **)__this = AudioInstance_obj::_hx_vtable;
	__this->__construct(_source,_handle);
	return __this;
}

AudioInstance_obj::AudioInstance_obj()
{
}

void AudioInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioInstance);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_END_CLASS();
}

void AudioInstance_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
}

hx::Val AudioInstance_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return hx::Val( tick_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return hx::Val( source ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"data_get") ) { return hx::Val( data_get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return hx::Val( destroyed ); }
		if (HX_FIELD_EQ(inName,"has_ended") ) { return hx::Val( has_ended_dyn() ); }
		if (HX_FIELD_EQ(inName,"data_seek") ) { return hx::Val( data_seek_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioInstance_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast<  ::snow::systems::audio::AudioSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("source",db,b0,31,32));
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("destroyed",d9,37,27,f4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AudioInstance_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::audio::AudioSource*/ ,(int)offsetof(AudioInstance_obj,source),HX_("source",db,b0,31,32)},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AudioInstance_obj,handle),HX_("handle",a8,83,fd,b7)},
	{hx::fsBool,(int)offsetof(AudioInstance_obj,destroyed),HX_("destroyed",d9,37,27,f4)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioInstance_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioInstance_obj_sMemberFields[] = {
	HX_("source",db,b0,31,32),
	HX_("handle",a8,83,fd,b7),
	HX_("destroyed",d9,37,27,f4),
	HX_("tick",5d,c3,fc,4c),
	HX_("has_ended",15,cf,b5,78),
	HX_("destroy",fa,2c,86,24),
	HX_("data_get",c1,78,b4,93),
	HX_("data_seek",ed,b2,23,b2),
	::String(null()) };

hx::Class AudioInstance_obj::__mClass;

void AudioInstance_obj::__register()
{
	AudioInstance_obj _hx_dummy;
	AudioInstance_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.systems.audio.AudioInstance",9e,a9,61,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioInstance_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioInstance_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioInstance_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioInstance_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace systems
} // end namespace audio
