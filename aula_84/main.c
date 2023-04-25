#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;

    file = fopen("strings.txt", "a");

    if(file == NULL){
        printf("Falha ao abrir o arquivo.\n");
    }

    fprintf(file, "\nAdicionando uma linha!!");
    printf("Linha adicionada.");

    // fputs = util para passar um vetor de caracteres
    char frase[] = "\nOutra linha!!\n";
    fputs(frase, file);
    printf("\nMais uma linha adicionada.");

    // Se eu quisesse escrever apenas um caractere
    char caractere = 'a';
    fputc(caractere, file);
    printf("\nCaractere adicionado.");

    fclose(file);

    getchar();
    return 0;
}
