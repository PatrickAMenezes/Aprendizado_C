#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------------------------
    //  Fun��es e Vari�vel Local Autom�tica
    // -------------------------------------
    void teste(void);
    teste();
    teste();

    return 0;
}

void teste(void){
    /* Essa variavel � local porque � vis�vel apenas a esta fun��o
    Ela � autom�tica porque a cada vez que � chamada ela � recriada */
    int variavelLocalAutomatica = 2;

    variavelLocalAutomatica *= 2;
    printf("O valor da variavel e %i.\n", variavelLocalAutomatica);
}
