#include <stdio.h>
#include <stdlib.h>

// Fun��o maloc()

int main()
{
    // Ela serve para definir o quanto de mem�ria queremos utilziar da mem�ria RAM
    int *p = (int *)malloc(sizeof(int));
    // Ela retorna um ponteiro que aponta para o endere�o de mem�ria alocado

    /*
    Como a fun��o malloc aponta para um ponteiro de tipo void, � preciso fazer
    o casting e fazer ele apontar para o tipo necess�rio, que nesse caso � o (int *)
    */

    *p = 1000;

    printf("%i", *p);

    return 0;
}
