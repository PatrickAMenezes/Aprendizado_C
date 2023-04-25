#include <stdio.h>
#include <stdlib.h>

// Copiar uma string usando ponteiros
void copiarString(char *copiar, char *colar)
{
    while(*copiar != '\0'){
        *colar = *copiar;
        ++copiar, ++colar;
    } *colar = '\0';
}

int main()
{
    void copiarString(char *copiar, char *colar);

    char string1[] = "Pao de queijo";
    char string2[20];

    copiarString(string1, string2);
    printf("%s\n", string2);

    return 0;
}
