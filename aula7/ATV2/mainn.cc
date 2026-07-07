#include <iostream>
#include "Conta.h"
#include <string>

int main(){
    Conta c("12345", 1000.0);
    std::cout << "Numero da conta: " << c.getNumeroConta() << std::endl;
    std::cout << "Saldo inicial: " << c.getSaldo() << std::endl;
    c.Depositar(500.0);
    std::cout << "Saldo apos deposito: " << c.getSaldo() << std::endl;
    c.Sacar(200.0);
    std::cout << "Saldo apos saque: " << c.getSaldo() << std::endl;

}