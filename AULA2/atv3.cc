#include <iostream>

using namespace std;

int main() {
    int numero;
    int soma_divisores = 0;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "digite apenas numeros maiores que zero." << endl;
        return 0;
    }

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }

        if (soma_divisores > numero) {
            break;
        }
    }

    if (soma_divisores == numero) {
        cout << "Número perfeito" << endl;
    } else {
        cout << "Não é perfeito" << endl;
    }

    return 0;
}