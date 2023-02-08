#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);

    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    num1 < num2 ? printf("%i e maior que %i\n", num2, num1)
                : printf("%i nao e maior que %i\n", num2, num1);

    return 0;
}
