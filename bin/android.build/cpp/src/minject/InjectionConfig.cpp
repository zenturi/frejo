// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_minject_result_InjectionResult
#include <minject/result/InjectionResult.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1810769a69ce048d_36_new,"minject.InjectionConfig","new",0xc980459b,"minject.InjectionConfig.new","minject/InjectionConfig.hx",36,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_42_getResponse,"minject.InjectionConfig","getResponse",0x8fcd1972,"minject.InjectionConfig.getResponse","minject/InjectionConfig.hx",42,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_55_hasResponse,"minject.InjectionConfig","hasResponse",0x3c903c36,"minject.InjectionConfig.hasResponse","minject/InjectionConfig.hx",55,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_60_hasOwnResponse,"minject.InjectionConfig","hasOwnResponse",0xa69df452,"minject.InjectionConfig.hasOwnResponse","minject/InjectionConfig.hx",60,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_74_setResult,"minject.InjectionConfig","setResult",0x3f10719a,"minject.InjectionConfig.setResult","minject/InjectionConfig.hx",74,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_79_setInjector,"minject.InjectionConfig","setInjector",0x172ca3f1,"minject.InjectionConfig.setInjector","minject/InjectionConfig.hx",79,0x0282ba76)
HX_LOCAL_STACK_FRAME(_hx_pos_1810769a69ce048d_83_toString,"minject.InjectionConfig","toString",0x08088591,"minject.InjectionConfig.toString","minject/InjectionConfig.hx",83,0x0282ba76)
namespace minject{

void InjectionConfig_obj::__construct(hx::Class request,::String injectionName){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_36_new)
HXLINE(  37)		this->request = request;
HXLINE(  38)		this->injectionName = injectionName;
            	}

Dynamic InjectionConfig_obj::__CreateEmpty() { return new InjectionConfig_obj; }

void *InjectionConfig_obj::_hx_vtable = 0;

Dynamic InjectionConfig_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< InjectionConfig_obj > _hx_result = new InjectionConfig_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool InjectionConfig_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6948d69b;
}

 ::Dynamic InjectionConfig_obj::getResponse( ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_42_getResponse)
HXLINE(  43)		if (hx::IsNotNull( this->injector )) {
HXLINE(  43)			injector = this->injector;
            		}
HXLINE(  45)		if (hx::IsNotNull( this->result )) {
HXLINE(  45)			return this->result->getResponse(injector);
            		}
HXLINE(  47)		 ::minject::InjectionConfig parentConfig = injector->getAncestorMapping(this->request,this->injectionName);
HXLINE(  48)		if (hx::IsNotNull( parentConfig )) {
HXLINE(  48)			return parentConfig->getResponse(injector);
            		}
HXLINE(  50)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(InjectionConfig_obj,getResponse,return )

bool InjectionConfig_obj::hasResponse( ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_55_hasResponse)
HXDLIN(  55)		return hx::IsNotNull( this->result );
            	}


HX_DEFINE_DYNAMIC_FUNC1(InjectionConfig_obj,hasResponse,return )

bool InjectionConfig_obj::hasOwnResponse(){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_60_hasOwnResponse)
HXDLIN(  60)		return hx::IsNotNull( this->result );
            	}


HX_DEFINE_DYNAMIC_FUNC0(InjectionConfig_obj,hasOwnResponse,return )

void InjectionConfig_obj::setResult( ::minject::result::InjectionResult result){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_74_setResult)
HXDLIN(  74)		this->result = result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InjectionConfig_obj,setResult,(void))

void InjectionConfig_obj::setInjector( ::minject::Injector injector){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_79_setInjector)
HXDLIN(  79)		this->injector = injector;
            	}


HX_DEFINE_DYNAMIC_FUNC1(InjectionConfig_obj,setInjector,(void))

::String InjectionConfig_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_1810769a69ce048d_83_toString)
HXLINE(  84)		::String named;
HXDLIN(  84)		bool named1;
HXDLIN(  84)		if (hx::IsNotNull( this->injectionName )) {
HXLINE(  84)			named1 = (this->injectionName != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  84)			named1 = false;
            		}
HXDLIN(  84)		if (named1) {
HXLINE(  84)			named = ((HX_(" named \"",db,0f,e1,d2) + this->injectionName) + HX_("\" and",d9,87,10,a9));
            		}
            		else {
HXLINE(  84)			named = HX_("",00,00,00,00);
            		}
HXLINE(  85)		::String _hx_tmp = (HX_("rule: [",79,6b,85,be) + ::Type_obj::getClassName(this->request));
HXDLIN(  85)		return (_hx_tmp + ((((HX_("]",5d,00,00,00) + named) + HX_(" mapped to [",e3,3d,04,60)) + ::Std_obj::string(this->result)) + HX_("]",5d,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(InjectionConfig_obj,toString,return )


hx::ObjectPtr< InjectionConfig_obj > InjectionConfig_obj::__new(hx::Class request,::String injectionName) {
	hx::ObjectPtr< InjectionConfig_obj > __this = new InjectionConfig_obj();
	__this->__construct(request,injectionName);
	return __this;
}

hx::ObjectPtr< InjectionConfig_obj > InjectionConfig_obj::__alloc(hx::Ctx *_hx_ctx,hx::Class request,::String injectionName) {
	InjectionConfig_obj *__this = (InjectionConfig_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InjectionConfig_obj), true, "minject.InjectionConfig"));
	*(void **)__this = InjectionConfig_obj::_hx_vtable;
	__this->__construct(request,injectionName);
	return __this;
}

InjectionConfig_obj::InjectionConfig_obj()
{
}

void InjectionConfig_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InjectionConfig);
	HX_MARK_MEMBER_NAME(request,"request");
	HX_MARK_MEMBER_NAME(injectionName,"injectionName");
	HX_MARK_MEMBER_NAME(injector,"injector");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

void InjectionConfig_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(request,"request");
	HX_VISIT_MEMBER_NAME(injectionName,"injectionName");
	HX_VISIT_MEMBER_NAME(injector,"injector");
	HX_VISIT_MEMBER_NAME(result,"result");
}

hx::Val InjectionConfig_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return hx::Val( request ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"injector") ) { return hx::Val( injector ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setResult") ) { return hx::Val( setResult_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getResponse") ) { return hx::Val( getResponse_dyn() ); }
		if (HX_FIELD_EQ(inName,"hasResponse") ) { return hx::Val( hasResponse_dyn() ); }
		if (HX_FIELD_EQ(inName,"setInjector") ) { return hx::Val( setInjector_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"injectionName") ) { return hx::Val( injectionName ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hasOwnResponse") ) { return hx::Val( hasOwnResponse_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val InjectionConfig_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::minject::result::InjectionResult >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { request=inValue.Cast< hx::Class >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"injector") ) { injector=inValue.Cast<  ::minject::Injector >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"injectionName") ) { injectionName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InjectionConfig_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("request",4f,df,84,44));
	outFields->push(HX_("injectionName",c2,c9,bc,8d));
	outFields->push(HX_("injector",f4,31,ff,1e));
	outFields->push(HX_("result",dd,68,84,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo InjectionConfig_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(InjectionConfig_obj,request),HX_("request",4f,df,84,44)},
	{hx::fsString,(int)offsetof(InjectionConfig_obj,injectionName),HX_("injectionName",c2,c9,bc,8d)},
	{hx::fsObject /*::minject::Injector*/ ,(int)offsetof(InjectionConfig_obj,injector),HX_("injector",f4,31,ff,1e)},
	{hx::fsObject /*::minject::result::InjectionResult*/ ,(int)offsetof(InjectionConfig_obj,result),HX_("result",dd,68,84,08)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *InjectionConfig_obj_sStaticStorageInfo = 0;
#endif

static ::String InjectionConfig_obj_sMemberFields[] = {
	HX_("request",4f,df,84,44),
	HX_("injectionName",c2,c9,bc,8d),
	HX_("injector",f4,31,ff,1e),
	HX_("result",dd,68,84,08),
	HX_("getResponse",37,71,00,c8),
	HX_("hasResponse",fb,93,c3,74),
	HX_("hasOwnResponse",ad,05,12,54),
	HX_("setResult",1f,de,2b,68),
	HX_("setInjector",b6,fb,5f,4f),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

hx::Class InjectionConfig_obj::__mClass;

void InjectionConfig_obj::__register()
{
	InjectionConfig_obj _hx_dummy;
	InjectionConfig_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("minject.InjectionConfig",29,dc,b8,ab);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(InjectionConfig_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InjectionConfig_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InjectionConfig_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InjectionConfig_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace minject
