#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    file = fopen("strings.txt", "r");

    if(file == NULL){
        printf("Arquivo nao encontrado!!\n");
        getchar();
        exit(0);
    }

    char palavras[150];

    // Parametros de fgets: string, tamanho dela, ponteiro
    while(fgets(palavras, 100, file) != NULL){ // fgets = "file get string"
        printf("%s", palavras);
    }

    getchar();
    fclose(file);

    return 0;
}
