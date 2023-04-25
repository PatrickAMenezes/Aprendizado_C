#include <stdio.h>
#include <stdlib.h>

// Pré-incremento e pós-incremento

int main()
{
    int x = 1, y = 2;

    // Pré-incremento
    x = ++y; // x = y - 1 | y -= 1

    /*
        Ele primeiro incrementa mais 1 a variável y
        e o x recebe esse valor incrementado
    */

    printf("Pre-incremento:\n");
    printf("x: %i\n", x);
    printf("y: %i\n", y);

    // Pós-incremento
    x = y--; // x = y | y -= 1

    /*
        Nesse segundo caso, o x recebe o valor de y
        primeiro, e depois o y é incrementado
    */

    printf("\nPos-incremento:\n");
    printf("x: %i\n", x);
    printf("y: %i\n", y);

    return 0;
}
