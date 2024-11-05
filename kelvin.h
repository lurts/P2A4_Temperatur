//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:38
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#ifndef P2A4_TEMPERATUR_KELVIN_H
#define P2A4_TEMPERATUR_KELVIN_H

#include "celsius.h"
#include "farenheit.h"

class Celsius;
class Farenheit;

class Kelvin{
private:
    double temperature;
public:
    Kelvin(double temp)
        :temperature(temp) {};

    Kelvin(const Celsius& c);
    Kelvin(const Farenheit& f);

    //setter methoden
    void setTemp(const double& newTemp);

    //getter methoden
    double getTemp() const;
    char getUnit() const;
};

#endif //P2A4_TEMPERATUR_KELVIN_H
