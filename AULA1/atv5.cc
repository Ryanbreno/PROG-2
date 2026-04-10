#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    int idade;
    float nota1, nota2, nota3, media;
    cout << "digite seu nome: " << endl;
    getline(cin, nome);
    cout << "digite sua idade: " << endl;
    cin >> idade;
    cout << "digite sua nota1: " << endl;
    cin >> nota1;
    cout << "digite sua nota2: " << endl;
    cin >> nota2;
    cout << "digite sua nota3: " << endl;
    cin >> nota3;

    media = (nota1 + nota2 + nota3) /3;

    cout << "nome: " << nome << endl;
    cout << "idade: " << idade << endl;
    cout << "media: " << setprecision(2) << media << endl;
    

    return 0;
}