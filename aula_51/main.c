#include <stdio.h>
#include <stdlib.h>

// Verificando igualdade entre strings

int main()
{
    _Bool stringsIguais(char s1[], char s2[]);
    char palavra1[20], palavra2[20];

    printf("Insira a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Insira a segunda palavra: ");
    scanf("%s", palavra2);

    stringsIguais(palavra1, palavra2);

    return 0;
}

_Bool stringsIguais(char s1[], char s2[])
{
    int i = 0;

    while((s1[i] || s2[i]) != '\0')
    {
        if(s1[i] != s2[i]){
            printf("As palavras nao sao iguais.\n");
            return 0;
        } else {
            i++;
        }
    }
    printf("As palavras sao iguais.\n");
    return 1;
}
