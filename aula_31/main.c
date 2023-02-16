#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------------------------
    //  Funções e Variável Local Estática
    // -------------------------------------
    void teste(void);
    teste(); // automatica = 4 / estatica = 4
    teste(); // automatica = 4 / estatica = 8
    teste(); // automatica = 4 / estatica = 16

    return 0;
}

void teste(void){
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    /*
        A diferença entre a variável local estática e a variável
        local automática é que a estática *** não perde *** o valor dela
        a cade vez que a função é chamada.
    */
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf("Variavel Automatica: %i.\n", variavelLocalAutomatica);
    printf("Variavel Estatica: %i.\n", variavelLocalEstatica);
}
