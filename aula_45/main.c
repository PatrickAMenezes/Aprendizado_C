#include <stdio.h>
#include <stdlib.h>

struct horario{
        int horas, minutos, segundos;
};

int main()
{
    struct horario tempo[5] = {};
    void Guardar_Horario(struct horario tempo[5]);
    void Mostrar_Horario(struct horario tempo[5]);
    struct horario Guardado;

    Guardar_Horario(tempo);
    Mostrar_Horario(tempo);

    return 0;
}

void Guardar_Horario(struct horario tempo[5]){

    printf("Informe os 5 horarios que você deseja armazenar"
           "no sistema...\n\n");
    for(int i = 0; i < 5; i++){

        printf("Horario %i[hh:mm:ss]: ", i+1);
        scanf("%i:%i:%i",
              &tempo[i].horas, &tempo[i].minutos, &tempo[i].segundos);

    }

};

void Mostrar_Horario(struct horario tempo[5]){

    for(int i = 0; i < 5; ++i){
        printf("%i Horario: %i:%i:%i\n", i+1,
               tempo[i].horas, tempo[i].minutos, tempo[i].segundos);

    }
}
