#include <iostream>



inline float conversor(float vlr_dolar){ 
    float resultado = vlr_dolar * 5.00;
    return resultado;
}
int main(){

    float dolar = 0;

    std::cout << "Quantos dolares deseja converter: ";
    std::cin >> dolar;
   
    float valor_convertido = conversor(dolar);

    std::cout << "O valor convertido em reais é: " << valor_convertido;


}