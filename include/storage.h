#pragma once

namespace Storage {

    struct PIDValues {
        float kp;
        float ki;
        float kd;
    };

    void init();
    PIDValues loadPID();
    void savePID(PIDValues values);

}