// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_api_buffers_TAError
#include <snow/api/buffers/TAError.h>
#endif
#ifndef INCLUDED_snow_api_buffers__Int16Array_Int16Array_Impl_
#include <snow/api/buffers/_Int16Array/Int16Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_63__new,"snow.api.buffers._Int16Array.Int16Array_Impl_","_new",0x4a902b86,"snow.api.buffers._Int16Array.Int16Array_Impl_._new","snow/api/buffers/Int16Array.hx",63,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_69_fromArray,"snow.api.buffers._Int16Array.Int16Array_Impl_","fromArray",0x5a2bdb8a,"snow.api.buffers._Int16Array.Int16Array_Impl_.fromArray","snow/api/buffers/Int16Array.hx",69,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_73_fromView,"snow.api.buffers._Int16Array.Int16Array_Impl_","fromView",0xe2a28d94,"snow.api.buffers._Int16Array.Int16Array_Impl_.fromView","snow/api/buffers/Int16Array.hx",73,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_77_fromBuffer,"snow.api.buffers._Int16Array.Int16Array_Impl_","fromBuffer",0xa4d881ef,"snow.api.buffers._Int16Array.Int16Array_Impl_.fromBuffer","snow/api/buffers/Int16Array.hx",77,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_82_subarray,"snow.api.buffers._Int16Array.Int16Array_Impl_","subarray",0x3e08e0be,"snow.api.buffers._Int16Array.Int16Array_Impl_.subarray","snow/api/buffers/Int16Array.hx",82,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_85_fromBytes,"snow.api.buffers._Int16Array.Int16Array_Impl_","fromBytes",0xf234765c,"snow.api.buffers._Int16Array.Int16Array_Impl_.fromBytes","snow/api/buffers/Int16Array.hx",85,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_91_toBytes,"snow.api.buffers._Int16Array.Int16Array_Impl_","toBytes",0x1e71e3eb,"snow.api.buffers._Int16Array.Int16Array_Impl_.toBytes","snow/api/buffers/Int16Array.hx",91,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_96_get_length,"snow.api.buffers._Int16Array.Int16Array_Impl_","get_length",0x208ec494,"snow.api.buffers._Int16Array.Int16Array_Impl_.get_length","snow/api/buffers/Int16Array.hx",96,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_111_toString,"snow.api.buffers._Int16Array.Int16Array_Impl_","toString",0x6ef65d51,"snow.api.buffers._Int16Array.Int16Array_Impl_.toString","snow/api/buffers/Int16Array.hx",111,0xe96fb73c)
HX_LOCAL_STACK_FRAME(_hx_pos_ca02095e98e7ee2f_59_boot,"snow.api.buffers._Int16Array.Int16Array_Impl_","boot",0x4c8c9a57,"snow.api.buffers._Int16Array.Int16Array_Impl_.boot","snow/api/buffers/Int16Array.hx",59,0xe96fb73c)
namespace snow{
namespace api{
namespace buffers{
namespace _Int16Array{

void Int16Array_Impl__obj::__construct() { }

Dynamic Int16Array_Impl__obj::__CreateEmpty() { return new Int16Array_Impl__obj; }

void *Int16Array_Impl__obj::_hx_vtable = 0;

Dynamic Int16Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Int16Array_Impl__obj > _hx_result = new Int16Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Int16Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x60bf7dad;
}

int Int16Array_Impl__obj::BYTES_PER_ELEMENT;

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::_new(int _elements){
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_63__new)
HXLINE(  64)		int _elements1 = _elements;
HXDLIN(  64)		if ((_elements1 < 0)) {
HXLINE(  64)			_elements1 = 0;
            		}
HXDLIN(  64)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  64)		int _bytelen = (_elements1 * _view->bytesPerElement);
HXDLIN(  64)		_view->byteOffset = 0;
HXDLIN(  64)		_view->byteLength = _bytelen;
HXDLIN(  64)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  64)		if ((_bytelen > 0)) {
HXLINE(  64)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN(  64)		_view->buffer = this1;
HXDLIN(  64)		_view->length = _elements1;
HXLINE(  63)		 ::snow::api::buffers::ArrayBufferView this2 = _view;
HXDLIN(  63)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,_new,return )

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::fromArray(::cpp::VirtualArray _array){
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_69_fromArray)
HXDLIN(  69)		::Array< Float > _array1 = _array;
HXDLIN(  69)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  69)		int _length = _array1->length;
HXDLIN(  69)		int _bytelen = (_length * _view->bytesPerElement);
HXDLIN(  69)		_view->byteOffset = 0;
HXDLIN(  69)		_view->length = _length;
HXDLIN(  69)		_view->byteLength = _bytelen;
HXDLIN(  69)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  69)		if ((_bytelen > 0)) {
HXDLIN(  69)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN(  69)		_view->buffer = this1;
HXDLIN(  69)		_view->copyFromArray(_array1,null());
HXDLIN(  69)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,fromArray,return )

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::fromView( ::snow::api::buffers::ArrayBufferView _view){
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_73_fromView)
HXDLIN(  73)		int _type = 2;
HXDLIN(  73)		int _src_type = _view->type;
HXDLIN(  73)		::Array< unsigned char > _src_data = _view->buffer;
HXDLIN(  73)		int _src_length = _view->length;
HXDLIN(  73)		int _src_byte_offset = _view->byteOffset;
HXDLIN(  73)		 ::snow::api::buffers::ArrayBufferView _view1 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,_type);
HXDLIN(  73)		if ((_src_type == _type)) {
HXDLIN(  73)			int srcLength = _src_data->length;
HXDLIN(  73)			int cloneLength = (srcLength - _src_byte_offset);
HXDLIN(  73)			::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  73)			if ((cloneLength > 0)) {
HXDLIN(  73)				this1[(cloneLength - 1)] = ( (unsigned char)(0) );
            			}
HXDLIN(  73)			_view1->buffer = this1;
HXDLIN(  73)			_view1->buffer->blit(0,_src_data,_src_byte_offset,cloneLength);
            		}
            		else {
HXDLIN(  73)			HX_STACK_DO_THROW(HX_("unimplemented",09,2f,74,b4));
            		}
HXDLIN(  73)		_view1->byteLength = (_view1->bytesPerElement * _src_length);
HXDLIN(  73)		_view1->byteOffset = 0;
HXDLIN(  73)		_view1->length = _src_length;
HXDLIN(  73)		return _view1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,fromView,return )

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::fromBuffer(::Array< unsigned char > _buffer,int _byteOffset,int _byteLength){
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_77_fromBuffer)
HXDLIN(  77)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  77)		int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  77)		if ((_byteOffset < 0)) {
HXDLIN(  77)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            		}
HXDLIN(  77)		if ((hx::Mod(_byteOffset,_bytes_per_elem) != 0)) {
HXDLIN(  77)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            		}
HXDLIN(  77)		int _src_bytelen = _buffer->length;
HXDLIN(  77)		int _new_range = (_byteOffset + _byteLength);
HXDLIN(  77)		if ((_new_range > _src_bytelen)) {
HXDLIN(  77)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            		}
HXDLIN(  77)		_view->buffer = _buffer;
HXDLIN(  77)		_view->byteOffset = _byteOffset;
HXDLIN(  77)		_view->byteLength = _byteLength;
HXDLIN(  77)		_view->length = ::Std_obj::_hx_int((( (Float)(_byteLength) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  77)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int16Array_Impl__obj,fromBuffer,return )

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::subarray( ::snow::api::buffers::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_82_subarray)
HXDLIN(  82)		bool _hx_tmp = hx::IsNull( end );
HXDLIN(  82)		int byte_len = ((end - begin) * this1->bytesPerElement);
HXDLIN(  82)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN(  82)		 ::snow::api::buffers::ArrayBufferView view;
HXDLIN(  82)		int _g = this1->type;
HXDLIN(  82)		switch((int)(_g)){
            			case (int)0: {
HXDLIN(  82)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXDLIN(  82)				::Array< unsigned char > _buffer = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,1);
HXDLIN(  82)				int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen = _buffer->length;
HXDLIN(  82)				int _new_range = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range > _src_bytelen)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view->buffer = _buffer;
HXDLIN(  82)				_view->byteOffset = byte_offset;
HXDLIN(  82)				_view->byteLength = byte_len;
HXDLIN(  82)				_view->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  82)				view = _view;
            			}
            			break;
            			case (int)2: {
HXDLIN(  82)				::Array< unsigned char > _buffer1 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view1 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  82)				int _bytes_per_elem1 = _view1->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem1) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen1 = _buffer1->length;
HXDLIN(  82)				int _new_range1 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range1 > _src_bytelen1)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view1->buffer = _buffer1;
HXDLIN(  82)				_view1->byteOffset = byte_offset;
HXDLIN(  82)				_view1->byteLength = byte_len;
HXDLIN(  82)				_view1->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem1) )));
HXDLIN(  82)				view = _view1;
            			}
            			break;
            			case (int)3: {
HXDLIN(  82)				::Array< unsigned char > _buffer2 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view2 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,3);
HXDLIN(  82)				int _bytes_per_elem2 = _view2->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem2) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen2 = _buffer2->length;
HXDLIN(  82)				int _new_range2 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range2 > _src_bytelen2)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view2->buffer = _buffer2;
HXDLIN(  82)				_view2->byteOffset = byte_offset;
HXDLIN(  82)				_view2->byteLength = byte_len;
HXDLIN(  82)				_view2->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem2) )));
HXDLIN(  82)				view = _view2;
            			}
            			break;
            			case (int)4: {
HXDLIN(  82)				::Array< unsigned char > _buffer3 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view3 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN(  82)				int _bytes_per_elem3 = _view3->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem3) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen3 = _buffer3->length;
HXDLIN(  82)				int _new_range3 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range3 > _src_bytelen3)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view3->buffer = _buffer3;
HXDLIN(  82)				_view3->byteOffset = byte_offset;
HXDLIN(  82)				_view3->byteLength = byte_len;
HXDLIN(  82)				_view3->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem3) )));
HXDLIN(  82)				view = _view3;
            			}
            			break;
            			case (int)5: {
HXDLIN(  82)				::Array< unsigned char > _buffer4 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view4 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  82)				int _bytes_per_elem4 = _view4->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem4) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen4 = _buffer4->length;
HXDLIN(  82)				int _new_range4 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range4 > _src_bytelen4)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view4->buffer = _buffer4;
HXDLIN(  82)				_view4->byteOffset = byte_offset;
HXDLIN(  82)				_view4->byteLength = byte_len;
HXDLIN(  82)				_view4->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem4) )));
HXDLIN(  82)				view = _view4;
            			}
            			break;
            			case (int)6: {
HXDLIN(  82)				::Array< unsigned char > _buffer5 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view5 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,6);
HXDLIN(  82)				int _bytes_per_elem5 = _view5->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem5) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen5 = _buffer5->length;
HXDLIN(  82)				int _new_range5 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range5 > _src_bytelen5)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view5->buffer = _buffer5;
HXDLIN(  82)				_view5->byteOffset = byte_offset;
HXDLIN(  82)				_view5->byteLength = byte_len;
HXDLIN(  82)				_view5->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem5) )));
HXDLIN(  82)				view = _view5;
            			}
            			break;
            			case (int)7: {
HXDLIN(  82)				::Array< unsigned char > _buffer6 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view6 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,7);
HXDLIN(  82)				int _bytes_per_elem6 = _view6->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem6) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen6 = _buffer6->length;
HXDLIN(  82)				int _new_range6 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range6 > _src_bytelen6)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view6->buffer = _buffer6;
HXDLIN(  82)				_view6->byteOffset = byte_offset;
HXDLIN(  82)				_view6->byteLength = byte_len;
HXDLIN(  82)				_view6->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem6) )));
HXDLIN(  82)				view = _view6;
            			}
            			break;
            			case (int)8: {
HXDLIN(  82)				::Array< unsigned char > _buffer7 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view7 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,8);
HXDLIN(  82)				int _bytes_per_elem7 = _view7->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem7) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen7 = _buffer7->length;
HXDLIN(  82)				int _new_range7 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range7 > _src_bytelen7)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view7->buffer = _buffer7;
HXDLIN(  82)				_view7->byteOffset = byte_offset;
HXDLIN(  82)				_view7->byteLength = byte_len;
HXDLIN(  82)				_view7->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem7) )));
HXDLIN(  82)				view = _view7;
            			}
            			break;
            			case (int)9: {
HXDLIN(  82)				::Array< unsigned char > _buffer8 = this1->buffer;
HXDLIN(  82)				 ::snow::api::buffers::ArrayBufferView _view8 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,9);
HXDLIN(  82)				int _bytes_per_elem8 = _view8->bytesPerElement;
HXDLIN(  82)				if ((byte_offset < 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  82)				if ((hx::Mod(byte_offset,_bytes_per_elem8) != 0)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  82)				int _src_bytelen8 = _buffer8->length;
HXDLIN(  82)				int _new_range8 = (byte_offset + byte_len);
HXDLIN(  82)				if ((_new_range8 > _src_bytelen8)) {
HXDLIN(  82)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  82)				_view8->buffer = _buffer8;
HXDLIN(  82)				_view8->byteOffset = byte_offset;
HXDLIN(  82)				_view8->byteLength = byte_len;
HXDLIN(  82)				_view8->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem8) )));
HXDLIN(  82)				view = _view8;
            			}
            			break;
            		}
HXDLIN(  82)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int16Array_Impl__obj,subarray,return )

 ::snow::api::buffers::ArrayBufferView Int16Array_Impl__obj::fromBytes( ::haxe::io::Bytes _bytes, ::Dynamic __o__byteOffset, ::Dynamic _byteLength){
 ::Dynamic _byteOffset = __o__byteOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_85_fromBytes)
HXLINE(  86)		if (hx::IsNull( _byteLength )) {
HXLINE(  86)			_byteLength = _bytes->length;
            		}
HXLINE(  87)		::Array< unsigned char > _buffer = _bytes->b;
HXDLIN(  87)		int _byteOffset1 = ( (int)(_byteOffset) );
HXDLIN(  87)		int _byteLength1 = ( (int)(_byteLength) );
HXDLIN(  87)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  87)		int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  87)		if ((_byteOffset1 < 0)) {
HXLINE(  87)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            		}
HXDLIN(  87)		if ((hx::Mod(_byteOffset1,_bytes_per_elem) != 0)) {
HXLINE(  87)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            		}
HXDLIN(  87)		int _src_bytelen = _buffer->length;
HXDLIN(  87)		int _new_range = (_byteOffset1 + _byteLength1);
HXDLIN(  87)		if ((_new_range > _src_bytelen)) {
HXLINE(  87)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            		}
HXDLIN(  87)		_view->buffer = _buffer;
HXDLIN(  87)		_view->byteOffset = _byteOffset1;
HXDLIN(  87)		_view->byteLength = _byteLength1;
HXDLIN(  87)		_view->length = ::Std_obj::_hx_int((( (Float)(_byteLength1) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  87)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Int16Array_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Int16Array_Impl__obj::toBytes( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_91_toBytes)
HXDLIN(  91)		return ::haxe::io::Bytes_obj::ofData(this1->buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,toBytes,return )

int Int16Array_Impl__obj::get_length( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_96_get_length)
HXDLIN(  96)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,get_length,return )

::String Int16Array_Impl__obj::toString( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_111_toString)
HXDLIN( 111)		if (hx::IsNull( this1 )) {
HXDLIN( 111)			return null();
            		}
            		else {
HXDLIN( 111)			return ((((HX_("Int16Array [byteLength:",6c,af,22,05) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
HXDLIN( 111)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Int16Array_Impl__obj,toString,return )


Int16Array_Impl__obj::Int16Array_Impl__obj()
{
}

bool Int16Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { outValue = toBytes_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromView") ) { outValue = fromView_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"subarray") ) { outValue = subarray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBuffer") ) { outValue = fromBuffer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Int16Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Int16Array_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Int16Array_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Int16Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Int16Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Int16Array_Impl__obj::__mClass;

static ::String Int16Array_Impl__obj_sStaticFields[] = {
	HX_("BYTES_PER_ELEMENT",a6,04,1d,cc),
	HX_("_new",61,15,1f,3f),
	HX_("fromArray",cf,57,18,da),
	HX_("fromView",ef,00,1b,ac),
	HX_("fromBuffer",0a,c2,d8,13),
	HX_("subarray",19,54,81,07),
	HX_("fromBytes",a1,f2,20,72),
	HX_("toBytes",f0,54,1c,8a),
	HX_("get_length",af,04,8f,8f),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Int16Array_Impl__obj::__register()
{
	Int16Array_Impl__obj _hx_dummy;
	Int16Array_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.api.buffers._Int16Array.Int16Array_Impl_",69,fc,e4,a0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Int16Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Int16Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Int16Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Int16Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Int16Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Int16Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Int16Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Int16Array_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ca02095e98e7ee2f_59_boot)
HXDLIN(  59)		BYTES_PER_ELEMENT = 2;
            	}
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Int16Array