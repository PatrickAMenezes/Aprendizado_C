#include <stdio.h>
#include <stdlib.h>

// Overflow e Underflow de vari�vel

int main()
{
    short x = 1293717391; /* Um short � armazenado em menos
                              bits do que uma int */
    short y = -2137812936;

    /*
        Ele vai retornar valores diferentes, pois os valores
        inseridos ocupam muito mais espa�o na mem�ria do que
        um tipo short � capaz de suportar
    */
    printf("%i\n", x); // Overflow
    printf("%i\n", y); // Underflow

    /*
        * O overflow � quando o valor � muito grande para ser
          armazenado em uma vari�vel do tipo short

        * Underflow � quando esse valor � muito grande no
          sentido negativo
    */

    // Para resolver isso voc� pode usar o tipo int, por exemplo
    int z = 1293717391;
    int a = -2137812936;

    printf("%i\n", z);
    printf("%i\n", a);

    return 0;
}
