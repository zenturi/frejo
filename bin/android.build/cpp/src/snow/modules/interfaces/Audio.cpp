// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_Audio
#include <snow/modules/interfaces/Audio.h>
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

HX_LOCAL_STACK_FRAME(_hx_pos_a333ffde27b080fd_12_boot,"snow.modules.interfaces.Audio","boot",0x0daea1ac,"snow.modules.interfaces.Audio.boot","snow/modules/interfaces/Audio.hx",12,0x2bb62f49)
namespace snow{
namespace modules{
namespace interfaces{


static ::String Audio_obj_sMemberFields[] = {
	HX_("app",a1,fc,49,00),
	HX_("active",c6,41,46,16),
	HX_("onevent",9b,f6,d4,78),
	HX_("shutdown",96,fc,0b,6b),
	HX_("data_from_load",c6,1a,6f,90),
	HX_("data_from_bytes",cb,13,71,15),
	HX_("play",f4,2d,5a,4a),
	HX_("loop",64,a6,b7,47),
	HX_("pause",f6,d6,57,bd),
	HX_("unpause",fd,cd,e8,b9),
	HX_("stop",02,f0,5b,4c),
	HX_("volume",da,29,53,5f),
	HX_("pan",5d,51,55,00),
	HX_("pitch",c0,bb,a0,c2),
	HX_("position",a9,a0,fa,ca),
	HX_("volume_of",9c,71,ad,60),
	HX_("pan_of",f9,9d,d4,ea),
	HX_("pitch_of",76,93,77,bb),
	HX_("position_of",2d,e6,66,ff),
	HX_("state_of",c5,61,87,5f),
	HX_("loop_of",52,e7,75,20),
	HX_("instance_of",c1,82,21,29),
	HX_("suspend",7c,2f,4f,f7),
	HX_("resume",ad,69,84,08),
	::String(null()) };

hx::Class Audio_obj::__mClass;

void Audio_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.modules.interfaces.Audio",34,35,4a,18);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = hx::Class_obj::dupFunctions(Audio_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x955683b8 >;
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Audio_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a333ffde27b080fd_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("interface",b9,31,da,39),null()))));
            	}
}

} // end namespace snow
} // end namespace modules
} // end namespace interfaces
