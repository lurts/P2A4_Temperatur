//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:30
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#ifndef P2A4_TEMPERATUR_FARENHEIT_H
#define P2A4_TEMPERATUR_FARENHEIT_H

#include "celsius.h"
#include "kelvin.h"

class Celsius;
class Kelvin;

class Farenheit{
private:
    double temperature;
public:
    Farenheit(double temp)
        :temperature(temp) {};

    Farenheit(const Celsius& c);
    Farenheit(const Kelvin& k);

    //setter methoden
    void setTemp(const double& newTemp);

    //getter methoden
    double getTemp() const;
    char getUnit() const;
};

#endif //P2A4_TEMPERATUR_FARENHEIT_H
