//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:44:21
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#ifndef P2A4_TEMPERATUR_CELSIUS_H
#define P2A4_TEMPERATUR_CELSIUS_H

#include "farenheit.h"
#include "kelvin.h"

class Kelvin;
class Farenheit;

class Celsius{
private:
    double temperature;
public:
    Celsius(double temp)
        :temperature(temp) {};

    Celsius(const Kelvin& k);
    Celsius(const Farenheit& f);

    //setter methoden
    void setTemp(const double& newTemp);

    //getter methoden
    double getTemp() const;
    char getUnit() const;
};

//geforderte methode um temperaturen zu vergleichen
bool istGleich(Celsius x, Celsius y);

#endif //P2A4_TEMPERATUR_CELSIUS_H
