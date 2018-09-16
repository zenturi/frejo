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
#ifndef INCLUDED_snow_api_buffers__Uint8ClampedArray_Uint8ClampedArray_Impl_
#include <snow/api/buffers/_Uint8ClampedArray/Uint8ClampedArray_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_72__new,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","_new",0xd1849a88,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_._new","snow/api/buffers/Uint8ClampedArray.hx",72,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_78_fromArray,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromArray",0x887bc548,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromArray","snow/api/buffers/Uint8ClampedArray.hx",78,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_82_fromView,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromView",0x94c7a596,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromView","snow/api/buffers/Uint8ClampedArray.hx",82,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_86_fromBuffer,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromBuffer",0xfc751e71,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromBuffer","snow/api/buffers/Uint8ClampedArray.hx",86,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_91_subarray,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","subarray",0xf02df8c0,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.subarray","snow/api/buffers/Uint8ClampedArray.hx",91,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_94_fromBytes,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","fromBytes",0x2084601a,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.fromBytes","snow/api/buffers/Uint8ClampedArray.hx",94,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_100_toBytes,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toBytes",0xc7ff4229,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toBytes","snow/api/buffers/Uint8ClampedArray.hx",100,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_105_get_length,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","get_length",0x782b6116,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.get_length","snow/api/buffers/Uint8ClampedArray.hx",105,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_120_toString,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","toString",0x211b7553,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.toString","snow/api/buffers/Uint8ClampedArray.hx",120,0xc60b32de)
HX_LOCAL_STACK_FRAME(_hx_pos_adfe02ae4d687249_68_boot,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_","boot",0xd3810959,"snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_.boot","snow/api/buffers/Uint8ClampedArray.hx",68,0xc60b32de)
namespace snow{
namespace api{
namespace buffers{
namespace _Uint8ClampedArray{

void Uint8ClampedArray_Impl__obj::__construct() { }

Dynamic Uint8ClampedArray_Impl__obj::__CreateEmpty() { return new Uint8ClampedArray_Impl__obj; }

void *Uint8ClampedArray_Impl__obj::_hx_vtable = 0;

Dynamic Uint8ClampedArray_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Uint8ClampedArray_Impl__obj > _hx_result = new Uint8ClampedArray_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Uint8ClampedArray_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c91f383;
}

int Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT;

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::_new(int _elements){
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_72__new)
HXLINE(  73)		int _elements1 = _elements;
HXDLIN(  73)		if ((_elements1 < 0)) {
HXLINE(  73)			_elements1 = 0;
            		}
HXDLIN(  73)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  73)		int _bytelen = (_elements1 * _view->bytesPerElement);
HXDLIN(  73)		_view->byteOffset = 0;
HXDLIN(  73)		_view->byteLength = _bytelen;
HXDLIN(  73)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  73)		if ((_bytelen > 0)) {
HXLINE(  73)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN(  73)		_view->buffer = this1;
HXDLIN(  73)		_view->length = _elements1;
HXLINE(  72)		 ::snow::api::buffers::ArrayBufferView this2 = _view;
HXDLIN(  72)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,_new,return )

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromArray(::cpp::VirtualArray _array){
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_78_fromArray)
HXDLIN(  78)		::Array< Float > _array1 = _array;
HXDLIN(  78)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  78)		int _length = _array1->length;
HXDLIN(  78)		int _bytelen = (_length * _view->bytesPerElement);
HXDLIN(  78)		_view->byteOffset = 0;
HXDLIN(  78)		_view->length = _length;
HXDLIN(  78)		_view->byteLength = _bytelen;
HXDLIN(  78)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  78)		if ((_bytelen > 0)) {
HXDLIN(  78)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN(  78)		_view->buffer = this1;
HXDLIN(  78)		_view->copyFromArray(_array1,null());
HXDLIN(  78)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,fromArray,return )

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromView( ::snow::api::buffers::ArrayBufferView _view){
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_82_fromView)
HXDLIN(  82)		int _type = 5;
HXDLIN(  82)		int _src_type = _view->type;
HXDLIN(  82)		::Array< unsigned char > _src_data = _view->buffer;
HXDLIN(  82)		int _src_length = _view->length;
HXDLIN(  82)		int _src_byte_offset = _view->byteOffset;
HXDLIN(  82)		 ::snow::api::buffers::ArrayBufferView _view1 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,_type);
HXDLIN(  82)		if ((_src_type == _type)) {
HXDLIN(  82)			int srcLength = _src_data->length;
HXDLIN(  82)			int cloneLength = (srcLength - _src_byte_offset);
HXDLIN(  82)			::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN(  82)			if ((cloneLength > 0)) {
HXDLIN(  82)				this1[(cloneLength - 1)] = ( (unsigned char)(0) );
            			}
HXDLIN(  82)			_view1->buffer = this1;
HXDLIN(  82)			_view1->buffer->blit(0,_src_data,_src_byte_offset,cloneLength);
            		}
            		else {
HXDLIN(  82)			HX_STACK_DO_THROW(HX_("unimplemented",09,2f,74,b4));
            		}
HXDLIN(  82)		_view1->byteLength = (_view1->bytesPerElement * _src_length);
HXDLIN(  82)		_view1->byteOffset = 0;
HXDLIN(  82)		_view1->length = _src_length;
HXDLIN(  82)		return _view1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,fromView,return )

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromBuffer(::Array< unsigned char > _buffer,int _byteOffset,int _byteLength){
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_86_fromBuffer)
HXDLIN(  86)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  86)		int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  86)		if ((_byteOffset < 0)) {
HXDLIN(  86)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            		}
HXDLIN(  86)		if ((hx::Mod(_byteOffset,_bytes_per_elem) != 0)) {
HXDLIN(  86)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            		}
HXDLIN(  86)		int _src_bytelen = _buffer->length;
HXDLIN(  86)		int _new_range = (_byteOffset + _byteLength);
HXDLIN(  86)		if ((_new_range > _src_bytelen)) {
HXDLIN(  86)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            		}
HXDLIN(  86)		_view->buffer = _buffer;
HXDLIN(  86)		_view->byteOffset = _byteOffset;
HXDLIN(  86)		_view->byteLength = _byteLength;
HXDLIN(  86)		_view->length = ::Std_obj::_hx_int((( (Float)(_byteLength) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  86)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,fromBuffer,return )

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::subarray( ::snow::api::buffers::ArrayBufferView this1,int begin, ::Dynamic end){
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_91_subarray)
HXDLIN(  91)		bool _hx_tmp = hx::IsNull( end );
HXDLIN(  91)		int byte_len = ((end - begin) * this1->bytesPerElement);
HXDLIN(  91)		int byte_offset = ((begin * this1->bytesPerElement) + this1->byteOffset);
HXDLIN(  91)		 ::snow::api::buffers::ArrayBufferView view;
HXDLIN(  91)		int _g = this1->type;
HXDLIN(  91)		switch((int)(_g)){
            			case (int)0: {
HXDLIN(  91)				HX_STACK_DO_THROW(HX_("subarray on a blank ArrayBufferView",39,87,fd,19));
            			}
            			break;
            			case (int)1: {
HXDLIN(  91)				::Array< unsigned char > _buffer = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,1);
HXDLIN(  91)				int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen = _buffer->length;
HXDLIN(  91)				int _new_range = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range > _src_bytelen)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view->buffer = _buffer;
HXDLIN(  91)				_view->byteOffset = byte_offset;
HXDLIN(  91)				_view->byteLength = byte_len;
HXDLIN(  91)				_view->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  91)				view = _view;
            			}
            			break;
            			case (int)2: {
HXDLIN(  91)				::Array< unsigned char > _buffer1 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view1 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,2);
HXDLIN(  91)				int _bytes_per_elem1 = _view1->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem1) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen1 = _buffer1->length;
HXDLIN(  91)				int _new_range1 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range1 > _src_bytelen1)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view1->buffer = _buffer1;
HXDLIN(  91)				_view1->byteOffset = byte_offset;
HXDLIN(  91)				_view1->byteLength = byte_len;
HXDLIN(  91)				_view1->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem1) )));
HXDLIN(  91)				view = _view1;
            			}
            			break;
            			case (int)3: {
HXDLIN(  91)				::Array< unsigned char > _buffer2 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view2 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,3);
HXDLIN(  91)				int _bytes_per_elem2 = _view2->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem2) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen2 = _buffer2->length;
HXDLIN(  91)				int _new_range2 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range2 > _src_bytelen2)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view2->buffer = _buffer2;
HXDLIN(  91)				_view2->byteOffset = byte_offset;
HXDLIN(  91)				_view2->byteLength = byte_len;
HXDLIN(  91)				_view2->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem2) )));
HXDLIN(  91)				view = _view2;
            			}
            			break;
            			case (int)4: {
HXDLIN(  91)				::Array< unsigned char > _buffer3 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view3 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN(  91)				int _bytes_per_elem3 = _view3->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem3) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen3 = _buffer3->length;
HXDLIN(  91)				int _new_range3 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range3 > _src_bytelen3)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view3->buffer = _buffer3;
HXDLIN(  91)				_view3->byteOffset = byte_offset;
HXDLIN(  91)				_view3->byteLength = byte_len;
HXDLIN(  91)				_view3->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem3) )));
HXDLIN(  91)				view = _view3;
            			}
            			break;
            			case (int)5: {
HXDLIN(  91)				::Array< unsigned char > _buffer4 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view4 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  91)				int _bytes_per_elem4 = _view4->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem4) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen4 = _buffer4->length;
HXDLIN(  91)				int _new_range4 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range4 > _src_bytelen4)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view4->buffer = _buffer4;
HXDLIN(  91)				_view4->byteOffset = byte_offset;
HXDLIN(  91)				_view4->byteLength = byte_len;
HXDLIN(  91)				_view4->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem4) )));
HXDLIN(  91)				view = _view4;
            			}
            			break;
            			case (int)6: {
HXDLIN(  91)				::Array< unsigned char > _buffer5 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view5 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,6);
HXDLIN(  91)				int _bytes_per_elem5 = _view5->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem5) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen5 = _buffer5->length;
HXDLIN(  91)				int _new_range5 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range5 > _src_bytelen5)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view5->buffer = _buffer5;
HXDLIN(  91)				_view5->byteOffset = byte_offset;
HXDLIN(  91)				_view5->byteLength = byte_len;
HXDLIN(  91)				_view5->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem5) )));
HXDLIN(  91)				view = _view5;
            			}
            			break;
            			case (int)7: {
HXDLIN(  91)				::Array< unsigned char > _buffer6 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view6 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,7);
HXDLIN(  91)				int _bytes_per_elem6 = _view6->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem6) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen6 = _buffer6->length;
HXDLIN(  91)				int _new_range6 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range6 > _src_bytelen6)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view6->buffer = _buffer6;
HXDLIN(  91)				_view6->byteOffset = byte_offset;
HXDLIN(  91)				_view6->byteLength = byte_len;
HXDLIN(  91)				_view6->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem6) )));
HXDLIN(  91)				view = _view6;
            			}
            			break;
            			case (int)8: {
HXDLIN(  91)				::Array< unsigned char > _buffer7 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view7 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,8);
HXDLIN(  91)				int _bytes_per_elem7 = _view7->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem7) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen7 = _buffer7->length;
HXDLIN(  91)				int _new_range7 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range7 > _src_bytelen7)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view7->buffer = _buffer7;
HXDLIN(  91)				_view7->byteOffset = byte_offset;
HXDLIN(  91)				_view7->byteLength = byte_len;
HXDLIN(  91)				_view7->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem7) )));
HXDLIN(  91)				view = _view7;
            			}
            			break;
            			case (int)9: {
HXDLIN(  91)				::Array< unsigned char > _buffer8 = this1->buffer;
HXDLIN(  91)				 ::snow::api::buffers::ArrayBufferView _view8 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,9);
HXDLIN(  91)				int _bytes_per_elem8 = _view8->bytesPerElement;
HXDLIN(  91)				if ((byte_offset < 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            				}
HXDLIN(  91)				if ((hx::Mod(byte_offset,_bytes_per_elem8) != 0)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            				}
HXDLIN(  91)				int _src_bytelen8 = _buffer8->length;
HXDLIN(  91)				int _new_range8 = (byte_offset + byte_len);
HXDLIN(  91)				if ((_new_range8 > _src_bytelen8)) {
HXDLIN(  91)					HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            				}
HXDLIN(  91)				_view8->buffer = _buffer8;
HXDLIN(  91)				_view8->byteOffset = byte_offset;
HXDLIN(  91)				_view8->byteLength = byte_len;
HXDLIN(  91)				_view8->length = ::Std_obj::_hx_int((( (Float)(byte_len) ) / ( (Float)(_bytes_per_elem8) )));
HXDLIN(  91)				view = _view8;
            			}
            			break;
            		}
HXDLIN(  91)		return view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,subarray,return )

 ::snow::api::buffers::ArrayBufferView Uint8ClampedArray_Impl__obj::fromBytes( ::haxe::io::Bytes _bytes, ::Dynamic __o__byteOffset, ::Dynamic _byteLength){
 ::Dynamic _byteOffset = __o__byteOffset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_adfe02ae4d687249_94_fromBytes)
HXLINE(  95)		if (hx::IsNull( _byteLength )) {
HXLINE(  95)			_byteLength = _bytes->length;
            		}
HXLINE(  96)		::Array< unsigned char > _buffer = _bytes->b;
HXDLIN(  96)		int _byteOffset1 = ( (int)(_byteOffset) );
HXDLIN(  96)		int _byteLength1 = ( (int)(_byteLength) );
HXDLIN(  96)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,5);
HXDLIN(  96)		int _bytes_per_elem = _view->bytesPerElement;
HXDLIN(  96)		if ((_byteOffset1 < 0)) {
HXLINE(  96)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be positive (> 0)",07,9d,c2,39)));
            		}
HXDLIN(  96)		if ((hx::Mod(_byteOffset1,_bytes_per_elem) != 0)) {
HXLINE(  96)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: byte offset must be aligned with the bytes per element",e2,98,67,08)));
            		}
HXDLIN(  96)		int _src_bytelen = _buffer->length;
HXDLIN(  96)		int _new_range = (_byteOffset1 + _byteLength1);
HXDLIN(  96)		if ((_new_range > _src_bytelen)) {
HXLINE(  96)			HX_STACK_DO_THROW(::snow::api::buffers::TAError_obj::RangeError(HX_("fromBuffer: specified range would exceed the source buffer",98,6f,a0,be)));
            		}
HXDLIN(  96)		_view->buffer = _buffer;
HXDLIN(  96)		_view->byteOffset = _byteOffset1;
HXDLIN(  96)		_view->byteLength = _byteLength1;
HXDLIN(  96)		_view->length = ::Std_obj::_hx_int((( (Float)(_byteLength1) ) / ( (Float)(_bytes_per_elem) )));
HXDLIN(  96)		return _view;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Uint8ClampedArray_Impl__obj,fromBytes,return )

 ::haxe::io::Bytes Uint8ClampedArray_Impl__obj::toBytes( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_adfe02ae4d687249_100_toBytes)
HXDLIN( 100)		return ::haxe::io::Bytes_obj::ofData(this1->buffer);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toBytes,return )

int Uint8ClampedArray_Impl__obj::get_length( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_adfe02ae4d687249_105_get_length)
HXDLIN( 105)		return this1->length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,get_length,return )

::String Uint8ClampedArray_Impl__obj::toString( ::snow::api::buffers::ArrayBufferView this1){
            	HX_STACKFRAME(&_hx_pos_adfe02ae4d687249_120_toString)
HXDLIN( 120)		if (hx::IsNull( this1 )) {
HXDLIN( 120)			return null();
            		}
            		else {
HXDLIN( 120)			return ((((HX_("Uint8ClampedArray [byteLength:",74,68,3d,9d) + this1->byteLength) + HX_(", length:",a0,04,67,ef)) + this1->length) + HX_("]",5d,00,00,00));
            		}
HXDLIN( 120)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Uint8ClampedArray_Impl__obj,toString,return )


Uint8ClampedArray_Impl__obj::Uint8ClampedArray_Impl__obj()
{
}

bool Uint8ClampedArray_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *Uint8ClampedArray_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo Uint8ClampedArray_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,HX_("BYTES_PER_ELEMENT",a6,04,1d,cc)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Uint8ClampedArray_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Uint8ClampedArray_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Uint8ClampedArray_Impl__obj::BYTES_PER_ELEMENT,"BYTES_PER_ELEMENT");
};

#endif

hx::Class Uint8ClampedArray_Impl__obj::__mClass;

static ::String Uint8ClampedArray_Impl__obj_sStaticFields[] = {
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

void Uint8ClampedArray_Impl__obj::__register()
{
	Uint8ClampedArray_Impl__obj _hx_dummy;
	Uint8ClampedArray_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.api.buffers._Uint8ClampedArray.Uint8ClampedArray_Impl_",a7,ec,8a,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Uint8ClampedArray_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Uint8ClampedArray_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Uint8ClampedArray_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Uint8ClampedArray_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Uint8ClampedArray_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Uint8ClampedArray_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Uint8ClampedArray_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Uint8ClampedArray_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_adfe02ae4d687249_68_boot)
HXDLIN(  68)		BYTES_PER_ELEMENT = 1;
            	}
}

} // end namespace snow
} // end namespace api
} // end namespace buffers
} // end namespace _Uint8ClampedArray