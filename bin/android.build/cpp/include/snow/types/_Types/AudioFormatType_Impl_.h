// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_types__Types_AudioFormatType_Impl_
#define INCLUDED_snow_types__Types_AudioFormatType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,types,_Types,AudioFormatType_Impl_)

namespace snow{
namespace types{
namespace _Types{


class HXCPP_CLASS_ATTRIBUTES AudioFormatType_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioFormatType_Impl__obj OBJ_;
		AudioFormatType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x444af47b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.types._Types.AudioFormatType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.types._Types.AudioFormatType_Impl_"); }

		hx::ObjectPtr< AudioFormatType_Impl__obj > __new() {
			hx::ObjectPtr< AudioFormatType_Impl__obj > __this = new AudioFormatType_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< AudioFormatType_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			AudioFormatType_Impl__obj *__this = (AudioFormatType_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AudioFormatType_Impl__obj), false, "snow.types._Types.AudioFormatType_Impl_"));
			*(void **)__this = AudioFormatType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioFormatType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AudioFormatType_Impl_",c7,65,2d,fe); }

		static void __boot();
		static  ::Dynamic af_unknown;
		static  ::Dynamic af_custom;
		static  ::Dynamic af_ogg;
		static  ::Dynamic af_wav;
		static  ::Dynamic af_pcm;
		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types
} // end namespace _Types

#endif /* INCLUDED_snow_types__Types_AudioFormatType_Impl_ */ 
