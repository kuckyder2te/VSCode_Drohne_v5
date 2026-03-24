#include "motors.h"

namespace Motors {

    static float m1, m2, m3, m4;

    void init() {}

    void update() {
        // später PWM setzen
    }

    void setMotorSpeeds(float _m1, float _m2, float _m3, float _m4) {
        m1 = _m1;
        m2 = _m2;
        m3 = _m3;
        m4 = _m4;
    }

}