// Generated by Haxe 4.0.0-preview.4+1e3e5e0
#include <hxcpp.h>

namespace hx {
const char *__hxcpp_all_files[] = {
#ifdef HXCPP_DEBUGGER
"/usr/local/lib/haxe/std/cpp/_std/Reflect.hx",
"/usr/local/lib/haxe/std/cpp/_std/Std.hx",
"/usr/local/lib/haxe/std/cpp/_std/StringBuf.hx",
"/usr/local/lib/haxe/std/cpp/_std/Sys.hx",
"/usr/local/lib/haxe/std/cpp/_std/Type.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/Log.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/IntMap.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/StringMap.hx",
"/usr/local/lib/haxe/std/cpp/vm/Lock.hx",
"/usr/local/lib/haxe/std/cpp/vm/Mutex.hx",
"/usr/local/lib/haxe/std/cpp/vm/Thread.hx",
"/usr/local/lib/haxe/std/haxe/Constraints.hx",
"/usr/local/lib/haxe/std/haxe/EntryPoint.hx",
"/usr/local/lib/haxe/std/haxe/MainLoop.hx",
"/usr/local/lib/haxe/std/haxe/ds/List.hx",
"/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",
"/usr/local/lib/haxe/std/haxe/io/Bytes.hx",
"/usr/local/lib/haxe/std/haxe/io/Path.hx",
"/usr/local/lib/haxe/std/haxe/rtti/Meta.hx",
"?",
"Main.hx",
"frejo/app/Application.hx",
"frejo/app/Context.hx",
"frejo/app/View.hx",
"frejo/app/ViewMediator.hx",
"frejo/core/VG.hx",
"frejo/core/View.hx",
"frejo/display/Color.hx",
"frejo/display/Graphics.hx",
"frejo/display/Node.hx",
"minject/InjectionConfig.hx",
"minject/Injector.hx",
"minject/Reflector.hx",
"minject/point/ConstructorInjectionPoint.hx",
"minject/point/InjectionPoint.hx",
"minject/point/MethodInjectionPoint.hx",
"minject/point/NoParamsConstructorInjectionPoint.hx",
"minject/point/PostConstructInjectionPoint.hx",
"minject/point/PropertyInjectionPoint.hx",
"minject/result/InjectValueResult.hx",
"minject/result/InjectionResult.hx",
"mmvc/api/ICommand.hx",
"mmvc/api/ICommandMap.hx",
"mmvc/api/IContext.hx",
"mmvc/api/IMediator.hx",
"mmvc/api/IMediatorMap.hx",
"mmvc/api/ITriggerMap.hx",
"mmvc/api/IViewContainer.hx",
"mmvc/api/IViewMap.hx",
"mmvc/base/CommandMap.hx",
"mmvc/base/ContextError.hx",
"mmvc/base/MediatorBase.hx",
"mmvc/base/MediatorMap.hx",
"mmvc/base/TriggerMap.hx",
"mmvc/base/ViewMap.hx",
"mmvc/base/ViewMapBase.hx",
"mmvc/impl/Context.hx",
"mmvc/impl/Mediator.hx",
"mmvc/impl/TriggerCommand.hx",
"msignal/Signal.hx",
"msignal/Slot.hx",
"msignal/SlotList.hx",
"ogg/Ogg.hx",
"openal/AL.hx",
"sdl/SDL.hx",
"snow/App.hx",
"snow/Snow.hx",
"snow/api/Emitter.hx",
"snow/api/Promise.hx",
"snow/api/Timer.hx",
"snow/api/buffers/ArrayBufferView.hx",
"snow/core/Extension.hx",
"snow/core/Runtime.hx",
"snow/core/native/Runtime.hx",
"snow/core/native/assets/Assets.hx",
"snow/core/native/audio/AudioDataOGG.hx",
"snow/core/native/audio/AudioDataPCM.hx",
"snow/core/native/audio/AudioDataWAV.hx",
"snow/core/native/audio/NativeAudioData.hx",
"snow/core/native/io/IO.hx",
"snow/modules/interfaces/Assets.hx",
"snow/modules/interfaces/Audio.hx",
"snow/modules/interfaces/IO.hx",
"snow/modules/openal/ALSound.hx",
"snow/modules/openal/ALStream.hx",
"snow/modules/openal/Audio.hx",
"snow/modules/sdl/IO.hx",
"snow/modules/sdl/Runtime.hx",
"snow/systems/assets/Asset.hx",
"snow/systems/assets/Assets.hx",
"snow/systems/audio/Audio.hx",
"snow/systems/audio/AudioInstance.hx",
"snow/systems/audio/AudioSource.hx",
"snow/systems/input/Input.hx",
"snow/systems/io/IO.hx",
"snow/types/Config.hx",
"snow/types/Types.hx",
#endif
 0 };

const char *__hxcpp_all_files_fullpath[] = {
#ifdef HXCPP_DEBUGGER
"/usr/local/lib/haxe/std/cpp/_std/Reflect.hx",
"/usr/local/lib/haxe/std/cpp/_std/Std.hx",
"/usr/local/lib/haxe/std/cpp/_std/StringBuf.hx",
"/usr/local/lib/haxe/std/cpp/_std/Sys.hx",
"/usr/local/lib/haxe/std/cpp/_std/Type.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/Log.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/IntMap.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/ObjectMap.hx",
"/usr/local/lib/haxe/std/cpp/_std/haxe/ds/StringMap.hx",
"/usr/local/lib/haxe/std/cpp/vm/Lock.hx",
"/usr/local/lib/haxe/std/cpp/vm/Mutex.hx",
"/usr/local/lib/haxe/std/cpp/vm/Thread.hx",
"/usr/local/lib/haxe/std/haxe/Constraints.hx",
"/usr/local/lib/haxe/std/haxe/EntryPoint.hx",
"/usr/local/lib/haxe/std/haxe/MainLoop.hx",
"/usr/local/lib/haxe/std/haxe/ds/List.hx",
"/usr/local/lib/haxe/std/haxe/format/JsonParser.hx",
"/usr/local/lib/haxe/std/haxe/io/Bytes.hx",
"/usr/local/lib/haxe/std/haxe/io/Path.hx",
"/usr/local/lib/haxe/std/haxe/rtti/Meta.hx",
"?",
"/Users/damilare/Documents/projects/frejo/src/Main.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/app/Application.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/app/Context.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/app/View.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/app/ViewMediator.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/core/VG.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/core/View.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/display/Color.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/display/Graphics.hx",
"/Users/damilare/Documents/projects/frejo/src/frejo/display/Node.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/InjectionConfig.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/Injector.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/Reflector.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/ConstructorInjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/InjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/MethodInjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/NoParamsConstructorInjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/PostConstructInjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/point/PropertyInjectionPoint.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/result/InjectValueResult.hx",
"/usr/local/lib/haxe/lib/minject/1,6,1/minject/result/InjectionResult.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/ICommand.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/ICommandMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/IContext.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/IMediator.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/IMediatorMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/ITriggerMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/IViewContainer.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/api/IViewMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/CommandMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/ContextError.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/MediatorBase.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/MediatorMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/TriggerMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/ViewMap.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/base/ViewMapBase.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/impl/Context.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/impl/Mediator.hx",
"/usr/local/lib/haxe/lib/mmvc/1,6,3/mmvc/impl/TriggerCommand.hx",
"/usr/local/lib/haxe/lib/msignal/1,2,4/msignal/Signal.hx",
"/usr/local/lib/haxe/lib/msignal/1,2,4/msignal/Slot.hx",
"/usr/local/lib/haxe/lib/msignal/1,2,4/msignal/SlotList.hx",
"/usr/local/lib/haxe/lib/linc_ogg/git/ogg/Ogg.hx",
"/usr/local/lib/haxe/lib/linc_openal/git/openal/AL.hx",
"/usr/local/lib/haxe/lib/linc_sdl/git/sdl/SDL.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/App.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/Snow.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/api/Emitter.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/api/Promise.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/api/Timer.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/api/buffers/ArrayBufferView.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/Extension.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/Runtime.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/Runtime.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/assets/Assets.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/audio/AudioDataOGG.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/audio/AudioDataPCM.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/audio/AudioDataWAV.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/audio/NativeAudioData.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/core/native/io/IO.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/interfaces/Assets.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/interfaces/Audio.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/interfaces/IO.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/openal/ALSound.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/openal/ALStream.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/openal/Audio.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/sdl/IO.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/modules/sdl/Runtime.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/assets/Asset.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/assets/Assets.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/audio/Audio.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/audio/AudioInstance.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/audio/AudioSource.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/input/Input.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/systems/io/IO.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/types/Config.hx",
"/usr/local/lib/haxe/lib/snow/git/snow/types/Types.hx",
#endif
 0 };

const char *__hxcpp_all_classes[] = {
#ifdef HXCPP_DEBUGGER
"snow.App",
"frejo.app.Application",
"Main",
"Reflect",
"Std",
"StringBuf",
"Sys",
"Type",
"cpp.vm.Lock",
"cpp.vm.Mutex",
"cpp.vm.Thread",
"mmvc.impl.Context",
"frejo.app.Context",
"frejo.core.View",
"frejo.app.View",
"mmvc.base.MediatorBase",
"mmvc.impl.Mediator",
"frejo.app.ViewMediator",
"frejo.core.VG",
"frejo.display._Color.Color_Impl_",
"frejo.display.Graphics",
"frejo.display.Node",
"haxe.EntryPoint",
"haxe.Log",
"haxe.MainEvent",
"haxe.MainLoop",
"haxe.io.Bytes",
"haxe.ds.IntMap",
"haxe.ds.List",
"haxe.ds._List.ListNode",
"haxe.ds._List.ListIterator",
"haxe.ds.ObjectMap",
"haxe.ds.StringMap",
"haxe.format.JsonParser",
"haxe.io.Path",
"haxe.rtti.Meta",
"minject.InjectionConfig",
"minject.Injector",
"minject.InjecteeSet",
"minject.InjecteeDescription",
"minject.Reflector",
"minject.point.MethodInjectionPoint",
"minject.point.ConstructorInjectionPoint",
"minject.point.NoParamsConstructorInjectionPoint",
"minject.point.PostConstructInjectionPoint",
"minject.point.PropertyInjectionPoint",
"minject.result.InjectionResult",
"minject.result.InjectValueResult",
"mmvc.base.CommandMap",
"mmvc.base.ContextError",
"mmvc.base.ViewMapBase",
"mmvc.base.MediatorMap",
"mmvc.base.MappingConfig",
"mmvc.base.TriggerMap",
"mmvc.base.ViewMap",
"mmvc.impl.TriggerCommand",
"msignal.Signal",
"msignal.Signal0",
"msignal.Signal1",
"msignal.Signal2",
"msignal.Slot",
"msignal.Slot0",
"msignal.Slot1",
"msignal.Slot2",
"msignal.SlotList",
"ogg._Ogg.Ogg_helper",
"openal.ALError",
"sdl._SDL.SDL_helper",
"snow.Snow",
"snow.api.Emitter",
"snow.api.Promise",
"snow.api.Promises",
"snow.api.Timer",
"snow.api.buffers.ArrayBufferView",
"snow.core.native.Runtime",
"snow.core.native.assets.Assets",
"snow.types.AudioData",
"snow.core.native.audio.AudioDataOGG",
"snow.core.native.audio.OGG",
"snow.core.native.audio.AudioDataPCM",
"snow.core.native.audio.PCM",
"snow.core.native.audio.AudioDataWAV",
"snow.core.native.audio.WAV",
"snow.core.native.audio.NativeAudioData",
"snow.core.native.io.IO",
"snow.modules.openal.ALSound",
"snow.modules.openal.ALStream",
"snow.modules.openal.Audio",
"snow.modules.sdl.IO",
"snow.modules.sdl.Runtime",
"snow.systems.assets.Asset",
"snow.systems.assets.AssetJSON",
"snow.systems.assets.Assets",
"snow.systems.audio.Audio",
"snow.systems.audio.AudioInstance",
"snow.systems.audio.AudioSource",
"snow.systems.input.Input",
"snow.systems.io.IO",
"snow.types.Config",
"snow.types.ImageData",
"snow.types.SystemEvent",
"snow.types.WindowEvent",
"snow.types.KeyEvent",
"snow.types.TextEvent",
"snow.types.MouseEvent",
"snow.types.TouchEvent",
"snow.types.GamepadEvent",
"snow.types.InputEvent",
"snow.types.ModState",
#endif
 0 };
} // namespace hx
void __files__boot() { __hxcpp_set_debugger_info(hx::__hxcpp_all_classes, hx::__hxcpp_all_files_fullpath); }
