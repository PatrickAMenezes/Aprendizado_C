#include <stdio.h>
#include <stdlib.h>

// Fun��o fgetc para arquivos

int main()
{
    char x[100];
    int i = 0;

    FILE *file;

    file = fopen("arquivo.txt", "r");

    // EOF = End of File
    while((x[i] = fgetc(file)) != EOF){++i;}
    x[i] = '\0';

    printf("%s", x);

    return 0;
}
