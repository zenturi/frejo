// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_opengl_GLObject
#include <opengl/GLObject.h>
#endif
#ifndef INCLUDED_opengl__WebGL_GLFramebuffer_Impl_
#include <opengl/_WebGL/GLFramebuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1009__new,"opengl._WebGL.GLFramebuffer_Impl_","_new",0x725f7e3c,"opengl._WebGL.GLFramebuffer_Impl_._new","opengl/WebGL.hx",1009,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1010_toInt,"opengl._WebGL.GLFramebuffer_Impl_","toInt",0xb92d14f9,"opengl._WebGL.GLFramebuffer_Impl_.toInt","opengl/WebGL.hx",1010,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1011_fromInt,"opengl._WebGL.GLFramebuffer_Impl_","fromInt",0xfbad2faa,"opengl._WebGL.GLFramebuffer_Impl_.fromInt","opengl/WebGL.hx",1011,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1012_toDynamic,"opengl._WebGL.GLFramebuffer_Impl_","toDynamic",0x18187489,"opengl._WebGL.GLFramebuffer_Impl_.toDynamic","opengl/WebGL.hx",1012,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1013_fromDynamic,"opengl._WebGL.GLFramebuffer_Impl_","fromDynamic",0xef9a3bba,"opengl._WebGL.GLFramebuffer_Impl_.fromDynamic","opengl/WebGL.hx",1013,0x584405a5)
HX_LOCAL_STACK_FRAME(_hx_pos_267f2fc01699dc0f_1014_toString,"opengl._WebGL.GLFramebuffer_Impl_","toString",0xd0c44307,"opengl._WebGL.GLFramebuffer_Impl_.toString","opengl/WebGL.hx",1014,0x584405a5)
namespace opengl{
namespace _WebGL{

void GLFramebuffer_Impl__obj::__construct() { }

Dynamic GLFramebuffer_Impl__obj::__CreateEmpty() { return new GLFramebuffer_Impl__obj; }

void *GLFramebuffer_Impl__obj::_hx_vtable = 0;

Dynamic GLFramebuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFramebuffer_Impl__obj > _hx_result = new GLFramebuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFramebuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d838337;
}

 ::opengl::GLObject GLFramebuffer_Impl__obj::_new(int _id){
            	HX_GC_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1009__new)
HXDLIN(1009)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,_id);
HXDLIN(1009)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,_new,return )

int GLFramebuffer_Impl__obj::toInt( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1010_toInt)
HXDLIN(1010)		if (hx::IsNull( this1 )) {
HXDLIN(1010)			return 0;
            		}
            		else {
HXDLIN(1010)			return this1->id;
            		}
HXDLIN(1010)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,toInt,return )

 ::opengl::GLObject GLFramebuffer_Impl__obj::fromInt(int _id){
            	HX_GC_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1011_fromInt)
HXDLIN(1011)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,_id);
HXDLIN(1011)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromInt,return )

 ::Dynamic GLFramebuffer_Impl__obj::toDynamic( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1012_toDynamic)
HXDLIN(1012)		if (hx::IsNull( this1 )) {
HXDLIN(1012)			return 0;
            		}
            		else {
HXDLIN(1012)			return this1->id;
            		}
HXDLIN(1012)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,toDynamic,return )

 ::opengl::GLObject GLFramebuffer_Impl__obj::fromDynamic( ::Dynamic _id){
            	HX_GC_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1013_fromDynamic)
HXDLIN(1013)		 ::opengl::GLObject this1 =  ::opengl::GLObject_obj::__alloc( HX_CTX ,( (int)(_id) ));
HXDLIN(1013)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromDynamic,return )

::String GLFramebuffer_Impl__obj::toString( ::opengl::GLObject this1){
            	HX_STACKFRAME(&_hx_pos_267f2fc01699dc0f_1014_toString)
HXDLIN(1014)		int _hx_tmp;
HXDLIN(1014)		if (hx::IsNull( this1 )) {
HXDLIN(1014)			_hx_tmp = 0;
            		}
            		else {
HXDLIN(1014)			_hx_tmp = this1->id;
            		}
HXDLIN(1014)		return ((HX_("GLFramebuffer(",60,e8,13,00) + _hx_tmp) + HX_(")",29,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,toString,return )


GLFramebuffer_Impl__obj::GLFramebuffer_Impl__obj()
{
}

bool GLFramebuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *GLFramebuffer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLFramebuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class GLFramebuffer_Impl__obj::__mClass;

static ::String GLFramebuffer_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("toInt",34,be,11,14),
	HX_("fromInt",a5,dd,fa,57),
	HX_("toDynamic",44,d7,a9,65),
	HX_("fromDynamic",35,03,56,ce),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void GLFramebuffer_Impl__obj::__register()
{
	GLFramebuffer_Impl__obj _hx_dummy;
	GLFramebuffer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("opengl._WebGL.GLFramebuffer_Impl_",73,a5,82,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFramebuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLFramebuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLFramebuffer_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFramebuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFramebuffer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace opengl
} // end namespace _WebGL