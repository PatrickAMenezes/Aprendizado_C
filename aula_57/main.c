#include <stdio.h>
#include <stdlib.h>

// Sequências de escape

int main()
{
    /*
    Dica: ao invés de system(pause), use o getchar()
           ele consome menos memória do sistema
    */

    /*
    Escapes:
        \n = pula uma linha.
        \0 = fim da string.
        \a = alarme sonoro do sistema.
        \b = move o cursor uma posição à esquerda.
        \t = tecla tab.
        \r = volta para o inicio da linha.
        \" = caracter ".
        \' = caracter '.
    */
    printf("Hello world!\n");
    printf("Hello \0 world!");
    printf("\nHello world!\a\n");
    printf("Hello world!\t");
    printf("\'Hello world!\'\n");
    printf("\"Hello world!\"\n");
    printf("Hello world!\b");
    getchar();
    printf("Hello world!\r");
    getchar();

    return 0;
}
