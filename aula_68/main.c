#include <stdio.h>
#include <stdlib.h>

// Lista concatenada

int main()
{
    struct lista{
        int valor;
        struct lista *proximo;
    };

    struct lista m1, m2, m3;
    struct lista *pnt = &m1;

    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;

    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = '\0';
    // m3.proximo = 0; / m3.proximo = (struct lista *) 0;

   while(pnt != '\0'){
        printf("%i\n", pnt->valor);
        pnt = pnt -> proximo;
   }

    return 0;
}
