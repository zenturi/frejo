// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_api_IViewMap
#define INCLUDED_mmvc_api_IViewMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mmvc,api,IViewContainer)
HX_DECLARE_CLASS2(mmvc,api,IViewMap)

namespace mmvc{
namespace api{


class HXCPP_CLASS_ATTRIBUTES IViewMap_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		bool (hx::Object :: *_hx_set_enabled)(bool value); 
		static inline bool set_enabled( ::Dynamic _hx_,bool value) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_set_enabled)(value);
		}
		::Dynamic (hx::Object :: *_hx_set_contextView)(::Dynamic value); 
		static inline ::Dynamic set_contextView( ::Dynamic _hx_,::Dynamic value) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_set_contextView)(value);
		}
		void (hx::Object :: *_hx_mapPackage)(::String packageName); 
		static inline void mapPackage( ::Dynamic _hx_,::String packageName) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_mapPackage)(packageName);
		}
		void (hx::Object :: *_hx_unmapPackage)(::String packageName); 
		static inline void unmapPackage( ::Dynamic _hx_,::String packageName) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_unmapPackage)(packageName);
		}
		bool (hx::Object :: *_hx_hasPackage)(::String packageName); 
		static inline bool hasPackage( ::Dynamic _hx_,::String packageName) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_hasPackage)(packageName);
		}
		void (hx::Object :: *_hx_mapType)(hx::Class type); 
		static inline void mapType( ::Dynamic _hx_,hx::Class type) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_mapType)(type);
		}
		void (hx::Object :: *_hx_unmapType)(hx::Class type); 
		static inline void unmapType( ::Dynamic _hx_,hx::Class type) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_unmapType)(type);
		}
		bool (hx::Object :: *_hx_hasType)(hx::Class type); 
		static inline bool hasType( ::Dynamic _hx_,hx::Class type) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::IViewMap_obj *>(_hx_.mPtr->_hx_getInterface(0x5d4fa11b)))->_hx_hasType)(type);
		}
};

} // end namespace mmvc
} // end namespace api

#endif /* INCLUDED_mmvc_api_IViewMap */ 
