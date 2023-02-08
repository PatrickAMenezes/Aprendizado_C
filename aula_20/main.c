#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Alguns tipos de variaveis dessa lista estão presentes
    apenas em C++*/

    char c = 'a';
    int i = 123;
    // Long int vai até 10 números
    long int li = 1231912712;
    float f = 29.12;
    double d = 29.12;
    // unsigned double ud = -30.10;
    // signed int si = -30;
    const long int cli = 293184971;
    // bool variavelBool = true;
    // bool fl = 0;

    printf("Char: %c\nInt: %i\nLong Int: %i\nFloat: %f\n", c, i, li, f);
    printf("Double: %f\nConst Long Int: %i\n", d, cli);

    return 0;
}
