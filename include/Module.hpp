#pragma once

#include <ModuleConfiguration.hpp>
#include <core/mw/CoreModule.hpp>

namespace core {
namespace hw {
class Pad;
class EXTChannel;
}
}

#if CORE_USE_CONFIGURATION_STORAGE
namespace core {
namespace mw {
class CoreConfigurationStorage;
}
}
#endif

class Module:
    public core::mw::CoreModule
{
public:
// --- DEVICES ----------------------------------------------------------------
    static core::hw::Pad& d1;
    static core::hw::Pad& d2;
    static core::hw::Pad& d3;
    static core::hw::Pad& d4;
    static core::hw::Pad& d5;
    static core::hw::Pad& d6;
    static core::hw::Pad& d7;
    static core::hw::Pad& d8;

    static core::hw::Pad& a1;
    static core::hw::Pad& a2;
    static core::hw::Pad& a3;
    static core::hw::Pad& a4;
    static core::hw::Pad& a5;
    static core::hw::Pad& a6;
    static core::hw::Pad& a7;
    static core::hw::Pad& a8;
// ----------------------------------------------------------------------------

    static bool
    initialize();


   #if CORE_USE_CONFIGURATION_STORAGE
    static core::mw::CoreConfigurationStorage& configurationStorage;
   #endif
    Module();
    virtual ~Module() {}
};
