// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_types__Types_AudioState_Impl_
#define INCLUDED_snow_types__Types_AudioState_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AudioState_Impl_)

namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES AudioState_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioState_Impl__obj OBJ_;
		AudioState_Impl__obj();

	public:
		enum { _hx_ClassId = 0x405e9d0b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.AudioState_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.types._Types.AudioState_Impl_"); }

		hx::ObjectPtr< AudioState_Impl__obj > __new() {
			hx::ObjectPtr< AudioState_Impl__obj > __this = new AudioState_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AudioState_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			AudioState_Impl__obj *__this = (AudioState_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioState_Impl__obj), false, "snow.types._Types.AudioState_Impl_"));
			*(void **)__this = AudioState_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioState_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioState_Impl_",5b,b4,93,4a); }

		static void __boot();
		static int as_invalid;
		static int as_paused;
		static int as_playing;
		static int as_stopped;
		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AudioState_Impl_ */ 
