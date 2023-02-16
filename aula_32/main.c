#include <stdio.h>
#include <stdlib.h>

/*
    Nota 1:

    A variavel global é aquela que é visível a todas as funções.
*/
/*
    Nota 2:

    É uma boa pratica colocar um g na frente da variável, para
    identificar que ela é global.
*/
int gVariavelGlobal = 2;

int main()
{
    // -------------------------------------
    //  Funções e Variável Global
    // -------------------------------------
    printf("------- Funcao Main -------\n");
    printf("Variavel Global: %i.\n", gVariavelGlobal);

    void teste(void);
    teste(); // automatica = 4 / estatica = 4 / global = 4
    teste(); // automatica = 4 / estatica = 8 / global = 8
    teste(); // automatica = 4 / estatica = 16 / global = 16

    return 0;
}

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    // A variável global se comporta como a estática
    gVariavelGlobal *= 2;

    printf("\n------- Funcao Teste -------\n");
    printf("Variavel Automatica: %i.\n", variavelLocalAutomatica);
    printf("Variavel Estatica: %i.\n", variavelLocalEstatica);
    printf("Variavel Global: %i.\n", gVariavelGlobal);
}
