#include <stdio.h>
#include <stdlib.h>

// Manipulação de arquivos txt em C - Leitura

int main()
{
    FILE *file;
    file = fopen("C:\\Users\\patri\\OneDrive\\Documentos\\Aprendizado de Programação\\"
                 "C e C++\\Aulas\\aula_81\\numeros.txt", "r");

    int x, y, z;

    fscanf(file, "%i %i %i", &x, &y, &z);
    printf("Arquivo encontrado!!\n");
    printf("%i < %i < %i\n", x, y, z);

    file = fopen("arquivo_nao_existente.txt", "r");

    if(file == NULL){
        printf("\nArquivo nao encontrado!!\n");
        return 0;
    }

    fclose(file);


    return 0;
}
