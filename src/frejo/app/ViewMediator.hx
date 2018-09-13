package frejo.app;

import nanovg.Nvg;

/**
 * Main application view mediator
 */
class ViewMediator extends mmvc.impl.Mediator<View> {
	public function new() {
		super();
	}

	/**
	 * overrides the onRegister function that is called when context has been initialized
	 */
	override function onRegister() {
		super.onRegister();

		view.render();
	}

	override function onRemove() {
		super.onRemove();
	}
}
