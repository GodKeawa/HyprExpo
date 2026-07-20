#pragma once

#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/config/values/types/ColorValue.hpp>
#include <hyprland/src/config/values/types/FloatValue.hpp>
#include <hyprland/src/config/values/types/IntValue.hpp>
#include <hyprland/src/config/values/types/StringValue.hpp>

inline HANDLE PHANDLE      = nullptr;



struct SConfig {
    SP<Config::Values::CIntValue>   scrollMovesUpDown;
    SP<Config::Values::CFloatValue> defaultZoom;
    SP<Config::Values::CIntValue>   followMouse;
    SP<Config::Values::CIntValue>   gestureDistance;
};

inline UP<SConfig> configValues;
