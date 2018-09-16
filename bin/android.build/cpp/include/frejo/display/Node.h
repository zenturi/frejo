// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_display_Node
#define INCLUDED_frejo_display_Node

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_41ceae67ff73b9ad
#define INCLUDED_41ceae67ff73b9ad
#include "linc_yoga.h"
#endif
HX_DECLARE_CLASS2(frejo,app,Application)
HX_DECLARE_CLASS2(frejo,core,VG)
HX_DECLARE_CLASS2(frejo,display,Node)
HX_DECLARE_CLASS1(msignal,Signal)
HX_DECLARE_CLASS1(msignal,Signal2)
HX_DECLARE_CLASS1(snow,App)

namespace frejo{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Node_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Node_obj OBJ_;
		Node_obj();

	public:
		enum { _hx_ClassId = 0x1719c906 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="frejo.display.Node")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"frejo.display.Node"); }
		static hx::ObjectPtr< Node_obj > __new();
		static hx::ObjectPtr< Node_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Node_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Node",22,36,e3,33); }

		 ::frejo::core::VG vg;
		 YGNodeRef flexNode;
		 YGConfigRef flexConfig;
		 ::frejo::app::Application app;
		 ::Dynamic bgColor;
		 YGStyle style;
		 YGLayout layout;
		Float width;
		Float height;
		 ::Dynamic position;
		::Array< ::Dynamic> children;
		 ::frejo::display::Node parent;
		::String name;
		 ::msignal::Signal2 signal;
		::String ADDED;
		::String REMOVED;
		::String STYLE_CHANGED;
		void dispatch(::String event, ::frejo::display::Node node);
		::Dynamic dispatch_dyn();

		void init();
		::Dynamic init_dyn();

		 ::Dynamic set_position( ::Dynamic p);
		::Dynamic set_position_dyn();

		 ::Dynamic get_position();
		::Dynamic get_position_dyn();

		Float set_width(Float w);
		::Dynamic set_width_dyn();

		Float get_width();
		::Dynamic get_width_dyn();

		Float set_height(Float h);
		::Dynamic set_height_dyn();

		Float get_height();
		::Dynamic get_height_dyn();

		 YGStyle set_style( YGStyle style);
		::Dynamic set_style_dyn();

		 YGStyle get_style();
		::Dynamic get_style_dyn();

		 YGLayout getLayout();
		::Dynamic getLayout_dyn();

		void addChild( ::frejo::display::Node child);
		::Dynamic addChild_dyn();

		void addChildAt( ::frejo::display::Node child,int index);
		::Dynamic addChildAt_dyn();

		void removeChild( ::frejo::display::Node child);
		::Dynamic removeChild_dyn();

		void initStyle();
		::Dynamic initStyle_dyn();

		void computeLayout();
		::Dynamic computeLayout_dyn();

		void draw();
		::Dynamic draw_dyn();

		void update(Float dt);
		::Dynamic update_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace frejo
} // end namespace display

#endif /* INCLUDED_frejo_display_Node */ 