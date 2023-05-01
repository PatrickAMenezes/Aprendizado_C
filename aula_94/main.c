#include <stdio.h>
#include <stdlib.h>

// Limpeza de Buffer

int main()
{
    // Não existe uma maneira padrão de se limpar o buffer
    char a, b, c;

    a = getchar();
    // fflusH(stdin); --> Não recomendado
    // setbuf(stdin, NULL); --> Também pode apresentar falhas
    // Por isso o recomendado é criar sua própria função de limpeza de buffer.
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
