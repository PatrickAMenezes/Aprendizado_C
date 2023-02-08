#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Qual e a sua idade?: ");
    scanf("%i.", &idade);

    // Maioridade
    if (idade >= 18){
        printf("Voce e maior de idade.\n");
    } else{
        printf("Voce e menor de idade.\n");
    }

    // Faixa etária
    if (idade < 3)
        printf("Voce e um bebe\n");
    else if (idade < 12)
        printf("Voce e uma crianca.\n");
    else if (idade < 18)
        printf("Voce e um adolescente.\n");
    else if (idade < 60)
        printf("Voce e um adulto.\n");
    else
        printf("Voce e um idoso.\n");

    /* Você pode usar as condicionais sem as {}
       quando o código que for executado tiver
       apenas 1 linha. */

    return 0;
}
