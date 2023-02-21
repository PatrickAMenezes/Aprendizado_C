#include <stdio.h>
#include <stdlib.h>

// Concatenar strings

int main()
{
    char palavra1[] = {'P', 'a', 'o', ' '};
    char palavra2[] = {'q', 'u', 'e', 'i', 'j', 'o'};
    char palavraNova[10];

    void concatenarString(char palavra1[], char palavra2[],  char palavraNova[]);
    concatenarString(palavra1, palavra2, palavraNova);

    for(int i = 0; i < 10; i++){
        printf("%c", palavraNova[i]);
    }

    return 0;
}

void concatenarString(char palavra1[], char palavra2[], char palavraNova[]){

    for(int tam1 = 0; tam1 < 4; ++tam1){
        palavraNova[tam1] = palavra1[tam1];
    }
    for(int tam1 = 4, tam2 = 0; tam2 < 6; tam1++, tam2++){
        palavraNova[tam1] = palavra2[tam2];
    }
}

