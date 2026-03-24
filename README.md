# 🚁 Drone V5 – Flight Controller (Raspberry Pi Pico)

## 📌 Projektbeschreibung

Dieses Projekt ist ein minimalistischer Flight Controller für eine Quadrocopter-Drohne basierend auf dem **Raspberry Pi Pico (RP2040)**.

Ziel der ersten Entwicklungsphase ist ein **stabiler Schwebeflug auf ca. 100 cm Höhe**.

Der Fokus liegt auf:

* sauberer Software-Architektur
* stabiler Regelung (PID)
* schrittweisem, testbarem Aufbau

---

## 🎯 Aktueller Entwicklungsstand

### ✅ Implementiert

* Projektstruktur (modular, erweiterbar)
* Zentrales `System`-Modul
* Modul-Interfaces (Sensoren, Aktoren, Kommunikation)
* Simulierter Bluetooth-Input über Serial
* Throttle-Steuerung über Tastatur (`w` / `s`)

### 🚧 In Arbeit

* Sensoranbindung (IMU, Barometer)
* Motorsteuerung (ESC PWM)
* PID-Regelung
* echtes Bluetooth (HC-06)

---

## 🧱 Architektur

Das System ist in klar getrennte Module aufgebaut:

```
System
 ├── Sensors (IMU, Barometer)
 ├── Control (Flight Controller, PID)
 ├── Actuators (Motoren)
 ├── Communication (Bluetooth)
 └── Storage (EEPROM)
```

### 🔄 Datenfluss

```
Input (Bluetooth/Serial)
        ↓
Sensoren
        ↓
Flight Controller (PID)
        ↓
Motoren
```

---

## 📁 Projektstruktur

```
src/
 ├── main.cpp
 ├── system.cpp / system.h
 ├── imu.cpp / imu.h
 ├── barometer.cpp / barometer.h
 ├── motors.cpp / motors.h
 ├── bluetooth.cpp / bluetooth.h
 ├── flight_controller.cpp / flight_controller.h
 ├── pid.cpp / pid.h
 ├── storage.cpp / storage.h
```

---

## ⚙️ Hardware (geplant)

* MCU: Raspberry Pi Pico (RP2040)
* IMU: MPU9250
* Barometer: MS5611
* Funk: NRF24
* Bluetooth: HC-06
* 4x Brushless Motor + ESC

---

## 🎮 Steuerung (aktuell)

Simulation über Serial Monitor:

| Taste | Funktion            |
| ----- | ------------------- |
| `w`   | Throttle erhöhen    |
| `s`   | Throttle verringern |

---

## 🧪 Testanleitung

1. Projekt flashen
2. Serial Monitor öffnen

   * Baudrate: **115200**
3. Eingaben testen:

   * `w` drücken → Wert steigt
   * `s` drücken → Wert sinkt

### Erwartete Ausgabe

```
0.00
0.05
0.10
...
```

---

## ⚠️ Hinweise

* Aktuell wird Bluetooth über Serial simuliert
* Keine echte Motoransteuerung aktiv
* Keine Regelung aktiv (nur Architektur)

---

## 🧭 Entwicklungsstrategie

Dieses Projekt folgt strikt:

> **Schritt für Schritt – erst funktionierend, dann erweitern**

* Kein vorschnelles Refactoring
* Keine unnötige Komplexität
* Jede Funktion wird isoliert getestet

---

## 👤 Entwicklerhinweis

Projekt wird iterativ aufgebaut mit Fokus auf:

* Stabilität
* Nachvollziehbarkeit
* Wartbarkeit

---

## 📌 Nächste Schritte

* Sensorintegration (IMU)
* Motor-PWM testen
* Closed-Loop Regelung vorbereiten

---

## 📝 Lizenz

Privates Entwicklungsprojekt
