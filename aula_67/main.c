#include <stdio.h>
#include <stdlib.h>

// Overflow e Underflow de variável

int main()
{
    short x = 1293717391; /* Um short é armazenado em menos
                              bits do que uma int */
    short y = -2137812936;

    /*
        Ele vai retornar valores diferentes, pois os valores
        inseridos ocupam muito mais espaço na memória do que
        um tipo short é capaz de suportar
    */
    printf("%i\n", x); // Overflow
    printf("%i\n", y); // Underflow

    /*
        * O overflow é quando o valor é muito grande para ser
          armazenado em uma variável do tipo short

        * Underflow é quando esse valor é muito grande no
          sentido negativo
    */

    // Para resolver isso você pode usar o tipo int, por exemplo
    int z = 1293717391;
    int a = -2137812936;

    printf("%i\n", z);
    printf("%i\n", a);

    return 0;
}
