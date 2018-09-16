// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_fb3dacc61d0dee8d
#define INCLUDED_fb3dacc61d0dee8d
#include "linc_openal.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openal_ALError
#include <openal/ALError.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALSound
#include <snow/modules/openal/ALSound.h>
#endif
#ifndef INCLUDED_snow_modules_openal_ALStream
#include <snow/modules/openal/ALStream.h>
#endif
#ifndef INCLUDED_snow_modules_openal_Audio
#include <snow/modules/openal/Audio.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_13_new,"snow.modules.openal.ALStream","new",0xd6e82304,"snow.modules.openal.ALStream.new","snow/modules/openal/ALStream.hx",13,0x4d99680d)
static const int _hx_array_data_a0599112_1[] = {
	(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_32_init,"snow.modules.openal.ALStream","init",0x30ef37ec,"snow.modules.openal.ALStream.init","snow/modules/openal/ALStream.hx",32,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_50_destroy,"snow.modules.openal.ALStream","destroy",0x1e62a19e,"snow.modules.openal.ALStream.destroy","snow/modules/openal/ALStream.hx",50,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_81_position_of,"snow.modules.openal.ALStream","position_of",0x00447cd1,"snow.modules.openal.ALStream.position_of","snow/modules/openal/ALStream.hx",81,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_85_position,"snow.modules.openal.ALStream","position",0x72043b85,"snow.modules.openal.ALStream.position","snow/modules/openal/ALStream.hx",85,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_134_init_queue,"snow.modules.openal.ALStream","init_queue",0xda4dc5be,"snow.modules.openal.ALStream.init_queue","snow/modules/openal/ALStream.hx",134,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_152_flush_queue,"snow.modules.openal.ALStream","flush_queue",0xd16f393a,"snow.modules.openal.ALStream.flush_queue","snow/modules/openal/ALStream.hx",152,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_169_fill_buffer,"snow.modules.openal.ALStream","fill_buffer",0x9633bd20,"snow.modules.openal.ALStream.fill_buffer","snow/modules/openal/ALStream.hx",169,0x4d99680d)
HX_LOCAL_STACK_FRAME(_hx_pos_b73c3b8a9b75c967_190_tick,"snow.modules.openal.ALStream","tick",0x3830c039,"snow.modules.openal.ALStream.tick","snow/modules/openal/ALStream.hx",190,0x4d99680d)
namespace snow{
namespace modules{
namespace openal{

void ALStream_obj::__construct( ::snow::modules::openal::Audio _module, ::snow::systems::audio::AudioSource _source, ::snow::systems::audio::AudioInstance _instance){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_13_new)
HXLINE( 168)		this->data_get_result = ::Array_obj< int >::fromData( _hx_array_data_a0599112_1,2);
HXLINE(  22)		this->duration = ((Float)0.0);
HXLINE(  20)		this->buffers_left = 0;
HXLINE(  26)		super::__construct(_module,_source,_instance);
HXLINE(  28)		this->duration = this->source->duration();
            	}

Dynamic ALStream_obj::__CreateEmpty() { return new ALStream_obj; }

void *ALStream_obj::_hx_vtable = 0;

Dynamic ALStream_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALStream_obj > _hx_result = new ALStream_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ALStream_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a184597) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a184597;
	} else {
		return inClassId==(int)0x7ee9061c;
	}
}

void ALStream_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_32_init)
HXLINE(  36)		::Array< int > _g = ::Array_obj< int >::__new(0);
HXDLIN(  36)		{
HXLINE(  36)			int _g2 = 0;
HXDLIN(  36)			int _g1 = this->source->stream_buffer_count;
HXDLIN(  36)			while((_g2 < _g1)){
HXLINE(  36)				_g2 = (_g2 + 1);
HXDLIN(  36)				int i = (_g2 - 1);
HXDLIN(  36)				_g->push(0);
            			}
            		}
HXDLIN(  36)		this->buffers = _g;
HXLINE(  37)		int n = this->source->stream_buffer_count;
HXDLIN(  37)		::Array< int > into = this->buffers;
HXDLIN(  37)		int _i = 0;
HXDLIN(  37)		while((_i < n)){
HXLINE(  37)			into[_i] = linc::openal::genBuffer();
HXDLIN(  37)			_i = (_i + 1);
            		}
HXDLIN(  37)		this->buffers = into;
HXLINE(  38)		int _elements = this->source->stream_buffer_length;
HXDLIN(  38)		if ((_elements < 0)) {
HXLINE(  38)			_elements = 0;
            		}
HXDLIN(  38)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN(  38)		int _bytelen = (_elements * _view->bytesPerElement);
HXDLIN(  38)		_view->byteOffset = 0;
HXDLIN(  38)		_view->byteLength = _bytelen;
HXDLIN(  38)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  38)		if ((_bytelen > 0)) {
HXLINE(  38)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN(  38)		_view->buffer = this1;
HXDLIN(  38)		_view->length = _elements;
HXDLIN(  38)		 ::snow::api::buffers::ArrayBufferView this2 = _view;
HXDLIN(  38)		this->buffer_data = this2;
HXLINE(  40)		{
HXLINE(  40)			::String reason = ((HX_("generated ",b1,ad,60,4e) + this->source->stream_buffer_count) + HX_(" buffers",53,e7,de,d7));
HXDLIN(  40)			{
HXLINE(  40)				 ::snow::modules::openal::Audio _this = this->module;
HXDLIN(  40)				int _err = alGetError();
HXDLIN(  40)				if ((_err != 0)) {
HXLINE(  40)					::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + reason) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN(  40)					::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN(  40)					HX_STACK_DO_THROW(_s);
            				}
            			}
            		}
HXLINE(  42)		this->instance->data_seek(0);
HXLINE(  44)		this->init_queue(null());
            	}


void ALStream_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_50_destroy)
HXLINE(  54)		{
HXLINE(  54)			 ::snow::modules::openal::Audio _this = this->module;
HXDLIN(  54)			int _err = alGetError();
HXDLIN(  54)			if ((_err != 0)) {
HXLINE(  54)				::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + HX_("pre source stop",ea,11,2b,f1)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN(  54)				::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN(  54)				HX_STACK_DO_THROW(_s);
            			}
            		}
HXLINE(  56)		alSourceStop(this->alsource);
HXLINE(  58)		{
HXLINE(  58)			 ::snow::modules::openal::Audio _this1 = this->module;
HXDLIN(  58)			int _err1 = alGetError();
HXDLIN(  58)			if ((_err1 != 0)) {
HXLINE(  58)				::String _s1 = (((((HX_("",00,00,00,00) + _err1) + HX_(" / ",31,71,18,00)) + HX_("pre flush queue",b8,23,3a,3c)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err1));
HXDLIN(  58)				::haxe::Log_obj::trace(_s1,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN(  58)				HX_STACK_DO_THROW(_s1);
            			}
            		}
HXLINE(  60)		this->flush_queue();
HXLINE(  62)		{
HXLINE(  62)			 ::snow::modules::openal::Audio _this2 = this->module;
HXDLIN(  62)			int _err2 = alGetError();
HXDLIN(  62)			if ((_err2 != 0)) {
HXLINE(  62)				::String _s2 = (((((HX_("",00,00,00,00) + _err2) + HX_(" / ",31,71,18,00)) + HX_("post flush queue",75,2f,45,a5)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err2));
HXDLIN(  62)				::haxe::Log_obj::trace(_s2,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN(  62)				HX_STACK_DO_THROW(_s2);
            			}
            		}
HXLINE(  65)		this->super::destroy();
HXLINE(  67)		while((this->buffers->length > 0)){
HXLINE(  68)			 ::Dynamic b = this->buffers->pop();
HXLINE(  69)			linc::openal::deleteBuffer(( (int)(b) ));
HXLINE(  70)			{
HXLINE(  70)				int _hx_int = ( (int)(b) );
HXDLIN(  70)				Float reason;
HXDLIN(  70)				if ((_hx_int < 0)) {
HXLINE(  70)					reason = (((Float)4294967296.0) + _hx_int);
            				}
            				else {
HXLINE(  70)					reason = (_hx_int + ((Float)0.0));
            				}
HXDLIN(  70)				::String reason1 = (HX_("delete buffer ",2b,4a,04,58) + ::Std_obj::string(reason));
HXDLIN(  70)				{
HXLINE(  70)					 ::snow::modules::openal::Audio _this3 = this->module;
HXDLIN(  70)					int _err3 = alGetError();
HXDLIN(  70)					if ((_err3 != 0)) {
HXLINE(  70)						::String _s3 = (((((HX_("",00,00,00,00) + _err3) + HX_(" / ",31,71,18,00)) + reason1) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err3));
HXDLIN(  70)						::haxe::Log_obj::trace(_s3,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN(  70)						HX_STACK_DO_THROW(_s3);
            					}
            				}
            			}
            		}
HXLINE(  73)		this->buffers = null();
HXLINE(  74)		this->buffer_data->buffer = null();
HXLINE(  75)		this->buffer_data = null();
            	}


Float ALStream_obj::position_of(){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_81_position_of)
HXDLIN(  81)		Float _hx_tmp = this->current_time;
HXDLIN(  81)		return (_hx_tmp + linc::openal::getSourcef(this->alsource,4132));
            	}


void ALStream_obj::position(Float _time){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_85_position)
HXLINE(  87)		bool _playing = (4114 == linc::openal::getSourcei(this->alsource,4112));
HXLINE(  90)		alSourceStop(this->alsource);
HXLINE(  91)		this->flush_queue();
HXLINE(  94)		if ((_time < 0)) {
HXLINE(  94)			_time = ( (Float)(0) );
            		}
            		else {
HXLINE(  94)			if ((_time > this->duration)) {
HXLINE(  94)				_time = this->duration;
            			}
            			else {
HXLINE(  94)				_time = _time;
            			}
            		}
HXLINE(  95)		this->current_time = _time;
HXLINE(  97)		int _samples = this->source->seconds_to_bytes(_time);
HXLINE(  99)		this->instance->data_seek(_samples);
HXLINE( 104)		this->init_queue(null());
HXLINE( 106)		if (_playing) {
HXLINE( 107)			alSourcePlay(this->alsource);
            		}
            	}


void ALStream_obj::init_queue( ::Dynamic __o__start){
 ::Dynamic _start = __o__start.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_134_init_queue)
HXLINE( 136)		if (hx::IsNotEq( _start,-1 )) {
HXLINE( 136)			this->instance->data_seek(( (int)(_start) ));
            		}
HXLINE( 138)		{
HXLINE( 138)			int _g1 = 0;
HXDLIN( 138)			int _g = this->source->stream_buffer_count;
HXDLIN( 138)			while((_g1 < _g)){
HXLINE( 138)				_g1 = (_g1 + 1);
HXDLIN( 138)				int i = (_g1 - 1);
HXLINE( 139)				this->fill_buffer(this->buffers->__get(i));
HXLINE( 140)				int _hx_tmp = this->alsource;
HXDLIN( 140)				linc::openal::sourceQueueBuffer(_hx_tmp,this->buffers->__get(i));
HXLINE( 141)				{
HXLINE( 141)					int _hx_int = this->buffers->__get(i);
HXDLIN( 141)					Float reason;
HXDLIN( 141)					if ((_hx_int < 0)) {
HXLINE( 141)						reason = (((Float)4294967296.0) + _hx_int);
            					}
            					else {
HXLINE( 141)						reason = (_hx_int + ((Float)0.0));
            					}
HXDLIN( 141)					::String reason1 = (HX_("queue buffer ",91,ed,5a,a1) + ::Std_obj::string(reason));
HXDLIN( 141)					{
HXLINE( 141)						 ::snow::modules::openal::Audio _this = this->module;
HXDLIN( 141)						int _err = alGetError();
HXDLIN( 141)						if ((_err != 0)) {
HXLINE( 141)							::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + reason1) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN( 141)							::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 141)							HX_STACK_DO_THROW(_s);
            						}
            					}
            				}
            			}
            		}
HXLINE( 144)		{
HXLINE( 144)			 ::snow::modules::openal::Audio _this1 = this->module;
HXDLIN( 144)			int _err1 = alGetError();
HXDLIN( 144)			if ((_err1 != 0)) {
HXLINE( 144)				::String _s1 = (((((HX_("",00,00,00,00) + _err1) + HX_(" / ",31,71,18,00)) + HX_("init_queue",e2,bb,82,29)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err1));
HXDLIN( 144)				::haxe::Log_obj::trace(_s1,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 144)				HX_STACK_DO_THROW(_s1);
            			}
            		}
HXLINE( 148)		this->buffers_left = this->source->stream_buffer_count;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,init_queue,(void))

void ALStream_obj::flush_queue(){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_152_flush_queue)
HXLINE( 154)		int queued = linc::openal::getSourcei(this->alsource,4117);
HXLINE( 158)		{
HXLINE( 158)			int _g1 = 0;
HXDLIN( 158)			int _g = queued;
HXDLIN( 158)			while((_g1 < _g)){
HXLINE( 158)				_g1 = (_g1 + 1);
HXDLIN( 158)				int i = (_g1 - 1);
HXLINE( 159)				linc::openal::sourceUnqueueBuffer(this->alsource);
            			}
            		}
HXLINE( 162)		{
HXLINE( 162)			 ::snow::modules::openal::Audio _this = this->module;
HXDLIN( 162)			int _err = alGetError();
HXDLIN( 162)			if ((_err != 0)) {
HXLINE( 162)				::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + HX_("flush_queue",96,a2,91,d0)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN( 162)				::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 162)				HX_STACK_DO_THROW(_s);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ALStream_obj,flush_queue,(void))

::Array< int > ALStream_obj::fill_buffer(int _buffer){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_169_fill_buffer)
HXLINE( 172)		::Array< int > _read = this->instance->data_get(this->buffer_data,-1,this->source->stream_buffer_length,this->data_get_result);
HXLINE( 173)		int _amount = _read->__get(0);
HXLINE( 176)		{
HXLINE( 176)			int _hx_int = _buffer;
HXDLIN( 176)			Float reason;
HXDLIN( 176)			if ((_hx_int < 0)) {
HXLINE( 176)				reason = (((Float)4294967296.0) + _hx_int);
            			}
            			else {
HXLINE( 176)				reason = (_hx_int + ((Float)0.0));
            			}
HXDLIN( 176)			::String reason1 = (HX_("pre fill buffer ",a0,26,32,06) + ::Std_obj::string(reason));
HXDLIN( 176)			{
HXLINE( 176)				 ::snow::modules::openal::Audio _this = this->module;
HXDLIN( 176)				int _err = alGetError();
HXDLIN( 176)				if ((_err != 0)) {
HXLINE( 176)					::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + reason1) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN( 176)					::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 176)					HX_STACK_DO_THROW(_s);
            				}
            			}
            		}
HXLINE( 178)		if ((_amount > 0)) {
HXLINE( 179)			linc::openal::bufferData(_buffer,this->alformat,this->source->data->rate,this->buffer_data->buffer,this->buffer_data->byteOffset,_amount);
            		}
HXLINE( 182)		{
HXLINE( 182)			int int1 = _buffer;
HXDLIN( 182)			Float reason2;
HXDLIN( 182)			if ((int1 < 0)) {
HXLINE( 182)				reason2 = (((Float)4294967296.0) + int1);
            			}
            			else {
HXLINE( 182)				reason2 = (int1 + ((Float)0.0));
            			}
HXDLIN( 182)			::String reason3 = ((HX_("post fill buffer ",43,60,d1,86) + ::Std_obj::string(reason2)) + HX_(" read: ",9c,57,40,2f));
HXDLIN( 182)			::String reason4 = (reason3 + ::Std_obj::string(_read));
HXDLIN( 182)			{
HXLINE( 182)				 ::snow::modules::openal::Audio _this1 = this->module;
HXDLIN( 182)				int _err1 = alGetError();
HXDLIN( 182)				if ((_err1 != 0)) {
HXLINE( 182)					::String _s1 = (((((HX_("",00,00,00,00) + _err1) + HX_(" / ",31,71,18,00)) + reason4) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err1));
HXDLIN( 182)					::haxe::Log_obj::trace(_s1,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 182)					HX_STACK_DO_THROW(_s1);
            				}
            			}
            		}
HXLINE( 184)		return this->data_get_result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ALStream_obj,fill_buffer,return )

void ALStream_obj::tick(){
            	HX_STACKFRAME(&_hx_pos_b73c3b8a9b75c967_190_tick)
HXLINE( 192)		this->instance->tick();
HXLINE( 194)		if ((4114 != linc::openal::getSourcei(this->alsource,4112))) {
HXLINE( 195)			return;
            		}
HXLINE( 198)		bool still_streaming = true;
HXLINE( 202)		int processed_buffers = linc::openal::getSourcei(this->alsource,4118);
HXLINE( 204)		{
HXLINE( 204)			 ::snow::modules::openal::Audio _this = this->module;
HXDLIN( 204)			int _err = alGetError();
HXDLIN( 204)			if ((_err != 0)) {
HXLINE( 204)				::String _s = (((((HX_("",00,00,00,00) + _err) + HX_(" / ",31,71,18,00)) + (HX_("query processed buffers ",37,cd,d7,ba) + processed_buffers)) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err));
HXDLIN( 204)				::haxe::Log_obj::trace(_s,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 204)				HX_STACK_DO_THROW(_s);
            			}
            		}
HXLINE( 207)		if ((processed_buffers > this->source->stream_buffer_count)) {
HXLINE( 207)			processed_buffers = this->source->stream_buffer_count;
            		}
HXLINE( 208)		while((processed_buffers > 0)){
HXLINE( 210)			int _buffer = linc::openal::sourceUnqueueBuffer(this->alsource);
HXLINE( 212)			{
HXLINE( 212)				int _hx_int = _buffer;
HXDLIN( 212)				Float reason;
HXDLIN( 212)				if ((_hx_int < 0)) {
HXLINE( 212)					reason = (((Float)4294967296.0) + _hx_int);
            				}
            				else {
HXLINE( 212)					reason = (_hx_int + ((Float)0.0));
            				}
HXDLIN( 212)				::String reason1 = (HX_("sourceUnqueueBuffer ",a3,77,ef,93) + ::Std_obj::string(reason));
HXDLIN( 212)				{
HXLINE( 212)					 ::snow::modules::openal::Audio _this1 = this->module;
HXDLIN( 212)					int _err1 = alGetError();
HXDLIN( 212)					if ((_err1 != 0)) {
HXLINE( 212)						::String _s1 = (((((HX_("",00,00,00,00) + _err1) + HX_(" / ",31,71,18,00)) + reason1) + HX_(": failed with ",5d,20,68,1b)) + ::openal::ALError_obj::desc(_err1));
HXDLIN( 212)						::haxe::Log_obj::trace(_s1,hx::SourceInfo(HX_("snow/modules/openal/Audio.hx",4e,6f,2b,04),441,HX_("snow.modules.openal.Audio",0f,19,56,ac),HX_("err",65,07,4d,00)));
HXDLIN( 212)						HX_STACK_DO_THROW(_s1);
            					}
            				}
            			}
HXLINE( 214)			int _buffer_size = linc::openal::getBufferi(_buffer,8196);
HXLINE( 216)			 ::snow::modules::openal::ALStream _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 216)			Float _hx_tmp1 = _hx_tmp->current_time;
HXDLIN( 216)			_hx_tmp->current_time = (_hx_tmp1 + this->source->bytes_to_seconds(_buffer_size));
HXLINE( 223)			::Array< int > _data_state = this->fill_buffer(_buffer);
HXLINE( 224)			int _data_amount = _data_state->__get(0);
HXLINE( 225)			bool _data_ended = (_data_state->__get(1) == 1);
HXLINE( 227)			bool skip_queue;
HXDLIN( 227)			if (!(this->looping)) {
HXLINE( 227)				skip_queue = _data_ended;
            			}
            			else {
HXLINE( 227)				skip_queue = false;
            			}
HXLINE( 230)			Float time_is_at_end = this->position_of();
HXDLIN( 230)			bool time_is_at_end1 = (time_is_at_end >= this->duration);
HXLINE( 232)			bool _hx_tmp2;
HXDLIN( 232)			if (time_is_at_end1) {
HXLINE( 232)				_hx_tmp2 = this->looping;
            			}
            			else {
HXLINE( 232)				_hx_tmp2 = false;
            			}
HXDLIN( 232)			if (_hx_tmp2) {
HXLINE( 233)				this->current_time = ( (Float)(0) );
HXLINE( 234)				this->module->app->audio->emit_Int(0,this->instance->handle);
            			}
HXLINE( 244)			if (_data_ended) {
HXLINE( 246)				if (this->looping) {
HXLINE( 250)					this->instance->data_seek(0);
HXLINE( 255)					if ((_data_amount == 0)) {
HXLINE( 257)						this->fill_buffer(_buffer);
            					}
            				}
            				else {
HXLINE( 262)					this->buffers_left--;
HXLINE( 264)					if ((this->buffers_left < 0)) {
HXLINE( 265)						still_streaming = false;
            					}
            					else {
HXLINE( 267)						skip_queue = false;
            					}
            				}
            			}
HXLINE( 274)			if (!(skip_queue)) {
HXLINE( 275)				linc::openal::sourceQueueBuffer(this->alsource,_buffer);
            			}
HXLINE( 279)			processed_buffers = (processed_buffers - 1);
            		}
HXLINE( 283)		if (!(still_streaming)) {
HXLINE( 284)			alSourceStop(this->alsource);
            		}
            	}



hx::ObjectPtr< ALStream_obj > ALStream_obj::__new( ::snow::modules::openal::Audio _module, ::snow::systems::audio::AudioSource _source, ::snow::systems::audio::AudioInstance _instance) {
	hx::ObjectPtr< ALStream_obj > __this = new ALStream_obj();
	__this->__construct(_module,_source,_instance);
	return __this;
}

hx::ObjectPtr< ALStream_obj > ALStream_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::modules::openal::Audio _module, ::snow::systems::audio::AudioSource _source, ::snow::systems::audio::AudioInstance _instance) {
	ALStream_obj *__this = (ALStream_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ALStream_obj), true, "snow.modules.openal.ALStream"));
	*(void **)__this = ALStream_obj::_hx_vtable;
	__this->__construct(_module,_source,_instance);
	return __this;
}

ALStream_obj::ALStream_obj()
{
}

void ALStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ALStream);
	HX_MARK_MEMBER_NAME(buffers,"buffers");
	HX_MARK_MEMBER_NAME(buffer_data,"buffer_data");
	HX_MARK_MEMBER_NAME(buffers_left,"buffers_left");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(data_get_result,"data_get_result");
	 ::snow::modules::openal::ALSound_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ALStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffers,"buffers");
	HX_VISIT_MEMBER_NAME(buffer_data,"buffer_data");
	HX_VISIT_MEMBER_NAME(buffers_left,"buffers_left");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(data_get_result,"data_get_result");
	 ::snow::modules::openal::ALSound_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ALStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"tick") ) { return hx::Val( tick_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { return hx::Val( buffers ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"init_queue") ) { return hx::Val( init_queue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_data") ) { return hx::Val( buffer_data ); }
		if (HX_FIELD_EQ(inName,"position_of") ) { return hx::Val( position_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush_queue") ) { return hx::Val( flush_queue_dyn() ); }
		if (HX_FIELD_EQ(inName,"fill_buffer") ) { return hx::Val( fill_buffer_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { return hx::Val( buffers_left ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_get_result") ) { return hx::Val( data_get_result ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ALStream_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"buffers") ) { buffers=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buffer_data") ) { buffer_data=inValue.Cast<  ::snow::api::buffers::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"buffers_left") ) { buffers_left=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data_get_result") ) { data_get_result=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ALStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffers",73,a3,90,b1));
	outFields->push(HX_("buffer_data",09,95,92,ff));
	outFields->push(HX_("buffers_left",93,1f,0c,c6));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("data_get_result",db,0b,4e,46));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo ALStream_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ALStream_obj,buffers),HX_("buffers",73,a3,90,b1)},
	{hx::fsObject /*::snow::api::buffers::ArrayBufferView*/ ,(int)offsetof(ALStream_obj,buffer_data),HX_("buffer_data",09,95,92,ff)},
	{hx::fsInt,(int)offsetof(ALStream_obj,buffers_left),HX_("buffers_left",93,1f,0c,c6)},
	{hx::fsFloat,(int)offsetof(ALStream_obj,duration),HX_("duration",54,0f,8e,14)},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(ALStream_obj,data_get_result),HX_("data_get_result",db,0b,4e,46)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ALStream_obj_sStaticStorageInfo = 0;
#endif

static ::String ALStream_obj_sMemberFields[] = {
	HX_("buffers",73,a3,90,b1),
	HX_("buffer_data",09,95,92,ff),
	HX_("buffers_left",93,1f,0c,c6),
	HX_("duration",54,0f,8e,14),
	HX_("init",10,3b,bb,45),
	HX_("destroy",fa,2c,86,24),
	HX_("position_of",2d,e6,66,ff),
	HX_("position",a9,a0,fa,ca),
	HX_("init_queue",e2,bb,82,29),
	HX_("flush_queue",96,a2,91,d0),
	HX_("data_get_result",db,0b,4e,46),
	HX_("fill_buffer",7c,26,56,95),
	HX_("tick",5d,c3,fc,4c),
	::String(null()) };

hx::Class ALStream_obj::__mClass;

void ALStream_obj::__register()
{
	ALStream_obj _hx_dummy;
	ALStream_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.modules.openal.ALStream",12,91,59,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ALStream_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ALStream_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALStream_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALStream_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace modules
} // end namespace openal
