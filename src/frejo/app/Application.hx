package frejo.app;

import snow.modules.opengl.GL;
import msignal.Signal;
import snow.types.Types;


@:keepSub
class Application extends snow.App {
	public var window_width:Int = 640;
	public var window_height:Int = 320;
	public var applicationContext:Context;
	public var applicationView:View;

	public var pixelRatio:Float;

	public var render_width:Int;
	public var render_height:Int;

	var signal:Signal1<SystemEvent>;

	static var instance:Application;

	public static function getInstance():Application {
		if(instance == null){
			return new Application();
		} else {
			return instance;
		}
	}

	public function new() {
		instance = this;
	}

	override function ready() {
		pixelRatio = app.runtime.window_device_pixel_ratio();
        render_width = app.runtime.window_width();
        render_height = app.runtime.window_height();


		window_width = Math.floor(render_width/pixelRatio);
		window_height = Math.floor(render_height/pixelRatio);
        
		app.runtime.window_fullscreen(false, false);

		applicationView = new View();
		applicationView.app = this;
		applicationView.init();

		signal.add(applicationView.system_event);
		applicationContext = new Context(applicationView);
	}

	override function config(config:AppConfig):AppConfig {
		render_width = config.window.width;
		render_height = config.window.height;


		// currently required for GLES3.x
		#if mobile
		config.render.opengl.profile = gles;
		#end

		// required for nanovg
		config.render.stencil = 8;
		config.render.depth = 24;

		return config;
	}

	override function update(dt:Float) {
		applicationView.update(dt);
	}

	override function tick(dt:Float) {
		draw();
	}

	// draw views
	function draw() {
		GL.viewport(0, 0, render_width, render_height);
		GL.clearColor(0.7, 0.7, 0.7, 0.3);
		GL.clear(GL.COLOR_BUFFER_BIT | GL.DEPTH_BUFFER_BIT | GL.STENCIL_BUFFER_BIT);

		applicationView.draw();
	}

	override public function onevent(event:SystemEvent) {
		if (event.type != se_tick)
			trace('System Event: ${event.type}');
		if (signal == null) {
			signal = new Signal1<SystemEvent>();
		}
		if (event.type != se_tick)
			signal.dispatch(event);
	}
}
