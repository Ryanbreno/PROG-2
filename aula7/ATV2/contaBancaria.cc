#include <iostream>
#include "Conta.h"
#include <string>

Conta::Conta(std::string numero, float saldo):numeroConta(numero), saldo(saldo){

}

std::string Conta::getNumeroConta()const{
    return numeroConta;
}

float Conta::getSaldo()const{
    return saldo;
}

void Conta::Depositar(float valor){
    if(valor > 0){
        saldo += valor;
    }
    else{
        std::cout << "Valor invalido" << std::endl;
    }
}

void Conta::Sacar(float valor){
    if(valor > 0 && valor <= saldo){
        saldo -= valor;
    }
    else{
        std::cout << "Valor invalido" << std::endl;
    }
}


