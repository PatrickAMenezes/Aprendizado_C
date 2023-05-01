#include <stdio.h>
#include <stdlib.h>

// Fun��o calloc()

int main()
{
    // A fun��o calloc recebe dois argumentos

    /*
    O primeiro elemento deve ser um n�mero inteiro positivo que informa
    quantos elementos do tamanho do tipo int queremos alocar
    */
    int *p = (int *)calloc(5, sizeof(int));

    /*
    Diferentemente de malloc, a fun��o calloc inicializa o valor do
    bloco de mem�rias com 0
    */
    printf("%i\n", *p);

    *p = 10;
    *(p+1) = 100;
    printf("%i\n", *p);
    printf("%i\n", *(p+1));
    printf("%i\n", *(p+2));
    printf("%i\n", p[3]);

    return 0;
}
