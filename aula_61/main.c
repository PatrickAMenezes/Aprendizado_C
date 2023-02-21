#include <stdio.h>
#include <stdlib.h>

// Ponteiros - Introdução

int main()
{
    printf(">>>>>>>>>>>>>>>>>>>>>>> EXEMPLO 1 <<<<<<<<<<<<<<<<<<<<<<<\n\n");
    int x;
    x = 10;

    /*
        Aqui estou dizendo ao computador que tipo de dado o meu
        ponteiro está apontando, nesse caso é um inteiro
    */
    int *ponteiro;
    /*
        Até o momento ele não está apontando para lugar algum,
        ele está ali apenas esperando uma informação para
        apontar em um espaço de memória
    */
    ponteiro = &x;
    /*
        Agora ele está apontando para o endereço de memória
        da variável x
    */

    // Para acessar o endereço na memória de x, você usa o &
    printf("%i\n", x); // Acessando a variável
    printf("%i\n", &x); // Acessando o endereço na memória
    printf("%i\n", *ponteiro); // Chamando a variável
    printf("%i\n", ponteiro); // Acessando o endereço de memória

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
