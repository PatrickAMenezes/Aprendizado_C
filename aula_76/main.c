#include <stdio.h>
#include <stdlib.h>

// � uma boa pratica usar os termos do define com letra mai�scula
#define PI 3.14159 // PI n�o � uma vari�vel
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
