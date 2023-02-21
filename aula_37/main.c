#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Funções que recebem matrizes
    int matriz[3][3] = {{1, 0, 0},{0, 1, 0},{0, 0, 1}};

    void matriz_print(int matriz[3][3]);
    matriz_print(matriz);

    system("pause");
    return 0;
}

void matriz_print(int matriz[3][3]){
    for(int i = 0, j = 0; i < 3; i++, j = 0){
        for(; j < 3; j++){
            printf("%i ", matriz[i][j]);
        }printf("\n");
    }
}
