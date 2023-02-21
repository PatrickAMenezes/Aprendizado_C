#include <stdio.h>
#include <stdlib.h>

// Verificar caracteres alfabéticos

int main()
{
    void alfabetico(char palavra[]);

    char palavra[20];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    alfabetico(palavra);

    return 0;
}

void alfabetico(char palavra[])
{
    int i = 0;

    while(palavra[i] != '\0'){
        // Essa comparação só é possível por causa da tabela ASCII
        if((palavra[i] >= 'a' && palavra[i] <= 'z') ||
           (palavra[i] >= 'A' && palavra[i] <= 'Z')){
           i++;
           }
        else{
            printf("\nEssa palavra nao e alfabetica.");
            return 0;
        }
    } printf("\nEssa palavra e alfabetica.\n");
}
