#include <stdio.h>
#include <stdlib.h>

int main()
{
    const TAM = 5;
    int vet[TAM], vet1[TAM], vet2[TAM*2], i, j;
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o vetor 1 posicao :  %i  ->  ", i);
            scanf("%i", &vet[i]);
        printf("Digite o vetor 2 posicao :  %i  ->  ", i);
            scanf("%i", &vet1[i]);
    }
    for (i = 0; i < TAM; i++)
    {
       if ((vet[i] % 2) == 0)
       {
           if ((i % 2) ==0)
           vet2[i] = vet[i];
           else
            vet2[i+1] = vet[i];
       }
       else
       {
           vet2[i] = vet[i];
       }
    }
    for (j = 0; j<=TAM*2; j++)
    {
        printf("%i", vet2[i]);
    }

    return 0;
}
