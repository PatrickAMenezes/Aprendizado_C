#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, r;

    printf("Insira um numero fatorial: ");
    scanf("%i", &f);

    printf("O fatorial de %i e igual a ", f);
    for(r = f; f > 1; f--){
        r *= f-1;
    };
    printf("%i.\n", r);

    return 0;
}
