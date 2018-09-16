// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_63_hasEvents,"haxe.MainLoop","hasEvents",0xbbf2790a,"haxe.MainLoop.hasEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",63,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_95_sortEvents,"haxe.MainLoop","sortEvents",0x1a386640,"haxe.MainLoop.sortEvents","/usr/local/lib/haxe/std/haxe/MainLoop.hx",95,0x4a7d9295)
HX_LOCAL_STACK_FRAME(_hx_pos_c09dd4c76a148f98_156_tick,"haxe.MainLoop","tick",0x9d5eafc6,"haxe.MainLoop.tick","/usr/local/lib/haxe/std/haxe/MainLoop.hx",156,0x4a7d9295)
namespace haxe{

void MainLoop_obj::__construct() { }

Dynamic MainLoop_obj::__CreateEmpty() { return new MainLoop_obj; }

void *MainLoop_obj::_hx_vtable = 0;

Dynamic MainLoop_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MainLoop_obj > _hx_result = new MainLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0351e9c3;
}

 ::haxe::MainEvent MainLoop_obj::pending;

bool MainLoop_obj::hasEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_63_hasEvents)
HXLINE(  64)		 ::haxe::MainEvent p = ::haxe::MainLoop_obj::pending;
HXLINE(  65)		while(hx::IsNotNull( p )){
HXLINE(  66)			if (p->isBlocking) {
HXLINE(  67)				return true;
            			}
HXLINE(  68)			p = p->next;
            		}
HXLINE(  70)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,hasEvents,return )

void MainLoop_obj::sortEvents(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_95_sortEvents)
HXLINE(  99)		 ::haxe::MainEvent list = ::haxe::MainLoop_obj::pending;
HXLINE( 101)		if (hx::IsNull( list )) {
HXLINE( 101)			return;
            		}
HXLINE( 103)		int insize = 1;
HXDLIN( 103)		int nmerges;
HXDLIN( 103)		int psize = 0;
HXDLIN( 103)		int qsize = 0;
HXLINE( 104)		 ::haxe::MainEvent p;
HXDLIN( 104)		 ::haxe::MainEvent q;
HXDLIN( 104)		 ::haxe::MainEvent e;
HXDLIN( 104)		 ::haxe::MainEvent tail;
HXLINE( 106)		while(true){
HXLINE( 107)			p = list;
HXLINE( 108)			list = null();
HXLINE( 109)			tail = null();
HXLINE( 110)			nmerges = 0;
HXLINE( 111)			while(hx::IsNotNull( p )){
HXLINE( 112)				nmerges = (nmerges + 1);
HXLINE( 113)				q = p;
HXLINE( 114)				psize = 0;
HXLINE( 115)				{
HXLINE( 115)					int _g1 = 0;
HXDLIN( 115)					int _g = insize;
HXDLIN( 115)					while((_g1 < _g)){
HXLINE( 115)						_g1 = (_g1 + 1);
HXDLIN( 115)						int i = (_g1 - 1);
HXLINE( 116)						psize = (psize + 1);
HXLINE( 117)						q = q->next;
HXLINE( 118)						if (hx::IsNull( q )) {
HXLINE( 118)							goto _hx_goto_4;
            						}
            					}
            					_hx_goto_4:;
            				}
HXLINE( 120)				qsize = insize;
HXLINE( 121)				while(true){
HXLINE( 121)					bool _hx_tmp;
HXDLIN( 121)					if ((psize <= 0)) {
HXLINE( 121)						if ((qsize > 0)) {
HXLINE( 121)							_hx_tmp = hx::IsNotNull( q );
            						}
            						else {
HXLINE( 121)							_hx_tmp = false;
            						}
            					}
            					else {
HXLINE( 121)						_hx_tmp = true;
            					}
HXDLIN( 121)					if (!(_hx_tmp)) {
HXLINE( 121)						goto _hx_goto_5;
            					}
HXLINE( 122)					if ((psize == 0)) {
HXLINE( 123)						e = q;
HXLINE( 124)						q = q->next;
HXLINE( 125)						qsize = (qsize - 1);
            					}
            					else {
HXLINE( 126)						bool _hx_tmp1;
HXDLIN( 126)						bool _hx_tmp2;
HXDLIN( 126)						if ((qsize != 0)) {
HXLINE( 126)							_hx_tmp2 = hx::IsNull( q );
            						}
            						else {
HXLINE( 126)							_hx_tmp2 = true;
            						}
HXDLIN( 126)						if (!(_hx_tmp2)) {
HXLINE( 126)							if ((p->priority <= q->priority)) {
HXLINE( 126)								if ((p->priority == q->priority)) {
HXLINE( 126)									_hx_tmp1 = (p->nextRun <= q->nextRun);
            								}
            								else {
HXLINE( 126)									_hx_tmp1 = false;
            								}
            							}
            							else {
HXLINE( 126)								_hx_tmp1 = true;
            							}
            						}
            						else {
HXLINE( 126)							_hx_tmp1 = true;
            						}
HXDLIN( 126)						if (_hx_tmp1) {
HXLINE( 127)							e = p;
HXLINE( 128)							p = p->next;
HXLINE( 129)							psize = (psize - 1);
            						}
            						else {
HXLINE( 131)							e = q;
HXLINE( 132)							q = q->next;
HXLINE( 133)							qsize = (qsize - 1);
            						}
            					}
HXLINE( 135)					if (hx::IsNotNull( tail )) {
HXLINE( 136)						tail->next = e;
            					}
            					else {
HXLINE( 138)						list = e;
            					}
HXLINE( 139)					e->prev = tail;
HXLINE( 140)					tail = e;
            				}
            				_hx_goto_5:;
HXLINE( 142)				p = q;
            			}
HXLINE( 144)			tail->next = null();
HXLINE( 145)			if ((nmerges <= 1)) {
HXLINE( 146)				goto _hx_goto_2;
            			}
HXLINE( 147)			insize = (insize * 2);
            		}
            		_hx_goto_2:;
HXLINE( 149)		list->prev = null();
HXLINE( 150)		::haxe::MainLoop_obj::pending = list;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,sortEvents,(void))

Float MainLoop_obj::tick(){
            	HX_STACKFRAME(&_hx_pos_c09dd4c76a148f98_156_tick)
HXLINE( 157)		::haxe::MainLoop_obj::sortEvents();
HXLINE( 158)		 ::haxe::MainEvent e = ::haxe::MainLoop_obj::pending;
HXLINE( 159)		Float now =  ::__time_stamp();
HXLINE( 160)		Float wait = ((Float)1e9);
HXLINE( 161)		while(hx::IsNotNull( e )){
HXLINE( 162)			 ::haxe::MainEvent next = e->next;
HXLINE( 163)			Float wt = (e->nextRun - now);
HXLINE( 164)			bool _hx_tmp;
HXDLIN( 164)			if (!((e->nextRun < 0))) {
HXLINE( 164)				_hx_tmp = (wt <= 0);
            			}
            			else {
HXLINE( 164)				_hx_tmp = true;
            			}
HXDLIN( 164)			if (_hx_tmp) {
HXLINE( 165)				wait = ( (Float)(0) );
HXLINE( 166)				if (hx::IsNotNull( e->f )) {
HXLINE( 166)					e->f();
            				}
            			}
            			else {
HXLINE( 167)				if ((wait > wt)) {
HXLINE( 168)					wait = wt;
            				}
            			}
HXLINE( 169)			e = next;
            		}
HXLINE( 171)		return wait;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,tick,return )


MainLoop_obj::MainLoop_obj()
{
}

bool MainLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { outValue = tick_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasEvents") ) { outValue = hasEvents_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortEvents") ) { outValue = sortEvents_dyn(); return true; }
	}
	return false;
}

bool MainLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast<  ::haxe::MainEvent >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *MainLoop_obj_sMemberStorageInfo = 0;
static hx::StaticInfo MainLoop_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::MainEvent*/ ,(void *) &MainLoop_obj::pending,HX_("pending",57,98,ec,2b)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void MainLoop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainLoop_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#endif

hx::Class MainLoop_obj::__mClass;

static ::String MainLoop_obj_sStaticFields[] = {
	HX_("pending",57,98,ec,2b),
	HX_("hasEvents",13,02,53,d7),
	HX_("sortEvents",17,c5,4f,f3),
	HX_("tick",5d,c3,fc,4c),
	::String(null())
};

void MainLoop_obj::__register()
{
	MainLoop_obj _hx_dummy;
	MainLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.MainLoop",a5,cc,ab,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &MainLoop_obj::__SetStatic;
	__mClass->mMarkFunc = MainLoop_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MainLoop_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< MainLoop_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainLoop_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainLoop_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
