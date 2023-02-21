#include <stdio.h>
#include <stdlib.h>

// Obter string do usuário

int main()
{
    /*
        Função "getchar" --> Permite armazenar cada caractere que a
                             função pegar da linha de comando
    */
    char nome[100], caractere;
    int i = 0;

    printf("Insira seu nome e sobrenome: ");
    do{
        caractere = getchar();
        nome[i] = caractere;
        i++;
    } while(caractere != '\n'); // Ele detecta o momento em que o usuário aperta "enter"
    nome[i - 1] = '\0';

    printf("Ola %s, seja bem vindo!\n", nome);

    return 0;
}
