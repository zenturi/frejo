// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#ifndef INCLUDED_frejo_core_VG
#define INCLUDED_frejo_core_VG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ab47325cc4883df2
#define INCLUDED_ab47325cc4883df2
#include "linc_nanovg.h"
#endif
HX_DECLARE_CLASS2(frejo,core,VG)

namespace frejo{
namespace core{


class HXCPP_CLASS_ATTRIBUTES VG_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VG_obj OBJ_;
		VG_obj();

	public:
		enum { _hx_ClassId = 0x10a229ae };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="frejo.core.VG")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"frejo.core.VG"); }
		static hx::ObjectPtr< VG_obj > __new();
		static hx::ObjectPtr< VG_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VG_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VG",31,4b,00,00); }

		static  ::frejo::core::VG vg;
		static  ::frejo::core::VG getInstance();
		static ::Dynamic getInstance_dyn();

		::cpp::Pointer<  NVGcontext > context;
		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		void beginFrame(int windowWidth,int windowHeight,Float devicePixelRatio);
		::Dynamic beginFrame_dyn();

		void endFrame();
		::Dynamic endFrame_dyn();

		 NVGcolor rgb(unsigned char r,unsigned char g,unsigned char b);

		 NVGcolor rgbf(Float r,Float g,Float b);

		 NVGcolor rgba(unsigned char r,unsigned char g,unsigned char b,unsigned char a);

		 NVGcolor rgbaf(Float r,Float g,Float b,Float a);

		 NVGcolor lerpRgba( NVGcolor c0, NVGcolor c1,Float u);

		 NVGcolor transRgba( NVGcolor c0,unsigned char a);

		 NVGcolor transRgbaf( NVGcolor c0,Float a);

		 NVGcolor hsl(Float h,Float s,Float l);

		 NVGcolor hsla(Float h,Float s,Float l,unsigned char a);

		void save();
		::Dynamic save_dyn();

		void restore();
		::Dynamic restore_dyn();

		void reset();
		::Dynamic reset_dyn();

		void strokeColor( NVGcolor color);

		void strokePaint( NVGpaint paint);

		void fillColor( NVGcolor color);

		void fillPaint( NVGpaint paint);

		void miterLimit(Float limit);
		::Dynamic miterLimit_dyn();

		void strokeWidth(Float size);
		::Dynamic strokeWidth_dyn();

		void lineCap(int cap);
		::Dynamic lineCap_dyn();

		void lineJoin(int join);
		::Dynamic lineJoin_dyn();

		void globalAlpha(Float alpha);
		::Dynamic globalAlpha_dyn();

		void resetTransform();
		::Dynamic resetTransform_dyn();

		void transform(Float a,Float b,Float c,Float d,Float e,Float f);
		::Dynamic transform_dyn();

		void translate(Float x,Float y);
		::Dynamic translate_dyn();

		void rotate(Float angle);
		::Dynamic rotate_dyn();

		void skewX(Float angle);
		::Dynamic skewX_dyn();

		void skewY(Float angle);
		::Dynamic skewY_dyn();

		void scale(Float x,Float y);
		::Dynamic scale_dyn();

		void currentTransform(::cpp::Pointer< float > xForm);
		::Dynamic currentTransform_dyn();

		void transformIdentity(::cpp::Pointer< float > dst);
		::Dynamic transformIdentity_dyn();

		void transformTranslate(::cpp::Pointer< float > dst,Float tx,Float ty);
		::Dynamic transformTranslate_dyn();

		void transformScale(::cpp::Pointer< float > dst,Float sx,Float sy);
		::Dynamic transformScale_dyn();

		void transformRotate(::cpp::Pointer< float > dst,Float angle);
		::Dynamic transformRotate_dyn();

		void transformSkewX(::cpp::Pointer< float > dst,Float angle);
		::Dynamic transformSkewX_dyn();

		void transformSkewY(::cpp::Pointer< float > dst,Float angle);
		::Dynamic transformSkewY_dyn();

		void transformMultiply(::cpp::Pointer< float > dst,::cpp::Pointer< float > src);
		::Dynamic transformMultiply_dyn();

		void transformPremultiply(::cpp::Pointer< float > dst,::cpp::Pointer< float > src);
		::Dynamic transformPremultiply_dyn();

		void transformInverse(::cpp::Pointer< float > dst,::cpp::Pointer< float > src);
		::Dynamic transformInverse_dyn();

		void transformPoint(::cpp::Pointer< float > dstx,::cpp::Pointer< float > dsty,::cpp::Pointer< float > xform,Float srcx,Float srcy);
		::Dynamic transformPoint_dyn();

		Float degToRad(Float deg);
		::Dynamic degToRad_dyn();

		Float radToDeg(Float rad);
		::Dynamic radToDeg_dyn();

		int createImage(::String filename,int imageFlags);
		::Dynamic createImage_dyn();

		int createImageMem(int imageFlags,::cpp::Pointer< unsigned char > data,int ndata);
		::Dynamic createImageMem_dyn();

		int createImageRGBA(int w,int h,int imageFlags,::cpp::Pointer< unsigned char > data);
		::Dynamic createImageRGBA_dyn();

		void updateImage(int image,::cpp::Pointer< unsigned char > data);
		::Dynamic updateImage_dyn();

		void imageSize(int image,::cpp::Pointer< int > w,::cpp::Pointer< int > h);
		::Dynamic imageSize_dyn();

		void deleteImage(int image);
		::Dynamic deleteImage_dyn();

		 NVGpaint linearGradient(Float sx,Float sy,Float ex,Float ey, NVGcolor icol, NVGcolor ocol);

		 NVGpaint boxGradient(Float x,Float y,Float w,Float h,Float r,Float f, NVGcolor icol, NVGcolor ocol);

		 NVGpaint radialGradient(Float cx,Float cy,Float inr,Float outr, NVGcolor icol, NVGcolor ocol);

		 NVGpaint imagePattern(Float ox,Float oy,Float ex,Float ey,Float angle,int image,Float alpha);

		void scissor(Float x,Float y,Float w,Float h);
		::Dynamic scissor_dyn();

		void intersectScissor(Float x,Float y,Float w,Float h);
		::Dynamic intersectScissor_dyn();

		void resetScissor();
		::Dynamic resetScissor_dyn();

		void beginPath();
		::Dynamic beginPath_dyn();

		void moveTo(Float x,Float y);
		::Dynamic moveTo_dyn();

		void lineTo(Float x,Float y);
		::Dynamic lineTo_dyn();

		void bezierTo(Float c1x,Float c1y,Float c2x,Float c2y,Float x,Float y);
		::Dynamic bezierTo_dyn();

		void arcTo(Float x1,Float y1,Float x2,Float y2,Float radius);
		::Dynamic arcTo_dyn();

		void closePath();
		::Dynamic closePath_dyn();

		void pathWinding(int dir);
		::Dynamic pathWinding_dyn();

		void arc(Float cx,Float cy,Float r,Float a0,Float a1,int dir);
		::Dynamic arc_dyn();

		void rect(Float x,Float y,Float w,Float h);
		::Dynamic rect_dyn();

		void roundedRect(Float x,Float y,Float w,Float h,Float r);
		::Dynamic roundedRect_dyn();

		void ellipse(Float cx,Float cy,Float rx,Float ry);
		::Dynamic ellipse_dyn();

		void circle(Float cx,Float cy,Float r);
		::Dynamic circle_dyn();

		void fill();
		::Dynamic fill_dyn();

		void stroke();
		::Dynamic stroke_dyn();

		int createFont(::String name,::String filename);
		::Dynamic createFont_dyn();

		int createFontMem(::String name,::cpp::Pointer< unsigned char > data,int ndata,int freeData);
		::Dynamic createFontMem_dyn();

		int findFont(::String name);
		::Dynamic findFont_dyn();

		void fontSize(Float size);
		::Dynamic fontSize_dyn();

		void fontBlur(Float blur);
		::Dynamic fontBlur_dyn();

		void textLetterSpacing(Float spacing);
		::Dynamic textLetterSpacing_dyn();

		void textLineHeight(Float lineHeight);
		::Dynamic textLineHeight_dyn();

		void textAlign(int align);
		::Dynamic textAlign_dyn();

		void fontFaceId(int font);
		::Dynamic fontFaceId_dyn();

		void fontFace(::String font);
		::Dynamic fontFace_dyn();

		Float text(Float x,Float y,::String string,::String end);
		::Dynamic text_dyn();

		void textBox(Float x,Float y,Float breakRowWidth,::String string,::String end);
		::Dynamic textBox_dyn();

		Float textBounds(Float x,Float y,::String string,::String end,::cpp::Pointer< float > bounds);
		::Dynamic textBounds_dyn();

		void textBoxBounds(Float x,Float y,Float breakRowWidth,::String string,::String end,::cpp::Pointer< float > bounds);
		::Dynamic textBoxBounds_dyn();

		int textGlyphPositions(Float x,Float y,::String string,::String end,::cpp::Pointer<  NVGglyphPosition > positions,int maxPositions);
		::Dynamic textGlyphPositions_dyn();

		void textMetrics(::cpp::Pointer< float > ascender,::cpp::Pointer< float > descender,::cpp::Pointer< float > lineh);
		::Dynamic textMetrics_dyn();

		int textBreakLines(::String string,::String end,Float breakRowWidth,::cpp::Pointer<  NVGtextRow > rows,int maxRows);
		::Dynamic textBreakLines_dyn();

};

} // end namespace frejo
} // end namespace core

#endif /* INCLUDED_frejo_core_VG */ 
