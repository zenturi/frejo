// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLProgram_Impl_
#include <opengl/_WebGL/GLProgram_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1018__new,"opengl._WebGL.GLProgram_Impl_","_new",0xfe1c7d05,"opengl._WebGL.GLProgram_Impl_._new","opengl/WebGL.hx",1018,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1019_toInt,"opengl._WebGL.GLProgram_Impl_","toInt",0x72cf0610,"opengl._WebGL.GLProgram_Impl_.toInt","opengl/WebGL.hx",1019,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1020_fromInt,"opengl._WebGL.GLProgram_Impl_","fromInt",0xd67ed481,"opengl._WebGL.GLProgram_Impl_.fromInt","opengl/WebGL.hx",1020,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1021_toDynamic,"opengl._WebGL.GLProgram_Impl_","toDynamic",0x863e3d20,"opengl._WebGL.GLProgram_Impl_.toDynamic","opengl/WebGL.hx",1021,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1022_fromDynamic,"opengl._WebGL.GLProgram_Impl_","fromDynamic",0x89349811,"opengl._WebGL.GLProgram_Impl_.fromDynamic","opengl/WebGL.hx",1022,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_da6f14f6ab22bfc8_1023_toString,"opengl._WebGL.GLProgram_Impl_","toString",0x6d62da50,"opengl._WebGL.GLProgram_Impl_.toString","opengl/WebGL.hx",1023,0x584405a5)
namespace opengl{
namespace _WebGL{

void GLProgram_Impl__obj::__construct() { }

Dynamic GLProgram_Impl__obj::__CreateEmpty() { return new GLProgram_Impl__obj; }

void *GLProgram_Impl__obj::_hx_vtable = 0;

Dynamic GLProgram_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLProgram_Impl__obj > _hx_result = new GLProgram_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLProgram_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7edb6cbe;
}

 ::opengl::GLObject GLProgram_Impl__obj::_new(int _id){
            	HX_GC_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1018__new)
HXDLIN(1018)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,_id);
HXDLIN(1018)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,_new,return )

int GLProgram_Impl__obj::toInt( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1019_toInt)
HXDLIN(1019)		if (hx::IsNull( this1 )) {
HXDLIN(1019)			return 0;
            		}
            		else {
HXDLIN(1019)			return this1->id;
            		}
HXDLIN(1019)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,toInt,return )

 ::opengl::GLObject GLProgram_Impl__obj::fromInt(int _id){
            	HX_GC_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1020_fromInt)
HXDLIN(1020)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,_id);
HXDLIN(1020)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,fromInt,return )

 ::Dynamic GLProgram_Impl__obj::toDynamic( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1021_toDynamic)
HXDLIN(1021)		if (hx::IsNull( this1 )) {
HXDLIN(1021)			return 0;
            		}
            		else {
HXDLIN(1021)			return this1->id;
            		}
HXDLIN(1021)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,toDynamic,return )

 ::opengl::GLObject GLProgram_Impl__obj::fromDynamic( ::Dynamic _id){
            	HX_GC_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1022_fromDynamic)
HXDLIN(1022)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,( (int)(_id) ));
HXDLIN(1022)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,fromDynamic,return )

::String GLProgram_Impl__obj::toString( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_da6f14f6ab22bfc8_1023_toString)
HXDLIN(1023)		int _hx_tmp;
HXDLIN(1023)		if (hx::IsNull( this1 )) {
HXDLIN(1023)			_hx_tmp = 0;
            		}
            		else {
HXDLIN(1023)			_hx_tmp = this1->id;
            		}
HXDLIN(1023)		return ((HX_("GLProgram(",69,10,2c,54) + _hx_tmp) + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,toString,return )


GLProgram_Impl__obj::GLProgram_Impl__obj()
{
}

bool GLProgram_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fromDynamic") ) { outValue = fromDynamic_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *GLProgram_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLProgram_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class GLProgram_Impl__obj::__mClass;

static ::String GLProgram_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toInt",34,be,11,14),
	HX_("fromInt",a5,dd,fa,57),
	HX_("toDynamic",44,d7,a9,65),
	HX_("fromDynamic",35,03,56,ce),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void GLProgram_Impl__obj::__register()
{
	GLProgram_Impl__obj _hx_dummy;
	GLProgram_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("opengl._WebGL.GLProgram_Impl_",4a,1b,98,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLProgram_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLProgram_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLProgram_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace opengl
} // end namespace _WebGL
