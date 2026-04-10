#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    string nome;
    float salario;
    cout << "digite seu nome: " << endl;
    getline(cin, nome);
    cout << "digite sua salario: " << endl;
    cin >> salario;
    
    cout  << "nome: " << nome << endl;
    cout << "Salario: " << setprecision(4) << salario << endl;
    return 0;
}