#include <iostream>

using namespace std;

int main(){
    string nome;
    int idade;
    cout << "digite seu nome: " << endl;
    getline(cin, nome);
    cout << "digite sua idade: " << endl;
    cin >> idade;


    cout << nome << endl;
    cout << idade << endl;

    return 0;
}