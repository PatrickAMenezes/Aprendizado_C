#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, j=0, ln, cl;
    printf("-------Matriz-------\n");
    printf("\nQuantas linhas?\n");
    scanf("%i", &ln);
    printf("Quantas colunas?\n");
    scanf("%i", &cl);

    printf("\n");
    for(; i < ln; i++){
        for(; j < cl; ++j){
            if(i == j)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
        j = 0;
    }
    printf("\n--------FIM--------\n");
    return 0;
}
