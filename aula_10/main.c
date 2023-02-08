#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    int numero = 1;

    printf("Contando de 1 em 1:\n");
    for(contador = 1; contador <= 10; contador++, numero++){
        printf("%i\n", numero);
    };

    printf("\nContando de 2 em 2:\n");
    for(contador = 1, numero = 2; contador <= 10; contador += 2, numero += 2){
        printf("%i\n", numero);
    };

    printf("\nSubtraindo de 10 em 10:\n");
    for(contador = 100, numero = 100; contador >= 0; contador -= 10, numero -= 10){
        printf("%i\n", numero);
    };

    printf("Subtraindo de 1 em 1:\n");
    for(contador = 0, numero = 10; contador <= 10; contador++, numero--){
        printf("%i\n", numero);
    };
    return 0;
}
