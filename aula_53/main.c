#include <stdio.h>
#include <stdlib.h>

// Obter string do usu�rio

int main()
{
    /*
        Fun��o "getchar" --> Permite armazenar cada caractere que a
                             fun��o pegar da linha de comando
    */
    char nome[100], caractere;
    int i = 0;

    printf("Insira seu nome e sobrenome: ");
    do{
        caractere = getchar();
        nome[i] = caractere;
        i++;
    } while(caractere != '\n'); // Ele detecta o momento em que o usu�rio aperta "enter"
    nome[i - 1] = '\0';

    printf("Ola %s, seja bem vindo!\n", nome);

    return 0;
}
