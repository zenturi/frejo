// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_minject_InjectionConfig
#include <minject/InjectionConfig.h>
#endif
#ifndef INCLUDED_minject_Injector
#include <minject/Injector.h>
#endif
#ifndef INCLUDED_minject_point_InjectionPoint
#include <minject/point/InjectionPoint.h>
#endif
#ifndef INCLUDED_minject_point_MethodInjectionPoint
#include <minject/point/MethodInjectionPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a2ec4df322032f1_33_new,"minject.point.MethodInjectionPoint","new",0x5571955a,"minject.point.MethodInjectionPoint.new","minject/point/MethodInjectionPoint.hx",33,0x7766f4d4)
HX_LOCAL_STACK_FRAME(_hx_pos_9a2ec4df322032f1_45_applyInjection,"minject.point.MethodInjectionPoint","applyInjection",0xe9a7f9cf,"minject.point.MethodInjectionPoint.applyInjection","minject/point/MethodInjectionPoint.hx",45,0x7766f4d4)
HX_LOCAL_STACK_FRAME(_hx_pos_9a2ec4df322032f1_51_gatherArgs,"minject.point.MethodInjectionPoint","gatherArgs",0xff30733e,"minject.point.MethodInjectionPoint.gatherArgs","minject/point/MethodInjectionPoint.hx",51,0x7766f4d4)
namespace minject{
namespace point{

void MethodInjectionPoint_obj::__construct(::String name,::Array< ::Dynamic> args){
            	HX_STACKFRAME(&_hx_pos_9a2ec4df322032f1_33_new)
HXLINE(  34)		this->name = name;
HXLINE(  35)		this->args = args;
            	}

Dynamic MethodInjectionPoint_obj::__CreateEmpty() { return new MethodInjectionPoint_obj; }

void *MethodInjectionPoint_obj::_hx_vtable = 0;

Dynamic MethodInjectionPoint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MethodInjectionPoint_obj > _hx_result = new MethodInjectionPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MethodInjectionPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ee876ac;
}

static ::minject::point::InjectionPoint_obj _hx_minject_point_MethodInjectionPoint__hx_minject_point_InjectionPoint= {
	(  ::Dynamic (hx::Object::*)( ::Dynamic, ::minject::Injector))&::minject::point::MethodInjectionPoint_obj::applyInjection,
};

void *MethodInjectionPoint_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x7a83626b: return &_hx_minject_point_MethodInjectionPoint__hx_minject_point_InjectionPoint;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::Dynamic MethodInjectionPoint_obj::applyInjection( ::Dynamic target, ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_9a2ec4df322032f1_45_applyInjection)
HXLINE(  46)		 ::Dynamic _hx_tmp = ::Reflect_obj::field(target,this->name);
HXDLIN(  46)		::Reflect_obj::callMethod(target,_hx_tmp,this->gatherArgs(target,injector));
HXLINE(  47)		return target;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MethodInjectionPoint_obj,applyInjection,return )

::cpp::VirtualArray MethodInjectionPoint_obj::gatherArgs( ::Dynamic target, ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_9a2ec4df322032f1_51_gatherArgs)
HXLINE(  52)		::cpp::VirtualArray values = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  54)		{
HXLINE(  54)			int _g = 0;
HXDLIN(  54)			::Array< ::Dynamic> _g1 = this->args;
HXDLIN(  54)			while((_g < _g1->length)){
HXLINE(  54)				 ::Dynamic arg = _g1->__get(_g);
HXDLIN(  54)				_g = (_g + 1);
HXLINE(  56)				::String name;
HXDLIN(  56)				if (hx::IsNull( arg->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic) )) {
HXLINE(  56)					name = HX_("",00,00,00,00);
            				}
            				else {
HXLINE(  56)					name = ( (::String)(arg->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
            				}
HXLINE(  57)				hx::Class config = ::Type_obj::resolveClass(( (::String)(arg->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic)) ));
HXDLIN(  57)				 ::minject::InjectionConfig config1 = injector->getMapping(config,( (::String)(arg->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) ));
HXLINE(  58)				 ::Dynamic injection = config1->getResponse(injector);
HXLINE(  69)				values->push(injection);
            			}
            		}
HXLINE(  72)		return values;
            	}


HX_DEFINE_DYNAMIC_FUNC2(MethodInjectionPoint_obj,gatherArgs,return )


hx::ObjectPtr< MethodInjectionPoint_obj > MethodInjectionPoint_obj::__new(::String name,::Array< ::Dynamic> args) {
	hx::ObjectPtr< MethodInjectionPoint_obj > __this = new MethodInjectionPoint_obj();
	__this->__construct(name,args);
	return __this;
}

hx::ObjectPtr< MethodInjectionPoint_obj > MethodInjectionPoint_obj::__alloc(hx::Ctx *_hx_ctx,::String name,::Array< ::Dynamic> args) {
	MethodInjectionPoint_obj *__this = (MethodInjectionPoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MethodInjectionPoint_obj), true, "minject.point.MethodInjectionPoint"));
	*(void **)__this = MethodInjectionPoint_obj::_hx_vtable;
	__this->__construct(name,args);
	return __this;
}

MethodInjectionPoint_obj::MethodInjectionPoint_obj()
{
}

void MethodInjectionPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodInjectionPoint);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(args,"args");
	HX_MARK_END_CLASS();
}

void MethodInjectionPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(args,"args");
}

hx::Val MethodInjectionPoint_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"args") ) { return hx::Val( args ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gatherArgs") ) { return hx::Val( gatherArgs_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"applyInjection") ) { return hx::Val( applyInjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MethodInjectionPoint_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"args") ) { args=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodInjectionPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("args",5d,8d,74,40));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo MethodInjectionPoint_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MethodInjectionPoint_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(MethodInjectionPoint_obj,args),HX_("args",5d,8d,74,40)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MethodInjectionPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String MethodInjectionPoint_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("args",5d,8d,74,40),
	HX_("applyInjection",89,30,c6,ee),
	HX_("gatherArgs",f8,44,0a,4c),
	::String(null()) };

hx::Class MethodInjectionPoint_obj::__mClass;

void MethodInjectionPoint_obj::__register()
{
	MethodInjectionPoint_obj _hx_dummy;
	MethodInjectionPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("minject.point.MethodInjectionPoint",68,a0,b9,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MethodInjectionPoint_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MethodInjectionPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MethodInjectionPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MethodInjectionPoint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace minject
} // end namespace point