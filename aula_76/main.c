#include <stdio.h>
#include <stdlib.h>

// É uma boa pratica usar os termos do define com letra maiúscula
#define PI 3.14159 // PI não é uma variável
#define NULO 0

double areaCirculo(double raio){
    return PI*(raio*raio);
}

int main()
{
    double areaCirculo(double raio);
    double r;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);
    printf("A area do circulo e igual a ~%.2lf\n",
           areaCirculo(r));

    return 0;
}
