#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, c;
    float med;

    printf("Quantas notas voce quer cadastrar?\n");
    scanf("%i", &i);

    // Isso � um vetor em C, um vetor pode ser de qualquer tipo
    float notas[i];
    for(c = 1; i >= c; c++){
        printf("\nNota %i: ", c);
        scanf("%f", &notas[i]);
        med += notas[i];
    }

    printf("\nA media das notas foi %f.\n", med / i);

    /* Esse comando para o terminal e s� continua ap�s o usu�rio
       permitir */
    system("pause");

    return 0;
}
