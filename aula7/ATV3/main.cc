#include <iostream>
#include "Termometro.h"
#include <string>

int main(){
    std::cout << "Digite a temperatura em Celsius: ";
    double temperatura;
    std::cin >> temperatura;
    Termometro termometro;
    termometro.setTemperaturaCelsius(temperatura);
    std::cout << "Temperatura em Celsius: " << termometro.getTemperaturaCelsius() << std::endl;
    std::cout << "Temperatura em Fahrenheit: " << termometro.getTemperaturaFahrenheit() << "°F" << std::endl;
    return 0;
}