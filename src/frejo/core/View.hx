package frejo.core;

import msignal.Signal;
import nanovg.Nvg;
import nanovg.Nvg.NvgContext;

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
    public var signal(default, null):Signal2<String, View>;

    private var node:frejo.display.Node;


    public function new(){
        // set thie unique identifier
        id = "view" + (idCounter ++);

        // set the default index of this class
        Reflect.setField(this, "index", -1);

        className = Type.getClassName(Type.getClass(this)).split(".").pop();

        children = [];

        signal = new Signal2<String, View>();

        node = new frejo.display.Node();

        init();
    }

    /**
     * Initialize necessary properties
     */
    function init(){

    }

    /**
     * dispatches a view event via the signal
     * @param event 
     * @param view 
     */
    public function dispatch(event:String, view:View) {
        if (view == null) view = this;
        signal.dispatch(event, view);
    }


    function toString():String {
        return '${className}(${id})';
    }


    function set_index(i:Int):Int {
        if(index != i){
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
    public function addChild(view:View){
        view.signal.add(this.dispatch);
        view.parent = this;
        view.index = children.length;

        node.addChild(view.node);

        children.push(view);
        dispatch(ADDED, view);
    }
}