#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Para atribuir os valores do vetor na mesma linha
    int vet1[5] = {5, 2, 3};
    // Os demais espa�os que n�o foram definidos valores ser�o iguais a 0

    for(int i = 0; i < 5; i++){
        printf("%i", vet1[i]);
    } printf("\n");

    int vet2[5] = {9, 3, 2, 5, 6, 0, 12};
    // Se voc� colocar valores a mais eles n�o s�o mostrados na tela
    for(int i = 0; i < 5; i++){
        printf("%i", vet2[i]);
    } printf("\n");

    return 0;
}
