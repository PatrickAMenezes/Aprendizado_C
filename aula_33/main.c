#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Formatação de Output
    int x = 9999999, y = 10;
    double z = 100.123456789;

    // %i = valor de uma variável inteira / %%i = você escreve %i na tela

    // %i = inteira / %x = hexadecimais / %o = octais / %d = double
    printf("O valor de %%i e igual a = %i\n", x);
    printf("O valor de %%d e igual a = %d\n", x);
    printf("O valor de %%x e igual a = %x\n", x);
    printf("O valor de %%o e igual a = %o\n", x);

    // Para alinhar o numero a direita
    printf("\nO valor de %%i e igual a = %8i\n", y);
    printf("O valor de %%d e igual a = %8d\n", x);
    printf("O valor de %%x e igual a = %8x\n", x);
    printf("O valor de %%o e igual a = %o\n", x);
    /*
        Para alinhar basta colocar o número de espaços que você quer pular
        no meio da chamada da variável
    */

    // Formatação das variáveis double e float
    printf("\nO valor de %%f e igual a = %f\n", z); // Fraction Expression
    printf("O valor de %%e e igual a = %e\n", z); // Exponent Expression
    printf("O valor de %%g e igual a = %g\n", z); // General Expression
    printf("O valor de %%a e igual a = %a\n", z ); // Float Hexadecimal
    // %e e %a retornam em notação científica

    /*
        Para definir o número de casas decimais, você coloca
        ".'numero_de_casas_decimais'" no meio da chamada de variável

        Ex: %.2f
    */
    printf("\nO valor de %%f e igual a = %.2f\n", z);

    return 0;
}
