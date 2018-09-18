// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_TypeTree
#include <haxe/rtti/TypeTree.h>
#endif
namespace haxe{
namespace rtti{

::haxe::rtti::TypeTree TypeTree_obj::TAbstractdecl( ::Dynamic a)
{
	return hx::CreateEnum< TypeTree_obj >(HX_("TAbstractdecl",c0,a4,0f,bd),4,1)->_hx_init(0,a);
}

::haxe::rtti::TypeTree TypeTree_obj::TClassdecl( ::Dynamic c)
{
	return hx::CreateEnum< TypeTree_obj >(HX_("TClassdecl",ae,79,0d,a5),1,1)->_hx_init(0,c);
}

::haxe::rtti::TypeTree TypeTree_obj::TEnumdecl( ::Dynamic e)
{
	return hx::CreateEnum< TypeTree_obj >(HX_("TEnumdecl",5f,00,dd,4c),2,1)->_hx_init(0,e);
}

::haxe::rtti::TypeTree TypeTree_obj::TPackage(::String name,::String full,::Array< ::Dynamic> subs)
{
	return hx::CreateEnum< TypeTree_obj >(HX_("TPackage",92,c5,8f,d3),0,3)->_hx_init(0,name)->_hx_init(1,full)->_hx_init(2,subs);
}

::haxe::rtti::TypeTree TypeTree_obj::TTypedecl( ::Dynamic t)
{
	return hx::CreateEnum< TypeTree_obj >(HX_("TTypedecl",98,58,40,d5),3,1)->_hx_init(0,t);
}

bool TypeTree_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TAbstractdecl",c0,a4,0f,bd)) { outValue = TypeTree_obj::TAbstractdecl_dyn(); return true; }
	if (inName==HX_("TClassdecl",ae,79,0d,a5)) { outValue = TypeTree_obj::TClassdecl_dyn(); return true; }
	if (inName==HX_("TEnumdecl",5f,00,dd,4c)) { outValue = TypeTree_obj::TEnumdecl_dyn(); return true; }
	if (inName==HX_("TPackage",92,c5,8f,d3)) { outValue = TypeTree_obj::TPackage_dyn(); return true; }
	if (inName==HX_("TTypedecl",98,58,40,d5)) { outValue = TypeTree_obj::TTypedecl_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TypeTree_obj)

int TypeTree_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TAbstractdecl",c0,a4,0f,bd)) return 4;
	if (inName==HX_("TClassdecl",ae,79,0d,a5)) return 1;
	if (inName==HX_("TEnumdecl",5f,00,dd,4c)) return 2;
	if (inName==HX_("TPackage",92,c5,8f,d3)) return 0;
	if (inName==HX_("TTypedecl",98,58,40,d5)) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TAbstractdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TClassdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TEnumdecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TypeTree_obj,TPackage,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeTree_obj,TTypedecl,return)

int TypeTree_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TAbstractdecl",c0,a4,0f,bd)) return 1;
	if (inName==HX_("TClassdecl",ae,79,0d,a5)) return 1;
	if (inName==HX_("TEnumdecl",5f,00,dd,4c)) return 1;
	if (inName==HX_("TPackage",92,c5,8f,d3)) return 3;
	if (inName==HX_("TTypedecl",98,58,40,d5)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val TypeTree_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TAbstractdecl",c0,a4,0f,bd)) return TAbstractdecl_dyn();
	if (inName==HX_("TClassdecl",ae,79,0d,a5)) return TClassdecl_dyn();
	if (inName==HX_("TEnumdecl",5f,00,dd,4c)) return TEnumdecl_dyn();
	if (inName==HX_("TPackage",92,c5,8f,d3)) return TPackage_dyn();
	if (inName==HX_("TTypedecl",98,58,40,d5)) return TTypedecl_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String TypeTree_obj_sStaticFields[] = {
	HX_("TPackage",92,c5,8f,d3),
	HX_("TClassdecl",ae,79,0d,a5),
	HX_("TEnumdecl",5f,00,dd,4c),
	HX_("TTypedecl",98,58,40,d5),
	HX_("TAbstractdecl",c0,a4,0f,bd),
	::String(null())
};

hx::Class TypeTree_obj::__mClass;

Dynamic __Create_TypeTree_obj() { return new TypeTree_obj; }

void TypeTree_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("haxe.rtti.TypeTree",a7,70,a4,d0), hx::TCanCast< TypeTree_obj >,TypeTree_obj_sStaticFields,0,
	&__Create_TypeTree_obj, &__Create,
	&super::__SGetClass(), &CreateTypeTree_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TypeTree_obj::__GetStatic;
}

void TypeTree_obj::__boot()
{
}


} // end namespace haxe
} // end namespace rtti