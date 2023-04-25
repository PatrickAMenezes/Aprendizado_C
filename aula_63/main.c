#include <stdio.h>
#include <stdlib.h>

// Ponteiros � estruturas

int main()
{
    struct horario{
        int horas, minutos, segundos;
    };

    struct horario agora, *relogio;
    relogio = &agora;

    // *relogio.hora = 20; --> Atribui��o errada
    // Em ordem de anteced�ncia, o ponto vem antes do *
    // Por isso voc� deve fazer da seguinte forma:
    (*relogio).horas = 20;
    (*relogio).minutos = 30;
    (*relogio).segundos = 50;

    printf("Horario atual: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    // Existe uma outra forma de fazer essa atribui��o:
    relogio -> horas = 10; // --> � a mesma coisa que *
    relogio -> minutos = 15;
    relogio -> segundos = 35;

    printf("Horario atual: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
