#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    float r;

    printf("Insira o primeiro numero: ");
    scanf("%i", &x);
    printf("Insira o segundo numero: ");
    scanf("%i", &y);

    if(y == 0){
        printf("\nDivisao invalida!! Nao se pode dividir por 0.\n");
    }
    else{
        r = x/y;
        if (x % y == 0){
            printf("\nA divisao de %i por %i e exata.\n"
                   "Resultado: %f\n", x, y, r);
        }
        else{
            printf("\nA divisao de %i por %i nao e exata.\n"
                   "Resultado: %f\n", x, y, r);
        }
    }

    return 0;
}
