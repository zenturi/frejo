// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_haxe_ds_List
#define INCLUDED_haxe_ds_List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS3(haxe,ds,_List,ListIterator)
HX_DECLARE_CLASS3(haxe,ds,_List,ListNode)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES List_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef List_obj OBJ_;
		List_obj();

	public:
		enum { _hx_ClassId = 0x57bbda73 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.ds.List")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"haxe.ds.List"); }
		static hx::ObjectPtr< List_obj > __new();
		static hx::ObjectPtr< List_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~List_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("List",7e,48,8c,32); }

		 ::haxe::ds::_List::ListNode h;
		 ::haxe::ds::_List::ListNode q;
		int length;
		void push( ::Dynamic item);
		::Dynamic push_dyn();

		bool remove( ::Dynamic v);
		::Dynamic remove_dyn();

		 ::haxe::ds::_List::ListIterator iterator();
		::Dynamic iterator_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_List */ 
