#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Funções que recebem vetores como argumento
    int vetor[10] = {0, 7, 2, 3, 6, 8, 9, 1, 4, 5};
    int i;

    void crescente(int vetor[]);
    crescente(vetor); // 10 é a quantidade de itens do vetor

    printf("O seu vetor em ordem crescente fica da seguinte forma: ");
    for(i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    } printf("\n");

    void decrescente(int vetor[]);
    decrescente(vetor);

    printf("E o seu vetor em ordem decrescente fica: ");
    for(i = 0; i < 10; i++){
        printf("%i ", vetor[i]);
    } printf("\n\n");

    system("pause");
    return 0;
}

void crescente(int vetor[]){
    for(int i = 1, v; i < 10; i++){
        v = vetor[i-1];
        if(vetor[i] < v){
            vetor[i-1] = vetor[i];
            vetor[i] = v;
            crescente(vetor);
        }
    }
}

void decrescente(int vetor[]){

    for(int i = 1, v; i < 10; i++){
        v = vetor[i-1];
        if(vetor[i] > v){
            vetor[i-1] = vetor[i];
            vetor[i] = v;
            decrescente(vetor);
        }
    }
}
