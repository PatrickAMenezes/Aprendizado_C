#include <stdio.h>
#include <stdlib.h>

// Ponteiros à estruturas (Operações matemáticas)

int main()
{
    struct horario{
        int horas, minutos, segundos;
    };
    struct horario antes, *relogio;
    relogio = &antes;

    relogio -> horas = 10;
    relogio -> minutos = 15;
    relogio -> segundos = 35;

    int somatorio = 10;

    struct horario agora;
    agora.horas = somatorio + relogio -> minutos - 2;
    agora.minutos = relogio -> segundos + relogio -> horas;
    agora.segundos = relogio -> minutos + relogio -> segundos;

    printf("Horario anterior: %i:%i:%i\n",
           antes.horas, antes.minutos, antes.segundos);

    printf("Horario atual: %i:%i:%i\n",
           agora.horas, agora.minutos, agora.segundos);

    return 0;
}
