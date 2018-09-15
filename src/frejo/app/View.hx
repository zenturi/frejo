package frejo.app;

import mmvc.api.IViewContainer;
import nanovg.Nvg;

/**
 *  Main Application View
 *  Implements IViewContainer to provide view added/removed events back to the Context.mediatorMap
 *
 *  Extends the core view class to manage general application view lifecycle and events across all platforms
 */
class View extends frejo.core.View implements IViewContainer {
	public var viewAdded:Dynamic->Void;
	public var viewRemoved:Dynamic->Void;

	public function new() {
		super();
	}

	/**
	 * Create views
	 */
	public function render() {}

	/**
		Required by IViewContainer
	 */
	public function isAdded(view:Dynamic):Bool {
		return true;
	}
}
