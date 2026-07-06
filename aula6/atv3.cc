#include <iostream>
#include <queue>
using namespace std;

int main(){
    std::queue<int> fila;

    fila.push(15);
    fila.push(20);

    cout << "Frente da fila: " << fila.front() << endl;

    fila.pop();
    cout << "Nova frente: " << fila.front() << endl;

    cout << "tamanho da fila: " << fila.size() << endl;

    while(!fila.empty()){
        cout << "Removendo: " << fila.front() << endl;
        fila.pop();
    }

}