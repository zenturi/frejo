// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_snow_modules_interfaces_IO
#define INCLUDED_snow_modules_interfaces_IO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(snow,Snow)
HX_DECLARE_CLASS2(snow,api,Promise)
HX_DECLARE_CLASS3(snow,api,buffers,ArrayBufferView)
HX_DECLARE_CLASS3(snow,modules,interfaces,IO)
HX_DECLARE_CLASS2(snow,types,SystemEvent)

namespace snow{
namespace modules{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES IO_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		void (hx::Object :: *_hx_onevent)( ::snow::types::SystemEvent event); 
		static inline void onevent( ::Dynamic _hx_, ::snow::types::SystemEvent event) {
			(_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_onevent)(event);
		}
		void (hx::Object :: *_hx_shutdown)(); 
		static inline void shutdown( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_shutdown)();
		}
		void (hx::Object :: *_hx_url_open)(::String _url); 
		static inline void url_open( ::Dynamic _hx_,::String _url) {
			(_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_url_open)(_url);
		}
		 ::snow::api::Promise (hx::Object :: *_hx_data_load)(::String _path, ::Dynamic _options); 
		static inline  ::snow::api::Promise data_load( ::Dynamic _hx_,::String _path, ::Dynamic _options) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_data_load)(_path,_options);
		}
		bool (hx::Object :: *_hx_data_save)(::String _path, ::snow::api::buffers::ArrayBufferView _data, ::Dynamic _options); 
		static inline bool data_save( ::Dynamic _hx_,::String _path, ::snow::api::buffers::ArrayBufferView _data, ::Dynamic _options) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_data_save)(_path,_data,_options);
		}
		::String (hx::Object :: *_hx_app_path)(); 
		static inline ::String app_path( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_app_path)();
		}
		::String (hx::Object :: *_hx_app_path_prefs)(); 
		static inline ::String app_path_prefs( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_app_path_prefs)();
		}
		::String (hx::Object :: *_hx_string_save_path)( ::Dynamic _slot); 
		static inline ::String string_save_path( ::Dynamic _hx_, ::Dynamic _slot) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_save_path)(_slot);
		}
		::String (hx::Object :: *_hx_string_slot_load)( ::Dynamic _slot); 
		static inline ::String string_slot_load( ::Dynamic _hx_, ::Dynamic _slot) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_slot_load)(_slot);
		}
		::String (hx::Object :: *_hx_string_slot_encode)(::String _string); 
		static inline ::String string_slot_encode( ::Dynamic _hx_,::String _string) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_slot_encode)(_string);
		}
		::String (hx::Object :: *_hx_string_slot_decode)(::String _string); 
		static inline ::String string_slot_decode( ::Dynamic _hx_,::String _string) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_slot_decode)(_string);
		}
		bool (hx::Object :: *_hx_string_slot_save)( ::Dynamic _slot,::String _contents); 
		static inline bool string_slot_save( ::Dynamic _hx_, ::Dynamic _slot,::String _contents) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_slot_save)(_slot,_contents);
		}
		bool (hx::Object :: *_hx_string_slot_destroy)( ::Dynamic _slot); 
		static inline bool string_slot_destroy( ::Dynamic _hx_, ::Dynamic _slot) {
			return (_hx_.mPtr->*( static_cast< ::snow::modules::interfaces::IO_obj *>(_hx_.mPtr->_hx_getInterface(0x82698fa4)))->_hx_string_slot_destroy)(_slot);
		}
};

} // end namespace snow
} // end namespace modules
} // end namespace interfaces

#endif /* INCLUDED_snow_modules_interfaces_IO */ 