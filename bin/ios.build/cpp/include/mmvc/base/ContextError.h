// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_mmvc_base_ContextError
#define INCLUDED_mmvc_base_ContextError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a30475ac699df3c9_34_new)
HX_DECLARE_CLASS2(mmvc,base,ContextError)

namespace mmvc{
namespace base{


class HXCPP_CLASS_ATTRIBUTES ContextError_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ContextError_obj OBJ_;
		ContextError_obj();

	public:
		enum { _hx_ClassId = 0x108fa83b };

		void __construct(::String __o_message, ::Dynamic __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="mmvc.base.ContextError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"mmvc.base.ContextError"); }

		hx::ObjectPtr< ContextError_obj > __new(::String __o_message, ::Dynamic __o_id) {
			hx::ObjectPtr< ContextError_obj > __this = new ContextError_obj();
			__this->__construct(__o_message,__o_id);
			return __this;
		}

		static hx::ObjectPtr< ContextError_obj > __alloc(hx::Ctx *_hx_ctx,::String __o_message, ::Dynamic __o_id) {
			ContextError_obj *__this = (ContextError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ContextError_obj), true, "mmvc.base.ContextError"));
			*(void **)__this = ContextError_obj::_hx_vtable;
{
::String message = __o_message.Default(HX_("",00,00,00,00));
 ::Dynamic id = __o_id.Default(0);
            	HX_STACKFRAME(&_hx_pos_a30475ac699df3c9_34_new)
HXLINE(  35)		( ( ::mmvc::base::ContextError)(__this) )->message = message;
HXLINE(  36)		( ( ::mmvc::base::ContextError)(__this) )->id = ( (int)(id) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ContextError_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ContextError",79,0f,a1,c1); }

		::String message;
		int id;
};

} // end namespace mmvc
} // end namespace base

#endif /* INCLUDED_mmvc_base_ContextError */ 
