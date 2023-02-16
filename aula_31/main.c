#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------------------------
    //  Fun��es e Vari�vel Local Est�tica
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
        A diferen�a entre a vari�vel local est�tica e a vari�vel
        local autom�tica � que a est�tica *** n�o perde *** o valor dela
        a cade vez que a fun��o � chamada.
    */
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf("Variavel Automatica: %i.\n", variavelLocalAutomatica);
    printf("Variavel Estatica: %i.\n", variavelLocalEstatica);
}
