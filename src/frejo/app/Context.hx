package frejo.app;

/**
 * Application Context
 *
 * Provides necessary dependency maps
 */
class Context extends mmvc.impl.Context {
	public function new(?contextView:mmvc.api.IViewContainer) {
		super(contextView);
	}

	override public function startup() {
		// wiring for main application module
		mediatorMap.mapView(View, ViewMediator);
	}

	override public function shutdown() {}
}
