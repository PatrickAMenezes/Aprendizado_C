#include <stdio.h>
#include <stdlib.h>

// Estruturas que contêm ponteiros

int main()
{
    struct horario{
        int *pHora, *pMinuto, *pSegundo;
    };
    struct horario relogio;

    int hora = 10, minuto = 20, segundo = 30;

    relogio.pHora = &hora;
    relogio.pMinuto = &minuto;
    relogio.pSegundo = &segundo;

    printf("Horario do relogio: %i:%i:%i",
           *relogio.pHora, *relogio.pMinuto, *relogio.pSegundo);

    return 0;
}
