#include <Arduino.h>
#include "system.h"

// Module einbinden
#include "imu.h"
#include "barometer.h"
#include "motors.h"
#include "bluetooth.h"
#include "flight_controller.h"
#include "storage.h"

namespace System
{

    void init()
    {
        // Reihenfolge ist wichtig!

        Storage::init();
        Bluetooth::init();
        IMU::init();
        Barometer::init();
        Motors::init();
        FlightController::init();
    }

    void update()
    {
        // 1. Eingaben lesen
        Bluetooth::update();

        // 2. Sensoren aktualisieren
        IMU::update();
        Barometer::update();

        // 3. Regelung
        FlightController::update();

        // 4. Motoren setzen
        Motors::update();

        auto input = Bluetooth::getInput();
        Serial.println(input.throttle);
    }

}