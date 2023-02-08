#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Para atribuir os valores do vetor na mesma linha
    int vet1[5] = {5, 2, 3};
    // Os demais espaços que não foram definidos valores serão iguais a 0

    for(int i = 0; i < 5; i++){
        printf("%i", vet1[i]);
    } printf("\n");

    int vet2[5] = {9, 3, 2, 5, 6, 0, 12};
    // Se você colocar valores a mais eles não são mostrados na tela
    for(int i = 0; i < 5; i++){
        printf("%i", vet2[i]);
    } printf("\n");

    return 0;
}
