#include <stdio.h>
#include <stdlib.h>

int somarVetor(int vetor[], const int x){
    int soma = 0, *pnt;
    int *const finalVetor = vetor + x;

    for(pnt = vetor; pnt < finalVetor; ++pnt){
        soma += *pnt;
    } return soma;
}

int main()
{
    int somarVetor(int vetor[], const int x);
    int vet[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    printf("A soma dos membros do vetor e %i.\n",
           somarVetor(vet, 10));

    return 0;
}
