package frejo.display;

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
class Color {
    public static var  PRIMARY:ColorRGBA = {r:72, g:138, b:255, a:255};
    public static var  SECONDARY:ColorRGBA = {r:50, g:219, b:100, a:255};
    public static var  DANGER:ColorRGBA = {r:245, g:61, b:61, a:255};
    public static var  LIGHT:ColorRGBA = {r:244, g:244, b:244, a:255};
    public static var  TRANSPARENT:ColorRGBA = {r:0, g:0, b:0, a:0};
}

