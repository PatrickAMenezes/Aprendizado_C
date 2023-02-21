#include <stdio.h>
#include <stdlib.h>

// Inicializando Estruturas

int main()
{
    // Existem várias formas de inicializar uma estrutura
    struct horario{
    int horas, minutos, segundos;
    }agora, tempo1 = {10, 20, 30},
    tempo2 = {10}; // 10:0:0

    agora.horas = 22;
    agora.minutos = 42;
    agora.segundos = 30;

    // Também pode inicializar fora de ordem
    struct horario tempo3 = {.segundos = 10, .minutos = 20};

    printf("Agora: %i:%i:%i\n",
           agora.horas, agora.minutos, agora.segundos);

    printf("Primeiro Horario: %i:%i:%i\n",
           tempo1.horas, tempo1.minutos, tempo1.segundos);

    printf("Segundo Horario: %i:%i:%i\n",
           tempo2.horas, tempo2.minutos, tempo2.segundos);

    printf("Terceiro Horario: %i:%i:%i\n",
           tempo3.horas, tempo3.minutos, tempo3.segundos);

    return 0;
}
