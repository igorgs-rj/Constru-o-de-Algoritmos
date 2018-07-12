#include <stdio.h>
#include <stdlib.h>

/*
Ler dois vetores de 20 posições e escrever outro vetor contendo, nas posições pares os valores do primeiro e nas posições impares os valores do segundo.
*/
void main(void)
{
    const int TAM = 3;
    int vet1[TAM], vet2[TAM], vet3[2*TAM];
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("Digite o valor %i do vetor: ",i);
        scanf("%i", &vet1[i]);
        printf("Digite o valor %i do vetor2: ",i);
        scanf("%i", &vet2[i]);

        vet3[2 * i] = vet1[i] ;
        vet3[2 *i + 1] = vet2[i];

    }
    for(i=0; i<2*TAM; i++)
    {
        printf("VET3 na posicao %i eh: %i \n", i, vet3[i]);
    }
}
