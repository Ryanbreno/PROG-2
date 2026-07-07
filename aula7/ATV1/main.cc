#include <iostream>
#include "Gato.h"
#include <string>

int main(){
    std::string nome_escolha;
    Gato g("Mingau", 3, 4.5);
    std::cout << "nome: " << g.getNome() << std::endl;
    std::cout << "idade: " << g.getIdade() << std::endl;
    std::cout << "peso: " << g.getPeso() << std::endl;
    std::cout << "digite um nome: " << std::endl;
    std::cin >> nome_escolha;
    g.setNome(nome_escolha);
    std::cout << "nome: " << g.getNome() << std::endl;
}