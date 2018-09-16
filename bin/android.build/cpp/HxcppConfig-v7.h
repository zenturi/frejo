#ifndef HXCPP_CONFIG_INCLUDED
#define HXCPP_CONFIG_INCLUDED

#if !defined(NANOVG_GLES2_IMPLEMENTATION) && !defined(NO_NANOVG_GLES2_IMPLEMENTATION)
#define NANOVG_GLES2_IMPLEMENTATION 
#endif

#if !defined(NVG_HAS_STB_IMAGE_IMPLEMENTATION) && !defined(NO_NVG_HAS_STB_IMAGE_IMPLEMENTATION)
#define NVG_HAS_STB_IMAGE_IMPLEMENTATION 
#endif

#if !defined(NATIVE_TOOLKIT_OGG) && !defined(NO_NATIVE_TOOLKIT_OGG)
#define NATIVE_TOOLKIT_OGG 
#endif

#if !defined(NATIVE_TOOLKIT_VORBIS) && !defined(NO_NATIVE_TOOLKIT_VORBIS)
#define NATIVE_TOOLKIT_VORBIS 
#endif

#if !defined(NATIVE_TOOLKIT_THEORA) && !defined(NO_NATIVE_TOOLKIT_THEORA)
#define NATIVE_TOOLKIT_THEORA 
#endif

#if !defined(LINC_OPENAL) && !defined(NO_LINC_OPENAL)
#define LINC_OPENAL 
#endif

#if !defined(LINC_SDL) && !defined(NO_LINC_SDL)
#define LINC_SDL 
#endif

#if !defined(LINC_SDL_WITH_SDL_MAIN) && !defined(NO_LINC_SDL_WITH_SDL_MAIN)
#define LINC_SDL_WITH_SDL_MAIN 
#endif

#if !defined(HAVE_LIBC) && !defined(NO_HAVE_LIBC)
#define HAVE_LIBC 
#endif

#if !defined(NATIVE_TOOLKIT_SDL) && !defined(NO_NATIVE_TOOLKIT_SDL)
#define NATIVE_TOOLKIT_SDL 
#endif

#if !defined(HXCPP_ARMV7) && !defined(NO_HXCPP_ARMV7)
#define HXCPP_ARMV7 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 332
#endif

#if !defined(_LINUX_STDDEF_H ) && !defined(NO__LINUX_STDDEF_H )
#define _LINUX_STDDEF_H  
#endif

#if !defined(HXCPP_CPP11) && !defined(NO_HXCPP_CPP11)
#define HXCPP_CPP11 
#endif

#if !defined(HXCPP_ARMV7) && !defined(NO_HXCPP_ARMV7)
#define HXCPP_ARMV7 
#endif

#if !defined(ANDROID) && !defined(NO_ANDROID)
#define ANDROID ANDROID
#endif

#if !defined(HX_ANDROID) && !defined(NO_HX_ANDROID)
#define HX_ANDROID 
#endif

#if !defined(HXCPP_ANDROID_PLATFORM) && !defined(NO_HXCPP_ANDROID_PLATFORM)
#define HXCPP_ANDROID_PLATFORM 21
#endif

#if !defined(NDEBUG) && !defined(NO_NDEBUG)
#define NDEBUG 
#endif

#include <hxcpp.h>

#endif
