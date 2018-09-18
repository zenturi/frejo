package frejo.display;


import nanovg.Nvg.NvgColor;
import frejo.app.Application;
import frejo.core.VG;
import msignal.Signal;
import facebook.Yoga;
import facebook.yoga.*;

using facebook.yoga.Enums;
using frejo.display.Color;

/**
 * Base node for display objects
 */
@:keepSub
class Node {

	/**
	 * Node vector graphics handle responsible for drawing 
	 */
	public var vg:VG;

	@:unreflective
	public var flexNode:facebook.yoga.Node;
	@:unreflective
	var flexConfig:Config;


	var app:Application;

	public var graphics:Graphics;

	/**
	 * default background color;
	 */
	public var background(default, set):Color;

	@:isVar public var style(get, set):facebook.yoga.Style;
	public var layout:facebook.yoga.Layout;

	/**
	 * Node width
	 */
	@:isVar public var width(get, set):Float;

	/**
	 * Node height
	 */
	@:isVar public var height(get, set):Float;

	/**
	 * Node point in space
	 */
	public var position(null, set):Point;
	public var children:Array<Node>;
	public var parent:Node;
	public var name:String;
	public var signal:Signal2<String, Node>;
	public var ADDED:String = "Added";
	public var REMOVED:String = "Removed";
	public var STYLE_CHANGED:String = "Style_Changed";

	public function dispatch(event:String, node:Node) {}

	public function new() {
		init();
	}

	private function init() {
		app = Application.getInstance();
		graphics = new Graphics();
		children = new Array<Node>();
		name = Type.getClassName(Type.getClass(this)).split(".").pop();
		vg = VG.getInstance();
		flexConfig = Config.init();
		flexNode = Yoga.newNodeWithConfig(flexConfig);
		layout = flexNode.getLayout();
		background = Color.TRANSPARENT;
		width = app.window_width;
		height = app.window_height;

		// draw default graphics
		graphics.rect(position.x, position.y, width, height);
	}


	function set_background(color:Color):Color {
		background = color;
		graphics.fillColor(background)
				.fill();
		return background;
	}

	function set_position(p:Point):Point {
		position = p;
		return p;
	}

	function get_position():Point {
		return position;
	}

	function set_width(w:Float):Float {
		width = w;
		Yoga.nodeStyleSetWidth(flexNode, w);
		initStyle();
		return width;
	}

	function get_width():Float {
		return width;
	}

	function set_height(h:Float):Float {
		height = h;
		Yoga.nodeStyleSetHeight(flexNode, h);
		initStyle();
		return height;
	}

	function get_height():Float {
		return height;
	}

	public function set_style(style:Style):Style {
		this.style = style;
		initStyle();
		return style;
	}

	public function get_style():Style {
		return style;
	}


	// public function set_layout(layout:Layout):Layout {
	// 	this.layout = layout;
	// 	initStyle();
	// 	return layout;
	// }

	public function getLayout():Layout {
		return layout;
	}

	public function addChild(child:Node):Void {
		addChildAt(child, children.length);
	}

	public function addChildAt(child:Node, index:Int):Void {
		if (child.parent == this) {
			if (children[index] != child) {
				children.remove(child);
				children.insert(index, child);
			}
		} else {
			if (child.parent == null) {
				child.parent.removeChild(child);
			}

			children.insert(index, child);
		}
		child.signal.add(this.dispatch);
		child.parent = this;
		dispatch(ADDED, child);

		initStyle();
	}

	public function removeChild(child:Node):Void {
		if (child != null && child.parent == this) {
			children.remove(child);
			child.signal.remove(this.dispatch);
			child.parent = null;
			dispatch(REMOVED, child);
		}

		initStyle();
	}

	public function initStyle() {
		dispatch(STYLE_CHANGED, this);
		computeLayout();

		var position = {
			x: Yoga.nodeLayoutGetLeft(flexNode),
			y: Yoga.nodeLayoutGetTop(flexNode)
		};

		Reflect.setField(this, "position", position);

		
		Reflect.setField(this, "width", Yoga.nodeLayoutGetWidth(flexNode));
		Reflect.setField(this, "height", Yoga.nodeLayoutGetHeight(flexNode));

	}

	function computeLayout() {
		if (children.length > 0) {
			for (child in children) {
				child.initStyle();
				Yoga.nodeInsertChild(flexNode, child.flexNode, children.indexOf(child));
			}
		}

		Yoga.nodeCalculateLayout(flexNode, Constants.Undefined, Constants.Undefined, Direction.LTR);
	}

	/**
	 * Draw the node
	 */
	public function draw(?tick:Float) {
		vg.beginFrame(app.window_width, app.window_height, app.pixelRatio);
		graphics.render();
		for (child in children) {
			child.draw(tick);
		}
		vg.endFrame();
	}

	public function update(dt:Float) {}

	public function destroy() {
		Yoga.nodeFreeRecursive(flexNode);
		Yoga.configFree(flexConfig);

		for (child in children) {
			removeChild(child);
		}
	}
}
