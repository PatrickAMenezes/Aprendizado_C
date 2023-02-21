#include <stdio.h>
#include <stdlib.h>

// Casting --> ("tipo de variavel")"variavel"

int main()
{
    int x = 16, y = 3;
    float resultado = x / y;

    printf("Resultado errado (sem casting): %f\n", resultado);

    /*
        Voc� escreve entre () o tipo de dado que voc� quer que
        a sua espress�o retorne, for�ando ela a assumir esse
        tipo novo
    */
    float resultado2 = (float) x / y;

    printf("Resultado certo (com casting): %f\n", resultado2);

    return 0;
}
