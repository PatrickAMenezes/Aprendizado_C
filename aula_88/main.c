#include <stdio.h>
#include <stdlib.h>

// Fun��es fgetc e getc --> Pegam apenas um caractere

int main()
{
    char x[100];
    int i = 0;

    // fgetc recebe um ponteiro tipo file
    /*
       x[0] = fgetc(stdin);
       printf("%c", x[0]);

       x[0] = getc(stdin);
       printf("%c", x[0]);
    */

    while((x[i] = fgetc(stdin)) != '\n'){++i;}
    x[++i] = "\0";

    printf("%s", x);

    /* Ambas as fun��es s�o iguais, a diferen�a � que
        a fun��o getc pode ser utilizada tanto como macro
        quanto fun��o, enquanto fgetc s� pode ser utilizado
        como fun��o
    */

    return 0;
}
