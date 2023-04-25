#include <stdio.h>
#include <stdlib.h>

// Copiar conteúdo de um txt para outro

int main()
{
    FILE *file1, *file2;

    file1 = fopen("strings.txt", "r");

    if(file1 == NULL){
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }

    file2 = fopen("strings_2.txt", "w");

    copiarConteudo(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void copiarConteudo(FILE *file1, FILE *file2){
    char leitor[1000];

    while(fgets(leitor, 1000, file1) != NULL){
        fputs(leitor, file2);
    }
    printf("Conteudo copiado com sucesso!\n");
}
