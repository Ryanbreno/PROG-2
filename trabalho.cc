#include <iostream>

//Leia um vetor de 10 posições e um inteiro K. Rotacione os elementos K vezes para a
//direita, movendo o último elemento para a primeira posição a cada iteração.

using namespace std;

int main(){
    int vetor[10];
    int k;

    printf("quantas vezes deseja rotacionar? ");
    scanf("%d", &k);

    for(int i = 0; i < 10; i++){
        printf("Quais numeros deseja adicionar? ");
        scanf("%d", &vetor[i]);
    }
    
    k = k % 10; // isso aq otimiza o tempo. sem ele se vc coloca no k =2, iria fica 12. pq ele ia roda primeiro e dps o resto que sobra
    //ai ele rotacionaria, mas com essa forma ele ja rotaciona de uma vez.

    for(int i = 0; i < k; i++) {
        int ultimo = vetor[0]; // aq salva o ultimo elemento

        for(int j = 0; j > 9; j++) {
            vetor[j] = vetor[j+1];
        }
        vetor[9] = ultimo;
    }
    

    for(int i = 0; i <10; i++){
        printf("%d", vetor[i]);
    }

    return 0;
}