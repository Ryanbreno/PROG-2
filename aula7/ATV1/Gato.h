#ifndef GATO_H
#define GATO_H
#include <string>

class Gato{
private:
    std::string nome;
    int idade;
    double peso;
public:
    Gato(std::string n, int i, double p);
    std::string getNome()const;
    int getIdade()const;
    double getPeso()const;
    void setPeso(double p);
    void setIdade(int i);
    void setNome(std::string n);
};


#endif