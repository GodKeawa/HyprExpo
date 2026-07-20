#pragma once

#include <hyprland/src/render/pass/PassElement.hpp>
#include <hyprland/src/helpers/math/Math.hpp>
#include <hyprland/src/render/OpenGL.hpp>
#include <optional>
#include <vector>

class COverviewPassElement : public IPassElement {
  public:
    COverviewPassElement();

    virtual std::vector<UP<IPassElement>> draw();
    virtual bool                                  needsLiveBlur();
    virtual bool                                  needsPrecomputeBlur();
    virtual std::optional<CBox>                   boundingBox();
    virtual CRegion                               opaqueRegion();
    virtual const char*                           passName();
    virtual ePassElementType                      type();
};
