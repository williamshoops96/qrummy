// This file was generated based on /Users/caseywilliams/Documents/Apps/qrummy/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}
namespace g{struct Qreader;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New2_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static uSStrong< ::g::Qreader*> Qreader_;
    static uSStrong< ::g::Qreader*>& Qreader() { return MainView_typeof()->Init(), Qreader_; }
    static uSStrong< ::g::Fuse::Font*> regular_;
    static uSStrong< ::g::Fuse::Font*>& regular() { return MainView_typeof()->Init(), regular_; }
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;

    void ctor_3();
    void InitializeUX();
    static MainView* New2();
};
// }

} // ::g
