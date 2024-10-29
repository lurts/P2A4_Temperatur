//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:30
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#include "farenheit.h"

Farenheit::Farenheit(const Celsius &c) {
    temperature = c.getTemp() * 1.8 + 32;
}

Farenheit::Farenheit(const Kelvin &k) {
    temperature = ((k.getTemp() - 273.15) * 1.8) + 32;
}

void Farenheit::setTemp(const double &newTemp) {
    temperature = newTemp;
}

double Farenheit::getTemp() const {
    return temperature;
}