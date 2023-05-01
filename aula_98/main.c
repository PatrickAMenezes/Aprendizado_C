#include <stdio.h>
#include <stdlib.h>

// Função calloc()

int main()
{
    // A função calloc recebe dois argumentos

    /*
    O primeiro elemento deve ser um número inteiro positivo que informa
    quantos elementos do tamanho do tipo int queremos alocar
    */
    int *p = (int *)calloc(5, sizeof(int));

    /*
    Diferentemente de malloc, a função calloc inicializa o valor do
    bloco de memórias com 0
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
