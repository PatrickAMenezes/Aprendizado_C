#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1 = 2; int n2 = 6;
    int n3 = 8; int n4 = 10;

    int sum = n1 + n2 + n3 + n4;
    int abs = n1 - n2 - n3 - n4;
    int mul = (n1 + n2) * (n3 + n4);
    int div = (n3 + n4) / (n1 + n2);

    printf("%i\n"
           "%i\n"
           "%i\n"
           "%i\n", sum, abs, mul, div);
    return 0;
}
