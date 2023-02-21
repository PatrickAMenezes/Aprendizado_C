#include <stdio.h>
#include <stdlib.h>

// Contando caracteres de uma string

int main()
{
    int tamanhoString(char string[]);
    /*
        Você precisa definir um tamanho pra string
        ou inicializar ela com uma string vazia
    */
    char stringUsuario[25];

    printf("Digite uma palavra: ");
    scanf("%s", &stringUsuario);

    int tamS = tamanhoString(stringUsuario);
    printf("A string %s tem %i caracteres.\n",
            stringUsuario, tamS);

    return 0;
}

int tamanhoString(char string[]){
    // Lembre-se do caracter nulo no final da string
    int i = 0;

    while(string[i] != '\0'){
        i++;
    } i++; /* Essa última iteração adiciona
              o caracter nulo (\0) a contagem */

    return i;
}
