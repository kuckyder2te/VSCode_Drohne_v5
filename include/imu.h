#pragma once

namespace IMU {

    struct Data {
        float pitch;
        float roll;
        float yaw;
    };

    void init();
    void update();
    Data getData();

}