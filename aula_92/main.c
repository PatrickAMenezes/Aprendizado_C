#include <stdio.h>
#include <stdlib.h>

// Função puts()

int main()
{
    char x[] = "Ola, mundo!";

    // Ela só pode ser utilizada com strings
    puts("Testando");
    // Essa função pula automaticamente uma linha
    puts("Outro teste");
    // Usando-a para vetores de caractéres
    puts(x);

    return 0;
}
