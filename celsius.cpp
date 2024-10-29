//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:21
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#include "celsius.h"
#include <cmath>

Celsius::Celsius(const Kelvin& k) {
    temperature = k.getTemp() - 273.15;
}

Celsius::Celsius(const Farenheit &f) {
    temperature = (f.getTemp() - 32.0) / 1.8;
}

void Celsius::setTemp(const double &newTemp) {
    temperature = newTemp;
}

double Celsius::getTemp() const {
    return temperature;
}

bool Celsius::istGleich(Celsius x, Celsius y) {
    double deltaTemp = abs(x.getTemp() - y.getTemp());

    return deltaTemp <= 0.01;
}