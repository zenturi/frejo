
typedef UserConfig = {
    window : {
        width : Null<Int>,
        height : Null<Int>,
        fullscreen : Null<Bool>
    },
    size: Null<Int>,
    movespeed : Null<Int>,
    timescale: Null<Int>
}


class Main extends frejo.app.Application {
    public function new (){
        super();
    }
}