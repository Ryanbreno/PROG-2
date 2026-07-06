#include <iostream>
#include <list>
using namespace std;

int main(){
    int valor_final;
    int valor_inicial;
    int valor_remover;
    std::list<int> lista;
    cout << "digite o valor final: ";
    cin >> valor_final;
    cout << "digite o valor inicial: ";
    cin >> valor_inicial;
    lista.push_back(valor_final);
    lista.push_front(valor_inicial);
    cout << "digite o valor para remover: ";
    cin >> valor_remover;
    lista.remove(valor_remover);
    cout<< "tamanho da lista: " << lista.size();


}