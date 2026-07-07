#ifndef TERMOMETRO_H
#define TERMOMETRO_H
#include <string>

class Termometro{
    private:
        double temperaturaCelsius;
    public:
        Termometro();
        void setTemperaturaCelsius(double temperatura);
        double getTemperaturaCelsius()const;
        double getTemperaturaFahrenheit()const;
        
};




#endif