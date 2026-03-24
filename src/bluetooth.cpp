#include "bluetooth.h"
#include <Arduino.h>

namespace Bluetooth {

    static ControlInput input;

    void init() {
        Serial.begin(115200);
        input.throttle = 0.0f;
    }

    void update() {
        if (Serial.available()) {
            char c = Serial.read();

            if (c == 'w') {
                input.throttle += 0.05f;
            }
            else if (c == 's') {
                input.throttle -= 0.05f;
            }

            // Begrenzen
            if (input.throttle < 0.0f) input.throttle = 0.0f;
            if (input.throttle > 1.0f) input.throttle = 1.0f;
        }
    }

    ControlInput getInput() {
        return input;
    }

}