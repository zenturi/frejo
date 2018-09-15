package frejo.core;

import frejo.app.Application;
import facebook.Yoga;
import facebook.yoga.*;

using facebook.yoga.Enums;

import msignal.Signal;
import snow.types.Types;

/**
 * Application view implementation
 *  - Manages basic display hierarchy
 *  - Manages basic display lifecycle
 *  - Manages event signals
 */
class View {
	/**
	 * Unique Identifier for this view
	 */
	public var id(default, null):String;

	/**
	 * private counter to maintain unique identifieds for created views
	 */
	static var idCounter:Int = 0;

	/**
	 * Reference to the postion of this view in th hierarchy.
	 * defaults to -1 when view has no parent
	 */
	public var index(default, set):Int;

	/**
	 * Refrence to the parent view
	 */
	public var parent(default, null):View;

	/**
	 * An array of child views
	 */
	public var children:Array<View>;

	/**
	 * Name of this view class
	 */
	public var className:String;

	// Events

	/**
	 * Event type dispatched when view is added
	 */
	inline public static var ADDED:String = "added";

	/**
	 * Event type dispatched when view is removed
	 */
	inline public static var REMOVED:String = "removed";

	/**
	 * Event type dispatched when view is actioned
	 */
	inline public static var ACTIONED:String = "actioned";

	/**
	 * Signal used for dispatching view events
	 */
	@:isVar public var signal(default, null):Signal2<String, View>;

	private var node:frejo.display.Node = null;

	public var app:Application = null;

	public function new() {}

	/**
	 * Initialize necessary properties
	 */
	public function init() {
		// set thie unique identifier
		id = "view" + (idCounter++);

		// set the default index of this class
		Reflect.setField(this, "index", -1);

		className = Type.getClassName(Type.getClass(this)).split(".").pop();

		children = [];

		signal = new Signal2<String, View>();

		var flexConfig = Config.init();
		var flexNode = Yoga.newNodeWithConfig(flexConfig);

		// compute view style layout
		Yoga.nodeStyleSetPositionType(flexNode, PositionType.Absolute);
		Yoga.nodeStyleSetWidth(flexNode, app.window_width);
		Yoga.nodeStyleSetHeight(flexNode, app.window_width);

		Yoga.nodeCalculateLayout(flexNode, Constants.Undefined, Constants.Undefined, Direction.LTR);

		node = new frejo.display.Node();
		node.style = flexNode.getStyle();

		node.width = app.window_width;
		node.height = app.window_height;
	}

	/**
	 * dispatches a view event via the signal
	 * @param event
	 * @param view
	 */
	public function dispatch(event:String, view:View) {
		if (view == null)
			view = this;
		signal.dispatch(event, view);
	}

	public function system_event(event:SystemEvent) {
		trace(event);
	}

	function toString():String {
		return '${className}(${id})';
	}

	function set_index(i:Int):Int {
		if (index != i) {
			index = i;
		}

		return index;
	}

	/**
	 * Adds a child view to the display heirachy.
	 *
	 * Dispatches an ADDED event on completion.
	 * @param view
	 */
	public function addChild(view:View) {
		view.init();
		view.signal.add(this.dispatch);
		view.parent = this;
		view.index = children.length;

		node.addChild(view.node);

		children.push(view);
		dispatch(ADDED, view);
	}

	/**
	 * Remove a child from the display heirarchy
	 *
	 * Dispatches an ADDED event on completion.
	 * @param child
	 */
	public function removeChild(child:View) {
		child.destroy();
		children.remove(child);
		node.removeChild(child.node);
		dispatch(REMOVED, child);
	}

	/**
	 * UI update frame rate
	 * @param dt
	 */
	public function update(dt:Float) {
		node.update(dt);
	}

	/**
	 * Draw UI elements
	 */
	public function draw() {
		node.draw();
	}

	/**
	 * Destroy the view when it's no longer in use.
	 */
	public function destroy() {
		for (child in children) {
			removeChild(child);
		}
	}
}
