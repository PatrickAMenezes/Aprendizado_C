#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][3] = {};

    printf("Insira os valores da sua matriz 3x3:\n");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("a%i%i = ", i+1, j+1);
            scanf("%i", &matriz[i][j]);
        }

    }

    printf("\nSua matriz 3x3 ficou da seguinte forma:\n");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("%i ", matriz[i][j]);
        } printf("\n");

    }

    return 0;
}
