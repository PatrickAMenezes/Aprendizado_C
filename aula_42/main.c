#include <stdio.h>
#include <stdlib.h>

// Definindo uma função que recebe uma estrutura

struct horario{
    int horas, minutos, segundos;
};

int main()
{
    struct horario Definir(struct horario x);
    struct horario atual;
    struct horario proximo;

    atual.horas = 22;
    atual.minutos = 30;
    atual.segundos = 15;

    proximo = Definir(atual);

    printf("Horario atual: %i:%i:%i\n",
           atual.horas, atual.minutos, atual.segundos);

    printf("Horario que devo acordar: %i:%i:%i\n\n",
           proximo.horas, proximo.minutos, proximo.segundos);

    system("pause");
    return 0;
}

struct horario Definir(struct horario x){

    x.horas = 05;
    x.minutos = 30;
    x.segundos = 10;

    return x;
};
