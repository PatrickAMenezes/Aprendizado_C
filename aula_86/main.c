#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[100];
    // stdin = standard input. --> Normalmente é o teclado
    fgets(x, 100, stdin);
    printf("%s", x);

    // A função freopen permite redirecionar o valor inserido nela
    freopen("arquivo.txt", "r", stdin);
    /* Nesse exemplo ele está redirecionando o stdin e apontando o
    ponteiro para o valor presente dentro do arquivo.txt */

    fgets(x, 100, stdin);
    printf("%s", x);

    return 0;
}
