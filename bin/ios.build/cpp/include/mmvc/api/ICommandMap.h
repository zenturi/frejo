// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_api_ICommandMap
#define INCLUDED_mmvc_api_ICommandMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(mmvc,api,ICommand)
HX_DECLARE_CLASS2(mmvc,api,ICommandMap)
HX_DECLARE_CLASS1(msignal,Signal)

namespace mmvc{
namespace api{


class HXCPP_CLASS_ATTRIBUTES ICommandMap_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		void (hx::Object :: *_hx_mapSignal)( ::msignal::Signal signal,hx::Class commandClass, ::Dynamic oneShot); 
		static inline void mapSignal( ::Dynamic _hx_, ::msignal::Signal signal,hx::Class commandClass, ::Dynamic oneShot) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_mapSignal)(signal,commandClass,oneShot);
		}
		 ::msignal::Signal (hx::Object :: *_hx_mapSignalClass)(hx::Class signalClass,hx::Class commandClass, ::Dynamic oneShot); 
		static inline  ::msignal::Signal mapSignalClass( ::Dynamic _hx_,hx::Class signalClass,hx::Class commandClass, ::Dynamic oneShot) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_mapSignalClass)(signalClass,commandClass,oneShot);
		}
		bool (hx::Object :: *_hx_hasSignalCommand)( ::msignal::Signal signal,hx::Class commandClass); 
		static inline bool hasSignalCommand( ::Dynamic _hx_, ::msignal::Signal signal,hx::Class commandClass) {
			return (_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_hasSignalCommand)(signal,commandClass);
		}
		void (hx::Object :: *_hx_unmapSignal)( ::msignal::Signal signal,hx::Class commandClass); 
		static inline void unmapSignal( ::Dynamic _hx_, ::msignal::Signal signal,hx::Class commandClass) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_unmapSignal)(signal,commandClass);
		}
		void (hx::Object :: *_hx_unmapSignalClass)(hx::Class signalClass,hx::Class commandClass); 
		static inline void unmapSignalClass( ::Dynamic _hx_,hx::Class signalClass,hx::Class commandClass) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_unmapSignalClass)(signalClass,commandClass);
		}
		void (hx::Object :: *_hx_detain)(::Dynamic command); 
		static inline void detain( ::Dynamic _hx_,::Dynamic command) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_detain)(command);
		}
		void (hx::Object :: *_hx_release)(::Dynamic command); 
		static inline void release( ::Dynamic _hx_,::Dynamic command) {
			(_hx_.mPtr->*( static_cast< ::mmvc::api::ICommandMap_obj *>(_hx_.mPtr->_hx_getInterface(0x64c734ad)))->_hx_release)(command);
		}
};

} // end namespace mmvc
} // end namespace api

#endif /* INCLUDED_mmvc_api_ICommandMap */ 