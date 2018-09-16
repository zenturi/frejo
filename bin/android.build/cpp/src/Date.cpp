// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_27_new,"Date","new",0x9aa26240,"Date.new","/usr/local/lib/haxe/std/cpp/_std/Date.hx",27,0xd1a513ee)
HX_LOCAL_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_31_getTime,"Date","getTime",0x0cac7da3,"Date.getTime","/usr/local/lib/haxe/std/cpp/_std/Date.hx",31,0xd1a513ee)
HX_LOCAL_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_51_now,"Date","now",0x9aa26af6,"Date.now","/usr/local/lib/haxe/std/cpp/_std/Date.hx",51,0xd1a513ee)
HX_LOCAL_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_54_new1,"Date","new1",0xb37395f1,"Date.new1","/usr/local/lib/haxe/std/cpp/_std/Date.hx",54,0xd1a513ee)
HX_LOCAL_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_57_fromTime,"Date","fromTime",0x44fd3cb7,"Date.fromTime","/usr/local/lib/haxe/std/cpp/_std/Date.hx",57,0xd1a513ee)
HX_LOCAL_STACK_FRAME(_hx_pos_8e4589df03e4f3cc_64_fromString,"Date","fromString",0x5ead97fb,"Date.fromString","/usr/local/lib/haxe/std/cpp/_std/Date.hx",64,0xd1a513ee)

void Date_obj::__construct(int year,int month,int day,int hour,int min,int sec){
            	HX_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_27_new)
HXDLIN(  27)		this->mSeconds =  ::__hxcpp_new_date(year,month,day,hour,min,sec);
            	}

Dynamic Date_obj::__CreateEmpty() { return new Date_obj; }

void *Date_obj::_hx_vtable = 0;

Dynamic Date_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Date_obj > _hx_result = new Date_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Date_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d3c824e;
}

Float Date_obj::getTime(){
            	HX_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_31_getTime)
HXDLIN(  31)		return (this->mSeconds * ((Float)1000.0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Date_obj,getTime,return )

 ::Date Date_obj::now(){
            	HX_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_51_now)
HXDLIN(  51)		return ::Date_obj::fromTime(( ::__hxcpp_date_now() * ((Float)1000.0)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Date_obj,now,return )

 ::Date Date_obj::new1( ::Dynamic t){
            	HX_GC_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_54_new1)
HXDLIN(  54)		return  ::Date_obj::__alloc( HX_CTX ,2005,1,1,0,0,0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,new1,return )

 ::Date Date_obj::fromTime(Float t){
            	HX_GC_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_57_fromTime)
HXLINE(  58)		 ::Date result =  ::Date_obj::__alloc( HX_CTX ,0,0,0,0,0,0);
HXLINE(  59)		result->mSeconds = (t * ((Float)0.001));
HXLINE(  60)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromTime,return )

 ::Date Date_obj::fromString(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_8e4589df03e4f3cc_64_fromString)
HXDLIN(  64)		int _g = s.length;
HXDLIN(  64)		switch((int)(_g)){
            			case (int)8: {
HXLINE(  66)				::Array< ::String > k = s.split(HX_(":",3a,00,00,00));
HXLINE(  67)				 ::Dynamic d = ::Std_obj::parseInt(k->__get(0));
HXDLIN(  67)				 ::Dynamic d1 = ::Std_obj::parseInt(k->__get(1));
HXDLIN(  67)				 ::Date d2 =  ::Date_obj::__alloc( HX_CTX ,0,0,0,( (int)(d) ),( (int)(d1) ),( (int)(::Std_obj::parseInt(k->__get(2))) ));
HXLINE(  68)				return d2;
            			}
            			break;
            			case (int)10: {
HXLINE(  70)				::Array< ::String > k1 = s.split(HX_("-",2d,00,00,00));
HXLINE(  71)				 ::Dynamic _hx_tmp = ::Std_obj::parseInt(k1->__get(0));
HXDLIN(  71)				int _hx_tmp1 = (::Std_obj::parseInt(k1->__get(1)) - 1);
HXDLIN(  71)				return  ::Date_obj::__alloc( HX_CTX ,( (int)(_hx_tmp) ),_hx_tmp1,( (int)(::Std_obj::parseInt(k1->__get(2))) ),0,0,0);
            			}
            			break;
            			case (int)19: {
HXLINE(  73)				::Array< ::String > k2 = s.split(HX_(" ",20,00,00,00));
HXLINE(  74)				::Array< ::String > y = k2->__get(0).split(HX_("-",2d,00,00,00));
HXLINE(  75)				::Array< ::String > t = k2->__get(1).split(HX_(":",3a,00,00,00));
HXLINE(  76)				 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(y->__get(0));
HXDLIN(  76)				int _hx_tmp3 = (::Std_obj::parseInt(y->__get(1)) - 1);
HXDLIN(  76)				 ::Dynamic _hx_tmp4 = ::Std_obj::parseInt(y->__get(2));
HXLINE(  77)				 ::Dynamic _hx_tmp5 = ::Std_obj::parseInt(t->__get(0));
HXDLIN(  77)				 ::Dynamic _hx_tmp6 = ::Std_obj::parseInt(t->__get(1));
HXLINE(  76)				return  ::Date_obj::__alloc( HX_CTX ,( (int)(_hx_tmp2) ),_hx_tmp3,( (int)(_hx_tmp4) ),( (int)(_hx_tmp5) ),( (int)(_hx_tmp6) ),( (int)(::Std_obj::parseInt(t->__get(2))) ));
            			}
            			break;
            			default:{
HXLINE(  79)				HX_STACK_DO_THROW((HX_("Invalid date format : ",a6,de,58,13) + s));
            			}
            		}
HXLINE(  64)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Date_obj,fromString,return )


Date_obj::Date_obj()
{
}

hx::Val Date_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getTime") ) { return hx::Val( getTime_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { return hx::Val( mSeconds ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Date_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"now") ) { outValue = now_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"new1") ) { outValue = new1_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromTime") ) { outValue = fromTime_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

hx::Val Date_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mSeconds") ) { mSeconds=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Date_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("mSeconds",92,75,59,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Date_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Date_obj,mSeconds),HX_("mSeconds",92,75,59,82)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Date_obj_sStaticStorageInfo = 0;
#endif

static ::String Date_obj_sMemberFields[] = {
	HX_("mSeconds",92,75,59,82),
	HX_("getTime",c3,7b,7f,1f),
	::String(null()) };

hx::Class Date_obj::__mClass;

static ::String Date_obj_sStaticFields[] = {
	HX_("now",16,d9,53,00),
	HX_("new1",d1,83,02,49),
	HX_("fromTime",97,9a,c8,aa),
	HX_("fromString",db,2d,74,54),
	::String(null())
};

void Date_obj::__register()
{
	Date_obj _hx_dummy;
	Date_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Date",4e,82,3c,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Date_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Date_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Date_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Date_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Date_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Date_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

