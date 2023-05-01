#include <stdio.h>
#include <stdlib.h>

// Função free()

int main()
{
    int *p = (int *)malloc(sizeof(int));

    *p = 1000;

    printf("%i\n", *p);

    // Ela desaloca a memória quando não precisa mais dela
    free(p);

    printf("%i\n", *p);

    // O valor 1000 continua existindo na memória, só não no mesmo espaço

    return 0;
}
