#include <stdio.h>
#include <stdlib.h>

int gnum;

int main()
{
    // Função Recursiva
    int resultado, fatorial(int num);

    printf("Digite um numero inteiro: ");
    scanf("%i", &gnum);

    resultado = fatorial(gnum);
    printf("\nO fatorial de %i e igual a %i.\n", gnum, resultado);

    return 0;
}

int fatorial(int num){

    int c = num-1;

    if(num >= 1){

        while(c > 1){

            num *= c;
            c -= 1;

        } return num;
    } else if(num == 0){

        return 1;

    } else{

        while(num < 0){

            printf("\nNumero invalido, apenas valores positivos!\n");

            printf("\nPor favor, insira um numero valido: ");
            scanf("%i", &num);

        } gnum = num, fatorial(num); // Aqui a função se torna recursiva
    }
}
