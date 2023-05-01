#include <stdio.h>
#include <stdlib.h>

// Fun��o free()

int main()
{
    int *p = (int *)malloc(sizeof(int));

    *p = 1000;

    printf("%i\n", *p);

    // Ela desaloca a mem�ria quando n�o precisa mais dela
    free(p);

    printf("%i\n", *p);

    // O valor 1000 continua existindo na mem�ria, s� n�o no mesmo espa�o

    return 0;
}
