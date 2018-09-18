// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_886b57b7a9067d4f
#define INCLUDED_886b57b7a9067d4f
#include "linc_ogg.h"
#endif
#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataOGG
#include <snow/core/native/audio/AudioDataOGG.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ad2d5d9ab296747_15_new,"snow.core.native.audio.AudioDataOGG","new",0xf4ea1cec,"snow.core.native.audio.AudioDataOGG.new","snow/core/native/audio/AudioDataOGG.hx",15,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_6ad2d5d9ab296747_38_seek,"snow.core.native.audio.AudioDataOGG","seek",0x5b3d336c,"snow.core.native.audio.AudioDataOGG.seek","snow/core/native/audio/AudioDataOGG.hx",38,0x186b83e2)
HX_LOCAL_STACK_FRAME(_hx_pos_6ad2d5d9ab296747_49_portion,"snow.core.native.audio.AudioDataOGG","portion",0x8b717373,"snow.core.native.audio.AudioDataOGG.portion","snow/core/native/audio/AudioDataOGG.hx",49,0x186b83e2)
namespace snow{
namespace core{
namespace native{
namespace audio{

void AudioDataOGG_obj::__construct( ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt){
            	HX_STACKFRAME(&_hx_pos_6ad2d5d9ab296747_15_new)
HXLINE(  17)		this->handle = _handle;
HXLINE(  18)		this->oggfile = _oggfile;
HXLINE(  20)		super::__construct(_app,_opt);
            	}

Dynamic AudioDataOGG_obj::__CreateEmpty() { return new AudioDataOGG_obj; }

void *AudioDataOGG_obj::_hx_vtable = 0;

Dynamic AudioDataOGG_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AudioDataOGG_obj > _hx_result = new AudioDataOGG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AudioDataOGG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09d58bc8) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x09d58bc8;
	} else {
		return inClassId==(int)0x491fc56a;
	}
}

bool AudioDataOGG_obj::seek(int _to){
            	HX_STACKFRAME(&_hx_pos_6ad2d5d9ab296747_38_seek)
HXLINE(  42)		 cpp::Int64Struct _to_samples = ( ::cpp::Int64Struct(::Std_obj::_hx_int((( (Float)(_to) ) / ( (Float)(16) )))));
HXLINE(  43)		::cpp::Pointer<  OggVorbis_File > tmp = this->oggfile;
HXDLIN(  43)		int res = ov_pcm_seek(tmp,_to_samples);
HXLINE(  45)		return (res == 0);
            	}


::Array< int > AudioDataOGG_obj::portion( ::snow::api::buffers::ArrayBufferView _into,int _start,int _len,::Array< int > _into_result){
            	HX_STACKFRAME(&_hx_pos_6ad2d5d9ab296747_49_portion)
HXLINE(  51)		bool complete = false;
HXLINE(  52)		int word = 2;
HXLINE(  53)		int sgned = 1;
HXLINE(  54)		int bit_stream = 1;
HXLINE(  56)		int _read_len = _len;
HXLINE(  60)		::cpp::Pointer<  OggVorbis_File > tmp = this->oggfile;
HXDLIN(  60)		Float st = ov_time_tell(tmp);
HXLINE(  61)		::cpp::Pointer<  OggVorbis_File > tmp1 = this->oggfile;
HXDLIN(  61)		 cpp::Int64Struct sp = ov_pcm_tell(tmp1);
HXLINE(  62)		::cpp::Pointer<  OggVorbis_File > tmp2 = this->oggfile;
HXDLIN(  62)		 cpp::Int64Struct sr = ov_raw_tell(tmp2);
HXLINE(  63)		::cpp::Pointer<  OggVorbis_File > tmp3 = this->oggfile;
HXDLIN(  63)		Float ct = ov_time_total(tmp3,-1);
HXLINE(  64)		::cpp::Pointer<  OggVorbis_File > tmp4 = this->oggfile;
HXDLIN(  64)		 cpp::Int64Struct cp = ov_pcm_total(tmp4,-1);
HXLINE(  65)		::cpp::Pointer<  OggVorbis_File > tmp5 = this->oggfile;
HXDLIN(  65)		 cpp::Int64Struct cr = ov_raw_total(tmp5,-1);
HXLINE(  71)		if ((_start != -1)) {
HXLINE(  73)			this->seek(_start);
            		}
HXLINE(  81)		bool reading = true;
HXLINE(  82)		int bytes_left = _read_len;
HXLINE(  83)		int total_read = 0;
HXLINE(  84)		int bytes_read = 0;
HXLINE(  85)		int OGG_BUFFER_LENGTH = 128;
HXLINE(  87)		while(reading){
HXLINE(  89)			int _read_max = OGG_BUFFER_LENGTH;
HXLINE(  91)			if ((bytes_left < _read_max)) {
HXLINE(  92)				_read_max = bytes_left;
            			}
HXLINE(  96)			::cpp::Pointer<  OggVorbis_File > tmp6 = this->oggfile;
HXDLIN(  96)			bytes_read = linc::ogg::ov_read(tmp6,_into->buffer,total_read,_read_max,0,2,1);
HXLINE(  98)			total_read = (total_read + bytes_read);
HXLINE(  99)			bytes_left = (bytes_left - bytes_read);
HXLINE( 104)			if ((bytes_read == 0)) {
HXLINE( 105)				reading = false;
HXLINE( 106)				complete = true;
            			}
HXLINE( 109)			if ((total_read >= _read_len)) {
HXLINE( 110)				reading = false;
            			}
            		}
HXLINE( 117)		if ((total_read != _read_len)) {
HXLINE( 118)			int byte_gap = (_read_len & 3);
            		}
HXLINE( 124)		_into_result[0] = total_read;
HXLINE( 125)		int _hx_tmp;
HXDLIN( 125)		if (complete) {
HXLINE( 125)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 125)			_hx_tmp = 0;
            		}
HXDLIN( 125)		_into_result[1] = _hx_tmp;
HXLINE( 127)		return _into_result;
            	}



hx::ObjectPtr< AudioDataOGG_obj > AudioDataOGG_obj::__new( ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt) {
	hx::ObjectPtr< AudioDataOGG_obj > __this = new AudioDataOGG_obj();
	__this->__construct(_app,_handle,_oggfile,_opt);
	return __this;
}

hx::ObjectPtr< AudioDataOGG_obj > AudioDataOGG_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app,::cpp::Pointer<  SDL_RWops > _handle,::cpp::Pointer<  OggVorbis_File > _oggfile, ::Dynamic _opt) {
	AudioDataOGG_obj *__this = (AudioDataOGG_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioDataOGG_obj), true, "snow.core.native.audio.AudioDataOGG"));
	*(void **)__this = AudioDataOGG_obj::_hx_vtable;
	__this->__construct(_app,_handle,_oggfile,_opt);
	return __this;
}

AudioDataOGG_obj::AudioDataOGG_obj()
{
}

void AudioDataOGG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioDataOGG);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(oggfile,"oggfile");
	 ::snow::types::AudioData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AudioDataOGG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(oggfile,"oggfile");
	 ::snow::types::AudioData_obj::__Visit(HX_VISIT_ARG);
}

hx::Val AudioDataOGG_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"seek") ) { return hx::Val( seek_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oggfile") ) { return hx::Val( oggfile ); }
		if (HX_FIELD_EQ(inName,"portion") ) { return hx::Val( portion_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AudioDataOGG_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< ::cpp::Pointer<  SDL_RWops > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"oggfile") ) { oggfile=inValue.Cast< ::cpp::Pointer<  OggVorbis_File > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioDataOGG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("oggfile",4b,36,92,c8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo AudioDataOGG_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::Pointer< SDL_RWops >*/ ,(int)offsetof(AudioDataOGG_obj,handle),HX_("handle",a8,83,fd,b7)},
	{hx::fsObject /*::cpp::Pointer< OggVorbis_File >*/ ,(int)offsetof(AudioDataOGG_obj,oggfile),HX_("oggfile",4b,36,92,c8)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AudioDataOGG_obj_sStaticStorageInfo = 0;
#endif

static ::String AudioDataOGG_obj_sMemberFields[] = {
	HX_("handle",a8,83,fd,b7),
	HX_("oggfile",4b,36,92,c8),
	HX_("seek",78,85,50,4c),
	HX_("portion",e7,f0,ab,83),
	::String(null()) };

hx::Class AudioDataOGG_obj::__mClass;

void AudioDataOGG_obj::__register()
{
	AudioDataOGG_obj _hx_dummy;
	AudioDataOGG_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.core.native.audio.AudioDataOGG",fa,76,8e,3c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AudioDataOGG_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AudioDataOGG_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AudioDataOGG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AudioDataOGG_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio
