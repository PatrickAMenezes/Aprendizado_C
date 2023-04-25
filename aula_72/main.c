#include <stdio.h>
#include <stdlib.h>

// Ponteiros e vetores

int main()
{
    int x[3] = {10, 20, 30};

    // A forma correta para ver o endere�o de mem�ria � com o %p
    int *pnt = &x[0];
    printf("%p\n", pnt);
    // O valor dos vetores fica um ap�s o outro na mem�ria
    pnt = &x[1];
    printf("%p\n", pnt);

    pnt = &x[2];
    printf("%p\n", pnt);

    // ---------------------------------------------------------
    pnt = x;
    printf("\n%i\n", *pnt);

    /*
    Nesse segundo caso, ele passa pro valor que est� alocado no
    pr�ximo espa�o da mem�ria (que � o 20, do vetor)
    */
    ++pnt;
    printf("%i\n", *pnt);

    ++pnt;
    printf("%i\n", *pnt);

    ++pnt;
    printf("%i\n", *pnt); // Esse valor � aleat�rio na mem�ria
    // ---------------------------------------------------------
    // Se eu quiser mudar o valor do meu vetor usando o ponteiro
    pnt = x;
    *(pnt + 1) = 10;

    printf("\nx[0]: %i\n", x[0]);
    printf("x[1]: %i\n", x[1]);
    printf("x[2]: %i\n", x[2]);

    return 0;
}
