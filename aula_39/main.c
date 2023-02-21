#include <stdio.h>
#include <stdlib.h>

// Introdu��o as Structs (Estruturas)

int main()
{
    // Definindo a estrutura - Abaixo, seria como o "esqueleto" da estrutura
    struct horario{
        int horas, minutos, segundos;
    };

    // Declarando a estrutura - agora � uma estrutura do tipo hor�rio
    struct horario agora;

    // Alterando os valores da estrutura agora
    agora.horas = 23;
    agora.minutos = 22;
    agora.segundos = 30;

    printf("O horario atual e %i:%i:%i",
           agora.horas, agora.minutos, agora.segundos);

    return 0;
}
