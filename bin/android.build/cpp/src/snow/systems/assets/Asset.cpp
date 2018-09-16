// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_api_DebugError
#include <snow/api/DebugError.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Asset
#include <snow/systems/assets/Asset.h>
#endif
#ifndef INCLUDED_snow_systems_assets_Assets
#include <snow/systems/assets/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a9c8f3d2caa630bc_12_new,"snow.systems.assets.Asset","new",0x43d2796c,"snow.systems.assets.Asset.new","snow/systems/assets/Asset.hx",12,0x7a5509c3)
HX_LOCAL_STACK_FRAME(_hx_pos_a9c8f3d2caa630bc_39_destroy,"snow.systems.assets.Asset","destroy",0x9fdc4c06,"snow.systems.assets.Asset.destroy","snow/systems/assets/Asset.hx",39,0x7a5509c3)
namespace snow{
namespace systems{
namespace assets{

void Asset_obj::__construct( ::snow::systems::assets::Assets _system,::String _id,hx::Null< int >  __o__type){
int _type = __o__type.Default(0);
            	HX_STACKFRAME(&_hx_pos_a9c8f3d2caa630bc_12_new)
HXLINE(  19)		this->loaded = false;
HXLINE(  29)		if (hx::IsNull( _id )) {
HXLINE(  29)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_id was null",c4,57,88,c5)));
            		}
HXLINE(  30)		if (hx::IsNull( _system )) {
HXLINE(  30)			HX_STACK_DO_THROW(::snow::api::DebugError_obj::null_assertion(HX_("_system was null",b0,ae,ad,1a)));
            		}
HXLINE(  32)		this->_hx_system = _system;
HXLINE(  33)		this->type = _type;
HXLINE(  34)		this->id = _id;
            	}

Dynamic Asset_obj::__CreateEmpty() { return new Asset_obj; }

void *Asset_obj::_hx_vtable = 0;

Dynamic Asset_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Asset_obj > _hx_result = new Asset_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Asset_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3efde4b0;
}

void Asset_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a9c8f3d2caa630bc_39_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Asset_obj,destroy,(void))


hx::ObjectPtr< Asset_obj > Asset_obj::__new( ::snow::systems::assets::Assets _system,::String _id,hx::Null< int >  __o__type) {
	hx::ObjectPtr< Asset_obj > __this = new Asset_obj();
	__this->__construct(_system,_id,__o__type);
	return __this;
}

hx::ObjectPtr< Asset_obj > Asset_obj::__alloc(hx::Ctx *_hx_ctx, ::snow::systems::assets::Assets _system,::String _id,hx::Null< int >  __o__type) {
	Asset_obj *__this = (Asset_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Asset_obj), true, "snow.systems.assets.Asset"));
	*(void **)__this = Asset_obj::_hx_vtable;
	__this->__construct(_system,_id,__o__type);
	return __this;
}

Asset_obj::Asset_obj()
{
}

void Asset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Asset);
	HX_MARK_MEMBER_NAME(_hx_system,"system");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(loaded,"loaded");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Asset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx_system,"system");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(loaded,"loaded");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val Asset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { return hx::Val( _hx_system ); }
		if (HX_FIELD_EQ(inName,"loaded") ) { return hx::Val( loaded ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Asset_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"system") ) { _hx_system=inValue.Cast<  ::snow::systems::assets::Assets >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaded") ) { loaded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Asset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("system",ef,96,e2,f2));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("loaded",05,48,6f,58));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Asset_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::snow::systems::assets::Assets*/ ,(int)offsetof(Asset_obj,_hx_system),HX_("system",ef,96,e2,f2)},
	{hx::fsString,(int)offsetof(Asset_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsBool,(int)offsetof(Asset_obj,loaded),HX_("loaded",05,48,6f,58)},
	{hx::fsInt,(int)offsetof(Asset_obj,type),HX_("type",ba,f2,08,4d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Asset_obj_sStaticStorageInfo = 0;
#endif

static ::String Asset_obj_sMemberFields[] = {
	HX_("system",ef,96,e2,f2),
	HX_("id",db,5b,00,00),
	HX_("loaded",05,48,6f,58),
	HX_("type",ba,f2,08,4d),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

hx::Class Asset_obj::__mClass;

void Asset_obj::__register()
{
	Asset_obj _hx_dummy;
	Asset_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.systems.assets.Asset",7a,93,ee,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Asset_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Asset_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Asset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Asset_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace systems
} // end namespace assets