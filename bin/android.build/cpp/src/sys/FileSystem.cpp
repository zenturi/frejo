// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4ebd30807fe7ed8d_80_deleteFile,"sys.FileSystem","deleteFile",0x4bd48509,"sys.FileSystem.deleteFile","/usr/local/lib/haxe/std/cpp/_std/sys/FileSystem.hx",80,0x1f6d7d6f)
namespace sys{

void FileSystem_obj::__construct() { }

Dynamic FileSystem_obj::__CreateEmpty() { return new FileSystem_obj; }

void *FileSystem_obj::_hx_vtable = 0;

Dynamic FileSystem_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FileSystem_obj > _hx_result = new FileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x284891f8;
}

void FileSystem_obj::deleteFile(::String path){
            	HX_STACKFRAME(&_hx_pos_4ebd30807fe7ed8d_80_deleteFile)
HXDLIN(  80)		_hx_std_file_delete(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,deleteFile,(void))


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"deleteFile") ) { outValue = deleteFile_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *FileSystem_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FileSystem_obj_sStaticStorageInfo = 0;
#endif

hx::Class FileSystem_obj::__mClass;

static ::String FileSystem_obj_sStaticFields[] = {
	HX_("deleteFile",47,ac,08,97),
	::String(null())
};

void FileSystem_obj::__register()
{
	FileSystem_obj _hx_dummy;
	FileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("sys.FileSystem",6c,2c,e5,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FileSystem_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileSystem_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
