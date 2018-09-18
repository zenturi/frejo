package frejo.display;

import nanovg.Nvg.NvgPaint;
using nanovg.Nvg;
import haxe.Constraints.Function;
import frejo.core.VG;
import frejo.display.Color;
import cpp.*;

typedef DrawCommand = {
    fn: String,
    args: Array<Dynamic>
}


/**
 * Graphics class for drawing objects
 */
class Graphics {
    /**
     * Draw Commands 
     */
    private var commands:Array<DrawCommand>;

    var vg:VG;

    public function new(){
        vg = VG.getInstance();
        commands = [];
    }


    public function beginPath():Graphics {
		return set("beginPath");
	}

    public function moveTo(x:Float, y:Float):Graphics {
        return set("moveTo", [x, y]);
    }

	public function lineTo(x:Float, y:Float):Graphics {
        return set("lineTo", [x, y]);
    }

	public function bezierTo(c1x:Float, c1y:Float, c2x:Float, c2y:Float, x:Float, y:Float):Graphics {
        return set("bezierTo", [c1x, c1y, c2x, c2y, x, y]);
    }

	public function arcTo(x1:Float, y1:Float, x2:Float, y2:Float, radius:Float):Graphics {
        return set("arcTo", [x1, y1, x2, y2, radius]);
    }

	public function closePath():Graphics {
        return set("closePath");
    }

	public function pathWinding(dir:Int):Graphics {
        return set("pathWinding", [dir]);
    }

	public function arc(cx:Float, cy:Float, r:Float, a0:Float, a1:Float, dir:Int):Graphics {
       return set("arc", [cx, cy, r, a0, a1, dir]);
    }

	public function rect(x:Float, y:Float, w:Float, h:Float):Graphics {
        return set("rect", [x, y, w, h]);
    }

	public function roundedRect(x:Float, y:Float, w:Float, h:Float, r:Float):Graphics {
        return set("roundedRect", [x, y, w, h, r]);
    }

	public function ellipse(cx:Float, cy:Float, rx:Float, ry:Float):Graphics {
        return set("ellipse", [cx, cy, rx, ry]);
    }

	public function circle(cx:Float, cy:Float, r:Float):Graphics {
        return set("circle", [cx, cy, r]);
    }

	public function fill():Graphics {
        return set("fill");
    }

	public function strokeColor(color:Color):Graphics {
		return set("strokeColor", [color]);
	}

    public function strokePaint(paint:NvgPaint):Graphics {
		return set("strokePaint", [paint]);
	}

	public function strokeWidth(width:Float):Graphics{
		return set("strokeWidth", [width]);
	}

    public function stroke():Graphics {
		return set("stroke", []);
	}

	public function fillColor(color:Color):Graphics {
		return set("fillColor", [color.vg()]);
	}

	public function fillPaint(paint:NvgPaint):Graphics {
		return set("fillPaint", [paint]);
	}

	public function miterLimit(limit:Float):Graphics {
		return set("miterLimit", [limit]);
	}

	public function lineCap(cap:Int):Graphics {
		return set("lineCap", [cap]);
	}

	public function lineJoin(join:Int):Graphics {
		return set("lineJoin", [join]);
	}

	public function globalAlpha(alpha:Float):Graphics {
        return set("globalAlpha", [alpha]);
    }

	public function fontSize(size:Float):Graphics {
        return set("fontSize", [size]);
    }

	public function fontBlur(blur:Float):Graphics {
        return set("fontBlur", [blur]);
    }

	public function textLetterSpacing(spacing:Float):Graphics {
        return set("textLetterSpacing", [spacing]);
    }

	public function textLineHeight(lineHeight:Float):Graphics {
        return set("textLineHeight", [lineHeight]);
    }

	public function textAlign(align:Int):Graphics {
        return set("textAlign", [align]);
    }

	public function fontFaceId(font:Int):Graphics {
        return set("fontFaceId", [font]);
    }

	public function fontFace(font:String):Graphics {
        return set("fontFace", [font]);
    }

	public function text(x:Float, y:Float, string:String, end:String):Graphics {
       return set("text", [x, y, string, end]);
    }

	public function textBox(x:Float, y:Float, breakRowWidth:Float, string:String, end:String):Graphics {
        return set("textBox", [x, y, breakRowWidth, string, end]);
    }

	public static function TextBounds(x:Float, y:Float, string:String, end:String, bounds:Pointer<Float32>):Float {
        return VG.getInstance().textBounds(x, y, string, end, bounds);
    }

	public function textBoxBounds(x:Float, y:Float, breakRowWidth:Float, string:String, end:String, bounds:Pointer<Float32>):Graphics {
        return set("textBoxBounds", [x, y, breakRowWidth, string, end, bounds]);
    }

	public static function TextGlyphPositions(x:Float, y:Float, string:String, end:String, positions:Pointer<NvgGlyphPosition>, maxPositions:Int):Int {
       return VG.getInstance().textGlyphPositions(x, y, string, end, positions, maxPositions);
    }

	public function textMetrics(ascender:Pointer<Float32>, descender:Pointer<Float32>, lineh:Pointer<Float32>):Graphics {
        return set("textMetrics", [ascender, descender, lineh]);
    }

	public static function TextBreakLines(string:String, end:String, breakRowWidth:Float, rows:Pointer<NvgTextRow>, maxRows:Int):Int {
        return VG.getInstance().textBreakLines(string, end, breakRowWidth, rows, maxRows);
    }

    private function set(name:String, ?args:Array<Dynamic>):Graphics{
        commands.push({
            fn: name,
            args: args != null ? args : [] 
        });

        return this;
    }

    public static function LinearGradient(sx:Float, sy:Float, ex:Float, ey:Float, icol:Color, ocol:Color):NvgPaint {
		return VG.getInstance().linearGradient(sx, sy, ex, ey, icol.vg(), ocol.vg());     
    }

    public static function BoxGradient(x:Float, y:Float, w:Float, h:Float, r:Float, f:Float, icol:Color, ocol:Color):NvgPaint {
        return VG.getInstance().boxGradient(x, y, w, h, r, f, icol.vg(), ocol.vg());
    }

    public static function RadialGradient(cx:Float, cy:Float, inr:Float, outr:Float, icol:Color, ocol:Color):NvgPaint {
        return VG.getInstance().radialGradient(cx, cy, inr, outr, icol.vg(), ocol.vg());
    }


    /**
     * Render the graphics
     */
    public function render(){
        for(command in commands){
            var args = command.args;
            switch command.fn {
                case "beginPath":{
                    vg.beginPath();
                };
                case "moveTo":{
                    vg.moveTo(args[0], args[1]);
                };
                case "lineTo":{
                    vg.lineTo(args[0], args[1]);
                };
                case "bezierTo":{
                    vg.bezierTo(args[0], args[1], args[2], args[3], args[4], args[5]);
                };
                case "arcTo":{
                    vg.arcTo(args[0], args[1], args[2], args[3], args[4]);
                };
                case "closePath":{
                    vg.closePath();
                };
                case "pathWinding":{
                    vg.pathWinding(args[0]);
                };
                case "arc":{
                    vg.arc(args[0], args[1], args[2], args[3], args[4], args[5]);
                };
                case "rect":{
                    vg.rect(args[0], args[1], args[2], args[3]);
                };
                case "ellipse":{
                    vg.ellipse(args[0], args[1], args[2], args[3]);
                };
                case "circle":{
                    vg.circle(args[0], args[1], args[2]);
                };
                case "roundedRect":{
                    vg.roundedRect(args[0], args[1], args[2], args[3], args[4]);
                };
                case "strokeColor": {
                    vg.strokeColor(args[0]);
                };
                case "strokeWidth": {
                    vg.strokeWidth(args[0]);
                };
                case "strokePaint": {
                    vg.strokePaint(args[0]);
                };
                case "stroke": {
                    vg.stroke();
                };
                case "fill": {
                    vg.fill();
                };
                case "fillColor": {
                    vg.fillColor(args[0]);
                };
                case "fillPaint": {
                    vg.fillPaint(args[0]);
                };
                case "miterLimit":{
                    vg.miterLimit(args[0]);
                };
                case "lineCap":{
                    vg.lineCap(args[0]);
                };
                case "lineJoin":{
                    vg.lineJoin(args[0]);
                };
                case "globalAlpha":{
                    vg.globalAlpha(args[0]);
                };
                case "fontSize":{
                    vg.fontSize(args[0]);
                };
                case "fontBlur":{
                    vg.fontBlur(args[0]);
                };
                case "textLetterSpacing":{
                    vg.textLetterSpacing(args[0]);
                };
                case "textLineHeight":{
                    vg.textLineHeight(args[0]);
                };
                case "textAlign":{
                    vg.textAlign(args[0]);
                };
                case "fontFaceId":{
                    vg.fontFaceId(args[0]);
                };
                case "fontFace":{
                    vg.fontFace(args[0]);
                };
                case "text":{
                    vg.text(args[0], args[1], args[2], args[3]);
                };
                case "textBox":{
                    vg.textBox(args[0], args[1], args[2], args[3], args[4]);
                };
                case "textBoxBounds":{
                    vg.textBoxBounds(args[0], args[1], args[2], args[3], args[4], args[5]);
                };
                case "textMetrics":{
                    vg.textMetrics(args[0], args[1], args[2]);
                }
            }
        }
    }


}