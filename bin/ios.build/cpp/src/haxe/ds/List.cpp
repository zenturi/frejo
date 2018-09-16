// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListIterator
#include <haxe/ds/_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_28668287f4db9634_45_new,"haxe.ds.List","new",0x82be24e7,"haxe.ds.List.new","/usr/local/lib/haxe/std/haxe/ds/List.hx",45,0x54f95eac)
HX_LOCAL_STACK_FRAME(_hx_pos_28668287f4db9634_68_push,"haxe.ds.List","push",0xe500b373,"haxe.ds.List.push","/usr/local/lib/haxe/std/haxe/ds/List.hx",68,0x54f95eac)
HX_LOCAL_STACK_FRAME(_hx_pos_28668287f4db9634_138_remove,"haxe.ds.List","remove",0x3f86961d,"haxe.ds.List.remove","/usr/local/lib/haxe/std/haxe/ds/List.hx",138,0x54f95eac)
HX_LOCAL_STACK_FRAME(_hx_pos_28668287f4db9634_162_iterator,"haxe.ds.List","iterator",0x056d2c07,"haxe.ds.List.iterator","/usr/local/lib/haxe/std/haxe/ds/List.hx",162,0x54f95eac)
namespace haxe{
namespace ds{

void List_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_28668287f4db9634_45_new)
HXDLIN(  45)		this->length = 0;
            	}

Dynamic List_obj::__CreateEmpty() { return new List_obj; }

void *List_obj::_hx_vtable = 0;

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< List_obj > _hx_result = new List_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool List_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57bbda73;
}

void List_obj::push( ::Dynamic item){
            	HX_GC_STACKFRAME(&_hx_pos_28668287f4db9634_68_push)
HXLINE(  69)		 ::haxe::ds::_List::ListNode x =  ::haxe::ds::_List::ListNode_obj::__alloc( HX_CTX ,item,this->h);
HXLINE(  70)		this->h = x;
HXLINE(  71)		if (hx::IsNull( this->q )) {
HXLINE(  72)			this->q = x;
            		}
HXLINE(  73)		this->length++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,push,(void))

bool List_obj::remove( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_28668287f4db9634_138_remove)
HXLINE( 139)		 ::haxe::ds::_List::ListNode prev = null();
HXLINE( 140)		 ::haxe::ds::_List::ListNode l = this->h;
HXLINE( 141)		while(hx::IsNotNull( l )){
HXLINE( 142)			if (hx::IsEq( l->item,v )) {
HXLINE( 143)				if (hx::IsNull( prev )) {
HXLINE( 144)					this->h = l->next;
            				}
            				else {
HXLINE( 146)					prev->next = l->next;
            				}
HXLINE( 147)				if (hx::IsEq( this->q,l )) {
HXLINE( 148)					this->q = prev;
            				}
HXLINE( 149)				this->length--;
HXLINE( 150)				return true;
            			}
HXLINE( 152)			prev = l;
HXLINE( 153)			l = l->next;
            		}
HXLINE( 155)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )

 ::haxe::ds::_List::ListIterator List_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_28668287f4db9634_162_iterator)
HXDLIN( 162)		return  ::haxe::ds::_List::ListIterator_obj::__alloc( HX_CTX ,this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )


hx::ObjectPtr< List_obj > List_obj::__new() {
	hx::ObjectPtr< List_obj > __this = new List_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< List_obj > List_obj::__alloc(hx::Ctx *_hx_ctx) {
	List_obj *__this = (List_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(List_obj), true, "haxe.ds.List"));
	*(void **)__this = List_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void List_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val List_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val List_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	outFields->push(HX_("q",71,00,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo List_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_List::ListNode*/ ,(int)offsetof(List_obj,h),HX_("h",68,00,00,00)},
	{hx::fsObject /*::haxe::ds::_List::ListNode*/ ,(int)offsetof(List_obj,q),HX_("q",71,00,00,00)},
	{hx::fsInt,(int)offsetof(List_obj,length),HX_("length",e6,94,07,9f)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *List_obj_sStaticStorageInfo = 0;
#endif

static ::String List_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("q",71,00,00,00),
	HX_("length",e6,94,07,9f),
	HX_("push",da,11,61,4a),
	HX_("remove",44,9c,88,04),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

hx::Class List_obj::__mClass;

void List_obj::__register()
{
	List_obj _hx_dummy;
	List_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.List",75,25,aa,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(List_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< List_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = List_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = List_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
