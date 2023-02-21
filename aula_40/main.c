#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct horario{
        int hora, minutos, segundos;
        double teste;
        char letra;
    };

    struct horario agora;
    agora.hora = 23;
    agora.minutos = 25;
    agora.segundos = 30;

    struct horario depois;
    depois.hora = (agora.hora - 24) + 11;
    depois.minutos = agora.minutos - 5;
    depois.segundos = agora.segundos;
    depois.teste = 10.32/7;
    depois.letra = 'a';

    printf("O horario atual e %i:%i:%i\n",
           agora.hora, agora.minutos, agora.segundos);
    printf("Voce so pode bater o ponto novamente as %i:%i:%i\n",
           depois.hora, depois.minutos, depois.segundos);

    printf("\nTestando a struct:\n%.2f, %c\n", depois.teste, depois.letra);

    return 0;
}
