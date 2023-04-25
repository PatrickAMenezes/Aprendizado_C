#include <stdio.h>
#include <stdlib.h>

// Lista concatenada e função que retorna ponteiro

struct lista{
    int valor;
    struct lista *proximo;
};

struct lista *procurarValor(struct lista *pLista, int valor){
    while(pLista != '\0'){
        if(pLista->valor == valor){
            return pLista;
        } else{
            pLista = pLista->proximo;
        }
    } return '\0';
};

int main()
{
    struct lista *procurarValor(struct lista *pLista, int valor);
    struct lista m1, m2, m3, *pnt = &m1;
    int val;

    m1.valor = 10, m2.valor = 20, m3.valor = 30;
    m1.proximo = &m2, m2.proximo = &m3, m3.proximo = '\0';

    printf("Insira o valor que voce quer procurar na lista: ");
    scanf("%i", &val);

    if(procurarValor(pnt , val) != '\0'){
        printf("\nO valor %i foi encontrado!\n", val);
    } else{
        printf("\nO valor %i nao foi encontrado!\n", val);
    }

    return 0;
}
