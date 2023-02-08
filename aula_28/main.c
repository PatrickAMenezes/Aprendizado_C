#include <stdio.h>
#include <stdlib.h>

void testeMensagem(void){
    printf("Testando outra mensagem!\n");
}

int main()
{
    // ----------------------- Funções -----------------------

    /* Se a função estiver depois da função main, você precisa declará-la
       antes de chamá-la*/

    void imprimaMensagem(void);

    imprimaMensagem();

    // Se estiver antes, não precisa declarar

    testeMensagem();

    // Por motivos de organização, é recomendado sempre declarar a função

    return 0;
}

void imprimaMensagem(void){

    printf("Teste.\n");

}
