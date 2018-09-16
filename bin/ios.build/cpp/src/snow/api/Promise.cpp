// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_snow_api_Promise
#include <snow/api/Promise.h>
#endif
#ifndef INCLUDED_snow_api_Promises
#include <snow/api/Promises.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_627296029ffcdab9_62_new,"snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",62,0xcb181004)
HX_DEFINE_STACK_FRAME(_hx_pos_627296029ffcdab9_25_new,"snow.api.Promise","new",0xe10ada2e,"snow.api.Promise.new","snow/api/Promise.hx",25,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_83_then,"snow.api.Promise","then",0x0c6d8d4f,"snow.api.Promise.then","snow/api/Promise.hx",83,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_109_error,"snow.api.Promise","error",0x37116516,"snow.api.Promise.error","snow/api/Promise.hx",109,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_246_add_settle,"snow.api.Promise","add_settle",0xf8fc3b1b,"snow.api.Promise.add_settle","snow/api/Promise.hx",246,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_260_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",260,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_259_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",259,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_256_new_linked_promise,"snow.api.Promise","new_linked_promise",0x40dd1d26,"snow.api.Promise.new_linked_promise","snow/api/Promise.hx",256,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_297_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",297,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_296_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",296,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_294_new_linked_resolve_empty,"snow.api.Promise","new_linked_resolve_empty",0x28449785,"snow.api.Promise.new_linked_resolve_empty","snow/api/Promise.hx",294,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_316_add_fulfill,"snow.api.Promise","add_fulfill",0x885e59b0,"snow.api.Promise.add_fulfill","snow/api/Promise.hx",316,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_323_add_reject,"snow.api.Promise","add_reject",0x8bf952ef,"snow.api.Promise.add_reject","snow/api/Promise.hx",323,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_332_onfulfill,"snow.api.Promise","onfulfill",0x5213e64f,"snow.api.Promise.onfulfill","snow/api/Promise.hx",332,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_349_onreject,"snow.api.Promise","onreject",0x694a7f30,"snow.api.Promise.onreject","snow/api/Promise.hx",349,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_368_onsettle,"snow.api.Promise","onsettle",0xd64d675c,"snow.api.Promise.onsettle","snow/api/Promise.hx",368,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_218_reject,"snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",218,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_217_reject,"snow.api.Promise","reject",0xa943dc51,"snow.api.Promise.reject","snow/api/Promise.hx",217,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_228_resolve,"snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",228,0xcb181004)
HX_LOCAL_STACK_FRAME(_hx_pos_627296029ffcdab9_227_resolve,"snow.api.Promise","resolve",0xa75b1bba,"snow.api.Promise.resolve","snow/api/Promise.hx",227,0xcb181004)
namespace snow{
namespace api{

void Promise_obj::__construct( ::Dynamic func){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::snow::api::Promise,_gthis, ::Dynamic,func) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_62_new)
HXLINE(  71)			func(_gthis->onfulfill_dyn(),_gthis->onreject_dyn());
HXLINE(  74)			::snow::api::Promises_obj::defer(::snow::api::Promises_obj::next_dyn(),null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_25_new)
HXLINE(  37)		this->was_caught = false;
HXLINE(  54)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  56)		this->state = 0;
HXLINE(  58)		this->reject_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  59)		this->fulfill_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  60)		this->settle_reactions = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  62)		::snow::api::Promises_obj::queue( ::Dynamic(new _hx_Closure_0(_gthis,func)));
            	}

Dynamic Promise_obj::__CreateEmpty() { return new Promise_obj; }

void *Promise_obj::_hx_vtable = 0;

Dynamic Promise_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_obj > _hx_result = new Promise_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Promise_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x79374d4c;
}

 ::snow::api::Promise Promise_obj::then( ::Dynamic on_fulfilled, ::Dynamic on_rejected){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_83_then)
HXDLIN(  83)		int _g = this->state;
HXDLIN(  83)		switch((int)(_g)){
            			case (int)0: {
HXLINE(  86)				this->add_fulfill(on_fulfilled);
HXLINE(  87)				this->add_reject(on_rejected);
HXLINE(  88)				return this->new_linked_promise();
            			}
            			break;
            			case (int)1: {
HXLINE(  92)				::snow::api::Promises_obj::defer(on_fulfilled,this->result);
HXLINE(  93)				return ::snow::api::Promise_obj::resolve(this->result);
            			}
            			break;
            			case (int)2: {
HXLINE(  97)				::snow::api::Promises_obj::defer(on_rejected,this->result);
HXLINE(  98)				return ::snow::api::Promise_obj::reject(this->result);
            			}
            			break;
            		}
HXLINE(  83)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(Promise_obj,then,return )

 ::snow::api::Promise Promise_obj::error( ::Dynamic on_rejected){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_109_error)
HXDLIN( 109)		int _g = this->state;
HXDLIN( 109)		switch((int)(_g)){
            			case (int)0: {
HXLINE( 112)				this->add_reject(on_rejected);
HXLINE( 113)				return this->new_linked_resolve_empty();
            			}
            			break;
            			case (int)1: {
HXLINE( 117)				return ::snow::api::Promise_obj::resolve(this->result);
            			}
            			break;
            			case (int)2: {
HXLINE( 121)				::snow::api::Promises_obj::defer(on_rejected,this->result);
HXLINE( 122)				return ::snow::api::Promise_obj::reject(this->result);
            			}
            			break;
            		}
HXLINE( 109)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,error,return )

void Promise_obj::add_settle( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_246_add_settle)
HXDLIN( 246)		if ((this->state == 0)) {
HXLINE( 247)			this->settle_reactions->push(f);
            		}
            		else {
HXLINE( 249)			::snow::api::Promises_obj::defer(f,this->result);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_settle,(void))

 ::snow::api::Promise Promise_obj::new_linked_promise(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0, ::snow::api::Promise,_gthis, ::Dynamic,f, ::Dynamic,r) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_260_new_linked_promise)
HXLINE( 260)				if ((_gthis->state == 1)) {
HXLINE( 261)					f(_gthis->result);
            				}
            				else {
HXLINE( 263)					r(_gthis->result);
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_259_new_linked_promise)
HXLINE( 259)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(_gthis,f,r)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_256_new_linked_promise)
HXDLIN( 256)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 258)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_promise,return )

 ::snow::api::Promise Promise_obj::new_linked_resolve_empty(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::snow::api::Promise,_gthis) HXARGC(2)
            		void _hx_run( ::Dynamic f, ::Dynamic r){
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            			void _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_627296029ffcdab9_297_new_linked_resolve_empty)
HXLINE( 297)				f();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_296_new_linked_resolve_empty)
HXLINE( 296)			_gthis->add_settle( ::Dynamic(new _hx_Closure_0(f)));
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_294_new_linked_resolve_empty)
HXDLIN( 294)		 ::snow::api::Promise _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE( 295)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,new_linked_resolve_empty,return )

void Promise_obj::add_fulfill( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_316_add_fulfill)
HXDLIN( 316)		if (hx::IsNotNull( f )) {
HXLINE( 317)			this->fulfill_reactions->push(f);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_fulfill,(void))

void Promise_obj::add_reject( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_323_add_reject)
HXDLIN( 323)		if (hx::IsNotNull( f )) {
HXLINE( 324)			this->was_caught = true;
HXLINE( 325)			this->reject_reactions->push(f);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,add_reject,(void))

void Promise_obj::onfulfill( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_332_onfulfill)
HXLINE( 336)		this->state = 1;
HXLINE( 337)		this->result = val;
HXLINE( 339)		while((this->fulfill_reactions->get_length() > 0)){
HXLINE( 340)			 ::Dynamic fn = this->fulfill_reactions->shift();
HXLINE( 341)			fn(this->result);
            		}
HXLINE( 344)		this->onsettle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onfulfill,(void))

void Promise_obj::onreject( ::Dynamic reason){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_349_onreject)
HXLINE( 353)		this->state = 2;
HXLINE( 354)		this->result = reason;
HXLINE( 356)		while((this->reject_reactions->get_length() > 0)){
HXLINE( 357)			 ::Dynamic fn = this->reject_reactions->shift();
HXLINE( 358)			fn(this->result);
            		}
HXLINE( 361)		this->onsettle();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,onreject,(void))

void Promise_obj::onsettle(){
            	HX_STACKFRAME(&_hx_pos_627296029ffcdab9_368_onsettle)
HXDLIN( 368)		while((this->settle_reactions->get_length() > 0)){
HXLINE( 369)			 ::Dynamic fn = this->settle_reactions->shift();
HXLINE( 370)			fn(this->result);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_obj,onsettle,(void))

 ::snow::api::Promise Promise_obj::reject( ::Dynamic reason){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,reason) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_218_reject)
HXLINE( 218)			no(reason);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_217_reject)
HXDLIN( 217)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(reason)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,reject,return )

 ::snow::api::Promise Promise_obj::resolve( ::Dynamic val){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,val) HXARGC(2)
            		void _hx_run( ::Dynamic ok, ::Dynamic no){
            			HX_STACKFRAME(&_hx_pos_627296029ffcdab9_228_resolve)
HXLINE( 228)			ok(val);
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_627296029ffcdab9_227_resolve)
HXDLIN( 227)		return  ::snow::api::Promise_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(val)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_obj,resolve,return )


hx::ObjectPtr< Promise_obj > Promise_obj::__new( ::Dynamic func) {
	hx::ObjectPtr< Promise_obj > __this = new Promise_obj();
	__this->__construct(func);
	return __this;
}

hx::ObjectPtr< Promise_obj > Promise_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic func) {
	Promise_obj *__this = (Promise_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Promise_obj), true, "snow.api.Promise"));
	*(void **)__this = Promise_obj::_hx_vtable;
	__this->__construct(func);
	return __this;
}

Promise_obj::Promise_obj()
{
}

void Promise_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise);
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_MARK_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_MARK_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_MARK_MEMBER_NAME(was_caught,"was_caught");
	HX_MARK_END_CLASS();
}

void Promise_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(result,"result");
	HX_VISIT_MEMBER_NAME(reject_reactions,"reject_reactions");
	HX_VISIT_MEMBER_NAME(fulfill_reactions,"fulfill_reactions");
	HX_VISIT_MEMBER_NAME(settle_reactions,"settle_reactions");
	HX_VISIT_MEMBER_NAME(was_caught,"was_caught");
}

hx::Val Promise_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state ); }
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onreject") ) { return hx::Val( onreject_dyn() ); }
		if (HX_FIELD_EQ(inName,"onsettle") ) { return hx::Val( onsettle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onfulfill") ) { return hx::Val( onfulfill_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { return hx::Val( was_caught ); }
		if (HX_FIELD_EQ(inName,"add_settle") ) { return hx::Val( add_settle_dyn() ); }
		if (HX_FIELD_EQ(inName,"add_reject") ) { return hx::Val( add_reject_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"add_fulfill") ) { return hx::Val( add_fulfill_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { return hx::Val( reject_reactions ); }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { return hx::Val( settle_reactions ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { return hx::Val( fulfill_reactions ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"new_linked_promise") ) { return hx::Val( new_linked_promise_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"new_linked_resolve_empty") ) { return hx::Val( new_linked_resolve_empty_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Promise_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
	}
	return false;
}

hx::Val Promise_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"was_caught") ) { was_caught=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reject_reactions") ) { reject_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"settle_reactions") ) { settle_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fulfill_reactions") ) { fulfill_reactions=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("state",11,76,0b,84));
	outFields->push(HX_("result",dd,68,84,08));
	outFields->push(HX_("reject_reactions",8a,a6,76,b0));
	outFields->push(HX_("fulfill_reactions",ab,55,22,9b));
	outFields->push(HX_("settle_reactions",b6,fd,65,eb));
	outFields->push(HX_("was_caught",12,4f,0e,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Promise_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Promise_obj,state),HX_("state",11,76,0b,84)},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Promise_obj,result),HX_("result",dd,68,84,08)},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,reject_reactions),HX_("reject_reactions",8a,a6,76,b0)},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,fulfill_reactions),HX_("fulfill_reactions",ab,55,22,9b)},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Promise_obj,settle_reactions),HX_("settle_reactions",b6,fd,65,eb)},
	{hx::fsBool,(int)offsetof(Promise_obj,was_caught),HX_("was_caught",12,4f,0e,2d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Promise_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_obj_sMemberFields[] = {
	HX_("state",11,76,0b,84),
	HX_("result",dd,68,84,08),
	HX_("reject_reactions",8a,a6,76,b0),
	HX_("fulfill_reactions",ab,55,22,9b),
	HX_("settle_reactions",b6,fd,65,eb),
	HX_("was_caught",12,4f,0e,2d),
	HX_("then",dd,02,fc,4c),
	HX_("error",c8,cb,29,73),
	HX_("add_settle",29,4f,38,78),
	HX_("new_linked_promise",34,ef,80,c1),
	HX_("new_linked_resolve_empty",13,68,be,26),
	HX_("add_fulfill",e2,d1,b3,5d),
	HX_("add_reject",fd,66,35,0b),
	HX_("onfulfill",01,8e,aa,d6),
	HX_("onreject",be,d3,9d,ad),
	HX_("onsettle",ea,bb,a0,1a),
	::String(null()) };

hx::Class Promise_obj::__mClass;

static ::String Promise_obj_sStaticFields[] = {
	HX_("reject",5f,51,85,02),
	HX_("resolve",ec,12,60,67),
	::String(null())
};

void Promise_obj::__register()
{
	Promise_obj _hx_dummy;
	Promise_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.api.Promise",3c,eb,f2,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Promise_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Promise_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace snow
} // end namespace api
