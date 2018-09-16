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

#if !defined(GLEW_STATIC) && !defined(NO_GLEW_STATIC)
#define GLEW_STATIC 
#endif

#if !defined(LINC_SDL) && !defined(NO_LINC_SDL)
#define LINC_SDL 
#endif

#if !defined(HAVE_LIBC) && !defined(NO_HAVE_LIBC)
#define HAVE_LIBC 
#endif

#if !defined(NATIVE_TOOLKIT_SDL) && !defined(NO_NATIVE_TOOLKIT_SDL)
#define NATIVE_TOOLKIT_SDL 
#endif

#if !defined(IPHONE) && !defined(NO_IPHONE)
#define IPHONE IPHONE
#endif

#if !defined(IPHONESIM) && !defined(NO_IPHONESIM)
#define IPHONESIM IPHONESIM
#endif

#if !defined(HXCPP_DEBUG) && !defined(NO_HXCPP_DEBUG)
#define HXCPP_DEBUG 
#endif

#if !defined(HXCPP_M64) && !defined(NO_HXCPP_M64)
#define HXCPP_M64 
#endif

#if !defined(HXCPP_VISIT_ALLOCS) && !defined(NO_HXCPP_VISIT_ALLOCS)
#define HXCPP_VISIT_ALLOCS 
#endif

#if !defined(HXCPP_API_LEVEL) && !defined(NO_HXCPP_API_LEVEL)
#define HXCPP_API_LEVEL 332
#endif

#include <hxcpp.h>

#endif
