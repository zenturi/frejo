// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_minject_Injector
#include <minject/Injector.h>
#endif
#ifndef INCLUDED_minject_result_InjectValueResult
#include <minject/result/InjectValueResult.h>
#endif
#ifndef INCLUDED_minject_result_InjectionResult
#include <minject/result/InjectionResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1974fb8ecde7443e_32_new,"minject.result.InjectValueResult","new",0xeecb16ce,"minject.result.InjectValueResult.new","minject/result/InjectValueResult.hx",32,0xd0f27e82)
HX_LOCAL_STACK_FRAME(_hx_pos_1974fb8ecde7443e_39_getResponse,"minject.result.InjectValueResult","getResponse",0x2be8d5a5,"minject.result.InjectValueResult.getResponse","minject/result/InjectValueResult.hx",39,0xd0f27e82)
HX_LOCAL_STACK_FRAME(_hx_pos_1974fb8ecde7443e_44_toString,"minject.result.InjectValueResult","toString",0x711b7b7e,"minject.result.InjectValueResult.toString","minject/result/InjectValueResult.hx",44,0xd0f27e82)
namespace minject{
namespace result{

void InjectValueResult_obj::__construct( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_1974fb8ecde7443e_32_new)
HXLINE(  33)		super::__construct();
HXLINE(  34)		this->value = value;
            	}

Dynamic InjectValueResult_obj::__CreateEmpty() { return new InjectValueResult_obj; }

void *InjectValueResult_obj::_hx_vtable = 0;

Dynamic InjectValueResult_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InjectValueResult_obj > _hx_result = new InjectValueResult_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool InjectValueResult_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02f22326) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02f22326;
	} else {
		return inClassId==(int)0x70932e79;
	}
}

 ::Dynamic InjectValueResult_obj::getResponse( ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_1974fb8ecde7443e_39_getResponse)
HXDLIN(  39)		return this->value;
            	}


::String InjectValueResult_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_1974fb8ecde7443e_44_toString)
HXDLIN(  44)		return (HX_("instance of ",1e,75,8c,aa) + ::Type_obj::getClassName(::Type_obj::getClass(this->value)));
            	}



hx::ObjectPtr< InjectValueResult_obj > InjectValueResult_obj::__new( ::Dynamic value) {
	hx::ObjectPtr< InjectValueResult_obj > __this = new InjectValueResult_obj();
	__this->__construct(value);
	return __this;
}

hx::ObjectPtr< InjectValueResult_obj > InjectValueResult_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic value) {
	InjectValueResult_obj *__this = (InjectValueResult_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InjectValueResult_obj), true, "minject.result.InjectValueResult"));
	*(void **)__this = InjectValueResult_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

InjectValueResult_obj::InjectValueResult_obj()
{
}

void InjectValueResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InjectValueResult);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void InjectValueResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val InjectValueResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getResponse") ) { return hx::Val( getResponse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InjectValueResult_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InjectValueResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InjectValueResult_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(InjectValueResult_obj,value),HX_("value",71,7f,b8,31)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InjectValueResult_obj_sStaticStorageInfo = 0;
#endif

static ::String InjectValueResult_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("getResponse",37,71,00,c8),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class InjectValueResult_obj::__mClass;

void InjectValueResult_obj::__register()
{
	InjectValueResult_obj _hx_dummy;
	InjectValueResult_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("minject.result.InjectValueResult",dc,57,70,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InjectValueResult_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InjectValueResult_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InjectValueResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InjectValueResult_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace minject
} // end namespace result
