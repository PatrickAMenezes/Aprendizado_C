#include <stdio.h>
#include <stdlib.h>

// Manipula��o de arquivos txt em C - Escrita

int main()
{
    // Para lidar com arquivos em C, voc� utiliza o FILE
    FILE *file; /* Pra acessar um arquivo, precisa criar um
                  ponteiro que aponte pra esse tipo de data*/

    // Outra forma de criar um arquivo � apenas declarar o nome do arquivo
    // Assim voc� cria um arquivo no mesmo diret�rio do programa
    // Ex: file = fopen("teste.txt", "w");
    file = fopen("C:\\Users\\patri\\OneDrive\\Documentos\\Aprendizado de Programa��o\\"
                 "C e C++\\Aulas\\aula_81\\teste.txt", "w");
    /*
    A fun��o fopen() � respons�vel por fazer o ponteiro apontar para um
    arquivo no programa

    Como par�metro voc� passa duas strings: "path que deseja guardar o
    arquivo + nome do arquivo" e "r/w/a"

    "r" = read / w = write / a = append
    */

    fprintf(file, "Pao com queijo."); // Primeiro informa o ponteiro, depois a mensagem

    file = fopen("numeros.txt", "w");
    fprintf(file, "%i %i %i", 10, 20, 30);

    fclose(file);

    return 0;
}
