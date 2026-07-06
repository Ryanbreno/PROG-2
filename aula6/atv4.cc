#include <iostream>
#include <stack>
#include <string>
using namespace std; 

int main(){
    stack <string> pilha;
    string guarda;
    cout << "digite uma palavra: (se for sair digite {fim})" << endl;
    cin >> guarda;

    while(guarda != "fim"){
        pilha.push(guarda);
        cout << "digite uma palavra: ";
        cin >> guarda;
    }

    cout << "tamanho da pilha: " << pilha.size() << endl;
    while(!pilha.empty()){
        cout << pilha.top() << endl;
        pilha.pop();
    }



}