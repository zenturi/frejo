package frejo.core;

import nanovg.Nvg;

/**
 * Main NanoVG wrapper
 */
class VG {
	var context:cpp.Pointer<NvgContext>;

	static var vg:Nvg;

	public static function getInstance():VG {
		if (vg == null) {
			vg = new VG();
			return vg;
		}
		return vg;
	}

	public function new() {
		context = Nvg.createGL(NvgMode.ANTIALIAS | NvgMode.STENCIL_STROKES);
	}

	public function delete():Void {
		Nvg.deleteGL(context);
	}

	public function beginFrame(windowWidth:Int, windowHeight:Int, devicePixelRatio:Float):Void {
		Nvg.beginFrame(context, windowWidth, windowHeight, devicePixelRatio);
	}

	public function endFrame():Void {
		Nvg.endFrame(context);
	}

	public function rgb(r:UInt8, g:UInt8, b:UInt8):NvgColor {
		return Nvg.rgb(r, g, b);
	}

	public function rgbf(r:Float, g:Float, b:Float):NvgColor {
		return Nvg.rgbf(r, g, b);
	}

	public function rgba(r:UInt8, g:UInt8, b:UInt8, a:UInt8):NvgColor {
		return Nvg.rgba(r, g, b, a);
	}

	public function rgbaf(r:Float, g:Float, b:Float, a:Float):NvgColor {
		return Nvg.rgbaf(r, g, b, a);
	}

	public function lerpRgba(c0:NvgColor, c1:NvgColor, u:Float):NvgColor {
		return Nvg.lerpRgba(c0, c1, u);
	}

	public function transRgba(c0:NvgColor, a:UInt8):NvgColor {
		return Nvg.transRgba(c0, a);
	}

	public function transRgbaf(c0:NvgColor, a:Float):NvgColor {
		return Nvg.transRgbaf(c0, a);
	}

	public function hsl(h:Float, s:Float, l:Float):NvgColor {
		return Nvg.hsl(h, s, l);
	}

	public function hsla(h:Float, s:Float, l:Float, a:UInt8):NvgColor {
		return Nvg.hsla(h, s, l, a);
	}

	public function save():Void {
		Nvg.save(context);
	}

	public function restore():Void {
		Nvg.restore(context);
	}

	public function reset():Void {
		Nvg.reset(context);
	}

	public function strokeColor(color:NvgColor):Void {
		Nvg.strokeColor(context, color);
	}

	public function strokePaint(paint:NvgPaint):Void {
		Nvg.strokePaint(context, paint);
	}

	public function fillColor(color:NvgColor):Void {
		Nvg.fillColor(context, fillColor);
	}

	public function fillPaint(paint:NvgPaint):Void {
		Nvg.fillPaint(context, paint);
	}

	public function miterLimit(limit:Float):Void {
		Nvg.miterLimit(context, limit);
	}

	public function strokeWidth(size:Float):Void {
		Nvg.strokeWidth(context, size);
	}

	public function lineCap(cap:Int):Void {
		Nvg.lineCap(context, cap);
	}

	public function lineJoin(join:Int):Void {
		Nvg.lineJoin(context, join);
	}

	public function globalAlpha(alpha:Float):Void {
        Nvg.globalAlpha(context, alpha);
    }

	public function resetTransform():Void {
        Nvg.resetTransform(context);
    }

	public function transform(a:Float, b:Float, c:Float, d:Float, e:Float, f:Float):Void {
        Nvg.transform(context, a, b, c, d, e, f);
    }

	public function translate(x:Float, y:Float):Void {
        Nvg.translate(context, x, y);
    }

	public function rotate(angle:Float):Void {
        Nvg.rotate(context, angle);
    }

	public function skewX(angle:Float):Void {
        Nvg.skewX(context, angle);
    }

	public function skewY(angle:Float):Void {
        Nvg.skewY(context, angle);
    }

	public function scale(x:Float, y:Float):Void {
        Nvg.scale(context, x, y);
    }

	public function currentTransform(xForm:Float):Void {
        Nvg.currentTransform(context, xform);
    }

	public function transformIdentity(dst:Float):Void {
        Nvg.transformIdentity(dst);
    }

	public function transformTranslate(dst:Pointer<Float32>, tx:Float, ty:Float):Void {
        Nvg.transformTranslate(dst,  tx, ty);
    }

	public function transformScale(dst:Pointer<Float32>, sx:Float, sy:Float):Void {
        Nvg.transformScale(dst, sx, sy);
    }

	public function transformRotate(dst:Pointer<Float32>, angle:Float):Void {
        Nvg.transformRotate(dst, angle);
    }

	public function transformSkewX(dst:Pointer<Float32>, angle:Float):Void {
        Nvg.transformSkewX(dst, angle);
    }

	public function transformSkewY(dst:Pointer<Float32>, angle:Float):Void {
        Nvg.transformSkewY(dst, angle);
    }

	public function transformMultiply(dst:Pointer<Float32>, src:ConstPointer<Float32>):Void {
        Nvg.transformMultiply(dst, src);
    }

	public function transformPremultiply(dst:Pointer<Float32>, src:ConstPointer<Float32>):Void {
        Nvg.transformPremultiply(dst, src);
    }

	public function transformInverse(dst:Pointer<Float32>, src:ConstPointer<Float32>):Void {
        Nvg.transformInverse(dst, src);
    }

	public function transformPoint(dstx:Pointer<Float32>, dsty:Pointer<Float32>, xform:ConstPointer<Float32>, srcx:Float, srcy:Float):Void {
        Nvg.transformPoint(dstx, dsty, xform, srcx, srcy);
    }

	public function degToRad(deg:Float):Float {
        Nvg.degToRad(deg);
    }

	public function radToDeg(rad:Float):Float {
        Nvg.radToDeg(rad);
    }

	public function createImage(filename:String):Int {
        return Nvg.createImage(context, filename);
    }

	public function createImageMem(data:cpp.Pointer<UInt8>, ndata:Int):Int {
        return Nvg.createImageMem(context, data, ndata);
    }

	public function createImageRGBA(w:Int, h:Int, data:cpp.Pointer<UInt8>):Int {
        return Nvg.createImageRGBA(context, w, h, data);
    }

	public function updateImage(image:Int, data:cpp.Pointer<UInt8>):Void {
        Nvg.updateImage(context, image, data);
    }

	public function imageSize(image:Int, w:Pointer<Int>, h:Pointer<Int>):Void {
        Nvg.imageSize(context, image, w, h);
    }

	public function deleteImage(image:Int):Void {
        Nvg.deleteImage(context, image);
    }

	public function linearGradient(sx:Float, sy:Float, ex:Float, ey:Float, icol:NvgColor, ocol:NvgColor):NvgPaint {
        return Nvg.linearGradient(sx, sy, ex, ey, icol, ocol);
    }

	public function boxGradient(x:Float, y:Float, w:Float, h:Float, r:Float, f:Float, icol:NvgColor, ocol:NvgColor):NvgPaint {
        return Nvg.boxGradient(context, x, y, w, h, r, f, icol, ocol);
    }

	public function radialGradient(cx:Float, cy:Float, inr:Float, outr:Float, icol:NvgColor, ocol:NvgColor):NvgPaint {
        return Nvg.radialGradient(context, cx, cy, inr, outr, icol, ocol);
    }

	public function imagePattern(ox:Float, oy:Float, ex:Float, ey:Float, angle:Float, image:Int, repeat:Int, alpha:Float):NvgPaint {
        return Nvg.imagePattern(context, ox, oy, ex, ey, ange, image, repeat, alpha);
    }

	public function scissor(x:Float, y:Float, w:Float, h:Float):Void {
        return Nvg.scissor(context, x, y, w, h);
    }

	public function intersectScissor(x:Float, y:Float, w:Float, h:Float):Void {
        return Nvg.intersectScissor(context, x, y, w, h);
    }

	public function resetScissor():Void {
        Nvg.resetScissor(context);
    }

	public function beginPath():Void {
        Nvg.beginPath(context);
    }

	public function moveTo(x:Float, y:Float):Void {
        Nvg.moveTo(context, x, y);
    }

	public function lineTo(x:Float, y:Float):Void {
        Nvg.lineTo(context, x, y);
    }

	public function bezierTo(c1x:Float, c1y:Float, c2x:Float, c2y:Float, x:Float, y:Float):Void {
        Nvg.bezierTo(context, c1x, c1y, c2x, c2y, x, y);
    }

	public function arcTo(x1:Float, y1:Float, x2:Float, y2:Float, radius:Float):Void {
        Nvg.arcTo(context, x1, y1, x2, y2, radius);
    }

	public function closePath():Void {
        Nvg.closePath(context);
    }

	public function pathWinding(dir:Int):Void {
        Nvg.pathWinding(context, dir);
    }

	public function arc(cx:Float, cy:Float, r:Float, a0:Float, a1:Float, dir:Int):Void {
        Nvg.arc(context, cx, cy, r, a0, a1, dir);
    }

	public function rect(x:Float, y:Float, w:Float, h:Float):Void {
        Nvg.rect(context, x, y, w, h);
    }

	public function roundedRect(x:Float, y:Float, w:Float, h:Float, r:Float):Void {
        Nvg.roundedRect(context, x, y, w, h, r);
    }

	public function ellipse(cx:Float, cy:Float, rx:Float, ry:Float):Void {
        Nvg.ellipse(context, cx, cy, rx, ry);
    }

	public function circle(cx:Float, cy:Float, r:Float):Void {
        Nvg.circle(context, cx, cy, r);
    }

	public function fill():Void {
        Nvg.fill(context);
    }

	public function stroke():Void {
        Nvg.stroke(context);
    }

	public function createFont(name:String, filename:String):Int {
       return  Nvg.createFont(context, name, filename);
    }

	public function createFontMem(name:String, data:cpp.Pointer<UInt8>, ndata:Int, freeData:Int):Int {
        return Nvg.createFontMem(context, name, data, ndata, freeData);
    }

	public function findFont(name:String):Int {
        return Nvg.findFont(context, name);
    }

	public function fontSize(size:Float):Void {
        Nvg.fontSize(context, size);
    }

	public function fontBlur(blur:Float):Void {
        Nvg.fontBlur(context, blur);
    }

	public function textLetterSpacing(spacing:Float):Void {
        Nvg.textLetterSpacing(context, spacing);
    }

	public function textLineHeight(lineHeight:Float):Void {
        Nvg.textLineHeight(context, lineHeight);
    }

	public function textAlign(align:Int):Void {
        Nvg.textAlign(context, align);
    }

	public function fontFaceId(font:Int):Void {
        Nvg.fontFaceId(context, font);
    }

	public function fontFace(font:String):Void {
        Nvg.fontFace(context, font);
    }

	public function text(x:Float, y:Float, string:String, end:String):Float {
       return  Nvg.text(context, x, y, string, end);
    }

	public function textBox(x:Float, y:Float, breakRowWidth:Float, string:String, end:String):Void {
        Nvg.textBox(context, x, y, breakRowWidth, string, end);
    }

	public function textBounds(x:Float, y:Float, string:String, end:String, bounds:Pointer<Float32>):Float {
        return Nvg.textBounds(context, x, y, string, end, bounds);
    }

	public function textBoxBounds(x:Float, y:Float, breakRowWidth:Float, string:String, end:String, bounds:Pointer<Float32>):Void {
        Nvg.textBoxBounds(context, x, y, breakRowWidth, string, end, bounds);
    }

	public function textGlyphPositions(x:Float, y:Float, string:String, end:String, positions:Pointer<NvgGlyphPosition>, maxPositions:Int):Int {
        return Nvg.textGlyphPositions(context, x, y, string, end, positions, maxPositions);
    }

	public function textMetrics(ascender:Pointer<Float32>, descender:Pointer<Float32>, lineh:Pointer<Float32>):Void {
        Nvg.textMetrics(context, ascender, descender, lineh);
    }

	public function textBreakLines(string:String, end:String, breakRowWidth:Float, rows:Pointer<NvgTextRow>, maxRows:Int):Int {
        return Nvg.textBreakLines(context, string, end, breakRowWidth, rows, maxRows);
    }
}
