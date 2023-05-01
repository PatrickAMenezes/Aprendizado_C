#include <stdio.h>
#include <stdlib.h>

// Limpeza de Buffer

int main()
{
    // N�o existe uma maneira padr�o de se limpar o buffer
    char a, b, c;

    a = getchar();
    // fflusH(stdin); --> N�o recomendado
    // setbuf(stdin, NULL); --> Tamb�m pode apresentar falhas
    // Por isso o recomendado � criar sua pr�pria fun��o de limpeza de buffer.
    clearBuff();

    b = getchar();
    clearBuff();

    c = getchar();
    clearBuff();

    printf("%c", a);
    printf("%c", b);
    printf("%c", c);

    return 0;
}

void clearBuff(void){
    char x;
    while((x = getchar())!= '\n' && x != EOF);
}
