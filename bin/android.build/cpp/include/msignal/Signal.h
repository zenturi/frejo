// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_msignal_Signal
#define INCLUDED_msignal_Signal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(msignal,Signal)
HX_DECLARE_CLASS1(msignal,SlotList)

namespace msignal{


class HXCPP_CLASS_ATTRIBUTES Signal_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Signal_obj OBJ_;
		Signal_obj();

	public:
		enum { _hx_ClassId = 0x76ff40dd };

		void __construct(::cpp::VirtualArray valueClasses);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="msignal.Signal")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"msignal.Signal"); }
		static hx::ObjectPtr< Signal_obj > __new(::cpp::VirtualArray valueClasses);
		static hx::ObjectPtr< Signal_obj > __alloc(hx::Ctx *_hx_ctx,::cpp::VirtualArray valueClasses);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Signal_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Signal",88,a2,1a,e9); }

		::cpp::VirtualArray valueClasses;
		int numListeners;
		 ::msignal::SlotList slots;
		bool priorityBased;
		 ::Dynamic add( ::Dynamic listener);
		::Dynamic add_dyn();

		 ::Dynamic addOnce( ::Dynamic listener);
		::Dynamic addOnce_dyn();

		 ::Dynamic addWithPriority( ::Dynamic listener, ::Dynamic priority);
		::Dynamic addWithPriority_dyn();

		 ::Dynamic addOnceWithPriority( ::Dynamic listener, ::Dynamic priority);
		::Dynamic addOnceWithPriority_dyn();

		 ::Dynamic remove( ::Dynamic listener);
		::Dynamic remove_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		 ::Dynamic registerListener( ::Dynamic listener, ::Dynamic once, ::Dynamic priority);
		::Dynamic registerListener_dyn();

		bool registrationPossible( ::Dynamic listener, ::Dynamic once);
		::Dynamic registrationPossible_dyn();

		virtual  ::Dynamic createSlot( ::Dynamic listener, ::Dynamic once, ::Dynamic priority);
		::Dynamic createSlot_dyn();

		int get_numListeners();
		::Dynamic get_numListeners_dyn();

};

} // end namespace msignal

#endif /* INCLUDED_msignal_Signal */ 