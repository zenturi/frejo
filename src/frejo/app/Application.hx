package frejo.app;

import snow.modules.opengl.GL;
import msignal.Signal;
import snow.types.Types;

class Application extends snow.App {
	public var window_width:Int = 640;
	public var window_height:Int = 320;
	public var applicationContext:Context;
	public var applicationView:View;

	var signal:Signal1<SystemEvent>;

	public function new() {}

	override function ready() {
		window_width = app.runtime.window_width();
		window_height = app.runtime.window_height();

		applicationView = new View();
		applicationView.app = this;
		applicationView.init();

		signal.add(applicationView.system_event);
		applicationContext = new Context(applicationView);
	}

	override function config(config:AppConfig):AppConfig {
		window_width = config.window.width;
		window_height = config.window.height;

		// currently required for GLES3.x
		config.render.opengl.profile = gles;

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
		GL.viewport(0, 0, window_width, window_height);
		GL.clearColor(0, 1.0, 1.0, 1.0);
		GL.clear(GL.COLOR_BUFFER_BIT);

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
