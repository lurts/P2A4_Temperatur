//Modul:    Programmieren 2 - Praktikum
//Datum:    2024-10-29 - 21:43:50
//Name:     Lars Ebbeke
//Aufgabe:  P2A4_Temperatur
//Todo:
//-

#include <iostream>
#include "celsius.h"

template <typename T1, typename T2>
bool eval(T1 a, T2 b, bool expect) {
    bool passed = (istGleich(a, b) == expect);
    std::cout   << std::boolalpha
                << "Object A: " << a.getTemp() << " " << a.getUnit() << ",\n"
                << "Object B: " << b.getTemp() << " " << b.getUnit() << "\n"
                << "Expected: " << expect << ", got: " << istGleich(a, b);
    if (passed) {
        std::cout << "\nTest passed!\n\n";
    } else {
        std::cout << "\nTest FAILED!\n\n";
    }

    return passed;
}



int main() {
    bool tests[] = {
            eval(Celsius(100.0),    Celsius(105.2),     false),
            eval(Celsius(15000.0),  Celsius(15000.0),   true),
            eval(Kelvin(273.15),    Celsius(0.0),       true),
            eval(Kelvin(100.0),     Kelvin(100.0),      true),
            eval(Kelvin(100.0),     Celsius(-173.15),   true),
            eval(Farenheit(451.0),  Celsius(232.78),    true),
            eval(Farenheit(45100),  Kelvin(25310.93),   true),
            eval(Kelvin(1337.0),    Farenheit(1946.93), true),
            eval(Celsius(123.4),    Kelvin(45.6),       false),
            eval(Celsius(0.0),      Celsius(0.005),     true)
    };

    int passed = 0;
    int total = 0;

    for (bool result : tests) {
        if (result) {
            passed++;
            total++;
        }
        else {
            total++;
        }
    }

    std::cout << passed << " out of " << total << " tests passed!";

    return 0;
}
