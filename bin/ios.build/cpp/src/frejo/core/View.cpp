// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_0067bf2d025ab5b6
#define INCLUDED_0067bf2d025ab5b6
#include "YGEnums.h"
#endif
#ifndef INCLUDED_41ceae67ff73b9ad
#define INCLUDED_41ceae67ff73b9ad
#include "linc_yoga.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_frejo_app_Application
#include <frejo/app/Application.h>
#endif
#ifndef INCLUDED_frejo_core_View
#include <frejo/core/View.h>
#endif
#ifndef INCLUDED_frejo_display_Node
#include <frejo/display/Node.h>
#endif
#ifndef INCLUDED_frejo_display__Color_Color_Impl_
#include <frejo/display/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_msignal_Signal
#include <msignal/Signal.h>
#endif
#ifndef INCLUDED_msignal_Signal2
#include <msignal/Signal2.h>
#endif
#ifndef INCLUDED_msignal_Slot
#include <msignal/Slot.h>
#endif
#ifndef INCLUDED_msignal_Slot2
#include <msignal/Slot2.h>
#endif
#ifndef INCLUDED_snow_App
#include <snow/App.h>
#endif
#ifndef INCLUDED_snow_types_SystemEvent
#include <snow/types/SystemEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_20_new,"frejo.core.View","new",0xda0db516,"frejo.core.View.new","frejo/core/View.hx",20,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_83_init,"frejo.core.View","init",0xeea9759a,"frejo.core.View.init","frejo/core/View.hx",83,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_130_dispatch,"frejo.core.View","dispatch",0x89431644,"frejo.core.View.dispatch","frejo/core/View.hx",130,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_137_system_event,"frejo.core.View","system_event",0xcf07d814,"frejo.core.View.system_event","frejo/core/View.hx",137,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_141_toString,"frejo.core.View","toString",0xa34e1836,"frejo.core.View.toString","frejo/core/View.hx",141,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_144_set_index,"frejo.core.View","set_index",0xfd8e34ab,"frejo.core.View.set_index","frejo/core/View.hx",144,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_158_addChild,"frejo.core.View","addChild",0x29f61745,"frejo.core.View.addChild","frejo/core/View.hx",158,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_176_removeChild,"frejo.core.View","removeChild",0xf7cc116e,"frejo.core.View.removeChild","frejo/core/View.hx",176,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_188_update,"frejo.core.View","update",0xf3def713,"frejo.core.View.update","frejo/core/View.hx",188,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_195_draw,"frejo.core.View","draw",0xeb5e668e,"frejo.core.View.draw","frejo/core/View.hx",195,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_202_destroy,"frejo.core.View","destroy",0xf5efa4b0,"frejo.core.View.destroy","frejo/core/View.hx",202,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_29_boot,"frejo.core.View","boot",0xea09bebc,"frejo.core.View.boot","frejo/core/View.hx",29,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_57_boot,"frejo.core.View","boot",0xea09bebc,"frejo.core.View.boot","frejo/core/View.hx",57,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_62_boot,"frejo.core.View","boot",0xea09bebc,"frejo.core.View.boot","frejo/core/View.hx",62,0x3428eeba)
HX_LOCAL_STACK_FRAME(_hx_pos_2bf6e5ed7dffa95e_67_boot,"frejo.core.View","boot",0xea09bebc,"frejo.core.View.boot","frejo/core/View.hx",67,0x3428eeba)
namespace frejo{
namespace core{

void View_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_20_new)
HXLINE(  76)		this->app = null();
HXLINE(  74)		this->node = null();
            	}

Dynamic View_obj::__CreateEmpty() { return new View_obj; }

void *View_obj::_hx_vtable = 0;

Dynamic View_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< View_obj > _hx_result = new View_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool View_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cdc9642;
}

void View_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_83_init)
HXLINE(  85)		this->id = (HX_("view",65,32,4f,4e) + ::frejo::core::View_obj::idCounter++);
HXLINE(  88)		::Reflect_obj::setField(hx::ObjectPtr<OBJ_>(this),HX_("index",12,9b,14,be),-1);
HXLINE(  90)		this->className = ( (::String)(::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this))).split(HX_(".",2e,00,00,00))->pop()) );
HXLINE(  92)		this->children = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  94)		this->signal =  ::msignal::Signal2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  96)		 YGConfigRef flexConfig = ::linc::yoga::NewConfig();
HXLINE(  97)		 YGNodeRef flexParentNode = ::YGNodeNewWithConfig(flexConfig);
HXLINE(  98)		 YGNodeRef flexNode = ::YGNodeNewWithConfig(flexConfig);
HXLINE( 100)		::YGNodeStyleSetFlexDirection(flexParentNode,YGFlexDirectionRow);
HXLINE( 101)		::YGNodeStyleSetWidth(flexParentNode,( (Float)(this->app->window_width) ));
HXLINE( 102)		::YGNodeStyleSetHeight(flexParentNode,( (Float)(this->app->window_height) ));
HXLINE( 103)		::YGNodeStyleSetJustifyContent(flexParentNode,YGJustifyFlexStart);
HXLINE( 104)		::YGNodeStyleSetAlignItems(flexParentNode,YGAlignStretch);
HXLINE( 110)		::YGNodeStyleSetWidth(flexNode,( (Float)(this->app->window_width) ));
HXLINE( 111)		::YGNodeStyleSetHeight(flexNode,( (Float)(this->app->window_height) ));
HXLINE( 113)		::YGNodeInsertChild(flexParentNode,flexNode,0);
HXLINE( 115)		::YGNodeCalculateLayout(flexParentNode,( (Float)(YGUndefined) ),( (Float)(YGUndefined) ),YGDirectionLTR);
HXLINE( 117)		this->node =  ::frejo::display::Node_obj::__alloc( HX_CTX );
HXLINE( 118)		this->node->flexNode = flexNode;
HXLINE( 119)		this->node->set_background(::frejo::display::_Color::Color_Impl__obj::LIGHT);
HXLINE( 121)		 ::frejo::display::Node _hx_tmp = this->node;
HXDLIN( 121)		_hx_tmp->set_width(::YGNodeLayoutGetWidth(flexNode));
HXLINE( 122)		 ::frejo::display::Node _hx_tmp1 = this->node;
HXDLIN( 122)		_hx_tmp1->set_height(::YGNodeLayoutGetHeight(flexNode));
            	}


HX_DEFINE_DYNAMIC_FUNC0(View_obj,init,(void))

void View_obj::dispatch(::String event, ::frejo::core::View view){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_130_dispatch)
HXLINE( 131)		if (hx::IsNull( view )) {
HXLINE( 132)			view = hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 133)		this->signal->dispatch(event,view);
            	}


HX_DEFINE_DYNAMIC_FUNC2(View_obj,dispatch,(void))

void View_obj::system_event( ::snow::types::SystemEvent event){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_137_system_event)
HXDLIN( 137)		::haxe::Log_obj::trace(event,hx::SourceInfo(HX_("src/frejo/core/View.hx",45,5e,fa,87),137,HX_("frejo.core.View",24,32,e4,35),HX_("system_event",8a,03,2d,20)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,system_event,(void))

::String View_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_141_toString)
HXDLIN( 141)		return ((((HX_("",00,00,00,00) + this->className) + HX_("(",28,00,00,00)) + this->id) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(View_obj,toString,return )

int View_obj::set_index(int i){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_144_set_index)
HXLINE( 145)		if ((this->index != i)) {
HXLINE( 146)			this->index = i;
            		}
HXLINE( 149)		return this->index;
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,set_index,return )

void View_obj::addChild( ::frejo::core::View view){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_158_addChild)
HXLINE( 159)		view->init();
HXLINE( 160)		view->signal->add(this->dispatch_dyn()).StaticCast<  ::msignal::Slot2 >();
HXLINE( 161)		view->parent = hx::ObjectPtr<OBJ_>(this);
HXLINE( 162)		view->set_index(this->children->length);
HXLINE( 164)		this->node->addChild(view->node);
HXLINE( 166)		this->children->push(view);
HXLINE( 167)		this->dispatch(HX_("added",c0,d4,43,1c),view);
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,addChild,(void))

void View_obj::removeChild( ::frejo::core::View child){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_176_removeChild)
HXLINE( 177)		child->destroy();
HXLINE( 178)		this->children->remove(child);
HXLINE( 179)		this->node->removeChild(child->node);
HXLINE( 180)		this->dispatch(HX_("removed",a0,1f,00,f3),child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,removeChild,(void))

void View_obj::update(Float dt){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_188_update)
HXDLIN( 188)		this->node->update(dt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,update,(void))

void View_obj::draw( ::Dynamic tick){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_195_draw)
HXDLIN( 195)		this->node->draw(tick);
            	}


HX_DEFINE_DYNAMIC_FUNC1(View_obj,draw,(void))

void View_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_202_destroy)
HXDLIN( 202)		int _g = 0;
HXDLIN( 202)		::Array< ::Dynamic> _g1 = this->children;
HXDLIN( 202)		while((_g < _g1->length)){
HXDLIN( 202)			 ::frejo::core::View child = _g1->__get(_g).StaticCast<  ::frejo::core::View >();
HXDLIN( 202)			_g = (_g + 1);
HXLINE( 203)			this->removeChild(child);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(View_obj,destroy,(void))

int View_obj::idCounter;

::String View_obj::ADDED;

::String View_obj::REMOVED;

::String View_obj::ACTIONED;


hx::ObjectPtr< View_obj > View_obj::__new() {
	hx::ObjectPtr< View_obj > __this = new View_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< View_obj > View_obj::__alloc(hx::Ctx *_hx_ctx) {
	View_obj *__this = (View_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(View_obj), true, "frejo.core.View"));
	*(void **)__this = View_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

View_obj::View_obj()
{
}

void View_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(View);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(signal,"signal");
	HX_MARK_MEMBER_NAME(node,"node");
	HX_MARK_MEMBER_NAME(app,"app");
	HX_MARK_END_CLASS();
}

void View_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(children,"children");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(signal,"signal");
	HX_VISIT_MEMBER_NAME(node,"node");
	HX_VISIT_MEMBER_NAME(app,"app");
}

hx::Val View_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { return hx::Val( app ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { return hx::Val( node ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"signal") ) { return hx::Val( signal ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return hx::Val( children ); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return hx::Val( dispatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return hx::Val( addChild_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return hx::Val( className ); }
		if (HX_FIELD_EQ(inName,"set_index") ) { return hx::Val( set_index_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return hx::Val( removeChild_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"system_event") ) { return hx::Val( system_event_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool View_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"idCounter") ) { outValue = ( idCounter ); return true; }
	}
	return false;
}

hx::Val View_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"app") ) { app=inValue.Cast<  ::frejo::app::Application >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"node") ) { node=inValue.Cast<  ::frejo::display::Node >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_index(inValue.Cast< int >()) );index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::frejo::core::View >(); return inValue; }
		if (HX_FIELD_EQ(inName,"signal") ) { signal=inValue.Cast<  ::msignal::Signal2 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool View_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"idCounter") ) { idCounter=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void View_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("children",3f,19,6a,70));
	outFields->push(HX_("className",a3,92,3d,dc));
	outFields->push(HX_("signal",68,2e,86,b4));
	outFields->push(HX_("node",02,0a,0a,49));
	outFields->push(HX_("app",a1,fc,49,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo View_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(View_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsInt,(int)offsetof(View_obj,index),HX_("index",12,9b,14,be)},
	{hx::fsObject /*::frejo::core::View*/ ,(int)offsetof(View_obj,parent),HX_("parent",2a,05,7e,ed)},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(View_obj,children),HX_("children",3f,19,6a,70)},
	{hx::fsString,(int)offsetof(View_obj,className),HX_("className",a3,92,3d,dc)},
	{hx::fsObject /*::msignal::Signal2*/ ,(int)offsetof(View_obj,signal),HX_("signal",68,2e,86,b4)},
	{hx::fsObject /*::frejo::display::Node*/ ,(int)offsetof(View_obj,node),HX_("node",02,0a,0a,49)},
	{hx::fsObject /*::frejo::app::Application*/ ,(int)offsetof(View_obj,app),HX_("app",a1,fc,49,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo View_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &View_obj::idCounter,HX_("idCounter",61,7c,63,c7)},
	{hx::fsString,(void *) &View_obj::ADDED,HX_("ADDED",a0,0c,32,9a)},
	{hx::fsString,(void *) &View_obj::REMOVED,HX_("REMOVED",80,f3,d3,72)},
	{hx::fsString,(void *) &View_obj::ACTIONED,HX_("ACTIONED",95,fd,9a,3a)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String View_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("index",12,9b,14,be),
	HX_("parent",2a,05,7e,ed),
	HX_("children",3f,19,6a,70),
	HX_("className",a3,92,3d,dc),
	HX_("signal",68,2e,86,b4),
	HX_("node",02,0a,0a,49),
	HX_("app",a1,fc,49,00),
	HX_("init",10,3b,bb,45),
	HX_("dispatch",ba,ce,63,1e),
	HX_("system_event",8a,03,2d,20),
	HX_("toString",ac,d0,6e,38),
	HX_("set_index",75,e3,0e,e5),
	HX_("addChild",bb,cf,16,bf),
	HX_("removeChild",b8,86,ed,43),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void View_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(View_obj::idCounter,"idCounter");
	HX_MARK_MEMBER_NAME(View_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(View_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(View_obj::ACTIONED,"ACTIONED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void View_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(View_obj::idCounter,"idCounter");
	HX_VISIT_MEMBER_NAME(View_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(View_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(View_obj::ACTIONED,"ACTIONED");
};

#endif

hx::Class View_obj::__mClass;

static ::String View_obj_sStaticFields[] = {
	HX_("idCounter",61,7c,63,c7),
	HX_("ADDED",a0,0c,32,9a),
	HX_("REMOVED",80,f3,d3,72),
	HX_("ACTIONED",95,fd,9a,3a),
	::String(null())
};

void View_obj::__register()
{
	View_obj _hx_dummy;
	View_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("frejo.core.View",24,32,e4,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &View_obj::__GetStatic;
	__mClass->mSetStaticField = &View_obj::__SetStatic;
	__mClass->mMarkFunc = View_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(View_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(View_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< View_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = View_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = View_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = View_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void View_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_29_boot)
HXDLIN(  29)		idCounter = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_57_boot)
HXDLIN(  57)		ADDED = HX_("added",c0,d4,43,1c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_62_boot)
HXDLIN(  62)		REMOVED = HX_("removed",a0,1f,00,f3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2bf6e5ed7dffa95e_67_boot)
HXDLIN(  67)		ACTIONED = HX_("actioned",95,6d,15,e1);
            	}
}

} // end namespace frejo
} // end namespace core
