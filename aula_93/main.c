#include <stdio.h>
#include <stdlib.h>

// Funções getchar e putchar

int main()
{
    char x;
    int i = 0;
    // A função getchar obtém o próximo caractere do standard input
    /*
        x[0] = getchar();
        printf("%c", x[0]);
    */
    /*
    while((x[i] = getchar()) != '\n' && i < 9){
        ++i;
    } x[++i] = '\0';
    printf("%s", x);
    */

    // A função putchar coloca um caractere no standard output
    while((x = getchar()) != '\n'){
        putchar(x);
    } putchar('\n');

    return 0;
}
