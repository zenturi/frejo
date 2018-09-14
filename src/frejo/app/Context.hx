package frejo.app;
import nanovg.Nvg;

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
        
    }

    override public function shutdown() {

    }
}