#include <Arduino.h>
#include "system.h"

void setup() {
    System::init();
}

void loop() {
    System::update();
}
    