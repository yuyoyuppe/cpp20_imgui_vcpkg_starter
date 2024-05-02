#pragma once
namespace ui {
struct IUpdatable {
    virtual void onUpdate() = 0;
};
}