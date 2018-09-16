// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_sdl__SDL_SDL_helper
#define INCLUDED_sdl__SDL_SDL_helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(sdl,_SDL,SDL_helper)

namespace sdl{
namespace _SDL{


class HXCPP_CLASS_ATTRIBUTES SDL_helper_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SDL_helper_obj OBJ_;
		SDL_helper_obj();

	public:
		enum { _hx_ClassId = 0x7eb56f85 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="sdl._SDL.SDL_helper")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"sdl._SDL.SDL_helper"); }

		hx::ObjectPtr< SDL_helper_obj > __new() {
			hx::ObjectPtr< SDL_helper_obj > __this = new SDL_helper_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SDL_helper_obj > __alloc(hx::Ctx *_hx_ctx) {
			SDL_helper_obj *__this = (SDL_helper_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SDL_helper_obj), false, "sdl._SDL.SDL_helper"));
			*(void **)__this = SDL_helper_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SDL_helper_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SDL_helper",d2,31,04,ce); }

		static void __boot();
		static void quit();
		static ::Dynamic quit_dyn();

		static  ::haxe::ds::IntMap timers;
		static bool timer_callback_set;
		static int add_timer(int interval, ::Dynamic callback, ::Dynamic userdata);
		static ::Dynamic add_timer_dyn();

		static bool remove_timer(int _timerid);
		static ::Dynamic remove_timer_dyn();

		static int timer_callback(int _timerid);
		static ::Dynamic timer_callback_dyn();

		static  ::haxe::ds::IntMap event_watchs;
		static bool watch_callback_set;
		static ::Array< int > removed_watchs;
		static int add_event_watch( ::Dynamic func, ::Dynamic userdata);
		static ::Dynamic add_event_watch_dyn();

		static void del_event_watch( ::Dynamic func);
		static ::Dynamic del_event_watch_dyn();

		static int event_watch_callback(int _watchid, cpp::Reference<SDL_Event> _event);
		static ::Dynamic event_watch_callback_dyn();

};

} // end namespace sdl
} // end namespace _SDL

#endif /* INCLUDED_sdl__SDL_SDL_helper */ 
