#include <stdio.h>
#include <stdlib.h>

// Redirecionando arquivos com freopen

int main()
{
    char x[100];

    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL){
        printf("Arquivo nao encontrado...");
        return 1;
    }

    fgets(x, 100, arquivo);
    printf("%s\n", x);

    freopen("arquivo2.txt", "r", arquivo);
    fgets(x, 100, arquivo);
    printf("%s\n", x);

    return 0;
}
