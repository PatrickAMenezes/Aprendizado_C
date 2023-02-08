#include <stdio.h>
#include <stdlib.h>

void testeMensagem(void){
    printf("Testando outra mensagem!\n");
}

int main()
{
    // ----------------------- Fun��es -----------------------

    /* Se a fun��o estiver depois da fun��o main, voc� precisa declar�-la
       antes de cham�-la*/

    void imprimaMensagem(void);

    imprimaMensagem();

    // Se estiver antes, n�o precisa declarar

    testeMensagem();

    // Por motivos de organiza��o, � recomendado sempre declarar a fun��o

    return 0;
}

void imprimaMensagem(void){

    printf("Teste.\n");

}
