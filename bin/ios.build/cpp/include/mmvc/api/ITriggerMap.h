// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_api_ITriggerMap
#define INCLUDED_mmvc_api_ITriggerMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mmvc,api,ITriggerMap)

namespace mmvc{
namespace api{


class HXCPP_CLASS_ATTRIBUTES ITriggerMap_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		void (hx::Object :: *_hx_map)( ::Dynamic trigger,hx::Class command); 
		static inline void map( ::Dynamic _hx_, ::Dynamic trigger,hx::Class command) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ITriggerMap_obj *>(_hx_.mPtr->_hx_getInterface(0x050cc2e0)))->_hx_map)(trigger,command);
		}
		void (hx::Object :: *_hx_unmap)( ::Dynamic trigger,hx::Class command); 
		static inline void unmap( ::Dynamic _hx_, ::Dynamic trigger,hx::Class command) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ITriggerMap_obj *>(_hx_.mPtr->_hx_getInterface(0x050cc2e0)))->_hx_unmap)(trigger,command);
		}
		void (hx::Object :: *_hx_dispatch)( ::Dynamic trigger); 
		static inline void dispatch( ::Dynamic _hx_, ::Dynamic trigger) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ITriggerMap_obj *>(_hx_.mPtr->_hx_getInterface(0x050cc2e0)))->_hx_dispatch)(trigger);
		}
};

} // end namespace mmvc
} // end namespace api

#endif /* INCLUDED_mmvc_api_ITriggerMap */ 