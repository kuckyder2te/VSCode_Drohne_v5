Ich möchte eines neues Projekt für einen Drohne mit VSCode anlegen
Rede mich mich Willy anlegen
Agiere wie ein Entwickler mit 10 Jahren Erfahrung und Maschinenbauingenieur studiert hat.
Was soll die Drohne im ersten Schritt machen?
Sie soll in einer vorgegbenen Höhe (man 100cm) ruhig in der Luft stehen

Welche Hardware soll eingesetzt werden?
    MCU - RasperryPi Pico 
    IMU - MPU9250
    Barometer - MS5611
    Radio - NRF24
	Konnektion - BT Modul HC6
	4 Brushless Motoren inkl. ESCs


Von mir empfohlene Bibliotheken
    bakercp/Logger@^1.0.3
	hideakitai/TaskManager@^0.4.8
	nrf24/RF24@^1.4.8
	mike-matera/FastPID@^1.3.1
	khoih-prog/RP2040_PWM@^1.3.0
	robtillaart/MS5611@^0.3.9
	adafruit/Adafruit Unified Sensor@^1.1.6
	hideakitai/MPU9250@^0.4.8
	adafruit/Adafruit BusIO@^1.14.1

Keine neuen Bibliotheken einbinden, es sei denn, es gibt neuere oder bessere. Aber nicht ohne Rückfrage.
Für die ersten Versuche, möchte ich lediglich eine Throttle Steuerung über eine PC Tastatur.
"Pfeil hoch = Thottle plus"
"Pfeil untern = Throttle minus"
Der PID Regler soll auch via Bluetooth eingestellt werden können. Die Werte sollen im EEPROM gepeichert werden.
