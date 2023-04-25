#include <stdio.h>
#include <stdlib.h>

// Funções fgetc e getc --> Pegam apenas um caractere

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

    /* Ambas as funções são iguais, a diferença é que
        a função getc pode ser utilizada tanto como macro
        quanto função, enquanto fgetc só pode ser utilizado
        como função
    */

    return 0;
}
