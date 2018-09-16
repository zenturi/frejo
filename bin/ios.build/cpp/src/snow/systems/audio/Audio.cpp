// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_api_Emitter
#include <snow/api/Emitter.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
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
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif
#ifndef INCLUDED_snow_types_WindowEvent
#include <snow/types/WindowEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0557283f10c5bfac_12_new,"snow.systems.audio.Audio","new",0xbc61065b,"snow.systems.audio.Audio.new","snow/systems/audio/Audio.hx",12,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_52_emit_snow_systems_audio_AudioSource,"snow.systems.audio.Audio","emit_snow_systems_audio_AudioSource",0xc4368418,"snow.systems.audio.Audio.emit_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",52,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_45_off_snow_systems_audio_AudioSource,"snow.systems.audio.Audio","off_snow_systems_audio_AudioSource",0x1cf74ae6,"snow.systems.audio.Audio.off_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",45,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_45_off_Int,"snow.systems.audio.Audio","off_Int",0xd2f6d03a,"snow.systems.audio.Audio.off_Int","snow/systems/audio/Audio.hx",45,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_52_emit_Int,"snow.systems.audio.Audio","emit_Int",0x050809c8,"snow.systems.audio.Audio.emit_Int","snow/systems/audio/Audio.hx",52,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_38_on_snow_systems_audio_AudioSource,"snow.systems.audio.Audio","on_snow_systems_audio_AudioSource",0xd6846a0c,"snow.systems.audio.Audio.on_snow_systems_audio_AudioSource","snow/systems/audio/Audio.hx",38,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_38_on_Int,"snow.systems.audio.Audio","on_Int",0x2efe5f54,"snow.systems.audio.Audio.on_Int","snow/systems/audio/Audio.hx",38,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_56_play,"snow.systems.audio.Audio","play",0x19dc3399,"snow.systems.audio.Audio.play","snow/systems/audio/Audio.hx",56,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_69_loop,"snow.systems.audio.Audio","loop",0x1739ac09,"snow.systems.audio.Audio.loop","snow/systems/audio/Audio.hx",69,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_81_pause,"snow.systems.audio.Audio","pause",0x7f9ac1b1,"snow.systems.audio.Audio.pause","snow/systems/audio/Audio.hx",81,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_86_unpause,"snow.systems.audio.Audio","unpause",0xc2c81d78,"snow.systems.audio.Audio.unpause","snow/systems/audio/Audio.hx",86,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_91_stop,"snow.systems.audio.Audio","stop",0x1bddf5a7,"snow.systems.audio.Audio.stop","snow/systems/audio/Audio.hx",91,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_96_volume,"snow.systems.audio.Audio","volume",0x979da2bf,"snow.systems.audio.Audio.volume","snow/systems/audio/Audio.hx",96,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_101_pan,"snow.systems.audio.Audio","pan",0xbc628758,"snow.systems.audio.Audio.pan","snow/systems/audio/Audio.hx",101,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_106_pitch,"snow.systems.audio.Audio","pitch",0x84e3a67b,"snow.systems.audio.Audio.pitch","snow/systems/audio/Audio.hx",106,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_111_position,"snow.systems.audio.Audio","position",0x8580dcce,"snow.systems.audio.Audio.position","snow/systems/audio/Audio.hx",111,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_117_state_of,"snow.systems.audio.Audio","state_of",0x1a0d9dea,"snow.systems.audio.Audio.state_of","snow/systems/audio/Audio.hx",117,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_120_loop_of,"snow.systems.audio.Audio","loop_of",0x295536cd,"snow.systems.audio.Audio.loop_of","snow/systems/audio/Audio.hx",120,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_125_instance_of,"snow.systems.audio.Audio","instance_of",0x079dabbc,"snow.systems.audio.Audio.instance_of","snow/systems/audio/Audio.hx",125,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_130_volume_of,"snow.systems.audio.Audio","volume_of",0xdb9bd5d7,"snow.systems.audio.Audio.volume_of","snow/systems/audio/Audio.hx",130,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_135_pan_of,"snow.systems.audio.Audio","pan_of",0x231f16de,"snow.systems.audio.Audio.pan_of","snow/systems/audio/Audio.hx",135,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_140_pitch_of,"snow.systems.audio.Audio","pitch_of",0x75fdcf9b,"snow.systems.audio.Audio.pitch_of","snow/systems/audio/Audio.hx",140,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_145_position_of,"snow.systems.audio.Audio","position_of",0xdde30f28,"snow.systems.audio.Audio.position_of","snow/systems/audio/Audio.hx",145,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_150_suspend,"snow.systems.audio.Audio","suspend",0x002e7ef7,"snow.systems.audio.Audio.suspend","snow/systems/audio/Audio.hx",150,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_162_resume,"snow.systems.audio.Audio","resume",0x40cee292,"snow.systems.audio.Audio.resume","snow/systems/audio/Audio.hx",162,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_177_onevent,"snow.systems.audio.Audio","onevent",0x81b44616,"snow.systems.audio.Audio.onevent","snow/systems/audio/Audio.hx",177,0x2dd90ef8)
HX_LOCAL_STACK_FRAME(_hx_pos_0557283f10c5bfac_198_shutdown,"snow.systems.audio.Audio","shutdown",0x259238bb,"snow.systems.audio.Audio.shutdown","snow/systems/audio/Audio.hx",198,0x2dd90ef8)
namespace snow{
namespace systems{
namespace audio{

void Audio_obj::__construct( ::snow::Snow _app){
            	HX_GC_STACKFRAME(&_hx_pos_0557283f10c5bfac_12_new)
HXLINE(  19)		this->active = false;
HXLINE(  26)		this->app = _app;
HXLINE(  27)		this->module =  ::snow::modules::openal::Audio_obj::__alloc( HX_CTX ,this->app);
HXLINE(  28)		this->emitter =  ::snow::api::Emitter_obj::__alloc( HX_CTX );
HXLINE(  29)		this->active = this->module->active;
            	}

Dynamic Audio_obj::__CreateEmpty() { return new Audio_obj; }

void *Audio_obj::_hx_vtable = 0;

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Audio_obj > _hx_result = new Audio_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Audio_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68e3c799;
}

void Audio_obj::emit_snow_systems_audio_AudioSource(int _event, ::snow::systems::audio::AudioSource _data){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_52_emit_snow_systems_audio_AudioSource)
HXDLIN(  52)		this->emitter->emit(_event,_data,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),52,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("emit",53,9e,15,43)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,emit_snow_systems_audio_AudioSource,(void))

bool Audio_obj::off_snow_systems_audio_AudioSource(int _event, ::Dynamic _handler){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_45_off_snow_systems_audio_AudioSource)
HXDLIN(  45)		return this->emitter->off(_event,_handler,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),45,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("off",6f,93,54,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,off_snow_systems_audio_AudioSource,return )

bool Audio_obj::off_Int(int _event, ::Dynamic _handler){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_45_off_Int)
HXDLIN(  45)		return this->emitter->off(_event,_handler,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),45,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("off",6f,93,54,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,off_Int,return )

void Audio_obj::emit_Int(int _event, ::Dynamic _data){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_52_emit_Int)
HXDLIN(  52)		this->emitter->emit(_event,_data,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),52,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("emit",53,9e,15,43)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,emit_Int,(void))

void Audio_obj::on_snow_systems_audio_AudioSource(int _event, ::Dynamic _handler){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_38_on_snow_systems_audio_AudioSource)
HXDLIN(  38)		this->emitter->on(_event,_handler,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),38,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("on",1f,61,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on_snow_systems_audio_AudioSource,(void))

void Audio_obj::on_Int(int _event, ::Dynamic _handler){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_38_on_Int)
HXDLIN(  38)		this->emitter->on(_event,_handler,hx::SourceInfo(HX_("snow/systems/audio/Audio.hx",f8,0e,d9,2d),38,HX_("snow.systems.audio.Audio",e9,3c,7a,25),HX_("on",1f,61,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,on_Int,(void))

 ::Dynamic Audio_obj::play( ::snow::systems::audio::AudioSource _source, ::Dynamic __o__volume, ::Dynamic __o__paused){
 ::Dynamic _volume = __o__volume.Default(((Float)1.0));
 ::Dynamic _paused = __o__paused.Default(false);
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_56_play)
HXLINE(  58)		if (hx::IsNull( _source )) {
HXLINE(  58)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("_source != null",85,90,7f,9d) + ((HX_(" ( ",18,6b,18,00) + HX_("audio source must not be null",fb,40,e6,df)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  60)		if (!(this->active)) {
HXLINE(  61)			return -1;
            		}
HXLINE(  64)		return this->module->play(_source,( (Float)(_volume) ),( (bool)(_paused) ));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )

 ::Dynamic Audio_obj::loop( ::snow::systems::audio::AudioSource _source, ::Dynamic __o__volume, ::Dynamic __o__paused){
 ::Dynamic _volume = __o__volume.Default(((Float)1.0));
 ::Dynamic _paused = __o__paused.Default(false);
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_69_loop)
HXLINE(  71)		if (hx::IsNull( _source )) {
HXLINE(  71)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("_source != null",85,90,7f,9d) + ((HX_(" ( ",18,6b,18,00) + HX_("audio source must not be null",fb,40,e6,df)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE(  73)		if (!(this->active)) {
HXLINE(  74)			return -1;
            		}
HXLINE(  77)		return this->module->loop(_source,( (Float)(_volume) ),( (bool)(_paused) ));
            	}


HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,loop,return )

void Audio_obj::pause( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_81_pause)
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		if (!(!(this->active))) {
HXLINE(  82)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  82)			return;
            		}
HXLINE(  83)		this->module->pause(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pause,(void))

void Audio_obj::unpause( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_86_unpause)
HXLINE(  87)		bool _hx_tmp;
HXDLIN(  87)		if (!(!(this->active))) {
HXLINE(  87)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE(  87)			_hx_tmp = true;
            		}
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  87)			return;
            		}
HXLINE(  88)		this->module->unpause(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,unpause,(void))

void Audio_obj::stop( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_91_stop)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		if (!(!(this->active))) {
HXLINE(  92)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  92)			return;
            		}
HXLINE(  93)		this->module->stop(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,stop,(void))

void Audio_obj::volume( ::Dynamic _handle,Float _volume){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_96_volume)
HXLINE(  97)		bool _hx_tmp;
HXDLIN(  97)		if (!(!(this->active))) {
HXLINE(  97)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE(  97)			_hx_tmp = true;
            		}
HXDLIN(  97)		if (_hx_tmp) {
HXLINE(  97)			return;
            		}
HXLINE(  98)		this->module->volume(_handle,_volume);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,volume,(void))

void Audio_obj::pan( ::Dynamic _handle,Float _pan){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_101_pan)
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if (!(!(this->active))) {
HXLINE( 102)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE( 102)			_hx_tmp = true;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 102)			return;
            		}
HXLINE( 103)		this->module->pan(_handle,_pan);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pan,(void))

void Audio_obj::pitch( ::Dynamic _handle,Float _pitch){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_106_pitch)
HXLINE( 107)		bool _hx_tmp;
HXDLIN( 107)		if (!(!(this->active))) {
HXLINE( 107)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE( 107)			_hx_tmp = true;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 107)			return;
            		}
HXLINE( 108)		this->module->pitch(_handle,_pitch);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,pitch,(void))

void Audio_obj::position( ::Dynamic _handle,Float _position){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_111_position)
HXLINE( 112)		bool _hx_tmp;
HXDLIN( 112)		if (!(!(this->active))) {
HXLINE( 112)			_hx_tmp = hx::IsNull( _handle );
            		}
            		else {
HXLINE( 112)			_hx_tmp = true;
            		}
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			return;
            		}
HXLINE( 113)		this->module->position(_handle,_position);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Audio_obj,position,(void))

int Audio_obj::state_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_117_state_of)
HXDLIN( 117)		return this->module->state_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,state_of,return )

bool Audio_obj::loop_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_120_loop_of)
HXLINE( 121)		if (!(this->active)) {
HXLINE( 121)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 122)		return this->module->loop_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,loop_of,return )

 ::snow::systems::audio::AudioInstance Audio_obj::instance_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_125_instance_of)
HXLINE( 126)		if (!(this->active)) {
HXLINE( 126)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 127)		return this->module->instance_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,instance_of,return )

Float Audio_obj::volume_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_130_volume_of)
HXLINE( 131)		if (!(this->active)) {
HXLINE( 131)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 132)		return this->module->volume_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,volume_of,return )

Float Audio_obj::pan_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_135_pan_of)
HXLINE( 136)		if (!(this->active)) {
HXLINE( 136)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 137)		return this->module->pan_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pan_of,return )

Float Audio_obj::pitch_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_140_pitch_of)
HXLINE( 141)		if (!(this->active)) {
HXLINE( 141)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 142)		return this->module->pitch_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,pitch_of,return )

Float Audio_obj::position_of( ::Dynamic _handle){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_145_position_of)
HXLINE( 146)		if (!(this->active)) {
HXLINE( 146)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::assertion((HX_("active",c6,41,46,16) + ((HX_(" ( ",18,6b,18,00) + HX_("audio is suspended, queries are invalid",6e,f8,40,c9)) + HX_(" )",09,1c,00,00)))));
            		}
HXLINE( 147)		return this->module->position_of(_handle);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,position_of,return )

void Audio_obj::suspend(){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_150_suspend)
HXLINE( 152)		if (!(this->active)) {
HXLINE( 153)			return;
            		}
HXLINE( 157)		this->active = false;
HXLINE( 158)		this->module->suspend();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,suspend,(void))

void Audio_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_162_resume)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (!(this->active)) {
HXLINE( 164)			_hx_tmp = !(this->module->active);
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 165)			return;
            		}
HXLINE( 169)		this->active = true;
HXLINE( 170)		this->module->resume();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,resume,(void))

void Audio_obj::onevent( ::snow::types::SystemEvent _event){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_177_onevent)
HXLINE( 179)		this->module->onevent(_event);
HXLINE( 181)		if ((_event->type == 4)) {
HXLINE( 182)			this->suspend();
            		}
            		else {
HXLINE( 183)			if ((_event->type == 5)) {
HXLINE( 184)				this->resume();
            			}
            			else {
HXLINE( 185)				if ((_event->type == 8)) {
HXLINE( 186)					int _g = _event->window->type;
HXDLIN( 186)					switch((int)(_g)){
            						case (int)7: {
HXLINE( 188)							this->suspend();
            						}
            						break;
            						case (int)9: {
HXLINE( 190)							this->resume();
            						}
            						break;
            						default:{
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Audio_obj,onevent,(void))

void Audio_obj::shutdown(){
            	HX_STACKFRAME(&_hx_pos_0557283f10c5bfac_198_shutdown)
HXLINE( 200)		this->active = false;
HXLINE( 201)		this->module->shutdown();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Audio_obj,shutdown,(void))


hx::ObjectPtr< Audio_obj > Audio_obj::__new( ::snow::Snow _app) {
	hx::ObjectPtr< Audio_obj > __this = new Audio_obj();
	__this->__construct(_app);
	return __this;
}

hx::ObjectPtr< Audio_obj > Audio_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::Snow _app) {
	Audio_obj *__this = (Audio_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Audio_obj), true, "snow.systems.audio.Audio"));
	*(void **)__this = Audio_obj::_hx_vtable;
	__this->__construct(_app);
	return __this;
}

Audio_obj::Audio_obj()
{
}

void Audio_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Audio);
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_MEMBER_NAME(module,"module");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(emitter,"emitter");
	HX_MARK_END_CLASS();
}

void Audio_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(app,"app");
	HX_VISIT_MEMBER_NAME(module,"module");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(emitter,"emitter");
}

hx::Val Audio_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return hx::Val( app ); }
		if (HX_FIELD_EQ(inName,"pan") ) { return hx::Val( pan_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		if (HX_FIELD_EQ(inName,"pitch") ) { return hx::Val( pitch_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"on_Int") ) { return hx::Val( on_Int_dyn() ); }
		if (HX_FIELD_EQ(inName,"module") ) { return hx::Val( module ); }
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"volume") ) { return hx::Val( volume_dyn() ); }
		if (HX_FIELD_EQ(inName,"pan_of") ) { return hx::Val( pan_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"off_Int") ) { return hx::Val( off_Int_dyn() ); }
		if (HX_FIELD_EQ(inName,"emitter") ) { return hx::Val( emitter ); }
		if (HX_FIELD_EQ(inName,"unpause") ) { return hx::Val( unpause_dyn() ); }
		if (HX_FIELD_EQ(inName,"loop_of") ) { return hx::Val( loop_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"suspend") ) { return hx::Val( suspend_dyn() ); }
		if (HX_FIELD_EQ(inName,"onevent") ) { return hx::Val( onevent_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emit_Int") ) { return hx::Val( emit_Int_dyn() ); }
		if (HX_FIELD_EQ(inName,"position") ) { return hx::Val( position_dyn() ); }
		if (HX_FIELD_EQ(inName,"state_of") ) { return hx::Val( state_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"pitch_of") ) { return hx::Val( pitch_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"shutdown") ) { return hx::Val( shutdown_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"volume_of") ) { return hx::Val( volume_of_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"instance_of") ) { return hx::Val( instance_of_dyn() ); }
		if (HX_FIELD_EQ(inName,"position_of") ) { return hx::Val( position_of_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"on_snow_systems_audio_AudioSource") ) { return hx::Val( on_snow_systems_audio_AudioSource_dyn() ); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"off_snow_systems_audio_AudioSource") ) { return hx::Val( off_snow_systems_audio_AudioSource_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"emit_snow_systems_audio_AudioSource") ) { return hx::Val( emit_snow_systems_audio_AudioSource_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Audio_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast<  ::snow::Snow >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"module") ) { module=inValue.Cast<  ::snow::modules::openal::Audio >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"emitter") ) { emitter=inValue.Cast<  ::snow::api::Emitter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Audio_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("app",a1,fc,49,00));
	outFields->push(HX_("module",ac,34,d3,c0));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("emitter",6e,35,f6,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Audio_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::Snow*/ ,(int)offsetof(Audio_obj,app),HX_("app",a1,fc,49,00)},
	{hx::fsObject /*::snow::modules::openal::Audio*/ ,(int)offsetof(Audio_obj,module),HX_("module",ac,34,d3,c0)},
	{hx::fsBool,(int)offsetof(Audio_obj,active),HX_("active",c6,41,46,16)},
	{hx::fsObject /*::snow::api::Emitter*/ ,(int)offsetof(Audio_obj,emitter),HX_("emitter",6e,35,f6,be)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Audio_obj_sStaticStorageInfo = 0;
#endif

static ::String Audio_obj_sMemberFields[] = {
	HX_("emit_snow_systems_audio_AudioSource",1d,82,6b,56),
	HX_("off_snow_systems_audio_AudioSource",81,b4,3e,49),
	HX_("off_Int",bf,80,17,ca),
	HX_("emit_Int",a3,cd,81,4a),
	HX_("on_snow_systems_audio_AudioSource",d1,6c,df,99),
	HX_("on_Int",6f,e6,b3,f6),
	HX_("app",a1,fc,49,00),
	HX_("module",ac,34,d3,c0),
	HX_("active",c6,41,46,16),
	HX_("emitter",6e,35,f6,be),
	HX_("play",f4,2d,5a,4a),
	HX_("loop",64,a6,b7,47),
	HX_("pause",f6,d6,57,bd),
	HX_("unpause",fd,cd,e8,b9),
	HX_("stop",02,f0,5b,4c),
	HX_("volume",da,29,53,5f),
	HX_("pan",5d,51,55,00),
	HX_("pitch",c0,bb,a0,c2),
	HX_("position",a9,a0,fa,ca),
	HX_("state_of",c5,61,87,5f),
	HX_("loop_of",52,e7,75,20),
	HX_("instance_of",c1,82,21,29),
	HX_("volume_of",9c,71,ad,60),
	HX_("pan_of",f9,9d,d4,ea),
	HX_("pitch_of",76,93,77,bb),
	HX_("position_of",2d,e6,66,ff),
	HX_("suspend",7c,2f,4f,f7),
	HX_("resume",ad,69,84,08),
	HX_("onevent",9b,f6,d4,78),
	HX_("shutdown",96,fc,0b,6b),
	::String(null()) };

hx::Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	Audio_obj _hx_dummy;
	Audio_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.systems.audio.Audio",e9,3c,7a,25);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Audio_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Audio_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Audio_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace systems
} // end namespace audio