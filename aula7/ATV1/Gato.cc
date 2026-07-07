#include <iostream>
#include "Gato.h"
#include <string>

Gato::Gato(std::string n, int idade, double p):nome(n), idade(idade),peso(p){

}

std::string Gato::getNome()const{
    return nome;
}

int Gato::getIdade()const{
    return idade;
}

double Gato::getPeso()const{
    return peso;
}

void Gato::setPeso(double p){
    if(p > 0){
        peso = p;
    }
    else{
        std::cout << "Peso invalido" << std::endl;
    }
}
void Gato::setIdade(int i){
    if(i > 0){
        idade = i;
    }
    else{
        std::cout << "Idade invalida" << std::endl;
    }
}

void Gato::setNome(std::string n){
    if(n != ""){
        nome = n;
    }
    else{
        std::cout << "Nome invalido" << std::endl;
    }
}



