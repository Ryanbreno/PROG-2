#include <iostream>

using namespace std;

inline float conversor(float vlr_dolar){
    float resultado = vlr_dolar * 5.00;
    return resultado;
}

int main(){

    float dolar = 0;

    cout << "Quantos dolares deseja converter: " << endl;
    cin >> dolar;
   
    float valor_convertido = conversor(dolar);

    cout << "O valor convertido em reais é: " << valor_convertido << endl;


}