#include <stdio.h>
#include <stdlib.h>

// Função maloc()

int main()
{
    // Ela serve para definir o quanto de memória queremos utilziar da memória RAM
    int *p = (int *)malloc(sizeof(int));
    // Ela retorna um ponteiro que aponta para o endereço de memória alocado

    /*
    Como a função malloc aponta para um ponteiro de tipo void, é preciso fazer
    o casting e fazer ele apontar para o tipo necessário, que nesse caso é o (int *)
    */

    *p = 1000;

    printf("%i", *p);

    return 0;
}
