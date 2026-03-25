#include "motors.h"

#include "pins.h"
#include <Arduino.h>
#include <RP2040_PWM.h>
#include <Servo.h>

namespace Motors
{

    static Servo esc;
    static float throttle = 0.0f;

    const int motorPin = PIN_MOTOR_FL;

    void init()
    {
       
    esc.attach(motorPin, 1000, 2000);

    // MAX senden
    esc.writeMicroseconds(2000);
    delay(3000);

    // MIN senden
    esc.writeMicroseconds(1000);
    delay(3000);

    }

    void update()
    {
        int pulse = 1000 + (throttle * 1000); // 1000–2000 µs
        esc.writeMicroseconds(pulse);
    }

    void setMotorSpeeds(float m1, float, float, float)
    {
        throttle = m1;
    }

    // static float m1, m2, m3, m4;
    // static RP2040_PWM* pwm = nullptr;
    // static float throttle = 0.0f;

    // const int motorPin = PIN_MOTOR_FL;   // ← DAS ist die fehlende Zeile
    // const float pwmFreq = 50.0f;

    // void init() {}

    // void update() {
    //     // später PWM setzen
    // }

    // void setMotorSpeeds(float _m1, float _m2, float _m3, float _m4) {
    //     m1 = _m1;
    //     m2 = _m2;
    //     m3 = _m3;
    //     m4 = _m4;
    // }

}