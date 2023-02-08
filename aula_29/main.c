#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, areaRetangulo(float x, float y);

    printf("Base do retangulo: ");
    scanf("%f", &x);

    printf("\nAltura do retangulo: ");
    scanf("%f", &y);

    float area = areaRetangulo(x, y);
    printf("\nA area do retangulo e: %fm2\n", area);

    return 0;
}

float areaRetangulo(float x, float y){

    float res = x * y;

    return res;
}
