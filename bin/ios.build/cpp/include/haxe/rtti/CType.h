// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_haxe_rtti_CType
#define INCLUDED_haxe_rtti_CType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,CType)
namespace haxe{
namespace rtti{


class CType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CType_obj OBJ_;

	public:
		CType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.rtti.CType",ee,cd,79,74); }
		::String __ToString() const { return HX_("CType.",f1,0c,e2,77) + _hx_tag; }

		static ::haxe::rtti::CType CAbstract(::String name,::Array< ::Dynamic> params);
		static ::Dynamic CAbstract_dyn();
		static ::haxe::rtti::CType CAnonymous(::Array< ::Dynamic> fields);
		static ::Dynamic CAnonymous_dyn();
		static ::haxe::rtti::CType CClass(::String name,::Array< ::Dynamic> params);
		static ::Dynamic CClass_dyn();
		static ::haxe::rtti::CType CDynamic( ::haxe::rtti::CType t);
		static ::Dynamic CDynamic_dyn();
		static ::haxe::rtti::CType CEnum(::String name,::Array< ::Dynamic> params);
		static ::Dynamic CEnum_dyn();
		static ::haxe::rtti::CType CFunction(::Array< ::Dynamic> args, ::haxe::rtti::CType ret);
		static ::Dynamic CFunction_dyn();
		static ::haxe::rtti::CType CTypedef(::String name,::Array< ::Dynamic> params);
		static ::Dynamic CTypedef_dyn();
		static ::haxe::rtti::CType CUnknown;
		static inline ::haxe::rtti::CType CUnknown_dyn() { return CUnknown; }
};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_CType */ 