#include <stdio.h>
#include <stdlib.h>

// Manipulação de arquivos txt em C - Escrita

int main()
{
    // Para lidar com arquivos em C, você utiliza o FILE
    FILE *file; /* Pra acessar um arquivo, precisa criar um
                  ponteiro que aponte pra esse tipo de data*/

    // Outra forma de criar um arquivo é apenas declarar o nome do arquivo
    // Assim você cria um arquivo no mesmo diretório do programa
    // Ex: file = fopen("teste.txt", "w");
    file = fopen("C:\\Users\\patri\\OneDrive\\Documentos\\Aprendizado de Programação\\"
                 "C e C++\\Aulas\\aula_81\\teste.txt", "w");
    /*
    A função fopen() é responsável por fazer o ponteiro apontar para um
    arquivo no programa

    Como parâmetro você passa duas strings: "path que deseja guardar o
    arquivo + nome do arquivo" e "r/w/a"

    "r" = read / w = write / a = append
    */

    fprintf(file, "Pao com queijo."); // Primeiro informa o ponteiro, depois a mensagem

    file = fopen("numeros.txt", "w");
    fprintf(file, "%i %i %i", 10, 20, 30);

    fclose(file);

    return 0;
}
