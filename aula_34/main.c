#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Funções que chamam outras funções
    int soma();
    soma();

    system("pause");
    return 0;
}

int soma(){

    int x, y, res, verificar_soma();

    printf("Digite o valor de x: ");
    scanf("%i", &x);

    printf("Digite o valor de y: ");
    scanf("%i", &y);

    res = verificar_soma(x, y);
    printf("\n|%i| + |%i| = %i\n\n", x, y, res);
}

int verificar_soma(x, y){

    if(x < 0){
        x *= -1;
    }
    if(y < 0){
        y *= -1;
    }
    return x + y;
}
