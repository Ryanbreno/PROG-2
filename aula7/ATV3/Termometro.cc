#include "Termometro.h"
#include <iostream>


Termometro::Termometro(){
    temperaturaCelsius = 25.0;
}

void Termometro::setTemperaturaCelsius(double temperatura){
    if(temperatura < -273.15){
        std::cout << "Temperatura invalida" << std::endl;
    }
    else{
        temperaturaCelsius = temperatura;
    }
}

double Termometro::getTemperaturaCelsius()const{
    return temperaturaCelsius;
}

double Termometro::getTemperaturaFahrenheit()const{
    return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
}