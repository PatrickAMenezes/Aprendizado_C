#include <stdio.h>
#include <stdlib.h>

#define MAIOR(x,y) x > y ? x : y
#define MINUSCULO(char) char >= 'a' && char <= 'z'

int main()
{
    char c = 'a';
    if(MINUSCULO(c)){
        printf("\"%c\" e' uma letra minuscula.\n", c);
    } else{
        printf("\"%c\" nao e' uma letra minuscula.\n", c);
    }

    printf("%i\n", MAIOR(20, 40));
    return 0;
}
