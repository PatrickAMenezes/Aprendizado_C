#include <stdio.h>
#include <stdlib.h>

// Ponteiros e vetores

int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    int *pnt = x;
    /*
    Nesse caso, nós podemos não colocar o & para apontar
    para o endereço de memória do vetor, pois o compilador
    aponta automaticamente para o endereço do primeiro vetor
    */
    printf("%i\n", *pnt); // *pnt = x[0]

    // Outra forma de fazer, caso queira apontar para um vetor específico:
    int *pnt_2 = &x[3];

    printf("%i\n", *pnt_2); // *pnt_2 = x[3]

    return 0;
}
