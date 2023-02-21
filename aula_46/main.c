#include <stdio.h>
#include <stdlib.h>

// Strings

int main()
{
    /*
        Existem duas maneiras de usar strings em C:

        1) Biblioteca <string.h>
        2) Usando um vetor
    */
    char teste[] = {'T', 'e', 's', 't', 'e'};

    for(int i = 0; i < 5; i++){
        printf("%c", teste[i]);
    } printf("\n");

    return 0;
}
