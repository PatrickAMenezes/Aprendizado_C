#include <stdio.h>
#include <stdlib.h>

#define SIM 100
#define NAO -100

// Comando #define - Pré processamento

int main()
{
    /*
    O pré processamento consiste no processo de leitura que
    o compilador faz antes de executar o programa
    */
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%i", &x);

    if(x <= 10){
        printf("%i\n", NAO);
    } else{
        printf("%i\n", SIM);
    }

    return 0;
}
