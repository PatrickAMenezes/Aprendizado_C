#include <stdio.h>
#include <stdlib.h>

// Ponteiro como parametro de uma função

int main()
{
    void testeVariavel(int x);
    void testePonteiro(int *px);
    int x = 10, *px = &x;

    testeVariavel(x);
    printf("Teste com variavel: %i\n", x);

    testePonteiro(px); /* Aqui você passa o espaço na
                          memória em que se encontra
                          o ponteiro */
    printf("Teste com ponteiro: %i\n", *px);

    return 0;
}

void testeVariavel(int x){
    ++x; // Muda o valor da variável local
}

void testePonteiro(int *px){
    ++*px; // Muda o valor da variável na memória
}
