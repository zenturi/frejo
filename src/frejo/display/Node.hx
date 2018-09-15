package frejo.display;

import snow.App;
import frejo.core.VG;
import msignal.Signal;
import facebook.Yoga;
import facebook.yoga.*;

using facebook.yoga.Enums;
using frejo.display.Color;

/**
 * Base node for display objects
 */
class Node {
	var vg:VG;
	@:unreflective
	var flexNode:facebook.yoga.Node;
	@:unreflective
	var flexConfig:Config;

	/**
	 * default background color;
	 */
	var bgColor:ColorRGBA;

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
		children = new Array<Node>();
		name = Type.getClassName(Type.getClass(this)).split(".").pop();
		vg = VG.getInstance();
		flexConfig = Config.init();
		flexNode = Yoga.newNodeWithConfig(flexConfig);
		style = flexNode.getStyle();
		bgColor = {
			r: 28,
			g: 30,
			b: 34,
			a: 255
		};
		width = 0.0;
		height = 0.0;
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
		flexNode.setStyle(style);
		dispatch(STYLE_CHANGED, this);
		computeLayout();
		layout = flexNode.getLayout();

		var position = {
			x: Yoga.nodeLayoutGetLeft(flexNode),
			y: Yoga.nodeLayoutGetTop(flexNode)
		};

		Reflect.setField(this, "position", position);

		Reflect.setField(this, "width", Yoga.nodeLayoutGetWidth(flexNode));
		Reflect.setField(this, "height", Yoga.nodeLayoutGetHeight(flexNode));
		Reflect.setField(this, "style", flexNode.getStyle());

		trace(style.positionType == PositionType.Absolute);
		trace('dimensions:{width:${style.dimensions[0].value}, height:${style.dimensions[1].value}}');
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
	public function draw(ctx:App) {
		var dpr = ctx.app.runtime.window_device_pixel_ratio();
        var render_w = ctx.app.runtime.window_width();
        var render_h = ctx.app.runtime.window_height();
        var window_width = Math.floor(render_w/dpr);
        var window_height = Math.floor(render_h/dpr);

		vg.beginFrame(window_width, window_height, dpr);
		vg.save();
		vg.rect(position.x, position.y, width, height);
		vg.fillColor(vg.rgba(bgColor.r, bgColor.g, bgColor.b, bgColor.a));
		vg.fill();

		for (child in children) {
			child.draw(ctx);
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
