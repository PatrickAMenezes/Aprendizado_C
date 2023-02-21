#include <stdio.h>
#include <stdlib.h>

// Vetores de Estruturas

int main()
{
    struct horario{
        int horas, minutos, segundos;
    };

    struct horario teste[5] =
    {{10, 20, 30}, {20, 30, 40}, {0, 40, 50},
     {10, 50, 0}, {20, 0, 10}};

    for(int i = 0; i < 5; i++){
        printf("Horario %i: %i:%i:%i\n", i+1,
        teste[i].horas, teste[i].minutos, teste[i].segundos);
    };

    return 0;
}
