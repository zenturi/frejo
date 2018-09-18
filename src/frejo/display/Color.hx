package frejo.display;
import nanovg.Nvg;
import frejo.core.VG;

typedef ColorRGBA = {
    r:Int,
    g:Int,
    b:Int,
    a:Int
}

typedef ColorHSLA = {
    h:Int,
    s:Int,
    l:Int,
    a:Int
}



/**
 * 
 */
abstract Color(ColorRGBA) from ColorRGBA to ColorRGBA {

    public function vg():NvgColor {
        return VG.getInstance().rgba(this.r, this.g, this.b, this.a);
    }
    
    public function new (r, g, b, a){
        this  = {
            r:r,
            g:g,
            b:b,
            a:a
        };
    }

    public static var  PRIMARY = new Color(72, 138, 255, 255);
    public static var  SECONDARY= new Color(50, 219, 100, 255);
    public static var  DANGER = new Color(245, 61, 61, 255);
    public static var  LIGHT = new Color(244, 244, 244, 255);
    public static var  TRANSPARENT = new Color(0, 0, 0, 0);
}

