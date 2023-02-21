#include <stdio.h>
#include <stdlib.h>

// Obter string do usuário

int main()
{
    // Esse primeiro caso não permite colocar mais de duas strings
    char nome[20], sobrenome[20];

    printf("Insira seu nome e sobrenome: ");
    scanf("%s %s", &nome, &sobrenome);

    printf("Ola %s %s, seja bem vindo!\n", nome, sobrenome);
    system("pause");

    return 0;
}
