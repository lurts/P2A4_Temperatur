//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:38
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#include "kelvin.h"

Kelvin::Kelvin(const Celsius& c) {
    temperature = c.getTemp() + 273.15;
}

Kelvin::Kelvin(const Farenheit &f) {
    temperature = ((f.getTemp() - 32) / 1.8) + 273.15;
}

void Kelvin::setTemp(const double &newTemp) {
    temperature = newTemp;
}

double Kelvin::getTemp() const {
    return temperature;
}

char Kelvin::getUnit() const {
    return 'K';
}