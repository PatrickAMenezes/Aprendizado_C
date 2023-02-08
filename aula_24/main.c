#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5] = {}, media, n=0;

    for(int i = 0; i < 5; ++i){
        printf("Digite a nota %i: ", i);
        scanf("%f", &notas[i]);

        n += notas[i];
        printf("\n");
    }

    media = n/5;
    printf("A media das notas foi %f", media);

    return 0;
}
