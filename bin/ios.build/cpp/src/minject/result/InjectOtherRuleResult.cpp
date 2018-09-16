// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_minject_InjectionConfig
#include <minject/InjectionConfig.h>
#endif
#ifndef INCLUDED_minject_Injector
#include <minject/Injector.h>
#endif
#ifndef INCLUDED_minject_result_InjectOtherRuleResult
#include <minject/result/InjectOtherRuleResult.h>
#endif
#ifndef INCLUDED_minject_result_InjectionResult
#include <minject/result/InjectionResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29b02e2ac101a173_33_new,"minject.result.InjectOtherRuleResult","new",0xc6844209,"minject.result.InjectOtherRuleResult.new","minject/result/InjectOtherRuleResult.hx",33,0xcd7f63a7)
HX_LOCAL_STACK_FRAME(_hx_pos_29b02e2ac101a173_40_getResponse,"minject.result.InjectOtherRuleResult","getResponse",0x0ee833e0,"minject.result.InjectOtherRuleResult.getResponse","minject/result/InjectOtherRuleResult.hx",40,0xcd7f63a7)
HX_LOCAL_STACK_FRAME(_hx_pos_29b02e2ac101a173_45_toString,"minject.result.InjectOtherRuleResult","toString",0xea54ba63,"minject.result.InjectOtherRuleResult.toString","minject/result/InjectOtherRuleResult.hx",45,0xcd7f63a7)
namespace minject{
namespace result{

void InjectOtherRuleResult_obj::__construct( ::minject::InjectionConfig rule){
            	HX_STACKFRAME(&_hx_pos_29b02e2ac101a173_33_new)
HXLINE(  34)		super::__construct();
HXLINE(  35)		this->rule = rule;
            	}

Dynamic InjectOtherRuleResult_obj::__CreateEmpty() { return new InjectOtherRuleResult_obj; }

void *InjectOtherRuleResult_obj::_hx_vtable = 0;

Dynamic InjectOtherRuleResult_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InjectOtherRuleResult_obj > _hx_result = new InjectOtherRuleResult_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InjectOtherRuleResult_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4d38c1e1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4d38c1e1;
	} else {
		return inClassId==(int)0x70932e79;
	}
}

 ::Dynamic InjectOtherRuleResult_obj::getResponse( ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_29b02e2ac101a173_40_getResponse)
HXDLIN(  40)		return this->rule->getResponse(injector);
            	}


::String InjectOtherRuleResult_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_29b02e2ac101a173_45_toString)
HXDLIN(  45)		return this->rule->toString();
            	}



hx::ObjectPtr< InjectOtherRuleResult_obj > InjectOtherRuleResult_obj::__new( ::minject::InjectionConfig rule) {
	hx::ObjectPtr< InjectOtherRuleResult_obj > __this = new InjectOtherRuleResult_obj();
	__this->__construct(rule);
	return __this;
}

hx::ObjectPtr< InjectOtherRuleResult_obj > InjectOtherRuleResult_obj::__alloc(hx::Ctx *_hx_ctx, ::minject::InjectionConfig rule) {
	InjectOtherRuleResult_obj *__this = (InjectOtherRuleResult_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InjectOtherRuleResult_obj), true, "minject.result.InjectOtherRuleResult"));
	*(void **)__this = InjectOtherRuleResult_obj::_hx_vtable;
	__this->__construct(rule);
	return __this;
}

InjectOtherRuleResult_obj::InjectOtherRuleResult_obj()
{
}

void InjectOtherRuleResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InjectOtherRuleResult);
	HX_MARK_MEMBER_NAME(rule,"rule");
	HX_MARK_END_CLASS();
}

void InjectOtherRuleResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(rule,"rule");
}

hx::Val InjectOtherRuleResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rule") ) { return hx::Val( rule ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getResponse") ) { return hx::Val( getResponse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InjectOtherRuleResult_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rule") ) { rule=inValue.Cast<  ::minject::InjectionConfig >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InjectOtherRuleResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("rule",fc,78,b3,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InjectOtherRuleResult_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::minject::InjectionConfig*/ ,(int)offsetof(InjectOtherRuleResult_obj,rule),HX_("rule",fc,78,b3,4b)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InjectOtherRuleResult_obj_sStaticStorageInfo = 0;
#endif

static ::String InjectOtherRuleResult_obj_sMemberFields[] = {
	HX_("rule",fc,78,b3,4b),
	HX_("getResponse",37,71,00,c8),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class InjectOtherRuleResult_obj::__mClass;

void InjectOtherRuleResult_obj::__register()
{
	InjectOtherRuleResult_obj _hx_dummy;
	InjectOtherRuleResult_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("minject.result.InjectOtherRuleResult",97,89,ce,d1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InjectOtherRuleResult_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InjectOtherRuleResult_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InjectOtherRuleResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InjectOtherRuleResult_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace minject
} // end namespace result
