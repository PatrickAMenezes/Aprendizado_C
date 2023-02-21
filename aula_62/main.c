#include <stdio.h>
#include <stdlib.h>

// Ponteiros - char, int, double

int main()
{
    int x = 10;
    double y = 25.50;
    char z = 'a';

    // Jeitos de declarar o ponteiro
    /*
    Jeito 1:
        int *Px;
        Px = &x;

    ## Dessa forma, estamos dizendo ao sistema que o
       endereço do ponteiro está apontando para o
       endereço de x
    */

    // Jeito 2:
    int *Px = &x;
    /*
        Nesse segundo caso, quando escrevemos o asterisco,
        estamos dizendo o valor daquele ponteiro. Então,
        nesse exemplo, ele está apontando o valor de Px
        ao endereço de memória de x
    */
    double *Py = &y;
    char *Pz = &z;

    printf("Endereco de x: %i | Valor de x: %i\n"
           "Endereco de y: %i | Valor de x: %.2f\n"
           "Endereco de z: %i | Valor de x: %c\n",
           Px, *Px, Py, *Py, Pz, *Pz);

    double soma = *Px + *Py;
    printf("\n%i + %.2f =  %.2f\n", *Px, *Py, soma);

    int *resultado = &x;

    printf("\nValor x = %i\n", resultado);

    resultado = 6422004; // Endereco de x
    printf("\nValor x = %i\n", *resultado); // Retorna o valor de x

    getchar();

    return 0;
}
