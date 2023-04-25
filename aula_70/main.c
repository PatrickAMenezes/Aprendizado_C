#include <stdio.h>
#include <stdlib.h>

// Pr�-incremento e p�s-incremento

int main()
{
    int x = 1, y = 2;

    // Pr�-incremento
    x = ++y; // x = y - 1 | y -= 1

    /*
        Ele primeiro incrementa mais 1 a vari�vel y
        e o x recebe esse valor incrementado
    */

    printf("Pre-incremento:\n");
    printf("x: %i\n", x);
    printf("y: %i\n", y);

    // P�s-incremento
    x = y--; // x = y | y -= 1

    /*
        Nesse segundo caso, o x recebe o valor de y
        primeiro, e depois o y � incrementado
    */

    printf("\nPos-incremento:\n");
    printf("x: %i\n", x);
    printf("y: %i\n", y);

    return 0;
}
