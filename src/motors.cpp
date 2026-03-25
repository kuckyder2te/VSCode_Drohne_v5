#include "motors.h"
#include "pins.h"

#include <Arduino.h>
#include <RP2040_PWM.h>

namespace Motors {

    // PWM Objekt (kein Pointer!)
    static RP2040_PWM motor(PIN_MOTOR_FL, 50.0f, 5.0f);

    static float throttle = 0.0f;

    const float pwmFreq = 50.0f;

    void init() {
        // ESC sicher auf Minimum setzen
        motor.setPWM(PIN_MOTOR_FL, pwmFreq, 5.0f); // ~1000 µs

        // ESC Zeit zum Armen geben
        delay(3000);
    }

    void update() {
        // Throttle begrenzen
        if (throttle < 0.0f) throttle = 0.0f;
        if (throttle > 1.0f) throttle = 1.0f;

        // µs berechnen (1000–2000)
        float pulseWidth = 1000.0f + (throttle * 1000.0f);

        // Duty Cycle berechnen (20ms Periode → 50 Hz)
        float dutyCycle = (pulseWidth / 20000.0f) * 100.0f;

        // PWM setzen
        motor.setPWM(PIN_MOTOR_FL, pwmFreq, dutyCycle);
    }

    void setMotorSpeeds(float m1, float, float, float) {
        throttle = m1;
    }

}