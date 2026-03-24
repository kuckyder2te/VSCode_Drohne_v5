#pragma once

namespace Barometer {

    struct Data {
        float altitude;
    };

    void init();
    void update();
    Data getData();

}