#include <stdio.h>
#include <stdlib.h>

int main()
{
    // s[qtd_alunos] | aluno[qtd_alunos][bimestres]
    float s[4] = {}, aluno[4][4] = {};

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){
            printf("Qual e a nota do Aluno%i: ", i+1);
            scanf("%f", &aluno[i][j]);
            s[i] += aluno[i][j];
        }

    }

    printf("A media de cada aluno e:\n");
    for(int i = 0; i < 4; i++){
        printf("Aluno%i --> %f\n", i+1, (s[i])/4);
    }

    return 0;
}
