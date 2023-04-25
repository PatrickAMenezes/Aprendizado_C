#include <stdio.h>
#include <stdlib.h>

// Macros
#define PI 3.14153
#define DOIS_PI  2 * PI
// Uma macro é uma "fórmula" que vai executar uma operação no programa
#define AREA_CIRCULO(raio) PI*(raio*raio)

int main()
{
    printf("%.2f\n", PI);
    printf("%.2f\n", DOIS_PI);
    printf("%.2f\n", AREA_CIRCULO(10));
    return 0;
}
