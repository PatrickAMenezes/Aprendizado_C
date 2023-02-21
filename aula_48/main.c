#include <stdio.h>
#include <stdlib.h>

// Outros modos de declarar e inicializar uma string

int main()
{
    // Formas vistas anteriormente
    char palavra1[6] = {'B', 'r', 'a', 's', 'i', 'l'};
    char palavra2[] = {'B', 'r', 'a', 's', 'i', 'l'};

    // Outras formas mais eficientes
    char palavra3[7] = {"Brasil"};
    char palavra4[] = {"Brasil"};
    char palavra5[] = "Brasil";

    // '' = caracter / "" = string

    printf("%s\n", palavra5); // %s = string

    /*
        No final de cada string, voc� tem um caracter
        nulo: \0

        Ele que informa onde a string acaba

        No caso das palavras 1 e 2, elas n�o apresentam
        esse caracter nulo, porque inserimos os caracteres
        na m�o, sem inserir o caracter nulo

        O \0 � considerado apenas um caractere, n�o dois,
        por isso na palavra 3, o tamanho dela � 7, e n�o 8
    */
    return 0;
}
