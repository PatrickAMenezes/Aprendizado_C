#include <stdio.h>
#include <stdlib.h>

int main()
{
    // -------------------------------------
    //  Funções e Variável Local Automática
    // -------------------------------------
    void teste(void);
    teste();
    teste();

    return 0;
}

void teste(void){
    /* Essa variavel é local porque é visível apenas a esta função
    Ela é automática porque a cada vez que é chamada ela é recriada */
    int variavelLocalAutomatica = 2;

    variavelLocalAutomatica *= 2;
    printf("O valor da variavel e %i.\n", variavelLocalAutomatica);
}
