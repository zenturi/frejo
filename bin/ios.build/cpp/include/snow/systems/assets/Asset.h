// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_systems_assets_Asset
#define INCLUDED_snow_systems_assets_Asset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(snow,systems,assets,Asset)

namespace snow{
namespace systems{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES Asset_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Asset_obj OBJ_;
		Asset_obj();

	public:
		enum { _hx_ClassId = 0x3efde4b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="snow.systems.assets.Asset")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"snow.systems.assets.Asset"); }

		hx::ObjectPtr< Asset_obj > __new() {
			hx::ObjectPtr< Asset_obj > __this = new Asset_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Asset_obj > __alloc(hx::Ctx *_hx_ctx) {
			Asset_obj *__this = (Asset_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Asset_obj), false, "snow.systems.assets.Asset"));
			*(void **)__this = Asset_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Asset_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Asset",d0,d9,66,b9); }

};

} // end namespace snow
} // end namespace systems
} // end namespace assets

#endif /* INCLUDED_snow_systems_assets_Asset */ 
