#include <stdio.h>
#include <stdlib.h>

// Ponteiros - Introdu��o

int main()
{
    printf(">>>>>>>>>>>>>>>>>>>>>>> EXEMPLO 1 <<<<<<<<<<<<<<<<<<<<<<<\n\n");
    int x;
    x = 10;

    /*
        Aqui estou dizendo ao computador que tipo de dado o meu
        ponteiro est� apontando, nesse caso � um inteiro
    */
    int *ponteiro;
    /*
        At� o momento ele n�o est� apontando para lugar algum,
        ele est� ali apenas esperando uma informa��o para
        apontar em um espa�o de mem�ria
    */
    ponteiro = &x;
    /*
        Agora ele est� apontando para o endere�o de mem�ria
        da vari�vel x
    */

    // Para acessar o endere�o na mem�ria de x, voc� usa o &
    printf("%i\n", x); // Acessando a vari�vel
    printf("%i\n", &x); // Acessando o endere�o na mem�ria
    printf("%i\n", *ponteiro); // Chamando a vari�vel
    printf("%i\n", ponteiro); // Acessando o endere�o de mem�ria

    // >>>>>>>>>>>>>>>>>>>>>>> EXEMPLO 2 <<<<<<<<<<<<<<<<<<<<<<<
    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>> EXEMPLO 2 <<<<<<<<<<<<<<<<<<<<<<<\n\n");

    x = 10;

    int y = x;
    int *z;

    z = &x;
    x = 20;

    printf("x: %i | y: %i | z:%i\n", x, y, *z); // x = 20, y = 10

    getchar();

    return 0;
}
