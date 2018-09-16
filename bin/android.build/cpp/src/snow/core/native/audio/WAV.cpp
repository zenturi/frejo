// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_snow_Snow
#include <snow/Snow.h>
#endif
#ifndef INCLUDED_snow_api_buffers_ArrayBufferView
#include <snow/api/buffers/ArrayBufferView.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_AudioDataWAV
#include <snow/core/native/audio/AudioDataWAV.h>
#endif
#ifndef INCLUDED_snow_core_native_audio_WAV
#include <snow/core/native/audio/WAV.h>
#endif
#ifndef INCLUDED_snow_core_native_io_IO
#include <snow/core/native/io/IO.h>
#endif
#ifndef INCLUDED_snow_modules_interfaces_IO
#include <snow/modules/interfaces/IO.h>
#endif
#ifndef INCLUDED_snow_modules_sdl_IO
#include <snow/modules/sdl/IO.h>
#endif
#ifndef INCLUDED_snow_systems_io_IO
#include <snow/systems/io/IO.h>
#endif
#ifndef INCLUDED_snow_types_AudioData
#include <snow/types/AudioData.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_92_from_file,"snow.core.native.audio.WAV","from_file",0x45301fa4,"snow.core.native.audio.WAV.from_file","snow/core/native/audio/AudioDataWAV.hx",92,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_100_from_bytes,"snow.core.native.audio.WAV","from_bytes",0x01eaba43,"snow.core.native.audio.WAV.from_bytes","snow/core/native/audio/AudioDataWAV.hx",100,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_115_from_file_handle,"snow.core.native.audio.WAV","from_file_handle",0xa7677223,"snow.core.native.audio.WAV.from_file_handle","snow/core/native/audio/AudioDataWAV.hx",115,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_197_read_chunk,"snow.core.native.audio.WAV","read_chunk",0x404d5731,"snow.core.native.audio.WAV.read_chunk","snow/core/native/audio/AudioDataWAV.hx",197,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_110_boot,"snow.core.native.audio.WAV","boot",0x3973ae1f,"snow.core.native.audio.WAV.boot","snow/core/native/audio/AudioDataWAV.hx",110,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_111_boot,"snow.core.native.audio.WAV","boot",0x3973ae1f,"snow.core.native.audio.WAV.boot","snow/core/native/audio/AudioDataWAV.hx",111,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_112_boot,"snow.core.native.audio.WAV","boot",0x3973ae1f,"snow.core.native.audio.WAV.boot","snow/core/native/audio/AudioDataWAV.hx",112,0xe0c91f25)
HX_LOCAL_STACK_FRAME(_hx_pos_c7870419aa56933c_113_boot,"snow.core.native.audio.WAV","boot",0x3973ae1f,"snow.core.native.audio.WAV.boot","snow/core/native/audio/AudioDataWAV.hx",113,0xe0c91f25)
namespace snow{
namespace core{
namespace native{
namespace audio{

void WAV_obj::__construct() { }

Dynamic WAV_obj::__CreateEmpty() { return new WAV_obj; }

void *WAV_obj::_hx_vtable = 0;

Dynamic WAV_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WAV_obj > _hx_result = new WAV_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WAV_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2346cb2f;
}

 ::snow::types::AudioData WAV_obj::from_file( ::snow::Snow app,::String _path,bool _is_stream){
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_92_from_file)
HXLINE(  94)		::cpp::Pointer<  SDL_RWops > _handle = app->io->module->file_handle(_path,HX_("rb",b0,63,00,00));
HXLINE(  96)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN(  96)		return ::snow::core::native::audio::WAV_obj::from_file_handle(app,tmp,_path,_is_stream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,from_file,return )

 ::snow::types::AudioData WAV_obj::from_bytes( ::snow::Snow app,::String _path, ::snow::api::buffers::ArrayBufferView _bytes){
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_100_from_bytes)
HXLINE( 102)		::cpp::Pointer<  SDL_RWops > _handle = app->io->module->file_handle_from_mem(_bytes,_bytes->length);
HXLINE( 104)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN( 104)		return ::snow::core::native::audio::WAV_obj::from_file_handle(app,tmp,_path,false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,from_bytes,return )

::String WAV_obj::ID_DATA;

::String WAV_obj::ID_FMT;

::String WAV_obj::ID_WAVE;

::String WAV_obj::ID_RIFF;

 ::snow::types::AudioData WAV_obj::from_file_handle( ::snow::Snow app,::cpp::Pointer<  SDL_RWops > _handle,::String _path,bool _is_stream){
            	HX_GC_STACKFRAME(&_hx_pos_c7870419aa56933c_115_from_file_handle)
HXLINE( 117)		if (hx::IsNull( _handle )) {
HXLINE( 117)			return null();
            		}
HXLINE( 119)		int _length = 0;
HXLINE( 120)		 ::snow::core::native::audio::AudioDataWAV _info =  ::snow::core::native::audio::AudioDataWAV_obj::__alloc( HX_CTX ,app,_handle,0, ::Dynamic(hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("samples",09,c5,c9,83),null())
            			->setFixed(1,HX_("length",e6,94,07,9f),_length)
            			->setFixed(2,HX_("is_stream",75,7b,51,b6),_is_stream)
            			->setFixed(3,HX_("format",37,8f,8e,fd),3)
            			->setFixed(4,HX_("id",db,5b,00,00),_path)
            			->setFixed(5,HX_("rate",e0,52,a4,4b),44100)
            			->setFixed(6,HX_("channels",50,aa,ee,6a),1)));
HXLINE( 130)		int _elements = 12;
HXDLIN( 130)		if ((_elements < 0)) {
HXLINE( 130)			_elements = 0;
            		}
HXDLIN( 130)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN( 130)		int _bytelen = (_elements * _view->bytesPerElement);
HXDLIN( 130)		_view->byteOffset = 0;
HXDLIN( 130)		_view->byteLength = _bytelen;
HXDLIN( 130)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN( 130)		if ((_bytelen > 0)) {
HXLINE( 130)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN( 130)		_view->buffer = this1;
HXDLIN( 130)		_view->length = _elements;
HXDLIN( 130)		 ::snow::api::buffers::ArrayBufferView this2 = _view;
HXDLIN( 130)		 ::snow::api::buffers::ArrayBufferView _header = this2;
HXLINE( 131)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN( 131)		app->io->module->file_read(tmp,_header,12,1);
HXLINE( 133)		 ::haxe::io::Bytes _bytes = ::haxe::io::Bytes_obj::ofData(_header->buffer);
HXLINE( 134)		::String _file_id = _bytes->getString(0,4);
HXLINE( 135)		::String _file_format = _bytes->getString(8,4);
HXLINE( 137)		_header = null();
HXLINE( 138)		_bytes = null();
HXLINE( 140)		if ((_file_id != ::snow::core::native::audio::WAV_obj::ID_RIFF)) {
HXLINE( 141)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 141)			_hx_tmp((HX_("i / audiodatawav / ",1d,22,d3,46) + ((((HX_("assets / audio / wav / file `",2a,1d,ef,ec) + _path) + HX_("` has invalid header (id `",3f,47,67,b7)) + _file_id) + HX_("`, expected RIFF)",be,2d,7d,07))),hx::SourceInfo(HX_("snow/core/native/audio/AudioDataWAV.hx",25,1f,c9,e0),141,HX_("snow.core.native.audio.WAV",a1,7d,e6,5d),HX_("from_file_handle",b6,98,c1,23)));
HXLINE( 142)			return null();
            		}
HXLINE( 145)		if ((_file_format != ::snow::core::native::audio::WAV_obj::ID_WAVE)) {
HXLINE( 146)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN( 146)			_hx_tmp1((HX_("i / audiodatawav / ",1d,22,d3,46) + ((((HX_("assets / audio / wav / file `",2a,1d,ef,ec) + _path) + HX_("` has invalid header (id `",3f,47,67,b7)) + _file_format) + HX_("`, expected WAVE)",7c,82,40,e3))),hx::SourceInfo(HX_("snow/core/native/audio/AudioDataWAV.hx",25,1f,c9,e0),146,HX_("snow.core.native.audio.WAV",a1,7d,e6,5d),HX_("from_file_handle",b6,98,c1,23)));
HXLINE( 147)			return null();
            		}
HXLINE( 150)		bool _found_data = false;
HXLINE( 151)		bool _found_format = false;
HXLINE( 152)		int _limit = 0;
HXLINE( 154)		while(true){
HXLINE( 154)			bool _hx_tmp2;
HXDLIN( 154)			if (!(!(_found_format))) {
HXLINE( 154)				_hx_tmp2 = !(_found_data);
            			}
            			else {
HXLINE( 154)				_hx_tmp2 = true;
            			}
HXDLIN( 154)			if (!(_hx_tmp2)) {
HXLINE( 154)				goto _hx_goto_2;
            			}
HXLINE( 156)			::cpp::Pointer<  SDL_RWops > tmp1 = _handle;
HXDLIN( 156)			 ::Dynamic _chunk = ::snow::core::native::audio::WAV_obj::read_chunk(app,tmp1,_is_stream);
HXLINE( 158)			if (hx::IsEq( _chunk->__Field(HX_("id",db,5b,00,00),hx::paccDynamic),::snow::core::native::audio::WAV_obj::ID_FMT )) {
HXLINE( 159)				_found_format = true;
HXLINE( 169)				 ::haxe::io::Bytes _format = ::haxe::io::Bytes_obj::ofData(( ( ::snow::api::buffers::ArrayBufferView)(_chunk->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) )->buffer);
HXLINE( 170)				int _format1 = ( (int)(_format->b->__get(8)) );
HXDLIN( 170)				int _bitrate = (_format1 | (( (int)(_format->b->__get(9)) ) << 8));
HXDLIN( 170)				int _bitrate1 = (_bitrate | (( (int)(_format->b->__get(10)) ) << 16));
HXDLIN( 170)				int _bitrate2 = (_bitrate1 | (( (int)(_format->b->__get(11)) ) << 24));
HXLINE( 171)				int _format2 = ( (int)(_format->b->__get(14)) );
HXDLIN( 171)				_info->bits_per_sample = (_format2 | (( (int)(_format->b->__get(15)) ) << 8));
HXLINE( 172)				int _format3 = ( (int)(_format->b->__get(2)) );
HXDLIN( 172)				_info->channels = (_format3 | (( (int)(_format->b->__get(3)) ) << 8));
HXLINE( 173)				int _format4 = ( (int)(_format->b->__get(4)) );
HXDLIN( 173)				int _hx_tmp3 = (_format4 | (( (int)(_format->b->__get(5)) ) << 8));
HXDLIN( 173)				int _hx_tmp4 = (_hx_tmp3 | (( (int)(_format->b->__get(6)) ) << 16));
HXDLIN( 173)				_info->rate = (_hx_tmp4 | (( (int)(_format->b->__get(7)) ) << 24));
HXLINE( 174)				_format = null();
            			}
HXLINE( 177)			if (hx::IsEq( _chunk->__Field(HX_("id",db,5b,00,00),hx::paccDynamic),::snow::core::native::audio::WAV_obj::ID_DATA )) {
HXLINE( 178)				_found_data = true;
HXLINE( 179)				_info->samples = ( ( ::snow::api::buffers::ArrayBufferView)(_chunk->__Field(HX_("data",2a,56,63,42),hx::paccDynamic)) );
HXLINE( 180)				_info->length = ( (int)(_chunk->__Field(HX_("data_length",9b,c9,18,82),hx::paccDynamic)) );
HXLINE( 181)				_info->data_offset = ( (int)(_chunk->__Field(HX_("offset",93,97,3f,60),hx::paccDynamic)) );
            			}
HXLINE( 184)			_chunk->__SetField(HX_("data",2a,56,63,42),null(),hx::paccDynamic);
HXLINE( 185)			_chunk = null();
HXLINE( 187)			_limit = (_limit + 1);
HXLINE( 189)			if ((_limit >= 32)) {
HXLINE( 189)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 193)		return _info;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(WAV_obj,from_file_handle,return )

 ::Dynamic WAV_obj::read_chunk( ::snow::Snow app,::cpp::Pointer<  SDL_RWops > _handle,bool _is_stream){
            	HX_GC_STACKFRAME(&_hx_pos_c7870419aa56933c_197_read_chunk)
HXLINE( 199)		int _header_size = 8;
HXLINE( 200)		int _elements = _header_size;
HXDLIN( 200)		if ((_elements < 0)) {
HXLINE( 200)			_elements = 0;
            		}
HXDLIN( 200)		 ::snow::api::buffers::ArrayBufferView _view =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN( 200)		int _bytelen = (_elements * _view->bytesPerElement);
HXDLIN( 200)		_view->byteOffset = 0;
HXDLIN( 200)		_view->byteLength = _bytelen;
HXDLIN( 200)		::Array< unsigned char > this1 = ::Array_obj< unsigned char >::__new();
HXDLIN( 200)		if ((_bytelen > 0)) {
HXLINE( 200)			this1[(_bytelen - 1)] = ( (unsigned char)(0) );
            		}
HXDLIN( 200)		_view->buffer = this1;
HXDLIN( 200)		_view->length = _elements;
HXDLIN( 200)		 ::snow::api::buffers::ArrayBufferView this2 = _view;
HXDLIN( 200)		 ::snow::api::buffers::ArrayBufferView _header = this2;
HXLINE( 202)		::cpp::Pointer<  SDL_RWops > tmp = _handle;
HXDLIN( 202)		app->io->module->file_read(tmp,_header,_header_size,1);
HXLINE( 204)		 ::haxe::io::Bytes _header_bytes = ::haxe::io::Bytes_obj::ofData(_header->buffer);
HXLINE( 205)		::String _chunk_id = _header_bytes->getString(0,4);
HXLINE( 206)		int _header_bytes1 = ( (int)(_header_bytes->b->__get(4)) );
HXDLIN( 206)		int _chunk_size = (_header_bytes1 | (( (int)(_header_bytes->b->__get(5)) ) << 8));
HXDLIN( 206)		int _chunk_size1 = (_chunk_size | (( (int)(_header_bytes->b->__get(6)) ) << 16));
HXDLIN( 206)		int _chunk_size2 = (_chunk_size1 | (( (int)(_header_bytes->b->__get(7)) ) << 24));
HXLINE( 208)		_header = null();
HXLINE( 209)		_header_bytes = null();
HXLINE( 211)		 ::snow::api::buffers::ArrayBufferView _data = null();
HXLINE( 212)		::cpp::Pointer<  SDL_RWops > tmp1 = _handle;
HXDLIN( 212)		int _pos = app->io->module->file_tell(tmp1);
HXLINE( 216)		bool _is_data = (_chunk_id == ::snow::core::native::audio::WAV_obj::ID_DATA);
HXLINE( 217)		bool _is_fmt = (_chunk_id == ::snow::core::native::audio::WAV_obj::ID_FMT);
HXLINE( 218)		bool _should_read;
HXDLIN( 218)		if (!(_is_data)) {
HXLINE( 218)			_should_read = _is_fmt;
            		}
            		else {
HXLINE( 218)			_should_read = true;
            		}
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		if (_is_data) {
HXLINE( 221)			_hx_tmp = _is_stream;
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 222)			_should_read = false;
            		}
HXLINE( 225)		if (_should_read) {
HXLINE( 226)			int _elements1 = _chunk_size2;
HXDLIN( 226)			if ((_elements1 < 0)) {
HXLINE( 226)				_elements1 = 0;
            			}
HXDLIN( 226)			 ::snow::api::buffers::ArrayBufferView _view1 =  ::snow::api::buffers::ArrayBufferView_obj::__alloc( HX_CTX ,4);
HXDLIN( 226)			int _bytelen1 = (_elements1 * _view1->bytesPerElement);
HXDLIN( 226)			_view1->byteOffset = 0;
HXDLIN( 226)			_view1->byteLength = _bytelen1;
HXDLIN( 226)			::Array< unsigned char > this3 = ::Array_obj< unsigned char >::__new();
HXDLIN( 226)			if ((_bytelen1 > 0)) {
HXLINE( 226)				this3[(_bytelen1 - 1)] = ( (unsigned char)(0) );
            			}
HXDLIN( 226)			_view1->buffer = this3;
HXDLIN( 226)			_view1->length = _elements1;
HXDLIN( 226)			 ::snow::api::buffers::ArrayBufferView this4 = _view1;
HXDLIN( 226)			_data = this4;
HXLINE( 227)			::cpp::Pointer<  SDL_RWops > tmp2 = _handle;
HXDLIN( 227)			app->io->module->file_read(tmp2,_data,_chunk_size2,1);
            		}
            		else {
HXLINE( 229)			::cpp::Pointer<  SDL_RWops > tmp3 = _handle;
HXDLIN( 229)			 ::snow::modules::sdl::IO app1 = app->io->module;
HXDLIN( 229)			app1->file_seek(tmp3,((_pos + _header_size) + _chunk_size2),0);
            		}
HXLINE( 232)		return  ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("data_length",9b,c9,18,82),_chunk_size2)
            			->setFixed(1,HX_("id",db,5b,00,00),_chunk_id)
            			->setFixed(2,HX_("data",2a,56,63,42),_data)
            			->setFixed(3,HX_("offset",93,97,3f,60),_pos));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(WAV_obj,read_chunk,return )


WAV_obj::WAV_obj()
{
}

bool WAV_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ID_FMT") ) { outValue = ( ID_FMT ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ID_DATA") ) { outValue = ( ID_DATA ); return true; }
		if (HX_FIELD_EQ(inName,"ID_WAVE") ) { outValue = ( ID_WAVE ); return true; }
		if (HX_FIELD_EQ(inName,"ID_RIFF") ) { outValue = ( ID_RIFF ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"from_file") ) { outValue = from_file_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"from_bytes") ) { outValue = from_bytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"read_chunk") ) { outValue = read_chunk_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"from_file_handle") ) { outValue = from_file_handle_dyn(); return true; }
	}
	return false;
}

bool WAV_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ID_FMT") ) { ID_FMT=ioValue.Cast< ::String >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ID_DATA") ) { ID_DATA=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ID_WAVE") ) { ID_WAVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ID_RIFF") ) { ID_RIFF=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *WAV_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WAV_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &WAV_obj::ID_DATA,HX_("ID_DATA",4e,a0,18,ec)},
	{hx::fsString,(void *) &WAV_obj::ID_FMT,HX_("ID_FMT",89,6f,4d,96)},
	{hx::fsString,(void *) &WAV_obj::ID_WAVE,HX_("ID_WAVE",dd,af,a7,f8)},
	{hx::fsString,(void *) &WAV_obj::ID_RIFF,HX_("ID_RIFF",db,a2,5f,f5)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void WAV_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WAV_obj::ID_DATA,"ID_DATA");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_FMT,"ID_FMT");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_WAVE,"ID_WAVE");
	HX_MARK_MEMBER_NAME(WAV_obj::ID_RIFF,"ID_RIFF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WAV_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_DATA,"ID_DATA");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_FMT,"ID_FMT");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_WAVE,"ID_WAVE");
	HX_VISIT_MEMBER_NAME(WAV_obj::ID_RIFF,"ID_RIFF");
};

#endif

hx::Class WAV_obj::__mClass;

static ::String WAV_obj_sStaticFields[] = {
	HX_("from_file",b1,64,28,18),
	HX_("from_bytes",96,e0,2e,c8),
	HX_("ID_DATA",4e,a0,18,ec),
	HX_("ID_FMT",89,6f,4d,96),
	HX_("ID_WAVE",dd,af,a7,f8),
	HX_("ID_RIFF",db,a2,5f,f5),
	HX_("from_file_handle",b6,98,c1,23),
	HX_("read_chunk",84,7d,91,06),
	::String(null())
};

void WAV_obj::__register()
{
	WAV_obj _hx_dummy;
	WAV_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("snow.core.native.audio.WAV",a1,7d,e6,5d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WAV_obj::__GetStatic;
	__mClass->mSetStaticField = &WAV_obj::__SetStatic;
	__mClass->mMarkFunc = WAV_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WAV_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< WAV_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WAV_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WAV_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WAV_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WAV_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_110_boot)
HXDLIN( 110)		ID_DATA = HX_("data",2a,56,63,42);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_111_boot)
HXDLIN( 111)		ID_FMT = HX_("fmt ",33,de,be,43);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_112_boot)
HXDLIN( 112)		ID_WAVE = HX_("WAVE",b9,2d,b3,39);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c7870419aa56933c_113_boot)
HXDLIN( 113)		ID_RIFF = HX_("RIFF",b7,20,6b,36);
            	}
}

} // end namespace snow
} // end namespace core
} // end namespace native
} // end namespace audio
