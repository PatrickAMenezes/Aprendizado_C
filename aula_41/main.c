#include <stdio.h>
#include <stdlib.h>

// Casting --> ("tipo de variavel")"variavel"

int main()
{
    int x = 16, y = 3;
    float resultado = x / y;

    printf("Resultado errado (sem casting): %f\n", resultado);

    /*
        Você escreve entre () o tipo de dado que você quer que
        a sua espressão retorne, forçando ela a assumir esse
        tipo novo
    */
    float resultado2 = (float) x / y;

    printf("Resultado certo (com casting): %f\n", resultado2);

    return 0;
}
