// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_api_buffers__ArrayBuffer_ArrayBuffer_Impl_
#include <snow/api/buffers/_ArrayBuffer/ArrayBuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_de062f9a807b3c8c_16__new,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_","_new",0x9fd11d90,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_._new","snow/api/buffers/ArrayBuffer.hx",16,0x87ad6cc2)
HX_LOCAL_STACK_FRAME(_hx_pos_de062f9a807b3c8c_22_get_byteLength,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_","get_byteLength",0x7c635f46,"snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_.get_byteLength","snow/api/buffers/ArrayBuffer.hx",22,0x87ad6cc2)
namespace snow{
namespace api{
namespace buffers{
namespace _ArrayBuffer{

void ArrayBuffer_Impl__obj::__construct() { }

Dynamic ArrayBuffer_Impl__obj::__CreateEmpty() { return new ArrayBuffer_Impl__obj; }

void *ArrayBuffer_Impl__obj::_hx_vtable = 0;

Dynamic ArrayBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayBuffer_Impl__obj > _hx_result = new ArrayBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x69b61543;
}

::Array< unsigned char > ArrayBuffer_Impl__obj::_new(int byteLength){
            	HX_STACKFRAME(&_hx_pos_de062f9a807b3c8c_16__new)
HXDLIN(  16)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXLINE(  18)		if ((byteLength > 0)) {
HXLINE(  18)			this1[(byteLength - 1)] = ( (unsigned char)(0) );
            		}
HXLINE(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,_new,return )

int ArrayBuffer_Impl__obj::get_byteLength(::Array< unsigned char > this1){
            	HX_STACKFRAME(&_hx_pos_de062f9a807b3c8c_22_get_byteLength)
HXDLIN(  22)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayBuffer_Impl__obj,get_byteLength,return )


ArrayBuffer_Impl__obj::ArrayBuffer_Impl__obj()
{
}

bool ArrayBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { outValue = get_byteLength_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *ArrayBuffer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArrayBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class ArrayBuffer_Impl__obj::__mClass;

static ::String ArrayBuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_byteLength",57,a6,01,ed),
	::String(null())
};

void ArrayBuffer_Impl__obj::__register()
{
	ArrayBuffer_Impl__obj _hx_dummy;
	ArrayBuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.api.buffers._ArrayBuffer.ArrayBuffer_Impl_",9f,46,9d,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArrayBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArrayBuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBuffer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _ArrayBuffer
