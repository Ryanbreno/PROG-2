#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta{
    private:
        std::string numeroConta;
        float saldo = 0.0;
    public:
        Conta(std::string numeroConta, float saldo);
        std::string getNumeroConta()const;
        float getSaldo()const;
        void Depositar(float valor);
        void Sacar(float valor);
};


#endif