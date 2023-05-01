#include <stdio.h>
#include <stdlib.h>

// Aloca��o Din�mica Pt.1

struct estrutura{
    int a, b, c;
};

int main()
{
    // Para trabalhar com aloca��o din�mica, uma das fun��es principais � a sizeof()
    int x;
    double y;
    int palavra[10];

    struct estrutura abc;

    // O sizeof nos permite calcular o tamanho de um tipo de dado
    printf("x: %li | y: %li\n", sizeof(x), sizeof(y));

    printf("Short: %li\n", sizeof(short));

    printf("String[10]: %li\n", sizeof(palavra));

    printf("Estrutura: %li\n", sizeof(abc));

    return 0;
}
