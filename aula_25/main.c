#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[3] = {1, 2, 3};

    // Matrizes: Método 1
    int matriz_1[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Matrizes: Método 2
    int matriz_2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    /* Uma matriz pode ser também tridimensional e quadridimensional, por exemplo.
        Ex:
        matriz[3][3][2] - Matriz tridimensional | matriz[3][4][3][3] - Matriz quadridimensional*/

    // l = linhas / c = colunas
    int l = 0, c = 0;

    printf("Essa e a sua matriz tres por tres:\n");
    for(; l < 3; l++){

        for(; c < 3; c++){
            printf("%i ", matriz_2[l][c]);
        } c = 0, printf("\n");

    }

    return 0;
}
