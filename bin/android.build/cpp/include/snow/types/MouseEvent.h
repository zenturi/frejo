// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_types_MouseEvent
#define INCLUDED_snow_types_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a2208c019f7c5149_686_new)
HX_DECLARE_CLASS2(snow,types,MouseEvent)

namespace snow{
namespace types{


class HXCPP_CLASS_ATTRIBUTES MouseEvent_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();

	public:
		enum { _hx_ClassId = 0x1a250147 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.types.MouseEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.types.MouseEvent"); }

		hx::ObjectPtr< MouseEvent_obj > __new() {
			hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MouseEvent_obj > __alloc(hx::Ctx *_hx_ctx) {
			MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), false, "snow.types.MouseEvent"));
			*(void **)__this = MouseEvent_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a2208c019f7c5149_686_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MouseEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseEvent",d5,bf,42,8a); }

		int type;
		int x;
		int y;
		int x_rel;
		int y_rel;
		int button;
		Float wheel_x;
		Float wheel_y;
		void set(int _type,int _x,int _y,int _x_rel,int _y_rel,int _button,Float _wheel_x,Float _wheel_y);
		::Dynamic set_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace snow
} // end namespace types

#endif /* INCLUDED_snow_types_MouseEvent */ 