#include <iostream>

using namespace std;

int soma(int vlr1, int vlr2){
    int resultado;
    resultado = vlr1 + vlr2;
    return resultado;
}

int main(){
    int valor_1;
    int valor_2;

    cout << "digite valor 1; " << endl;
    cin >> valor_1;
    cout << "digite o valor 2; " << endl; 
    cin >> valor_2;

    int total = soma(valor_1, valor_2);
    cout << "a soma dos valores são: " << total; 
}