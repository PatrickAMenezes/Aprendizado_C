#include <stdio.h>
#include <stdlib.h>

// Ponteiros à estruturas

int main()
{
    struct horario{
        int horas, minutos, segundos;
    };

    struct horario agora, *relogio;
    relogio = &agora;

    // *relogio.hora = 20; --> Atribuição errada
    // Em ordem de antecedência, o ponto vem antes do *
    // Por isso você deve fazer da seguinte forma:
    (*relogio).horas = 20;
    (*relogio).minutos = 30;
    (*relogio).segundos = 50;

    printf("Horario atual: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    // Existe uma outra forma de fazer essa atribuição:
    relogio -> horas = 10; // --> é a mesma coisa que *
    relogio -> minutos = 15;
    relogio -> segundos = 35;

    printf("Horario atual: %i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}
