#include <iostream>
using namespace std;

int main(){
    double a[100];
    double *ptr = a;
    float media = 0;
    int soma = 0;

    for(int i = 0; i <4; i++){
        cout << "digite os valores: " << endl;
        cin >> *(a + i);
        soma += *(ptr + i);

        
    }
        media = soma / 4;

    cout << "resultado da soma: " << soma << endl;
    cout << "resultado da media: " << media << endl;
}