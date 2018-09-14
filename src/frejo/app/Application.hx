package frejo.app;
import snow.types.Types;
import snow.modules.opengl.GL;
import msignal.Signal;
import snow.types.Types;

class Application extends snow.App {
    var window_width : Int = 640;
    var window_height : Int = 320;

    public var applicationContext:Context;
    public var applicationView:View;

    var signal:Signal1<SystemEvent>;

    function new() {}


    override function ready() {
        window_width = app.runtime.window_width();
        window_height = app.runtime.window_height();

        signal = new Signal1<SystemEvent>();

        applicationView = new View();
        signal.add(applicationView.system_event);
        applicationContext = new Context(view);
    }


    override function config( config:AppConfig ) : AppConfig {

        window_width = config.window.width;
        window_height = config.window.height;

        return config;
    }


    override function update(dt:Float) {}


    override function tick(dt:Float) {}


    override public function onevent(event:SystemEvent) {
        signal.dispatch(event);
    }


    function draw(){
        GL.viewport(0, 0, window_width, window_height);
        GL.clearColor(1.0, 1.0, 1.0, 1.0);
        GL.clear( GL.COLOR_BUFFER_BIT );
    }


    override public function onevent(event:SystemEvent) {
        if(event.type != se_tick) trace('System Event: ${event.type}');
    }
}