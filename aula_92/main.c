#include <stdio.h>
#include <stdlib.h>

// Fun��o puts()

int main()
{
    char x[] = "Ola, mundo!";

    // Ela s� pode ser utilizada com strings
    puts("Testando");
    // Essa fun��o pula automaticamente uma linha
    puts("Outro teste");
    // Usando-a para vetores de caract�res
    puts(x);

    return 0;
}
