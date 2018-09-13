package frejo.display;

import frejo.core.VG;
import msignal.Signal;
import facebook.Yoga;
import facebook.yoga.*;
using facebook.yoga.Enums;
/**
 * Base node for display objects
 */
class Node {
	var vg:VG;
    var flexNode:facebook.yoga.Node;
    var flexConfig:Config;


    public var style(default, set):facebook.yoga.Style;

	public var layout(default, null):facebook.yoga.Layout;

	/**
	 * Node width
	 */
	public var width(get, set):Float;

	/**
	 * Node height
	 */
	public var height(get, set):Float;

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
		init()
	}

	private function init() {
		name = Type.getClassName(Type.getClass(this)).split(".").pop();
		vg = VG.getInstance();
        flexConfig = Config.init();
        style = Style.init();
        flexNode = Yoga.newNodeWithConfig(flexConfig);
		children = [];
	}

	function set_position(p:Point):Point {
		position = p;
		return p;
	}

	function get_position():Point {
		return p;
	}

	function set_width(w:Float):Float {
		width = w;
		return width;
	}

	function get_width():Float {
		return width;
	}


    function set_style(style:Style):Style {
        this.style = style;
        dispatch(STYLE_CHANGED, this);
		initStyle();
        return style;
    }

	public function addChild(child:Node):Void {
		children.addChildAt(child, children.length);
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
		computeLayout();
		layout = flexNode.getLayout();

		position = {
			x: Yoga.nodeLayoutGetLeft(flexNode),
			y: Yoga.nodeLayoutGetTop(flexNode)
		}

		Yoga.nodeFreeRecursive(flexNode);
    	Yoga.configFree(flexConfig);		
	}

	function computeLayout(){

		for(child in children){
			child.initStyle();
			Yoga.nodeInsertChild(flexNode, child.flexNode, children.indexOf(child));
		}
		Yoga.nodeCalculateLayout(flexNode, Constants.Undefined, Constants.Undefined, Direction.LTR);
	}

	/**
	 * Draw the node
	 */
	public function draw() {}
}
