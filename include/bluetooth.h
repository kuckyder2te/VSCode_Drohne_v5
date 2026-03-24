#pragma once

namespace Bluetooth {

    struct ControlInput {
        float throttle;
    };

    void init();
    void update();
    ControlInput getInput();

}