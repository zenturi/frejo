// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_api_IMediator
#define INCLUDED_mmvc_api_IMediator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mmvc,api,IMediator)

namespace mmvc{
namespace api{


class HXCPP_CLASS_ATTRIBUTES IMediator_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		void (hx::Object :: *_hx_preRegister)(); 
		static inline void preRegister( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_preRegister)();
		}
		void (hx::Object :: *_hx_onRegister)(); 
		static inline void onRegister( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_onRegister)();
		}
		void (hx::Object :: *_hx_preRemove)(); 
		static inline void preRemove( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_preRemove)();
		}
		void (hx::Object :: *_hx_onRemove)(); 
		static inline void onRemove( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_onRemove)();
		}
		 ::Dynamic (hx::Object :: *_hx_getViewComponent)(); 
		static inline  ::Dynamic getViewComponent( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_getViewComponent)();
		}
		void (hx::Object :: *_hx_setViewComponent)( ::Dynamic viewComponent); 
		static inline void setViewComponent( ::Dynamic _hx_, ::Dynamic viewComponent) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::IMediator_obj *>(_hx_.mPtr->_hx_getInterface(0x3690abcf)))->_hx_setViewComponent)(viewComponent);
		}
};

} // end namespace mmvc
} // end namespace api

#endif /* INCLUDED_mmvc_api_IMediator */ 
